#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALPLAINTEXTEDITOR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALPLAINTEXTEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::PlainTextEditor so that we can call protected methods
class VirtualTextCustomEditorPlainTextEditor final : public TextCustomEditor::PlainTextEditor {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorPlainTextEditor = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__PlainTextEditor_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__PlainTextEditor_Metacast_Callback = void* (*)(TextCustomEditor__PlainTextEditor*, const char*);
    using TextCustomEditor__PlainTextEditor_Metacall_Callback = int (*)(TextCustomEditor__PlainTextEditor*, int, int, void**);
    using TextCustomEditor__PlainTextEditor_SetReadOnly_Callback = void (*)(TextCustomEditor__PlainTextEditor*, bool);
    using TextCustomEditor__PlainTextEditor_CreateHighlighter_Callback = void (*)();
    using TextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMenu*, QPoint*);
    using TextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QContextMenuEvent*);
    using TextCustomEditor__PlainTextEditor_Event_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_KeyPressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditor_WheelEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QWheelEvent*);
    using TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback = Sonnet__SpellCheckDecorator* (*)();
    using TextCustomEditor__PlainTextEditor_FocusInEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback = void (*)();
    using TextCustomEditor__PlainTextEditor_ClearDecorator_Callback = void (*)();
    using TextCustomEditor__PlainTextEditor_LoadResource_Callback = QVariant* (*)(TextCustomEditor__PlainTextEditor*, int, QUrl*);
    using TextCustomEditor__PlainTextEditor_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__PlainTextEditor*, int);
    using TextCustomEditor__PlainTextEditor_TimerEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QTimerEvent*);
    using TextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditor_ResizeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QResizeEvent*);
    using TextCustomEditor__PlainTextEditor_PaintEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QPaintEvent*);
    using TextCustomEditor__PlainTextEditor_MousePressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, bool);
    using TextCustomEditor__PlainTextEditor_DragEnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QDragEnterEvent*);
    using TextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QDragLeaveEvent*);
    using TextCustomEditor__PlainTextEditor_DragMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QDragMoveEvent*);
    using TextCustomEditor__PlainTextEditor_DropEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QDropEvent*);
    using TextCustomEditor__PlainTextEditor_FocusOutEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditor_ShowEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QShowEvent*);
    using TextCustomEditor__PlainTextEditor_ChangeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using TextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback = bool (*)(const TextCustomEditor__PlainTextEditor*, QMimeData*);
    using TextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMimeData*);
    using TextCustomEditor__PlainTextEditor_InputMethodEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QInputMethodEvent*);
    using TextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback = void (*)(TextCustomEditor__PlainTextEditor*, int, int);
    using TextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QTextCursor*);
    using TextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__PlainTextEditor_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__PlainTextEditor_SetupViewport_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QWidget*);
    using TextCustomEditor__PlainTextEditor_EventFilter_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, QObject*, QEvent*);
    using TextCustomEditor__PlainTextEditor_ViewportEvent_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__PlainTextEditor_InitStyleOption_Callback = void (*)(const TextCustomEditor__PlainTextEditor*, QStyleOptionFrame*);
    using TextCustomEditor__PlainTextEditor_DevType_Callback = int (*)();
    using TextCustomEditor__PlainTextEditor_SetVisible_Callback = void (*)(TextCustomEditor__PlainTextEditor*, bool);
    using TextCustomEditor__PlainTextEditor_HeightForWidth_Callback = int (*)(const TextCustomEditor__PlainTextEditor*, int);
    using TextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditor_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__PlainTextEditor_EnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QEnterEvent*);
    using TextCustomEditor__PlainTextEditor_LeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_MoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMoveEvent*);
    using TextCustomEditor__PlainTextEditor_CloseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QCloseEvent*);
    using TextCustomEditor__PlainTextEditor_TabletEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QTabletEvent*);
    using TextCustomEditor__PlainTextEditor_ActionEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QActionEvent*);
    using TextCustomEditor__PlainTextEditor_HideEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QHideEvent*);
    using TextCustomEditor__PlainTextEditor_NativeEvent_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__PlainTextEditor_Metric_Callback = int (*)(const TextCustomEditor__PlainTextEditor*, int);
    using TextCustomEditor__PlainTextEditor_InitPainter_Callback = void (*)(const TextCustomEditor__PlainTextEditor*, QPainter*);
    using TextCustomEditor__PlainTextEditor_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__PlainTextEditor*, QPoint*);
    using TextCustomEditor__PlainTextEditor_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__PlainTextEditor_ChildEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QChildEvent*);
    using TextCustomEditor__PlainTextEditor_CustomEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_ConnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditor_DisconnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditor_OverrideShortcut_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditor_HandleShortcut_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditor_SetHighlighter_Callback = void (*)(TextCustomEditor__PlainTextEditor*, Sonnet__Highlighter*);
    using TextCustomEditor__PlainTextEditor_FirstVisibleBlock_Callback = QTextBlock* (*)();
    using TextCustomEditor__PlainTextEditor_ContentOffset_Callback = QPointF* (*)();
    using TextCustomEditor__PlainTextEditor_BlockBoundingRect_Callback = QRectF* (*)(const TextCustomEditor__PlainTextEditor*, QTextBlock*);
    using TextCustomEditor__PlainTextEditor_BlockBoundingGeometry_Callback = QRectF* (*)(const TextCustomEditor__PlainTextEditor*, QTextBlock*);
    using TextCustomEditor__PlainTextEditor_GetPaintContext_Callback = QAbstractTextDocumentLayout__PaintContext* (*)();
    using TextCustomEditor__PlainTextEditor_ZoomInF_Callback = void (*)(TextCustomEditor__PlainTextEditor*, float);
    using TextCustomEditor__PlainTextEditor_SetViewportMargins_Callback = void (*)(TextCustomEditor__PlainTextEditor*, int, int, int, int);
    using TextCustomEditor__PlainTextEditor_ViewportMargins_Callback = QMargins* (*)();
    using TextCustomEditor__PlainTextEditor_DrawFrame_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QPainter*);
    using TextCustomEditor__PlainTextEditor_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__PlainTextEditor_Create_Callback = void (*)();
    using TextCustomEditor__PlainTextEditor_Destroy_Callback = void (*)();
    using TextCustomEditor__PlainTextEditor_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditor_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditor_Sender_Callback = QObject* (*)();
    using TextCustomEditor__PlainTextEditor_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__PlainTextEditor_Receivers_Callback = int (*)(const TextCustomEditor__PlainTextEditor*, const char*);
    using TextCustomEditor__PlainTextEditor_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__PlainTextEditor*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditor_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__PlainTextEditor*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__PlainTextEditor_MetaObject_Callback textcustomeditor__plaintexteditor_metaobject_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Metacast_Callback textcustomeditor__plaintexteditor_metacast_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Metacall_Callback textcustomeditor__plaintexteditor_metacall_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SetReadOnly_Callback textcustomeditor__plaintexteditor_setreadonly_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CreateHighlighter_Callback textcustomeditor__plaintexteditor_createhighlighter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback textcustomeditor__plaintexteditor_addextramenuentry_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback textcustomeditor__plaintexteditor_contextmenuevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Event_Callback textcustomeditor__plaintexteditor_event_callback = nullptr;
    TextCustomEditor__PlainTextEditor_KeyPressEvent_Callback textcustomeditor__plaintexteditor_keypressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_WheelEvent_Callback textcustomeditor__plaintexteditor_wheelevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback textcustomeditor__plaintexteditor_createspellcheckdecorator_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FocusInEvent_Callback textcustomeditor__plaintexteditor_focusinevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback textcustomeditor__plaintexteditor_updatehighlighter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ClearDecorator_Callback textcustomeditor__plaintexteditor_cleardecorator_callback = nullptr;
    TextCustomEditor__PlainTextEditor_LoadResource_Callback textcustomeditor__plaintexteditor_loadresource_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InputMethodQuery_Callback textcustomeditor__plaintexteditor_inputmethodquery_callback = nullptr;
    TextCustomEditor__PlainTextEditor_TimerEvent_Callback textcustomeditor__plaintexteditor_timerevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback textcustomeditor__plaintexteditor_keyreleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ResizeEvent_Callback textcustomeditor__plaintexteditor_resizeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_PaintEvent_Callback textcustomeditor__plaintexteditor_paintevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MousePressEvent_Callback textcustomeditor__plaintexteditor_mousepressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback textcustomeditor__plaintexteditor_mousemoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback textcustomeditor__plaintexteditor_mousereleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback textcustomeditor__plaintexteditor_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback textcustomeditor__plaintexteditor_focusnextprevchild_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DragEnterEvent_Callback textcustomeditor__plaintexteditor_dragenterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback textcustomeditor__plaintexteditor_dragleaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DragMoveEvent_Callback textcustomeditor__plaintexteditor_dragmoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DropEvent_Callback textcustomeditor__plaintexteditor_dropevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FocusOutEvent_Callback textcustomeditor__plaintexteditor_focusoutevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ShowEvent_Callback textcustomeditor__plaintexteditor_showevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ChangeEvent_Callback textcustomeditor__plaintexteditor_changeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback textcustomeditor__plaintexteditor_createmimedatafromselection_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback textcustomeditor__plaintexteditor_caninsertfrommimedata_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback textcustomeditor__plaintexteditor_insertfrommimedata_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InputMethodEvent_Callback textcustomeditor__plaintexteditor_inputmethodevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback textcustomeditor__plaintexteditor_scrollcontentsby_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback textcustomeditor__plaintexteditor_dosettextcursor_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback textcustomeditor__plaintexteditor_minimumsizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SizeHint_Callback textcustomeditor__plaintexteditor_sizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SetupViewport_Callback textcustomeditor__plaintexteditor_setupviewport_callback = nullptr;
    TextCustomEditor__PlainTextEditor_EventFilter_Callback textcustomeditor__plaintexteditor_eventfilter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ViewportEvent_Callback textcustomeditor__plaintexteditor_viewportevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback textcustomeditor__plaintexteditor_viewportsizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InitStyleOption_Callback textcustomeditor__plaintexteditor_initstyleoption_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DevType_Callback textcustomeditor__plaintexteditor_devtype_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SetVisible_Callback textcustomeditor__plaintexteditor_setvisible_callback = nullptr;
    TextCustomEditor__PlainTextEditor_HeightForWidth_Callback textcustomeditor__plaintexteditor_heightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback textcustomeditor__plaintexteditor_hasheightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditor_PaintEngine_Callback textcustomeditor__plaintexteditor_paintengine_callback = nullptr;
    TextCustomEditor__PlainTextEditor_EnterEvent_Callback textcustomeditor__plaintexteditor_enterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_LeaveEvent_Callback textcustomeditor__plaintexteditor_leaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MoveEvent_Callback textcustomeditor__plaintexteditor_moveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CloseEvent_Callback textcustomeditor__plaintexteditor_closeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_TabletEvent_Callback textcustomeditor__plaintexteditor_tabletevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ActionEvent_Callback textcustomeditor__plaintexteditor_actionevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_HideEvent_Callback textcustomeditor__plaintexteditor_hideevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_NativeEvent_Callback textcustomeditor__plaintexteditor_nativeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Metric_Callback textcustomeditor__plaintexteditor_metric_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InitPainter_Callback textcustomeditor__plaintexteditor_initpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Redirected_Callback textcustomeditor__plaintexteditor_redirected_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SharedPainter_Callback textcustomeditor__plaintexteditor_sharedpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ChildEvent_Callback textcustomeditor__plaintexteditor_childevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CustomEvent_Callback textcustomeditor__plaintexteditor_customevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ConnectNotify_Callback textcustomeditor__plaintexteditor_connectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DisconnectNotify_Callback textcustomeditor__plaintexteditor_disconnectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditor_OverrideShortcut_Callback textcustomeditor__plaintexteditor_overrideshortcut_callback = nullptr;
    TextCustomEditor__PlainTextEditor_HandleShortcut_Callback textcustomeditor__plaintexteditor_handleshortcut_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SetHighlighter_Callback textcustomeditor__plaintexteditor_sethighlighter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FirstVisibleBlock_Callback textcustomeditor__plaintexteditor_firstvisibleblock_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ContentOffset_Callback textcustomeditor__plaintexteditor_contentoffset_callback = nullptr;
    TextCustomEditor__PlainTextEditor_BlockBoundingRect_Callback textcustomeditor__plaintexteditor_blockboundingrect_callback = nullptr;
    TextCustomEditor__PlainTextEditor_BlockBoundingGeometry_Callback textcustomeditor__plaintexteditor_blockboundinggeometry_callback = nullptr;
    TextCustomEditor__PlainTextEditor_GetPaintContext_Callback textcustomeditor__plaintexteditor_getpaintcontext_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ZoomInF_Callback textcustomeditor__plaintexteditor_zoominf_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SetViewportMargins_Callback textcustomeditor__plaintexteditor_setviewportmargins_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ViewportMargins_Callback textcustomeditor__plaintexteditor_viewportmargins_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DrawFrame_Callback textcustomeditor__plaintexteditor_drawframe_callback = nullptr;
    TextCustomEditor__PlainTextEditor_UpdateMicroFocus_Callback textcustomeditor__plaintexteditor_updatemicrofocus_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Create_Callback textcustomeditor__plaintexteditor_create_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Destroy_Callback textcustomeditor__plaintexteditor_destroy_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FocusNextChild_Callback textcustomeditor__plaintexteditor_focusnextchild_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FocusPreviousChild_Callback textcustomeditor__plaintexteditor_focuspreviouschild_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Sender_Callback textcustomeditor__plaintexteditor_sender_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SenderSignalIndex_Callback textcustomeditor__plaintexteditor_sendersignalindex_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Receivers_Callback textcustomeditor__plaintexteditor_receivers_callback = nullptr;
    TextCustomEditor__PlainTextEditor_IsSignalConnected_Callback textcustomeditor__plaintexteditor_issignalconnected_callback = nullptr;
    TextCustomEditor__PlainTextEditor_GetDecodedMetricF_Callback textcustomeditor__plaintexteditor_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__plaintexteditor_metaobject_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_metacast_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_metacall_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_setreadonly_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_createhighlighter_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_addextramenuentry_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_event_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_keypressevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_wheelevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_createspellcheckdecorator_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_focusinevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_updatehighlighter_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_cleardecorator_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_loadresource_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_timerevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_resizeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_paintevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_mousepressevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_dragenterevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_dropevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_focusoutevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_showevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_changeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_createmimedatafromselection_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_caninsertfrommimedata_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_insertfrommimedata_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_scrollcontentsby_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_dosettextcursor_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_sizehint_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_setupviewport_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_eventfilter_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_viewportevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_viewportsizehint_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_initstyleoption_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_devtype_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_setvisible_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_heightforwidth_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_paintengine_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_enterevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_leaveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_moveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_closeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_tabletevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_actionevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_hideevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_nativeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_metric_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_initpainter_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_redirected_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_sharedpainter_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_childevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_customevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_connectnotify_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_overrideshortcut_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_handleshortcut_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_sethighlighter_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_firstvisibleblock_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_contentoffset_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_blockboundingrect_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_blockboundinggeometry_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_getpaintcontext_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_zoominf_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_setviewportmargins_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_viewportmargins_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_drawframe_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_create_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_destroy_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_focusnextchild_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_sender_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_receivers_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_issignalconnected_isbase = false;
    mutable bool textcustomeditor__plaintexteditor_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorPlainTextEditor(QWidget* parent) : TextCustomEditor::PlainTextEditor(parent) {};
    VirtualTextCustomEditorPlainTextEditor() : TextCustomEditor::PlainTextEditor() {};

    // Callback setters
    inline void setTextCustomEditor__PlainTextEditor_MetaObject_Callback(TextCustomEditor__PlainTextEditor_MetaObject_Callback cb) { textcustomeditor__plaintexteditor_metaobject_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Metacast_Callback(TextCustomEditor__PlainTextEditor_Metacast_Callback cb) { textcustomeditor__plaintexteditor_metacast_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Metacall_Callback(TextCustomEditor__PlainTextEditor_Metacall_Callback cb) { textcustomeditor__plaintexteditor_metacall_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_SetReadOnly_Callback(TextCustomEditor__PlainTextEditor_SetReadOnly_Callback cb) { textcustomeditor__plaintexteditor_setreadonly_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_CreateHighlighter_Callback(TextCustomEditor__PlainTextEditor_CreateHighlighter_Callback cb) { textcustomeditor__plaintexteditor_createhighlighter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback(TextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback cb) { textcustomeditor__plaintexteditor_addextramenuentry_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback(TextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback cb) { textcustomeditor__plaintexteditor_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Event_Callback(TextCustomEditor__PlainTextEditor_Event_Callback cb) { textcustomeditor__plaintexteditor_event_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_KeyPressEvent_Callback(TextCustomEditor__PlainTextEditor_KeyPressEvent_Callback cb) { textcustomeditor__plaintexteditor_keypressevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_WheelEvent_Callback(TextCustomEditor__PlainTextEditor_WheelEvent_Callback cb) { textcustomeditor__plaintexteditor_wheelevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback(TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback cb) { textcustomeditor__plaintexteditor_createspellcheckdecorator_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_FocusInEvent_Callback(TextCustomEditor__PlainTextEditor_FocusInEvent_Callback cb) { textcustomeditor__plaintexteditor_focusinevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback(TextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback cb) { textcustomeditor__plaintexteditor_updatehighlighter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ClearDecorator_Callback(TextCustomEditor__PlainTextEditor_ClearDecorator_Callback cb) { textcustomeditor__plaintexteditor_cleardecorator_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_LoadResource_Callback(TextCustomEditor__PlainTextEditor_LoadResource_Callback cb) { textcustomeditor__plaintexteditor_loadresource_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_InputMethodQuery_Callback(TextCustomEditor__PlainTextEditor_InputMethodQuery_Callback cb) { textcustomeditor__plaintexteditor_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_TimerEvent_Callback(TextCustomEditor__PlainTextEditor_TimerEvent_Callback cb) { textcustomeditor__plaintexteditor_timerevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback(TextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback cb) { textcustomeditor__plaintexteditor_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ResizeEvent_Callback(TextCustomEditor__PlainTextEditor_ResizeEvent_Callback cb) { textcustomeditor__plaintexteditor_resizeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_PaintEvent_Callback(TextCustomEditor__PlainTextEditor_PaintEvent_Callback cb) { textcustomeditor__plaintexteditor_paintevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_MousePressEvent_Callback(TextCustomEditor__PlainTextEditor_MousePressEvent_Callback cb) { textcustomeditor__plaintexteditor_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback(TextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback cb) { textcustomeditor__plaintexteditor_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback(TextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback cb) { textcustomeditor__plaintexteditor_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback(TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback cb) { textcustomeditor__plaintexteditor_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback(TextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback cb) { textcustomeditor__plaintexteditor_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_DragEnterEvent_Callback(TextCustomEditor__PlainTextEditor_DragEnterEvent_Callback cb) { textcustomeditor__plaintexteditor_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback(TextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback cb) { textcustomeditor__plaintexteditor_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_DragMoveEvent_Callback(TextCustomEditor__PlainTextEditor_DragMoveEvent_Callback cb) { textcustomeditor__plaintexteditor_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_DropEvent_Callback(TextCustomEditor__PlainTextEditor_DropEvent_Callback cb) { textcustomeditor__plaintexteditor_dropevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_FocusOutEvent_Callback(TextCustomEditor__PlainTextEditor_FocusOutEvent_Callback cb) { textcustomeditor__plaintexteditor_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ShowEvent_Callback(TextCustomEditor__PlainTextEditor_ShowEvent_Callback cb) { textcustomeditor__plaintexteditor_showevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ChangeEvent_Callback(TextCustomEditor__PlainTextEditor_ChangeEvent_Callback cb) { textcustomeditor__plaintexteditor_changeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback(TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback cb) { textcustomeditor__plaintexteditor_createmimedatafromselection_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback(TextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback cb) { textcustomeditor__plaintexteditor_caninsertfrommimedata_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback(TextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback cb) { textcustomeditor__plaintexteditor_insertfrommimedata_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_InputMethodEvent_Callback(TextCustomEditor__PlainTextEditor_InputMethodEvent_Callback cb) { textcustomeditor__plaintexteditor_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback(TextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback cb) { textcustomeditor__plaintexteditor_scrollcontentsby_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback(TextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback cb) { textcustomeditor__plaintexteditor_dosettextcursor_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback(TextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback cb) { textcustomeditor__plaintexteditor_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_SizeHint_Callback(TextCustomEditor__PlainTextEditor_SizeHint_Callback cb) { textcustomeditor__plaintexteditor_sizehint_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_SetupViewport_Callback(TextCustomEditor__PlainTextEditor_SetupViewport_Callback cb) { textcustomeditor__plaintexteditor_setupviewport_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_EventFilter_Callback(TextCustomEditor__PlainTextEditor_EventFilter_Callback cb) { textcustomeditor__plaintexteditor_eventfilter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ViewportEvent_Callback(TextCustomEditor__PlainTextEditor_ViewportEvent_Callback cb) { textcustomeditor__plaintexteditor_viewportevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback(TextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback cb) { textcustomeditor__plaintexteditor_viewportsizehint_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_InitStyleOption_Callback(TextCustomEditor__PlainTextEditor_InitStyleOption_Callback cb) { textcustomeditor__plaintexteditor_initstyleoption_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_DevType_Callback(TextCustomEditor__PlainTextEditor_DevType_Callback cb) { textcustomeditor__plaintexteditor_devtype_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_SetVisible_Callback(TextCustomEditor__PlainTextEditor_SetVisible_Callback cb) { textcustomeditor__plaintexteditor_setvisible_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_HeightForWidth_Callback(TextCustomEditor__PlainTextEditor_HeightForWidth_Callback cb) { textcustomeditor__plaintexteditor_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback(TextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback cb) { textcustomeditor__plaintexteditor_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_PaintEngine_Callback(TextCustomEditor__PlainTextEditor_PaintEngine_Callback cb) { textcustomeditor__plaintexteditor_paintengine_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_EnterEvent_Callback(TextCustomEditor__PlainTextEditor_EnterEvent_Callback cb) { textcustomeditor__plaintexteditor_enterevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_LeaveEvent_Callback(TextCustomEditor__PlainTextEditor_LeaveEvent_Callback cb) { textcustomeditor__plaintexteditor_leaveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_MoveEvent_Callback(TextCustomEditor__PlainTextEditor_MoveEvent_Callback cb) { textcustomeditor__plaintexteditor_moveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_CloseEvent_Callback(TextCustomEditor__PlainTextEditor_CloseEvent_Callback cb) { textcustomeditor__plaintexteditor_closeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_TabletEvent_Callback(TextCustomEditor__PlainTextEditor_TabletEvent_Callback cb) { textcustomeditor__plaintexteditor_tabletevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ActionEvent_Callback(TextCustomEditor__PlainTextEditor_ActionEvent_Callback cb) { textcustomeditor__plaintexteditor_actionevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_HideEvent_Callback(TextCustomEditor__PlainTextEditor_HideEvent_Callback cb) { textcustomeditor__plaintexteditor_hideevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_NativeEvent_Callback(TextCustomEditor__PlainTextEditor_NativeEvent_Callback cb) { textcustomeditor__plaintexteditor_nativeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Metric_Callback(TextCustomEditor__PlainTextEditor_Metric_Callback cb) { textcustomeditor__plaintexteditor_metric_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_InitPainter_Callback(TextCustomEditor__PlainTextEditor_InitPainter_Callback cb) { textcustomeditor__plaintexteditor_initpainter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Redirected_Callback(TextCustomEditor__PlainTextEditor_Redirected_Callback cb) { textcustomeditor__plaintexteditor_redirected_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_SharedPainter_Callback(TextCustomEditor__PlainTextEditor_SharedPainter_Callback cb) { textcustomeditor__plaintexteditor_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ChildEvent_Callback(TextCustomEditor__PlainTextEditor_ChildEvent_Callback cb) { textcustomeditor__plaintexteditor_childevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_CustomEvent_Callback(TextCustomEditor__PlainTextEditor_CustomEvent_Callback cb) { textcustomeditor__plaintexteditor_customevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ConnectNotify_Callback(TextCustomEditor__PlainTextEditor_ConnectNotify_Callback cb) { textcustomeditor__plaintexteditor_connectnotify_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_DisconnectNotify_Callback(TextCustomEditor__PlainTextEditor_DisconnectNotify_Callback cb) { textcustomeditor__plaintexteditor_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_OverrideShortcut_Callback(TextCustomEditor__PlainTextEditor_OverrideShortcut_Callback cb) { textcustomeditor__plaintexteditor_overrideshortcut_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_HandleShortcut_Callback(TextCustomEditor__PlainTextEditor_HandleShortcut_Callback cb) { textcustomeditor__plaintexteditor_handleshortcut_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_SetHighlighter_Callback(TextCustomEditor__PlainTextEditor_SetHighlighter_Callback cb) { textcustomeditor__plaintexteditor_sethighlighter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_FirstVisibleBlock_Callback(TextCustomEditor__PlainTextEditor_FirstVisibleBlock_Callback cb) { textcustomeditor__plaintexteditor_firstvisibleblock_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ContentOffset_Callback(TextCustomEditor__PlainTextEditor_ContentOffset_Callback cb) { textcustomeditor__plaintexteditor_contentoffset_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_BlockBoundingRect_Callback(TextCustomEditor__PlainTextEditor_BlockBoundingRect_Callback cb) { textcustomeditor__plaintexteditor_blockboundingrect_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_BlockBoundingGeometry_Callback(TextCustomEditor__PlainTextEditor_BlockBoundingGeometry_Callback cb) { textcustomeditor__plaintexteditor_blockboundinggeometry_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_GetPaintContext_Callback(TextCustomEditor__PlainTextEditor_GetPaintContext_Callback cb) { textcustomeditor__plaintexteditor_getpaintcontext_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ZoomInF_Callback(TextCustomEditor__PlainTextEditor_ZoomInF_Callback cb) { textcustomeditor__plaintexteditor_zoominf_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_SetViewportMargins_Callback(TextCustomEditor__PlainTextEditor_SetViewportMargins_Callback cb) { textcustomeditor__plaintexteditor_setviewportmargins_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_ViewportMargins_Callback(TextCustomEditor__PlainTextEditor_ViewportMargins_Callback cb) { textcustomeditor__plaintexteditor_viewportmargins_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_DrawFrame_Callback(TextCustomEditor__PlainTextEditor_DrawFrame_Callback cb) { textcustomeditor__plaintexteditor_drawframe_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_UpdateMicroFocus_Callback(TextCustomEditor__PlainTextEditor_UpdateMicroFocus_Callback cb) { textcustomeditor__plaintexteditor_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Create_Callback(TextCustomEditor__PlainTextEditor_Create_Callback cb) { textcustomeditor__plaintexteditor_create_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Destroy_Callback(TextCustomEditor__PlainTextEditor_Destroy_Callback cb) { textcustomeditor__plaintexteditor_destroy_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_FocusNextChild_Callback(TextCustomEditor__PlainTextEditor_FocusNextChild_Callback cb) { textcustomeditor__plaintexteditor_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_FocusPreviousChild_Callback(TextCustomEditor__PlainTextEditor_FocusPreviousChild_Callback cb) { textcustomeditor__plaintexteditor_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Sender_Callback(TextCustomEditor__PlainTextEditor_Sender_Callback cb) { textcustomeditor__plaintexteditor_sender_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_SenderSignalIndex_Callback(TextCustomEditor__PlainTextEditor_SenderSignalIndex_Callback cb) { textcustomeditor__plaintexteditor_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_Receivers_Callback(TextCustomEditor__PlainTextEditor_Receivers_Callback cb) { textcustomeditor__plaintexteditor_receivers_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_IsSignalConnected_Callback(TextCustomEditor__PlainTextEditor_IsSignalConnected_Callback cb) { textcustomeditor__plaintexteditor_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditor_GetDecodedMetricF_Callback(TextCustomEditor__PlainTextEditor_GetDecodedMetricF_Callback cb) { textcustomeditor__plaintexteditor_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__PlainTextEditor_MetaObject_IsBase(bool value) const { textcustomeditor__plaintexteditor_metaobject_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Metacast_IsBase(bool value) const { textcustomeditor__plaintexteditor_metacast_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Metacall_IsBase(bool value) const { textcustomeditor__plaintexteditor_metacall_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_SetReadOnly_IsBase(bool value) const { textcustomeditor__plaintexteditor_setreadonly_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_CreateHighlighter_IsBase(bool value) const { textcustomeditor__plaintexteditor_createhighlighter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_AddExtraMenuEntry_IsBase(bool value) const { textcustomeditor__plaintexteditor_addextramenuentry_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Event_IsBase(bool value) const { textcustomeditor__plaintexteditor_event_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_KeyPressEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_keypressevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_WheelEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_wheelevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_IsBase(bool value) const { textcustomeditor__plaintexteditor_createspellcheckdecorator_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_FocusInEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_focusinevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_UpdateHighLighter_IsBase(bool value) const { textcustomeditor__plaintexteditor_updatehighlighter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ClearDecorator_IsBase(bool value) const { textcustomeditor__plaintexteditor_cleardecorator_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_LoadResource_IsBase(bool value) const { textcustomeditor__plaintexteditor_loadresource_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_InputMethodQuery_IsBase(bool value) const { textcustomeditor__plaintexteditor_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_TimerEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_timerevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ResizeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_resizeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_PaintEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_paintevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_MousePressEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__plaintexteditor_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_DragEnterEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_DragMoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_DropEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_dropevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_FocusOutEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ShowEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_showevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ChangeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_changeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_IsBase(bool value) const { textcustomeditor__plaintexteditor_createmimedatafromselection_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_CanInsertFromMimeData_IsBase(bool value) const { textcustomeditor__plaintexteditor_caninsertfrommimedata_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_InsertFromMimeData_IsBase(bool value) const { textcustomeditor__plaintexteditor_insertfrommimedata_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_InputMethodEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ScrollContentsBy_IsBase(bool value) const { textcustomeditor__plaintexteditor_scrollcontentsby_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_DoSetTextCursor_IsBase(bool value) const { textcustomeditor__plaintexteditor_dosettextcursor_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__plaintexteditor_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_SizeHint_IsBase(bool value) const { textcustomeditor__plaintexteditor_sizehint_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_SetupViewport_IsBase(bool value) const { textcustomeditor__plaintexteditor_setupviewport_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_EventFilter_IsBase(bool value) const { textcustomeditor__plaintexteditor_eventfilter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ViewportEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_viewportevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ViewportSizeHint_IsBase(bool value) const { textcustomeditor__plaintexteditor_viewportsizehint_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_InitStyleOption_IsBase(bool value) const { textcustomeditor__plaintexteditor_initstyleoption_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_DevType_IsBase(bool value) const { textcustomeditor__plaintexteditor_devtype_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_SetVisible_IsBase(bool value) const { textcustomeditor__plaintexteditor_setvisible_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_HeightForWidth_IsBase(bool value) const { textcustomeditor__plaintexteditor_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__plaintexteditor_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_PaintEngine_IsBase(bool value) const { textcustomeditor__plaintexteditor_paintengine_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_EnterEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_enterevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_LeaveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_leaveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_MoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_moveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_CloseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_closeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_TabletEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_tabletevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ActionEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_actionevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_HideEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_hideevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_NativeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_nativeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Metric_IsBase(bool value) const { textcustomeditor__plaintexteditor_metric_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_InitPainter_IsBase(bool value) const { textcustomeditor__plaintexteditor_initpainter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Redirected_IsBase(bool value) const { textcustomeditor__plaintexteditor_redirected_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_SharedPainter_IsBase(bool value) const { textcustomeditor__plaintexteditor_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ChildEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_childevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_CustomEvent_IsBase(bool value) const { textcustomeditor__plaintexteditor_customevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ConnectNotify_IsBase(bool value) const { textcustomeditor__plaintexteditor_connectnotify_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_DisconnectNotify_IsBase(bool value) const { textcustomeditor__plaintexteditor_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_OverrideShortcut_IsBase(bool value) const { textcustomeditor__plaintexteditor_overrideshortcut_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_HandleShortcut_IsBase(bool value) const { textcustomeditor__plaintexteditor_handleshortcut_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_SetHighlighter_IsBase(bool value) const { textcustomeditor__plaintexteditor_sethighlighter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_FirstVisibleBlock_IsBase(bool value) const { textcustomeditor__plaintexteditor_firstvisibleblock_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ContentOffset_IsBase(bool value) const { textcustomeditor__plaintexteditor_contentoffset_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_BlockBoundingRect_IsBase(bool value) const { textcustomeditor__plaintexteditor_blockboundingrect_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_BlockBoundingGeometry_IsBase(bool value) const { textcustomeditor__plaintexteditor_blockboundinggeometry_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_GetPaintContext_IsBase(bool value) const { textcustomeditor__plaintexteditor_getpaintcontext_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ZoomInF_IsBase(bool value) const { textcustomeditor__plaintexteditor_zoominf_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_SetViewportMargins_IsBase(bool value) const { textcustomeditor__plaintexteditor_setviewportmargins_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_ViewportMargins_IsBase(bool value) const { textcustomeditor__plaintexteditor_viewportmargins_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_DrawFrame_IsBase(bool value) const { textcustomeditor__plaintexteditor_drawframe_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__plaintexteditor_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Create_IsBase(bool value) const { textcustomeditor__plaintexteditor_create_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Destroy_IsBase(bool value) const { textcustomeditor__plaintexteditor_destroy_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_FocusNextChild_IsBase(bool value) const { textcustomeditor__plaintexteditor_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__plaintexteditor_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Sender_IsBase(bool value) const { textcustomeditor__plaintexteditor_sender_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__plaintexteditor_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_Receivers_IsBase(bool value) const { textcustomeditor__plaintexteditor_receivers_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_IsSignalConnected_IsBase(bool value) const { textcustomeditor__plaintexteditor_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditor_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__plaintexteditor_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__plaintexteditor_metaobject_isbase) {
            textcustomeditor__plaintexteditor_metaobject_isbase = false;
            return TextCustomEditor__PlainTextEditor::metaObject();
        }
        auto metaobject_cb = textcustomeditor__plaintexteditor_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__plaintexteditor_metacast_isbase) {
            textcustomeditor__plaintexteditor_metacast_isbase = false;
            return TextCustomEditor__PlainTextEditor::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__plaintexteditor_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__plaintexteditor_metacall_isbase) {
            textcustomeditor__plaintexteditor_metacall_isbase = false;
            return TextCustomEditor__PlainTextEditor::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__plaintexteditor_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (textcustomeditor__plaintexteditor_setreadonly_isbase) {
            textcustomeditor__plaintexteditor_setreadonly_isbase = false;
            TextCustomEditor__PlainTextEditor::setReadOnly(readOnly);
            return;
        }
        auto setreadonly_cb = textcustomeditor__plaintexteditor_setreadonly_callback;
        if (setreadonly_cb) {
            bool cbval1 = readOnly;
            setreadonly_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::setReadOnly(readOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (textcustomeditor__plaintexteditor_createhighlighter_isbase) {
            textcustomeditor__plaintexteditor_createhighlighter_isbase = false;
            TextCustomEditor__PlainTextEditor::createHighlighter();
            return;
        }
        auto createhighlighter_cb = textcustomeditor__plaintexteditor_createhighlighter_callback;
        if (createhighlighter_cb) {
            createhighlighter_cb();
            return;
        }
        TextCustomEditor__PlainTextEditor::createHighlighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraMenuEntry(QMenu* menu, QPoint pos) override {
        if (textcustomeditor__plaintexteditor_addextramenuentry_isbase) {
            textcustomeditor__plaintexteditor_addextramenuentry_isbase = false;
            TextCustomEditor__PlainTextEditor::addExtraMenuEntry(menu, pos);
            return;
        }
        auto addextramenuentry_cb = textcustomeditor__plaintexteditor_addextramenuentry_callback;
        if (addextramenuentry_cb) {
            QMenu* cbval1 = menu;
            QPoint* cbval2 = new QPoint(pos);
            addextramenuentry_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextEditor::addExtraMenuEntry(menu, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__plaintexteditor_contextmenuevent_isbase) {
            textcustomeditor__plaintexteditor_contextmenuevent_isbase = false;
            TextCustomEditor__PlainTextEditor::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__plaintexteditor_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;
            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (textcustomeditor__plaintexteditor_event_isbase) {
            textcustomeditor__plaintexteditor_event_isbase = false;
            return TextCustomEditor__PlainTextEditor::event(ev);
        }
        auto event_cb = textcustomeditor__plaintexteditor_event_callback;
        if (event_cb) {
            QEvent* cbval1 = ev;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditor_keypressevent_isbase) {
            textcustomeditor__plaintexteditor_keypressevent_isbase = false;
            TextCustomEditor__PlainTextEditor::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__plaintexteditor_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__plaintexteditor_wheelevent_isbase) {
            textcustomeditor__plaintexteditor_wheelevent_isbase = false;
            TextCustomEditor__PlainTextEditor::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__plaintexteditor_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual Sonnet::SpellCheckDecorator* createSpellCheckDecorator() override {
        if (textcustomeditor__plaintexteditor_createspellcheckdecorator_isbase) {
            textcustomeditor__plaintexteditor_createspellcheckdecorator_isbase = false;
            return TextCustomEditor__PlainTextEditor::createSpellCheckDecorator();
        }
        auto createspellcheckdecorator_cb = textcustomeditor__plaintexteditor_createspellcheckdecorator_callback;
        if (createspellcheckdecorator_cb) {
            Sonnet__SpellCheckDecorator* callback_ret = createspellcheckdecorator_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::createSpellCheckDecorator();
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditor_focusinevent_isbase) {
            textcustomeditor__plaintexteditor_focusinevent_isbase = false;
            TextCustomEditor__PlainTextEditor::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__plaintexteditor_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;
            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateHighLighter() override {
        if (textcustomeditor__plaintexteditor_updatehighlighter_isbase) {
            textcustomeditor__plaintexteditor_updatehighlighter_isbase = false;
            TextCustomEditor__PlainTextEditor::updateHighLighter();
            return;
        }
        auto updatehighlighter_cb = textcustomeditor__plaintexteditor_updatehighlighter_callback;
        if (updatehighlighter_cb) {
            updatehighlighter_cb();
            return;
        }
        TextCustomEditor__PlainTextEditor::updateHighLighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearDecorator() override {
        if (textcustomeditor__plaintexteditor_cleardecorator_isbase) {
            textcustomeditor__plaintexteditor_cleardecorator_isbase = false;
            TextCustomEditor__PlainTextEditor::clearDecorator();
            return;
        }
        auto cleardecorator_cb = textcustomeditor__plaintexteditor_cleardecorator_callback;
        if (cleardecorator_cb) {
            cleardecorator_cb();
            return;
        }
        TextCustomEditor__PlainTextEditor::clearDecorator();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textcustomeditor__plaintexteditor_loadresource_isbase) {
            textcustomeditor__plaintexteditor_loadresource_isbase = false;
            return TextCustomEditor__PlainTextEditor::loadResource(typeVal, name);
        }
        auto loadresource_cb = textcustomeditor__plaintexteditor_loadresource_callback;
        if (loadresource_cb) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = loadresource_cb(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textcustomeditor__plaintexteditor_inputmethodquery_isbase) {
            textcustomeditor__plaintexteditor_inputmethodquery_isbase = false;
            return TextCustomEditor__PlainTextEditor::inputMethodQuery(property);
        }
        auto inputmethodquery_cb = textcustomeditor__plaintexteditor_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textcustomeditor__plaintexteditor_timerevent_isbase) {
            textcustomeditor__plaintexteditor_timerevent_isbase = false;
            TextCustomEditor__PlainTextEditor::timerEvent(e);
            return;
        }
        auto timerevent_cb = textcustomeditor__plaintexteditor_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;
            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textcustomeditor__plaintexteditor_keyreleaseevent_isbase) {
            textcustomeditor__plaintexteditor_keyreleaseevent_isbase = false;
            TextCustomEditor__PlainTextEditor::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__plaintexteditor_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textcustomeditor__plaintexteditor_resizeevent_isbase) {
            textcustomeditor__plaintexteditor_resizeevent_isbase = false;
            TextCustomEditor__PlainTextEditor::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = textcustomeditor__plaintexteditor_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;
            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textcustomeditor__plaintexteditor_paintevent_isbase) {
            textcustomeditor__plaintexteditor_paintevent_isbase = false;
            TextCustomEditor__PlainTextEditor::paintEvent(e);
            return;
        }
        auto paintevent_cb = textcustomeditor__plaintexteditor_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;
            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textcustomeditor__plaintexteditor_mousepressevent_isbase) {
            textcustomeditor__plaintexteditor_mousepressevent_isbase = false;
            TextCustomEditor__PlainTextEditor::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__plaintexteditor_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;
            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (textcustomeditor__plaintexteditor_mousemoveevent_isbase) {
            textcustomeditor__plaintexteditor_mousemoveevent_isbase = false;
            TextCustomEditor__PlainTextEditor::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__plaintexteditor_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textcustomeditor__plaintexteditor_mousereleaseevent_isbase) {
            textcustomeditor__plaintexteditor_mousereleaseevent_isbase = false;
            TextCustomEditor__PlainTextEditor::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__plaintexteditor_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textcustomeditor__plaintexteditor_mousedoubleclickevent_isbase) {
            textcustomeditor__plaintexteditor_mousedoubleclickevent_isbase = false;
            TextCustomEditor__PlainTextEditor::mouseDoubleClickEvent(e);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__plaintexteditor_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = e;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__plaintexteditor_focusnextprevchild_isbase) {
            textcustomeditor__plaintexteditor_focusnextprevchild_isbase = false;
            return TextCustomEditor__PlainTextEditor::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__plaintexteditor_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;
            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textcustomeditor__plaintexteditor_dragenterevent_isbase) {
            textcustomeditor__plaintexteditor_dragenterevent_isbase = false;
            TextCustomEditor__PlainTextEditor::dragEnterEvent(e);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__plaintexteditor_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = e;
            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textcustomeditor__plaintexteditor_dragleaveevent_isbase) {
            textcustomeditor__plaintexteditor_dragleaveevent_isbase = false;
            TextCustomEditor__PlainTextEditor::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__plaintexteditor_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textcustomeditor__plaintexteditor_dragmoveevent_isbase) {
            textcustomeditor__plaintexteditor_dragmoveevent_isbase = false;
            TextCustomEditor__PlainTextEditor::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__plaintexteditor_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textcustomeditor__plaintexteditor_dropevent_isbase) {
            textcustomeditor__plaintexteditor_dropevent_isbase = false;
            TextCustomEditor__PlainTextEditor::dropEvent(e);
            return;
        }
        auto dropevent_cb = textcustomeditor__plaintexteditor_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;
            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textcustomeditor__plaintexteditor_focusoutevent_isbase) {
            textcustomeditor__plaintexteditor_focusoutevent_isbase = false;
            TextCustomEditor__PlainTextEditor::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__plaintexteditor_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;
            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textcustomeditor__plaintexteditor_showevent_isbase) {
            textcustomeditor__plaintexteditor_showevent_isbase = false;
            TextCustomEditor__PlainTextEditor::showEvent(param1);
            return;
        }
        auto showevent_cb = textcustomeditor__plaintexteditor_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;
            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textcustomeditor__plaintexteditor_changeevent_isbase) {
            textcustomeditor__plaintexteditor_changeevent_isbase = false;
            TextCustomEditor__PlainTextEditor::changeEvent(e);
            return;
        }
        auto changeevent_cb = textcustomeditor__plaintexteditor_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;
            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textcustomeditor__plaintexteditor_createmimedatafromselection_isbase) {
            textcustomeditor__plaintexteditor_createmimedatafromselection_isbase = false;
            return TextCustomEditor__PlainTextEditor::createMimeDataFromSelection();
        }
        auto createmimedatafromselection_cb = textcustomeditor__plaintexteditor_createmimedatafromselection_callback;
        if (createmimedatafromselection_cb) {
            QMimeData* callback_ret = createmimedatafromselection_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textcustomeditor__plaintexteditor_caninsertfrommimedata_isbase) {
            textcustomeditor__plaintexteditor_caninsertfrommimedata_isbase = false;
            return TextCustomEditor__PlainTextEditor::canInsertFromMimeData(source);
        }
        auto caninsertfrommimedata_cb = textcustomeditor__plaintexteditor_caninsertfrommimedata_callback;
        if (caninsertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = caninsertfrommimedata_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textcustomeditor__plaintexteditor_insertfrommimedata_isbase) {
            textcustomeditor__plaintexteditor_insertfrommimedata_isbase = false;
            TextCustomEditor__PlainTextEditor::insertFromMimeData(source);
            return;
        }
        auto insertfrommimedata_cb = textcustomeditor__plaintexteditor_insertfrommimedata_callback;
        if (insertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;
            insertfrommimedata_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__plaintexteditor_inputmethodevent_isbase) {
            textcustomeditor__plaintexteditor_inputmethodevent_isbase = false;
            TextCustomEditor__PlainTextEditor::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__plaintexteditor_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textcustomeditor__plaintexteditor_scrollcontentsby_isbase) {
            textcustomeditor__plaintexteditor_scrollcontentsby_isbase = false;
            TextCustomEditor__PlainTextEditor::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = textcustomeditor__plaintexteditor_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;
            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextEditor::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textcustomeditor__plaintexteditor_dosettextcursor_isbase) {
            textcustomeditor__plaintexteditor_dosettextcursor_isbase = false;
            TextCustomEditor__PlainTextEditor::doSetTextCursor(cursor);
            return;
        }
        auto dosettextcursor_cb = textcustomeditor__plaintexteditor_dosettextcursor_callback;
        if (dosettextcursor_cb) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            dosettextcursor_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__plaintexteditor_minimumsizehint_isbase) {
            textcustomeditor__plaintexteditor_minimumsizehint_isbase = false;
            return TextCustomEditor__PlainTextEditor::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__plaintexteditor_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__plaintexteditor_sizehint_isbase) {
            textcustomeditor__plaintexteditor_sizehint_isbase = false;
            return TextCustomEditor__PlainTextEditor::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__plaintexteditor_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textcustomeditor__plaintexteditor_setupviewport_isbase) {
            textcustomeditor__plaintexteditor_setupviewport_isbase = false;
            TextCustomEditor__PlainTextEditor::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = textcustomeditor__plaintexteditor_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;
            setupviewport_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textcustomeditor__plaintexteditor_eventfilter_isbase) {
            textcustomeditor__plaintexteditor_eventfilter_isbase = false;
            return TextCustomEditor__PlainTextEditor::eventFilter(param1, param2);
        }
        auto eventfilter_cb = textcustomeditor__plaintexteditor_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textcustomeditor__plaintexteditor_viewportevent_isbase) {
            textcustomeditor__plaintexteditor_viewportevent_isbase = false;
            return TextCustomEditor__PlainTextEditor::viewportEvent(param1);
        }
        auto viewportevent_cb = textcustomeditor__plaintexteditor_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textcustomeditor__plaintexteditor_viewportsizehint_isbase) {
            textcustomeditor__plaintexteditor_viewportsizehint_isbase = false;
            return TextCustomEditor__PlainTextEditor::viewportSizeHint();
        }
        auto viewportsizehint_cb = textcustomeditor__plaintexteditor_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textcustomeditor__plaintexteditor_initstyleoption_isbase) {
            textcustomeditor__plaintexteditor_initstyleoption_isbase = false;
            TextCustomEditor__PlainTextEditor::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = textcustomeditor__plaintexteditor_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;
            initstyleoption_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__plaintexteditor_devtype_isbase) {
            textcustomeditor__plaintexteditor_devtype_isbase = false;
            return TextCustomEditor__PlainTextEditor::devType();
        }
        auto devtype_cb = textcustomeditor__plaintexteditor_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__plaintexteditor_setvisible_isbase) {
            textcustomeditor__plaintexteditor_setvisible_isbase = false;
            TextCustomEditor__PlainTextEditor::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__plaintexteditor_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;
            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__plaintexteditor_heightforwidth_isbase) {
            textcustomeditor__plaintexteditor_heightforwidth_isbase = false;
            return TextCustomEditor__PlainTextEditor::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__plaintexteditor_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;
            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__plaintexteditor_hasheightforwidth_isbase) {
            textcustomeditor__plaintexteditor_hasheightforwidth_isbase = false;
            return TextCustomEditor__PlainTextEditor::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__plaintexteditor_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__plaintexteditor_paintengine_isbase) {
            textcustomeditor__plaintexteditor_paintengine_isbase = false;
            return TextCustomEditor__PlainTextEditor::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__plaintexteditor_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__plaintexteditor_enterevent_isbase) {
            textcustomeditor__plaintexteditor_enterevent_isbase = false;
            TextCustomEditor__PlainTextEditor::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__plaintexteditor_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;
            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditor_leaveevent_isbase) {
            textcustomeditor__plaintexteditor_leaveevent_isbase = false;
            TextCustomEditor__PlainTextEditor::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__plaintexteditor_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;
            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__plaintexteditor_moveevent_isbase) {
            textcustomeditor__plaintexteditor_moveevent_isbase = false;
            TextCustomEditor__PlainTextEditor::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__plaintexteditor_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;
            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__plaintexteditor_closeevent_isbase) {
            textcustomeditor__plaintexteditor_closeevent_isbase = false;
            TextCustomEditor__PlainTextEditor::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__plaintexteditor_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;
            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__plaintexteditor_tabletevent_isbase) {
            textcustomeditor__plaintexteditor_tabletevent_isbase = false;
            TextCustomEditor__PlainTextEditor::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__plaintexteditor_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;
            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__plaintexteditor_actionevent_isbase) {
            textcustomeditor__plaintexteditor_actionevent_isbase = false;
            TextCustomEditor__PlainTextEditor::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__plaintexteditor_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;
            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__plaintexteditor_hideevent_isbase) {
            textcustomeditor__plaintexteditor_hideevent_isbase = false;
            TextCustomEditor__PlainTextEditor::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__plaintexteditor_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;
            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__plaintexteditor_nativeevent_isbase) {
            textcustomeditor__plaintexteditor_nativeevent_isbase = false;
            return TextCustomEditor__PlainTextEditor::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__plaintexteditor_nativeevent_callback;
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
        return TextCustomEditor__PlainTextEditor::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__plaintexteditor_metric_isbase) {
            textcustomeditor__plaintexteditor_metric_isbase = false;
            return TextCustomEditor__PlainTextEditor::metric(param1);
        }
        auto metric_cb = textcustomeditor__plaintexteditor_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__plaintexteditor_initpainter_isbase) {
            textcustomeditor__plaintexteditor_initpainter_isbase = false;
            TextCustomEditor__PlainTextEditor::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__plaintexteditor_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;
            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__plaintexteditor_redirected_isbase) {
            textcustomeditor__plaintexteditor_redirected_isbase = false;
            return TextCustomEditor__PlainTextEditor::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__plaintexteditor_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__plaintexteditor_sharedpainter_isbase) {
            textcustomeditor__plaintexteditor_sharedpainter_isbase = false;
            return TextCustomEditor__PlainTextEditor::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__plaintexteditor_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__plaintexteditor_childevent_isbase) {
            textcustomeditor__plaintexteditor_childevent_isbase = false;
            TextCustomEditor__PlainTextEditor::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__plaintexteditor_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditor_customevent_isbase) {
            textcustomeditor__plaintexteditor_customevent_isbase = false;
            TextCustomEditor__PlainTextEditor::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__plaintexteditor_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditor_connectnotify_isbase) {
            textcustomeditor__plaintexteditor_connectnotify_isbase = false;
            TextCustomEditor__PlainTextEditor::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__plaintexteditor_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditor_disconnectnotify_isbase) {
            textcustomeditor__plaintexteditor_disconnectnotify_isbase = false;
            TextCustomEditor__PlainTextEditor::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__plaintexteditor_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool overrideShortcut(QKeyEvent* event) {
        if (textcustomeditor__plaintexteditor_overrideshortcut_isbase) {
            textcustomeditor__plaintexteditor_overrideshortcut_isbase = false;
            return TextCustomEditor__PlainTextEditor::overrideShortcut(event);
        }
        auto overrideshortcut_cb = textcustomeditor__plaintexteditor_overrideshortcut_callback;
        if (overrideshortcut_cb) {
            QKeyEvent* cbval1 = event;
            bool callback_ret = overrideshortcut_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::overrideShortcut(event);
    }

    // Virtual method for C ABI access and custom callback
    bool handleShortcut(QKeyEvent* event) {
        if (textcustomeditor__plaintexteditor_handleshortcut_isbase) {
            textcustomeditor__plaintexteditor_handleshortcut_isbase = false;
            return TextCustomEditor__PlainTextEditor::handleShortcut(event);
        }
        auto handleshortcut_cb = textcustomeditor__plaintexteditor_handleshortcut_callback;
        if (handleshortcut_cb) {
            QKeyEvent* cbval1 = event;
            bool callback_ret = handleshortcut_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::handleShortcut(event);
    }

    // Virtual method for C ABI access and custom callback
    void setHighlighter(Sonnet::Highlighter* _highLighter) {
        if (textcustomeditor__plaintexteditor_sethighlighter_isbase) {
            textcustomeditor__plaintexteditor_sethighlighter_isbase = false;
            TextCustomEditor__PlainTextEditor::setHighlighter(_highLighter);
            return;
        }
        auto sethighlighter_cb = textcustomeditor__plaintexteditor_sethighlighter_callback;
        if (sethighlighter_cb) {
            Sonnet__Highlighter* cbval1 = _highLighter;
            sethighlighter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::setHighlighter(_highLighter);
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock firstVisibleBlock() const {
        if (textcustomeditor__plaintexteditor_firstvisibleblock_isbase) {
            textcustomeditor__plaintexteditor_firstvisibleblock_isbase = false;
            return TextCustomEditor__PlainTextEditor::firstVisibleBlock();
        }
        auto firstvisibleblock_cb = textcustomeditor__plaintexteditor_firstvisibleblock_callback;
        if (firstvisibleblock_cb) {
            QTextBlock* callback_ret = firstvisibleblock_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::firstVisibleBlock();
    }

    // Virtual method for C ABI access and custom callback
    QPointF contentOffset() const {
        if (textcustomeditor__plaintexteditor_contentoffset_isbase) {
            textcustomeditor__plaintexteditor_contentoffset_isbase = false;
            return TextCustomEditor__PlainTextEditor::contentOffset();
        }
        auto contentoffset_cb = textcustomeditor__plaintexteditor_contentoffset_callback;
        if (contentoffset_cb) {
            QPointF* callback_ret = contentoffset_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::contentOffset();
    }

    // Virtual method for C ABI access and custom callback
    QRectF blockBoundingRect(const QTextBlock& block) const {
        if (textcustomeditor__plaintexteditor_blockboundingrect_isbase) {
            textcustomeditor__plaintexteditor_blockboundingrect_isbase = false;
            return TextCustomEditor__PlainTextEditor::blockBoundingRect(block);
        }
        auto blockboundingrect_cb = textcustomeditor__plaintexteditor_blockboundingrect_callback;
        if (blockboundingrect_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            QRectF* callback_ret = blockboundingrect_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::blockBoundingRect(block);
    }

    // Virtual method for C ABI access and custom callback
    QRectF blockBoundingGeometry(const QTextBlock& block) const {
        if (textcustomeditor__plaintexteditor_blockboundinggeometry_isbase) {
            textcustomeditor__plaintexteditor_blockboundinggeometry_isbase = false;
            return TextCustomEditor__PlainTextEditor::blockBoundingGeometry(block);
        }
        auto blockboundinggeometry_cb = textcustomeditor__plaintexteditor_blockboundinggeometry_callback;
        if (blockboundinggeometry_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            QRectF* callback_ret = blockboundinggeometry_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::blockBoundingGeometry(block);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractTextDocumentLayout::PaintContext getPaintContext() const {
        if (textcustomeditor__plaintexteditor_getpaintcontext_isbase) {
            textcustomeditor__plaintexteditor_getpaintcontext_isbase = false;
            return TextCustomEditor__PlainTextEditor::getPaintContext();
        }
        auto getpaintcontext_cb = textcustomeditor__plaintexteditor_getpaintcontext_callback;
        if (getpaintcontext_cb) {
            QAbstractTextDocumentLayout__PaintContext* callback_ret = getpaintcontext_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::getPaintContext();
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (textcustomeditor__plaintexteditor_zoominf_isbase) {
            textcustomeditor__plaintexteditor_zoominf_isbase = false;
            TextCustomEditor__PlainTextEditor::zoomInF(range);
            return;
        }
        auto zoominf_cb = textcustomeditor__plaintexteditor_zoominf_callback;
        if (zoominf_cb) {
            float cbval1 = range;
            zoominf_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::zoomInF(range);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (textcustomeditor__plaintexteditor_setviewportmargins_isbase) {
            textcustomeditor__plaintexteditor_setviewportmargins_isbase = false;
            TextCustomEditor__PlainTextEditor::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = textcustomeditor__plaintexteditor_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;
            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        TextCustomEditor__PlainTextEditor::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (textcustomeditor__plaintexteditor_viewportmargins_isbase) {
            textcustomeditor__plaintexteditor_viewportmargins_isbase = false;
            return TextCustomEditor__PlainTextEditor::viewportMargins();
        }
        auto viewportmargins_cb = textcustomeditor__plaintexteditor_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (textcustomeditor__plaintexteditor_drawframe_isbase) {
            textcustomeditor__plaintexteditor_drawframe_isbase = false;
            TextCustomEditor__PlainTextEditor::drawFrame(param1);
            return;
        }
        auto drawframe_cb = textcustomeditor__plaintexteditor_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;
            drawframe_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__plaintexteditor_updatemicrofocus_isbase) {
            textcustomeditor__plaintexteditor_updatemicrofocus_isbase = false;
            TextCustomEditor__PlainTextEditor::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__plaintexteditor_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__PlainTextEditor::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__plaintexteditor_create_isbase) {
            textcustomeditor__plaintexteditor_create_isbase = false;
            TextCustomEditor__PlainTextEditor::create();
            return;
        }
        auto create_cb = textcustomeditor__plaintexteditor_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__PlainTextEditor::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__plaintexteditor_destroy_isbase) {
            textcustomeditor__plaintexteditor_destroy_isbase = false;
            TextCustomEditor__PlainTextEditor::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__plaintexteditor_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__PlainTextEditor::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__plaintexteditor_focusnextchild_isbase) {
            textcustomeditor__plaintexteditor_focusnextchild_isbase = false;
            return TextCustomEditor__PlainTextEditor::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__plaintexteditor_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__plaintexteditor_focuspreviouschild_isbase) {
            textcustomeditor__plaintexteditor_focuspreviouschild_isbase = false;
            return TextCustomEditor__PlainTextEditor::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__plaintexteditor_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__plaintexteditor_sender_isbase) {
            textcustomeditor__plaintexteditor_sender_isbase = false;
            return TextCustomEditor__PlainTextEditor::sender();
        }
        auto sender_cb = textcustomeditor__plaintexteditor_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__plaintexteditor_sendersignalindex_isbase) {
            textcustomeditor__plaintexteditor_sendersignalindex_isbase = false;
            return TextCustomEditor__PlainTextEditor::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__plaintexteditor_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__plaintexteditor_receivers_isbase) {
            textcustomeditor__plaintexteditor_receivers_isbase = false;
            return TextCustomEditor__PlainTextEditor::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__plaintexteditor_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__plaintexteditor_issignalconnected_isbase) {
            textcustomeditor__plaintexteditor_issignalconnected_isbase = false;
            return TextCustomEditor__PlainTextEditor::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__plaintexteditor_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__plaintexteditor_getdecodedmetricf_isbase) {
            textcustomeditor__plaintexteditor_getdecodedmetricf_isbase = false;
            return TextCustomEditor__PlainTextEditor::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__plaintexteditor_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);
            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextCustomEditor__PlainTextEditor_AddExtraMenuEntry(TextCustomEditor::PlainTextEditor* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__PlainTextEditor_SuperAddExtraMenuEntry(TextCustomEditor::PlainTextEditor* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__PlainTextEditor_ContextMenuEvent(TextCustomEditor::PlainTextEditor* self, QContextMenuEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperContextMenuEvent(TextCustomEditor::PlainTextEditor* self, QContextMenuEvent* event);
    friend bool TextCustomEditor__PlainTextEditor_Event(TextCustomEditor::PlainTextEditor* self, QEvent* ev);
    friend bool TextCustomEditor__PlainTextEditor_SuperEvent(TextCustomEditor::PlainTextEditor* self, QEvent* ev);
    friend void TextCustomEditor__PlainTextEditor_KeyPressEvent(TextCustomEditor::PlainTextEditor* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperKeyPressEvent(TextCustomEditor::PlainTextEditor* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditor_WheelEvent(TextCustomEditor::PlainTextEditor* self, QWheelEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperWheelEvent(TextCustomEditor::PlainTextEditor* self, QWheelEvent* event);
    friend Sonnet__SpellCheckDecorator* TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator(TextCustomEditor::PlainTextEditor* self);
    friend Sonnet__SpellCheckDecorator* TextCustomEditor__PlainTextEditor_SuperCreateSpellCheckDecorator(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_FocusInEvent(TextCustomEditor::PlainTextEditor* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperFocusInEvent(TextCustomEditor::PlainTextEditor* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditor_UpdateHighLighter(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperUpdateHighLighter(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_ClearDecorator(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperClearDecorator(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_TimerEvent(TextCustomEditor::PlainTextEditor* self, QTimerEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperTimerEvent(TextCustomEditor::PlainTextEditor* self, QTimerEvent* e);
    friend void TextCustomEditor__PlainTextEditor_KeyReleaseEvent(TextCustomEditor::PlainTextEditor* self, QKeyEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperKeyReleaseEvent(TextCustomEditor::PlainTextEditor* self, QKeyEvent* e);
    friend void TextCustomEditor__PlainTextEditor_ResizeEvent(TextCustomEditor::PlainTextEditor* self, QResizeEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperResizeEvent(TextCustomEditor::PlainTextEditor* self, QResizeEvent* e);
    friend void TextCustomEditor__PlainTextEditor_PaintEvent(TextCustomEditor::PlainTextEditor* self, QPaintEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperPaintEvent(TextCustomEditor::PlainTextEditor* self, QPaintEvent* e);
    friend void TextCustomEditor__PlainTextEditor_MousePressEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperMousePressEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_MouseMoveEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperMouseMoveEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_MouseReleaseEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperMouseReleaseEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperMouseDoubleClickEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend bool TextCustomEditor__PlainTextEditor_FocusNextPrevChild(TextCustomEditor::PlainTextEditor* self, bool next);
    friend bool TextCustomEditor__PlainTextEditor_SuperFocusNextPrevChild(TextCustomEditor::PlainTextEditor* self, bool next);
    friend void TextCustomEditor__PlainTextEditor_DragEnterEvent(TextCustomEditor::PlainTextEditor* self, QDragEnterEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperDragEnterEvent(TextCustomEditor::PlainTextEditor* self, QDragEnterEvent* e);
    friend void TextCustomEditor__PlainTextEditor_DragLeaveEvent(TextCustomEditor::PlainTextEditor* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperDragLeaveEvent(TextCustomEditor::PlainTextEditor* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__PlainTextEditor_DragMoveEvent(TextCustomEditor::PlainTextEditor* self, QDragMoveEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperDragMoveEvent(TextCustomEditor::PlainTextEditor* self, QDragMoveEvent* e);
    friend void TextCustomEditor__PlainTextEditor_DropEvent(TextCustomEditor::PlainTextEditor* self, QDropEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperDropEvent(TextCustomEditor::PlainTextEditor* self, QDropEvent* e);
    friend void TextCustomEditor__PlainTextEditor_FocusOutEvent(TextCustomEditor::PlainTextEditor* self, QFocusEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperFocusOutEvent(TextCustomEditor::PlainTextEditor* self, QFocusEvent* e);
    friend void TextCustomEditor__PlainTextEditor_ShowEvent(TextCustomEditor::PlainTextEditor* self, QShowEvent* param1);
    friend void TextCustomEditor__PlainTextEditor_SuperShowEvent(TextCustomEditor::PlainTextEditor* self, QShowEvent* param1);
    friend void TextCustomEditor__PlainTextEditor_ChangeEvent(TextCustomEditor::PlainTextEditor* self, QEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperChangeEvent(TextCustomEditor::PlainTextEditor* self, QEvent* e);
    friend QMimeData* TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection(const TextCustomEditor::PlainTextEditor* self);
    friend QMimeData* TextCustomEditor__PlainTextEditor_SuperCreateMimeDataFromSelection(const TextCustomEditor::PlainTextEditor* self);
    friend bool TextCustomEditor__PlainTextEditor_CanInsertFromMimeData(const TextCustomEditor::PlainTextEditor* self, const QMimeData* source);
    friend bool TextCustomEditor__PlainTextEditor_SuperCanInsertFromMimeData(const TextCustomEditor::PlainTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__PlainTextEditor_InsertFromMimeData(TextCustomEditor::PlainTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__PlainTextEditor_SuperInsertFromMimeData(TextCustomEditor::PlainTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__PlainTextEditor_InputMethodEvent(TextCustomEditor::PlainTextEditor* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__PlainTextEditor_SuperInputMethodEvent(TextCustomEditor::PlainTextEditor* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__PlainTextEditor_ScrollContentsBy(TextCustomEditor::PlainTextEditor* self, int dx, int dy);
    friend void TextCustomEditor__PlainTextEditor_SuperScrollContentsBy(TextCustomEditor::PlainTextEditor* self, int dx, int dy);
    friend void TextCustomEditor__PlainTextEditor_DoSetTextCursor(TextCustomEditor::PlainTextEditor* self, const QTextCursor* cursor);
    friend void TextCustomEditor__PlainTextEditor_SuperDoSetTextCursor(TextCustomEditor::PlainTextEditor* self, const QTextCursor* cursor);
    friend bool TextCustomEditor__PlainTextEditor_EventFilter(TextCustomEditor::PlainTextEditor* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__PlainTextEditor_SuperEventFilter(TextCustomEditor::PlainTextEditor* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__PlainTextEditor_ViewportEvent(TextCustomEditor::PlainTextEditor* self, QEvent* param1);
    friend bool TextCustomEditor__PlainTextEditor_SuperViewportEvent(TextCustomEditor::PlainTextEditor* self, QEvent* param1);
    friend QSize* TextCustomEditor__PlainTextEditor_ViewportSizeHint(const TextCustomEditor::PlainTextEditor* self);
    friend QSize* TextCustomEditor__PlainTextEditor_SuperViewportSizeHint(const TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_InitStyleOption(const TextCustomEditor::PlainTextEditor* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__PlainTextEditor_SuperInitStyleOption(const TextCustomEditor::PlainTextEditor* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__PlainTextEditor_EnterEvent(TextCustomEditor::PlainTextEditor* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperEnterEvent(TextCustomEditor::PlainTextEditor* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditor_LeaveEvent(TextCustomEditor::PlainTextEditor* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperLeaveEvent(TextCustomEditor::PlainTextEditor* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditor_MoveEvent(TextCustomEditor::PlainTextEditor* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperMoveEvent(TextCustomEditor::PlainTextEditor* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditor_CloseEvent(TextCustomEditor::PlainTextEditor* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperCloseEvent(TextCustomEditor::PlainTextEditor* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditor_TabletEvent(TextCustomEditor::PlainTextEditor* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperTabletEvent(TextCustomEditor::PlainTextEditor* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditor_ActionEvent(TextCustomEditor::PlainTextEditor* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperActionEvent(TextCustomEditor::PlainTextEditor* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditor_HideEvent(TextCustomEditor::PlainTextEditor* self, QHideEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperHideEvent(TextCustomEditor::PlainTextEditor* self, QHideEvent* event);
    friend bool TextCustomEditor__PlainTextEditor_NativeEvent(TextCustomEditor::PlainTextEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__PlainTextEditor_SuperNativeEvent(TextCustomEditor::PlainTextEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextCustomEditor__PlainTextEditor_Metric(const TextCustomEditor::PlainTextEditor* self, int param1);
    friend int TextCustomEditor__PlainTextEditor_SuperMetric(const TextCustomEditor::PlainTextEditor* self, int param1);
    friend void TextCustomEditor__PlainTextEditor_InitPainter(const TextCustomEditor::PlainTextEditor* self, QPainter* painter);
    friend void TextCustomEditor__PlainTextEditor_SuperInitPainter(const TextCustomEditor::PlainTextEditor* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__PlainTextEditor_Redirected(const TextCustomEditor::PlainTextEditor* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__PlainTextEditor_SuperRedirected(const TextCustomEditor::PlainTextEditor* self, QPoint* offset);
    friend QPainter* TextCustomEditor__PlainTextEditor_SharedPainter(const TextCustomEditor::PlainTextEditor* self);
    friend QPainter* TextCustomEditor__PlainTextEditor_SuperSharedPainter(const TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_ChildEvent(TextCustomEditor::PlainTextEditor* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperChildEvent(TextCustomEditor::PlainTextEditor* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditor_CustomEvent(TextCustomEditor::PlainTextEditor* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperCustomEvent(TextCustomEditor::PlainTextEditor* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditor_ConnectNotify(TextCustomEditor::PlainTextEditor* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditor_SuperConnectNotify(TextCustomEditor::PlainTextEditor* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditor_DisconnectNotify(TextCustomEditor::PlainTextEditor* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditor_SuperDisconnectNotify(TextCustomEditor::PlainTextEditor* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__PlainTextEditor_OverrideShortcut(TextCustomEditor::PlainTextEditor* self, QKeyEvent* event);
    friend bool TextCustomEditor__PlainTextEditor_SuperOverrideShortcut(TextCustomEditor::PlainTextEditor* self, QKeyEvent* event);
    friend bool TextCustomEditor__PlainTextEditor_HandleShortcut(TextCustomEditor::PlainTextEditor* self, QKeyEvent* event);
    friend bool TextCustomEditor__PlainTextEditor_SuperHandleShortcut(TextCustomEditor::PlainTextEditor* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SetHighlighter(TextCustomEditor::PlainTextEditor* self, Sonnet__Highlighter* _highLighter);
    friend void TextCustomEditor__PlainTextEditor_SuperSetHighlighter(TextCustomEditor::PlainTextEditor* self, Sonnet__Highlighter* _highLighter);
    friend QTextBlock* TextCustomEditor__PlainTextEditor_FirstVisibleBlock(const TextCustomEditor::PlainTextEditor* self);
    friend QTextBlock* TextCustomEditor__PlainTextEditor_SuperFirstVisibleBlock(const TextCustomEditor::PlainTextEditor* self);
    friend QPointF* TextCustomEditor__PlainTextEditor_ContentOffset(const TextCustomEditor::PlainTextEditor* self);
    friend QPointF* TextCustomEditor__PlainTextEditor_SuperContentOffset(const TextCustomEditor::PlainTextEditor* self);
    friend QRectF* TextCustomEditor__PlainTextEditor_BlockBoundingRect(const TextCustomEditor::PlainTextEditor* self, const QTextBlock* block);
    friend QRectF* TextCustomEditor__PlainTextEditor_SuperBlockBoundingRect(const TextCustomEditor::PlainTextEditor* self, const QTextBlock* block);
    friend QRectF* TextCustomEditor__PlainTextEditor_BlockBoundingGeometry(const TextCustomEditor::PlainTextEditor* self, const QTextBlock* block);
    friend QRectF* TextCustomEditor__PlainTextEditor_SuperBlockBoundingGeometry(const TextCustomEditor::PlainTextEditor* self, const QTextBlock* block);
    friend QAbstractTextDocumentLayout__PaintContext* TextCustomEditor__PlainTextEditor_GetPaintContext(const TextCustomEditor::PlainTextEditor* self);
    friend QAbstractTextDocumentLayout__PaintContext* TextCustomEditor__PlainTextEditor_SuperGetPaintContext(const TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_ZoomInF(TextCustomEditor::PlainTextEditor* self, float range);
    friend void TextCustomEditor__PlainTextEditor_SuperZoomInF(TextCustomEditor::PlainTextEditor* self, float range);
    friend void TextCustomEditor__PlainTextEditor_SetViewportMargins(TextCustomEditor::PlainTextEditor* self, int left, int top, int right, int bottom);
    friend void TextCustomEditor__PlainTextEditor_SuperSetViewportMargins(TextCustomEditor::PlainTextEditor* self, int left, int top, int right, int bottom);
    friend QMargins* TextCustomEditor__PlainTextEditor_ViewportMargins(const TextCustomEditor::PlainTextEditor* self);
    friend QMargins* TextCustomEditor__PlainTextEditor_SuperViewportMargins(const TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_DrawFrame(TextCustomEditor::PlainTextEditor* self, QPainter* param1);
    friend void TextCustomEditor__PlainTextEditor_SuperDrawFrame(TextCustomEditor::PlainTextEditor* self, QPainter* param1);
    friend void TextCustomEditor__PlainTextEditor_UpdateMicroFocus(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperUpdateMicroFocus(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_Create(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperCreate(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_Destroy(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperDestroy(TextCustomEditor::PlainTextEditor* self);
    friend bool TextCustomEditor__PlainTextEditor_FocusNextChild(TextCustomEditor::PlainTextEditor* self);
    friend bool TextCustomEditor__PlainTextEditor_SuperFocusNextChild(TextCustomEditor::PlainTextEditor* self);
    friend bool TextCustomEditor__PlainTextEditor_FocusPreviousChild(TextCustomEditor::PlainTextEditor* self);
    friend bool TextCustomEditor__PlainTextEditor_SuperFocusPreviousChild(TextCustomEditor::PlainTextEditor* self);
    friend QObject* TextCustomEditor__PlainTextEditor_Sender(const TextCustomEditor::PlainTextEditor* self);
    friend QObject* TextCustomEditor__PlainTextEditor_SuperSender(const TextCustomEditor::PlainTextEditor* self);
    friend int TextCustomEditor__PlainTextEditor_SenderSignalIndex(const TextCustomEditor::PlainTextEditor* self);
    friend int TextCustomEditor__PlainTextEditor_SuperSenderSignalIndex(const TextCustomEditor::PlainTextEditor* self);
    friend int TextCustomEditor__PlainTextEditor_Receivers(const TextCustomEditor::PlainTextEditor* self, const char* signal);
    friend int TextCustomEditor__PlainTextEditor_SuperReceivers(const TextCustomEditor::PlainTextEditor* self, const char* signal);
    friend bool TextCustomEditor__PlainTextEditor_IsSignalConnected(const TextCustomEditor::PlainTextEditor* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__PlainTextEditor_SuperIsSignalConnected(const TextCustomEditor::PlainTextEditor* self, const QMetaMethod* signal);
    friend double TextCustomEditor__PlainTextEditor_GetDecodedMetricF(const TextCustomEditor::PlainTextEditor* self, int metricA, int metricB);
    friend double TextCustomEditor__PlainTextEditor_SuperGetDecodedMetricF(const TextCustomEditor::PlainTextEditor* self, int metricA, int metricB);
};

#endif
