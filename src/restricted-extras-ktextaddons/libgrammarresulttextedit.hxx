#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMARRESULTTEXTEDIT_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMARRESULTTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammarResultTextEdit so that we can call protected methods
class VirtualTextGrammarCheckGrammarResultTextEdit final : public TextGrammarCheck::GrammarResultTextEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckGrammarResultTextEdit = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_Metacast_Callback = void* (*)(TextGrammarCheck__GrammarResultTextEdit*, const char*);
    using TextGrammarCheck__GrammarResultTextEdit_Metacall_Callback = int (*)(TextGrammarCheck__GrammarResultTextEdit*, int, int, void**);
    using TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QContextMenuEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QPaintEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_Event_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback = QVariant* (*)(TextGrammarCheck__GrammarResultTextEdit*, int, QUrl*);
    using TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammarResultTextEdit*, int);
    using TextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QTimerEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QKeyEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QKeyEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QResizeEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, bool);
    using TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QDragEnterEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QDragMoveEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QDropEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QFocusEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QFocusEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QShowEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QWheelEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback = bool (*)(const TextGrammarCheck__GrammarResultTextEdit*, QMimeData*);
    using TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMimeData*);
    using TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QInputMethodEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, int, int);
    using TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QTextCursor*);
    using TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QWidget*);
    using TextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, QObject*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback = void (*)(const TextGrammarCheck__GrammarResultTextEdit*, QStyleOptionFrame*);
    using TextGrammarCheck__GrammarResultTextEdit_DevType_Callback = int (*)();
    using TextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, bool);
    using TextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammarResultTextEdit*, int);
    using TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QEnterEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMoveEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QCloseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QTabletEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QActionEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QHideEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammarResultTextEdit_Metric_Callback = int (*)(const TextGrammarCheck__GrammarResultTextEdit*, int);
    using TextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammarResultTextEdit*, QPainter*);
    using TextGrammarCheck__GrammarResultTextEdit_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammarResultTextEdit*, QPoint*);
    using TextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QChildEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMetaMethod*);
    using TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMetaMethod*);
    using TextGrammarCheck__GrammarResultTextEdit_ZoomInF_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, float);
    using TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, int, int, int, int);
    using TextGrammarCheck__GrammarResultTextEdit_ViewportMargins_Callback = QMargins* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_DrawFrame_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QPainter*);
    using TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__GrammarResultTextEdit_Create_Callback = void (*)();
    using TextGrammarCheck__GrammarResultTextEdit_Destroy_Callback = void (*)();
    using TextGrammarCheck__GrammarResultTextEdit_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__GrammarResultTextEdit_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__GrammarResultTextEdit_Receivers_Callback = int (*)(const TextGrammarCheck__GrammarResultTextEdit*, const char*);
    using TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__GrammarResultTextEdit*, QMetaMethod*);
    using TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__GrammarResultTextEdit*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback textgrammarcheck__grammarresulttextedit_metaobject_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Metacast_Callback textgrammarcheck__grammarresulttextedit_metacast_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Metacall_Callback textgrammarcheck__grammarresulttextedit_metacall_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback textgrammarcheck__grammarresulttextedit_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback textgrammarcheck__grammarresulttextedit_paintevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Event_Callback textgrammarcheck__grammarresulttextedit_event_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback textgrammarcheck__grammarresulttextedit_loadresource_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback textgrammarcheck__grammarresulttextedit_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback textgrammarcheck__grammarresulttextedit_timerevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback textgrammarcheck__grammarresulttextedit_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback textgrammarcheck__grammarresulttextedit_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback textgrammarcheck__grammarresulttextedit_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback textgrammarcheck__grammarresulttextedit_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback textgrammarcheck__grammarresulttextedit_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback textgrammarcheck__grammarresulttextedit_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback textgrammarcheck__grammarresulttextedit_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback textgrammarcheck__grammarresulttextedit_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback textgrammarcheck__grammarresulttextedit_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback textgrammarcheck__grammarresulttextedit_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback textgrammarcheck__grammarresulttextedit_dropevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback textgrammarcheck__grammarresulttextedit_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback textgrammarcheck__grammarresulttextedit_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback textgrammarcheck__grammarresulttextedit_showevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback textgrammarcheck__grammarresulttextedit_changeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback textgrammarcheck__grammarresulttextedit_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback textgrammarcheck__grammarresulttextedit_createmimedatafromselection_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback textgrammarcheck__grammarresulttextedit_insertfrommimedata_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback textgrammarcheck__grammarresulttextedit_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback textgrammarcheck__grammarresulttextedit_scrollcontentsby_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback textgrammarcheck__grammarresulttextedit_dosettextcursor_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback textgrammarcheck__grammarresulttextedit_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback textgrammarcheck__grammarresulttextedit_sizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback textgrammarcheck__grammarresulttextedit_setupviewport_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback textgrammarcheck__grammarresulttextedit_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback textgrammarcheck__grammarresulttextedit_viewportevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback textgrammarcheck__grammarresulttextedit_viewportsizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback textgrammarcheck__grammarresulttextedit_initstyleoption_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DevType_Callback textgrammarcheck__grammarresulttextedit_devtype_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback textgrammarcheck__grammarresulttextedit_setvisible_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback textgrammarcheck__grammarresulttextedit_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback textgrammarcheck__grammarresulttextedit_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback textgrammarcheck__grammarresulttextedit_paintengine_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback textgrammarcheck__grammarresulttextedit_enterevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback textgrammarcheck__grammarresulttextedit_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback textgrammarcheck__grammarresulttextedit_moveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback textgrammarcheck__grammarresulttextedit_closeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback textgrammarcheck__grammarresulttextedit_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback textgrammarcheck__grammarresulttextedit_actionevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback textgrammarcheck__grammarresulttextedit_hideevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback textgrammarcheck__grammarresulttextedit_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Metric_Callback textgrammarcheck__grammarresulttextedit_metric_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback textgrammarcheck__grammarresulttextedit_initpainter_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Redirected_Callback textgrammarcheck__grammarresulttextedit_redirected_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback textgrammarcheck__grammarresulttextedit_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback textgrammarcheck__grammarresulttextedit_childevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback textgrammarcheck__grammarresulttextedit_customevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback textgrammarcheck__grammarresulttextedit_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback textgrammarcheck__grammarresulttextedit_disconnectnotify_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ZoomInF_Callback textgrammarcheck__grammarresulttextedit_zoominf_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins_Callback textgrammarcheck__grammarresulttextedit_setviewportmargins_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ViewportMargins_Callback textgrammarcheck__grammarresulttextedit_viewportmargins_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DrawFrame_Callback textgrammarcheck__grammarresulttextedit_drawframe_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus_Callback textgrammarcheck__grammarresulttextedit_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Create_Callback textgrammarcheck__grammarresulttextedit_create_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Destroy_Callback textgrammarcheck__grammarresulttextedit_destroy_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_FocusNextChild_Callback textgrammarcheck__grammarresulttextedit_focusnextchild_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild_Callback textgrammarcheck__grammarresulttextedit_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Sender_Callback textgrammarcheck__grammarresulttextedit_sender_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex_Callback textgrammarcheck__grammarresulttextedit_sendersignalindex_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Receivers_Callback textgrammarcheck__grammarresulttextedit_receivers_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected_Callback textgrammarcheck__grammarresulttextedit_issignalconnected_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF_Callback textgrammarcheck__grammarresulttextedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__grammarresulttextedit_metaobject_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_metacast_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_metacall_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_paintevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_event_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_loadresource_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_timerevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_keypressevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_resizeevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_dropevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_focusinevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_showevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_changeevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_wheelevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_createmimedatafromselection_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_insertfrommimedata_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_scrollcontentsby_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_dosettextcursor_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_sizehint_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_setupviewport_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_eventfilter_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_viewportevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_viewportsizehint_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_initstyleoption_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_devtype_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_setvisible_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_paintengine_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_enterevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_leaveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_moveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_closeevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_tabletevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_actionevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_hideevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_nativeevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_metric_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_initpainter_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_redirected_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_childevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_customevent_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_connectnotify_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_zoominf_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_setviewportmargins_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_viewportmargins_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_drawframe_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_create_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_destroy_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_sender_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_receivers_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__grammarresulttextedit_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckGrammarResultTextEdit(QWidget* parent) : TextGrammarCheck::GrammarResultTextEdit(parent) {};
    VirtualTextGrammarCheckGrammarResultTextEdit() : TextGrammarCheck::GrammarResultTextEdit() {};

    // Callback setters
    inline void setTextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback(TextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback cb) { textgrammarcheck__grammarresulttextedit_metaobject_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Metacast_Callback(TextGrammarCheck__GrammarResultTextEdit_Metacast_Callback cb) { textgrammarcheck__grammarresulttextedit_metacast_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Metacall_Callback(TextGrammarCheck__GrammarResultTextEdit_Metacall_Callback cb) { textgrammarcheck__grammarresulttextedit_metacall_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_paintevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Event_Callback(TextGrammarCheck__GrammarResultTextEdit_Event_Callback cb) { textgrammarcheck__grammarresulttextedit_event_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback(TextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback cb) { textgrammarcheck__grammarresulttextedit_loadresource_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback(TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback cb) { textgrammarcheck__grammarresulttextedit_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_timerevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback(TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback cb) { textgrammarcheck__grammarresulttextedit_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_dropevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_showevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_changeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback(TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback cb) { textgrammarcheck__grammarresulttextedit_createmimedatafromselection_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback(TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback cb) { textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback(TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback cb) { textgrammarcheck__grammarresulttextedit_insertfrommimedata_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback(TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback cb) { textgrammarcheck__grammarresulttextedit_scrollcontentsby_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback(TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback cb) { textgrammarcheck__grammarresulttextedit_dosettextcursor_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback(TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback cb) { textgrammarcheck__grammarresulttextedit_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback(TextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback cb) { textgrammarcheck__grammarresulttextedit_sizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback(TextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback cb) { textgrammarcheck__grammarresulttextedit_setupviewport_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback(TextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback cb) { textgrammarcheck__grammarresulttextedit_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_viewportevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback(TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback cb) { textgrammarcheck__grammarresulttextedit_viewportsizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback(TextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback cb) { textgrammarcheck__grammarresulttextedit_initstyleoption_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DevType_Callback(TextGrammarCheck__GrammarResultTextEdit_DevType_Callback cb) { textgrammarcheck__grammarresulttextedit_devtype_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback(TextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback cb) { textgrammarcheck__grammarresulttextedit_setvisible_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback(TextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback cb) { textgrammarcheck__grammarresulttextedit_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback(TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback cb) { textgrammarcheck__grammarresulttextedit_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback(TextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback cb) { textgrammarcheck__grammarresulttextedit_paintengine_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_enterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_moveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_closeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_actionevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_hideevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Metric_Callback(TextGrammarCheck__GrammarResultTextEdit_Metric_Callback cb) { textgrammarcheck__grammarresulttextedit_metric_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback(TextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback cb) { textgrammarcheck__grammarresulttextedit_initpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Redirected_Callback(TextGrammarCheck__GrammarResultTextEdit_Redirected_Callback cb) { textgrammarcheck__grammarresulttextedit_redirected_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback(TextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback cb) { textgrammarcheck__grammarresulttextedit_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_childevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback(TextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback cb) { textgrammarcheck__grammarresulttextedit_customevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback(TextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback cb) { textgrammarcheck__grammarresulttextedit_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback(TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback cb) { textgrammarcheck__grammarresulttextedit_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ZoomInF_Callback(TextGrammarCheck__GrammarResultTextEdit_ZoomInF_Callback cb) { textgrammarcheck__grammarresulttextedit_zoominf_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SetViewportMargins_Callback(TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins_Callback cb) { textgrammarcheck__grammarresulttextedit_setviewportmargins_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ViewportMargins_Callback(TextGrammarCheck__GrammarResultTextEdit_ViewportMargins_Callback cb) { textgrammarcheck__grammarresulttextedit_viewportmargins_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DrawFrame_Callback(TextGrammarCheck__GrammarResultTextEdit_DrawFrame_Callback cb) { textgrammarcheck__grammarresulttextedit_drawframe_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus_Callback(TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus_Callback cb) { textgrammarcheck__grammarresulttextedit_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Create_Callback(TextGrammarCheck__GrammarResultTextEdit_Create_Callback cb) { textgrammarcheck__grammarresulttextedit_create_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Destroy_Callback(TextGrammarCheck__GrammarResultTextEdit_Destroy_Callback cb) { textgrammarcheck__grammarresulttextedit_destroy_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusNextChild_Callback(TextGrammarCheck__GrammarResultTextEdit_FocusNextChild_Callback cb) { textgrammarcheck__grammarresulttextedit_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild_Callback(TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild_Callback cb) { textgrammarcheck__grammarresulttextedit_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Sender_Callback(TextGrammarCheck__GrammarResultTextEdit_Sender_Callback cb) { textgrammarcheck__grammarresulttextedit_sender_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex_Callback(TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex_Callback cb) { textgrammarcheck__grammarresulttextedit_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Receivers_Callback(TextGrammarCheck__GrammarResultTextEdit_Receivers_Callback cb) { textgrammarcheck__grammarresulttextedit_receivers_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_IsSignalConnected_Callback(TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected_Callback cb) { textgrammarcheck__grammarresulttextedit_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF_Callback(TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF_Callback cb) { textgrammarcheck__grammarresulttextedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__GrammarResultTextEdit_MetaObject_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_metaobject_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Metacast_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_metacast_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Metacall_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_metacall_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_PaintEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_paintevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Event_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_event_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_LoadResource_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_loadresource_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_TimerEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_timerevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ResizeEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MousePressEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DropEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_dropevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusInEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ShowEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_showevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ChangeEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_changeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_WheelEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_createmimedatafromselection_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_insertfrommimedata_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_scrollcontentsby_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_dosettextcursor_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SizeHint_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_sizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SetupViewport_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_setupviewport_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_EventFilter_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ViewportEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_viewportevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_viewportsizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InitStyleOption_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_initstyleoption_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DevType_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_devtype_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SetVisible_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_setvisible_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_HeightForWidth_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_PaintEngine_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_paintengine_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_EnterEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_enterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_LeaveEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_MoveEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_moveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_CloseEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_closeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_TabletEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ActionEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_actionevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_HideEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_hideevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_NativeEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Metric_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_metric_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_InitPainter_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_initpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Redirected_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_redirected_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SharedPainter_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ChildEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_childevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_CustomEvent_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_customevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ConnectNotify_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ZoomInF_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_zoominf_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SetViewportMargins_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_setviewportmargins_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_ViewportMargins_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_viewportmargins_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_DrawFrame_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_drawframe_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Create_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_create_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Destroy_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_destroy_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusNextChild_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Sender_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_sender_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_Receivers_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_receivers_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__grammarresulttextedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammarresulttextedit_metaobject_isbase) {
            textgrammarcheck__grammarresulttextedit_metaobject_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__grammarresulttextedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammarresulttextedit_metacast_isbase) {
            textgrammarcheck__grammarresulttextedit_metacast_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__grammarresulttextedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammarresulttextedit_metacall_isbase) {
            textgrammarcheck__grammarresulttextedit_metacall_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__grammarresulttextedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_contextmenuevent_isbase) {
            textgrammarcheck__grammarresulttextedit_contextmenuevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__grammarresulttextedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_paintevent_isbase) {
            textgrammarcheck__grammarresulttextedit_paintevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::paintEvent(event);
            return;
        }
        auto paintevent_cb = textgrammarcheck__grammarresulttextedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (textgrammarcheck__grammarresulttextedit_event_isbase) {
            textgrammarcheck__grammarresulttextedit_event_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::event(ev);
        }
        auto event_cb = textgrammarcheck__grammarresulttextedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = ev;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textgrammarcheck__grammarresulttextedit_loadresource_isbase) {
            textgrammarcheck__grammarresulttextedit_loadresource_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::loadResource(typeVal, name);
        }
        auto loadresource_cb = textgrammarcheck__grammarresulttextedit_loadresource_callback;
        if (loadresource_cb) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);

            QVariant* callback_ret = loadresource_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textgrammarcheck__grammarresulttextedit_inputmethodquery_isbase) {
            textgrammarcheck__grammarresulttextedit_inputmethodquery_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::inputMethodQuery(property);
        }
        auto inputmethodquery_cb = textgrammarcheck__grammarresulttextedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(property);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_timerevent_isbase) {
            textgrammarcheck__grammarresulttextedit_timerevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::timerEvent(e);
            return;
        }
        auto timerevent_cb = textgrammarcheck__grammarresulttextedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_keypressevent_isbase) {
            textgrammarcheck__grammarresulttextedit_keypressevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__grammarresulttextedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_keyreleaseevent_isbase) {
            textgrammarcheck__grammarresulttextedit_keyreleaseevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__grammarresulttextedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_resizeevent_isbase) {
            textgrammarcheck__grammarresulttextedit_resizeevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__grammarresulttextedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_mousepressevent_isbase) {
            textgrammarcheck__grammarresulttextedit_mousepressevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__grammarresulttextedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_mousemoveevent_isbase) {
            textgrammarcheck__grammarresulttextedit_mousemoveevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__grammarresulttextedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_mousereleaseevent_isbase) {
            textgrammarcheck__grammarresulttextedit_mousereleaseevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__grammarresulttextedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_isbase) {
            textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::mouseDoubleClickEvent(e);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = e;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammarresulttextedit_focusnextprevchild_isbase) {
            textgrammarcheck__grammarresulttextedit_focusnextprevchild_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__grammarresulttextedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_dragenterevent_isbase) {
            textgrammarcheck__grammarresulttextedit_dragenterevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::dragEnterEvent(e);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__grammarresulttextedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = e;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_dragleaveevent_isbase) {
            textgrammarcheck__grammarresulttextedit_dragleaveevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__grammarresulttextedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_dragmoveevent_isbase) {
            textgrammarcheck__grammarresulttextedit_dragmoveevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__grammarresulttextedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_dropevent_isbase) {
            textgrammarcheck__grammarresulttextedit_dropevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::dropEvent(e);
            return;
        }
        auto dropevent_cb = textgrammarcheck__grammarresulttextedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_focusinevent_isbase) {
            textgrammarcheck__grammarresulttextedit_focusinevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__grammarresulttextedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_focusoutevent_isbase) {
            textgrammarcheck__grammarresulttextedit_focusoutevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__grammarresulttextedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textgrammarcheck__grammarresulttextedit_showevent_isbase) {
            textgrammarcheck__grammarresulttextedit_showevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::showEvent(param1);
            return;
        }
        auto showevent_cb = textgrammarcheck__grammarresulttextedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_changeevent_isbase) {
            textgrammarcheck__grammarresulttextedit_changeevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::changeEvent(e);
            return;
        }
        auto changeevent_cb = textgrammarcheck__grammarresulttextedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_wheelevent_isbase) {
            textgrammarcheck__grammarresulttextedit_wheelevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__grammarresulttextedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textgrammarcheck__grammarresulttextedit_createmimedatafromselection_isbase) {
            textgrammarcheck__grammarresulttextedit_createmimedatafromselection_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::createMimeDataFromSelection();
        }
        auto createmimedatafromselection_cb = textgrammarcheck__grammarresulttextedit_createmimedatafromselection_callback;
        if (createmimedatafromselection_cb) {
            QMimeData* callback_ret = createmimedatafromselection_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_isbase) {
            textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::canInsertFromMimeData(source);
        }
        auto caninsertfrommimedata_cb = textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_callback;
        if (caninsertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            bool callback_ret = caninsertfrommimedata_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textgrammarcheck__grammarresulttextedit_insertfrommimedata_isbase) {
            textgrammarcheck__grammarresulttextedit_insertfrommimedata_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::insertFromMimeData(source);
            return;
        }
        auto insertfrommimedata_cb = textgrammarcheck__grammarresulttextedit_insertfrommimedata_callback;
        if (insertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            insertfrommimedata_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammarresulttextedit_inputmethodevent_isbase) {
            textgrammarcheck__grammarresulttextedit_inputmethodevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__grammarresulttextedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textgrammarcheck__grammarresulttextedit_scrollcontentsby_isbase) {
            textgrammarcheck__grammarresulttextedit_scrollcontentsby_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = textgrammarcheck__grammarresulttextedit_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textgrammarcheck__grammarresulttextedit_dosettextcursor_isbase) {
            textgrammarcheck__grammarresulttextedit_dosettextcursor_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::doSetTextCursor(cursor);
            return;
        }
        auto dosettextcursor_cb = textgrammarcheck__grammarresulttextedit_dosettextcursor_callback;
        if (dosettextcursor_cb) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);

            dosettextcursor_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammarresulttextedit_minimumsizehint_isbase) {
            textgrammarcheck__grammarresulttextedit_minimumsizehint_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__grammarresulttextedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammarresulttextedit_sizehint_isbase) {
            textgrammarcheck__grammarresulttextedit_sizehint_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__grammarresulttextedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textgrammarcheck__grammarresulttextedit_setupviewport_isbase) {
            textgrammarcheck__grammarresulttextedit_setupviewport_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = textgrammarcheck__grammarresulttextedit_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textgrammarcheck__grammarresulttextedit_eventfilter_isbase) {
            textgrammarcheck__grammarresulttextedit_eventfilter_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::eventFilter(param1, param2);
        }
        auto eventfilter_cb = textgrammarcheck__grammarresulttextedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textgrammarcheck__grammarresulttextedit_viewportevent_isbase) {
            textgrammarcheck__grammarresulttextedit_viewportevent_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::viewportEvent(param1);
        }
        auto viewportevent_cb = textgrammarcheck__grammarresulttextedit_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textgrammarcheck__grammarresulttextedit_viewportsizehint_isbase) {
            textgrammarcheck__grammarresulttextedit_viewportsizehint_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::viewportSizeHint();
        }
        auto viewportsizehint_cb = textgrammarcheck__grammarresulttextedit_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textgrammarcheck__grammarresulttextedit_initstyleoption_isbase) {
            textgrammarcheck__grammarresulttextedit_initstyleoption_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = textgrammarcheck__grammarresulttextedit_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammarresulttextedit_devtype_isbase) {
            textgrammarcheck__grammarresulttextedit_devtype_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::devType();
        }
        auto devtype_cb = textgrammarcheck__grammarresulttextedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammarresulttextedit_setvisible_isbase) {
            textgrammarcheck__grammarresulttextedit_setvisible_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__grammarresulttextedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammarresulttextedit_heightforwidth_isbase) {
            textgrammarcheck__grammarresulttextedit_heightforwidth_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__grammarresulttextedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammarresulttextedit_hasheightforwidth_isbase) {
            textgrammarcheck__grammarresulttextedit_hasheightforwidth_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__grammarresulttextedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammarresulttextedit_paintengine_isbase) {
            textgrammarcheck__grammarresulttextedit_paintengine_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__grammarresulttextedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_enterevent_isbase) {
            textgrammarcheck__grammarresulttextedit_enterevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__grammarresulttextedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_leaveevent_isbase) {
            textgrammarcheck__grammarresulttextedit_leaveevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__grammarresulttextedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_moveevent_isbase) {
            textgrammarcheck__grammarresulttextedit_moveevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__grammarresulttextedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_closeevent_isbase) {
            textgrammarcheck__grammarresulttextedit_closeevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = textgrammarcheck__grammarresulttextedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_tabletevent_isbase) {
            textgrammarcheck__grammarresulttextedit_tabletevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__grammarresulttextedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_actionevent_isbase) {
            textgrammarcheck__grammarresulttextedit_actionevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__grammarresulttextedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_hideevent_isbase) {
            textgrammarcheck__grammarresulttextedit_hideevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = textgrammarcheck__grammarresulttextedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammarresulttextedit_nativeevent_isbase) {
            textgrammarcheck__grammarresulttextedit_nativeevent_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__grammarresulttextedit_nativeevent_callback;
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
        return TextGrammarCheck__GrammarResultTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammarresulttextedit_metric_isbase) {
            textgrammarcheck__grammarresulttextedit_metric_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::metric(param1);
        }
        auto metric_cb = textgrammarcheck__grammarresulttextedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammarresulttextedit_initpainter_isbase) {
            textgrammarcheck__grammarresulttextedit_initpainter_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__grammarresulttextedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammarresulttextedit_redirected_isbase) {
            textgrammarcheck__grammarresulttextedit_redirected_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__grammarresulttextedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammarresulttextedit_sharedpainter_isbase) {
            textgrammarcheck__grammarresulttextedit_sharedpainter_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__grammarresulttextedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_childevent_isbase) {
            textgrammarcheck__grammarresulttextedit_childevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__grammarresulttextedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_customevent_isbase) {
            textgrammarcheck__grammarresulttextedit_customevent_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__grammarresulttextedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammarresulttextedit_connectnotify_isbase) {
            textgrammarcheck__grammarresulttextedit_connectnotify_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__grammarresulttextedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammarresulttextedit_disconnectnotify_isbase) {
            textgrammarcheck__grammarresulttextedit_disconnectnotify_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__grammarresulttextedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (textgrammarcheck__grammarresulttextedit_zoominf_isbase) {
            textgrammarcheck__grammarresulttextedit_zoominf_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::zoomInF(range);
            return;
        }
        auto zoominf_cb = textgrammarcheck__grammarresulttextedit_zoominf_callback;
        if (zoominf_cb) {
            float cbval1 = range;

            zoominf_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::zoomInF(range);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (textgrammarcheck__grammarresulttextedit_setviewportmargins_isbase) {
            textgrammarcheck__grammarresulttextedit_setviewportmargins_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = textgrammarcheck__grammarresulttextedit_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (textgrammarcheck__grammarresulttextedit_viewportmargins_isbase) {
            textgrammarcheck__grammarresulttextedit_viewportmargins_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::viewportMargins();
        }
        auto viewportmargins_cb = textgrammarcheck__grammarresulttextedit_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (textgrammarcheck__grammarresulttextedit_drawframe_isbase) {
            textgrammarcheck__grammarresulttextedit_drawframe_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::drawFrame(param1);
            return;
        }
        auto drawframe_cb = textgrammarcheck__grammarresulttextedit_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__grammarresulttextedit_updatemicrofocus_isbase) {
            textgrammarcheck__grammarresulttextedit_updatemicrofocus_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__grammarresulttextedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__grammarresulttextedit_create_isbase) {
            textgrammarcheck__grammarresulttextedit_create_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::create();
            return;
        }
        auto create_cb = textgrammarcheck__grammarresulttextedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__grammarresulttextedit_destroy_isbase) {
            textgrammarcheck__grammarresulttextedit_destroy_isbase = false;
            TextGrammarCheck__GrammarResultTextEdit::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__grammarresulttextedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__grammarresulttextedit_focusnextchild_isbase) {
            textgrammarcheck__grammarresulttextedit_focusnextchild_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__grammarresulttextedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__grammarresulttextedit_focuspreviouschild_isbase) {
            textgrammarcheck__grammarresulttextedit_focuspreviouschild_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__grammarresulttextedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__grammarresulttextedit_sender_isbase) {
            textgrammarcheck__grammarresulttextedit_sender_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::sender();
        }
        auto sender_cb = textgrammarcheck__grammarresulttextedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__grammarresulttextedit_sendersignalindex_isbase) {
            textgrammarcheck__grammarresulttextedit_sendersignalindex_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__grammarresulttextedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__grammarresulttextedit_receivers_isbase) {
            textgrammarcheck__grammarresulttextedit_receivers_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__grammarresulttextedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__grammarresulttextedit_issignalconnected_isbase) {
            textgrammarcheck__grammarresulttextedit_issignalconnected_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__grammarresulttextedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__grammarresulttextedit_getdecodedmetricf_isbase) {
            textgrammarcheck__grammarresulttextedit_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__GrammarResultTextEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__grammarresulttextedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent(TextGrammarCheck::GrammarResultTextEdit* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperContextMenuEvent(TextGrammarCheck::GrammarResultTextEdit* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_PaintEvent(TextGrammarCheck::GrammarResultTextEdit* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperPaintEvent(TextGrammarCheck::GrammarResultTextEdit* self, QPaintEvent* event);
    friend bool TextGrammarCheck__GrammarResultTextEdit_Event(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* ev);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* ev);
    friend void TextGrammarCheck__GrammarResultTextEdit_TimerEvent(TextGrammarCheck::GrammarResultTextEdit* self, QTimerEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperTimerEvent(TextGrammarCheck::GrammarResultTextEdit* self, QTimerEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent(TextGrammarCheck::GrammarResultTextEdit* self, QKeyEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperKeyPressEvent(TextGrammarCheck::GrammarResultTextEdit* self, QKeyEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QKeyEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperKeyReleaseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QKeyEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_ResizeEvent(TextGrammarCheck::GrammarResultTextEdit* self, QResizeEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperResizeEvent(TextGrammarCheck::GrammarResultTextEdit* self, QResizeEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_MousePressEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMousePressEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMouseMoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMouseReleaseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend bool TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild(TextGrammarCheck::GrammarResultTextEdit* self, bool next);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextPrevChild(TextGrammarCheck::GrammarResultTextEdit* self, bool next);
    friend void TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragEnterEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDragEnterEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragEnterEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragLeaveEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDragLeaveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragLeaveEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragMoveEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDragMoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragMoveEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_DropEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDropEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDropEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDropEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_FocusInEvent(TextGrammarCheck::GrammarResultTextEdit* self, QFocusEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperFocusInEvent(TextGrammarCheck::GrammarResultTextEdit* self, QFocusEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent(TextGrammarCheck::GrammarResultTextEdit* self, QFocusEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperFocusOutEvent(TextGrammarCheck::GrammarResultTextEdit* self, QFocusEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_ShowEvent(TextGrammarCheck::GrammarResultTextEdit* self, QShowEvent* param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperShowEvent(TextGrammarCheck::GrammarResultTextEdit* self, QShowEvent* param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_ChangeEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperChangeEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_WheelEvent(TextGrammarCheck::GrammarResultTextEdit* self, QWheelEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperWheelEvent(TextGrammarCheck::GrammarResultTextEdit* self, QWheelEvent* e);
    friend QMimeData* TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend QMimeData* TextGrammarCheck__GrammarResultTextEdit_SuperCreateMimeDataFromSelection(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend bool TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData(const TextGrammarCheck::GrammarResultTextEdit* self, const QMimeData* source);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperCanInsertFromMimeData(const TextGrammarCheck::GrammarResultTextEdit* self, const QMimeData* source);
    friend void TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData(TextGrammarCheck::GrammarResultTextEdit* self, const QMimeData* source);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperInsertFromMimeData(TextGrammarCheck::GrammarResultTextEdit* self, const QMimeData* source);
    friend void TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent(TextGrammarCheck::GrammarResultTextEdit* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodEvent(TextGrammarCheck::GrammarResultTextEdit* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy(TextGrammarCheck::GrammarResultTextEdit* self, int dx, int dy);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperScrollContentsBy(TextGrammarCheck::GrammarResultTextEdit* self, int dx, int dy);
    friend void TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor(TextGrammarCheck::GrammarResultTextEdit* self, const QTextCursor* cursor);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDoSetTextCursor(TextGrammarCheck::GrammarResultTextEdit* self, const QTextCursor* cursor);
    friend bool TextGrammarCheck__GrammarResultTextEdit_EventFilter(TextGrammarCheck::GrammarResultTextEdit* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperEventFilter(TextGrammarCheck::GrammarResultTextEdit* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__GrammarResultTextEdit_ViewportEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* param1);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperViewportEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* param1);
    friend QSize* TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend QSize* TextGrammarCheck__GrammarResultTextEdit_SuperViewportSizeHint(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_InitStyleOption(const TextGrammarCheck::GrammarResultTextEdit* self, QStyleOptionFrame* option);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperInitStyleOption(const TextGrammarCheck::GrammarResultTextEdit* self, QStyleOptionFrame* option);
    friend void TextGrammarCheck__GrammarResultTextEdit_EnterEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperEnterEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_LeaveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperLeaveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_MoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_CloseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperCloseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_TabletEvent(TextGrammarCheck::GrammarResultTextEdit* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperTabletEvent(TextGrammarCheck::GrammarResultTextEdit* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_ActionEvent(TextGrammarCheck::GrammarResultTextEdit* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperActionEvent(TextGrammarCheck::GrammarResultTextEdit* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_HideEvent(TextGrammarCheck::GrammarResultTextEdit* self, QHideEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperHideEvent(TextGrammarCheck::GrammarResultTextEdit* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammarResultTextEdit_NativeEvent(TextGrammarCheck::GrammarResultTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperNativeEvent(TextGrammarCheck::GrammarResultTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextGrammarCheck__GrammarResultTextEdit_Metric(const TextGrammarCheck::GrammarResultTextEdit* self, int param1);
    friend int TextGrammarCheck__GrammarResultTextEdit_SuperMetric(const TextGrammarCheck::GrammarResultTextEdit* self, int param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_InitPainter(const TextGrammarCheck::GrammarResultTextEdit* self, QPainter* painter);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperInitPainter(const TextGrammarCheck::GrammarResultTextEdit* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammarResultTextEdit_Redirected(const TextGrammarCheck::GrammarResultTextEdit* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__GrammarResultTextEdit_SuperRedirected(const TextGrammarCheck::GrammarResultTextEdit* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammarResultTextEdit_SharedPainter(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend QPainter* TextGrammarCheck__GrammarResultTextEdit_SuperSharedPainter(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_ChildEvent(TextGrammarCheck::GrammarResultTextEdit* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperChildEvent(TextGrammarCheck::GrammarResultTextEdit* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_CustomEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperCustomEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_ConnectNotify(TextGrammarCheck::GrammarResultTextEdit* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperConnectNotify(TextGrammarCheck::GrammarResultTextEdit* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify(TextGrammarCheck::GrammarResultTextEdit* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDisconnectNotify(TextGrammarCheck::GrammarResultTextEdit* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultTextEdit_ZoomInF(TextGrammarCheck::GrammarResultTextEdit* self, float range);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperZoomInF(TextGrammarCheck::GrammarResultTextEdit* self, float range);
    friend void TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins(TextGrammarCheck::GrammarResultTextEdit* self, int left, int top, int right, int bottom);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperSetViewportMargins(TextGrammarCheck::GrammarResultTextEdit* self, int left, int top, int right, int bottom);
    friend QMargins* TextGrammarCheck__GrammarResultTextEdit_ViewportMargins(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend QMargins* TextGrammarCheck__GrammarResultTextEdit_SuperViewportMargins(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_DrawFrame(TextGrammarCheck::GrammarResultTextEdit* self, QPainter* param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDrawFrame(TextGrammarCheck::GrammarResultTextEdit* self, QPainter* param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus(TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperUpdateMicroFocus(TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_Create(TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperCreate(TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_Destroy(TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDestroy(TextGrammarCheck::GrammarResultTextEdit* self);
    friend bool TextGrammarCheck__GrammarResultTextEdit_FocusNextChild(TextGrammarCheck::GrammarResultTextEdit* self);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextChild(TextGrammarCheck::GrammarResultTextEdit* self);
    friend bool TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild(TextGrammarCheck::GrammarResultTextEdit* self);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperFocusPreviousChild(TextGrammarCheck::GrammarResultTextEdit* self);
    friend QObject* TextGrammarCheck__GrammarResultTextEdit_Sender(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend QObject* TextGrammarCheck__GrammarResultTextEdit_SuperSender(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend int TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend int TextGrammarCheck__GrammarResultTextEdit_SuperSenderSignalIndex(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend int TextGrammarCheck__GrammarResultTextEdit_Receivers(const TextGrammarCheck::GrammarResultTextEdit* self, const char* signal);
    friend int TextGrammarCheck__GrammarResultTextEdit_SuperReceivers(const TextGrammarCheck::GrammarResultTextEdit* self, const char* signal);
    friend bool TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected(const TextGrammarCheck::GrammarResultTextEdit* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperIsSignalConnected(const TextGrammarCheck::GrammarResultTextEdit* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF(const TextGrammarCheck::GrammarResultTextEdit* self, int metricA, int metricB);
    friend double TextGrammarCheck__GrammarResultTextEdit_SuperGetDecodedMetricF(const TextGrammarCheck::GrammarResultTextEdit* self, int metricA, int metricB);
};

#endif
