#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTBROWSER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTBROWSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextBrowser so that we can call protected methods
class VirtualTextCustomEditorRichTextBrowser final : public TextCustomEditor::RichTextBrowser {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorRichTextBrowser = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__RichTextBrowser_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__RichTextBrowser_Metacast_Callback = void* (*)(TextCustomEditor__RichTextBrowser*, const char*);
    using TextCustomEditor__RichTextBrowser_Metacall_Callback = int (*)(TextCustomEditor__RichTextBrowser*, int, int, void**);
    using TextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMenu*, QPoint*);
    using TextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QContextMenuEvent*);
    using TextCustomEditor__RichTextBrowser_Event_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowser_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QWheelEvent*);
    using TextCustomEditor__RichTextBrowser_LoadResource_Callback = QVariant* (*)(TextCustomEditor__RichTextBrowser*, int, QUrl*);
    using TextCustomEditor__RichTextBrowser_Backward_Callback = void (*)();
    using TextCustomEditor__RichTextBrowser_Forward_Callback = void (*)();
    using TextCustomEditor__RichTextBrowser_Home_Callback = void (*)();
    using TextCustomEditor__RichTextBrowser_Reload_Callback = void (*)();
    using TextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowser_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowser_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, bool);
    using TextCustomEditor__RichTextBrowser_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QPaintEvent*);
    using TextCustomEditor__RichTextBrowser_DoSetSource_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QUrl*, int);
    using TextCustomEditor__RichTextBrowser_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextBrowser*, int);
    using TextCustomEditor__RichTextBrowser_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QTimerEvent*);
    using TextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowser_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QResizeEvent*);
    using TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowser_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QDragEnterEvent*);
    using TextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextBrowser_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QDragMoveEvent*);
    using TextCustomEditor__RichTextBrowser_DropEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QDropEvent*);
    using TextCustomEditor__RichTextBrowser_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowser_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QShowEvent*);
    using TextCustomEditor__RichTextBrowser_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using TextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback = bool (*)(const TextCustomEditor__RichTextBrowser*, QMimeData*);
    using TextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMimeData*);
    using TextCustomEditor__RichTextBrowser_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QInputMethodEvent*);
    using TextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback = void (*)(TextCustomEditor__RichTextBrowser*, int, int);
    using TextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QTextCursor*);
    using TextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextBrowser_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextBrowser_SetupViewport_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QWidget*);
    using TextCustomEditor__RichTextBrowser_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, QObject*, QEvent*);
    using TextCustomEditor__RichTextBrowser_ViewportEvent_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextBrowser_InitStyleOption_Callback = void (*)(const TextCustomEditor__RichTextBrowser*, QStyleOptionFrame*);
    using TextCustomEditor__RichTextBrowser_DevType_Callback = int (*)();
    using TextCustomEditor__RichTextBrowser_SetVisible_Callback = void (*)(TextCustomEditor__RichTextBrowser*, bool);
    using TextCustomEditor__RichTextBrowser_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextBrowser*, int);
    using TextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowser_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__RichTextBrowser_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QEnterEvent*);
    using TextCustomEditor__RichTextBrowser_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMoveEvent*);
    using TextCustomEditor__RichTextBrowser_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QCloseEvent*);
    using TextCustomEditor__RichTextBrowser_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QTabletEvent*);
    using TextCustomEditor__RichTextBrowser_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QActionEvent*);
    using TextCustomEditor__RichTextBrowser_HideEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QHideEvent*);
    using TextCustomEditor__RichTextBrowser_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextBrowser_Metric_Callback = int (*)(const TextCustomEditor__RichTextBrowser*, int);
    using TextCustomEditor__RichTextBrowser_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextBrowser*, QPainter*);
    using TextCustomEditor__RichTextBrowser_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextBrowser*, QPoint*);
    using TextCustomEditor__RichTextBrowser_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__RichTextBrowser_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QChildEvent*);
    using TextCustomEditor__RichTextBrowser_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowser_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowser_MousePopupMenu_Callback = QMenu* (*)(TextCustomEditor__RichTextBrowser*, QPoint*);
    using TextCustomEditor__RichTextBrowser_ZoomInF_Callback = void (*)(TextCustomEditor__RichTextBrowser*, float);
    using TextCustomEditor__RichTextBrowser_SetViewportMargins_Callback = void (*)(TextCustomEditor__RichTextBrowser*, int, int, int, int);
    using TextCustomEditor__RichTextBrowser_ViewportMargins_Callback = QMargins* (*)();
    using TextCustomEditor__RichTextBrowser_DrawFrame_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QPainter*);
    using TextCustomEditor__RichTextBrowser_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__RichTextBrowser_Create_Callback = void (*)();
    using TextCustomEditor__RichTextBrowser_Destroy_Callback = void (*)();
    using TextCustomEditor__RichTextBrowser_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowser_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowser_Sender_Callback = QObject* (*)();
    using TextCustomEditor__RichTextBrowser_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__RichTextBrowser_Receivers_Callback = int (*)(const TextCustomEditor__RichTextBrowser*, const char*);
    using TextCustomEditor__RichTextBrowser_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__RichTextBrowser*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowser_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__RichTextBrowser*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__RichTextBrowser_MetaObject_Callback textcustomeditor__richtextbrowser_metaobject_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Metacast_Callback textcustomeditor__richtextbrowser_metacast_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Metacall_Callback textcustomeditor__richtextbrowser_metacall_callback = nullptr;
    TextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback textcustomeditor__richtextbrowser_addextramenuentry_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback textcustomeditor__richtextbrowser_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Event_Callback textcustomeditor__richtextbrowser_event_callback = nullptr;
    TextCustomEditor__RichTextBrowser_KeyPressEvent_Callback textcustomeditor__richtextbrowser_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_WheelEvent_Callback textcustomeditor__richtextbrowser_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_LoadResource_Callback textcustomeditor__richtextbrowser_loadresource_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Backward_Callback textcustomeditor__richtextbrowser_backward_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Forward_Callback textcustomeditor__richtextbrowser_forward_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Home_Callback textcustomeditor__richtextbrowser_home_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Reload_Callback textcustomeditor__richtextbrowser_reload_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback textcustomeditor__richtextbrowser_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MousePressEvent_Callback textcustomeditor__richtextbrowser_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback textcustomeditor__richtextbrowser_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_FocusOutEvent_Callback textcustomeditor__richtextbrowser_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback textcustomeditor__richtextbrowser_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextBrowser_PaintEvent_Callback textcustomeditor__richtextbrowser_paintevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DoSetSource_Callback textcustomeditor__richtextbrowser_dosetsource_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InputMethodQuery_Callback textcustomeditor__richtextbrowser_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextBrowser_TimerEvent_Callback textcustomeditor__richtextbrowser_timerevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback textcustomeditor__richtextbrowser_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ResizeEvent_Callback textcustomeditor__richtextbrowser_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback textcustomeditor__richtextbrowser_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DragEnterEvent_Callback textcustomeditor__richtextbrowser_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback textcustomeditor__richtextbrowser_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DragMoveEvent_Callback textcustomeditor__richtextbrowser_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DropEvent_Callback textcustomeditor__richtextbrowser_dropevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_FocusInEvent_Callback textcustomeditor__richtextbrowser_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ShowEvent_Callback textcustomeditor__richtextbrowser_showevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ChangeEvent_Callback textcustomeditor__richtextbrowser_changeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback textcustomeditor__richtextbrowser_createmimedatafromselection_callback = nullptr;
    TextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback textcustomeditor__richtextbrowser_caninsertfrommimedata_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback textcustomeditor__richtextbrowser_insertfrommimedata_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InputMethodEvent_Callback textcustomeditor__richtextbrowser_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback textcustomeditor__richtextbrowser_scrollcontentsby_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback textcustomeditor__richtextbrowser_dosettextcursor_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback textcustomeditor__richtextbrowser_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SizeHint_Callback textcustomeditor__richtextbrowser_sizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SetupViewport_Callback textcustomeditor__richtextbrowser_setupviewport_callback = nullptr;
    TextCustomEditor__RichTextBrowser_EventFilter_Callback textcustomeditor__richtextbrowser_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ViewportEvent_Callback textcustomeditor__richtextbrowser_viewportevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback textcustomeditor__richtextbrowser_viewportsizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InitStyleOption_Callback textcustomeditor__richtextbrowser_initstyleoption_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DevType_Callback textcustomeditor__richtextbrowser_devtype_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SetVisible_Callback textcustomeditor__richtextbrowser_setvisible_callback = nullptr;
    TextCustomEditor__RichTextBrowser_HeightForWidth_Callback textcustomeditor__richtextbrowser_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback textcustomeditor__richtextbrowser_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowser_PaintEngine_Callback textcustomeditor__richtextbrowser_paintengine_callback = nullptr;
    TextCustomEditor__RichTextBrowser_EnterEvent_Callback textcustomeditor__richtextbrowser_enterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_LeaveEvent_Callback textcustomeditor__richtextbrowser_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MoveEvent_Callback textcustomeditor__richtextbrowser_moveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_CloseEvent_Callback textcustomeditor__richtextbrowser_closeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_TabletEvent_Callback textcustomeditor__richtextbrowser_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ActionEvent_Callback textcustomeditor__richtextbrowser_actionevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_HideEvent_Callback textcustomeditor__richtextbrowser_hideevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_NativeEvent_Callback textcustomeditor__richtextbrowser_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Metric_Callback textcustomeditor__richtextbrowser_metric_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InitPainter_Callback textcustomeditor__richtextbrowser_initpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Redirected_Callback textcustomeditor__richtextbrowser_redirected_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SharedPainter_Callback textcustomeditor__richtextbrowser_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ChildEvent_Callback textcustomeditor__richtextbrowser_childevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_CustomEvent_Callback textcustomeditor__richtextbrowser_customevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ConnectNotify_Callback textcustomeditor__richtextbrowser_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DisconnectNotify_Callback textcustomeditor__richtextbrowser_disconnectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MousePopupMenu_Callback textcustomeditor__richtextbrowser_mousepopupmenu_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ZoomInF_Callback textcustomeditor__richtextbrowser_zoominf_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SetViewportMargins_Callback textcustomeditor__richtextbrowser_setviewportmargins_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ViewportMargins_Callback textcustomeditor__richtextbrowser_viewportmargins_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DrawFrame_Callback textcustomeditor__richtextbrowser_drawframe_callback = nullptr;
    TextCustomEditor__RichTextBrowser_UpdateMicroFocus_Callback textcustomeditor__richtextbrowser_updatemicrofocus_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Create_Callback textcustomeditor__richtextbrowser_create_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Destroy_Callback textcustomeditor__richtextbrowser_destroy_callback = nullptr;
    TextCustomEditor__RichTextBrowser_FocusNextChild_Callback textcustomeditor__richtextbrowser_focusnextchild_callback = nullptr;
    TextCustomEditor__RichTextBrowser_FocusPreviousChild_Callback textcustomeditor__richtextbrowser_focuspreviouschild_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Sender_Callback textcustomeditor__richtextbrowser_sender_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SenderSignalIndex_Callback textcustomeditor__richtextbrowser_sendersignalindex_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Receivers_Callback textcustomeditor__richtextbrowser_receivers_callback = nullptr;
    TextCustomEditor__RichTextBrowser_IsSignalConnected_Callback textcustomeditor__richtextbrowser_issignalconnected_callback = nullptr;
    TextCustomEditor__RichTextBrowser_GetDecodedMetricF_Callback textcustomeditor__richtextbrowser_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__richtextbrowser_metaobject_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_metacast_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_metacall_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_addextramenuentry_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_event_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_keypressevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_wheelevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_loadresource_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_backward_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_forward_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_home_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_reload_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_mousepressevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_focusoutevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_paintevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_dosetsource_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_timerevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_resizeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_dragenterevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_dropevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_focusinevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_showevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_changeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_createmimedatafromselection_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_caninsertfrommimedata_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_insertfrommimedata_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_scrollcontentsby_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_dosettextcursor_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_sizehint_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_setupviewport_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_eventfilter_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_viewportevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_viewportsizehint_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_initstyleoption_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_devtype_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_setvisible_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_heightforwidth_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_paintengine_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_enterevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_leaveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_moveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_closeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_tabletevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_actionevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_hideevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_nativeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_metric_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_initpainter_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_redirected_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_sharedpainter_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_childevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_customevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_connectnotify_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_mousepopupmenu_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_zoominf_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_setviewportmargins_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_viewportmargins_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_drawframe_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_create_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_destroy_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_focusnextchild_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_sender_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_receivers_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_issignalconnected_isbase = false;
    mutable bool textcustomeditor__richtextbrowser_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorRichTextBrowser(QWidget* parent) : TextCustomEditor::RichTextBrowser(parent) {};
    VirtualTextCustomEditorRichTextBrowser() : TextCustomEditor::RichTextBrowser() {};

    // Callback setters
    inline void setTextCustomEditor__RichTextBrowser_MetaObject_Callback(TextCustomEditor__RichTextBrowser_MetaObject_Callback cb) { textcustomeditor__richtextbrowser_metaobject_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Metacast_Callback(TextCustomEditor__RichTextBrowser_Metacast_Callback cb) { textcustomeditor__richtextbrowser_metacast_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Metacall_Callback(TextCustomEditor__RichTextBrowser_Metacall_Callback cb) { textcustomeditor__richtextbrowser_metacall_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback(TextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback cb) { textcustomeditor__richtextbrowser_addextramenuentry_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback(TextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback cb) { textcustomeditor__richtextbrowser_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Event_Callback(TextCustomEditor__RichTextBrowser_Event_Callback cb) { textcustomeditor__richtextbrowser_event_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_KeyPressEvent_Callback(TextCustomEditor__RichTextBrowser_KeyPressEvent_Callback cb) { textcustomeditor__richtextbrowser_keypressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_WheelEvent_Callback(TextCustomEditor__RichTextBrowser_WheelEvent_Callback cb) { textcustomeditor__richtextbrowser_wheelevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_LoadResource_Callback(TextCustomEditor__RichTextBrowser_LoadResource_Callback cb) { textcustomeditor__richtextbrowser_loadresource_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Backward_Callback(TextCustomEditor__RichTextBrowser_Backward_Callback cb) { textcustomeditor__richtextbrowser_backward_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Forward_Callback(TextCustomEditor__RichTextBrowser_Forward_Callback cb) { textcustomeditor__richtextbrowser_forward_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Home_Callback(TextCustomEditor__RichTextBrowser_Home_Callback cb) { textcustomeditor__richtextbrowser_home_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Reload_Callback(TextCustomEditor__RichTextBrowser_Reload_Callback cb) { textcustomeditor__richtextbrowser_reload_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback(TextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback cb) { textcustomeditor__richtextbrowser_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_MousePressEvent_Callback(TextCustomEditor__RichTextBrowser_MousePressEvent_Callback cb) { textcustomeditor__richtextbrowser_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback(TextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback cb) { textcustomeditor__richtextbrowser_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_FocusOutEvent_Callback(TextCustomEditor__RichTextBrowser_FocusOutEvent_Callback cb) { textcustomeditor__richtextbrowser_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback(TextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback cb) { textcustomeditor__richtextbrowser_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_PaintEvent_Callback(TextCustomEditor__RichTextBrowser_PaintEvent_Callback cb) { textcustomeditor__richtextbrowser_paintevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DoSetSource_Callback(TextCustomEditor__RichTextBrowser_DoSetSource_Callback cb) { textcustomeditor__richtextbrowser_dosetsource_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_InputMethodQuery_Callback(TextCustomEditor__RichTextBrowser_InputMethodQuery_Callback cb) { textcustomeditor__richtextbrowser_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_TimerEvent_Callback(TextCustomEditor__RichTextBrowser_TimerEvent_Callback cb) { textcustomeditor__richtextbrowser_timerevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback(TextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback cb) { textcustomeditor__richtextbrowser_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ResizeEvent_Callback(TextCustomEditor__RichTextBrowser_ResizeEvent_Callback cb) { textcustomeditor__richtextbrowser_resizeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback(TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback cb) { textcustomeditor__richtextbrowser_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DragEnterEvent_Callback(TextCustomEditor__RichTextBrowser_DragEnterEvent_Callback cb) { textcustomeditor__richtextbrowser_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback(TextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback cb) { textcustomeditor__richtextbrowser_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DragMoveEvent_Callback(TextCustomEditor__RichTextBrowser_DragMoveEvent_Callback cb) { textcustomeditor__richtextbrowser_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DropEvent_Callback(TextCustomEditor__RichTextBrowser_DropEvent_Callback cb) { textcustomeditor__richtextbrowser_dropevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_FocusInEvent_Callback(TextCustomEditor__RichTextBrowser_FocusInEvent_Callback cb) { textcustomeditor__richtextbrowser_focusinevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ShowEvent_Callback(TextCustomEditor__RichTextBrowser_ShowEvent_Callback cb) { textcustomeditor__richtextbrowser_showevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ChangeEvent_Callback(TextCustomEditor__RichTextBrowser_ChangeEvent_Callback cb) { textcustomeditor__richtextbrowser_changeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback(TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback cb) { textcustomeditor__richtextbrowser_createmimedatafromselection_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback(TextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback cb) { textcustomeditor__richtextbrowser_caninsertfrommimedata_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback(TextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback cb) { textcustomeditor__richtextbrowser_insertfrommimedata_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_InputMethodEvent_Callback(TextCustomEditor__RichTextBrowser_InputMethodEvent_Callback cb) { textcustomeditor__richtextbrowser_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback(TextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback cb) { textcustomeditor__richtextbrowser_scrollcontentsby_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback(TextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback cb) { textcustomeditor__richtextbrowser_dosettextcursor_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback(TextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback cb) { textcustomeditor__richtextbrowser_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_SizeHint_Callback(TextCustomEditor__RichTextBrowser_SizeHint_Callback cb) { textcustomeditor__richtextbrowser_sizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_SetupViewport_Callback(TextCustomEditor__RichTextBrowser_SetupViewport_Callback cb) { textcustomeditor__richtextbrowser_setupviewport_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_EventFilter_Callback(TextCustomEditor__RichTextBrowser_EventFilter_Callback cb) { textcustomeditor__richtextbrowser_eventfilter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ViewportEvent_Callback(TextCustomEditor__RichTextBrowser_ViewportEvent_Callback cb) { textcustomeditor__richtextbrowser_viewportevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback(TextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback cb) { textcustomeditor__richtextbrowser_viewportsizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_InitStyleOption_Callback(TextCustomEditor__RichTextBrowser_InitStyleOption_Callback cb) { textcustomeditor__richtextbrowser_initstyleoption_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DevType_Callback(TextCustomEditor__RichTextBrowser_DevType_Callback cb) { textcustomeditor__richtextbrowser_devtype_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_SetVisible_Callback(TextCustomEditor__RichTextBrowser_SetVisible_Callback cb) { textcustomeditor__richtextbrowser_setvisible_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_HeightForWidth_Callback(TextCustomEditor__RichTextBrowser_HeightForWidth_Callback cb) { textcustomeditor__richtextbrowser_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback(TextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback cb) { textcustomeditor__richtextbrowser_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_PaintEngine_Callback(TextCustomEditor__RichTextBrowser_PaintEngine_Callback cb) { textcustomeditor__richtextbrowser_paintengine_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_EnterEvent_Callback(TextCustomEditor__RichTextBrowser_EnterEvent_Callback cb) { textcustomeditor__richtextbrowser_enterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_LeaveEvent_Callback(TextCustomEditor__RichTextBrowser_LeaveEvent_Callback cb) { textcustomeditor__richtextbrowser_leaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_MoveEvent_Callback(TextCustomEditor__RichTextBrowser_MoveEvent_Callback cb) { textcustomeditor__richtextbrowser_moveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_CloseEvent_Callback(TextCustomEditor__RichTextBrowser_CloseEvent_Callback cb) { textcustomeditor__richtextbrowser_closeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_TabletEvent_Callback(TextCustomEditor__RichTextBrowser_TabletEvent_Callback cb) { textcustomeditor__richtextbrowser_tabletevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ActionEvent_Callback(TextCustomEditor__RichTextBrowser_ActionEvent_Callback cb) { textcustomeditor__richtextbrowser_actionevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_HideEvent_Callback(TextCustomEditor__RichTextBrowser_HideEvent_Callback cb) { textcustomeditor__richtextbrowser_hideevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_NativeEvent_Callback(TextCustomEditor__RichTextBrowser_NativeEvent_Callback cb) { textcustomeditor__richtextbrowser_nativeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Metric_Callback(TextCustomEditor__RichTextBrowser_Metric_Callback cb) { textcustomeditor__richtextbrowser_metric_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_InitPainter_Callback(TextCustomEditor__RichTextBrowser_InitPainter_Callback cb) { textcustomeditor__richtextbrowser_initpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Redirected_Callback(TextCustomEditor__RichTextBrowser_Redirected_Callback cb) { textcustomeditor__richtextbrowser_redirected_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_SharedPainter_Callback(TextCustomEditor__RichTextBrowser_SharedPainter_Callback cb) { textcustomeditor__richtextbrowser_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ChildEvent_Callback(TextCustomEditor__RichTextBrowser_ChildEvent_Callback cb) { textcustomeditor__richtextbrowser_childevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_CustomEvent_Callback(TextCustomEditor__RichTextBrowser_CustomEvent_Callback cb) { textcustomeditor__richtextbrowser_customevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ConnectNotify_Callback(TextCustomEditor__RichTextBrowser_ConnectNotify_Callback cb) { textcustomeditor__richtextbrowser_connectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DisconnectNotify_Callback(TextCustomEditor__RichTextBrowser_DisconnectNotify_Callback cb) { textcustomeditor__richtextbrowser_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_MousePopupMenu_Callback(TextCustomEditor__RichTextBrowser_MousePopupMenu_Callback cb) { textcustomeditor__richtextbrowser_mousepopupmenu_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ZoomInF_Callback(TextCustomEditor__RichTextBrowser_ZoomInF_Callback cb) { textcustomeditor__richtextbrowser_zoominf_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_SetViewportMargins_Callback(TextCustomEditor__RichTextBrowser_SetViewportMargins_Callback cb) { textcustomeditor__richtextbrowser_setviewportmargins_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_ViewportMargins_Callback(TextCustomEditor__RichTextBrowser_ViewportMargins_Callback cb) { textcustomeditor__richtextbrowser_viewportmargins_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_DrawFrame_Callback(TextCustomEditor__RichTextBrowser_DrawFrame_Callback cb) { textcustomeditor__richtextbrowser_drawframe_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_UpdateMicroFocus_Callback(TextCustomEditor__RichTextBrowser_UpdateMicroFocus_Callback cb) { textcustomeditor__richtextbrowser_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Create_Callback(TextCustomEditor__RichTextBrowser_Create_Callback cb) { textcustomeditor__richtextbrowser_create_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Destroy_Callback(TextCustomEditor__RichTextBrowser_Destroy_Callback cb) { textcustomeditor__richtextbrowser_destroy_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_FocusNextChild_Callback(TextCustomEditor__RichTextBrowser_FocusNextChild_Callback cb) { textcustomeditor__richtextbrowser_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_FocusPreviousChild_Callback(TextCustomEditor__RichTextBrowser_FocusPreviousChild_Callback cb) { textcustomeditor__richtextbrowser_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Sender_Callback(TextCustomEditor__RichTextBrowser_Sender_Callback cb) { textcustomeditor__richtextbrowser_sender_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_SenderSignalIndex_Callback(TextCustomEditor__RichTextBrowser_SenderSignalIndex_Callback cb) { textcustomeditor__richtextbrowser_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_Receivers_Callback(TextCustomEditor__RichTextBrowser_Receivers_Callback cb) { textcustomeditor__richtextbrowser_receivers_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_IsSignalConnected_Callback(TextCustomEditor__RichTextBrowser_IsSignalConnected_Callback cb) { textcustomeditor__richtextbrowser_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowser_GetDecodedMetricF_Callback(TextCustomEditor__RichTextBrowser_GetDecodedMetricF_Callback cb) { textcustomeditor__richtextbrowser_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__RichTextBrowser_MetaObject_IsBase(bool value) const { textcustomeditor__richtextbrowser_metaobject_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Metacast_IsBase(bool value) const { textcustomeditor__richtextbrowser_metacast_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Metacall_IsBase(bool value) const { textcustomeditor__richtextbrowser_metacall_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_AddExtraMenuEntry_IsBase(bool value) const { textcustomeditor__richtextbrowser_addextramenuentry_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Event_IsBase(bool value) const { textcustomeditor__richtextbrowser_event_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_KeyPressEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_keypressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_WheelEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_wheelevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_LoadResource_IsBase(bool value) const { textcustomeditor__richtextbrowser_loadresource_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Backward_IsBase(bool value) const { textcustomeditor__richtextbrowser_backward_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Forward_IsBase(bool value) const { textcustomeditor__richtextbrowser_forward_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Home_IsBase(bool value) const { textcustomeditor__richtextbrowser_home_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Reload_IsBase(bool value) const { textcustomeditor__richtextbrowser_reload_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_MousePressEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_FocusOutEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__richtextbrowser_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_PaintEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_paintevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DoSetSource_IsBase(bool value) const { textcustomeditor__richtextbrowser_dosetsource_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_InputMethodQuery_IsBase(bool value) const { textcustomeditor__richtextbrowser_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_TimerEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_timerevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ResizeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_resizeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DragEnterEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DragMoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DropEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_dropevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_FocusInEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_focusinevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ShowEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_showevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ChangeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_changeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_IsBase(bool value) const { textcustomeditor__richtextbrowser_createmimedatafromselection_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_CanInsertFromMimeData_IsBase(bool value) const { textcustomeditor__richtextbrowser_caninsertfrommimedata_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_InsertFromMimeData_IsBase(bool value) const { textcustomeditor__richtextbrowser_insertfrommimedata_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_InputMethodEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ScrollContentsBy_IsBase(bool value) const { textcustomeditor__richtextbrowser_scrollcontentsby_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DoSetTextCursor_IsBase(bool value) const { textcustomeditor__richtextbrowser_dosettextcursor_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__richtextbrowser_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_SizeHint_IsBase(bool value) const { textcustomeditor__richtextbrowser_sizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_SetupViewport_IsBase(bool value) const { textcustomeditor__richtextbrowser_setupviewport_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_EventFilter_IsBase(bool value) const { textcustomeditor__richtextbrowser_eventfilter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ViewportEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_viewportevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ViewportSizeHint_IsBase(bool value) const { textcustomeditor__richtextbrowser_viewportsizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_InitStyleOption_IsBase(bool value) const { textcustomeditor__richtextbrowser_initstyleoption_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DevType_IsBase(bool value) const { textcustomeditor__richtextbrowser_devtype_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_SetVisible_IsBase(bool value) const { textcustomeditor__richtextbrowser_setvisible_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_HeightForWidth_IsBase(bool value) const { textcustomeditor__richtextbrowser_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__richtextbrowser_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_PaintEngine_IsBase(bool value) const { textcustomeditor__richtextbrowser_paintengine_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_EnterEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_enterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_LeaveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_leaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_MoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_moveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_CloseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_closeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_TabletEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_tabletevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ActionEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_actionevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_HideEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_hideevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_NativeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_nativeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Metric_IsBase(bool value) const { textcustomeditor__richtextbrowser_metric_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_InitPainter_IsBase(bool value) const { textcustomeditor__richtextbrowser_initpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Redirected_IsBase(bool value) const { textcustomeditor__richtextbrowser_redirected_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_SharedPainter_IsBase(bool value) const { textcustomeditor__richtextbrowser_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ChildEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_childevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_CustomEvent_IsBase(bool value) const { textcustomeditor__richtextbrowser_customevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ConnectNotify_IsBase(bool value) const { textcustomeditor__richtextbrowser_connectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DisconnectNotify_IsBase(bool value) const { textcustomeditor__richtextbrowser_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_MousePopupMenu_IsBase(bool value) const { textcustomeditor__richtextbrowser_mousepopupmenu_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ZoomInF_IsBase(bool value) const { textcustomeditor__richtextbrowser_zoominf_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_SetViewportMargins_IsBase(bool value) const { textcustomeditor__richtextbrowser_setviewportmargins_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_ViewportMargins_IsBase(bool value) const { textcustomeditor__richtextbrowser_viewportmargins_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_DrawFrame_IsBase(bool value) const { textcustomeditor__richtextbrowser_drawframe_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__richtextbrowser_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Create_IsBase(bool value) const { textcustomeditor__richtextbrowser_create_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Destroy_IsBase(bool value) const { textcustomeditor__richtextbrowser_destroy_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_FocusNextChild_IsBase(bool value) const { textcustomeditor__richtextbrowser_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__richtextbrowser_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Sender_IsBase(bool value) const { textcustomeditor__richtextbrowser_sender_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__richtextbrowser_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_Receivers_IsBase(bool value) const { textcustomeditor__richtextbrowser_receivers_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_IsSignalConnected_IsBase(bool value) const { textcustomeditor__richtextbrowser_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowser_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__richtextbrowser_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtextbrowser_metaobject_isbase) {
            textcustomeditor__richtextbrowser_metaobject_isbase = false;
            return TextCustomEditor__RichTextBrowser::metaObject();
        }
        auto metaobject_cb = textcustomeditor__richtextbrowser_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtextbrowser_metacast_isbase) {
            textcustomeditor__richtextbrowser_metacast_isbase = false;
            return TextCustomEditor__RichTextBrowser::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__richtextbrowser_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtextbrowser_metacall_isbase) {
            textcustomeditor__richtextbrowser_metacall_isbase = false;
            return TextCustomEditor__RichTextBrowser::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__richtextbrowser_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraMenuEntry(QMenu* menu, QPoint pos) override {
        if (textcustomeditor__richtextbrowser_addextramenuentry_isbase) {
            textcustomeditor__richtextbrowser_addextramenuentry_isbase = false;
            TextCustomEditor__RichTextBrowser::addExtraMenuEntry(menu, pos);
            return;
        }
        auto addextramenuentry_cb = textcustomeditor__richtextbrowser_addextramenuentry_callback;
        if (addextramenuentry_cb) {
            QMenu* cbval1 = menu;
            QPoint* cbval2 = new QPoint(pos);

            addextramenuentry_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextBrowser::addExtraMenuEntry(menu, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtextbrowser_contextmenuevent_isbase) {
            textcustomeditor__richtextbrowser_contextmenuevent_isbase = false;
            TextCustomEditor__RichTextBrowser::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__richtextbrowser_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (textcustomeditor__richtextbrowser_event_isbase) {
            textcustomeditor__richtextbrowser_event_isbase = false;
            return TextCustomEditor__RichTextBrowser::event(ev);
        }
        auto event_cb = textcustomeditor__richtextbrowser_event_callback;
        if (event_cb) {
            QEvent* cbval1 = ev;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowser_keypressevent_isbase) {
            textcustomeditor__richtextbrowser_keypressevent_isbase = false;
            TextCustomEditor__RichTextBrowser::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__richtextbrowser_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textcustomeditor__richtextbrowser_wheelevent_isbase) {
            textcustomeditor__richtextbrowser_wheelevent_isbase = false;
            TextCustomEditor__RichTextBrowser::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = textcustomeditor__richtextbrowser_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textcustomeditor__richtextbrowser_loadresource_isbase) {
            textcustomeditor__richtextbrowser_loadresource_isbase = false;
            return TextCustomEditor__RichTextBrowser::loadResource(typeVal, name);
        }
        auto loadresource_cb = textcustomeditor__richtextbrowser_loadresource_callback;
        if (loadresource_cb) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);

            QVariant* callback_ret = loadresource_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void backward() override {
        if (textcustomeditor__richtextbrowser_backward_isbase) {
            textcustomeditor__richtextbrowser_backward_isbase = false;
            TextCustomEditor__RichTextBrowser::backward();
            return;
        }
        auto backward_cb = textcustomeditor__richtextbrowser_backward_callback;
        if (backward_cb) {
            backward_cb();
            return;
        }
        TextCustomEditor__RichTextBrowser::backward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void forward() override {
        if (textcustomeditor__richtextbrowser_forward_isbase) {
            textcustomeditor__richtextbrowser_forward_isbase = false;
            TextCustomEditor__RichTextBrowser::forward();
            return;
        }
        auto forward_cb = textcustomeditor__richtextbrowser_forward_callback;
        if (forward_cb) {
            forward_cb();
            return;
        }
        TextCustomEditor__RichTextBrowser::forward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void home() override {
        if (textcustomeditor__richtextbrowser_home_isbase) {
            textcustomeditor__richtextbrowser_home_isbase = false;
            TextCustomEditor__RichTextBrowser::home();
            return;
        }
        auto home_cb = textcustomeditor__richtextbrowser_home_callback;
        if (home_cb) {
            home_cb();
            return;
        }
        TextCustomEditor__RichTextBrowser::home();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reload() override {
        if (textcustomeditor__richtextbrowser_reload_isbase) {
            textcustomeditor__richtextbrowser_reload_isbase = false;
            TextCustomEditor__RichTextBrowser::reload();
            return;
        }
        auto reload_cb = textcustomeditor__richtextbrowser_reload_callback;
        if (reload_cb) {
            reload_cb();
            return;
        }
        TextCustomEditor__RichTextBrowser::reload();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (textcustomeditor__richtextbrowser_mousemoveevent_isbase) {
            textcustomeditor__richtextbrowser_mousemoveevent_isbase = false;
            TextCustomEditor__RichTextBrowser::mouseMoveEvent(ev);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__richtextbrowser_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (textcustomeditor__richtextbrowser_mousepressevent_isbase) {
            textcustomeditor__richtextbrowser_mousepressevent_isbase = false;
            TextCustomEditor__RichTextBrowser::mousePressEvent(ev);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__richtextbrowser_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (textcustomeditor__richtextbrowser_mousereleaseevent_isbase) {
            textcustomeditor__richtextbrowser_mousereleaseevent_isbase = false;
            TextCustomEditor__RichTextBrowser::mouseReleaseEvent(ev);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__richtextbrowser_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::mouseReleaseEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (textcustomeditor__richtextbrowser_focusoutevent_isbase) {
            textcustomeditor__richtextbrowser_focusoutevent_isbase = false;
            TextCustomEditor__RichTextBrowser::focusOutEvent(ev);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__richtextbrowser_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = ev;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtextbrowser_focusnextprevchild_isbase) {
            textcustomeditor__richtextbrowser_focusnextprevchild_isbase = false;
            return TextCustomEditor__RichTextBrowser::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__richtextbrowser_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textcustomeditor__richtextbrowser_paintevent_isbase) {
            textcustomeditor__richtextbrowser_paintevent_isbase = false;
            TextCustomEditor__RichTextBrowser::paintEvent(e);
            return;
        }
        auto paintevent_cb = textcustomeditor__richtextbrowser_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetSource(const QUrl& name, QTextDocument::ResourceType typeVal) override {
        if (textcustomeditor__richtextbrowser_dosetsource_isbase) {
            textcustomeditor__richtextbrowser_dosetsource_isbase = false;
            TextCustomEditor__RichTextBrowser::doSetSource(name, typeVal);
            return;
        }
        auto dosetsource_cb = textcustomeditor__richtextbrowser_dosetsource_callback;
        if (dosetsource_cb) {
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&name_ret);
            int cbval2 = static_cast<int>(typeVal);

            dosetsource_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextBrowser::doSetSource(name, typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textcustomeditor__richtextbrowser_inputmethodquery_isbase) {
            textcustomeditor__richtextbrowser_inputmethodquery_isbase = false;
            return TextCustomEditor__RichTextBrowser::inputMethodQuery(property);
        }
        auto inputmethodquery_cb = textcustomeditor__richtextbrowser_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(property);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textcustomeditor__richtextbrowser_timerevent_isbase) {
            textcustomeditor__richtextbrowser_timerevent_isbase = false;
            TextCustomEditor__RichTextBrowser::timerEvent(e);
            return;
        }
        auto timerevent_cb = textcustomeditor__richtextbrowser_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textcustomeditor__richtextbrowser_keyreleaseevent_isbase) {
            textcustomeditor__richtextbrowser_keyreleaseevent_isbase = false;
            TextCustomEditor__RichTextBrowser::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__richtextbrowser_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textcustomeditor__richtextbrowser_resizeevent_isbase) {
            textcustomeditor__richtextbrowser_resizeevent_isbase = false;
            TextCustomEditor__RichTextBrowser::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = textcustomeditor__richtextbrowser_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtextbrowser_mousedoubleclickevent_isbase) {
            textcustomeditor__richtextbrowser_mousedoubleclickevent_isbase = false;
            TextCustomEditor__RichTextBrowser::mouseDoubleClickEvent(e);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__richtextbrowser_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = e;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textcustomeditor__richtextbrowser_dragenterevent_isbase) {
            textcustomeditor__richtextbrowser_dragenterevent_isbase = false;
            TextCustomEditor__RichTextBrowser::dragEnterEvent(e);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__richtextbrowser_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = e;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textcustomeditor__richtextbrowser_dragleaveevent_isbase) {
            textcustomeditor__richtextbrowser_dragleaveevent_isbase = false;
            TextCustomEditor__RichTextBrowser::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__richtextbrowser_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textcustomeditor__richtextbrowser_dragmoveevent_isbase) {
            textcustomeditor__richtextbrowser_dragmoveevent_isbase = false;
            TextCustomEditor__RichTextBrowser::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__richtextbrowser_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textcustomeditor__richtextbrowser_dropevent_isbase) {
            textcustomeditor__richtextbrowser_dropevent_isbase = false;
            TextCustomEditor__RichTextBrowser::dropEvent(e);
            return;
        }
        auto dropevent_cb = textcustomeditor__richtextbrowser_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;

            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (textcustomeditor__richtextbrowser_focusinevent_isbase) {
            textcustomeditor__richtextbrowser_focusinevent_isbase = false;
            TextCustomEditor__RichTextBrowser::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = textcustomeditor__richtextbrowser_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textcustomeditor__richtextbrowser_showevent_isbase) {
            textcustomeditor__richtextbrowser_showevent_isbase = false;
            TextCustomEditor__RichTextBrowser::showEvent(param1);
            return;
        }
        auto showevent_cb = textcustomeditor__richtextbrowser_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textcustomeditor__richtextbrowser_changeevent_isbase) {
            textcustomeditor__richtextbrowser_changeevent_isbase = false;
            TextCustomEditor__RichTextBrowser::changeEvent(e);
            return;
        }
        auto changeevent_cb = textcustomeditor__richtextbrowser_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textcustomeditor__richtextbrowser_createmimedatafromselection_isbase) {
            textcustomeditor__richtextbrowser_createmimedatafromselection_isbase = false;
            return TextCustomEditor__RichTextBrowser::createMimeDataFromSelection();
        }
        auto createmimedatafromselection_cb = textcustomeditor__richtextbrowser_createmimedatafromselection_callback;
        if (createmimedatafromselection_cb) {
            QMimeData* callback_ret = createmimedatafromselection_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textcustomeditor__richtextbrowser_caninsertfrommimedata_isbase) {
            textcustomeditor__richtextbrowser_caninsertfrommimedata_isbase = false;
            return TextCustomEditor__RichTextBrowser::canInsertFromMimeData(source);
        }
        auto caninsertfrommimedata_cb = textcustomeditor__richtextbrowser_caninsertfrommimedata_callback;
        if (caninsertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            bool callback_ret = caninsertfrommimedata_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textcustomeditor__richtextbrowser_insertfrommimedata_isbase) {
            textcustomeditor__richtextbrowser_insertfrommimedata_isbase = false;
            TextCustomEditor__RichTextBrowser::insertFromMimeData(source);
            return;
        }
        auto insertfrommimedata_cb = textcustomeditor__richtextbrowser_insertfrommimedata_callback;
        if (insertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            insertfrommimedata_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtextbrowser_inputmethodevent_isbase) {
            textcustomeditor__richtextbrowser_inputmethodevent_isbase = false;
            TextCustomEditor__RichTextBrowser::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__richtextbrowser_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textcustomeditor__richtextbrowser_scrollcontentsby_isbase) {
            textcustomeditor__richtextbrowser_scrollcontentsby_isbase = false;
            TextCustomEditor__RichTextBrowser::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = textcustomeditor__richtextbrowser_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextBrowser::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textcustomeditor__richtextbrowser_dosettextcursor_isbase) {
            textcustomeditor__richtextbrowser_dosettextcursor_isbase = false;
            TextCustomEditor__RichTextBrowser::doSetTextCursor(cursor);
            return;
        }
        auto dosettextcursor_cb = textcustomeditor__richtextbrowser_dosettextcursor_callback;
        if (dosettextcursor_cb) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);

            dosettextcursor_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtextbrowser_minimumsizehint_isbase) {
            textcustomeditor__richtextbrowser_minimumsizehint_isbase = false;
            return TextCustomEditor__RichTextBrowser::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__richtextbrowser_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtextbrowser_sizehint_isbase) {
            textcustomeditor__richtextbrowser_sizehint_isbase = false;
            return TextCustomEditor__RichTextBrowser::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__richtextbrowser_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textcustomeditor__richtextbrowser_setupviewport_isbase) {
            textcustomeditor__richtextbrowser_setupviewport_isbase = false;
            TextCustomEditor__RichTextBrowser::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = textcustomeditor__richtextbrowser_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textcustomeditor__richtextbrowser_eventfilter_isbase) {
            textcustomeditor__richtextbrowser_eventfilter_isbase = false;
            return TextCustomEditor__RichTextBrowser::eventFilter(param1, param2);
        }
        auto eventfilter_cb = textcustomeditor__richtextbrowser_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textcustomeditor__richtextbrowser_viewportevent_isbase) {
            textcustomeditor__richtextbrowser_viewportevent_isbase = false;
            return TextCustomEditor__RichTextBrowser::viewportEvent(param1);
        }
        auto viewportevent_cb = textcustomeditor__richtextbrowser_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textcustomeditor__richtextbrowser_viewportsizehint_isbase) {
            textcustomeditor__richtextbrowser_viewportsizehint_isbase = false;
            return TextCustomEditor__RichTextBrowser::viewportSizeHint();
        }
        auto viewportsizehint_cb = textcustomeditor__richtextbrowser_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textcustomeditor__richtextbrowser_initstyleoption_isbase) {
            textcustomeditor__richtextbrowser_initstyleoption_isbase = false;
            TextCustomEditor__RichTextBrowser::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = textcustomeditor__richtextbrowser_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtextbrowser_devtype_isbase) {
            textcustomeditor__richtextbrowser_devtype_isbase = false;
            return TextCustomEditor__RichTextBrowser::devType();
        }
        auto devtype_cb = textcustomeditor__richtextbrowser_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtextbrowser_setvisible_isbase) {
            textcustomeditor__richtextbrowser_setvisible_isbase = false;
            TextCustomEditor__RichTextBrowser::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__richtextbrowser_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtextbrowser_heightforwidth_isbase) {
            textcustomeditor__richtextbrowser_heightforwidth_isbase = false;
            return TextCustomEditor__RichTextBrowser::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__richtextbrowser_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtextbrowser_hasheightforwidth_isbase) {
            textcustomeditor__richtextbrowser_hasheightforwidth_isbase = false;
            return TextCustomEditor__RichTextBrowser::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__richtextbrowser_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtextbrowser_paintengine_isbase) {
            textcustomeditor__richtextbrowser_paintengine_isbase = false;
            return TextCustomEditor__RichTextBrowser::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__richtextbrowser_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtextbrowser_enterevent_isbase) {
            textcustomeditor__richtextbrowser_enterevent_isbase = false;
            TextCustomEditor__RichTextBrowser::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__richtextbrowser_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowser_leaveevent_isbase) {
            textcustomeditor__richtextbrowser_leaveevent_isbase = false;
            TextCustomEditor__RichTextBrowser::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__richtextbrowser_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtextbrowser_moveevent_isbase) {
            textcustomeditor__richtextbrowser_moveevent_isbase = false;
            TextCustomEditor__RichTextBrowser::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__richtextbrowser_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtextbrowser_closeevent_isbase) {
            textcustomeditor__richtextbrowser_closeevent_isbase = false;
            TextCustomEditor__RichTextBrowser::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__richtextbrowser_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtextbrowser_tabletevent_isbase) {
            textcustomeditor__richtextbrowser_tabletevent_isbase = false;
            TextCustomEditor__RichTextBrowser::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__richtextbrowser_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtextbrowser_actionevent_isbase) {
            textcustomeditor__richtextbrowser_actionevent_isbase = false;
            TextCustomEditor__RichTextBrowser::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__richtextbrowser_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtextbrowser_hideevent_isbase) {
            textcustomeditor__richtextbrowser_hideevent_isbase = false;
            TextCustomEditor__RichTextBrowser::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__richtextbrowser_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtextbrowser_nativeevent_isbase) {
            textcustomeditor__richtextbrowser_nativeevent_isbase = false;
            return TextCustomEditor__RichTextBrowser::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__richtextbrowser_nativeevent_callback;
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
        return TextCustomEditor__RichTextBrowser::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtextbrowser_metric_isbase) {
            textcustomeditor__richtextbrowser_metric_isbase = false;
            return TextCustomEditor__RichTextBrowser::metric(param1);
        }
        auto metric_cb = textcustomeditor__richtextbrowser_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtextbrowser_initpainter_isbase) {
            textcustomeditor__richtextbrowser_initpainter_isbase = false;
            TextCustomEditor__RichTextBrowser::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__richtextbrowser_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtextbrowser_redirected_isbase) {
            textcustomeditor__richtextbrowser_redirected_isbase = false;
            return TextCustomEditor__RichTextBrowser::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__richtextbrowser_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtextbrowser_sharedpainter_isbase) {
            textcustomeditor__richtextbrowser_sharedpainter_isbase = false;
            return TextCustomEditor__RichTextBrowser::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__richtextbrowser_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtextbrowser_childevent_isbase) {
            textcustomeditor__richtextbrowser_childevent_isbase = false;
            TextCustomEditor__RichTextBrowser::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__richtextbrowser_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowser_customevent_isbase) {
            textcustomeditor__richtextbrowser_customevent_isbase = false;
            TextCustomEditor__RichTextBrowser::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__richtextbrowser_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowser_connectnotify_isbase) {
            textcustomeditor__richtextbrowser_connectnotify_isbase = false;
            TextCustomEditor__RichTextBrowser::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__richtextbrowser_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowser_disconnectnotify_isbase) {
            textcustomeditor__richtextbrowser_disconnectnotify_isbase = false;
            TextCustomEditor__RichTextBrowser::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__richtextbrowser_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QMenu* mousePopupMenu(QPoint pos) {
        if (textcustomeditor__richtextbrowser_mousepopupmenu_isbase) {
            textcustomeditor__richtextbrowser_mousepopupmenu_isbase = false;
            return TextCustomEditor__RichTextBrowser::mousePopupMenu(pos);
        }
        auto mousepopupmenu_cb = textcustomeditor__richtextbrowser_mousepopupmenu_callback;
        if (mousepopupmenu_cb) {
            QPoint* cbval1 = new QPoint(pos);

            QMenu* callback_ret = mousepopupmenu_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::mousePopupMenu(pos);
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (textcustomeditor__richtextbrowser_zoominf_isbase) {
            textcustomeditor__richtextbrowser_zoominf_isbase = false;
            TextCustomEditor__RichTextBrowser::zoomInF(range);
            return;
        }
        auto zoominf_cb = textcustomeditor__richtextbrowser_zoominf_callback;
        if (zoominf_cb) {
            float cbval1 = range;

            zoominf_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::zoomInF(range);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (textcustomeditor__richtextbrowser_setviewportmargins_isbase) {
            textcustomeditor__richtextbrowser_setviewportmargins_isbase = false;
            TextCustomEditor__RichTextBrowser::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = textcustomeditor__richtextbrowser_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        TextCustomEditor__RichTextBrowser::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (textcustomeditor__richtextbrowser_viewportmargins_isbase) {
            textcustomeditor__richtextbrowser_viewportmargins_isbase = false;
            return TextCustomEditor__RichTextBrowser::viewportMargins();
        }
        auto viewportmargins_cb = textcustomeditor__richtextbrowser_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (textcustomeditor__richtextbrowser_drawframe_isbase) {
            textcustomeditor__richtextbrowser_drawframe_isbase = false;
            TextCustomEditor__RichTextBrowser::drawFrame(param1);
            return;
        }
        auto drawframe_cb = textcustomeditor__richtextbrowser_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__richtextbrowser_updatemicrofocus_isbase) {
            textcustomeditor__richtextbrowser_updatemicrofocus_isbase = false;
            TextCustomEditor__RichTextBrowser::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__richtextbrowser_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__RichTextBrowser::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__richtextbrowser_create_isbase) {
            textcustomeditor__richtextbrowser_create_isbase = false;
            TextCustomEditor__RichTextBrowser::create();
            return;
        }
        auto create_cb = textcustomeditor__richtextbrowser_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__RichTextBrowser::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__richtextbrowser_destroy_isbase) {
            textcustomeditor__richtextbrowser_destroy_isbase = false;
            TextCustomEditor__RichTextBrowser::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__richtextbrowser_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__RichTextBrowser::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__richtextbrowser_focusnextchild_isbase) {
            textcustomeditor__richtextbrowser_focusnextchild_isbase = false;
            return TextCustomEditor__RichTextBrowser::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__richtextbrowser_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__richtextbrowser_focuspreviouschild_isbase) {
            textcustomeditor__richtextbrowser_focuspreviouschild_isbase = false;
            return TextCustomEditor__RichTextBrowser::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__richtextbrowser_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__richtextbrowser_sender_isbase) {
            textcustomeditor__richtextbrowser_sender_isbase = false;
            return TextCustomEditor__RichTextBrowser::sender();
        }
        auto sender_cb = textcustomeditor__richtextbrowser_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__richtextbrowser_sendersignalindex_isbase) {
            textcustomeditor__richtextbrowser_sendersignalindex_isbase = false;
            return TextCustomEditor__RichTextBrowser::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__richtextbrowser_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__richtextbrowser_receivers_isbase) {
            textcustomeditor__richtextbrowser_receivers_isbase = false;
            return TextCustomEditor__RichTextBrowser::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__richtextbrowser_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__richtextbrowser_issignalconnected_isbase) {
            textcustomeditor__richtextbrowser_issignalconnected_isbase = false;
            return TextCustomEditor__RichTextBrowser::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__richtextbrowser_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__richtextbrowser_getdecodedmetricf_isbase) {
            textcustomeditor__richtextbrowser_getdecodedmetricf_isbase = false;
            return TextCustomEditor__RichTextBrowser::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__richtextbrowser_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextCustomEditor__RichTextBrowser_AddExtraMenuEntry(TextCustomEditor::RichTextBrowser* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__RichTextBrowser_SuperAddExtraMenuEntry(TextCustomEditor::RichTextBrowser* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__RichTextBrowser_ContextMenuEvent(TextCustomEditor::RichTextBrowser* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperContextMenuEvent(TextCustomEditor::RichTextBrowser* self, QContextMenuEvent* event);
    friend bool TextCustomEditor__RichTextBrowser_Event(TextCustomEditor::RichTextBrowser* self, QEvent* ev);
    friend bool TextCustomEditor__RichTextBrowser_SuperEvent(TextCustomEditor::RichTextBrowser* self, QEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_KeyPressEvent(TextCustomEditor::RichTextBrowser* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperKeyPressEvent(TextCustomEditor::RichTextBrowser* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowser_WheelEvent(TextCustomEditor::RichTextBrowser* self, QWheelEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperWheelEvent(TextCustomEditor::RichTextBrowser* self, QWheelEvent* e);
    friend void TextCustomEditor__RichTextBrowser_MouseMoveEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_SuperMouseMoveEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_MousePressEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_SuperMousePressEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_MouseReleaseEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_SuperMouseReleaseEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_FocusOutEvent(TextCustomEditor::RichTextBrowser* self, QFocusEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_SuperFocusOutEvent(TextCustomEditor::RichTextBrowser* self, QFocusEvent* ev);
    friend bool TextCustomEditor__RichTextBrowser_FocusNextPrevChild(TextCustomEditor::RichTextBrowser* self, bool next);
    friend bool TextCustomEditor__RichTextBrowser_SuperFocusNextPrevChild(TextCustomEditor::RichTextBrowser* self, bool next);
    friend void TextCustomEditor__RichTextBrowser_PaintEvent(TextCustomEditor::RichTextBrowser* self, QPaintEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperPaintEvent(TextCustomEditor::RichTextBrowser* self, QPaintEvent* e);
    friend void TextCustomEditor__RichTextBrowser_DoSetSource(TextCustomEditor::RichTextBrowser* self, const QUrl* name, int typeVal);
    friend void TextCustomEditor__RichTextBrowser_SuperDoSetSource(TextCustomEditor::RichTextBrowser* self, const QUrl* name, int typeVal);
    friend void TextCustomEditor__RichTextBrowser_TimerEvent(TextCustomEditor::RichTextBrowser* self, QTimerEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperTimerEvent(TextCustomEditor::RichTextBrowser* self, QTimerEvent* e);
    friend void TextCustomEditor__RichTextBrowser_KeyReleaseEvent(TextCustomEditor::RichTextBrowser* self, QKeyEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperKeyReleaseEvent(TextCustomEditor::RichTextBrowser* self, QKeyEvent* e);
    friend void TextCustomEditor__RichTextBrowser_ResizeEvent(TextCustomEditor::RichTextBrowser* self, QResizeEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperResizeEvent(TextCustomEditor::RichTextBrowser* self, QResizeEvent* e);
    friend void TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextBrowser_DragEnterEvent(TextCustomEditor::RichTextBrowser* self, QDragEnterEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDragEnterEvent(TextCustomEditor::RichTextBrowser* self, QDragEnterEvent* e);
    friend void TextCustomEditor__RichTextBrowser_DragLeaveEvent(TextCustomEditor::RichTextBrowser* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDragLeaveEvent(TextCustomEditor::RichTextBrowser* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__RichTextBrowser_DragMoveEvent(TextCustomEditor::RichTextBrowser* self, QDragMoveEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDragMoveEvent(TextCustomEditor::RichTextBrowser* self, QDragMoveEvent* e);
    friend void TextCustomEditor__RichTextBrowser_DropEvent(TextCustomEditor::RichTextBrowser* self, QDropEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDropEvent(TextCustomEditor::RichTextBrowser* self, QDropEvent* e);
    friend void TextCustomEditor__RichTextBrowser_FocusInEvent(TextCustomEditor::RichTextBrowser* self, QFocusEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperFocusInEvent(TextCustomEditor::RichTextBrowser* self, QFocusEvent* e);
    friend void TextCustomEditor__RichTextBrowser_ShowEvent(TextCustomEditor::RichTextBrowser* self, QShowEvent* param1);
    friend void TextCustomEditor__RichTextBrowser_SuperShowEvent(TextCustomEditor::RichTextBrowser* self, QShowEvent* param1);
    friend void TextCustomEditor__RichTextBrowser_ChangeEvent(TextCustomEditor::RichTextBrowser* self, QEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperChangeEvent(TextCustomEditor::RichTextBrowser* self, QEvent* e);
    friend QMimeData* TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection(const TextCustomEditor::RichTextBrowser* self);
    friend QMimeData* TextCustomEditor__RichTextBrowser_SuperCreateMimeDataFromSelection(const TextCustomEditor::RichTextBrowser* self);
    friend bool TextCustomEditor__RichTextBrowser_CanInsertFromMimeData(const TextCustomEditor::RichTextBrowser* self, const QMimeData* source);
    friend bool TextCustomEditor__RichTextBrowser_SuperCanInsertFromMimeData(const TextCustomEditor::RichTextBrowser* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextBrowser_InsertFromMimeData(TextCustomEditor::RichTextBrowser* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextBrowser_SuperInsertFromMimeData(TextCustomEditor::RichTextBrowser* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextBrowser_InputMethodEvent(TextCustomEditor::RichTextBrowser* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextBrowser_SuperInputMethodEvent(TextCustomEditor::RichTextBrowser* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextBrowser_ScrollContentsBy(TextCustomEditor::RichTextBrowser* self, int dx, int dy);
    friend void TextCustomEditor__RichTextBrowser_SuperScrollContentsBy(TextCustomEditor::RichTextBrowser* self, int dx, int dy);
    friend void TextCustomEditor__RichTextBrowser_DoSetTextCursor(TextCustomEditor::RichTextBrowser* self, const QTextCursor* cursor);
    friend void TextCustomEditor__RichTextBrowser_SuperDoSetTextCursor(TextCustomEditor::RichTextBrowser* self, const QTextCursor* cursor);
    friend bool TextCustomEditor__RichTextBrowser_EventFilter(TextCustomEditor::RichTextBrowser* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__RichTextBrowser_SuperEventFilter(TextCustomEditor::RichTextBrowser* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__RichTextBrowser_ViewportEvent(TextCustomEditor::RichTextBrowser* self, QEvent* param1);
    friend bool TextCustomEditor__RichTextBrowser_SuperViewportEvent(TextCustomEditor::RichTextBrowser* self, QEvent* param1);
    friend QSize* TextCustomEditor__RichTextBrowser_ViewportSizeHint(const TextCustomEditor::RichTextBrowser* self);
    friend QSize* TextCustomEditor__RichTextBrowser_SuperViewportSizeHint(const TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_InitStyleOption(const TextCustomEditor::RichTextBrowser* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__RichTextBrowser_SuperInitStyleOption(const TextCustomEditor::RichTextBrowser* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__RichTextBrowser_EnterEvent(TextCustomEditor::RichTextBrowser* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperEnterEvent(TextCustomEditor::RichTextBrowser* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowser_LeaveEvent(TextCustomEditor::RichTextBrowser* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperLeaveEvent(TextCustomEditor::RichTextBrowser* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowser_MoveEvent(TextCustomEditor::RichTextBrowser* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperMoveEvent(TextCustomEditor::RichTextBrowser* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowser_CloseEvent(TextCustomEditor::RichTextBrowser* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperCloseEvent(TextCustomEditor::RichTextBrowser* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowser_TabletEvent(TextCustomEditor::RichTextBrowser* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperTabletEvent(TextCustomEditor::RichTextBrowser* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowser_ActionEvent(TextCustomEditor::RichTextBrowser* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperActionEvent(TextCustomEditor::RichTextBrowser* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowser_HideEvent(TextCustomEditor::RichTextBrowser* self, QHideEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperHideEvent(TextCustomEditor::RichTextBrowser* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextBrowser_NativeEvent(TextCustomEditor::RichTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__RichTextBrowser_SuperNativeEvent(TextCustomEditor::RichTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextCustomEditor__RichTextBrowser_Metric(const TextCustomEditor::RichTextBrowser* self, int param1);
    friend int TextCustomEditor__RichTextBrowser_SuperMetric(const TextCustomEditor::RichTextBrowser* self, int param1);
    friend void TextCustomEditor__RichTextBrowser_InitPainter(const TextCustomEditor::RichTextBrowser* self, QPainter* painter);
    friend void TextCustomEditor__RichTextBrowser_SuperInitPainter(const TextCustomEditor::RichTextBrowser* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextBrowser_Redirected(const TextCustomEditor::RichTextBrowser* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__RichTextBrowser_SuperRedirected(const TextCustomEditor::RichTextBrowser* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextBrowser_SharedPainter(const TextCustomEditor::RichTextBrowser* self);
    friend QPainter* TextCustomEditor__RichTextBrowser_SuperSharedPainter(const TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_ChildEvent(TextCustomEditor::RichTextBrowser* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperChildEvent(TextCustomEditor::RichTextBrowser* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowser_CustomEvent(TextCustomEditor::RichTextBrowser* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperCustomEvent(TextCustomEditor::RichTextBrowser* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowser_ConnectNotify(TextCustomEditor::RichTextBrowser* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowser_SuperConnectNotify(TextCustomEditor::RichTextBrowser* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowser_DisconnectNotify(TextCustomEditor::RichTextBrowser* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowser_SuperDisconnectNotify(TextCustomEditor::RichTextBrowser* self, const QMetaMethod* signal);
    friend QMenu* TextCustomEditor__RichTextBrowser_MousePopupMenu(TextCustomEditor::RichTextBrowser* self, QPoint* pos);
    friend QMenu* TextCustomEditor__RichTextBrowser_SuperMousePopupMenu(TextCustomEditor::RichTextBrowser* self, QPoint* pos);
    friend void TextCustomEditor__RichTextBrowser_ZoomInF(TextCustomEditor::RichTextBrowser* self, float range);
    friend void TextCustomEditor__RichTextBrowser_SuperZoomInF(TextCustomEditor::RichTextBrowser* self, float range);
    friend void TextCustomEditor__RichTextBrowser_SetViewportMargins(TextCustomEditor::RichTextBrowser* self, int left, int top, int right, int bottom);
    friend void TextCustomEditor__RichTextBrowser_SuperSetViewportMargins(TextCustomEditor::RichTextBrowser* self, int left, int top, int right, int bottom);
    friend QMargins* TextCustomEditor__RichTextBrowser_ViewportMargins(const TextCustomEditor::RichTextBrowser* self);
    friend QMargins* TextCustomEditor__RichTextBrowser_SuperViewportMargins(const TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_DrawFrame(TextCustomEditor::RichTextBrowser* self, QPainter* param1);
    friend void TextCustomEditor__RichTextBrowser_SuperDrawFrame(TextCustomEditor::RichTextBrowser* self, QPainter* param1);
    friend void TextCustomEditor__RichTextBrowser_UpdateMicroFocus(TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_SuperUpdateMicroFocus(TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_Create(TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_SuperCreate(TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_Destroy(TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_SuperDestroy(TextCustomEditor::RichTextBrowser* self);
    friend bool TextCustomEditor__RichTextBrowser_FocusNextChild(TextCustomEditor::RichTextBrowser* self);
    friend bool TextCustomEditor__RichTextBrowser_SuperFocusNextChild(TextCustomEditor::RichTextBrowser* self);
    friend bool TextCustomEditor__RichTextBrowser_FocusPreviousChild(TextCustomEditor::RichTextBrowser* self);
    friend bool TextCustomEditor__RichTextBrowser_SuperFocusPreviousChild(TextCustomEditor::RichTextBrowser* self);
    friend QObject* TextCustomEditor__RichTextBrowser_Sender(const TextCustomEditor::RichTextBrowser* self);
    friend QObject* TextCustomEditor__RichTextBrowser_SuperSender(const TextCustomEditor::RichTextBrowser* self);
    friend int TextCustomEditor__RichTextBrowser_SenderSignalIndex(const TextCustomEditor::RichTextBrowser* self);
    friend int TextCustomEditor__RichTextBrowser_SuperSenderSignalIndex(const TextCustomEditor::RichTextBrowser* self);
    friend int TextCustomEditor__RichTextBrowser_Receivers(const TextCustomEditor::RichTextBrowser* self, const char* signal);
    friend int TextCustomEditor__RichTextBrowser_SuperReceivers(const TextCustomEditor::RichTextBrowser* self, const char* signal);
    friend bool TextCustomEditor__RichTextBrowser_IsSignalConnected(const TextCustomEditor::RichTextBrowser* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__RichTextBrowser_SuperIsSignalConnected(const TextCustomEditor::RichTextBrowser* self, const QMetaMethod* signal);
    friend double TextCustomEditor__RichTextBrowser_GetDecodedMetricF(const TextCustomEditor::RichTextBrowser* self, int metricA, int metricB);
    friend double TextCustomEditor__RichTextBrowser_SuperGetDecodedMetricF(const TextCustomEditor::RichTextBrowser* self, int metricA, int metricB);
};

#endif
