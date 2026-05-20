#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorTextEdit so that we can call protected methods
class VirtualTextTranslatorTranslatorTextEdit final : public TextTranslator::TranslatorTextEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualTextTranslatorTranslatorTextEdit = true;

    // Virtual class public types (including callbacks)
    using TextTranslator__TranslatorTextEdit_MetaObject_Callback = QMetaObject* (*)();
    using TextTranslator__TranslatorTextEdit_Metacast_Callback = void* (*)(TextTranslator__TranslatorTextEdit*, const char*);
    using TextTranslator__TranslatorTextEdit_Metacall_Callback = int (*)(TextTranslator__TranslatorTextEdit*, int, int, void**);
    using TextTranslator__TranslatorTextEdit_DropEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QDropEvent*);
    using TextTranslator__TranslatorTextEdit_LoadResource_Callback = QVariant* (*)(TextTranslator__TranslatorTextEdit*, int, QUrl*);
    using TextTranslator__TranslatorTextEdit_InputMethodQuery_Callback = QVariant* (*)(const TextTranslator__TranslatorTextEdit*, int);
    using TextTranslator__TranslatorTextEdit_Event_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_TimerEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QTimerEvent*);
    using TextTranslator__TranslatorTextEdit_KeyPressEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QKeyEvent*);
    using TextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QKeyEvent*);
    using TextTranslator__TranslatorTextEdit_ResizeEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QResizeEvent*);
    using TextTranslator__TranslatorTextEdit_PaintEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QPaintEvent*);
    using TextTranslator__TranslatorTextEdit_MousePressEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMouseEvent*);
    using TextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMouseEvent*);
    using TextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMouseEvent*);
    using TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMouseEvent*);
    using TextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, bool);
    using TextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QContextMenuEvent*);
    using TextTranslator__TranslatorTextEdit_DragEnterEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QDragEnterEvent*);
    using TextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QDragLeaveEvent*);
    using TextTranslator__TranslatorTextEdit_DragMoveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QDragMoveEvent*);
    using TextTranslator__TranslatorTextEdit_FocusInEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QFocusEvent*);
    using TextTranslator__TranslatorTextEdit_FocusOutEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QFocusEvent*);
    using TextTranslator__TranslatorTextEdit_ShowEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QShowEvent*);
    using TextTranslator__TranslatorTextEdit_ChangeEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_WheelEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QWheelEvent*);
    using TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using TextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback = bool (*)(const TextTranslator__TranslatorTextEdit*, QMimeData*);
    using TextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMimeData*);
    using TextTranslator__TranslatorTextEdit_InputMethodEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QInputMethodEvent*);
    using TextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback = void (*)(TextTranslator__TranslatorTextEdit*, int, int);
    using TextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QTextCursor*);
    using TextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback = QSize* (*)();
    using TextTranslator__TranslatorTextEdit_SizeHint_Callback = QSize* (*)();
    using TextTranslator__TranslatorTextEdit_SetupViewport_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QWidget*);
    using TextTranslator__TranslatorTextEdit_EventFilter_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, QObject*, QEvent*);
    using TextTranslator__TranslatorTextEdit_ViewportEvent_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback = QSize* (*)();
    using TextTranslator__TranslatorTextEdit_InitStyleOption_Callback = void (*)(const TextTranslator__TranslatorTextEdit*, QStyleOptionFrame*);
    using TextTranslator__TranslatorTextEdit_DevType_Callback = int (*)();
    using TextTranslator__TranslatorTextEdit_SetVisible_Callback = void (*)(TextTranslator__TranslatorTextEdit*, bool);
    using TextTranslator__TranslatorTextEdit_HeightForWidth_Callback = int (*)(const TextTranslator__TranslatorTextEdit*, int);
    using TextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback = bool (*)();
    using TextTranslator__TranslatorTextEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using TextTranslator__TranslatorTextEdit_EnterEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QEnterEvent*);
    using TextTranslator__TranslatorTextEdit_LeaveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_MoveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMoveEvent*);
    using TextTranslator__TranslatorTextEdit_CloseEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QCloseEvent*);
    using TextTranslator__TranslatorTextEdit_TabletEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QTabletEvent*);
    using TextTranslator__TranslatorTextEdit_ActionEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QActionEvent*);
    using TextTranslator__TranslatorTextEdit_HideEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QHideEvent*);
    using TextTranslator__TranslatorTextEdit_NativeEvent_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, libqt_string, void*, intptr_t*);
    using TextTranslator__TranslatorTextEdit_Metric_Callback = int (*)(const TextTranslator__TranslatorTextEdit*, int);
    using TextTranslator__TranslatorTextEdit_InitPainter_Callback = void (*)(const TextTranslator__TranslatorTextEdit*, QPainter*);
    using TextTranslator__TranslatorTextEdit_Redirected_Callback = QPaintDevice* (*)(const TextTranslator__TranslatorTextEdit*, QPoint*);
    using TextTranslator__TranslatorTextEdit_SharedPainter_Callback = QPainter* (*)();
    using TextTranslator__TranslatorTextEdit_ChildEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QChildEvent*);
    using TextTranslator__TranslatorTextEdit_CustomEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMetaMethod*);
    using TextTranslator__TranslatorTextEdit_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMetaMethod*);
    using TextTranslator__TranslatorTextEdit_FirstVisibleBlock_Callback = QTextBlock* (*)();
    using TextTranslator__TranslatorTextEdit_ContentOffset_Callback = QPointF* (*)();
    using TextTranslator__TranslatorTextEdit_BlockBoundingRect_Callback = QRectF* (*)(const TextTranslator__TranslatorTextEdit*, QTextBlock*);
    using TextTranslator__TranslatorTextEdit_BlockBoundingGeometry_Callback = QRectF* (*)(const TextTranslator__TranslatorTextEdit*, QTextBlock*);
    using TextTranslator__TranslatorTextEdit_GetPaintContext_Callback = QAbstractTextDocumentLayout__PaintContext* (*)();
    using TextTranslator__TranslatorTextEdit_ZoomInF_Callback = void (*)(TextTranslator__TranslatorTextEdit*, float);
    using TextTranslator__TranslatorTextEdit_SetViewportMargins_Callback = void (*)(TextTranslator__TranslatorTextEdit*, int, int, int, int);
    using TextTranslator__TranslatorTextEdit_ViewportMargins_Callback = QMargins* (*)();
    using TextTranslator__TranslatorTextEdit_DrawFrame_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QPainter*);
    using TextTranslator__TranslatorTextEdit_UpdateMicroFocus_Callback = void (*)();
    using TextTranslator__TranslatorTextEdit_Create_Callback = void (*)();
    using TextTranslator__TranslatorTextEdit_Destroy_Callback = void (*)();
    using TextTranslator__TranslatorTextEdit_FocusNextChild_Callback = bool (*)();
    using TextTranslator__TranslatorTextEdit_FocusPreviousChild_Callback = bool (*)();
    using TextTranslator__TranslatorTextEdit_Sender_Callback = QObject* (*)();
    using TextTranslator__TranslatorTextEdit_SenderSignalIndex_Callback = int (*)();
    using TextTranslator__TranslatorTextEdit_Receivers_Callback = int (*)(const TextTranslator__TranslatorTextEdit*, const char*);
    using TextTranslator__TranslatorTextEdit_IsSignalConnected_Callback = bool (*)(const TextTranslator__TranslatorTextEdit*, QMetaMethod*);
    using TextTranslator__TranslatorTextEdit_GetDecodedMetricF_Callback = double (*)(const TextTranslator__TranslatorTextEdit*, int, int);

  protected:
    // Instance callback storage
    TextTranslator__TranslatorTextEdit_MetaObject_Callback texttranslator__translatortextedit_metaobject_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Metacast_Callback texttranslator__translatortextedit_metacast_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Metacall_Callback texttranslator__translatortextedit_metacall_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DropEvent_Callback texttranslator__translatortextedit_dropevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_LoadResource_Callback texttranslator__translatortextedit_loadresource_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InputMethodQuery_Callback texttranslator__translatortextedit_inputmethodquery_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Event_Callback texttranslator__translatortextedit_event_callback = nullptr;
    TextTranslator__TranslatorTextEdit_TimerEvent_Callback texttranslator__translatortextedit_timerevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_KeyPressEvent_Callback texttranslator__translatortextedit_keypressevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback texttranslator__translatortextedit_keyreleaseevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ResizeEvent_Callback texttranslator__translatortextedit_resizeevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_PaintEvent_Callback texttranslator__translatortextedit_paintevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MousePressEvent_Callback texttranslator__translatortextedit_mousepressevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback texttranslator__translatortextedit_mousemoveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback texttranslator__translatortextedit_mousereleaseevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback texttranslator__translatortextedit_mousedoubleclickevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback texttranslator__translatortextedit_focusnextprevchild_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback texttranslator__translatortextedit_contextmenuevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DragEnterEvent_Callback texttranslator__translatortextedit_dragenterevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback texttranslator__translatortextedit_dragleaveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DragMoveEvent_Callback texttranslator__translatortextedit_dragmoveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FocusInEvent_Callback texttranslator__translatortextedit_focusinevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FocusOutEvent_Callback texttranslator__translatortextedit_focusoutevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ShowEvent_Callback texttranslator__translatortextedit_showevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ChangeEvent_Callback texttranslator__translatortextedit_changeevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_WheelEvent_Callback texttranslator__translatortextedit_wheelevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback texttranslator__translatortextedit_createmimedatafromselection_callback = nullptr;
    TextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback texttranslator__translatortextedit_caninsertfrommimedata_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback texttranslator__translatortextedit_insertfrommimedata_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InputMethodEvent_Callback texttranslator__translatortextedit_inputmethodevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback texttranslator__translatortextedit_scrollcontentsby_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback texttranslator__translatortextedit_dosettextcursor_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback texttranslator__translatortextedit_minimumsizehint_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SizeHint_Callback texttranslator__translatortextedit_sizehint_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SetupViewport_Callback texttranslator__translatortextedit_setupviewport_callback = nullptr;
    TextTranslator__TranslatorTextEdit_EventFilter_Callback texttranslator__translatortextedit_eventfilter_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ViewportEvent_Callback texttranslator__translatortextedit_viewportevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback texttranslator__translatortextedit_viewportsizehint_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InitStyleOption_Callback texttranslator__translatortextedit_initstyleoption_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DevType_Callback texttranslator__translatortextedit_devtype_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SetVisible_Callback texttranslator__translatortextedit_setvisible_callback = nullptr;
    TextTranslator__TranslatorTextEdit_HeightForWidth_Callback texttranslator__translatortextedit_heightforwidth_callback = nullptr;
    TextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback texttranslator__translatortextedit_hasheightforwidth_callback = nullptr;
    TextTranslator__TranslatorTextEdit_PaintEngine_Callback texttranslator__translatortextedit_paintengine_callback = nullptr;
    TextTranslator__TranslatorTextEdit_EnterEvent_Callback texttranslator__translatortextedit_enterevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_LeaveEvent_Callback texttranslator__translatortextedit_leaveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MoveEvent_Callback texttranslator__translatortextedit_moveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_CloseEvent_Callback texttranslator__translatortextedit_closeevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_TabletEvent_Callback texttranslator__translatortextedit_tabletevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ActionEvent_Callback texttranslator__translatortextedit_actionevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_HideEvent_Callback texttranslator__translatortextedit_hideevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_NativeEvent_Callback texttranslator__translatortextedit_nativeevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Metric_Callback texttranslator__translatortextedit_metric_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InitPainter_Callback texttranslator__translatortextedit_initpainter_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Redirected_Callback texttranslator__translatortextedit_redirected_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SharedPainter_Callback texttranslator__translatortextedit_sharedpainter_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ChildEvent_Callback texttranslator__translatortextedit_childevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_CustomEvent_Callback texttranslator__translatortextedit_customevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ConnectNotify_Callback texttranslator__translatortextedit_connectnotify_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DisconnectNotify_Callback texttranslator__translatortextedit_disconnectnotify_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FirstVisibleBlock_Callback texttranslator__translatortextedit_firstvisibleblock_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ContentOffset_Callback texttranslator__translatortextedit_contentoffset_callback = nullptr;
    TextTranslator__TranslatorTextEdit_BlockBoundingRect_Callback texttranslator__translatortextedit_blockboundingrect_callback = nullptr;
    TextTranslator__TranslatorTextEdit_BlockBoundingGeometry_Callback texttranslator__translatortextedit_blockboundinggeometry_callback = nullptr;
    TextTranslator__TranslatorTextEdit_GetPaintContext_Callback texttranslator__translatortextedit_getpaintcontext_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ZoomInF_Callback texttranslator__translatortextedit_zoominf_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SetViewportMargins_Callback texttranslator__translatortextedit_setviewportmargins_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ViewportMargins_Callback texttranslator__translatortextedit_viewportmargins_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DrawFrame_Callback texttranslator__translatortextedit_drawframe_callback = nullptr;
    TextTranslator__TranslatorTextEdit_UpdateMicroFocus_Callback texttranslator__translatortextedit_updatemicrofocus_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Create_Callback texttranslator__translatortextedit_create_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Destroy_Callback texttranslator__translatortextedit_destroy_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FocusNextChild_Callback texttranslator__translatortextedit_focusnextchild_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FocusPreviousChild_Callback texttranslator__translatortextedit_focuspreviouschild_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Sender_Callback texttranslator__translatortextedit_sender_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SenderSignalIndex_Callback texttranslator__translatortextedit_sendersignalindex_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Receivers_Callback texttranslator__translatortextedit_receivers_callback = nullptr;
    TextTranslator__TranslatorTextEdit_IsSignalConnected_Callback texttranslator__translatortextedit_issignalconnected_callback = nullptr;
    TextTranslator__TranslatorTextEdit_GetDecodedMetricF_Callback texttranslator__translatortextedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool texttranslator__translatortextedit_metaobject_isbase = false;
    mutable bool texttranslator__translatortextedit_metacast_isbase = false;
    mutable bool texttranslator__translatortextedit_metacall_isbase = false;
    mutable bool texttranslator__translatortextedit_dropevent_isbase = false;
    mutable bool texttranslator__translatortextedit_loadresource_isbase = false;
    mutable bool texttranslator__translatortextedit_inputmethodquery_isbase = false;
    mutable bool texttranslator__translatortextedit_event_isbase = false;
    mutable bool texttranslator__translatortextedit_timerevent_isbase = false;
    mutable bool texttranslator__translatortextedit_keypressevent_isbase = false;
    mutable bool texttranslator__translatortextedit_keyreleaseevent_isbase = false;
    mutable bool texttranslator__translatortextedit_resizeevent_isbase = false;
    mutable bool texttranslator__translatortextedit_paintevent_isbase = false;
    mutable bool texttranslator__translatortextedit_mousepressevent_isbase = false;
    mutable bool texttranslator__translatortextedit_mousemoveevent_isbase = false;
    mutable bool texttranslator__translatortextedit_mousereleaseevent_isbase = false;
    mutable bool texttranslator__translatortextedit_mousedoubleclickevent_isbase = false;
    mutable bool texttranslator__translatortextedit_focusnextprevchild_isbase = false;
    mutable bool texttranslator__translatortextedit_contextmenuevent_isbase = false;
    mutable bool texttranslator__translatortextedit_dragenterevent_isbase = false;
    mutable bool texttranslator__translatortextedit_dragleaveevent_isbase = false;
    mutable bool texttranslator__translatortextedit_dragmoveevent_isbase = false;
    mutable bool texttranslator__translatortextedit_focusinevent_isbase = false;
    mutable bool texttranslator__translatortextedit_focusoutevent_isbase = false;
    mutable bool texttranslator__translatortextedit_showevent_isbase = false;
    mutable bool texttranslator__translatortextedit_changeevent_isbase = false;
    mutable bool texttranslator__translatortextedit_wheelevent_isbase = false;
    mutable bool texttranslator__translatortextedit_createmimedatafromselection_isbase = false;
    mutable bool texttranslator__translatortextedit_caninsertfrommimedata_isbase = false;
    mutable bool texttranslator__translatortextedit_insertfrommimedata_isbase = false;
    mutable bool texttranslator__translatortextedit_inputmethodevent_isbase = false;
    mutable bool texttranslator__translatortextedit_scrollcontentsby_isbase = false;
    mutable bool texttranslator__translatortextedit_dosettextcursor_isbase = false;
    mutable bool texttranslator__translatortextedit_minimumsizehint_isbase = false;
    mutable bool texttranslator__translatortextedit_sizehint_isbase = false;
    mutable bool texttranslator__translatortextedit_setupviewport_isbase = false;
    mutable bool texttranslator__translatortextedit_eventfilter_isbase = false;
    mutable bool texttranslator__translatortextedit_viewportevent_isbase = false;
    mutable bool texttranslator__translatortextedit_viewportsizehint_isbase = false;
    mutable bool texttranslator__translatortextedit_initstyleoption_isbase = false;
    mutable bool texttranslator__translatortextedit_devtype_isbase = false;
    mutable bool texttranslator__translatortextedit_setvisible_isbase = false;
    mutable bool texttranslator__translatortextedit_heightforwidth_isbase = false;
    mutable bool texttranslator__translatortextedit_hasheightforwidth_isbase = false;
    mutable bool texttranslator__translatortextedit_paintengine_isbase = false;
    mutable bool texttranslator__translatortextedit_enterevent_isbase = false;
    mutable bool texttranslator__translatortextedit_leaveevent_isbase = false;
    mutable bool texttranslator__translatortextedit_moveevent_isbase = false;
    mutable bool texttranslator__translatortextedit_closeevent_isbase = false;
    mutable bool texttranslator__translatortextedit_tabletevent_isbase = false;
    mutable bool texttranslator__translatortextedit_actionevent_isbase = false;
    mutable bool texttranslator__translatortextedit_hideevent_isbase = false;
    mutable bool texttranslator__translatortextedit_nativeevent_isbase = false;
    mutable bool texttranslator__translatortextedit_metric_isbase = false;
    mutable bool texttranslator__translatortextedit_initpainter_isbase = false;
    mutable bool texttranslator__translatortextedit_redirected_isbase = false;
    mutable bool texttranslator__translatortextedit_sharedpainter_isbase = false;
    mutable bool texttranslator__translatortextedit_childevent_isbase = false;
    mutable bool texttranslator__translatortextedit_customevent_isbase = false;
    mutable bool texttranslator__translatortextedit_connectnotify_isbase = false;
    mutable bool texttranslator__translatortextedit_disconnectnotify_isbase = false;
    mutable bool texttranslator__translatortextedit_firstvisibleblock_isbase = false;
    mutable bool texttranslator__translatortextedit_contentoffset_isbase = false;
    mutable bool texttranslator__translatortextedit_blockboundingrect_isbase = false;
    mutable bool texttranslator__translatortextedit_blockboundinggeometry_isbase = false;
    mutable bool texttranslator__translatortextedit_getpaintcontext_isbase = false;
    mutable bool texttranslator__translatortextedit_zoominf_isbase = false;
    mutable bool texttranslator__translatortextedit_setviewportmargins_isbase = false;
    mutable bool texttranslator__translatortextedit_viewportmargins_isbase = false;
    mutable bool texttranslator__translatortextedit_drawframe_isbase = false;
    mutable bool texttranslator__translatortextedit_updatemicrofocus_isbase = false;
    mutable bool texttranslator__translatortextedit_create_isbase = false;
    mutable bool texttranslator__translatortextedit_destroy_isbase = false;
    mutable bool texttranslator__translatortextedit_focusnextchild_isbase = false;
    mutable bool texttranslator__translatortextedit_focuspreviouschild_isbase = false;
    mutable bool texttranslator__translatortextedit_sender_isbase = false;
    mutable bool texttranslator__translatortextedit_sendersignalindex_isbase = false;
    mutable bool texttranslator__translatortextedit_receivers_isbase = false;
    mutable bool texttranslator__translatortextedit_issignalconnected_isbase = false;
    mutable bool texttranslator__translatortextedit_getdecodedmetricf_isbase = false;

  public:
    VirtualTextTranslatorTranslatorTextEdit(QWidget* parent) : TextTranslator::TranslatorTextEdit(parent) {};
    VirtualTextTranslatorTranslatorTextEdit() : TextTranslator::TranslatorTextEdit() {};

    // Callback setters
    inline void setTextTranslator__TranslatorTextEdit_MetaObject_Callback(TextTranslator__TranslatorTextEdit_MetaObject_Callback cb) { texttranslator__translatortextedit_metaobject_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Metacast_Callback(TextTranslator__TranslatorTextEdit_Metacast_Callback cb) { texttranslator__translatortextedit_metacast_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Metacall_Callback(TextTranslator__TranslatorTextEdit_Metacall_Callback cb) { texttranslator__translatortextedit_metacall_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_DropEvent_Callback(TextTranslator__TranslatorTextEdit_DropEvent_Callback cb) { texttranslator__translatortextedit_dropevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_LoadResource_Callback(TextTranslator__TranslatorTextEdit_LoadResource_Callback cb) { texttranslator__translatortextedit_loadresource_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_InputMethodQuery_Callback(TextTranslator__TranslatorTextEdit_InputMethodQuery_Callback cb) { texttranslator__translatortextedit_inputmethodquery_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Event_Callback(TextTranslator__TranslatorTextEdit_Event_Callback cb) { texttranslator__translatortextedit_event_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_TimerEvent_Callback(TextTranslator__TranslatorTextEdit_TimerEvent_Callback cb) { texttranslator__translatortextedit_timerevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_KeyPressEvent_Callback(TextTranslator__TranslatorTextEdit_KeyPressEvent_Callback cb) { texttranslator__translatortextedit_keypressevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback(TextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback cb) { texttranslator__translatortextedit_keyreleaseevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ResizeEvent_Callback(TextTranslator__TranslatorTextEdit_ResizeEvent_Callback cb) { texttranslator__translatortextedit_resizeevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_PaintEvent_Callback(TextTranslator__TranslatorTextEdit_PaintEvent_Callback cb) { texttranslator__translatortextedit_paintevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_MousePressEvent_Callback(TextTranslator__TranslatorTextEdit_MousePressEvent_Callback cb) { texttranslator__translatortextedit_mousepressevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback(TextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback cb) { texttranslator__translatortextedit_mousemoveevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback(TextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback cb) { texttranslator__translatortextedit_mousereleaseevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback(TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback cb) { texttranslator__translatortextedit_mousedoubleclickevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback(TextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback cb) { texttranslator__translatortextedit_focusnextprevchild_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback(TextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback cb) { texttranslator__translatortextedit_contextmenuevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_DragEnterEvent_Callback(TextTranslator__TranslatorTextEdit_DragEnterEvent_Callback cb) { texttranslator__translatortextedit_dragenterevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback(TextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback cb) { texttranslator__translatortextedit_dragleaveevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_DragMoveEvent_Callback(TextTranslator__TranslatorTextEdit_DragMoveEvent_Callback cb) { texttranslator__translatortextedit_dragmoveevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_FocusInEvent_Callback(TextTranslator__TranslatorTextEdit_FocusInEvent_Callback cb) { texttranslator__translatortextedit_focusinevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_FocusOutEvent_Callback(TextTranslator__TranslatorTextEdit_FocusOutEvent_Callback cb) { texttranslator__translatortextedit_focusoutevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ShowEvent_Callback(TextTranslator__TranslatorTextEdit_ShowEvent_Callback cb) { texttranslator__translatortextedit_showevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ChangeEvent_Callback(TextTranslator__TranslatorTextEdit_ChangeEvent_Callback cb) { texttranslator__translatortextedit_changeevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_WheelEvent_Callback(TextTranslator__TranslatorTextEdit_WheelEvent_Callback cb) { texttranslator__translatortextedit_wheelevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback(TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback cb) { texttranslator__translatortextedit_createmimedatafromselection_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback(TextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback cb) { texttranslator__translatortextedit_caninsertfrommimedata_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback(TextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback cb) { texttranslator__translatortextedit_insertfrommimedata_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_InputMethodEvent_Callback(TextTranslator__TranslatorTextEdit_InputMethodEvent_Callback cb) { texttranslator__translatortextedit_inputmethodevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback(TextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback cb) { texttranslator__translatortextedit_scrollcontentsby_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback(TextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback cb) { texttranslator__translatortextedit_dosettextcursor_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback(TextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback cb) { texttranslator__translatortextedit_minimumsizehint_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_SizeHint_Callback(TextTranslator__TranslatorTextEdit_SizeHint_Callback cb) { texttranslator__translatortextedit_sizehint_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_SetupViewport_Callback(TextTranslator__TranslatorTextEdit_SetupViewport_Callback cb) { texttranslator__translatortextedit_setupviewport_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_EventFilter_Callback(TextTranslator__TranslatorTextEdit_EventFilter_Callback cb) { texttranslator__translatortextedit_eventfilter_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ViewportEvent_Callback(TextTranslator__TranslatorTextEdit_ViewportEvent_Callback cb) { texttranslator__translatortextedit_viewportevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback(TextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback cb) { texttranslator__translatortextedit_viewportsizehint_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_InitStyleOption_Callback(TextTranslator__TranslatorTextEdit_InitStyleOption_Callback cb) { texttranslator__translatortextedit_initstyleoption_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_DevType_Callback(TextTranslator__TranslatorTextEdit_DevType_Callback cb) { texttranslator__translatortextedit_devtype_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_SetVisible_Callback(TextTranslator__TranslatorTextEdit_SetVisible_Callback cb) { texttranslator__translatortextedit_setvisible_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_HeightForWidth_Callback(TextTranslator__TranslatorTextEdit_HeightForWidth_Callback cb) { texttranslator__translatortextedit_heightforwidth_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback(TextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback cb) { texttranslator__translatortextedit_hasheightforwidth_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_PaintEngine_Callback(TextTranslator__TranslatorTextEdit_PaintEngine_Callback cb) { texttranslator__translatortextedit_paintengine_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_EnterEvent_Callback(TextTranslator__TranslatorTextEdit_EnterEvent_Callback cb) { texttranslator__translatortextedit_enterevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_LeaveEvent_Callback(TextTranslator__TranslatorTextEdit_LeaveEvent_Callback cb) { texttranslator__translatortextedit_leaveevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_MoveEvent_Callback(TextTranslator__TranslatorTextEdit_MoveEvent_Callback cb) { texttranslator__translatortextedit_moveevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_CloseEvent_Callback(TextTranslator__TranslatorTextEdit_CloseEvent_Callback cb) { texttranslator__translatortextedit_closeevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_TabletEvent_Callback(TextTranslator__TranslatorTextEdit_TabletEvent_Callback cb) { texttranslator__translatortextedit_tabletevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ActionEvent_Callback(TextTranslator__TranslatorTextEdit_ActionEvent_Callback cb) { texttranslator__translatortextedit_actionevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_HideEvent_Callback(TextTranslator__TranslatorTextEdit_HideEvent_Callback cb) { texttranslator__translatortextedit_hideevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_NativeEvent_Callback(TextTranslator__TranslatorTextEdit_NativeEvent_Callback cb) { texttranslator__translatortextedit_nativeevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Metric_Callback(TextTranslator__TranslatorTextEdit_Metric_Callback cb) { texttranslator__translatortextedit_metric_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_InitPainter_Callback(TextTranslator__TranslatorTextEdit_InitPainter_Callback cb) { texttranslator__translatortextedit_initpainter_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Redirected_Callback(TextTranslator__TranslatorTextEdit_Redirected_Callback cb) { texttranslator__translatortextedit_redirected_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_SharedPainter_Callback(TextTranslator__TranslatorTextEdit_SharedPainter_Callback cb) { texttranslator__translatortextedit_sharedpainter_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ChildEvent_Callback(TextTranslator__TranslatorTextEdit_ChildEvent_Callback cb) { texttranslator__translatortextedit_childevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_CustomEvent_Callback(TextTranslator__TranslatorTextEdit_CustomEvent_Callback cb) { texttranslator__translatortextedit_customevent_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ConnectNotify_Callback(TextTranslator__TranslatorTextEdit_ConnectNotify_Callback cb) { texttranslator__translatortextedit_connectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_DisconnectNotify_Callback(TextTranslator__TranslatorTextEdit_DisconnectNotify_Callback cb) { texttranslator__translatortextedit_disconnectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_FirstVisibleBlock_Callback(TextTranslator__TranslatorTextEdit_FirstVisibleBlock_Callback cb) { texttranslator__translatortextedit_firstvisibleblock_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ContentOffset_Callback(TextTranslator__TranslatorTextEdit_ContentOffset_Callback cb) { texttranslator__translatortextedit_contentoffset_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_BlockBoundingRect_Callback(TextTranslator__TranslatorTextEdit_BlockBoundingRect_Callback cb) { texttranslator__translatortextedit_blockboundingrect_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_BlockBoundingGeometry_Callback(TextTranslator__TranslatorTextEdit_BlockBoundingGeometry_Callback cb) { texttranslator__translatortextedit_blockboundinggeometry_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_GetPaintContext_Callback(TextTranslator__TranslatorTextEdit_GetPaintContext_Callback cb) { texttranslator__translatortextedit_getpaintcontext_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ZoomInF_Callback(TextTranslator__TranslatorTextEdit_ZoomInF_Callback cb) { texttranslator__translatortextedit_zoominf_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_SetViewportMargins_Callback(TextTranslator__TranslatorTextEdit_SetViewportMargins_Callback cb) { texttranslator__translatortextedit_setviewportmargins_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_ViewportMargins_Callback(TextTranslator__TranslatorTextEdit_ViewportMargins_Callback cb) { texttranslator__translatortextedit_viewportmargins_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_DrawFrame_Callback(TextTranslator__TranslatorTextEdit_DrawFrame_Callback cb) { texttranslator__translatortextedit_drawframe_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_UpdateMicroFocus_Callback(TextTranslator__TranslatorTextEdit_UpdateMicroFocus_Callback cb) { texttranslator__translatortextedit_updatemicrofocus_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Create_Callback(TextTranslator__TranslatorTextEdit_Create_Callback cb) { texttranslator__translatortextedit_create_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Destroy_Callback(TextTranslator__TranslatorTextEdit_Destroy_Callback cb) { texttranslator__translatortextedit_destroy_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_FocusNextChild_Callback(TextTranslator__TranslatorTextEdit_FocusNextChild_Callback cb) { texttranslator__translatortextedit_focusnextchild_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_FocusPreviousChild_Callback(TextTranslator__TranslatorTextEdit_FocusPreviousChild_Callback cb) { texttranslator__translatortextedit_focuspreviouschild_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Sender_Callback(TextTranslator__TranslatorTextEdit_Sender_Callback cb) { texttranslator__translatortextedit_sender_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_SenderSignalIndex_Callback(TextTranslator__TranslatorTextEdit_SenderSignalIndex_Callback cb) { texttranslator__translatortextedit_sendersignalindex_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_Receivers_Callback(TextTranslator__TranslatorTextEdit_Receivers_Callback cb) { texttranslator__translatortextedit_receivers_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_IsSignalConnected_Callback(TextTranslator__TranslatorTextEdit_IsSignalConnected_Callback cb) { texttranslator__translatortextedit_issignalconnected_callback = cb; }
    inline void setTextTranslator__TranslatorTextEdit_GetDecodedMetricF_Callback(TextTranslator__TranslatorTextEdit_GetDecodedMetricF_Callback cb) { texttranslator__translatortextedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextTranslator__TranslatorTextEdit_MetaObject_IsBase(bool value) const { texttranslator__translatortextedit_metaobject_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Metacast_IsBase(bool value) const { texttranslator__translatortextedit_metacast_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Metacall_IsBase(bool value) const { texttranslator__translatortextedit_metacall_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_DropEvent_IsBase(bool value) const { texttranslator__translatortextedit_dropevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_LoadResource_IsBase(bool value) const { texttranslator__translatortextedit_loadresource_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_InputMethodQuery_IsBase(bool value) const { texttranslator__translatortextedit_inputmethodquery_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Event_IsBase(bool value) const { texttranslator__translatortextedit_event_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_TimerEvent_IsBase(bool value) const { texttranslator__translatortextedit_timerevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_KeyPressEvent_IsBase(bool value) const { texttranslator__translatortextedit_keypressevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_KeyReleaseEvent_IsBase(bool value) const { texttranslator__translatortextedit_keyreleaseevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ResizeEvent_IsBase(bool value) const { texttranslator__translatortextedit_resizeevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_PaintEvent_IsBase(bool value) const { texttranslator__translatortextedit_paintevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_MousePressEvent_IsBase(bool value) const { texttranslator__translatortextedit_mousepressevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_MouseMoveEvent_IsBase(bool value) const { texttranslator__translatortextedit_mousemoveevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_MouseReleaseEvent_IsBase(bool value) const { texttranslator__translatortextedit_mousereleaseevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { texttranslator__translatortextedit_mousedoubleclickevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_FocusNextPrevChild_IsBase(bool value) const { texttranslator__translatortextedit_focusnextprevchild_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ContextMenuEvent_IsBase(bool value) const { texttranslator__translatortextedit_contextmenuevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_DragEnterEvent_IsBase(bool value) const { texttranslator__translatortextedit_dragenterevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_DragLeaveEvent_IsBase(bool value) const { texttranslator__translatortextedit_dragleaveevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_DragMoveEvent_IsBase(bool value) const { texttranslator__translatortextedit_dragmoveevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_FocusInEvent_IsBase(bool value) const { texttranslator__translatortextedit_focusinevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_FocusOutEvent_IsBase(bool value) const { texttranslator__translatortextedit_focusoutevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ShowEvent_IsBase(bool value) const { texttranslator__translatortextedit_showevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ChangeEvent_IsBase(bool value) const { texttranslator__translatortextedit_changeevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_WheelEvent_IsBase(bool value) const { texttranslator__translatortextedit_wheelevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { texttranslator__translatortextedit_createmimedatafromselection_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_CanInsertFromMimeData_IsBase(bool value) const { texttranslator__translatortextedit_caninsertfrommimedata_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_InsertFromMimeData_IsBase(bool value) const { texttranslator__translatortextedit_insertfrommimedata_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_InputMethodEvent_IsBase(bool value) const { texttranslator__translatortextedit_inputmethodevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ScrollContentsBy_IsBase(bool value) const { texttranslator__translatortextedit_scrollcontentsby_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_DoSetTextCursor_IsBase(bool value) const { texttranslator__translatortextedit_dosettextcursor_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_MinimumSizeHint_IsBase(bool value) const { texttranslator__translatortextedit_minimumsizehint_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_SizeHint_IsBase(bool value) const { texttranslator__translatortextedit_sizehint_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_SetupViewport_IsBase(bool value) const { texttranslator__translatortextedit_setupviewport_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_EventFilter_IsBase(bool value) const { texttranslator__translatortextedit_eventfilter_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ViewportEvent_IsBase(bool value) const { texttranslator__translatortextedit_viewportevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ViewportSizeHint_IsBase(bool value) const { texttranslator__translatortextedit_viewportsizehint_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_InitStyleOption_IsBase(bool value) const { texttranslator__translatortextedit_initstyleoption_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_DevType_IsBase(bool value) const { texttranslator__translatortextedit_devtype_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_SetVisible_IsBase(bool value) const { texttranslator__translatortextedit_setvisible_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_HeightForWidth_IsBase(bool value) const { texttranslator__translatortextedit_heightforwidth_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_HasHeightForWidth_IsBase(bool value) const { texttranslator__translatortextedit_hasheightforwidth_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_PaintEngine_IsBase(bool value) const { texttranslator__translatortextedit_paintengine_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_EnterEvent_IsBase(bool value) const { texttranslator__translatortextedit_enterevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_LeaveEvent_IsBase(bool value) const { texttranslator__translatortextedit_leaveevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_MoveEvent_IsBase(bool value) const { texttranslator__translatortextedit_moveevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_CloseEvent_IsBase(bool value) const { texttranslator__translatortextedit_closeevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_TabletEvent_IsBase(bool value) const { texttranslator__translatortextedit_tabletevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ActionEvent_IsBase(bool value) const { texttranslator__translatortextedit_actionevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_HideEvent_IsBase(bool value) const { texttranslator__translatortextedit_hideevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_NativeEvent_IsBase(bool value) const { texttranslator__translatortextedit_nativeevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Metric_IsBase(bool value) const { texttranslator__translatortextedit_metric_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_InitPainter_IsBase(bool value) const { texttranslator__translatortextedit_initpainter_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Redirected_IsBase(bool value) const { texttranslator__translatortextedit_redirected_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_SharedPainter_IsBase(bool value) const { texttranslator__translatortextedit_sharedpainter_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ChildEvent_IsBase(bool value) const { texttranslator__translatortextedit_childevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_CustomEvent_IsBase(bool value) const { texttranslator__translatortextedit_customevent_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ConnectNotify_IsBase(bool value) const { texttranslator__translatortextedit_connectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_DisconnectNotify_IsBase(bool value) const { texttranslator__translatortextedit_disconnectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_FirstVisibleBlock_IsBase(bool value) const { texttranslator__translatortextedit_firstvisibleblock_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ContentOffset_IsBase(bool value) const { texttranslator__translatortextedit_contentoffset_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_BlockBoundingRect_IsBase(bool value) const { texttranslator__translatortextedit_blockboundingrect_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_BlockBoundingGeometry_IsBase(bool value) const { texttranslator__translatortextedit_blockboundinggeometry_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_GetPaintContext_IsBase(bool value) const { texttranslator__translatortextedit_getpaintcontext_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ZoomInF_IsBase(bool value) const { texttranslator__translatortextedit_zoominf_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_SetViewportMargins_IsBase(bool value) const { texttranslator__translatortextedit_setviewportmargins_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_ViewportMargins_IsBase(bool value) const { texttranslator__translatortextedit_viewportmargins_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_DrawFrame_IsBase(bool value) const { texttranslator__translatortextedit_drawframe_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_UpdateMicroFocus_IsBase(bool value) const { texttranslator__translatortextedit_updatemicrofocus_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Create_IsBase(bool value) const { texttranslator__translatortextedit_create_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Destroy_IsBase(bool value) const { texttranslator__translatortextedit_destroy_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_FocusNextChild_IsBase(bool value) const { texttranslator__translatortextedit_focusnextchild_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_FocusPreviousChild_IsBase(bool value) const { texttranslator__translatortextedit_focuspreviouschild_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Sender_IsBase(bool value) const { texttranslator__translatortextedit_sender_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_SenderSignalIndex_IsBase(bool value) const { texttranslator__translatortextedit_sendersignalindex_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_Receivers_IsBase(bool value) const { texttranslator__translatortextedit_receivers_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_IsSignalConnected_IsBase(bool value) const { texttranslator__translatortextedit_issignalconnected_isbase = value; }
    inline void setTextTranslator__TranslatorTextEdit_GetDecodedMetricF_IsBase(bool value) const { texttranslator__translatortextedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatortextedit_metaobject_isbase) {
            texttranslator__translatortextedit_metaobject_isbase = false;
            return TextTranslator__TranslatorTextEdit::metaObject();
        }
        auto metaobject_cb = texttranslator__translatortextedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatortextedit_metacast_isbase) {
            texttranslator__translatortextedit_metacast_isbase = false;
            return TextTranslator__TranslatorTextEdit::qt_metacast(param1);
        }
        auto metacast_cb = texttranslator__translatortextedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatortextedit_metacall_isbase) {
            texttranslator__translatortextedit_metacall_isbase = false;
            return TextTranslator__TranslatorTextEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = texttranslator__translatortextedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (texttranslator__translatortextedit_dropevent_isbase) {
            texttranslator__translatortextedit_dropevent_isbase = false;
            TextTranslator__TranslatorTextEdit::dropEvent(param1);
            return;
        }
        auto dropevent_cb = texttranslator__translatortextedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;
            dropevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (texttranslator__translatortextedit_loadresource_isbase) {
            texttranslator__translatortextedit_loadresource_isbase = false;
            return TextTranslator__TranslatorTextEdit::loadResource(typeVal, name);
        }
        auto loadresource_cb = texttranslator__translatortextedit_loadresource_callback;
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
        return TextTranslator__TranslatorTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (texttranslator__translatortextedit_inputmethodquery_isbase) {
            texttranslator__translatortextedit_inputmethodquery_isbase = false;
            return TextTranslator__TranslatorTextEdit::inputMethodQuery(property);
        }
        auto inputmethodquery_cb = texttranslator__translatortextedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (texttranslator__translatortextedit_event_isbase) {
            texttranslator__translatortextedit_event_isbase = false;
            return TextTranslator__TranslatorTextEdit::event(e);
        }
        auto event_cb = texttranslator__translatortextedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (texttranslator__translatortextedit_timerevent_isbase) {
            texttranslator__translatortextedit_timerevent_isbase = false;
            TextTranslator__TranslatorTextEdit::timerEvent(e);
            return;
        }
        auto timerevent_cb = texttranslator__translatortextedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;
            timerevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (texttranslator__translatortextedit_keypressevent_isbase) {
            texttranslator__translatortextedit_keypressevent_isbase = false;
            TextTranslator__TranslatorTextEdit::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = texttranslator__translatortextedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;
            keypressevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (texttranslator__translatortextedit_keyreleaseevent_isbase) {
            texttranslator__translatortextedit_keyreleaseevent_isbase = false;
            TextTranslator__TranslatorTextEdit::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = texttranslator__translatortextedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (texttranslator__translatortextedit_resizeevent_isbase) {
            texttranslator__translatortextedit_resizeevent_isbase = false;
            TextTranslator__TranslatorTextEdit::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = texttranslator__translatortextedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;
            resizeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (texttranslator__translatortextedit_paintevent_isbase) {
            texttranslator__translatortextedit_paintevent_isbase = false;
            TextTranslator__TranslatorTextEdit::paintEvent(e);
            return;
        }
        auto paintevent_cb = texttranslator__translatortextedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;
            paintevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (texttranslator__translatortextedit_mousepressevent_isbase) {
            texttranslator__translatortextedit_mousepressevent_isbase = false;
            TextTranslator__TranslatorTextEdit::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = texttranslator__translatortextedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;
            mousepressevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (texttranslator__translatortextedit_mousemoveevent_isbase) {
            texttranslator__translatortextedit_mousemoveevent_isbase = false;
            TextTranslator__TranslatorTextEdit::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = texttranslator__translatortextedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (texttranslator__translatortextedit_mousereleaseevent_isbase) {
            texttranslator__translatortextedit_mousereleaseevent_isbase = false;
            TextTranslator__TranslatorTextEdit::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = texttranslator__translatortextedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (texttranslator__translatortextedit_mousedoubleclickevent_isbase) {
            texttranslator__translatortextedit_mousedoubleclickevent_isbase = false;
            TextTranslator__TranslatorTextEdit::mouseDoubleClickEvent(e);
            return;
        }
        auto mousedoubleclickevent_cb = texttranslator__translatortextedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = e;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (texttranslator__translatortextedit_focusnextprevchild_isbase) {
            texttranslator__translatortextedit_focusnextprevchild_isbase = false;
            return TextTranslator__TranslatorTextEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = texttranslator__translatortextedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;
            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (texttranslator__translatortextedit_contextmenuevent_isbase) {
            texttranslator__translatortextedit_contextmenuevent_isbase = false;
            TextTranslator__TranslatorTextEdit::contextMenuEvent(e);
            return;
        }
        auto contextmenuevent_cb = texttranslator__translatortextedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = e;
            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (texttranslator__translatortextedit_dragenterevent_isbase) {
            texttranslator__translatortextedit_dragenterevent_isbase = false;
            TextTranslator__TranslatorTextEdit::dragEnterEvent(e);
            return;
        }
        auto dragenterevent_cb = texttranslator__translatortextedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = e;
            dragenterevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (texttranslator__translatortextedit_dragleaveevent_isbase) {
            texttranslator__translatortextedit_dragleaveevent_isbase = false;
            TextTranslator__TranslatorTextEdit::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = texttranslator__translatortextedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (texttranslator__translatortextedit_dragmoveevent_isbase) {
            texttranslator__translatortextedit_dragmoveevent_isbase = false;
            TextTranslator__TranslatorTextEdit::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = texttranslator__translatortextedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (texttranslator__translatortextedit_focusinevent_isbase) {
            texttranslator__translatortextedit_focusinevent_isbase = false;
            TextTranslator__TranslatorTextEdit::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = texttranslator__translatortextedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;
            focusinevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (texttranslator__translatortextedit_focusoutevent_isbase) {
            texttranslator__translatortextedit_focusoutevent_isbase = false;
            TextTranslator__TranslatorTextEdit::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = texttranslator__translatortextedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;
            focusoutevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (texttranslator__translatortextedit_showevent_isbase) {
            texttranslator__translatortextedit_showevent_isbase = false;
            TextTranslator__TranslatorTextEdit::showEvent(param1);
            return;
        }
        auto showevent_cb = texttranslator__translatortextedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;
            showevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (texttranslator__translatortextedit_changeevent_isbase) {
            texttranslator__translatortextedit_changeevent_isbase = false;
            TextTranslator__TranslatorTextEdit::changeEvent(e);
            return;
        }
        auto changeevent_cb = texttranslator__translatortextedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;
            changeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (texttranslator__translatortextedit_wheelevent_isbase) {
            texttranslator__translatortextedit_wheelevent_isbase = false;
            TextTranslator__TranslatorTextEdit::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = texttranslator__translatortextedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;
            wheelevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (texttranslator__translatortextedit_createmimedatafromselection_isbase) {
            texttranslator__translatortextedit_createmimedatafromselection_isbase = false;
            return TextTranslator__TranslatorTextEdit::createMimeDataFromSelection();
        }
        auto createmimedatafromselection_cb = texttranslator__translatortextedit_createmimedatafromselection_callback;
        if (createmimedatafromselection_cb) {
            QMimeData* callback_ret = createmimedatafromselection_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (texttranslator__translatortextedit_caninsertfrommimedata_isbase) {
            texttranslator__translatortextedit_caninsertfrommimedata_isbase = false;
            return TextTranslator__TranslatorTextEdit::canInsertFromMimeData(source);
        }
        auto caninsertfrommimedata_cb = texttranslator__translatortextedit_caninsertfrommimedata_callback;
        if (caninsertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = caninsertfrommimedata_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (texttranslator__translatortextedit_insertfrommimedata_isbase) {
            texttranslator__translatortextedit_insertfrommimedata_isbase = false;
            TextTranslator__TranslatorTextEdit::insertFromMimeData(source);
            return;
        }
        auto insertfrommimedata_cb = texttranslator__translatortextedit_insertfrommimedata_callback;
        if (insertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;
            insertfrommimedata_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (texttranslator__translatortextedit_inputmethodevent_isbase) {
            texttranslator__translatortextedit_inputmethodevent_isbase = false;
            TextTranslator__TranslatorTextEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = texttranslator__translatortextedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (texttranslator__translatortextedit_scrollcontentsby_isbase) {
            texttranslator__translatortextedit_scrollcontentsby_isbase = false;
            TextTranslator__TranslatorTextEdit::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = texttranslator__translatortextedit_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;
            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        TextTranslator__TranslatorTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (texttranslator__translatortextedit_dosettextcursor_isbase) {
            texttranslator__translatortextedit_dosettextcursor_isbase = false;
            TextTranslator__TranslatorTextEdit::doSetTextCursor(cursor);
            return;
        }
        auto dosettextcursor_cb = texttranslator__translatortextedit_dosettextcursor_callback;
        if (dosettextcursor_cb) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            dosettextcursor_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (texttranslator__translatortextedit_minimumsizehint_isbase) {
            texttranslator__translatortextedit_minimumsizehint_isbase = false;
            return TextTranslator__TranslatorTextEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = texttranslator__translatortextedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (texttranslator__translatortextedit_sizehint_isbase) {
            texttranslator__translatortextedit_sizehint_isbase = false;
            return TextTranslator__TranslatorTextEdit::sizeHint();
        }
        auto sizehint_cb = texttranslator__translatortextedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (texttranslator__translatortextedit_setupviewport_isbase) {
            texttranslator__translatortextedit_setupviewport_isbase = false;
            TextTranslator__TranslatorTextEdit::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = texttranslator__translatortextedit_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;
            setupviewport_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (texttranslator__translatortextedit_eventfilter_isbase) {
            texttranslator__translatortextedit_eventfilter_isbase = false;
            return TextTranslator__TranslatorTextEdit::eventFilter(param1, param2);
        }
        auto eventfilter_cb = texttranslator__translatortextedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (texttranslator__translatortextedit_viewportevent_isbase) {
            texttranslator__translatortextedit_viewportevent_isbase = false;
            return TextTranslator__TranslatorTextEdit::viewportEvent(param1);
        }
        auto viewportevent_cb = texttranslator__translatortextedit_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (texttranslator__translatortextedit_viewportsizehint_isbase) {
            texttranslator__translatortextedit_viewportsizehint_isbase = false;
            return TextTranslator__TranslatorTextEdit::viewportSizeHint();
        }
        auto viewportsizehint_cb = texttranslator__translatortextedit_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (texttranslator__translatortextedit_initstyleoption_isbase) {
            texttranslator__translatortextedit_initstyleoption_isbase = false;
            TextTranslator__TranslatorTextEdit::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = texttranslator__translatortextedit_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;
            initstyleoption_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (texttranslator__translatortextedit_devtype_isbase) {
            texttranslator__translatortextedit_devtype_isbase = false;
            return TextTranslator__TranslatorTextEdit::devType();
        }
        auto devtype_cb = texttranslator__translatortextedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (texttranslator__translatortextedit_setvisible_isbase) {
            texttranslator__translatortextedit_setvisible_isbase = false;
            TextTranslator__TranslatorTextEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = texttranslator__translatortextedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;
            setvisible_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (texttranslator__translatortextedit_heightforwidth_isbase) {
            texttranslator__translatortextedit_heightforwidth_isbase = false;
            return TextTranslator__TranslatorTextEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = texttranslator__translatortextedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;
            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (texttranslator__translatortextedit_hasheightforwidth_isbase) {
            texttranslator__translatortextedit_hasheightforwidth_isbase = false;
            return TextTranslator__TranslatorTextEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = texttranslator__translatortextedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (texttranslator__translatortextedit_paintengine_isbase) {
            texttranslator__translatortextedit_paintengine_isbase = false;
            return TextTranslator__TranslatorTextEdit::paintEngine();
        }
        auto paintengine_cb = texttranslator__translatortextedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (texttranslator__translatortextedit_enterevent_isbase) {
            texttranslator__translatortextedit_enterevent_isbase = false;
            TextTranslator__TranslatorTextEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = texttranslator__translatortextedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;
            enterevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (texttranslator__translatortextedit_leaveevent_isbase) {
            texttranslator__translatortextedit_leaveevent_isbase = false;
            TextTranslator__TranslatorTextEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = texttranslator__translatortextedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;
            leaveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (texttranslator__translatortextedit_moveevent_isbase) {
            texttranslator__translatortextedit_moveevent_isbase = false;
            TextTranslator__TranslatorTextEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = texttranslator__translatortextedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;
            moveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (texttranslator__translatortextedit_closeevent_isbase) {
            texttranslator__translatortextedit_closeevent_isbase = false;
            TextTranslator__TranslatorTextEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = texttranslator__translatortextedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;
            closeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (texttranslator__translatortextedit_tabletevent_isbase) {
            texttranslator__translatortextedit_tabletevent_isbase = false;
            TextTranslator__TranslatorTextEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = texttranslator__translatortextedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;
            tabletevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (texttranslator__translatortextedit_actionevent_isbase) {
            texttranslator__translatortextedit_actionevent_isbase = false;
            TextTranslator__TranslatorTextEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = texttranslator__translatortextedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;
            actionevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (texttranslator__translatortextedit_hideevent_isbase) {
            texttranslator__translatortextedit_hideevent_isbase = false;
            TextTranslator__TranslatorTextEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = texttranslator__translatortextedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;
            hideevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (texttranslator__translatortextedit_nativeevent_isbase) {
            texttranslator__translatortextedit_nativeevent_isbase = false;
            return TextTranslator__TranslatorTextEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = texttranslator__translatortextedit_nativeevent_callback;
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
        return TextTranslator__TranslatorTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (texttranslator__translatortextedit_metric_isbase) {
            texttranslator__translatortextedit_metric_isbase = false;
            return TextTranslator__TranslatorTextEdit::metric(param1);
        }
        auto metric_cb = texttranslator__translatortextedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (texttranslator__translatortextedit_initpainter_isbase) {
            texttranslator__translatortextedit_initpainter_isbase = false;
            TextTranslator__TranslatorTextEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = texttranslator__translatortextedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;
            initpainter_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (texttranslator__translatortextedit_redirected_isbase) {
            texttranslator__translatortextedit_redirected_isbase = false;
            return TextTranslator__TranslatorTextEdit::redirected(offset);
        }
        auto redirected_cb = texttranslator__translatortextedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (texttranslator__translatortextedit_sharedpainter_isbase) {
            texttranslator__translatortextedit_sharedpainter_isbase = false;
            return TextTranslator__TranslatorTextEdit::sharedPainter();
        }
        auto sharedpainter_cb = texttranslator__translatortextedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatortextedit_childevent_isbase) {
            texttranslator__translatortextedit_childevent_isbase = false;
            TextTranslator__TranslatorTextEdit::childEvent(event);
            return;
        }
        auto childevent_cb = texttranslator__translatortextedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatortextedit_customevent_isbase) {
            texttranslator__translatortextedit_customevent_isbase = false;
            TextTranslator__TranslatorTextEdit::customEvent(event);
            return;
        }
        auto customevent_cb = texttranslator__translatortextedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatortextedit_connectnotify_isbase) {
            texttranslator__translatortextedit_connectnotify_isbase = false;
            TextTranslator__TranslatorTextEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = texttranslator__translatortextedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatortextedit_disconnectnotify_isbase) {
            texttranslator__translatortextedit_disconnectnotify_isbase = false;
            TextTranslator__TranslatorTextEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = texttranslator__translatortextedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock firstVisibleBlock() const {
        if (texttranslator__translatortextedit_firstvisibleblock_isbase) {
            texttranslator__translatortextedit_firstvisibleblock_isbase = false;
            return TextTranslator__TranslatorTextEdit::firstVisibleBlock();
        }
        auto firstvisibleblock_cb = texttranslator__translatortextedit_firstvisibleblock_callback;
        if (firstvisibleblock_cb) {
            QTextBlock* callback_ret = firstvisibleblock_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::firstVisibleBlock();
    }

    // Virtual method for C ABI access and custom callback
    QPointF contentOffset() const {
        if (texttranslator__translatortextedit_contentoffset_isbase) {
            texttranslator__translatortextedit_contentoffset_isbase = false;
            return TextTranslator__TranslatorTextEdit::contentOffset();
        }
        auto contentoffset_cb = texttranslator__translatortextedit_contentoffset_callback;
        if (contentoffset_cb) {
            QPointF* callback_ret = contentoffset_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::contentOffset();
    }

    // Virtual method for C ABI access and custom callback
    QRectF blockBoundingRect(const QTextBlock& block) const {
        if (texttranslator__translatortextedit_blockboundingrect_isbase) {
            texttranslator__translatortextedit_blockboundingrect_isbase = false;
            return TextTranslator__TranslatorTextEdit::blockBoundingRect(block);
        }
        auto blockboundingrect_cb = texttranslator__translatortextedit_blockboundingrect_callback;
        if (blockboundingrect_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            QRectF* callback_ret = blockboundingrect_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::blockBoundingRect(block);
    }

    // Virtual method for C ABI access and custom callback
    QRectF blockBoundingGeometry(const QTextBlock& block) const {
        if (texttranslator__translatortextedit_blockboundinggeometry_isbase) {
            texttranslator__translatortextedit_blockboundinggeometry_isbase = false;
            return TextTranslator__TranslatorTextEdit::blockBoundingGeometry(block);
        }
        auto blockboundinggeometry_cb = texttranslator__translatortextedit_blockboundinggeometry_callback;
        if (blockboundinggeometry_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            QRectF* callback_ret = blockboundinggeometry_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::blockBoundingGeometry(block);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractTextDocumentLayout::PaintContext getPaintContext() const {
        if (texttranslator__translatortextedit_getpaintcontext_isbase) {
            texttranslator__translatortextedit_getpaintcontext_isbase = false;
            return TextTranslator__TranslatorTextEdit::getPaintContext();
        }
        auto getpaintcontext_cb = texttranslator__translatortextedit_getpaintcontext_callback;
        if (getpaintcontext_cb) {
            QAbstractTextDocumentLayout__PaintContext* callback_ret = getpaintcontext_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::getPaintContext();
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (texttranslator__translatortextedit_zoominf_isbase) {
            texttranslator__translatortextedit_zoominf_isbase = false;
            TextTranslator__TranslatorTextEdit::zoomInF(range);
            return;
        }
        auto zoominf_cb = texttranslator__translatortextedit_zoominf_callback;
        if (zoominf_cb) {
            float cbval1 = range;
            zoominf_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::zoomInF(range);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (texttranslator__translatortextedit_setviewportmargins_isbase) {
            texttranslator__translatortextedit_setviewportmargins_isbase = false;
            TextTranslator__TranslatorTextEdit::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = texttranslator__translatortextedit_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;
            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        TextTranslator__TranslatorTextEdit::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (texttranslator__translatortextedit_viewportmargins_isbase) {
            texttranslator__translatortextedit_viewportmargins_isbase = false;
            return TextTranslator__TranslatorTextEdit::viewportMargins();
        }
        auto viewportmargins_cb = texttranslator__translatortextedit_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (texttranslator__translatortextedit_drawframe_isbase) {
            texttranslator__translatortextedit_drawframe_isbase = false;
            TextTranslator__TranslatorTextEdit::drawFrame(param1);
            return;
        }
        auto drawframe_cb = texttranslator__translatortextedit_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;
            drawframe_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (texttranslator__translatortextedit_updatemicrofocus_isbase) {
            texttranslator__translatortextedit_updatemicrofocus_isbase = false;
            TextTranslator__TranslatorTextEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = texttranslator__translatortextedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextTranslator__TranslatorTextEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (texttranslator__translatortextedit_create_isbase) {
            texttranslator__translatortextedit_create_isbase = false;
            TextTranslator__TranslatorTextEdit::create();
            return;
        }
        auto create_cb = texttranslator__translatortextedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextTranslator__TranslatorTextEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (texttranslator__translatortextedit_destroy_isbase) {
            texttranslator__translatortextedit_destroy_isbase = false;
            TextTranslator__TranslatorTextEdit::destroy();
            return;
        }
        auto destroy_cb = texttranslator__translatortextedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextTranslator__TranslatorTextEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (texttranslator__translatortextedit_focusnextchild_isbase) {
            texttranslator__translatortextedit_focusnextchild_isbase = false;
            return TextTranslator__TranslatorTextEdit::focusNextChild();
        }
        auto focusnextchild_cb = texttranslator__translatortextedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (texttranslator__translatortextedit_focuspreviouschild_isbase) {
            texttranslator__translatortextedit_focuspreviouschild_isbase = false;
            return TextTranslator__TranslatorTextEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = texttranslator__translatortextedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (texttranslator__translatortextedit_sender_isbase) {
            texttranslator__translatortextedit_sender_isbase = false;
            return TextTranslator__TranslatorTextEdit::sender();
        }
        auto sender_cb = texttranslator__translatortextedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (texttranslator__translatortextedit_sendersignalindex_isbase) {
            texttranslator__translatortextedit_sendersignalindex_isbase = false;
            return TextTranslator__TranslatorTextEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = texttranslator__translatortextedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (texttranslator__translatortextedit_receivers_isbase) {
            texttranslator__translatortextedit_receivers_isbase = false;
            return TextTranslator__TranslatorTextEdit::receivers(signal);
        }
        auto receivers_cb = texttranslator__translatortextedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (texttranslator__translatortextedit_issignalconnected_isbase) {
            texttranslator__translatortextedit_issignalconnected_isbase = false;
            return TextTranslator__TranslatorTextEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = texttranslator__translatortextedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (texttranslator__translatortextedit_getdecodedmetricf_isbase) {
            texttranslator__translatortextedit_getdecodedmetricf_isbase = false;
            return TextTranslator__TranslatorTextEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = texttranslator__translatortextedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);
            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextTranslator__TranslatorTextEdit_DropEvent(TextTranslator::TranslatorTextEdit* self, QDropEvent* param1);
    friend void TextTranslator__TranslatorTextEdit_SuperDropEvent(TextTranslator::TranslatorTextEdit* self, QDropEvent* param1);
    friend bool TextTranslator__TranslatorTextEdit_Event(TextTranslator::TranslatorTextEdit* self, QEvent* e);
    friend bool TextTranslator__TranslatorTextEdit_SuperEvent(TextTranslator::TranslatorTextEdit* self, QEvent* e);
    friend void TextTranslator__TranslatorTextEdit_TimerEvent(TextTranslator::TranslatorTextEdit* self, QTimerEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperTimerEvent(TextTranslator::TranslatorTextEdit* self, QTimerEvent* e);
    friend void TextTranslator__TranslatorTextEdit_KeyPressEvent(TextTranslator::TranslatorTextEdit* self, QKeyEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperKeyPressEvent(TextTranslator::TranslatorTextEdit* self, QKeyEvent* e);
    friend void TextTranslator__TranslatorTextEdit_KeyReleaseEvent(TextTranslator::TranslatorTextEdit* self, QKeyEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperKeyReleaseEvent(TextTranslator::TranslatorTextEdit* self, QKeyEvent* e);
    friend void TextTranslator__TranslatorTextEdit_ResizeEvent(TextTranslator::TranslatorTextEdit* self, QResizeEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperResizeEvent(TextTranslator::TranslatorTextEdit* self, QResizeEvent* e);
    friend void TextTranslator__TranslatorTextEdit_PaintEvent(TextTranslator::TranslatorTextEdit* self, QPaintEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperPaintEvent(TextTranslator::TranslatorTextEdit* self, QPaintEvent* e);
    friend void TextTranslator__TranslatorTextEdit_MousePressEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperMousePressEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_MouseMoveEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperMouseMoveEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_MouseReleaseEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperMouseReleaseEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperMouseDoubleClickEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend bool TextTranslator__TranslatorTextEdit_FocusNextPrevChild(TextTranslator::TranslatorTextEdit* self, bool next);
    friend bool TextTranslator__TranslatorTextEdit_SuperFocusNextPrevChild(TextTranslator::TranslatorTextEdit* self, bool next);
    friend void TextTranslator__TranslatorTextEdit_ContextMenuEvent(TextTranslator::TranslatorTextEdit* self, QContextMenuEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperContextMenuEvent(TextTranslator::TranslatorTextEdit* self, QContextMenuEvent* e);
    friend void TextTranslator__TranslatorTextEdit_DragEnterEvent(TextTranslator::TranslatorTextEdit* self, QDragEnterEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperDragEnterEvent(TextTranslator::TranslatorTextEdit* self, QDragEnterEvent* e);
    friend void TextTranslator__TranslatorTextEdit_DragLeaveEvent(TextTranslator::TranslatorTextEdit* self, QDragLeaveEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperDragLeaveEvent(TextTranslator::TranslatorTextEdit* self, QDragLeaveEvent* e);
    friend void TextTranslator__TranslatorTextEdit_DragMoveEvent(TextTranslator::TranslatorTextEdit* self, QDragMoveEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperDragMoveEvent(TextTranslator::TranslatorTextEdit* self, QDragMoveEvent* e);
    friend void TextTranslator__TranslatorTextEdit_FocusInEvent(TextTranslator::TranslatorTextEdit* self, QFocusEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperFocusInEvent(TextTranslator::TranslatorTextEdit* self, QFocusEvent* e);
    friend void TextTranslator__TranslatorTextEdit_FocusOutEvent(TextTranslator::TranslatorTextEdit* self, QFocusEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperFocusOutEvent(TextTranslator::TranslatorTextEdit* self, QFocusEvent* e);
    friend void TextTranslator__TranslatorTextEdit_ShowEvent(TextTranslator::TranslatorTextEdit* self, QShowEvent* param1);
    friend void TextTranslator__TranslatorTextEdit_SuperShowEvent(TextTranslator::TranslatorTextEdit* self, QShowEvent* param1);
    friend void TextTranslator__TranslatorTextEdit_ChangeEvent(TextTranslator::TranslatorTextEdit* self, QEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperChangeEvent(TextTranslator::TranslatorTextEdit* self, QEvent* e);
    friend void TextTranslator__TranslatorTextEdit_WheelEvent(TextTranslator::TranslatorTextEdit* self, QWheelEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperWheelEvent(TextTranslator::TranslatorTextEdit* self, QWheelEvent* e);
    friend QMimeData* TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection(const TextTranslator::TranslatorTextEdit* self);
    friend QMimeData* TextTranslator__TranslatorTextEdit_SuperCreateMimeDataFromSelection(const TextTranslator::TranslatorTextEdit* self);
    friend bool TextTranslator__TranslatorTextEdit_CanInsertFromMimeData(const TextTranslator::TranslatorTextEdit* self, const QMimeData* source);
    friend bool TextTranslator__TranslatorTextEdit_SuperCanInsertFromMimeData(const TextTranslator::TranslatorTextEdit* self, const QMimeData* source);
    friend void TextTranslator__TranslatorTextEdit_InsertFromMimeData(TextTranslator::TranslatorTextEdit* self, const QMimeData* source);
    friend void TextTranslator__TranslatorTextEdit_SuperInsertFromMimeData(TextTranslator::TranslatorTextEdit* self, const QMimeData* source);
    friend void TextTranslator__TranslatorTextEdit_InputMethodEvent(TextTranslator::TranslatorTextEdit* self, QInputMethodEvent* param1);
    friend void TextTranslator__TranslatorTextEdit_SuperInputMethodEvent(TextTranslator::TranslatorTextEdit* self, QInputMethodEvent* param1);
    friend void TextTranslator__TranslatorTextEdit_ScrollContentsBy(TextTranslator::TranslatorTextEdit* self, int dx, int dy);
    friend void TextTranslator__TranslatorTextEdit_SuperScrollContentsBy(TextTranslator::TranslatorTextEdit* self, int dx, int dy);
    friend void TextTranslator__TranslatorTextEdit_DoSetTextCursor(TextTranslator::TranslatorTextEdit* self, const QTextCursor* cursor);
    friend void TextTranslator__TranslatorTextEdit_SuperDoSetTextCursor(TextTranslator::TranslatorTextEdit* self, const QTextCursor* cursor);
    friend bool TextTranslator__TranslatorTextEdit_EventFilter(TextTranslator::TranslatorTextEdit* self, QObject* param1, QEvent* param2);
    friend bool TextTranslator__TranslatorTextEdit_SuperEventFilter(TextTranslator::TranslatorTextEdit* self, QObject* param1, QEvent* param2);
    friend bool TextTranslator__TranslatorTextEdit_ViewportEvent(TextTranslator::TranslatorTextEdit* self, QEvent* param1);
    friend bool TextTranslator__TranslatorTextEdit_SuperViewportEvent(TextTranslator::TranslatorTextEdit* self, QEvent* param1);
    friend QSize* TextTranslator__TranslatorTextEdit_ViewportSizeHint(const TextTranslator::TranslatorTextEdit* self);
    friend QSize* TextTranslator__TranslatorTextEdit_SuperViewportSizeHint(const TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_InitStyleOption(const TextTranslator::TranslatorTextEdit* self, QStyleOptionFrame* option);
    friend void TextTranslator__TranslatorTextEdit_SuperInitStyleOption(const TextTranslator::TranslatorTextEdit* self, QStyleOptionFrame* option);
    friend void TextTranslator__TranslatorTextEdit_EnterEvent(TextTranslator::TranslatorTextEdit* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperEnterEvent(TextTranslator::TranslatorTextEdit* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorTextEdit_LeaveEvent(TextTranslator::TranslatorTextEdit* self, QEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperLeaveEvent(TextTranslator::TranslatorTextEdit* self, QEvent* event);
    friend void TextTranslator__TranslatorTextEdit_MoveEvent(TextTranslator::TranslatorTextEdit* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperMoveEvent(TextTranslator::TranslatorTextEdit* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorTextEdit_CloseEvent(TextTranslator::TranslatorTextEdit* self, QCloseEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperCloseEvent(TextTranslator::TranslatorTextEdit* self, QCloseEvent* event);
    friend void TextTranslator__TranslatorTextEdit_TabletEvent(TextTranslator::TranslatorTextEdit* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperTabletEvent(TextTranslator::TranslatorTextEdit* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorTextEdit_ActionEvent(TextTranslator::TranslatorTextEdit* self, QActionEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperActionEvent(TextTranslator::TranslatorTextEdit* self, QActionEvent* event);
    friend void TextTranslator__TranslatorTextEdit_HideEvent(TextTranslator::TranslatorTextEdit* self, QHideEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperHideEvent(TextTranslator::TranslatorTextEdit* self, QHideEvent* event);
    friend bool TextTranslator__TranslatorTextEdit_NativeEvent(TextTranslator::TranslatorTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextTranslator__TranslatorTextEdit_SuperNativeEvent(TextTranslator::TranslatorTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextTranslator__TranslatorTextEdit_Metric(const TextTranslator::TranslatorTextEdit* self, int param1);
    friend int TextTranslator__TranslatorTextEdit_SuperMetric(const TextTranslator::TranslatorTextEdit* self, int param1);
    friend void TextTranslator__TranslatorTextEdit_InitPainter(const TextTranslator::TranslatorTextEdit* self, QPainter* painter);
    friend void TextTranslator__TranslatorTextEdit_SuperInitPainter(const TextTranslator::TranslatorTextEdit* self, QPainter* painter);
    friend QPaintDevice* TextTranslator__TranslatorTextEdit_Redirected(const TextTranslator::TranslatorTextEdit* self, QPoint* offset);
    friend QPaintDevice* TextTranslator__TranslatorTextEdit_SuperRedirected(const TextTranslator::TranslatorTextEdit* self, QPoint* offset);
    friend QPainter* TextTranslator__TranslatorTextEdit_SharedPainter(const TextTranslator::TranslatorTextEdit* self);
    friend QPainter* TextTranslator__TranslatorTextEdit_SuperSharedPainter(const TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_ChildEvent(TextTranslator::TranslatorTextEdit* self, QChildEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperChildEvent(TextTranslator::TranslatorTextEdit* self, QChildEvent* event);
    friend void TextTranslator__TranslatorTextEdit_CustomEvent(TextTranslator::TranslatorTextEdit* self, QEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperCustomEvent(TextTranslator::TranslatorTextEdit* self, QEvent* event);
    friend void TextTranslator__TranslatorTextEdit_ConnectNotify(TextTranslator::TranslatorTextEdit* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorTextEdit_SuperConnectNotify(TextTranslator::TranslatorTextEdit* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorTextEdit_DisconnectNotify(TextTranslator::TranslatorTextEdit* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorTextEdit_SuperDisconnectNotify(TextTranslator::TranslatorTextEdit* self, const QMetaMethod* signal);
    friend QTextBlock* TextTranslator__TranslatorTextEdit_FirstVisibleBlock(const TextTranslator::TranslatorTextEdit* self);
    friend QTextBlock* TextTranslator__TranslatorTextEdit_SuperFirstVisibleBlock(const TextTranslator::TranslatorTextEdit* self);
    friend QPointF* TextTranslator__TranslatorTextEdit_ContentOffset(const TextTranslator::TranslatorTextEdit* self);
    friend QPointF* TextTranslator__TranslatorTextEdit_SuperContentOffset(const TextTranslator::TranslatorTextEdit* self);
    friend QRectF* TextTranslator__TranslatorTextEdit_BlockBoundingRect(const TextTranslator::TranslatorTextEdit* self, const QTextBlock* block);
    friend QRectF* TextTranslator__TranslatorTextEdit_SuperBlockBoundingRect(const TextTranslator::TranslatorTextEdit* self, const QTextBlock* block);
    friend QRectF* TextTranslator__TranslatorTextEdit_BlockBoundingGeometry(const TextTranslator::TranslatorTextEdit* self, const QTextBlock* block);
    friend QRectF* TextTranslator__TranslatorTextEdit_SuperBlockBoundingGeometry(const TextTranslator::TranslatorTextEdit* self, const QTextBlock* block);
    friend QAbstractTextDocumentLayout__PaintContext* TextTranslator__TranslatorTextEdit_GetPaintContext(const TextTranslator::TranslatorTextEdit* self);
    friend QAbstractTextDocumentLayout__PaintContext* TextTranslator__TranslatorTextEdit_SuperGetPaintContext(const TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_ZoomInF(TextTranslator::TranslatorTextEdit* self, float range);
    friend void TextTranslator__TranslatorTextEdit_SuperZoomInF(TextTranslator::TranslatorTextEdit* self, float range);
    friend void TextTranslator__TranslatorTextEdit_SetViewportMargins(TextTranslator::TranslatorTextEdit* self, int left, int top, int right, int bottom);
    friend void TextTranslator__TranslatorTextEdit_SuperSetViewportMargins(TextTranslator::TranslatorTextEdit* self, int left, int top, int right, int bottom);
    friend QMargins* TextTranslator__TranslatorTextEdit_ViewportMargins(const TextTranslator::TranslatorTextEdit* self);
    friend QMargins* TextTranslator__TranslatorTextEdit_SuperViewportMargins(const TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_DrawFrame(TextTranslator::TranslatorTextEdit* self, QPainter* param1);
    friend void TextTranslator__TranslatorTextEdit_SuperDrawFrame(TextTranslator::TranslatorTextEdit* self, QPainter* param1);
    friend void TextTranslator__TranslatorTextEdit_UpdateMicroFocus(TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_SuperUpdateMicroFocus(TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_Create(TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_SuperCreate(TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_Destroy(TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_SuperDestroy(TextTranslator::TranslatorTextEdit* self);
    friend bool TextTranslator__TranslatorTextEdit_FocusNextChild(TextTranslator::TranslatorTextEdit* self);
    friend bool TextTranslator__TranslatorTextEdit_SuperFocusNextChild(TextTranslator::TranslatorTextEdit* self);
    friend bool TextTranslator__TranslatorTextEdit_FocusPreviousChild(TextTranslator::TranslatorTextEdit* self);
    friend bool TextTranslator__TranslatorTextEdit_SuperFocusPreviousChild(TextTranslator::TranslatorTextEdit* self);
    friend QObject* TextTranslator__TranslatorTextEdit_Sender(const TextTranslator::TranslatorTextEdit* self);
    friend QObject* TextTranslator__TranslatorTextEdit_SuperSender(const TextTranslator::TranslatorTextEdit* self);
    friend int TextTranslator__TranslatorTextEdit_SenderSignalIndex(const TextTranslator::TranslatorTextEdit* self);
    friend int TextTranslator__TranslatorTextEdit_SuperSenderSignalIndex(const TextTranslator::TranslatorTextEdit* self);
    friend int TextTranslator__TranslatorTextEdit_Receivers(const TextTranslator::TranslatorTextEdit* self, const char* signal);
    friend int TextTranslator__TranslatorTextEdit_SuperReceivers(const TextTranslator::TranslatorTextEdit* self, const char* signal);
    friend bool TextTranslator__TranslatorTextEdit_IsSignalConnected(const TextTranslator::TranslatorTextEdit* self, const QMetaMethod* signal);
    friend bool TextTranslator__TranslatorTextEdit_SuperIsSignalConnected(const TextTranslator::TranslatorTextEdit* self, const QMetaMethod* signal);
    friend double TextTranslator__TranslatorTextEdit_GetDecodedMetricF(const TextTranslator::TranslatorTextEdit* self, int metricA, int metricB);
    friend double TextTranslator__TranslatorTextEdit_SuperGetDecodedMetricF(const TextTranslator::TranslatorTextEdit* self, int metricA, int metricB);
};

// This class is a subclass of TextTranslator::TranslatorWidget so that we can call protected methods
class VirtualTextTranslatorTranslatorWidget final : public TextTranslator::TranslatorWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextTranslatorTranslatorWidget = true;

    // Virtual class public types (including callbacks)
    using TextTranslator__TranslatorWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextTranslator__TranslatorWidget_Metacast_Callback = void* (*)(TextTranslator__TranslatorWidget*, const char*);
    using TextTranslator__TranslatorWidget_Metacall_Callback = int (*)(TextTranslator__TranslatorWidget*, int, int, void**);
    using TextTranslator__TranslatorWidget_Event_Callback = bool (*)(TextTranslator__TranslatorWidget*, QEvent*);
    using TextTranslator__TranslatorWidget_DevType_Callback = int (*)();
    using TextTranslator__TranslatorWidget_SetVisible_Callback = void (*)(TextTranslator__TranslatorWidget*, bool);
    using TextTranslator__TranslatorWidget_SizeHint_Callback = QSize* (*)();
    using TextTranslator__TranslatorWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextTranslator__TranslatorWidget_HeightForWidth_Callback = int (*)(const TextTranslator__TranslatorWidget*, int);
    using TextTranslator__TranslatorWidget_HasHeightForWidth_Callback = bool (*)();
    using TextTranslator__TranslatorWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextTranslator__TranslatorWidget_MousePressEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMouseEvent*);
    using TextTranslator__TranslatorWidget_MouseReleaseEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMouseEvent*);
    using TextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMouseEvent*);
    using TextTranslator__TranslatorWidget_MouseMoveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMouseEvent*);
    using TextTranslator__TranslatorWidget_WheelEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QWheelEvent*);
    using TextTranslator__TranslatorWidget_KeyPressEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QKeyEvent*);
    using TextTranslator__TranslatorWidget_KeyReleaseEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QKeyEvent*);
    using TextTranslator__TranslatorWidget_FocusInEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QFocusEvent*);
    using TextTranslator__TranslatorWidget_FocusOutEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QFocusEvent*);
    using TextTranslator__TranslatorWidget_EnterEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QEnterEvent*);
    using TextTranslator__TranslatorWidget_LeaveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QEvent*);
    using TextTranslator__TranslatorWidget_PaintEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QPaintEvent*);
    using TextTranslator__TranslatorWidget_MoveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMoveEvent*);
    using TextTranslator__TranslatorWidget_ResizeEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QResizeEvent*);
    using TextTranslator__TranslatorWidget_CloseEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QCloseEvent*);
    using TextTranslator__TranslatorWidget_ContextMenuEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QContextMenuEvent*);
    using TextTranslator__TranslatorWidget_TabletEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QTabletEvent*);
    using TextTranslator__TranslatorWidget_ActionEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QActionEvent*);
    using TextTranslator__TranslatorWidget_DragEnterEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QDragEnterEvent*);
    using TextTranslator__TranslatorWidget_DragMoveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QDragMoveEvent*);
    using TextTranslator__TranslatorWidget_DragLeaveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QDragLeaveEvent*);
    using TextTranslator__TranslatorWidget_DropEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QDropEvent*);
    using TextTranslator__TranslatorWidget_ShowEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QShowEvent*);
    using TextTranslator__TranslatorWidget_HideEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QHideEvent*);
    using TextTranslator__TranslatorWidget_NativeEvent_Callback = bool (*)(TextTranslator__TranslatorWidget*, libqt_string, void*, intptr_t*);
    using TextTranslator__TranslatorWidget_ChangeEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QEvent*);
    using TextTranslator__TranslatorWidget_Metric_Callback = int (*)(const TextTranslator__TranslatorWidget*, int);
    using TextTranslator__TranslatorWidget_InitPainter_Callback = void (*)(const TextTranslator__TranslatorWidget*, QPainter*);
    using TextTranslator__TranslatorWidget_Redirected_Callback = QPaintDevice* (*)(const TextTranslator__TranslatorWidget*, QPoint*);
    using TextTranslator__TranslatorWidget_SharedPainter_Callback = QPainter* (*)();
    using TextTranslator__TranslatorWidget_InputMethodEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QInputMethodEvent*);
    using TextTranslator__TranslatorWidget_InputMethodQuery_Callback = QVariant* (*)(const TextTranslator__TranslatorWidget*, int);
    using TextTranslator__TranslatorWidget_FocusNextPrevChild_Callback = bool (*)(TextTranslator__TranslatorWidget*, bool);
    using TextTranslator__TranslatorWidget_EventFilter_Callback = bool (*)(TextTranslator__TranslatorWidget*, QObject*, QEvent*);
    using TextTranslator__TranslatorWidget_TimerEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QTimerEvent*);
    using TextTranslator__TranslatorWidget_ChildEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QChildEvent*);
    using TextTranslator__TranslatorWidget_CustomEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QEvent*);
    using TextTranslator__TranslatorWidget_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorWidget*, QMetaMethod*);
    using TextTranslator__TranslatorWidget_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorWidget*, QMetaMethod*);
    using TextTranslator__TranslatorWidget_UpdateMicroFocus_Callback = void (*)();
    using TextTranslator__TranslatorWidget_Create_Callback = void (*)();
    using TextTranslator__TranslatorWidget_Destroy_Callback = void (*)();
    using TextTranslator__TranslatorWidget_FocusNextChild_Callback = bool (*)();
    using TextTranslator__TranslatorWidget_FocusPreviousChild_Callback = bool (*)();
    using TextTranslator__TranslatorWidget_Sender_Callback = QObject* (*)();
    using TextTranslator__TranslatorWidget_SenderSignalIndex_Callback = int (*)();
    using TextTranslator__TranslatorWidget_Receivers_Callback = int (*)(const TextTranslator__TranslatorWidget*, const char*);
    using TextTranslator__TranslatorWidget_IsSignalConnected_Callback = bool (*)(const TextTranslator__TranslatorWidget*, QMetaMethod*);
    using TextTranslator__TranslatorWidget_GetDecodedMetricF_Callback = double (*)(const TextTranslator__TranslatorWidget*, int, int);

  protected:
    // Instance callback storage
    TextTranslator__TranslatorWidget_MetaObject_Callback texttranslator__translatorwidget_metaobject_callback = nullptr;
    TextTranslator__TranslatorWidget_Metacast_Callback texttranslator__translatorwidget_metacast_callback = nullptr;
    TextTranslator__TranslatorWidget_Metacall_Callback texttranslator__translatorwidget_metacall_callback = nullptr;
    TextTranslator__TranslatorWidget_Event_Callback texttranslator__translatorwidget_event_callback = nullptr;
    TextTranslator__TranslatorWidget_DevType_Callback texttranslator__translatorwidget_devtype_callback = nullptr;
    TextTranslator__TranslatorWidget_SetVisible_Callback texttranslator__translatorwidget_setvisible_callback = nullptr;
    TextTranslator__TranslatorWidget_SizeHint_Callback texttranslator__translatorwidget_sizehint_callback = nullptr;
    TextTranslator__TranslatorWidget_MinimumSizeHint_Callback texttranslator__translatorwidget_minimumsizehint_callback = nullptr;
    TextTranslator__TranslatorWidget_HeightForWidth_Callback texttranslator__translatorwidget_heightforwidth_callback = nullptr;
    TextTranslator__TranslatorWidget_HasHeightForWidth_Callback texttranslator__translatorwidget_hasheightforwidth_callback = nullptr;
    TextTranslator__TranslatorWidget_PaintEngine_Callback texttranslator__translatorwidget_paintengine_callback = nullptr;
    TextTranslator__TranslatorWidget_MousePressEvent_Callback texttranslator__translatorwidget_mousepressevent_callback = nullptr;
    TextTranslator__TranslatorWidget_MouseReleaseEvent_Callback texttranslator__translatorwidget_mousereleaseevent_callback = nullptr;
    TextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback texttranslator__translatorwidget_mousedoubleclickevent_callback = nullptr;
    TextTranslator__TranslatorWidget_MouseMoveEvent_Callback texttranslator__translatorwidget_mousemoveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_WheelEvent_Callback texttranslator__translatorwidget_wheelevent_callback = nullptr;
    TextTranslator__TranslatorWidget_KeyPressEvent_Callback texttranslator__translatorwidget_keypressevent_callback = nullptr;
    TextTranslator__TranslatorWidget_KeyReleaseEvent_Callback texttranslator__translatorwidget_keyreleaseevent_callback = nullptr;
    TextTranslator__TranslatorWidget_FocusInEvent_Callback texttranslator__translatorwidget_focusinevent_callback = nullptr;
    TextTranslator__TranslatorWidget_FocusOutEvent_Callback texttranslator__translatorwidget_focusoutevent_callback = nullptr;
    TextTranslator__TranslatorWidget_EnterEvent_Callback texttranslator__translatorwidget_enterevent_callback = nullptr;
    TextTranslator__TranslatorWidget_LeaveEvent_Callback texttranslator__translatorwidget_leaveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_PaintEvent_Callback texttranslator__translatorwidget_paintevent_callback = nullptr;
    TextTranslator__TranslatorWidget_MoveEvent_Callback texttranslator__translatorwidget_moveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ResizeEvent_Callback texttranslator__translatorwidget_resizeevent_callback = nullptr;
    TextTranslator__TranslatorWidget_CloseEvent_Callback texttranslator__translatorwidget_closeevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ContextMenuEvent_Callback texttranslator__translatorwidget_contextmenuevent_callback = nullptr;
    TextTranslator__TranslatorWidget_TabletEvent_Callback texttranslator__translatorwidget_tabletevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ActionEvent_Callback texttranslator__translatorwidget_actionevent_callback = nullptr;
    TextTranslator__TranslatorWidget_DragEnterEvent_Callback texttranslator__translatorwidget_dragenterevent_callback = nullptr;
    TextTranslator__TranslatorWidget_DragMoveEvent_Callback texttranslator__translatorwidget_dragmoveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_DragLeaveEvent_Callback texttranslator__translatorwidget_dragleaveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_DropEvent_Callback texttranslator__translatorwidget_dropevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ShowEvent_Callback texttranslator__translatorwidget_showevent_callback = nullptr;
    TextTranslator__TranslatorWidget_HideEvent_Callback texttranslator__translatorwidget_hideevent_callback = nullptr;
    TextTranslator__TranslatorWidget_NativeEvent_Callback texttranslator__translatorwidget_nativeevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ChangeEvent_Callback texttranslator__translatorwidget_changeevent_callback = nullptr;
    TextTranslator__TranslatorWidget_Metric_Callback texttranslator__translatorwidget_metric_callback = nullptr;
    TextTranslator__TranslatorWidget_InitPainter_Callback texttranslator__translatorwidget_initpainter_callback = nullptr;
    TextTranslator__TranslatorWidget_Redirected_Callback texttranslator__translatorwidget_redirected_callback = nullptr;
    TextTranslator__TranslatorWidget_SharedPainter_Callback texttranslator__translatorwidget_sharedpainter_callback = nullptr;
    TextTranslator__TranslatorWidget_InputMethodEvent_Callback texttranslator__translatorwidget_inputmethodevent_callback = nullptr;
    TextTranslator__TranslatorWidget_InputMethodQuery_Callback texttranslator__translatorwidget_inputmethodquery_callback = nullptr;
    TextTranslator__TranslatorWidget_FocusNextPrevChild_Callback texttranslator__translatorwidget_focusnextprevchild_callback = nullptr;
    TextTranslator__TranslatorWidget_EventFilter_Callback texttranslator__translatorwidget_eventfilter_callback = nullptr;
    TextTranslator__TranslatorWidget_TimerEvent_Callback texttranslator__translatorwidget_timerevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ChildEvent_Callback texttranslator__translatorwidget_childevent_callback = nullptr;
    TextTranslator__TranslatorWidget_CustomEvent_Callback texttranslator__translatorwidget_customevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ConnectNotify_Callback texttranslator__translatorwidget_connectnotify_callback = nullptr;
    TextTranslator__TranslatorWidget_DisconnectNotify_Callback texttranslator__translatorwidget_disconnectnotify_callback = nullptr;
    TextTranslator__TranslatorWidget_UpdateMicroFocus_Callback texttranslator__translatorwidget_updatemicrofocus_callback = nullptr;
    TextTranslator__TranslatorWidget_Create_Callback texttranslator__translatorwidget_create_callback = nullptr;
    TextTranslator__TranslatorWidget_Destroy_Callback texttranslator__translatorwidget_destroy_callback = nullptr;
    TextTranslator__TranslatorWidget_FocusNextChild_Callback texttranslator__translatorwidget_focusnextchild_callback = nullptr;
    TextTranslator__TranslatorWidget_FocusPreviousChild_Callback texttranslator__translatorwidget_focuspreviouschild_callback = nullptr;
    TextTranslator__TranslatorWidget_Sender_Callback texttranslator__translatorwidget_sender_callback = nullptr;
    TextTranslator__TranslatorWidget_SenderSignalIndex_Callback texttranslator__translatorwidget_sendersignalindex_callback = nullptr;
    TextTranslator__TranslatorWidget_Receivers_Callback texttranslator__translatorwidget_receivers_callback = nullptr;
    TextTranslator__TranslatorWidget_IsSignalConnected_Callback texttranslator__translatorwidget_issignalconnected_callback = nullptr;
    TextTranslator__TranslatorWidget_GetDecodedMetricF_Callback texttranslator__translatorwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool texttranslator__translatorwidget_metaobject_isbase = false;
    mutable bool texttranslator__translatorwidget_metacast_isbase = false;
    mutable bool texttranslator__translatorwidget_metacall_isbase = false;
    mutable bool texttranslator__translatorwidget_event_isbase = false;
    mutable bool texttranslator__translatorwidget_devtype_isbase = false;
    mutable bool texttranslator__translatorwidget_setvisible_isbase = false;
    mutable bool texttranslator__translatorwidget_sizehint_isbase = false;
    mutable bool texttranslator__translatorwidget_minimumsizehint_isbase = false;
    mutable bool texttranslator__translatorwidget_heightforwidth_isbase = false;
    mutable bool texttranslator__translatorwidget_hasheightforwidth_isbase = false;
    mutable bool texttranslator__translatorwidget_paintengine_isbase = false;
    mutable bool texttranslator__translatorwidget_mousepressevent_isbase = false;
    mutable bool texttranslator__translatorwidget_mousereleaseevent_isbase = false;
    mutable bool texttranslator__translatorwidget_mousedoubleclickevent_isbase = false;
    mutable bool texttranslator__translatorwidget_mousemoveevent_isbase = false;
    mutable bool texttranslator__translatorwidget_wheelevent_isbase = false;
    mutable bool texttranslator__translatorwidget_keypressevent_isbase = false;
    mutable bool texttranslator__translatorwidget_keyreleaseevent_isbase = false;
    mutable bool texttranslator__translatorwidget_focusinevent_isbase = false;
    mutable bool texttranslator__translatorwidget_focusoutevent_isbase = false;
    mutable bool texttranslator__translatorwidget_enterevent_isbase = false;
    mutable bool texttranslator__translatorwidget_leaveevent_isbase = false;
    mutable bool texttranslator__translatorwidget_paintevent_isbase = false;
    mutable bool texttranslator__translatorwidget_moveevent_isbase = false;
    mutable bool texttranslator__translatorwidget_resizeevent_isbase = false;
    mutable bool texttranslator__translatorwidget_closeevent_isbase = false;
    mutable bool texttranslator__translatorwidget_contextmenuevent_isbase = false;
    mutable bool texttranslator__translatorwidget_tabletevent_isbase = false;
    mutable bool texttranslator__translatorwidget_actionevent_isbase = false;
    mutable bool texttranslator__translatorwidget_dragenterevent_isbase = false;
    mutable bool texttranslator__translatorwidget_dragmoveevent_isbase = false;
    mutable bool texttranslator__translatorwidget_dragleaveevent_isbase = false;
    mutable bool texttranslator__translatorwidget_dropevent_isbase = false;
    mutable bool texttranslator__translatorwidget_showevent_isbase = false;
    mutable bool texttranslator__translatorwidget_hideevent_isbase = false;
    mutable bool texttranslator__translatorwidget_nativeevent_isbase = false;
    mutable bool texttranslator__translatorwidget_changeevent_isbase = false;
    mutable bool texttranslator__translatorwidget_metric_isbase = false;
    mutable bool texttranslator__translatorwidget_initpainter_isbase = false;
    mutable bool texttranslator__translatorwidget_redirected_isbase = false;
    mutable bool texttranslator__translatorwidget_sharedpainter_isbase = false;
    mutable bool texttranslator__translatorwidget_inputmethodevent_isbase = false;
    mutable bool texttranslator__translatorwidget_inputmethodquery_isbase = false;
    mutable bool texttranslator__translatorwidget_focusnextprevchild_isbase = false;
    mutable bool texttranslator__translatorwidget_eventfilter_isbase = false;
    mutable bool texttranslator__translatorwidget_timerevent_isbase = false;
    mutable bool texttranslator__translatorwidget_childevent_isbase = false;
    mutable bool texttranslator__translatorwidget_customevent_isbase = false;
    mutable bool texttranslator__translatorwidget_connectnotify_isbase = false;
    mutable bool texttranslator__translatorwidget_disconnectnotify_isbase = false;
    mutable bool texttranslator__translatorwidget_updatemicrofocus_isbase = false;
    mutable bool texttranslator__translatorwidget_create_isbase = false;
    mutable bool texttranslator__translatorwidget_destroy_isbase = false;
    mutable bool texttranslator__translatorwidget_focusnextchild_isbase = false;
    mutable bool texttranslator__translatorwidget_focuspreviouschild_isbase = false;
    mutable bool texttranslator__translatorwidget_sender_isbase = false;
    mutable bool texttranslator__translatorwidget_sendersignalindex_isbase = false;
    mutable bool texttranslator__translatorwidget_receivers_isbase = false;
    mutable bool texttranslator__translatorwidget_issignalconnected_isbase = false;
    mutable bool texttranslator__translatorwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextTranslatorTranslatorWidget(QWidget* parent) : TextTranslator::TranslatorWidget(parent) {};
    VirtualTextTranslatorTranslatorWidget() : TextTranslator::TranslatorWidget() {};
    VirtualTextTranslatorTranslatorWidget(const QString& text) : TextTranslator::TranslatorWidget(text) {};
    VirtualTextTranslatorTranslatorWidget(const QString& text, QWidget* parent) : TextTranslator::TranslatorWidget(text, parent) {};

    // Callback setters
    inline void setTextTranslator__TranslatorWidget_MetaObject_Callback(TextTranslator__TranslatorWidget_MetaObject_Callback cb) { texttranslator__translatorwidget_metaobject_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Metacast_Callback(TextTranslator__TranslatorWidget_Metacast_Callback cb) { texttranslator__translatorwidget_metacast_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Metacall_Callback(TextTranslator__TranslatorWidget_Metacall_Callback cb) { texttranslator__translatorwidget_metacall_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Event_Callback(TextTranslator__TranslatorWidget_Event_Callback cb) { texttranslator__translatorwidget_event_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_DevType_Callback(TextTranslator__TranslatorWidget_DevType_Callback cb) { texttranslator__translatorwidget_devtype_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_SetVisible_Callback(TextTranslator__TranslatorWidget_SetVisible_Callback cb) { texttranslator__translatorwidget_setvisible_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_SizeHint_Callback(TextTranslator__TranslatorWidget_SizeHint_Callback cb) { texttranslator__translatorwidget_sizehint_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_MinimumSizeHint_Callback(TextTranslator__TranslatorWidget_MinimumSizeHint_Callback cb) { texttranslator__translatorwidget_minimumsizehint_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_HeightForWidth_Callback(TextTranslator__TranslatorWidget_HeightForWidth_Callback cb) { texttranslator__translatorwidget_heightforwidth_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_HasHeightForWidth_Callback(TextTranslator__TranslatorWidget_HasHeightForWidth_Callback cb) { texttranslator__translatorwidget_hasheightforwidth_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_PaintEngine_Callback(TextTranslator__TranslatorWidget_PaintEngine_Callback cb) { texttranslator__translatorwidget_paintengine_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_MousePressEvent_Callback(TextTranslator__TranslatorWidget_MousePressEvent_Callback cb) { texttranslator__translatorwidget_mousepressevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_MouseReleaseEvent_Callback(TextTranslator__TranslatorWidget_MouseReleaseEvent_Callback cb) { texttranslator__translatorwidget_mousereleaseevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback(TextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback cb) { texttranslator__translatorwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_MouseMoveEvent_Callback(TextTranslator__TranslatorWidget_MouseMoveEvent_Callback cb) { texttranslator__translatorwidget_mousemoveevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_WheelEvent_Callback(TextTranslator__TranslatorWidget_WheelEvent_Callback cb) { texttranslator__translatorwidget_wheelevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_KeyPressEvent_Callback(TextTranslator__TranslatorWidget_KeyPressEvent_Callback cb) { texttranslator__translatorwidget_keypressevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_KeyReleaseEvent_Callback(TextTranslator__TranslatorWidget_KeyReleaseEvent_Callback cb) { texttranslator__translatorwidget_keyreleaseevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_FocusInEvent_Callback(TextTranslator__TranslatorWidget_FocusInEvent_Callback cb) { texttranslator__translatorwidget_focusinevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_FocusOutEvent_Callback(TextTranslator__TranslatorWidget_FocusOutEvent_Callback cb) { texttranslator__translatorwidget_focusoutevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_EnterEvent_Callback(TextTranslator__TranslatorWidget_EnterEvent_Callback cb) { texttranslator__translatorwidget_enterevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_LeaveEvent_Callback(TextTranslator__TranslatorWidget_LeaveEvent_Callback cb) { texttranslator__translatorwidget_leaveevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_PaintEvent_Callback(TextTranslator__TranslatorWidget_PaintEvent_Callback cb) { texttranslator__translatorwidget_paintevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_MoveEvent_Callback(TextTranslator__TranslatorWidget_MoveEvent_Callback cb) { texttranslator__translatorwidget_moveevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_ResizeEvent_Callback(TextTranslator__TranslatorWidget_ResizeEvent_Callback cb) { texttranslator__translatorwidget_resizeevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_CloseEvent_Callback(TextTranslator__TranslatorWidget_CloseEvent_Callback cb) { texttranslator__translatorwidget_closeevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_ContextMenuEvent_Callback(TextTranslator__TranslatorWidget_ContextMenuEvent_Callback cb) { texttranslator__translatorwidget_contextmenuevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_TabletEvent_Callback(TextTranslator__TranslatorWidget_TabletEvent_Callback cb) { texttranslator__translatorwidget_tabletevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_ActionEvent_Callback(TextTranslator__TranslatorWidget_ActionEvent_Callback cb) { texttranslator__translatorwidget_actionevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_DragEnterEvent_Callback(TextTranslator__TranslatorWidget_DragEnterEvent_Callback cb) { texttranslator__translatorwidget_dragenterevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_DragMoveEvent_Callback(TextTranslator__TranslatorWidget_DragMoveEvent_Callback cb) { texttranslator__translatorwidget_dragmoveevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_DragLeaveEvent_Callback(TextTranslator__TranslatorWidget_DragLeaveEvent_Callback cb) { texttranslator__translatorwidget_dragleaveevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_DropEvent_Callback(TextTranslator__TranslatorWidget_DropEvent_Callback cb) { texttranslator__translatorwidget_dropevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_ShowEvent_Callback(TextTranslator__TranslatorWidget_ShowEvent_Callback cb) { texttranslator__translatorwidget_showevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_HideEvent_Callback(TextTranslator__TranslatorWidget_HideEvent_Callback cb) { texttranslator__translatorwidget_hideevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_NativeEvent_Callback(TextTranslator__TranslatorWidget_NativeEvent_Callback cb) { texttranslator__translatorwidget_nativeevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_ChangeEvent_Callback(TextTranslator__TranslatorWidget_ChangeEvent_Callback cb) { texttranslator__translatorwidget_changeevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Metric_Callback(TextTranslator__TranslatorWidget_Metric_Callback cb) { texttranslator__translatorwidget_metric_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_InitPainter_Callback(TextTranslator__TranslatorWidget_InitPainter_Callback cb) { texttranslator__translatorwidget_initpainter_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Redirected_Callback(TextTranslator__TranslatorWidget_Redirected_Callback cb) { texttranslator__translatorwidget_redirected_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_SharedPainter_Callback(TextTranslator__TranslatorWidget_SharedPainter_Callback cb) { texttranslator__translatorwidget_sharedpainter_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_InputMethodEvent_Callback(TextTranslator__TranslatorWidget_InputMethodEvent_Callback cb) { texttranslator__translatorwidget_inputmethodevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_InputMethodQuery_Callback(TextTranslator__TranslatorWidget_InputMethodQuery_Callback cb) { texttranslator__translatorwidget_inputmethodquery_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_FocusNextPrevChild_Callback(TextTranslator__TranslatorWidget_FocusNextPrevChild_Callback cb) { texttranslator__translatorwidget_focusnextprevchild_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_EventFilter_Callback(TextTranslator__TranslatorWidget_EventFilter_Callback cb) { texttranslator__translatorwidget_eventfilter_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_TimerEvent_Callback(TextTranslator__TranslatorWidget_TimerEvent_Callback cb) { texttranslator__translatorwidget_timerevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_ChildEvent_Callback(TextTranslator__TranslatorWidget_ChildEvent_Callback cb) { texttranslator__translatorwidget_childevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_CustomEvent_Callback(TextTranslator__TranslatorWidget_CustomEvent_Callback cb) { texttranslator__translatorwidget_customevent_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_ConnectNotify_Callback(TextTranslator__TranslatorWidget_ConnectNotify_Callback cb) { texttranslator__translatorwidget_connectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_DisconnectNotify_Callback(TextTranslator__TranslatorWidget_DisconnectNotify_Callback cb) { texttranslator__translatorwidget_disconnectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_UpdateMicroFocus_Callback(TextTranslator__TranslatorWidget_UpdateMicroFocus_Callback cb) { texttranslator__translatorwidget_updatemicrofocus_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Create_Callback(TextTranslator__TranslatorWidget_Create_Callback cb) { texttranslator__translatorwidget_create_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Destroy_Callback(TextTranslator__TranslatorWidget_Destroy_Callback cb) { texttranslator__translatorwidget_destroy_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_FocusNextChild_Callback(TextTranslator__TranslatorWidget_FocusNextChild_Callback cb) { texttranslator__translatorwidget_focusnextchild_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_FocusPreviousChild_Callback(TextTranslator__TranslatorWidget_FocusPreviousChild_Callback cb) { texttranslator__translatorwidget_focuspreviouschild_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Sender_Callback(TextTranslator__TranslatorWidget_Sender_Callback cb) { texttranslator__translatorwidget_sender_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_SenderSignalIndex_Callback(TextTranslator__TranslatorWidget_SenderSignalIndex_Callback cb) { texttranslator__translatorwidget_sendersignalindex_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_Receivers_Callback(TextTranslator__TranslatorWidget_Receivers_Callback cb) { texttranslator__translatorwidget_receivers_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_IsSignalConnected_Callback(TextTranslator__TranslatorWidget_IsSignalConnected_Callback cb) { texttranslator__translatorwidget_issignalconnected_callback = cb; }
    inline void setTextTranslator__TranslatorWidget_GetDecodedMetricF_Callback(TextTranslator__TranslatorWidget_GetDecodedMetricF_Callback cb) { texttranslator__translatorwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextTranslator__TranslatorWidget_MetaObject_IsBase(bool value) const { texttranslator__translatorwidget_metaobject_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Metacast_IsBase(bool value) const { texttranslator__translatorwidget_metacast_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Metacall_IsBase(bool value) const { texttranslator__translatorwidget_metacall_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Event_IsBase(bool value) const { texttranslator__translatorwidget_event_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_DevType_IsBase(bool value) const { texttranslator__translatorwidget_devtype_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_SetVisible_IsBase(bool value) const { texttranslator__translatorwidget_setvisible_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_SizeHint_IsBase(bool value) const { texttranslator__translatorwidget_sizehint_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_MinimumSizeHint_IsBase(bool value) const { texttranslator__translatorwidget_minimumsizehint_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_HeightForWidth_IsBase(bool value) const { texttranslator__translatorwidget_heightforwidth_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_HasHeightForWidth_IsBase(bool value) const { texttranslator__translatorwidget_hasheightforwidth_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_PaintEngine_IsBase(bool value) const { texttranslator__translatorwidget_paintengine_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_MousePressEvent_IsBase(bool value) const { texttranslator__translatorwidget_mousepressevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_MouseReleaseEvent_IsBase(bool value) const { texttranslator__translatorwidget_mousereleaseevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_MouseDoubleClickEvent_IsBase(bool value) const { texttranslator__translatorwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_MouseMoveEvent_IsBase(bool value) const { texttranslator__translatorwidget_mousemoveevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_WheelEvent_IsBase(bool value) const { texttranslator__translatorwidget_wheelevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_KeyPressEvent_IsBase(bool value) const { texttranslator__translatorwidget_keypressevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_KeyReleaseEvent_IsBase(bool value) const { texttranslator__translatorwidget_keyreleaseevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_FocusInEvent_IsBase(bool value) const { texttranslator__translatorwidget_focusinevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_FocusOutEvent_IsBase(bool value) const { texttranslator__translatorwidget_focusoutevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_EnterEvent_IsBase(bool value) const { texttranslator__translatorwidget_enterevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_LeaveEvent_IsBase(bool value) const { texttranslator__translatorwidget_leaveevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_PaintEvent_IsBase(bool value) const { texttranslator__translatorwidget_paintevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_MoveEvent_IsBase(bool value) const { texttranslator__translatorwidget_moveevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_ResizeEvent_IsBase(bool value) const { texttranslator__translatorwidget_resizeevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_CloseEvent_IsBase(bool value) const { texttranslator__translatorwidget_closeevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_ContextMenuEvent_IsBase(bool value) const { texttranslator__translatorwidget_contextmenuevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_TabletEvent_IsBase(bool value) const { texttranslator__translatorwidget_tabletevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_ActionEvent_IsBase(bool value) const { texttranslator__translatorwidget_actionevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_DragEnterEvent_IsBase(bool value) const { texttranslator__translatorwidget_dragenterevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_DragMoveEvent_IsBase(bool value) const { texttranslator__translatorwidget_dragmoveevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_DragLeaveEvent_IsBase(bool value) const { texttranslator__translatorwidget_dragleaveevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_DropEvent_IsBase(bool value) const { texttranslator__translatorwidget_dropevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_ShowEvent_IsBase(bool value) const { texttranslator__translatorwidget_showevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_HideEvent_IsBase(bool value) const { texttranslator__translatorwidget_hideevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_NativeEvent_IsBase(bool value) const { texttranslator__translatorwidget_nativeevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_ChangeEvent_IsBase(bool value) const { texttranslator__translatorwidget_changeevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Metric_IsBase(bool value) const { texttranslator__translatorwidget_metric_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_InitPainter_IsBase(bool value) const { texttranslator__translatorwidget_initpainter_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Redirected_IsBase(bool value) const { texttranslator__translatorwidget_redirected_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_SharedPainter_IsBase(bool value) const { texttranslator__translatorwidget_sharedpainter_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_InputMethodEvent_IsBase(bool value) const { texttranslator__translatorwidget_inputmethodevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_InputMethodQuery_IsBase(bool value) const { texttranslator__translatorwidget_inputmethodquery_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_FocusNextPrevChild_IsBase(bool value) const { texttranslator__translatorwidget_focusnextprevchild_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_EventFilter_IsBase(bool value) const { texttranslator__translatorwidget_eventfilter_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_TimerEvent_IsBase(bool value) const { texttranslator__translatorwidget_timerevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_ChildEvent_IsBase(bool value) const { texttranslator__translatorwidget_childevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_CustomEvent_IsBase(bool value) const { texttranslator__translatorwidget_customevent_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_ConnectNotify_IsBase(bool value) const { texttranslator__translatorwidget_connectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_DisconnectNotify_IsBase(bool value) const { texttranslator__translatorwidget_disconnectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_UpdateMicroFocus_IsBase(bool value) const { texttranslator__translatorwidget_updatemicrofocus_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Create_IsBase(bool value) const { texttranslator__translatorwidget_create_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Destroy_IsBase(bool value) const { texttranslator__translatorwidget_destroy_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_FocusNextChild_IsBase(bool value) const { texttranslator__translatorwidget_focusnextchild_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_FocusPreviousChild_IsBase(bool value) const { texttranslator__translatorwidget_focuspreviouschild_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Sender_IsBase(bool value) const { texttranslator__translatorwidget_sender_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_SenderSignalIndex_IsBase(bool value) const { texttranslator__translatorwidget_sendersignalindex_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_Receivers_IsBase(bool value) const { texttranslator__translatorwidget_receivers_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_IsSignalConnected_IsBase(bool value) const { texttranslator__translatorwidget_issignalconnected_isbase = value; }
    inline void setTextTranslator__TranslatorWidget_GetDecodedMetricF_IsBase(bool value) const { texttranslator__translatorwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorwidget_metaobject_isbase) {
            texttranslator__translatorwidget_metaobject_isbase = false;
            return TextTranslator__TranslatorWidget::metaObject();
        }
        auto metaobject_cb = texttranslator__translatorwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorwidget_metacast_isbase) {
            texttranslator__translatorwidget_metacast_isbase = false;
            return TextTranslator__TranslatorWidget::qt_metacast(param1);
        }
        auto metacast_cb = texttranslator__translatorwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorwidget_metacall_isbase) {
            texttranslator__translatorwidget_metacall_isbase = false;
            return TextTranslator__TranslatorWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = texttranslator__translatorwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (texttranslator__translatorwidget_event_isbase) {
            texttranslator__translatorwidget_event_isbase = false;
            return TextTranslator__TranslatorWidget::event(e);
        }
        auto event_cb = texttranslator__translatorwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (texttranslator__translatorwidget_devtype_isbase) {
            texttranslator__translatorwidget_devtype_isbase = false;
            return TextTranslator__TranslatorWidget::devType();
        }
        auto devtype_cb = texttranslator__translatorwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (texttranslator__translatorwidget_setvisible_isbase) {
            texttranslator__translatorwidget_setvisible_isbase = false;
            TextTranslator__TranslatorWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = texttranslator__translatorwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;
            setvisible_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (texttranslator__translatorwidget_sizehint_isbase) {
            texttranslator__translatorwidget_sizehint_isbase = false;
            return TextTranslator__TranslatorWidget::sizeHint();
        }
        auto sizehint_cb = texttranslator__translatorwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (texttranslator__translatorwidget_minimumsizehint_isbase) {
            texttranslator__translatorwidget_minimumsizehint_isbase = false;
            return TextTranslator__TranslatorWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = texttranslator__translatorwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (texttranslator__translatorwidget_heightforwidth_isbase) {
            texttranslator__translatorwidget_heightforwidth_isbase = false;
            return TextTranslator__TranslatorWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = texttranslator__translatorwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;
            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (texttranslator__translatorwidget_hasheightforwidth_isbase) {
            texttranslator__translatorwidget_hasheightforwidth_isbase = false;
            return TextTranslator__TranslatorWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = texttranslator__translatorwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (texttranslator__translatorwidget_paintengine_isbase) {
            texttranslator__translatorwidget_paintengine_isbase = false;
            return TextTranslator__TranslatorWidget::paintEngine();
        }
        auto paintengine_cb = texttranslator__translatorwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (texttranslator__translatorwidget_mousepressevent_isbase) {
            texttranslator__translatorwidget_mousepressevent_isbase = false;
            TextTranslator__TranslatorWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = texttranslator__translatorwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;
            mousepressevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (texttranslator__translatorwidget_mousereleaseevent_isbase) {
            texttranslator__translatorwidget_mousereleaseevent_isbase = false;
            TextTranslator__TranslatorWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = texttranslator__translatorwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (texttranslator__translatorwidget_mousedoubleclickevent_isbase) {
            texttranslator__translatorwidget_mousedoubleclickevent_isbase = false;
            TextTranslator__TranslatorWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = texttranslator__translatorwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (texttranslator__translatorwidget_mousemoveevent_isbase) {
            texttranslator__translatorwidget_mousemoveevent_isbase = false;
            TextTranslator__TranslatorWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = texttranslator__translatorwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (texttranslator__translatorwidget_wheelevent_isbase) {
            texttranslator__translatorwidget_wheelevent_isbase = false;
            TextTranslator__TranslatorWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = texttranslator__translatorwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (texttranslator__translatorwidget_keypressevent_isbase) {
            texttranslator__translatorwidget_keypressevent_isbase = false;
            TextTranslator__TranslatorWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = texttranslator__translatorwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (texttranslator__translatorwidget_keyreleaseevent_isbase) {
            texttranslator__translatorwidget_keyreleaseevent_isbase = false;
            TextTranslator__TranslatorWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = texttranslator__translatorwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (texttranslator__translatorwidget_focusinevent_isbase) {
            texttranslator__translatorwidget_focusinevent_isbase = false;
            TextTranslator__TranslatorWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = texttranslator__translatorwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;
            focusinevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (texttranslator__translatorwidget_focusoutevent_isbase) {
            texttranslator__translatorwidget_focusoutevent_isbase = false;
            TextTranslator__TranslatorWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = texttranslator__translatorwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;
            focusoutevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (texttranslator__translatorwidget_enterevent_isbase) {
            texttranslator__translatorwidget_enterevent_isbase = false;
            TextTranslator__TranslatorWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = texttranslator__translatorwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;
            enterevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (texttranslator__translatorwidget_leaveevent_isbase) {
            texttranslator__translatorwidget_leaveevent_isbase = false;
            TextTranslator__TranslatorWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = texttranslator__translatorwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;
            leaveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (texttranslator__translatorwidget_paintevent_isbase) {
            texttranslator__translatorwidget_paintevent_isbase = false;
            TextTranslator__TranslatorWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = texttranslator__translatorwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;
            paintevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (texttranslator__translatorwidget_moveevent_isbase) {
            texttranslator__translatorwidget_moveevent_isbase = false;
            TextTranslator__TranslatorWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = texttranslator__translatorwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;
            moveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (texttranslator__translatorwidget_resizeevent_isbase) {
            texttranslator__translatorwidget_resizeevent_isbase = false;
            TextTranslator__TranslatorWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = texttranslator__translatorwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;
            resizeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (texttranslator__translatorwidget_closeevent_isbase) {
            texttranslator__translatorwidget_closeevent_isbase = false;
            TextTranslator__TranslatorWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = texttranslator__translatorwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;
            closeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (texttranslator__translatorwidget_contextmenuevent_isbase) {
            texttranslator__translatorwidget_contextmenuevent_isbase = false;
            TextTranslator__TranslatorWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = texttranslator__translatorwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;
            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (texttranslator__translatorwidget_tabletevent_isbase) {
            texttranslator__translatorwidget_tabletevent_isbase = false;
            TextTranslator__TranslatorWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = texttranslator__translatorwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;
            tabletevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (texttranslator__translatorwidget_actionevent_isbase) {
            texttranslator__translatorwidget_actionevent_isbase = false;
            TextTranslator__TranslatorWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = texttranslator__translatorwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;
            actionevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (texttranslator__translatorwidget_dragenterevent_isbase) {
            texttranslator__translatorwidget_dragenterevent_isbase = false;
            TextTranslator__TranslatorWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = texttranslator__translatorwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;
            dragenterevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (texttranslator__translatorwidget_dragmoveevent_isbase) {
            texttranslator__translatorwidget_dragmoveevent_isbase = false;
            TextTranslator__TranslatorWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = texttranslator__translatorwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (texttranslator__translatorwidget_dragleaveevent_isbase) {
            texttranslator__translatorwidget_dragleaveevent_isbase = false;
            TextTranslator__TranslatorWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = texttranslator__translatorwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (texttranslator__translatorwidget_dropevent_isbase) {
            texttranslator__translatorwidget_dropevent_isbase = false;
            TextTranslator__TranslatorWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = texttranslator__translatorwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;
            dropevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (texttranslator__translatorwidget_showevent_isbase) {
            texttranslator__translatorwidget_showevent_isbase = false;
            TextTranslator__TranslatorWidget::showEvent(event);
            return;
        }
        auto showevent_cb = texttranslator__translatorwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;
            showevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (texttranslator__translatorwidget_hideevent_isbase) {
            texttranslator__translatorwidget_hideevent_isbase = false;
            TextTranslator__TranslatorWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = texttranslator__translatorwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;
            hideevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (texttranslator__translatorwidget_nativeevent_isbase) {
            texttranslator__translatorwidget_nativeevent_isbase = false;
            return TextTranslator__TranslatorWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = texttranslator__translatorwidget_nativeevent_callback;
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
        return TextTranslator__TranslatorWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (texttranslator__translatorwidget_changeevent_isbase) {
            texttranslator__translatorwidget_changeevent_isbase = false;
            TextTranslator__TranslatorWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = texttranslator__translatorwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;
            changeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (texttranslator__translatorwidget_metric_isbase) {
            texttranslator__translatorwidget_metric_isbase = false;
            return TextTranslator__TranslatorWidget::metric(param1);
        }
        auto metric_cb = texttranslator__translatorwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (texttranslator__translatorwidget_initpainter_isbase) {
            texttranslator__translatorwidget_initpainter_isbase = false;
            TextTranslator__TranslatorWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = texttranslator__translatorwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;
            initpainter_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (texttranslator__translatorwidget_redirected_isbase) {
            texttranslator__translatorwidget_redirected_isbase = false;
            return TextTranslator__TranslatorWidget::redirected(offset);
        }
        auto redirected_cb = texttranslator__translatorwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (texttranslator__translatorwidget_sharedpainter_isbase) {
            texttranslator__translatorwidget_sharedpainter_isbase = false;
            return TextTranslator__TranslatorWidget::sharedPainter();
        }
        auto sharedpainter_cb = texttranslator__translatorwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (texttranslator__translatorwidget_inputmethodevent_isbase) {
            texttranslator__translatorwidget_inputmethodevent_isbase = false;
            TextTranslator__TranslatorWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = texttranslator__translatorwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (texttranslator__translatorwidget_inputmethodquery_isbase) {
            texttranslator__translatorwidget_inputmethodquery_isbase = false;
            return TextTranslator__TranslatorWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = texttranslator__translatorwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (texttranslator__translatorwidget_focusnextprevchild_isbase) {
            texttranslator__translatorwidget_focusnextprevchild_isbase = false;
            return TextTranslator__TranslatorWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = texttranslator__translatorwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;
            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorwidget_eventfilter_isbase) {
            texttranslator__translatorwidget_eventfilter_isbase = false;
            return TextTranslator__TranslatorWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = texttranslator__translatorwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorwidget_timerevent_isbase) {
            texttranslator__translatorwidget_timerevent_isbase = false;
            TextTranslator__TranslatorWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = texttranslator__translatorwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorwidget_childevent_isbase) {
            texttranslator__translatorwidget_childevent_isbase = false;
            TextTranslator__TranslatorWidget::childEvent(event);
            return;
        }
        auto childevent_cb = texttranslator__translatorwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorwidget_customevent_isbase) {
            texttranslator__translatorwidget_customevent_isbase = false;
            TextTranslator__TranslatorWidget::customEvent(event);
            return;
        }
        auto customevent_cb = texttranslator__translatorwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorwidget_connectnotify_isbase) {
            texttranslator__translatorwidget_connectnotify_isbase = false;
            TextTranslator__TranslatorWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = texttranslator__translatorwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorwidget_disconnectnotify_isbase) {
            texttranslator__translatorwidget_disconnectnotify_isbase = false;
            TextTranslator__TranslatorWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = texttranslator__translatorwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (texttranslator__translatorwidget_updatemicrofocus_isbase) {
            texttranslator__translatorwidget_updatemicrofocus_isbase = false;
            TextTranslator__TranslatorWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = texttranslator__translatorwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextTranslator__TranslatorWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (texttranslator__translatorwidget_create_isbase) {
            texttranslator__translatorwidget_create_isbase = false;
            TextTranslator__TranslatorWidget::create();
            return;
        }
        auto create_cb = texttranslator__translatorwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextTranslator__TranslatorWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (texttranslator__translatorwidget_destroy_isbase) {
            texttranslator__translatorwidget_destroy_isbase = false;
            TextTranslator__TranslatorWidget::destroy();
            return;
        }
        auto destroy_cb = texttranslator__translatorwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextTranslator__TranslatorWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (texttranslator__translatorwidget_focusnextchild_isbase) {
            texttranslator__translatorwidget_focusnextchild_isbase = false;
            return TextTranslator__TranslatorWidget::focusNextChild();
        }
        auto focusnextchild_cb = texttranslator__translatorwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (texttranslator__translatorwidget_focuspreviouschild_isbase) {
            texttranslator__translatorwidget_focuspreviouschild_isbase = false;
            return TextTranslator__TranslatorWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = texttranslator__translatorwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (texttranslator__translatorwidget_sender_isbase) {
            texttranslator__translatorwidget_sender_isbase = false;
            return TextTranslator__TranslatorWidget::sender();
        }
        auto sender_cb = texttranslator__translatorwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (texttranslator__translatorwidget_sendersignalindex_isbase) {
            texttranslator__translatorwidget_sendersignalindex_isbase = false;
            return TextTranslator__TranslatorWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = texttranslator__translatorwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (texttranslator__translatorwidget_receivers_isbase) {
            texttranslator__translatorwidget_receivers_isbase = false;
            return TextTranslator__TranslatorWidget::receivers(signal);
        }
        auto receivers_cb = texttranslator__translatorwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (texttranslator__translatorwidget_issignalconnected_isbase) {
            texttranslator__translatorwidget_issignalconnected_isbase = false;
            return TextTranslator__TranslatorWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = texttranslator__translatorwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (texttranslator__translatorwidget_getdecodedmetricf_isbase) {
            texttranslator__translatorwidget_getdecodedmetricf_isbase = false;
            return TextTranslator__TranslatorWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = texttranslator__translatorwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);
            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextTranslator__TranslatorWidget_Event(TextTranslator::TranslatorWidget* self, QEvent* e);
    friend bool TextTranslator__TranslatorWidget_SuperEvent(TextTranslator::TranslatorWidget* self, QEvent* e);
    friend void TextTranslator__TranslatorWidget_MousePressEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMousePressEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_MouseReleaseEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMouseReleaseEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_MouseDoubleClickEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMouseDoubleClickEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_MouseMoveEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMouseMoveEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_WheelEvent(TextTranslator::TranslatorWidget* self, QWheelEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperWheelEvent(TextTranslator::TranslatorWidget* self, QWheelEvent* event);
    friend void TextTranslator__TranslatorWidget_KeyPressEvent(TextTranslator::TranslatorWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperKeyPressEvent(TextTranslator::TranslatorWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorWidget_KeyReleaseEvent(TextTranslator::TranslatorWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperKeyReleaseEvent(TextTranslator::TranslatorWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorWidget_FocusInEvent(TextTranslator::TranslatorWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperFocusInEvent(TextTranslator::TranslatorWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorWidget_FocusOutEvent(TextTranslator::TranslatorWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperFocusOutEvent(TextTranslator::TranslatorWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorWidget_EnterEvent(TextTranslator::TranslatorWidget* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperEnterEvent(TextTranslator::TranslatorWidget* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorWidget_LeaveEvent(TextTranslator::TranslatorWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperLeaveEvent(TextTranslator::TranslatorWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorWidget_PaintEvent(TextTranslator::TranslatorWidget* self, QPaintEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperPaintEvent(TextTranslator::TranslatorWidget* self, QPaintEvent* event);
    friend void TextTranslator__TranslatorWidget_MoveEvent(TextTranslator::TranslatorWidget* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMoveEvent(TextTranslator::TranslatorWidget* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorWidget_ResizeEvent(TextTranslator::TranslatorWidget* self, QResizeEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperResizeEvent(TextTranslator::TranslatorWidget* self, QResizeEvent* event);
    friend void TextTranslator__TranslatorWidget_CloseEvent(TextTranslator::TranslatorWidget* self, QCloseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperCloseEvent(TextTranslator::TranslatorWidget* self, QCloseEvent* event);
    friend void TextTranslator__TranslatorWidget_ContextMenuEvent(TextTranslator::TranslatorWidget* self, QContextMenuEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperContextMenuEvent(TextTranslator::TranslatorWidget* self, QContextMenuEvent* event);
    friend void TextTranslator__TranslatorWidget_TabletEvent(TextTranslator::TranslatorWidget* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperTabletEvent(TextTranslator::TranslatorWidget* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorWidget_ActionEvent(TextTranslator::TranslatorWidget* self, QActionEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperActionEvent(TextTranslator::TranslatorWidget* self, QActionEvent* event);
    friend void TextTranslator__TranslatorWidget_DragEnterEvent(TextTranslator::TranslatorWidget* self, QDragEnterEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperDragEnterEvent(TextTranslator::TranslatorWidget* self, QDragEnterEvent* event);
    friend void TextTranslator__TranslatorWidget_DragMoveEvent(TextTranslator::TranslatorWidget* self, QDragMoveEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperDragMoveEvent(TextTranslator::TranslatorWidget* self, QDragMoveEvent* event);
    friend void TextTranslator__TranslatorWidget_DragLeaveEvent(TextTranslator::TranslatorWidget* self, QDragLeaveEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperDragLeaveEvent(TextTranslator::TranslatorWidget* self, QDragLeaveEvent* event);
    friend void TextTranslator__TranslatorWidget_DropEvent(TextTranslator::TranslatorWidget* self, QDropEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperDropEvent(TextTranslator::TranslatorWidget* self, QDropEvent* event);
    friend void TextTranslator__TranslatorWidget_ShowEvent(TextTranslator::TranslatorWidget* self, QShowEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperShowEvent(TextTranslator::TranslatorWidget* self, QShowEvent* event);
    friend void TextTranslator__TranslatorWidget_HideEvent(TextTranslator::TranslatorWidget* self, QHideEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperHideEvent(TextTranslator::TranslatorWidget* self, QHideEvent* event);
    friend bool TextTranslator__TranslatorWidget_NativeEvent(TextTranslator::TranslatorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextTranslator__TranslatorWidget_SuperNativeEvent(TextTranslator::TranslatorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextTranslator__TranslatorWidget_ChangeEvent(TextTranslator::TranslatorWidget* self, QEvent* param1);
    friend void TextTranslator__TranslatorWidget_SuperChangeEvent(TextTranslator::TranslatorWidget* self, QEvent* param1);
    friend int TextTranslator__TranslatorWidget_Metric(const TextTranslator::TranslatorWidget* self, int param1);
    friend int TextTranslator__TranslatorWidget_SuperMetric(const TextTranslator::TranslatorWidget* self, int param1);
    friend void TextTranslator__TranslatorWidget_InitPainter(const TextTranslator::TranslatorWidget* self, QPainter* painter);
    friend void TextTranslator__TranslatorWidget_SuperInitPainter(const TextTranslator::TranslatorWidget* self, QPainter* painter);
    friend QPaintDevice* TextTranslator__TranslatorWidget_Redirected(const TextTranslator::TranslatorWidget* self, QPoint* offset);
    friend QPaintDevice* TextTranslator__TranslatorWidget_SuperRedirected(const TextTranslator::TranslatorWidget* self, QPoint* offset);
    friend QPainter* TextTranslator__TranslatorWidget_SharedPainter(const TextTranslator::TranslatorWidget* self);
    friend QPainter* TextTranslator__TranslatorWidget_SuperSharedPainter(const TextTranslator::TranslatorWidget* self);
    friend void TextTranslator__TranslatorWidget_InputMethodEvent(TextTranslator::TranslatorWidget* self, QInputMethodEvent* param1);
    friend void TextTranslator__TranslatorWidget_SuperInputMethodEvent(TextTranslator::TranslatorWidget* self, QInputMethodEvent* param1);
    friend bool TextTranslator__TranslatorWidget_FocusNextPrevChild(TextTranslator::TranslatorWidget* self, bool next);
    friend bool TextTranslator__TranslatorWidget_SuperFocusNextPrevChild(TextTranslator::TranslatorWidget* self, bool next);
    friend void TextTranslator__TranslatorWidget_TimerEvent(TextTranslator::TranslatorWidget* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperTimerEvent(TextTranslator::TranslatorWidget* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorWidget_ChildEvent(TextTranslator::TranslatorWidget* self, QChildEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperChildEvent(TextTranslator::TranslatorWidget* self, QChildEvent* event);
    friend void TextTranslator__TranslatorWidget_CustomEvent(TextTranslator::TranslatorWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperCustomEvent(TextTranslator::TranslatorWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorWidget_ConnectNotify(TextTranslator::TranslatorWidget* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorWidget_SuperConnectNotify(TextTranslator::TranslatorWidget* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorWidget_DisconnectNotify(TextTranslator::TranslatorWidget* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorWidget_SuperDisconnectNotify(TextTranslator::TranslatorWidget* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorWidget_UpdateMicroFocus(TextTranslator::TranslatorWidget* self);
    friend void TextTranslator__TranslatorWidget_SuperUpdateMicroFocus(TextTranslator::TranslatorWidget* self);
    friend void TextTranslator__TranslatorWidget_Create(TextTranslator::TranslatorWidget* self);
    friend void TextTranslator__TranslatorWidget_SuperCreate(TextTranslator::TranslatorWidget* self);
    friend void TextTranslator__TranslatorWidget_Destroy(TextTranslator::TranslatorWidget* self);
    friend void TextTranslator__TranslatorWidget_SuperDestroy(TextTranslator::TranslatorWidget* self);
    friend bool TextTranslator__TranslatorWidget_FocusNextChild(TextTranslator::TranslatorWidget* self);
    friend bool TextTranslator__TranslatorWidget_SuperFocusNextChild(TextTranslator::TranslatorWidget* self);
    friend bool TextTranslator__TranslatorWidget_FocusPreviousChild(TextTranslator::TranslatorWidget* self);
    friend bool TextTranslator__TranslatorWidget_SuperFocusPreviousChild(TextTranslator::TranslatorWidget* self);
    friend QObject* TextTranslator__TranslatorWidget_Sender(const TextTranslator::TranslatorWidget* self);
    friend QObject* TextTranslator__TranslatorWidget_SuperSender(const TextTranslator::TranslatorWidget* self);
    friend int TextTranslator__TranslatorWidget_SenderSignalIndex(const TextTranslator::TranslatorWidget* self);
    friend int TextTranslator__TranslatorWidget_SuperSenderSignalIndex(const TextTranslator::TranslatorWidget* self);
    friend int TextTranslator__TranslatorWidget_Receivers(const TextTranslator::TranslatorWidget* self, const char* signal);
    friend int TextTranslator__TranslatorWidget_SuperReceivers(const TextTranslator::TranslatorWidget* self, const char* signal);
    friend bool TextTranslator__TranslatorWidget_IsSignalConnected(const TextTranslator::TranslatorWidget* self, const QMetaMethod* signal);
    friend bool TextTranslator__TranslatorWidget_SuperIsSignalConnected(const TextTranslator::TranslatorWidget* self, const QMetaMethod* signal);
    friend double TextTranslator__TranslatorWidget_GetDecodedMetricF(const TextTranslator::TranslatorWidget* self, int metricA, int metricB);
    friend double TextTranslator__TranslatorWidget_SuperGetDecodedMetricF(const TextTranslator::TranslatorWidget* self, int metricA, int metricB);
};

#endif
