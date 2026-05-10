#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALSLIDECONTAINER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALSLIDECONTAINER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAddonsWidgets::SlideContainer so that we can call protected methods
class VirtualTextAddonsWidgetsSlideContainer final : public TextAddonsWidgets::SlideContainer {

  public:
    // Virtual class boolean flag
    bool isVirtualTextAddonsWidgetsSlideContainer = true;

    // Virtual class public types (including callbacks)
    using TextAddonsWidgets__SlideContainer_MetaObject_Callback = QMetaObject* (*)();
    using TextAddonsWidgets__SlideContainer_Metacast_Callback = void* (*)(TextAddonsWidgets__SlideContainer*, const char*);
    using TextAddonsWidgets__SlideContainer_Metacall_Callback = int (*)(TextAddonsWidgets__SlideContainer*, int, int, void**);
    using TextAddonsWidgets__SlideContainer_SizeHint_Callback = QSize* (*)();
    using TextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback = QSize* (*)();
    using TextAddonsWidgets__SlideContainer_ResizeEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QResizeEvent*);
    using TextAddonsWidgets__SlideContainer_EventFilter_Callback = bool (*)(TextAddonsWidgets__SlideContainer*, QObject*, QEvent*);
    using TextAddonsWidgets__SlideContainer_Event_Callback = bool (*)(TextAddonsWidgets__SlideContainer*, QEvent*);
    using TextAddonsWidgets__SlideContainer_PaintEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QPaintEvent*);
    using TextAddonsWidgets__SlideContainer_ChangeEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QEvent*);
    using TextAddonsWidgets__SlideContainer_InitStyleOption_Callback = void (*)(const TextAddonsWidgets__SlideContainer*, QStyleOptionFrame*);
    using TextAddonsWidgets__SlideContainer_DevType_Callback = int (*)();
    using TextAddonsWidgets__SlideContainer_SetVisible_Callback = void (*)(TextAddonsWidgets__SlideContainer*, bool);
    using TextAddonsWidgets__SlideContainer_HeightForWidth_Callback = int (*)(const TextAddonsWidgets__SlideContainer*, int);
    using TextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback = bool (*)();
    using TextAddonsWidgets__SlideContainer_PaintEngine_Callback = QPaintEngine* (*)();
    using TextAddonsWidgets__SlideContainer_MousePressEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMouseEvent*);
    using TextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMouseEvent*);
    using TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMouseEvent*);
    using TextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMouseEvent*);
    using TextAddonsWidgets__SlideContainer_WheelEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QWheelEvent*);
    using TextAddonsWidgets__SlideContainer_KeyPressEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QKeyEvent*);
    using TextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QKeyEvent*);
    using TextAddonsWidgets__SlideContainer_FocusInEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QFocusEvent*);
    using TextAddonsWidgets__SlideContainer_FocusOutEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QFocusEvent*);
    using TextAddonsWidgets__SlideContainer_EnterEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QEnterEvent*);
    using TextAddonsWidgets__SlideContainer_LeaveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QEvent*);
    using TextAddonsWidgets__SlideContainer_MoveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMoveEvent*);
    using TextAddonsWidgets__SlideContainer_CloseEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QCloseEvent*);
    using TextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QContextMenuEvent*);
    using TextAddonsWidgets__SlideContainer_TabletEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QTabletEvent*);
    using TextAddonsWidgets__SlideContainer_ActionEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QActionEvent*);
    using TextAddonsWidgets__SlideContainer_DragEnterEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QDragEnterEvent*);
    using TextAddonsWidgets__SlideContainer_DragMoveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QDragMoveEvent*);
    using TextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QDragLeaveEvent*);
    using TextAddonsWidgets__SlideContainer_DropEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QDropEvent*);
    using TextAddonsWidgets__SlideContainer_ShowEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QShowEvent*);
    using TextAddonsWidgets__SlideContainer_HideEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QHideEvent*);
    using TextAddonsWidgets__SlideContainer_NativeEvent_Callback = bool (*)(TextAddonsWidgets__SlideContainer*, libqt_string, void*, intptr_t*);
    using TextAddonsWidgets__SlideContainer_Metric_Callback = int (*)(const TextAddonsWidgets__SlideContainer*, int);
    using TextAddonsWidgets__SlideContainer_InitPainter_Callback = void (*)(const TextAddonsWidgets__SlideContainer*, QPainter*);
    using TextAddonsWidgets__SlideContainer_Redirected_Callback = QPaintDevice* (*)(const TextAddonsWidgets__SlideContainer*, QPoint*);
    using TextAddonsWidgets__SlideContainer_SharedPainter_Callback = QPainter* (*)();
    using TextAddonsWidgets__SlideContainer_InputMethodEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QInputMethodEvent*);
    using TextAddonsWidgets__SlideContainer_InputMethodQuery_Callback = QVariant* (*)(const TextAddonsWidgets__SlideContainer*, int);
    using TextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback = bool (*)(TextAddonsWidgets__SlideContainer*, bool);
    using TextAddonsWidgets__SlideContainer_TimerEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QTimerEvent*);
    using TextAddonsWidgets__SlideContainer_ChildEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QChildEvent*);
    using TextAddonsWidgets__SlideContainer_CustomEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QEvent*);
    using TextAddonsWidgets__SlideContainer_ConnectNotify_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMetaMethod*);
    using TextAddonsWidgets__SlideContainer_DisconnectNotify_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMetaMethod*);
    using TextAddonsWidgets__SlideContainer_DrawFrame_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QPainter*);
    using TextAddonsWidgets__SlideContainer_UpdateMicroFocus_Callback = void (*)();
    using TextAddonsWidgets__SlideContainer_Create_Callback = void (*)();
    using TextAddonsWidgets__SlideContainer_Destroy_Callback = void (*)();
    using TextAddonsWidgets__SlideContainer_FocusNextChild_Callback = bool (*)();
    using TextAddonsWidgets__SlideContainer_FocusPreviousChild_Callback = bool (*)();
    using TextAddonsWidgets__SlideContainer_Sender_Callback = QObject* (*)();
    using TextAddonsWidgets__SlideContainer_SenderSignalIndex_Callback = int (*)();
    using TextAddonsWidgets__SlideContainer_Receivers_Callback = int (*)(const TextAddonsWidgets__SlideContainer*, const char*);
    using TextAddonsWidgets__SlideContainer_IsSignalConnected_Callback = bool (*)(const TextAddonsWidgets__SlideContainer*, QMetaMethod*);
    using TextAddonsWidgets__SlideContainer_GetDecodedMetricF_Callback = double (*)(const TextAddonsWidgets__SlideContainer*, int, int);

  protected:
    // Instance callback storage
    TextAddonsWidgets__SlideContainer_MetaObject_Callback textaddonswidgets__slidecontainer_metaobject_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Metacast_Callback textaddonswidgets__slidecontainer_metacast_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Metacall_Callback textaddonswidgets__slidecontainer_metacall_callback = nullptr;
    TextAddonsWidgets__SlideContainer_SizeHint_Callback textaddonswidgets__slidecontainer_sizehint_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback textaddonswidgets__slidecontainer_minimumsizehint_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ResizeEvent_Callback textaddonswidgets__slidecontainer_resizeevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_EventFilter_Callback textaddonswidgets__slidecontainer_eventfilter_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Event_Callback textaddonswidgets__slidecontainer_event_callback = nullptr;
    TextAddonsWidgets__SlideContainer_PaintEvent_Callback textaddonswidgets__slidecontainer_paintevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ChangeEvent_Callback textaddonswidgets__slidecontainer_changeevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_InitStyleOption_Callback textaddonswidgets__slidecontainer_initstyleoption_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DevType_Callback textaddonswidgets__slidecontainer_devtype_callback = nullptr;
    TextAddonsWidgets__SlideContainer_SetVisible_Callback textaddonswidgets__slidecontainer_setvisible_callback = nullptr;
    TextAddonsWidgets__SlideContainer_HeightForWidth_Callback textaddonswidgets__slidecontainer_heightforwidth_callback = nullptr;
    TextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback textaddonswidgets__slidecontainer_hasheightforwidth_callback = nullptr;
    TextAddonsWidgets__SlideContainer_PaintEngine_Callback textaddonswidgets__slidecontainer_paintengine_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MousePressEvent_Callback textaddonswidgets__slidecontainer_mousepressevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback textaddonswidgets__slidecontainer_mousereleaseevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback textaddonswidgets__slidecontainer_mousedoubleclickevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback textaddonswidgets__slidecontainer_mousemoveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_WheelEvent_Callback textaddonswidgets__slidecontainer_wheelevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_KeyPressEvent_Callback textaddonswidgets__slidecontainer_keypressevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback textaddonswidgets__slidecontainer_keyreleaseevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_FocusInEvent_Callback textaddonswidgets__slidecontainer_focusinevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_FocusOutEvent_Callback textaddonswidgets__slidecontainer_focusoutevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_EnterEvent_Callback textaddonswidgets__slidecontainer_enterevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_LeaveEvent_Callback textaddonswidgets__slidecontainer_leaveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MoveEvent_Callback textaddonswidgets__slidecontainer_moveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_CloseEvent_Callback textaddonswidgets__slidecontainer_closeevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback textaddonswidgets__slidecontainer_contextmenuevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_TabletEvent_Callback textaddonswidgets__slidecontainer_tabletevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ActionEvent_Callback textaddonswidgets__slidecontainer_actionevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DragEnterEvent_Callback textaddonswidgets__slidecontainer_dragenterevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DragMoveEvent_Callback textaddonswidgets__slidecontainer_dragmoveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback textaddonswidgets__slidecontainer_dragleaveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DropEvent_Callback textaddonswidgets__slidecontainer_dropevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ShowEvent_Callback textaddonswidgets__slidecontainer_showevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_HideEvent_Callback textaddonswidgets__slidecontainer_hideevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_NativeEvent_Callback textaddonswidgets__slidecontainer_nativeevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Metric_Callback textaddonswidgets__slidecontainer_metric_callback = nullptr;
    TextAddonsWidgets__SlideContainer_InitPainter_Callback textaddonswidgets__slidecontainer_initpainter_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Redirected_Callback textaddonswidgets__slidecontainer_redirected_callback = nullptr;
    TextAddonsWidgets__SlideContainer_SharedPainter_Callback textaddonswidgets__slidecontainer_sharedpainter_callback = nullptr;
    TextAddonsWidgets__SlideContainer_InputMethodEvent_Callback textaddonswidgets__slidecontainer_inputmethodevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_InputMethodQuery_Callback textaddonswidgets__slidecontainer_inputmethodquery_callback = nullptr;
    TextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback textaddonswidgets__slidecontainer_focusnextprevchild_callback = nullptr;
    TextAddonsWidgets__SlideContainer_TimerEvent_Callback textaddonswidgets__slidecontainer_timerevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ChildEvent_Callback textaddonswidgets__slidecontainer_childevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_CustomEvent_Callback textaddonswidgets__slidecontainer_customevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ConnectNotify_Callback textaddonswidgets__slidecontainer_connectnotify_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DisconnectNotify_Callback textaddonswidgets__slidecontainer_disconnectnotify_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DrawFrame_Callback textaddonswidgets__slidecontainer_drawframe_callback = nullptr;
    TextAddonsWidgets__SlideContainer_UpdateMicroFocus_Callback textaddonswidgets__slidecontainer_updatemicrofocus_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Create_Callback textaddonswidgets__slidecontainer_create_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Destroy_Callback textaddonswidgets__slidecontainer_destroy_callback = nullptr;
    TextAddonsWidgets__SlideContainer_FocusNextChild_Callback textaddonswidgets__slidecontainer_focusnextchild_callback = nullptr;
    TextAddonsWidgets__SlideContainer_FocusPreviousChild_Callback textaddonswidgets__slidecontainer_focuspreviouschild_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Sender_Callback textaddonswidgets__slidecontainer_sender_callback = nullptr;
    TextAddonsWidgets__SlideContainer_SenderSignalIndex_Callback textaddonswidgets__slidecontainer_sendersignalindex_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Receivers_Callback textaddonswidgets__slidecontainer_receivers_callback = nullptr;
    TextAddonsWidgets__SlideContainer_IsSignalConnected_Callback textaddonswidgets__slidecontainer_issignalconnected_callback = nullptr;
    TextAddonsWidgets__SlideContainer_GetDecodedMetricF_Callback textaddonswidgets__slidecontainer_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textaddonswidgets__slidecontainer_metaobject_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_metacast_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_metacall_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_sizehint_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_minimumsizehint_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_resizeevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_eventfilter_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_event_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_paintevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_changeevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_initstyleoption_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_devtype_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_setvisible_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_heightforwidth_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_hasheightforwidth_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_paintengine_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_mousepressevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_mousereleaseevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_mousedoubleclickevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_mousemoveevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_wheelevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_keypressevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_keyreleaseevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_focusinevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_focusoutevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_enterevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_leaveevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_moveevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_closeevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_contextmenuevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_tabletevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_actionevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_dragenterevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_dragmoveevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_dragleaveevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_dropevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_showevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_hideevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_nativeevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_metric_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_initpainter_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_redirected_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_sharedpainter_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_inputmethodevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_inputmethodquery_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_focusnextprevchild_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_timerevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_childevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_customevent_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_connectnotify_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_disconnectnotify_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_drawframe_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_updatemicrofocus_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_create_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_destroy_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_focusnextchild_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_focuspreviouschild_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_sender_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_sendersignalindex_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_receivers_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_issignalconnected_isbase = false;
    mutable bool textaddonswidgets__slidecontainer_getdecodedmetricf_isbase = false;

  public:
    VirtualTextAddonsWidgetsSlideContainer(QWidget* parent) : TextAddonsWidgets::SlideContainer(parent) {};
    VirtualTextAddonsWidgetsSlideContainer() : TextAddonsWidgets::SlideContainer() {};

    // Callback setters
    inline void setTextAddonsWidgets__SlideContainer_MetaObject_Callback(TextAddonsWidgets__SlideContainer_MetaObject_Callback cb) { textaddonswidgets__slidecontainer_metaobject_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Metacast_Callback(TextAddonsWidgets__SlideContainer_Metacast_Callback cb) { textaddonswidgets__slidecontainer_metacast_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Metacall_Callback(TextAddonsWidgets__SlideContainer_Metacall_Callback cb) { textaddonswidgets__slidecontainer_metacall_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_SizeHint_Callback(TextAddonsWidgets__SlideContainer_SizeHint_Callback cb) { textaddonswidgets__slidecontainer_sizehint_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback(TextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback cb) { textaddonswidgets__slidecontainer_minimumsizehint_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_ResizeEvent_Callback(TextAddonsWidgets__SlideContainer_ResizeEvent_Callback cb) { textaddonswidgets__slidecontainer_resizeevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_EventFilter_Callback(TextAddonsWidgets__SlideContainer_EventFilter_Callback cb) { textaddonswidgets__slidecontainer_eventfilter_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Event_Callback(TextAddonsWidgets__SlideContainer_Event_Callback cb) { textaddonswidgets__slidecontainer_event_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_PaintEvent_Callback(TextAddonsWidgets__SlideContainer_PaintEvent_Callback cb) { textaddonswidgets__slidecontainer_paintevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_ChangeEvent_Callback(TextAddonsWidgets__SlideContainer_ChangeEvent_Callback cb) { textaddonswidgets__slidecontainer_changeevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_InitStyleOption_Callback(TextAddonsWidgets__SlideContainer_InitStyleOption_Callback cb) { textaddonswidgets__slidecontainer_initstyleoption_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_DevType_Callback(TextAddonsWidgets__SlideContainer_DevType_Callback cb) { textaddonswidgets__slidecontainer_devtype_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_SetVisible_Callback(TextAddonsWidgets__SlideContainer_SetVisible_Callback cb) { textaddonswidgets__slidecontainer_setvisible_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_HeightForWidth_Callback(TextAddonsWidgets__SlideContainer_HeightForWidth_Callback cb) { textaddonswidgets__slidecontainer_heightforwidth_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback(TextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback cb) { textaddonswidgets__slidecontainer_hasheightforwidth_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_PaintEngine_Callback(TextAddonsWidgets__SlideContainer_PaintEngine_Callback cb) { textaddonswidgets__slidecontainer_paintengine_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_MousePressEvent_Callback(TextAddonsWidgets__SlideContainer_MousePressEvent_Callback cb) { textaddonswidgets__slidecontainer_mousepressevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback(TextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback cb) { textaddonswidgets__slidecontainer_mousereleaseevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback(TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback cb) { textaddonswidgets__slidecontainer_mousedoubleclickevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback(TextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback cb) { textaddonswidgets__slidecontainer_mousemoveevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_WheelEvent_Callback(TextAddonsWidgets__SlideContainer_WheelEvent_Callback cb) { textaddonswidgets__slidecontainer_wheelevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_KeyPressEvent_Callback(TextAddonsWidgets__SlideContainer_KeyPressEvent_Callback cb) { textaddonswidgets__slidecontainer_keypressevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback(TextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback cb) { textaddonswidgets__slidecontainer_keyreleaseevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_FocusInEvent_Callback(TextAddonsWidgets__SlideContainer_FocusInEvent_Callback cb) { textaddonswidgets__slidecontainer_focusinevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_FocusOutEvent_Callback(TextAddonsWidgets__SlideContainer_FocusOutEvent_Callback cb) { textaddonswidgets__slidecontainer_focusoutevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_EnterEvent_Callback(TextAddonsWidgets__SlideContainer_EnterEvent_Callback cb) { textaddonswidgets__slidecontainer_enterevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_LeaveEvent_Callback(TextAddonsWidgets__SlideContainer_LeaveEvent_Callback cb) { textaddonswidgets__slidecontainer_leaveevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_MoveEvent_Callback(TextAddonsWidgets__SlideContainer_MoveEvent_Callback cb) { textaddonswidgets__slidecontainer_moveevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_CloseEvent_Callback(TextAddonsWidgets__SlideContainer_CloseEvent_Callback cb) { textaddonswidgets__slidecontainer_closeevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback(TextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback cb) { textaddonswidgets__slidecontainer_contextmenuevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_TabletEvent_Callback(TextAddonsWidgets__SlideContainer_TabletEvent_Callback cb) { textaddonswidgets__slidecontainer_tabletevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_ActionEvent_Callback(TextAddonsWidgets__SlideContainer_ActionEvent_Callback cb) { textaddonswidgets__slidecontainer_actionevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_DragEnterEvent_Callback(TextAddonsWidgets__SlideContainer_DragEnterEvent_Callback cb) { textaddonswidgets__slidecontainer_dragenterevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_DragMoveEvent_Callback(TextAddonsWidgets__SlideContainer_DragMoveEvent_Callback cb) { textaddonswidgets__slidecontainer_dragmoveevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback(TextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback cb) { textaddonswidgets__slidecontainer_dragleaveevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_DropEvent_Callback(TextAddonsWidgets__SlideContainer_DropEvent_Callback cb) { textaddonswidgets__slidecontainer_dropevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_ShowEvent_Callback(TextAddonsWidgets__SlideContainer_ShowEvent_Callback cb) { textaddonswidgets__slidecontainer_showevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_HideEvent_Callback(TextAddonsWidgets__SlideContainer_HideEvent_Callback cb) { textaddonswidgets__slidecontainer_hideevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_NativeEvent_Callback(TextAddonsWidgets__SlideContainer_NativeEvent_Callback cb) { textaddonswidgets__slidecontainer_nativeevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Metric_Callback(TextAddonsWidgets__SlideContainer_Metric_Callback cb) { textaddonswidgets__slidecontainer_metric_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_InitPainter_Callback(TextAddonsWidgets__SlideContainer_InitPainter_Callback cb) { textaddonswidgets__slidecontainer_initpainter_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Redirected_Callback(TextAddonsWidgets__SlideContainer_Redirected_Callback cb) { textaddonswidgets__slidecontainer_redirected_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_SharedPainter_Callback(TextAddonsWidgets__SlideContainer_SharedPainter_Callback cb) { textaddonswidgets__slidecontainer_sharedpainter_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_InputMethodEvent_Callback(TextAddonsWidgets__SlideContainer_InputMethodEvent_Callback cb) { textaddonswidgets__slidecontainer_inputmethodevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_InputMethodQuery_Callback(TextAddonsWidgets__SlideContainer_InputMethodQuery_Callback cb) { textaddonswidgets__slidecontainer_inputmethodquery_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback(TextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback cb) { textaddonswidgets__slidecontainer_focusnextprevchild_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_TimerEvent_Callback(TextAddonsWidgets__SlideContainer_TimerEvent_Callback cb) { textaddonswidgets__slidecontainer_timerevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_ChildEvent_Callback(TextAddonsWidgets__SlideContainer_ChildEvent_Callback cb) { textaddonswidgets__slidecontainer_childevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_CustomEvent_Callback(TextAddonsWidgets__SlideContainer_CustomEvent_Callback cb) { textaddonswidgets__slidecontainer_customevent_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_ConnectNotify_Callback(TextAddonsWidgets__SlideContainer_ConnectNotify_Callback cb) { textaddonswidgets__slidecontainer_connectnotify_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_DisconnectNotify_Callback(TextAddonsWidgets__SlideContainer_DisconnectNotify_Callback cb) { textaddonswidgets__slidecontainer_disconnectnotify_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_DrawFrame_Callback(TextAddonsWidgets__SlideContainer_DrawFrame_Callback cb) { textaddonswidgets__slidecontainer_drawframe_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_UpdateMicroFocus_Callback(TextAddonsWidgets__SlideContainer_UpdateMicroFocus_Callback cb) { textaddonswidgets__slidecontainer_updatemicrofocus_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Create_Callback(TextAddonsWidgets__SlideContainer_Create_Callback cb) { textaddonswidgets__slidecontainer_create_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Destroy_Callback(TextAddonsWidgets__SlideContainer_Destroy_Callback cb) { textaddonswidgets__slidecontainer_destroy_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_FocusNextChild_Callback(TextAddonsWidgets__SlideContainer_FocusNextChild_Callback cb) { textaddonswidgets__slidecontainer_focusnextchild_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_FocusPreviousChild_Callback(TextAddonsWidgets__SlideContainer_FocusPreviousChild_Callback cb) { textaddonswidgets__slidecontainer_focuspreviouschild_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Sender_Callback(TextAddonsWidgets__SlideContainer_Sender_Callback cb) { textaddonswidgets__slidecontainer_sender_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_SenderSignalIndex_Callback(TextAddonsWidgets__SlideContainer_SenderSignalIndex_Callback cb) { textaddonswidgets__slidecontainer_sendersignalindex_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_Receivers_Callback(TextAddonsWidgets__SlideContainer_Receivers_Callback cb) { textaddonswidgets__slidecontainer_receivers_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_IsSignalConnected_Callback(TextAddonsWidgets__SlideContainer_IsSignalConnected_Callback cb) { textaddonswidgets__slidecontainer_issignalconnected_callback = cb; }
    inline void setTextAddonsWidgets__SlideContainer_GetDecodedMetricF_Callback(TextAddonsWidgets__SlideContainer_GetDecodedMetricF_Callback cb) { textaddonswidgets__slidecontainer_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextAddonsWidgets__SlideContainer_MetaObject_IsBase(bool value) const { textaddonswidgets__slidecontainer_metaobject_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Metacast_IsBase(bool value) const { textaddonswidgets__slidecontainer_metacast_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Metacall_IsBase(bool value) const { textaddonswidgets__slidecontainer_metacall_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_SizeHint_IsBase(bool value) const { textaddonswidgets__slidecontainer_sizehint_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_MinimumSizeHint_IsBase(bool value) const { textaddonswidgets__slidecontainer_minimumsizehint_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_ResizeEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_resizeevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_EventFilter_IsBase(bool value) const { textaddonswidgets__slidecontainer_eventfilter_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Event_IsBase(bool value) const { textaddonswidgets__slidecontainer_event_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_PaintEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_paintevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_ChangeEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_changeevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_InitStyleOption_IsBase(bool value) const { textaddonswidgets__slidecontainer_initstyleoption_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_DevType_IsBase(bool value) const { textaddonswidgets__slidecontainer_devtype_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_SetVisible_IsBase(bool value) const { textaddonswidgets__slidecontainer_setvisible_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_HeightForWidth_IsBase(bool value) const { textaddonswidgets__slidecontainer_heightforwidth_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_HasHeightForWidth_IsBase(bool value) const { textaddonswidgets__slidecontainer_hasheightforwidth_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_PaintEngine_IsBase(bool value) const { textaddonswidgets__slidecontainer_paintengine_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_MousePressEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_mousepressevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_MouseReleaseEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_mousereleaseevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_mousedoubleclickevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_MouseMoveEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_mousemoveevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_WheelEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_wheelevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_KeyPressEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_keypressevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_KeyReleaseEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_keyreleaseevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_FocusInEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_focusinevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_FocusOutEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_focusoutevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_EnterEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_enterevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_LeaveEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_leaveevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_MoveEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_moveevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_CloseEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_closeevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_ContextMenuEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_contextmenuevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_TabletEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_tabletevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_ActionEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_actionevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_DragEnterEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_dragenterevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_DragMoveEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_dragmoveevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_DragLeaveEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_dragleaveevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_DropEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_dropevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_ShowEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_showevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_HideEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_hideevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_NativeEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_nativeevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Metric_IsBase(bool value) const { textaddonswidgets__slidecontainer_metric_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_InitPainter_IsBase(bool value) const { textaddonswidgets__slidecontainer_initpainter_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Redirected_IsBase(bool value) const { textaddonswidgets__slidecontainer_redirected_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_SharedPainter_IsBase(bool value) const { textaddonswidgets__slidecontainer_sharedpainter_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_InputMethodEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_inputmethodevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_InputMethodQuery_IsBase(bool value) const { textaddonswidgets__slidecontainer_inputmethodquery_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_FocusNextPrevChild_IsBase(bool value) const { textaddonswidgets__slidecontainer_focusnextprevchild_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_TimerEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_timerevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_ChildEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_childevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_CustomEvent_IsBase(bool value) const { textaddonswidgets__slidecontainer_customevent_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_ConnectNotify_IsBase(bool value) const { textaddonswidgets__slidecontainer_connectnotify_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_DisconnectNotify_IsBase(bool value) const { textaddonswidgets__slidecontainer_disconnectnotify_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_DrawFrame_IsBase(bool value) const { textaddonswidgets__slidecontainer_drawframe_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_UpdateMicroFocus_IsBase(bool value) const { textaddonswidgets__slidecontainer_updatemicrofocus_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Create_IsBase(bool value) const { textaddonswidgets__slidecontainer_create_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Destroy_IsBase(bool value) const { textaddonswidgets__slidecontainer_destroy_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_FocusNextChild_IsBase(bool value) const { textaddonswidgets__slidecontainer_focusnextchild_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_FocusPreviousChild_IsBase(bool value) const { textaddonswidgets__slidecontainer_focuspreviouschild_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Sender_IsBase(bool value) const { textaddonswidgets__slidecontainer_sender_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_SenderSignalIndex_IsBase(bool value) const { textaddonswidgets__slidecontainer_sendersignalindex_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_Receivers_IsBase(bool value) const { textaddonswidgets__slidecontainer_receivers_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_IsSignalConnected_IsBase(bool value) const { textaddonswidgets__slidecontainer_issignalconnected_isbase = value; }
    inline void setTextAddonsWidgets__SlideContainer_GetDecodedMetricF_IsBase(bool value) const { textaddonswidgets__slidecontainer_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textaddonswidgets__slidecontainer_metaobject_isbase) {
            textaddonswidgets__slidecontainer_metaobject_isbase = false;
            return TextAddonsWidgets__SlideContainer::metaObject();
        }
        auto metaobject_cb = textaddonswidgets__slidecontainer_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textaddonswidgets__slidecontainer_metacast_isbase) {
            textaddonswidgets__slidecontainer_metacast_isbase = false;
            return TextAddonsWidgets__SlideContainer::qt_metacast(param1);
        }
        auto metacast_cb = textaddonswidgets__slidecontainer_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textaddonswidgets__slidecontainer_metacall_isbase) {
            textaddonswidgets__slidecontainer_metacall_isbase = false;
            return TextAddonsWidgets__SlideContainer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textaddonswidgets__slidecontainer_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textaddonswidgets__slidecontainer_sizehint_isbase) {
            textaddonswidgets__slidecontainer_sizehint_isbase = false;
            return TextAddonsWidgets__SlideContainer::sizeHint();
        }
        auto sizehint_cb = textaddonswidgets__slidecontainer_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textaddonswidgets__slidecontainer_minimumsizehint_isbase) {
            textaddonswidgets__slidecontainer_minimumsizehint_isbase = false;
            return TextAddonsWidgets__SlideContainer::minimumSizeHint();
        }
        auto minimumsizehint_cb = textaddonswidgets__slidecontainer_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textaddonswidgets__slidecontainer_resizeevent_isbase) {
            textaddonswidgets__slidecontainer_resizeevent_isbase = false;
            TextAddonsWidgets__SlideContainer::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = textaddonswidgets__slidecontainer_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* event) override {
        if (textaddonswidgets__slidecontainer_eventfilter_isbase) {
            textaddonswidgets__slidecontainer_eventfilter_isbase = false;
            return TextAddonsWidgets__SlideContainer::eventFilter(param1, event);
        }
        auto eventfilter_cb = textaddonswidgets__slidecontainer_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::eventFilter(param1, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textaddonswidgets__slidecontainer_event_isbase) {
            textaddonswidgets__slidecontainer_event_isbase = false;
            return TextAddonsWidgets__SlideContainer::event(e);
        }
        auto event_cb = textaddonswidgets__slidecontainer_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (textaddonswidgets__slidecontainer_paintevent_isbase) {
            textaddonswidgets__slidecontainer_paintevent_isbase = false;
            TextAddonsWidgets__SlideContainer::paintEvent(param1);
            return;
        }
        auto paintevent_cb = textaddonswidgets__slidecontainer_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textaddonswidgets__slidecontainer_changeevent_isbase) {
            textaddonswidgets__slidecontainer_changeevent_isbase = false;
            TextAddonsWidgets__SlideContainer::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textaddonswidgets__slidecontainer_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textaddonswidgets__slidecontainer_initstyleoption_isbase) {
            textaddonswidgets__slidecontainer_initstyleoption_isbase = false;
            TextAddonsWidgets__SlideContainer::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = textaddonswidgets__slidecontainer_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textaddonswidgets__slidecontainer_devtype_isbase) {
            textaddonswidgets__slidecontainer_devtype_isbase = false;
            return TextAddonsWidgets__SlideContainer::devType();
        }
        auto devtype_cb = textaddonswidgets__slidecontainer_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textaddonswidgets__slidecontainer_setvisible_isbase) {
            textaddonswidgets__slidecontainer_setvisible_isbase = false;
            TextAddonsWidgets__SlideContainer::setVisible(visible);
            return;
        }
        auto setvisible_cb = textaddonswidgets__slidecontainer_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textaddonswidgets__slidecontainer_heightforwidth_isbase) {
            textaddonswidgets__slidecontainer_heightforwidth_isbase = false;
            return TextAddonsWidgets__SlideContainer::heightForWidth(param1);
        }
        auto heightforwidth_cb = textaddonswidgets__slidecontainer_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textaddonswidgets__slidecontainer_hasheightforwidth_isbase) {
            textaddonswidgets__slidecontainer_hasheightforwidth_isbase = false;
            return TextAddonsWidgets__SlideContainer::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textaddonswidgets__slidecontainer_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textaddonswidgets__slidecontainer_paintengine_isbase) {
            textaddonswidgets__slidecontainer_paintengine_isbase = false;
            return TextAddonsWidgets__SlideContainer::paintEngine();
        }
        auto paintengine_cb = textaddonswidgets__slidecontainer_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textaddonswidgets__slidecontainer_mousepressevent_isbase) {
            textaddonswidgets__slidecontainer_mousepressevent_isbase = false;
            TextAddonsWidgets__SlideContainer::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textaddonswidgets__slidecontainer_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textaddonswidgets__slidecontainer_mousereleaseevent_isbase) {
            textaddonswidgets__slidecontainer_mousereleaseevent_isbase = false;
            TextAddonsWidgets__SlideContainer::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textaddonswidgets__slidecontainer_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textaddonswidgets__slidecontainer_mousedoubleclickevent_isbase) {
            textaddonswidgets__slidecontainer_mousedoubleclickevent_isbase = false;
            TextAddonsWidgets__SlideContainer::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textaddonswidgets__slidecontainer_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textaddonswidgets__slidecontainer_mousemoveevent_isbase) {
            textaddonswidgets__slidecontainer_mousemoveevent_isbase = false;
            TextAddonsWidgets__SlideContainer::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textaddonswidgets__slidecontainer_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textaddonswidgets__slidecontainer_wheelevent_isbase) {
            textaddonswidgets__slidecontainer_wheelevent_isbase = false;
            TextAddonsWidgets__SlideContainer::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textaddonswidgets__slidecontainer_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textaddonswidgets__slidecontainer_keypressevent_isbase) {
            textaddonswidgets__slidecontainer_keypressevent_isbase = false;
            TextAddonsWidgets__SlideContainer::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textaddonswidgets__slidecontainer_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textaddonswidgets__slidecontainer_keyreleaseevent_isbase) {
            textaddonswidgets__slidecontainer_keyreleaseevent_isbase = false;
            TextAddonsWidgets__SlideContainer::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textaddonswidgets__slidecontainer_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textaddonswidgets__slidecontainer_focusinevent_isbase) {
            textaddonswidgets__slidecontainer_focusinevent_isbase = false;
            TextAddonsWidgets__SlideContainer::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textaddonswidgets__slidecontainer_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textaddonswidgets__slidecontainer_focusoutevent_isbase) {
            textaddonswidgets__slidecontainer_focusoutevent_isbase = false;
            TextAddonsWidgets__SlideContainer::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textaddonswidgets__slidecontainer_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textaddonswidgets__slidecontainer_enterevent_isbase) {
            textaddonswidgets__slidecontainer_enterevent_isbase = false;
            TextAddonsWidgets__SlideContainer::enterEvent(event);
            return;
        }
        auto enterevent_cb = textaddonswidgets__slidecontainer_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textaddonswidgets__slidecontainer_leaveevent_isbase) {
            textaddonswidgets__slidecontainer_leaveevent_isbase = false;
            TextAddonsWidgets__SlideContainer::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textaddonswidgets__slidecontainer_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textaddonswidgets__slidecontainer_moveevent_isbase) {
            textaddonswidgets__slidecontainer_moveevent_isbase = false;
            TextAddonsWidgets__SlideContainer::moveEvent(event);
            return;
        }
        auto moveevent_cb = textaddonswidgets__slidecontainer_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textaddonswidgets__slidecontainer_closeevent_isbase) {
            textaddonswidgets__slidecontainer_closeevent_isbase = false;
            TextAddonsWidgets__SlideContainer::closeEvent(event);
            return;
        }
        auto closeevent_cb = textaddonswidgets__slidecontainer_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textaddonswidgets__slidecontainer_contextmenuevent_isbase) {
            textaddonswidgets__slidecontainer_contextmenuevent_isbase = false;
            TextAddonsWidgets__SlideContainer::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textaddonswidgets__slidecontainer_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textaddonswidgets__slidecontainer_tabletevent_isbase) {
            textaddonswidgets__slidecontainer_tabletevent_isbase = false;
            TextAddonsWidgets__SlideContainer::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textaddonswidgets__slidecontainer_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textaddonswidgets__slidecontainer_actionevent_isbase) {
            textaddonswidgets__slidecontainer_actionevent_isbase = false;
            TextAddonsWidgets__SlideContainer::actionEvent(event);
            return;
        }
        auto actionevent_cb = textaddonswidgets__slidecontainer_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textaddonswidgets__slidecontainer_dragenterevent_isbase) {
            textaddonswidgets__slidecontainer_dragenterevent_isbase = false;
            TextAddonsWidgets__SlideContainer::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textaddonswidgets__slidecontainer_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textaddonswidgets__slidecontainer_dragmoveevent_isbase) {
            textaddonswidgets__slidecontainer_dragmoveevent_isbase = false;
            TextAddonsWidgets__SlideContainer::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textaddonswidgets__slidecontainer_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textaddonswidgets__slidecontainer_dragleaveevent_isbase) {
            textaddonswidgets__slidecontainer_dragleaveevent_isbase = false;
            TextAddonsWidgets__SlideContainer::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textaddonswidgets__slidecontainer_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textaddonswidgets__slidecontainer_dropevent_isbase) {
            textaddonswidgets__slidecontainer_dropevent_isbase = false;
            TextAddonsWidgets__SlideContainer::dropEvent(event);
            return;
        }
        auto dropevent_cb = textaddonswidgets__slidecontainer_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textaddonswidgets__slidecontainer_showevent_isbase) {
            textaddonswidgets__slidecontainer_showevent_isbase = false;
            TextAddonsWidgets__SlideContainer::showEvent(event);
            return;
        }
        auto showevent_cb = textaddonswidgets__slidecontainer_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textaddonswidgets__slidecontainer_hideevent_isbase) {
            textaddonswidgets__slidecontainer_hideevent_isbase = false;
            TextAddonsWidgets__SlideContainer::hideEvent(event);
            return;
        }
        auto hideevent_cb = textaddonswidgets__slidecontainer_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textaddonswidgets__slidecontainer_nativeevent_isbase) {
            textaddonswidgets__slidecontainer_nativeevent_isbase = false;
            return TextAddonsWidgets__SlideContainer::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textaddonswidgets__slidecontainer_nativeevent_callback;
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
        return TextAddonsWidgets__SlideContainer::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textaddonswidgets__slidecontainer_metric_isbase) {
            textaddonswidgets__slidecontainer_metric_isbase = false;
            return TextAddonsWidgets__SlideContainer::metric(param1);
        }
        auto metric_cb = textaddonswidgets__slidecontainer_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textaddonswidgets__slidecontainer_initpainter_isbase) {
            textaddonswidgets__slidecontainer_initpainter_isbase = false;
            TextAddonsWidgets__SlideContainer::initPainter(painter);
            return;
        }
        auto initpainter_cb = textaddonswidgets__slidecontainer_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textaddonswidgets__slidecontainer_redirected_isbase) {
            textaddonswidgets__slidecontainer_redirected_isbase = false;
            return TextAddonsWidgets__SlideContainer::redirected(offset);
        }
        auto redirected_cb = textaddonswidgets__slidecontainer_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textaddonswidgets__slidecontainer_sharedpainter_isbase) {
            textaddonswidgets__slidecontainer_sharedpainter_isbase = false;
            return TextAddonsWidgets__SlideContainer::sharedPainter();
        }
        auto sharedpainter_cb = textaddonswidgets__slidecontainer_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textaddonswidgets__slidecontainer_inputmethodevent_isbase) {
            textaddonswidgets__slidecontainer_inputmethodevent_isbase = false;
            TextAddonsWidgets__SlideContainer::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textaddonswidgets__slidecontainer_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textaddonswidgets__slidecontainer_inputmethodquery_isbase) {
            textaddonswidgets__slidecontainer_inputmethodquery_isbase = false;
            return TextAddonsWidgets__SlideContainer::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textaddonswidgets__slidecontainer_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textaddonswidgets__slidecontainer_focusnextprevchild_isbase) {
            textaddonswidgets__slidecontainer_focusnextprevchild_isbase = false;
            return TextAddonsWidgets__SlideContainer::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textaddonswidgets__slidecontainer_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textaddonswidgets__slidecontainer_timerevent_isbase) {
            textaddonswidgets__slidecontainer_timerevent_isbase = false;
            TextAddonsWidgets__SlideContainer::timerEvent(event);
            return;
        }
        auto timerevent_cb = textaddonswidgets__slidecontainer_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textaddonswidgets__slidecontainer_childevent_isbase) {
            textaddonswidgets__slidecontainer_childevent_isbase = false;
            TextAddonsWidgets__SlideContainer::childEvent(event);
            return;
        }
        auto childevent_cb = textaddonswidgets__slidecontainer_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textaddonswidgets__slidecontainer_customevent_isbase) {
            textaddonswidgets__slidecontainer_customevent_isbase = false;
            TextAddonsWidgets__SlideContainer::customEvent(event);
            return;
        }
        auto customevent_cb = textaddonswidgets__slidecontainer_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textaddonswidgets__slidecontainer_connectnotify_isbase) {
            textaddonswidgets__slidecontainer_connectnotify_isbase = false;
            TextAddonsWidgets__SlideContainer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textaddonswidgets__slidecontainer_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textaddonswidgets__slidecontainer_disconnectnotify_isbase) {
            textaddonswidgets__slidecontainer_disconnectnotify_isbase = false;
            TextAddonsWidgets__SlideContainer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textaddonswidgets__slidecontainer_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (textaddonswidgets__slidecontainer_drawframe_isbase) {
            textaddonswidgets__slidecontainer_drawframe_isbase = false;
            TextAddonsWidgets__SlideContainer::drawFrame(param1);
            return;
        }
        auto drawframe_cb = textaddonswidgets__slidecontainer_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textaddonswidgets__slidecontainer_updatemicrofocus_isbase) {
            textaddonswidgets__slidecontainer_updatemicrofocus_isbase = false;
            TextAddonsWidgets__SlideContainer::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textaddonswidgets__slidecontainer_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextAddonsWidgets__SlideContainer::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textaddonswidgets__slidecontainer_create_isbase) {
            textaddonswidgets__slidecontainer_create_isbase = false;
            TextAddonsWidgets__SlideContainer::create();
            return;
        }
        auto create_cb = textaddonswidgets__slidecontainer_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextAddonsWidgets__SlideContainer::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textaddonswidgets__slidecontainer_destroy_isbase) {
            textaddonswidgets__slidecontainer_destroy_isbase = false;
            TextAddonsWidgets__SlideContainer::destroy();
            return;
        }
        auto destroy_cb = textaddonswidgets__slidecontainer_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextAddonsWidgets__SlideContainer::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textaddonswidgets__slidecontainer_focusnextchild_isbase) {
            textaddonswidgets__slidecontainer_focusnextchild_isbase = false;
            return TextAddonsWidgets__SlideContainer::focusNextChild();
        }
        auto focusnextchild_cb = textaddonswidgets__slidecontainer_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textaddonswidgets__slidecontainer_focuspreviouschild_isbase) {
            textaddonswidgets__slidecontainer_focuspreviouschild_isbase = false;
            return TextAddonsWidgets__SlideContainer::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textaddonswidgets__slidecontainer_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textaddonswidgets__slidecontainer_sender_isbase) {
            textaddonswidgets__slidecontainer_sender_isbase = false;
            return TextAddonsWidgets__SlideContainer::sender();
        }
        auto sender_cb = textaddonswidgets__slidecontainer_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textaddonswidgets__slidecontainer_sendersignalindex_isbase) {
            textaddonswidgets__slidecontainer_sendersignalindex_isbase = false;
            return TextAddonsWidgets__SlideContainer::senderSignalIndex();
        }
        auto sendersignalindex_cb = textaddonswidgets__slidecontainer_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textaddonswidgets__slidecontainer_receivers_isbase) {
            textaddonswidgets__slidecontainer_receivers_isbase = false;
            return TextAddonsWidgets__SlideContainer::receivers(signal);
        }
        auto receivers_cb = textaddonswidgets__slidecontainer_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textaddonswidgets__slidecontainer_issignalconnected_isbase) {
            textaddonswidgets__slidecontainer_issignalconnected_isbase = false;
            return TextAddonsWidgets__SlideContainer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textaddonswidgets__slidecontainer_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textaddonswidgets__slidecontainer_getdecodedmetricf_isbase) {
            textaddonswidgets__slidecontainer_getdecodedmetricf_isbase = false;
            return TextAddonsWidgets__SlideContainer::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textaddonswidgets__slidecontainer_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextAddonsWidgets__SlideContainer_ResizeEvent(TextAddonsWidgets::SlideContainer* self, QResizeEvent* param1);
    friend void TextAddonsWidgets__SlideContainer_SuperResizeEvent(TextAddonsWidgets::SlideContainer* self, QResizeEvent* param1);
    friend bool TextAddonsWidgets__SlideContainer_EventFilter(TextAddonsWidgets::SlideContainer* self, QObject* param1, QEvent* event);
    friend bool TextAddonsWidgets__SlideContainer_SuperEventFilter(TextAddonsWidgets::SlideContainer* self, QObject* param1, QEvent* event);
    friend bool TextAddonsWidgets__SlideContainer_Event(TextAddonsWidgets::SlideContainer* self, QEvent* e);
    friend bool TextAddonsWidgets__SlideContainer_SuperEvent(TextAddonsWidgets::SlideContainer* self, QEvent* e);
    friend void TextAddonsWidgets__SlideContainer_PaintEvent(TextAddonsWidgets::SlideContainer* self, QPaintEvent* param1);
    friend void TextAddonsWidgets__SlideContainer_SuperPaintEvent(TextAddonsWidgets::SlideContainer* self, QPaintEvent* param1);
    friend void TextAddonsWidgets__SlideContainer_ChangeEvent(TextAddonsWidgets::SlideContainer* self, QEvent* param1);
    friend void TextAddonsWidgets__SlideContainer_SuperChangeEvent(TextAddonsWidgets::SlideContainer* self, QEvent* param1);
    friend void TextAddonsWidgets__SlideContainer_InitStyleOption(const TextAddonsWidgets::SlideContainer* self, QStyleOptionFrame* option);
    friend void TextAddonsWidgets__SlideContainer_SuperInitStyleOption(const TextAddonsWidgets::SlideContainer* self, QStyleOptionFrame* option);
    friend void TextAddonsWidgets__SlideContainer_MousePressEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMousePressEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_MouseReleaseEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMouseReleaseEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMouseDoubleClickEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_MouseMoveEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMouseMoveEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_WheelEvent(TextAddonsWidgets::SlideContainer* self, QWheelEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperWheelEvent(TextAddonsWidgets::SlideContainer* self, QWheelEvent* event);
    friend void TextAddonsWidgets__SlideContainer_KeyPressEvent(TextAddonsWidgets::SlideContainer* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperKeyPressEvent(TextAddonsWidgets::SlideContainer* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SlideContainer_KeyReleaseEvent(TextAddonsWidgets::SlideContainer* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperKeyReleaseEvent(TextAddonsWidgets::SlideContainer* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SlideContainer_FocusInEvent(TextAddonsWidgets::SlideContainer* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperFocusInEvent(TextAddonsWidgets::SlideContainer* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SlideContainer_FocusOutEvent(TextAddonsWidgets::SlideContainer* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperFocusOutEvent(TextAddonsWidgets::SlideContainer* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SlideContainer_EnterEvent(TextAddonsWidgets::SlideContainer* self, QEnterEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperEnterEvent(TextAddonsWidgets::SlideContainer* self, QEnterEvent* event);
    friend void TextAddonsWidgets__SlideContainer_LeaveEvent(TextAddonsWidgets::SlideContainer* self, QEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperLeaveEvent(TextAddonsWidgets::SlideContainer* self, QEvent* event);
    friend void TextAddonsWidgets__SlideContainer_MoveEvent(TextAddonsWidgets::SlideContainer* self, QMoveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMoveEvent(TextAddonsWidgets::SlideContainer* self, QMoveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_CloseEvent(TextAddonsWidgets::SlideContainer* self, QCloseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperCloseEvent(TextAddonsWidgets::SlideContainer* self, QCloseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_ContextMenuEvent(TextAddonsWidgets::SlideContainer* self, QContextMenuEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperContextMenuEvent(TextAddonsWidgets::SlideContainer* self, QContextMenuEvent* event);
    friend void TextAddonsWidgets__SlideContainer_TabletEvent(TextAddonsWidgets::SlideContainer* self, QTabletEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperTabletEvent(TextAddonsWidgets::SlideContainer* self, QTabletEvent* event);
    friend void TextAddonsWidgets__SlideContainer_ActionEvent(TextAddonsWidgets::SlideContainer* self, QActionEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperActionEvent(TextAddonsWidgets::SlideContainer* self, QActionEvent* event);
    friend void TextAddonsWidgets__SlideContainer_DragEnterEvent(TextAddonsWidgets::SlideContainer* self, QDragEnterEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperDragEnterEvent(TextAddonsWidgets::SlideContainer* self, QDragEnterEvent* event);
    friend void TextAddonsWidgets__SlideContainer_DragMoveEvent(TextAddonsWidgets::SlideContainer* self, QDragMoveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperDragMoveEvent(TextAddonsWidgets::SlideContainer* self, QDragMoveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_DragLeaveEvent(TextAddonsWidgets::SlideContainer* self, QDragLeaveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperDragLeaveEvent(TextAddonsWidgets::SlideContainer* self, QDragLeaveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_DropEvent(TextAddonsWidgets::SlideContainer* self, QDropEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperDropEvent(TextAddonsWidgets::SlideContainer* self, QDropEvent* event);
    friend void TextAddonsWidgets__SlideContainer_ShowEvent(TextAddonsWidgets::SlideContainer* self, QShowEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperShowEvent(TextAddonsWidgets::SlideContainer* self, QShowEvent* event);
    friend void TextAddonsWidgets__SlideContainer_HideEvent(TextAddonsWidgets::SlideContainer* self, QHideEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperHideEvent(TextAddonsWidgets::SlideContainer* self, QHideEvent* event);
    friend bool TextAddonsWidgets__SlideContainer_NativeEvent(TextAddonsWidgets::SlideContainer* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextAddonsWidgets__SlideContainer_SuperNativeEvent(TextAddonsWidgets::SlideContainer* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextAddonsWidgets__SlideContainer_Metric(const TextAddonsWidgets::SlideContainer* self, int param1);
    friend int TextAddonsWidgets__SlideContainer_SuperMetric(const TextAddonsWidgets::SlideContainer* self, int param1);
    friend void TextAddonsWidgets__SlideContainer_InitPainter(const TextAddonsWidgets::SlideContainer* self, QPainter* painter);
    friend void TextAddonsWidgets__SlideContainer_SuperInitPainter(const TextAddonsWidgets::SlideContainer* self, QPainter* painter);
    friend QPaintDevice* TextAddonsWidgets__SlideContainer_Redirected(const TextAddonsWidgets::SlideContainer* self, QPoint* offset);
    friend QPaintDevice* TextAddonsWidgets__SlideContainer_SuperRedirected(const TextAddonsWidgets::SlideContainer* self, QPoint* offset);
    friend QPainter* TextAddonsWidgets__SlideContainer_SharedPainter(const TextAddonsWidgets::SlideContainer* self);
    friend QPainter* TextAddonsWidgets__SlideContainer_SuperSharedPainter(const TextAddonsWidgets::SlideContainer* self);
    friend void TextAddonsWidgets__SlideContainer_InputMethodEvent(TextAddonsWidgets::SlideContainer* self, QInputMethodEvent* param1);
    friend void TextAddonsWidgets__SlideContainer_SuperInputMethodEvent(TextAddonsWidgets::SlideContainer* self, QInputMethodEvent* param1);
    friend bool TextAddonsWidgets__SlideContainer_FocusNextPrevChild(TextAddonsWidgets::SlideContainer* self, bool next);
    friend bool TextAddonsWidgets__SlideContainer_SuperFocusNextPrevChild(TextAddonsWidgets::SlideContainer* self, bool next);
    friend void TextAddonsWidgets__SlideContainer_TimerEvent(TextAddonsWidgets::SlideContainer* self, QTimerEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperTimerEvent(TextAddonsWidgets::SlideContainer* self, QTimerEvent* event);
    friend void TextAddonsWidgets__SlideContainer_ChildEvent(TextAddonsWidgets::SlideContainer* self, QChildEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperChildEvent(TextAddonsWidgets::SlideContainer* self, QChildEvent* event);
    friend void TextAddonsWidgets__SlideContainer_CustomEvent(TextAddonsWidgets::SlideContainer* self, QEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperCustomEvent(TextAddonsWidgets::SlideContainer* self, QEvent* event);
    friend void TextAddonsWidgets__SlideContainer_ConnectNotify(TextAddonsWidgets::SlideContainer* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SlideContainer_SuperConnectNotify(TextAddonsWidgets::SlideContainer* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SlideContainer_DisconnectNotify(TextAddonsWidgets::SlideContainer* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SlideContainer_SuperDisconnectNotify(TextAddonsWidgets::SlideContainer* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SlideContainer_DrawFrame(TextAddonsWidgets::SlideContainer* self, QPainter* param1);
    friend void TextAddonsWidgets__SlideContainer_SuperDrawFrame(TextAddonsWidgets::SlideContainer* self, QPainter* param1);
    friend void TextAddonsWidgets__SlideContainer_UpdateMicroFocus(TextAddonsWidgets::SlideContainer* self);
    friend void TextAddonsWidgets__SlideContainer_SuperUpdateMicroFocus(TextAddonsWidgets::SlideContainer* self);
    friend void TextAddonsWidgets__SlideContainer_Create(TextAddonsWidgets::SlideContainer* self);
    friend void TextAddonsWidgets__SlideContainer_SuperCreate(TextAddonsWidgets::SlideContainer* self);
    friend void TextAddonsWidgets__SlideContainer_Destroy(TextAddonsWidgets::SlideContainer* self);
    friend void TextAddonsWidgets__SlideContainer_SuperDestroy(TextAddonsWidgets::SlideContainer* self);
    friend bool TextAddonsWidgets__SlideContainer_FocusNextChild(TextAddonsWidgets::SlideContainer* self);
    friend bool TextAddonsWidgets__SlideContainer_SuperFocusNextChild(TextAddonsWidgets::SlideContainer* self);
    friend bool TextAddonsWidgets__SlideContainer_FocusPreviousChild(TextAddonsWidgets::SlideContainer* self);
    friend bool TextAddonsWidgets__SlideContainer_SuperFocusPreviousChild(TextAddonsWidgets::SlideContainer* self);
    friend QObject* TextAddonsWidgets__SlideContainer_Sender(const TextAddonsWidgets::SlideContainer* self);
    friend QObject* TextAddonsWidgets__SlideContainer_SuperSender(const TextAddonsWidgets::SlideContainer* self);
    friend int TextAddonsWidgets__SlideContainer_SenderSignalIndex(const TextAddonsWidgets::SlideContainer* self);
    friend int TextAddonsWidgets__SlideContainer_SuperSenderSignalIndex(const TextAddonsWidgets::SlideContainer* self);
    friend int TextAddonsWidgets__SlideContainer_Receivers(const TextAddonsWidgets::SlideContainer* self, const char* signal);
    friend int TextAddonsWidgets__SlideContainer_SuperReceivers(const TextAddonsWidgets::SlideContainer* self, const char* signal);
    friend bool TextAddonsWidgets__SlideContainer_IsSignalConnected(const TextAddonsWidgets::SlideContainer* self, const QMetaMethod* signal);
    friend bool TextAddonsWidgets__SlideContainer_SuperIsSignalConnected(const TextAddonsWidgets::SlideContainer* self, const QMetaMethod* signal);
    friend double TextAddonsWidgets__SlideContainer_GetDecodedMetricF(const TextAddonsWidgets::SlideContainer* self, int metricA, int metricB);
    friend double TextAddonsWidgets__SlideContainer_SuperGetDecodedMetricF(const TextAddonsWidgets::SlideContainer* self, int metricA, int metricB);
};

#endif
