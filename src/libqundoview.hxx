#pragma once
#ifndef SRCC_LIBVIRTUALQUNDOVIEW_H
#define SRCC_LIBVIRTUALQUNDOVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QUndoView so that we can call protected methods
class VirtualQUndoView final : public QUndoView {

  public:
    // Virtual class boolean flag
    bool isVirtualQUndoView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QUndoView_MetaObject_Callback = QMetaObject* (*)();
    using QUndoView_Metacast_Callback = void* (*)(QUndoView*, const char*);
    using QUndoView_Metacall_Callback = int (*)(QUndoView*, int, int, void**);
    using QUndoView_VisualRect_Callback = QRect* (*)(const QUndoView*, QModelIndex*);
    using QUndoView_ScrollTo_Callback = void (*)(QUndoView*, QModelIndex*, int);
    using QUndoView_IndexAt_Callback = QModelIndex* (*)(const QUndoView*, QPoint*);
    using QUndoView_DoItemsLayout_Callback = void (*)();
    using QUndoView_Reset_Callback = void (*)();
    using QUndoView_SetRootIndex_Callback = void (*)(QUndoView*, QModelIndex*);
    using QUndoView_Event_Callback = bool (*)(QUndoView*, QEvent*);
    using QUndoView_ScrollContentsBy_Callback = void (*)(QUndoView*, int, int);
    using QUndoView_DataChanged_Callback = void (*)(QUndoView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QUndoView_RowsInserted_Callback = void (*)(QUndoView*, QModelIndex*, int, int);
    using QUndoView_RowsAboutToBeRemoved_Callback = void (*)(QUndoView*, QModelIndex*, int, int);
    using QUndoView_MouseMoveEvent_Callback = void (*)(QUndoView*, QMouseEvent*);
    using QUndoView_MouseReleaseEvent_Callback = void (*)(QUndoView*, QMouseEvent*);
    using QUndoView_WheelEvent_Callback = void (*)(QUndoView*, QWheelEvent*);
    using QUndoView_TimerEvent_Callback = void (*)(QUndoView*, QTimerEvent*);
    using QUndoView_ResizeEvent_Callback = void (*)(QUndoView*, QResizeEvent*);
    using QUndoView_DragMoveEvent_Callback = void (*)(QUndoView*, QDragMoveEvent*);
    using QUndoView_DragLeaveEvent_Callback = void (*)(QUndoView*, QDragLeaveEvent*);
    using QUndoView_DropEvent_Callback = void (*)(QUndoView*, QDropEvent*);
    using QUndoView_StartDrag_Callback = void (*)(QUndoView*, int);
    using QUndoView_InitViewItemOption_Callback = void (*)(const QUndoView*, QStyleOptionViewItem*);
    using QUndoView_PaintEvent_Callback = void (*)(QUndoView*, QPaintEvent*);
    using QUndoView_HorizontalOffset_Callback = int (*)();
    using QUndoView_VerticalOffset_Callback = int (*)();
    using QUndoView_MoveCursor_Callback = QModelIndex* (*)(QUndoView*, int, int);
    using QUndoView_SetSelection_Callback = void (*)(QUndoView*, QRect*, int);
    using QUndoView_VisualRegionForSelection_Callback = QRegion* (*)(const QUndoView*, QItemSelection*);
    using QUndoView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QUndoView_UpdateGeometries_Callback = void (*)();
    using QUndoView_IsIndexHidden_Callback = bool (*)(const QUndoView*, QModelIndex*);
    using QUndoView_SelectionChanged_Callback = void (*)(QUndoView*, QItemSelection*, QItemSelection*);
    using QUndoView_CurrentChanged_Callback = void (*)(QUndoView*, QModelIndex*, QModelIndex*);
    using QUndoView_ViewportSizeHint_Callback = QSize* (*)();
    using QUndoView_SetModel_Callback = void (*)(QUndoView*, QAbstractItemModel*);
    using QUndoView_SetSelectionModel_Callback = void (*)(QUndoView*, QItemSelectionModel*);
    using QUndoView_KeyboardSearch_Callback = void (*)(QUndoView*, const char*);
    using QUndoView_SizeHintForRow_Callback = int (*)(const QUndoView*, int);
    using QUndoView_SizeHintForColumn_Callback = int (*)(const QUndoView*, int);
    using QUndoView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QUndoView*, QModelIndex*);
    using QUndoView_InputMethodQuery_Callback = QVariant* (*)(const QUndoView*, int);
    using QUndoView_SelectAll_Callback = void (*)();
    using QUndoView_UpdateEditorData_Callback = void (*)();
    using QUndoView_UpdateEditorGeometries_Callback = void (*)();
    using QUndoView_VerticalScrollbarAction_Callback = void (*)(QUndoView*, int);
    using QUndoView_HorizontalScrollbarAction_Callback = void (*)(QUndoView*, int);
    using QUndoView_VerticalScrollbarValueChanged_Callback = void (*)(QUndoView*, int);
    using QUndoView_HorizontalScrollbarValueChanged_Callback = void (*)(QUndoView*, int);
    using QUndoView_CloseEditor_Callback = void (*)(QUndoView*, QWidget*, int);
    using QUndoView_CommitData_Callback = void (*)(QUndoView*, QWidget*);
    using QUndoView_EditorDestroyed_Callback = void (*)(QUndoView*, QObject*);
    using QUndoView_Edit2_Callback = bool (*)(QUndoView*, QModelIndex*, int, QEvent*);
    using QUndoView_SelectionCommand_Callback = int (*)(const QUndoView*, QModelIndex*, QEvent*);
    using QUndoView_FocusNextPrevChild_Callback = bool (*)(QUndoView*, bool);
    using QUndoView_ViewportEvent_Callback = bool (*)(QUndoView*, QEvent*);
    using QUndoView_MousePressEvent_Callback = void (*)(QUndoView*, QMouseEvent*);
    using QUndoView_MouseDoubleClickEvent_Callback = void (*)(QUndoView*, QMouseEvent*);
    using QUndoView_DragEnterEvent_Callback = void (*)(QUndoView*, QDragEnterEvent*);
    using QUndoView_FocusInEvent_Callback = void (*)(QUndoView*, QFocusEvent*);
    using QUndoView_FocusOutEvent_Callback = void (*)(QUndoView*, QFocusEvent*);
    using QUndoView_KeyPressEvent_Callback = void (*)(QUndoView*, QKeyEvent*);
    using QUndoView_InputMethodEvent_Callback = void (*)(QUndoView*, QInputMethodEvent*);
    using QUndoView_EventFilter_Callback = bool (*)(QUndoView*, QObject*, QEvent*);
    using QUndoView_MinimumSizeHint_Callback = QSize* (*)();
    using QUndoView_SizeHint_Callback = QSize* (*)();
    using QUndoView_SetupViewport_Callback = void (*)(QUndoView*, QWidget*);
    using QUndoView_ContextMenuEvent_Callback = void (*)(QUndoView*, QContextMenuEvent*);
    using QUndoView_ChangeEvent_Callback = void (*)(QUndoView*, QEvent*);
    using QUndoView_InitStyleOption_Callback = void (*)(const QUndoView*, QStyleOptionFrame*);
    using QUndoView_DevType_Callback = int (*)();
    using QUndoView_SetVisible_Callback = void (*)(QUndoView*, bool);
    using QUndoView_HeightForWidth_Callback = int (*)(const QUndoView*, int);
    using QUndoView_HasHeightForWidth_Callback = bool (*)();
    using QUndoView_PaintEngine_Callback = QPaintEngine* (*)();
    using QUndoView_KeyReleaseEvent_Callback = void (*)(QUndoView*, QKeyEvent*);
    using QUndoView_EnterEvent_Callback = void (*)(QUndoView*, QEnterEvent*);
    using QUndoView_LeaveEvent_Callback = void (*)(QUndoView*, QEvent*);
    using QUndoView_MoveEvent_Callback = void (*)(QUndoView*, QMoveEvent*);
    using QUndoView_CloseEvent_Callback = void (*)(QUndoView*, QCloseEvent*);
    using QUndoView_TabletEvent_Callback = void (*)(QUndoView*, QTabletEvent*);
    using QUndoView_ActionEvent_Callback = void (*)(QUndoView*, QActionEvent*);
    using QUndoView_ShowEvent_Callback = void (*)(QUndoView*, QShowEvent*);
    using QUndoView_HideEvent_Callback = void (*)(QUndoView*, QHideEvent*);
    using QUndoView_NativeEvent_Callback = bool (*)(QUndoView*, libqt_string, void*, intptr_t*);
    using QUndoView_Metric_Callback = int (*)(const QUndoView*, int);
    using QUndoView_InitPainter_Callback = void (*)(const QUndoView*, QPainter*);
    using QUndoView_Redirected_Callback = QPaintDevice* (*)(const QUndoView*, QPoint*);
    using QUndoView_SharedPainter_Callback = QPainter* (*)();
    using QUndoView_ChildEvent_Callback = void (*)(QUndoView*, QChildEvent*);
    using QUndoView_CustomEvent_Callback = void (*)(QUndoView*, QEvent*);
    using QUndoView_ConnectNotify_Callback = void (*)(QUndoView*, QMetaMethod*);
    using QUndoView_DisconnectNotify_Callback = void (*)(QUndoView*, QMetaMethod*);
    using QUndoView_ResizeContents_Callback = void (*)(QUndoView*, int, int);
    using QUndoView_ContentsSize_Callback = QSize* (*)();
    using QUndoView_RectForIndex_Callback = QRect* (*)(const QUndoView*, QModelIndex*);
    using QUndoView_SetPositionForIndex_Callback = void (*)(QUndoView*, QPoint*, QModelIndex*);
    using QUndoView_State_Callback = int (*)();
    using QUndoView_SetState_Callback = void (*)(QUndoView*, int);
    using QUndoView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QUndoView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QUndoView_SetDirtyRegion_Callback = void (*)(QUndoView*, QRegion*);
    using QUndoView_ScrollDirtyRegion_Callback = void (*)(QUndoView*, int, int);
    using QUndoView_DirtyRegionOffset_Callback = QPoint* (*)();
    using QUndoView_StartAutoScroll_Callback = void (*)();
    using QUndoView_StopAutoScroll_Callback = void (*)();
    using QUndoView_DoAutoScroll_Callback = void (*)();
    using QUndoView_DropIndicatorPosition_Callback = int (*)();
    using QUndoView_SetViewportMargins_Callback = void (*)(QUndoView*, int, int, int, int);
    using QUndoView_ViewportMargins_Callback = QMargins* (*)();
    using QUndoView_DrawFrame_Callback = void (*)(QUndoView*, QPainter*);
    using QUndoView_UpdateMicroFocus_Callback = void (*)();
    using QUndoView_Create_Callback = void (*)();
    using QUndoView_Destroy_Callback = void (*)();
    using QUndoView_FocusNextChild_Callback = bool (*)();
    using QUndoView_FocusPreviousChild_Callback = bool (*)();
    using QUndoView_Sender_Callback = QObject* (*)();
    using QUndoView_SenderSignalIndex_Callback = int (*)();
    using QUndoView_Receivers_Callback = int (*)(const QUndoView*, const char*);
    using QUndoView_IsSignalConnected_Callback = bool (*)(const QUndoView*, QMetaMethod*);
    using QUndoView_GetDecodedMetricF_Callback = double (*)(const QUndoView*, int, int);

  protected:
    // Instance callback storage
    QUndoView_MetaObject_Callback qundoview_metaobject_callback = nullptr;
    QUndoView_Metacast_Callback qundoview_metacast_callback = nullptr;
    QUndoView_Metacall_Callback qundoview_metacall_callback = nullptr;
    QUndoView_VisualRect_Callback qundoview_visualrect_callback = nullptr;
    QUndoView_ScrollTo_Callback qundoview_scrollto_callback = nullptr;
    QUndoView_IndexAt_Callback qundoview_indexat_callback = nullptr;
    QUndoView_DoItemsLayout_Callback qundoview_doitemslayout_callback = nullptr;
    QUndoView_Reset_Callback qundoview_reset_callback = nullptr;
    QUndoView_SetRootIndex_Callback qundoview_setrootindex_callback = nullptr;
    QUndoView_Event_Callback qundoview_event_callback = nullptr;
    QUndoView_ScrollContentsBy_Callback qundoview_scrollcontentsby_callback = nullptr;
    QUndoView_DataChanged_Callback qundoview_datachanged_callback = nullptr;
    QUndoView_RowsInserted_Callback qundoview_rowsinserted_callback = nullptr;
    QUndoView_RowsAboutToBeRemoved_Callback qundoview_rowsabouttoberemoved_callback = nullptr;
    QUndoView_MouseMoveEvent_Callback qundoview_mousemoveevent_callback = nullptr;
    QUndoView_MouseReleaseEvent_Callback qundoview_mousereleaseevent_callback = nullptr;
    QUndoView_WheelEvent_Callback qundoview_wheelevent_callback = nullptr;
    QUndoView_TimerEvent_Callback qundoview_timerevent_callback = nullptr;
    QUndoView_ResizeEvent_Callback qundoview_resizeevent_callback = nullptr;
    QUndoView_DragMoveEvent_Callback qundoview_dragmoveevent_callback = nullptr;
    QUndoView_DragLeaveEvent_Callback qundoview_dragleaveevent_callback = nullptr;
    QUndoView_DropEvent_Callback qundoview_dropevent_callback = nullptr;
    QUndoView_StartDrag_Callback qundoview_startdrag_callback = nullptr;
    QUndoView_InitViewItemOption_Callback qundoview_initviewitemoption_callback = nullptr;
    QUndoView_PaintEvent_Callback qundoview_paintevent_callback = nullptr;
    QUndoView_HorizontalOffset_Callback qundoview_horizontaloffset_callback = nullptr;
    QUndoView_VerticalOffset_Callback qundoview_verticaloffset_callback = nullptr;
    QUndoView_MoveCursor_Callback qundoview_movecursor_callback = nullptr;
    QUndoView_SetSelection_Callback qundoview_setselection_callback = nullptr;
    QUndoView_VisualRegionForSelection_Callback qundoview_visualregionforselection_callback = nullptr;
    QUndoView_SelectedIndexes_Callback qundoview_selectedindexes_callback = nullptr;
    QUndoView_UpdateGeometries_Callback qundoview_updategeometries_callback = nullptr;
    QUndoView_IsIndexHidden_Callback qundoview_isindexhidden_callback = nullptr;
    QUndoView_SelectionChanged_Callback qundoview_selectionchanged_callback = nullptr;
    QUndoView_CurrentChanged_Callback qundoview_currentchanged_callback = nullptr;
    QUndoView_ViewportSizeHint_Callback qundoview_viewportsizehint_callback = nullptr;
    QUndoView_SetModel_Callback qundoview_setmodel_callback = nullptr;
    QUndoView_SetSelectionModel_Callback qundoview_setselectionmodel_callback = nullptr;
    QUndoView_KeyboardSearch_Callback qundoview_keyboardsearch_callback = nullptr;
    QUndoView_SizeHintForRow_Callback qundoview_sizehintforrow_callback = nullptr;
    QUndoView_SizeHintForColumn_Callback qundoview_sizehintforcolumn_callback = nullptr;
    QUndoView_ItemDelegateForIndex_Callback qundoview_itemdelegateforindex_callback = nullptr;
    QUndoView_InputMethodQuery_Callback qundoview_inputmethodquery_callback = nullptr;
    QUndoView_SelectAll_Callback qundoview_selectall_callback = nullptr;
    QUndoView_UpdateEditorData_Callback qundoview_updateeditordata_callback = nullptr;
    QUndoView_UpdateEditorGeometries_Callback qundoview_updateeditorgeometries_callback = nullptr;
    QUndoView_VerticalScrollbarAction_Callback qundoview_verticalscrollbaraction_callback = nullptr;
    QUndoView_HorizontalScrollbarAction_Callback qundoview_horizontalscrollbaraction_callback = nullptr;
    QUndoView_VerticalScrollbarValueChanged_Callback qundoview_verticalscrollbarvaluechanged_callback = nullptr;
    QUndoView_HorizontalScrollbarValueChanged_Callback qundoview_horizontalscrollbarvaluechanged_callback = nullptr;
    QUndoView_CloseEditor_Callback qundoview_closeeditor_callback = nullptr;
    QUndoView_CommitData_Callback qundoview_commitdata_callback = nullptr;
    QUndoView_EditorDestroyed_Callback qundoview_editordestroyed_callback = nullptr;
    QUndoView_Edit2_Callback qundoview_edit2_callback = nullptr;
    QUndoView_SelectionCommand_Callback qundoview_selectioncommand_callback = nullptr;
    QUndoView_FocusNextPrevChild_Callback qundoview_focusnextprevchild_callback = nullptr;
    QUndoView_ViewportEvent_Callback qundoview_viewportevent_callback = nullptr;
    QUndoView_MousePressEvent_Callback qundoview_mousepressevent_callback = nullptr;
    QUndoView_MouseDoubleClickEvent_Callback qundoview_mousedoubleclickevent_callback = nullptr;
    QUndoView_DragEnterEvent_Callback qundoview_dragenterevent_callback = nullptr;
    QUndoView_FocusInEvent_Callback qundoview_focusinevent_callback = nullptr;
    QUndoView_FocusOutEvent_Callback qundoview_focusoutevent_callback = nullptr;
    QUndoView_KeyPressEvent_Callback qundoview_keypressevent_callback = nullptr;
    QUndoView_InputMethodEvent_Callback qundoview_inputmethodevent_callback = nullptr;
    QUndoView_EventFilter_Callback qundoview_eventfilter_callback = nullptr;
    QUndoView_MinimumSizeHint_Callback qundoview_minimumsizehint_callback = nullptr;
    QUndoView_SizeHint_Callback qundoview_sizehint_callback = nullptr;
    QUndoView_SetupViewport_Callback qundoview_setupviewport_callback = nullptr;
    QUndoView_ContextMenuEvent_Callback qundoview_contextmenuevent_callback = nullptr;
    QUndoView_ChangeEvent_Callback qundoview_changeevent_callback = nullptr;
    QUndoView_InitStyleOption_Callback qundoview_initstyleoption_callback = nullptr;
    QUndoView_DevType_Callback qundoview_devtype_callback = nullptr;
    QUndoView_SetVisible_Callback qundoview_setvisible_callback = nullptr;
    QUndoView_HeightForWidth_Callback qundoview_heightforwidth_callback = nullptr;
    QUndoView_HasHeightForWidth_Callback qundoview_hasheightforwidth_callback = nullptr;
    QUndoView_PaintEngine_Callback qundoview_paintengine_callback = nullptr;
    QUndoView_KeyReleaseEvent_Callback qundoview_keyreleaseevent_callback = nullptr;
    QUndoView_EnterEvent_Callback qundoview_enterevent_callback = nullptr;
    QUndoView_LeaveEvent_Callback qundoview_leaveevent_callback = nullptr;
    QUndoView_MoveEvent_Callback qundoview_moveevent_callback = nullptr;
    QUndoView_CloseEvent_Callback qundoview_closeevent_callback = nullptr;
    QUndoView_TabletEvent_Callback qundoview_tabletevent_callback = nullptr;
    QUndoView_ActionEvent_Callback qundoview_actionevent_callback = nullptr;
    QUndoView_ShowEvent_Callback qundoview_showevent_callback = nullptr;
    QUndoView_HideEvent_Callback qundoview_hideevent_callback = nullptr;
    QUndoView_NativeEvent_Callback qundoview_nativeevent_callback = nullptr;
    QUndoView_Metric_Callback qundoview_metric_callback = nullptr;
    QUndoView_InitPainter_Callback qundoview_initpainter_callback = nullptr;
    QUndoView_Redirected_Callback qundoview_redirected_callback = nullptr;
    QUndoView_SharedPainter_Callback qundoview_sharedpainter_callback = nullptr;
    QUndoView_ChildEvent_Callback qundoview_childevent_callback = nullptr;
    QUndoView_CustomEvent_Callback qundoview_customevent_callback = nullptr;
    QUndoView_ConnectNotify_Callback qundoview_connectnotify_callback = nullptr;
    QUndoView_DisconnectNotify_Callback qundoview_disconnectnotify_callback = nullptr;
    QUndoView_ResizeContents_Callback qundoview_resizecontents_callback = nullptr;
    QUndoView_ContentsSize_Callback qundoview_contentssize_callback = nullptr;
    QUndoView_RectForIndex_Callback qundoview_rectforindex_callback = nullptr;
    QUndoView_SetPositionForIndex_Callback qundoview_setpositionforindex_callback = nullptr;
    QUndoView_State_Callback qundoview_state_callback = nullptr;
    QUndoView_SetState_Callback qundoview_setstate_callback = nullptr;
    QUndoView_ScheduleDelayedItemsLayout_Callback qundoview_scheduledelayeditemslayout_callback = nullptr;
    QUndoView_ExecuteDelayedItemsLayout_Callback qundoview_executedelayeditemslayout_callback = nullptr;
    QUndoView_SetDirtyRegion_Callback qundoview_setdirtyregion_callback = nullptr;
    QUndoView_ScrollDirtyRegion_Callback qundoview_scrolldirtyregion_callback = nullptr;
    QUndoView_DirtyRegionOffset_Callback qundoview_dirtyregionoffset_callback = nullptr;
    QUndoView_StartAutoScroll_Callback qundoview_startautoscroll_callback = nullptr;
    QUndoView_StopAutoScroll_Callback qundoview_stopautoscroll_callback = nullptr;
    QUndoView_DoAutoScroll_Callback qundoview_doautoscroll_callback = nullptr;
    QUndoView_DropIndicatorPosition_Callback qundoview_dropindicatorposition_callback = nullptr;
    QUndoView_SetViewportMargins_Callback qundoview_setviewportmargins_callback = nullptr;
    QUndoView_ViewportMargins_Callback qundoview_viewportmargins_callback = nullptr;
    QUndoView_DrawFrame_Callback qundoview_drawframe_callback = nullptr;
    QUndoView_UpdateMicroFocus_Callback qundoview_updatemicrofocus_callback = nullptr;
    QUndoView_Create_Callback qundoview_create_callback = nullptr;
    QUndoView_Destroy_Callback qundoview_destroy_callback = nullptr;
    QUndoView_FocusNextChild_Callback qundoview_focusnextchild_callback = nullptr;
    QUndoView_FocusPreviousChild_Callback qundoview_focuspreviouschild_callback = nullptr;
    QUndoView_Sender_Callback qundoview_sender_callback = nullptr;
    QUndoView_SenderSignalIndex_Callback qundoview_sendersignalindex_callback = nullptr;
    QUndoView_Receivers_Callback qundoview_receivers_callback = nullptr;
    QUndoView_IsSignalConnected_Callback qundoview_issignalconnected_callback = nullptr;
    QUndoView_GetDecodedMetricF_Callback qundoview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qundoview_metaobject_isbase = false;
    mutable bool qundoview_metacast_isbase = false;
    mutable bool qundoview_metacall_isbase = false;
    mutable bool qundoview_visualrect_isbase = false;
    mutable bool qundoview_scrollto_isbase = false;
    mutable bool qundoview_indexat_isbase = false;
    mutable bool qundoview_doitemslayout_isbase = false;
    mutable bool qundoview_reset_isbase = false;
    mutable bool qundoview_setrootindex_isbase = false;
    mutable bool qundoview_event_isbase = false;
    mutable bool qundoview_scrollcontentsby_isbase = false;
    mutable bool qundoview_datachanged_isbase = false;
    mutable bool qundoview_rowsinserted_isbase = false;
    mutable bool qundoview_rowsabouttoberemoved_isbase = false;
    mutable bool qundoview_mousemoveevent_isbase = false;
    mutable bool qundoview_mousereleaseevent_isbase = false;
    mutable bool qundoview_wheelevent_isbase = false;
    mutable bool qundoview_timerevent_isbase = false;
    mutable bool qundoview_resizeevent_isbase = false;
    mutable bool qundoview_dragmoveevent_isbase = false;
    mutable bool qundoview_dragleaveevent_isbase = false;
    mutable bool qundoview_dropevent_isbase = false;
    mutable bool qundoview_startdrag_isbase = false;
    mutable bool qundoview_initviewitemoption_isbase = false;
    mutable bool qundoview_paintevent_isbase = false;
    mutable bool qundoview_horizontaloffset_isbase = false;
    mutable bool qundoview_verticaloffset_isbase = false;
    mutable bool qundoview_movecursor_isbase = false;
    mutable bool qundoview_setselection_isbase = false;
    mutable bool qundoview_visualregionforselection_isbase = false;
    mutable bool qundoview_selectedindexes_isbase = false;
    mutable bool qundoview_updategeometries_isbase = false;
    mutable bool qundoview_isindexhidden_isbase = false;
    mutable bool qundoview_selectionchanged_isbase = false;
    mutable bool qundoview_currentchanged_isbase = false;
    mutable bool qundoview_viewportsizehint_isbase = false;
    mutable bool qundoview_setmodel_isbase = false;
    mutable bool qundoview_setselectionmodel_isbase = false;
    mutable bool qundoview_keyboardsearch_isbase = false;
    mutable bool qundoview_sizehintforrow_isbase = false;
    mutable bool qundoview_sizehintforcolumn_isbase = false;
    mutable bool qundoview_itemdelegateforindex_isbase = false;
    mutable bool qundoview_inputmethodquery_isbase = false;
    mutable bool qundoview_selectall_isbase = false;
    mutable bool qundoview_updateeditordata_isbase = false;
    mutable bool qundoview_updateeditorgeometries_isbase = false;
    mutable bool qundoview_verticalscrollbaraction_isbase = false;
    mutable bool qundoview_horizontalscrollbaraction_isbase = false;
    mutable bool qundoview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qundoview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qundoview_closeeditor_isbase = false;
    mutable bool qundoview_commitdata_isbase = false;
    mutable bool qundoview_editordestroyed_isbase = false;
    mutable bool qundoview_edit2_isbase = false;
    mutable bool qundoview_selectioncommand_isbase = false;
    mutable bool qundoview_focusnextprevchild_isbase = false;
    mutable bool qundoview_viewportevent_isbase = false;
    mutable bool qundoview_mousepressevent_isbase = false;
    mutable bool qundoview_mousedoubleclickevent_isbase = false;
    mutable bool qundoview_dragenterevent_isbase = false;
    mutable bool qundoview_focusinevent_isbase = false;
    mutable bool qundoview_focusoutevent_isbase = false;
    mutable bool qundoview_keypressevent_isbase = false;
    mutable bool qundoview_inputmethodevent_isbase = false;
    mutable bool qundoview_eventfilter_isbase = false;
    mutable bool qundoview_minimumsizehint_isbase = false;
    mutable bool qundoview_sizehint_isbase = false;
    mutable bool qundoview_setupviewport_isbase = false;
    mutable bool qundoview_contextmenuevent_isbase = false;
    mutable bool qundoview_changeevent_isbase = false;
    mutable bool qundoview_initstyleoption_isbase = false;
    mutable bool qundoview_devtype_isbase = false;
    mutable bool qundoview_setvisible_isbase = false;
    mutable bool qundoview_heightforwidth_isbase = false;
    mutable bool qundoview_hasheightforwidth_isbase = false;
    mutable bool qundoview_paintengine_isbase = false;
    mutable bool qundoview_keyreleaseevent_isbase = false;
    mutable bool qundoview_enterevent_isbase = false;
    mutable bool qundoview_leaveevent_isbase = false;
    mutable bool qundoview_moveevent_isbase = false;
    mutable bool qundoview_closeevent_isbase = false;
    mutable bool qundoview_tabletevent_isbase = false;
    mutable bool qundoview_actionevent_isbase = false;
    mutable bool qundoview_showevent_isbase = false;
    mutable bool qundoview_hideevent_isbase = false;
    mutable bool qundoview_nativeevent_isbase = false;
    mutable bool qundoview_metric_isbase = false;
    mutable bool qundoview_initpainter_isbase = false;
    mutable bool qundoview_redirected_isbase = false;
    mutable bool qundoview_sharedpainter_isbase = false;
    mutable bool qundoview_childevent_isbase = false;
    mutable bool qundoview_customevent_isbase = false;
    mutable bool qundoview_connectnotify_isbase = false;
    mutable bool qundoview_disconnectnotify_isbase = false;
    mutable bool qundoview_resizecontents_isbase = false;
    mutable bool qundoview_contentssize_isbase = false;
    mutable bool qundoview_rectforindex_isbase = false;
    mutable bool qundoview_setpositionforindex_isbase = false;
    mutable bool qundoview_state_isbase = false;
    mutable bool qundoview_setstate_isbase = false;
    mutable bool qundoview_scheduledelayeditemslayout_isbase = false;
    mutable bool qundoview_executedelayeditemslayout_isbase = false;
    mutable bool qundoview_setdirtyregion_isbase = false;
    mutable bool qundoview_scrolldirtyregion_isbase = false;
    mutable bool qundoview_dirtyregionoffset_isbase = false;
    mutable bool qundoview_startautoscroll_isbase = false;
    mutable bool qundoview_stopautoscroll_isbase = false;
    mutable bool qundoview_doautoscroll_isbase = false;
    mutable bool qundoview_dropindicatorposition_isbase = false;
    mutable bool qundoview_setviewportmargins_isbase = false;
    mutable bool qundoview_viewportmargins_isbase = false;
    mutable bool qundoview_drawframe_isbase = false;
    mutable bool qundoview_updatemicrofocus_isbase = false;
    mutable bool qundoview_create_isbase = false;
    mutable bool qundoview_destroy_isbase = false;
    mutable bool qundoview_focusnextchild_isbase = false;
    mutable bool qundoview_focuspreviouschild_isbase = false;
    mutable bool qundoview_sender_isbase = false;
    mutable bool qundoview_sendersignalindex_isbase = false;
    mutable bool qundoview_receivers_isbase = false;
    mutable bool qundoview_issignalconnected_isbase = false;
    mutable bool qundoview_getdecodedmetricf_isbase = false;

  public:
    VirtualQUndoView(QWidget* parent) : QUndoView(parent) {};
    VirtualQUndoView() : QUndoView() {};
    VirtualQUndoView(QUndoStack* stack) : QUndoView(stack) {};
    VirtualQUndoView(QUndoGroup* group) : QUndoView(group) {};
    VirtualQUndoView(QUndoStack* stack, QWidget* parent) : QUndoView(stack, parent) {};
    VirtualQUndoView(QUndoGroup* group, QWidget* parent) : QUndoView(group, parent) {};

    // Callback setters
    inline void setQUndoView_MetaObject_Callback(QUndoView_MetaObject_Callback cb) { qundoview_metaobject_callback = cb; }
    inline void setQUndoView_Metacast_Callback(QUndoView_Metacast_Callback cb) { qundoview_metacast_callback = cb; }
    inline void setQUndoView_Metacall_Callback(QUndoView_Metacall_Callback cb) { qundoview_metacall_callback = cb; }
    inline void setQUndoView_VisualRect_Callback(QUndoView_VisualRect_Callback cb) { qundoview_visualrect_callback = cb; }
    inline void setQUndoView_ScrollTo_Callback(QUndoView_ScrollTo_Callback cb) { qundoview_scrollto_callback = cb; }
    inline void setQUndoView_IndexAt_Callback(QUndoView_IndexAt_Callback cb) { qundoview_indexat_callback = cb; }
    inline void setQUndoView_DoItemsLayout_Callback(QUndoView_DoItemsLayout_Callback cb) { qundoview_doitemslayout_callback = cb; }
    inline void setQUndoView_Reset_Callback(QUndoView_Reset_Callback cb) { qundoview_reset_callback = cb; }
    inline void setQUndoView_SetRootIndex_Callback(QUndoView_SetRootIndex_Callback cb) { qundoview_setrootindex_callback = cb; }
    inline void setQUndoView_Event_Callback(QUndoView_Event_Callback cb) { qundoview_event_callback = cb; }
    inline void setQUndoView_ScrollContentsBy_Callback(QUndoView_ScrollContentsBy_Callback cb) { qundoview_scrollcontentsby_callback = cb; }
    inline void setQUndoView_DataChanged_Callback(QUndoView_DataChanged_Callback cb) { qundoview_datachanged_callback = cb; }
    inline void setQUndoView_RowsInserted_Callback(QUndoView_RowsInserted_Callback cb) { qundoview_rowsinserted_callback = cb; }
    inline void setQUndoView_RowsAboutToBeRemoved_Callback(QUndoView_RowsAboutToBeRemoved_Callback cb) { qundoview_rowsabouttoberemoved_callback = cb; }
    inline void setQUndoView_MouseMoveEvent_Callback(QUndoView_MouseMoveEvent_Callback cb) { qundoview_mousemoveevent_callback = cb; }
    inline void setQUndoView_MouseReleaseEvent_Callback(QUndoView_MouseReleaseEvent_Callback cb) { qundoview_mousereleaseevent_callback = cb; }
    inline void setQUndoView_WheelEvent_Callback(QUndoView_WheelEvent_Callback cb) { qundoview_wheelevent_callback = cb; }
    inline void setQUndoView_TimerEvent_Callback(QUndoView_TimerEvent_Callback cb) { qundoview_timerevent_callback = cb; }
    inline void setQUndoView_ResizeEvent_Callback(QUndoView_ResizeEvent_Callback cb) { qundoview_resizeevent_callback = cb; }
    inline void setQUndoView_DragMoveEvent_Callback(QUndoView_DragMoveEvent_Callback cb) { qundoview_dragmoveevent_callback = cb; }
    inline void setQUndoView_DragLeaveEvent_Callback(QUndoView_DragLeaveEvent_Callback cb) { qundoview_dragleaveevent_callback = cb; }
    inline void setQUndoView_DropEvent_Callback(QUndoView_DropEvent_Callback cb) { qundoview_dropevent_callback = cb; }
    inline void setQUndoView_StartDrag_Callback(QUndoView_StartDrag_Callback cb) { qundoview_startdrag_callback = cb; }
    inline void setQUndoView_InitViewItemOption_Callback(QUndoView_InitViewItemOption_Callback cb) { qundoview_initviewitemoption_callback = cb; }
    inline void setQUndoView_PaintEvent_Callback(QUndoView_PaintEvent_Callback cb) { qundoview_paintevent_callback = cb; }
    inline void setQUndoView_HorizontalOffset_Callback(QUndoView_HorizontalOffset_Callback cb) { qundoview_horizontaloffset_callback = cb; }
    inline void setQUndoView_VerticalOffset_Callback(QUndoView_VerticalOffset_Callback cb) { qundoview_verticaloffset_callback = cb; }
    inline void setQUndoView_MoveCursor_Callback(QUndoView_MoveCursor_Callback cb) { qundoview_movecursor_callback = cb; }
    inline void setQUndoView_SetSelection_Callback(QUndoView_SetSelection_Callback cb) { qundoview_setselection_callback = cb; }
    inline void setQUndoView_VisualRegionForSelection_Callback(QUndoView_VisualRegionForSelection_Callback cb) { qundoview_visualregionforselection_callback = cb; }
    inline void setQUndoView_SelectedIndexes_Callback(QUndoView_SelectedIndexes_Callback cb) { qundoview_selectedindexes_callback = cb; }
    inline void setQUndoView_UpdateGeometries_Callback(QUndoView_UpdateGeometries_Callback cb) { qundoview_updategeometries_callback = cb; }
    inline void setQUndoView_IsIndexHidden_Callback(QUndoView_IsIndexHidden_Callback cb) { qundoview_isindexhidden_callback = cb; }
    inline void setQUndoView_SelectionChanged_Callback(QUndoView_SelectionChanged_Callback cb) { qundoview_selectionchanged_callback = cb; }
    inline void setQUndoView_CurrentChanged_Callback(QUndoView_CurrentChanged_Callback cb) { qundoview_currentchanged_callback = cb; }
    inline void setQUndoView_ViewportSizeHint_Callback(QUndoView_ViewportSizeHint_Callback cb) { qundoview_viewportsizehint_callback = cb; }
    inline void setQUndoView_SetModel_Callback(QUndoView_SetModel_Callback cb) { qundoview_setmodel_callback = cb; }
    inline void setQUndoView_SetSelectionModel_Callback(QUndoView_SetSelectionModel_Callback cb) { qundoview_setselectionmodel_callback = cb; }
    inline void setQUndoView_KeyboardSearch_Callback(QUndoView_KeyboardSearch_Callback cb) { qundoview_keyboardsearch_callback = cb; }
    inline void setQUndoView_SizeHintForRow_Callback(QUndoView_SizeHintForRow_Callback cb) { qundoview_sizehintforrow_callback = cb; }
    inline void setQUndoView_SizeHintForColumn_Callback(QUndoView_SizeHintForColumn_Callback cb) { qundoview_sizehintforcolumn_callback = cb; }
    inline void setQUndoView_ItemDelegateForIndex_Callback(QUndoView_ItemDelegateForIndex_Callback cb) { qundoview_itemdelegateforindex_callback = cb; }
    inline void setQUndoView_InputMethodQuery_Callback(QUndoView_InputMethodQuery_Callback cb) { qundoview_inputmethodquery_callback = cb; }
    inline void setQUndoView_SelectAll_Callback(QUndoView_SelectAll_Callback cb) { qundoview_selectall_callback = cb; }
    inline void setQUndoView_UpdateEditorData_Callback(QUndoView_UpdateEditorData_Callback cb) { qundoview_updateeditordata_callback = cb; }
    inline void setQUndoView_UpdateEditorGeometries_Callback(QUndoView_UpdateEditorGeometries_Callback cb) { qundoview_updateeditorgeometries_callback = cb; }
    inline void setQUndoView_VerticalScrollbarAction_Callback(QUndoView_VerticalScrollbarAction_Callback cb) { qundoview_verticalscrollbaraction_callback = cb; }
    inline void setQUndoView_HorizontalScrollbarAction_Callback(QUndoView_HorizontalScrollbarAction_Callback cb) { qundoview_horizontalscrollbaraction_callback = cb; }
    inline void setQUndoView_VerticalScrollbarValueChanged_Callback(QUndoView_VerticalScrollbarValueChanged_Callback cb) { qundoview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQUndoView_HorizontalScrollbarValueChanged_Callback(QUndoView_HorizontalScrollbarValueChanged_Callback cb) { qundoview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQUndoView_CloseEditor_Callback(QUndoView_CloseEditor_Callback cb) { qundoview_closeeditor_callback = cb; }
    inline void setQUndoView_CommitData_Callback(QUndoView_CommitData_Callback cb) { qundoview_commitdata_callback = cb; }
    inline void setQUndoView_EditorDestroyed_Callback(QUndoView_EditorDestroyed_Callback cb) { qundoview_editordestroyed_callback = cb; }
    inline void setQUndoView_Edit2_Callback(QUndoView_Edit2_Callback cb) { qundoview_edit2_callback = cb; }
    inline void setQUndoView_SelectionCommand_Callback(QUndoView_SelectionCommand_Callback cb) { qundoview_selectioncommand_callback = cb; }
    inline void setQUndoView_FocusNextPrevChild_Callback(QUndoView_FocusNextPrevChild_Callback cb) { qundoview_focusnextprevchild_callback = cb; }
    inline void setQUndoView_ViewportEvent_Callback(QUndoView_ViewportEvent_Callback cb) { qundoview_viewportevent_callback = cb; }
    inline void setQUndoView_MousePressEvent_Callback(QUndoView_MousePressEvent_Callback cb) { qundoview_mousepressevent_callback = cb; }
    inline void setQUndoView_MouseDoubleClickEvent_Callback(QUndoView_MouseDoubleClickEvent_Callback cb) { qundoview_mousedoubleclickevent_callback = cb; }
    inline void setQUndoView_DragEnterEvent_Callback(QUndoView_DragEnterEvent_Callback cb) { qundoview_dragenterevent_callback = cb; }
    inline void setQUndoView_FocusInEvent_Callback(QUndoView_FocusInEvent_Callback cb) { qundoview_focusinevent_callback = cb; }
    inline void setQUndoView_FocusOutEvent_Callback(QUndoView_FocusOutEvent_Callback cb) { qundoview_focusoutevent_callback = cb; }
    inline void setQUndoView_KeyPressEvent_Callback(QUndoView_KeyPressEvent_Callback cb) { qundoview_keypressevent_callback = cb; }
    inline void setQUndoView_InputMethodEvent_Callback(QUndoView_InputMethodEvent_Callback cb) { qundoview_inputmethodevent_callback = cb; }
    inline void setQUndoView_EventFilter_Callback(QUndoView_EventFilter_Callback cb) { qundoview_eventfilter_callback = cb; }
    inline void setQUndoView_MinimumSizeHint_Callback(QUndoView_MinimumSizeHint_Callback cb) { qundoview_minimumsizehint_callback = cb; }
    inline void setQUndoView_SizeHint_Callback(QUndoView_SizeHint_Callback cb) { qundoview_sizehint_callback = cb; }
    inline void setQUndoView_SetupViewport_Callback(QUndoView_SetupViewport_Callback cb) { qundoview_setupviewport_callback = cb; }
    inline void setQUndoView_ContextMenuEvent_Callback(QUndoView_ContextMenuEvent_Callback cb) { qundoview_contextmenuevent_callback = cb; }
    inline void setQUndoView_ChangeEvent_Callback(QUndoView_ChangeEvent_Callback cb) { qundoview_changeevent_callback = cb; }
    inline void setQUndoView_InitStyleOption_Callback(QUndoView_InitStyleOption_Callback cb) { qundoview_initstyleoption_callback = cb; }
    inline void setQUndoView_DevType_Callback(QUndoView_DevType_Callback cb) { qundoview_devtype_callback = cb; }
    inline void setQUndoView_SetVisible_Callback(QUndoView_SetVisible_Callback cb) { qundoview_setvisible_callback = cb; }
    inline void setQUndoView_HeightForWidth_Callback(QUndoView_HeightForWidth_Callback cb) { qundoview_heightforwidth_callback = cb; }
    inline void setQUndoView_HasHeightForWidth_Callback(QUndoView_HasHeightForWidth_Callback cb) { qundoview_hasheightforwidth_callback = cb; }
    inline void setQUndoView_PaintEngine_Callback(QUndoView_PaintEngine_Callback cb) { qundoview_paintengine_callback = cb; }
    inline void setQUndoView_KeyReleaseEvent_Callback(QUndoView_KeyReleaseEvent_Callback cb) { qundoview_keyreleaseevent_callback = cb; }
    inline void setQUndoView_EnterEvent_Callback(QUndoView_EnterEvent_Callback cb) { qundoview_enterevent_callback = cb; }
    inline void setQUndoView_LeaveEvent_Callback(QUndoView_LeaveEvent_Callback cb) { qundoview_leaveevent_callback = cb; }
    inline void setQUndoView_MoveEvent_Callback(QUndoView_MoveEvent_Callback cb) { qundoview_moveevent_callback = cb; }
    inline void setQUndoView_CloseEvent_Callback(QUndoView_CloseEvent_Callback cb) { qundoview_closeevent_callback = cb; }
    inline void setQUndoView_TabletEvent_Callback(QUndoView_TabletEvent_Callback cb) { qundoview_tabletevent_callback = cb; }
    inline void setQUndoView_ActionEvent_Callback(QUndoView_ActionEvent_Callback cb) { qundoview_actionevent_callback = cb; }
    inline void setQUndoView_ShowEvent_Callback(QUndoView_ShowEvent_Callback cb) { qundoview_showevent_callback = cb; }
    inline void setQUndoView_HideEvent_Callback(QUndoView_HideEvent_Callback cb) { qundoview_hideevent_callback = cb; }
    inline void setQUndoView_NativeEvent_Callback(QUndoView_NativeEvent_Callback cb) { qundoview_nativeevent_callback = cb; }
    inline void setQUndoView_Metric_Callback(QUndoView_Metric_Callback cb) { qundoview_metric_callback = cb; }
    inline void setQUndoView_InitPainter_Callback(QUndoView_InitPainter_Callback cb) { qundoview_initpainter_callback = cb; }
    inline void setQUndoView_Redirected_Callback(QUndoView_Redirected_Callback cb) { qundoview_redirected_callback = cb; }
    inline void setQUndoView_SharedPainter_Callback(QUndoView_SharedPainter_Callback cb) { qundoview_sharedpainter_callback = cb; }
    inline void setQUndoView_ChildEvent_Callback(QUndoView_ChildEvent_Callback cb) { qundoview_childevent_callback = cb; }
    inline void setQUndoView_CustomEvent_Callback(QUndoView_CustomEvent_Callback cb) { qundoview_customevent_callback = cb; }
    inline void setQUndoView_ConnectNotify_Callback(QUndoView_ConnectNotify_Callback cb) { qundoview_connectnotify_callback = cb; }
    inline void setQUndoView_DisconnectNotify_Callback(QUndoView_DisconnectNotify_Callback cb) { qundoview_disconnectnotify_callback = cb; }
    inline void setQUndoView_ResizeContents_Callback(QUndoView_ResizeContents_Callback cb) { qundoview_resizecontents_callback = cb; }
    inline void setQUndoView_ContentsSize_Callback(QUndoView_ContentsSize_Callback cb) { qundoview_contentssize_callback = cb; }
    inline void setQUndoView_RectForIndex_Callback(QUndoView_RectForIndex_Callback cb) { qundoview_rectforindex_callback = cb; }
    inline void setQUndoView_SetPositionForIndex_Callback(QUndoView_SetPositionForIndex_Callback cb) { qundoview_setpositionforindex_callback = cb; }
    inline void setQUndoView_State_Callback(QUndoView_State_Callback cb) { qundoview_state_callback = cb; }
    inline void setQUndoView_SetState_Callback(QUndoView_SetState_Callback cb) { qundoview_setstate_callback = cb; }
    inline void setQUndoView_ScheduleDelayedItemsLayout_Callback(QUndoView_ScheduleDelayedItemsLayout_Callback cb) { qundoview_scheduledelayeditemslayout_callback = cb; }
    inline void setQUndoView_ExecuteDelayedItemsLayout_Callback(QUndoView_ExecuteDelayedItemsLayout_Callback cb) { qundoview_executedelayeditemslayout_callback = cb; }
    inline void setQUndoView_SetDirtyRegion_Callback(QUndoView_SetDirtyRegion_Callback cb) { qundoview_setdirtyregion_callback = cb; }
    inline void setQUndoView_ScrollDirtyRegion_Callback(QUndoView_ScrollDirtyRegion_Callback cb) { qundoview_scrolldirtyregion_callback = cb; }
    inline void setQUndoView_DirtyRegionOffset_Callback(QUndoView_DirtyRegionOffset_Callback cb) { qundoview_dirtyregionoffset_callback = cb; }
    inline void setQUndoView_StartAutoScroll_Callback(QUndoView_StartAutoScroll_Callback cb) { qundoview_startautoscroll_callback = cb; }
    inline void setQUndoView_StopAutoScroll_Callback(QUndoView_StopAutoScroll_Callback cb) { qundoview_stopautoscroll_callback = cb; }
    inline void setQUndoView_DoAutoScroll_Callback(QUndoView_DoAutoScroll_Callback cb) { qundoview_doautoscroll_callback = cb; }
    inline void setQUndoView_DropIndicatorPosition_Callback(QUndoView_DropIndicatorPosition_Callback cb) { qundoview_dropindicatorposition_callback = cb; }
    inline void setQUndoView_SetViewportMargins_Callback(QUndoView_SetViewportMargins_Callback cb) { qundoview_setviewportmargins_callback = cb; }
    inline void setQUndoView_ViewportMargins_Callback(QUndoView_ViewportMargins_Callback cb) { qundoview_viewportmargins_callback = cb; }
    inline void setQUndoView_DrawFrame_Callback(QUndoView_DrawFrame_Callback cb) { qundoview_drawframe_callback = cb; }
    inline void setQUndoView_UpdateMicroFocus_Callback(QUndoView_UpdateMicroFocus_Callback cb) { qundoview_updatemicrofocus_callback = cb; }
    inline void setQUndoView_Create_Callback(QUndoView_Create_Callback cb) { qundoview_create_callback = cb; }
    inline void setQUndoView_Destroy_Callback(QUndoView_Destroy_Callback cb) { qundoview_destroy_callback = cb; }
    inline void setQUndoView_FocusNextChild_Callback(QUndoView_FocusNextChild_Callback cb) { qundoview_focusnextchild_callback = cb; }
    inline void setQUndoView_FocusPreviousChild_Callback(QUndoView_FocusPreviousChild_Callback cb) { qundoview_focuspreviouschild_callback = cb; }
    inline void setQUndoView_Sender_Callback(QUndoView_Sender_Callback cb) { qundoview_sender_callback = cb; }
    inline void setQUndoView_SenderSignalIndex_Callback(QUndoView_SenderSignalIndex_Callback cb) { qundoview_sendersignalindex_callback = cb; }
    inline void setQUndoView_Receivers_Callback(QUndoView_Receivers_Callback cb) { qundoview_receivers_callback = cb; }
    inline void setQUndoView_IsSignalConnected_Callback(QUndoView_IsSignalConnected_Callback cb) { qundoview_issignalconnected_callback = cb; }
    inline void setQUndoView_GetDecodedMetricF_Callback(QUndoView_GetDecodedMetricF_Callback cb) { qundoview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQUndoView_MetaObject_IsBase(bool value) const { qundoview_metaobject_isbase = value; }
    inline void setQUndoView_Metacast_IsBase(bool value) const { qundoview_metacast_isbase = value; }
    inline void setQUndoView_Metacall_IsBase(bool value) const { qundoview_metacall_isbase = value; }
    inline void setQUndoView_VisualRect_IsBase(bool value) const { qundoview_visualrect_isbase = value; }
    inline void setQUndoView_ScrollTo_IsBase(bool value) const { qundoview_scrollto_isbase = value; }
    inline void setQUndoView_IndexAt_IsBase(bool value) const { qundoview_indexat_isbase = value; }
    inline void setQUndoView_DoItemsLayout_IsBase(bool value) const { qundoview_doitemslayout_isbase = value; }
    inline void setQUndoView_Reset_IsBase(bool value) const { qundoview_reset_isbase = value; }
    inline void setQUndoView_SetRootIndex_IsBase(bool value) const { qundoview_setrootindex_isbase = value; }
    inline void setQUndoView_Event_IsBase(bool value) const { qundoview_event_isbase = value; }
    inline void setQUndoView_ScrollContentsBy_IsBase(bool value) const { qundoview_scrollcontentsby_isbase = value; }
    inline void setQUndoView_DataChanged_IsBase(bool value) const { qundoview_datachanged_isbase = value; }
    inline void setQUndoView_RowsInserted_IsBase(bool value) const { qundoview_rowsinserted_isbase = value; }
    inline void setQUndoView_RowsAboutToBeRemoved_IsBase(bool value) const { qundoview_rowsabouttoberemoved_isbase = value; }
    inline void setQUndoView_MouseMoveEvent_IsBase(bool value) const { qundoview_mousemoveevent_isbase = value; }
    inline void setQUndoView_MouseReleaseEvent_IsBase(bool value) const { qundoview_mousereleaseevent_isbase = value; }
    inline void setQUndoView_WheelEvent_IsBase(bool value) const { qundoview_wheelevent_isbase = value; }
    inline void setQUndoView_TimerEvent_IsBase(bool value) const { qundoview_timerevent_isbase = value; }
    inline void setQUndoView_ResizeEvent_IsBase(bool value) const { qundoview_resizeevent_isbase = value; }
    inline void setQUndoView_DragMoveEvent_IsBase(bool value) const { qundoview_dragmoveevent_isbase = value; }
    inline void setQUndoView_DragLeaveEvent_IsBase(bool value) const { qundoview_dragleaveevent_isbase = value; }
    inline void setQUndoView_DropEvent_IsBase(bool value) const { qundoview_dropevent_isbase = value; }
    inline void setQUndoView_StartDrag_IsBase(bool value) const { qundoview_startdrag_isbase = value; }
    inline void setQUndoView_InitViewItemOption_IsBase(bool value) const { qundoview_initviewitemoption_isbase = value; }
    inline void setQUndoView_PaintEvent_IsBase(bool value) const { qundoview_paintevent_isbase = value; }
    inline void setQUndoView_HorizontalOffset_IsBase(bool value) const { qundoview_horizontaloffset_isbase = value; }
    inline void setQUndoView_VerticalOffset_IsBase(bool value) const { qundoview_verticaloffset_isbase = value; }
    inline void setQUndoView_MoveCursor_IsBase(bool value) const { qundoview_movecursor_isbase = value; }
    inline void setQUndoView_SetSelection_IsBase(bool value) const { qundoview_setselection_isbase = value; }
    inline void setQUndoView_VisualRegionForSelection_IsBase(bool value) const { qundoview_visualregionforselection_isbase = value; }
    inline void setQUndoView_SelectedIndexes_IsBase(bool value) const { qundoview_selectedindexes_isbase = value; }
    inline void setQUndoView_UpdateGeometries_IsBase(bool value) const { qundoview_updategeometries_isbase = value; }
    inline void setQUndoView_IsIndexHidden_IsBase(bool value) const { qundoview_isindexhidden_isbase = value; }
    inline void setQUndoView_SelectionChanged_IsBase(bool value) const { qundoview_selectionchanged_isbase = value; }
    inline void setQUndoView_CurrentChanged_IsBase(bool value) const { qundoview_currentchanged_isbase = value; }
    inline void setQUndoView_ViewportSizeHint_IsBase(bool value) const { qundoview_viewportsizehint_isbase = value; }
    inline void setQUndoView_SetModel_IsBase(bool value) const { qundoview_setmodel_isbase = value; }
    inline void setQUndoView_SetSelectionModel_IsBase(bool value) const { qundoview_setselectionmodel_isbase = value; }
    inline void setQUndoView_KeyboardSearch_IsBase(bool value) const { qundoview_keyboardsearch_isbase = value; }
    inline void setQUndoView_SizeHintForRow_IsBase(bool value) const { qundoview_sizehintforrow_isbase = value; }
    inline void setQUndoView_SizeHintForColumn_IsBase(bool value) const { qundoview_sizehintforcolumn_isbase = value; }
    inline void setQUndoView_ItemDelegateForIndex_IsBase(bool value) const { qundoview_itemdelegateforindex_isbase = value; }
    inline void setQUndoView_InputMethodQuery_IsBase(bool value) const { qundoview_inputmethodquery_isbase = value; }
    inline void setQUndoView_SelectAll_IsBase(bool value) const { qundoview_selectall_isbase = value; }
    inline void setQUndoView_UpdateEditorData_IsBase(bool value) const { qundoview_updateeditordata_isbase = value; }
    inline void setQUndoView_UpdateEditorGeometries_IsBase(bool value) const { qundoview_updateeditorgeometries_isbase = value; }
    inline void setQUndoView_VerticalScrollbarAction_IsBase(bool value) const { qundoview_verticalscrollbaraction_isbase = value; }
    inline void setQUndoView_HorizontalScrollbarAction_IsBase(bool value) const { qundoview_horizontalscrollbaraction_isbase = value; }
    inline void setQUndoView_VerticalScrollbarValueChanged_IsBase(bool value) const { qundoview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQUndoView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qundoview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQUndoView_CloseEditor_IsBase(bool value) const { qundoview_closeeditor_isbase = value; }
    inline void setQUndoView_CommitData_IsBase(bool value) const { qundoview_commitdata_isbase = value; }
    inline void setQUndoView_EditorDestroyed_IsBase(bool value) const { qundoview_editordestroyed_isbase = value; }
    inline void setQUndoView_Edit2_IsBase(bool value) const { qundoview_edit2_isbase = value; }
    inline void setQUndoView_SelectionCommand_IsBase(bool value) const { qundoview_selectioncommand_isbase = value; }
    inline void setQUndoView_FocusNextPrevChild_IsBase(bool value) const { qundoview_focusnextprevchild_isbase = value; }
    inline void setQUndoView_ViewportEvent_IsBase(bool value) const { qundoview_viewportevent_isbase = value; }
    inline void setQUndoView_MousePressEvent_IsBase(bool value) const { qundoview_mousepressevent_isbase = value; }
    inline void setQUndoView_MouseDoubleClickEvent_IsBase(bool value) const { qundoview_mousedoubleclickevent_isbase = value; }
    inline void setQUndoView_DragEnterEvent_IsBase(bool value) const { qundoview_dragenterevent_isbase = value; }
    inline void setQUndoView_FocusInEvent_IsBase(bool value) const { qundoview_focusinevent_isbase = value; }
    inline void setQUndoView_FocusOutEvent_IsBase(bool value) const { qundoview_focusoutevent_isbase = value; }
    inline void setQUndoView_KeyPressEvent_IsBase(bool value) const { qundoview_keypressevent_isbase = value; }
    inline void setQUndoView_InputMethodEvent_IsBase(bool value) const { qundoview_inputmethodevent_isbase = value; }
    inline void setQUndoView_EventFilter_IsBase(bool value) const { qundoview_eventfilter_isbase = value; }
    inline void setQUndoView_MinimumSizeHint_IsBase(bool value) const { qundoview_minimumsizehint_isbase = value; }
    inline void setQUndoView_SizeHint_IsBase(bool value) const { qundoview_sizehint_isbase = value; }
    inline void setQUndoView_SetupViewport_IsBase(bool value) const { qundoview_setupviewport_isbase = value; }
    inline void setQUndoView_ContextMenuEvent_IsBase(bool value) const { qundoview_contextmenuevent_isbase = value; }
    inline void setQUndoView_ChangeEvent_IsBase(bool value) const { qundoview_changeevent_isbase = value; }
    inline void setQUndoView_InitStyleOption_IsBase(bool value) const { qundoview_initstyleoption_isbase = value; }
    inline void setQUndoView_DevType_IsBase(bool value) const { qundoview_devtype_isbase = value; }
    inline void setQUndoView_SetVisible_IsBase(bool value) const { qundoview_setvisible_isbase = value; }
    inline void setQUndoView_HeightForWidth_IsBase(bool value) const { qundoview_heightforwidth_isbase = value; }
    inline void setQUndoView_HasHeightForWidth_IsBase(bool value) const { qundoview_hasheightforwidth_isbase = value; }
    inline void setQUndoView_PaintEngine_IsBase(bool value) const { qundoview_paintengine_isbase = value; }
    inline void setQUndoView_KeyReleaseEvent_IsBase(bool value) const { qundoview_keyreleaseevent_isbase = value; }
    inline void setQUndoView_EnterEvent_IsBase(bool value) const { qundoview_enterevent_isbase = value; }
    inline void setQUndoView_LeaveEvent_IsBase(bool value) const { qundoview_leaveevent_isbase = value; }
    inline void setQUndoView_MoveEvent_IsBase(bool value) const { qundoview_moveevent_isbase = value; }
    inline void setQUndoView_CloseEvent_IsBase(bool value) const { qundoview_closeevent_isbase = value; }
    inline void setQUndoView_TabletEvent_IsBase(bool value) const { qundoview_tabletevent_isbase = value; }
    inline void setQUndoView_ActionEvent_IsBase(bool value) const { qundoview_actionevent_isbase = value; }
    inline void setQUndoView_ShowEvent_IsBase(bool value) const { qundoview_showevent_isbase = value; }
    inline void setQUndoView_HideEvent_IsBase(bool value) const { qundoview_hideevent_isbase = value; }
    inline void setQUndoView_NativeEvent_IsBase(bool value) const { qundoview_nativeevent_isbase = value; }
    inline void setQUndoView_Metric_IsBase(bool value) const { qundoview_metric_isbase = value; }
    inline void setQUndoView_InitPainter_IsBase(bool value) const { qundoview_initpainter_isbase = value; }
    inline void setQUndoView_Redirected_IsBase(bool value) const { qundoview_redirected_isbase = value; }
    inline void setQUndoView_SharedPainter_IsBase(bool value) const { qundoview_sharedpainter_isbase = value; }
    inline void setQUndoView_ChildEvent_IsBase(bool value) const { qundoview_childevent_isbase = value; }
    inline void setQUndoView_CustomEvent_IsBase(bool value) const { qundoview_customevent_isbase = value; }
    inline void setQUndoView_ConnectNotify_IsBase(bool value) const { qundoview_connectnotify_isbase = value; }
    inline void setQUndoView_DisconnectNotify_IsBase(bool value) const { qundoview_disconnectnotify_isbase = value; }
    inline void setQUndoView_ResizeContents_IsBase(bool value) const { qundoview_resizecontents_isbase = value; }
    inline void setQUndoView_ContentsSize_IsBase(bool value) const { qundoview_contentssize_isbase = value; }
    inline void setQUndoView_RectForIndex_IsBase(bool value) const { qundoview_rectforindex_isbase = value; }
    inline void setQUndoView_SetPositionForIndex_IsBase(bool value) const { qundoview_setpositionforindex_isbase = value; }
    inline void setQUndoView_State_IsBase(bool value) const { qundoview_state_isbase = value; }
    inline void setQUndoView_SetState_IsBase(bool value) const { qundoview_setstate_isbase = value; }
    inline void setQUndoView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qundoview_scheduledelayeditemslayout_isbase = value; }
    inline void setQUndoView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qundoview_executedelayeditemslayout_isbase = value; }
    inline void setQUndoView_SetDirtyRegion_IsBase(bool value) const { qundoview_setdirtyregion_isbase = value; }
    inline void setQUndoView_ScrollDirtyRegion_IsBase(bool value) const { qundoview_scrolldirtyregion_isbase = value; }
    inline void setQUndoView_DirtyRegionOffset_IsBase(bool value) const { qundoview_dirtyregionoffset_isbase = value; }
    inline void setQUndoView_StartAutoScroll_IsBase(bool value) const { qundoview_startautoscroll_isbase = value; }
    inline void setQUndoView_StopAutoScroll_IsBase(bool value) const { qundoview_stopautoscroll_isbase = value; }
    inline void setQUndoView_DoAutoScroll_IsBase(bool value) const { qundoview_doautoscroll_isbase = value; }
    inline void setQUndoView_DropIndicatorPosition_IsBase(bool value) const { qundoview_dropindicatorposition_isbase = value; }
    inline void setQUndoView_SetViewportMargins_IsBase(bool value) const { qundoview_setviewportmargins_isbase = value; }
    inline void setQUndoView_ViewportMargins_IsBase(bool value) const { qundoview_viewportmargins_isbase = value; }
    inline void setQUndoView_DrawFrame_IsBase(bool value) const { qundoview_drawframe_isbase = value; }
    inline void setQUndoView_UpdateMicroFocus_IsBase(bool value) const { qundoview_updatemicrofocus_isbase = value; }
    inline void setQUndoView_Create_IsBase(bool value) const { qundoview_create_isbase = value; }
    inline void setQUndoView_Destroy_IsBase(bool value) const { qundoview_destroy_isbase = value; }
    inline void setQUndoView_FocusNextChild_IsBase(bool value) const { qundoview_focusnextchild_isbase = value; }
    inline void setQUndoView_FocusPreviousChild_IsBase(bool value) const { qundoview_focuspreviouschild_isbase = value; }
    inline void setQUndoView_Sender_IsBase(bool value) const { qundoview_sender_isbase = value; }
    inline void setQUndoView_SenderSignalIndex_IsBase(bool value) const { qundoview_sendersignalindex_isbase = value; }
    inline void setQUndoView_Receivers_IsBase(bool value) const { qundoview_receivers_isbase = value; }
    inline void setQUndoView_IsSignalConnected_IsBase(bool value) const { qundoview_issignalconnected_isbase = value; }
    inline void setQUndoView_GetDecodedMetricF_IsBase(bool value) const { qundoview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qundoview_metaobject_isbase) {
            qundoview_metaobject_isbase = false;
            return QUndoView::metaObject();
        }
        auto metaobject_cb = qundoview_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QUndoView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qundoview_metacast_isbase) {
            qundoview_metacast_isbase = false;
            return QUndoView::qt_metacast(param1);
        }
        auto metacast_cb = qundoview_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundoview_metacall_isbase) {
            qundoview_metacall_isbase = false;
            return QUndoView::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qundoview_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qundoview_visualrect_isbase) {
            qundoview_visualrect_isbase = false;
            return QUndoView::visualRect(index);
        }
        auto visualrect_cb = qundoview_visualrect_callback;
        if (visualrect_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = visualrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QUndoView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qundoview_scrollto_isbase) {
            qundoview_scrollto_isbase = false;
            QUndoView::scrollTo(index, hint);
            return;
        }
        auto scrollto_cb = qundoview_scrollto_callback;
        if (scrollto_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            scrollto_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qundoview_indexat_isbase) {
            qundoview_indexat_isbase = false;
            return QUndoView::indexAt(p);
        }
        auto indexat_cb = qundoview_indexat_callback;
        if (indexat_cb) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = indexat_cb(this, cbval1);
            return *callback_ret;
        }
        return QUndoView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qundoview_doitemslayout_isbase) {
            qundoview_doitemslayout_isbase = false;
            QUndoView::doItemsLayout();
            return;
        }
        auto doitemslayout_cb = qundoview_doitemslayout_callback;
        if (doitemslayout_cb) {
            doitemslayout_cb();
            return;
        }
        QUndoView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qundoview_reset_isbase) {
            qundoview_reset_isbase = false;
            QUndoView::reset();
            return;
        }
        auto reset_cb = qundoview_reset_callback;
        if (reset_cb) {
            reset_cb();
            return;
        }
        QUndoView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qundoview_setrootindex_isbase) {
            qundoview_setrootindex_isbase = false;
            QUndoView::setRootIndex(index);
            return;
        }
        auto setrootindex_cb = qundoview_setrootindex_callback;
        if (setrootindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            setrootindex_cb(this, cbval1);
            return;
        }
        QUndoView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qundoview_event_isbase) {
            qundoview_event_isbase = false;
            return QUndoView::event(e);
        }
        auto event_cb = qundoview_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoView::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qundoview_scrollcontentsby_isbase) {
            qundoview_scrollcontentsby_isbase = false;
            QUndoView::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qundoview_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qundoview_datachanged_isbase) {
            qundoview_datachanged_isbase = false;
            QUndoView::dataChanged(topLeft, bottomRight, roles);
            return;
        }
        auto datachanged_cb = qundoview_datachanged_callback;
        if (datachanged_cb) {
            const QModelIndex& topLeft_ret = topLeft;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&topLeft_ret);
            const QModelIndex& bottomRight_ret = bottomRight;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&bottomRight_ret);
            const QList<int>& roles_ret = roles;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* roles_arr = static_cast<int*>(malloc(sizeof(int) * (roles_ret.size())));
            for (qsizetype i = 0; i < roles_ret.size(); ++i) {
                roles_arr[i] = roles_ret[i];
            }
            libqt_list roles_out;
            roles_out.len = roles_ret.size();
            roles_out.data = static_cast<void*>(roles_arr);
            libqt_list /* of int */ cbval3 = roles_out;

            datachanged_cb(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QUndoView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qundoview_rowsinserted_isbase) {
            qundoview_rowsinserted_isbase = false;
            QUndoView::rowsInserted(parent, start, end);
            return;
        }
        auto rowsinserted_cb = qundoview_rowsinserted_callback;
        if (rowsinserted_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsinserted_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QUndoView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qundoview_rowsabouttoberemoved_isbase) {
            qundoview_rowsabouttoberemoved_isbase = false;
            QUndoView::rowsAboutToBeRemoved(parent, start, end);
            return;
        }
        auto rowsabouttoberemoved_cb = qundoview_rowsabouttoberemoved_callback;
        if (rowsabouttoberemoved_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsabouttoberemoved_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QUndoView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qundoview_mousemoveevent_isbase) {
            qundoview_mousemoveevent_isbase = false;
            QUndoView::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = qundoview_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QUndoView::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qundoview_mousereleaseevent_isbase) {
            qundoview_mousereleaseevent_isbase = false;
            QUndoView::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = qundoview_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QUndoView::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qundoview_wheelevent_isbase) {
            qundoview_wheelevent_isbase = false;
            QUndoView::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = qundoview_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        QUndoView::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qundoview_timerevent_isbase) {
            qundoview_timerevent_isbase = false;
            QUndoView::timerEvent(e);
            return;
        }
        auto timerevent_cb = qundoview_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        QUndoView::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qundoview_resizeevent_isbase) {
            qundoview_resizeevent_isbase = false;
            QUndoView::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = qundoview_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        QUndoView::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qundoview_dragmoveevent_isbase) {
            qundoview_dragmoveevent_isbase = false;
            QUndoView::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = qundoview_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QUndoView::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qundoview_dragleaveevent_isbase) {
            qundoview_dragleaveevent_isbase = false;
            QUndoView::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = qundoview_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QUndoView::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qundoview_dropevent_isbase) {
            qundoview_dropevent_isbase = false;
            QUndoView::dropEvent(e);
            return;
        }
        auto dropevent_cb = qundoview_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;

            dropevent_cb(this, cbval1);
            return;
        }
        QUndoView::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qundoview_startdrag_isbase) {
            qundoview_startdrag_isbase = false;
            QUndoView::startDrag(supportedActions);
            return;
        }
        auto startdrag_cb = qundoview_startdrag_callback;
        if (startdrag_cb) {
            int cbval1 = static_cast<int>(supportedActions);

            startdrag_cb(this, cbval1);
            return;
        }
        QUndoView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qundoview_initviewitemoption_isbase) {
            qundoview_initviewitemoption_isbase = false;
            QUndoView::initViewItemOption(option);
            return;
        }
        auto initviewitemoption_cb = qundoview_initviewitemoption_callback;
        if (initviewitemoption_cb) {
            QStyleOptionViewItem* cbval1 = option;

            initviewitemoption_cb(this, cbval1);
            return;
        }
        QUndoView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qundoview_paintevent_isbase) {
            qundoview_paintevent_isbase = false;
            QUndoView::paintEvent(e);
            return;
        }
        auto paintevent_cb = qundoview_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        QUndoView::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qundoview_horizontaloffset_isbase) {
            qundoview_horizontaloffset_isbase = false;
            return QUndoView::horizontalOffset();
        }
        auto horizontaloffset_cb = qundoview_horizontaloffset_callback;
        if (horizontaloffset_cb) {
            int callback_ret = horizontaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return QUndoView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qundoview_verticaloffset_isbase) {
            qundoview_verticaloffset_isbase = false;
            return QUndoView::verticalOffset();
        }
        auto verticaloffset_cb = qundoview_verticaloffset_callback;
        if (verticaloffset_cb) {
            int callback_ret = verticaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return QUndoView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qundoview_movecursor_isbase) {
            qundoview_movecursor_isbase = false;
            return QUndoView::moveCursor(cursorAction, modifiers);
        }
        auto movecursor_cb = qundoview_movecursor_callback;
        if (movecursor_cb) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = movecursor_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QUndoView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qundoview_setselection_isbase) {
            qundoview_setselection_isbase = false;
            QUndoView::setSelection(rect, command);
            return;
        }
        auto setselection_cb = qundoview_setselection_callback;
        if (setselection_cb) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            setselection_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qundoview_visualregionforselection_isbase) {
            qundoview_visualregionforselection_isbase = false;
            return QUndoView::visualRegionForSelection(selection);
        }
        auto visualregionforselection_cb = qundoview_visualregionforselection_callback;
        if (visualregionforselection_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = visualregionforselection_cb(this, cbval1);
            return *callback_ret;
        }
        return QUndoView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qundoview_selectedindexes_isbase) {
            qundoview_selectedindexes_isbase = false;
            return QUndoView::selectedIndexes();
        }
        auto selectedindexes_cb = qundoview_selectedindexes_callback;
        if (selectedindexes_cb) {
            libqt_list /* of QModelIndex* */ callback_ret = selectedindexes_cb();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QUndoView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qundoview_updategeometries_isbase) {
            qundoview_updategeometries_isbase = false;
            QUndoView::updateGeometries();
            return;
        }
        auto updategeometries_cb = qundoview_updategeometries_callback;
        if (updategeometries_cb) {
            updategeometries_cb();
            return;
        }
        QUndoView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qundoview_isindexhidden_isbase) {
            qundoview_isindexhidden_isbase = false;
            return QUndoView::isIndexHidden(index);
        }
        auto isindexhidden_cb = qundoview_isindexhidden_callback;
        if (isindexhidden_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = isindexhidden_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qundoview_selectionchanged_isbase) {
            qundoview_selectionchanged_isbase = false;
            QUndoView::selectionChanged(selected, deselected);
            return;
        }
        auto selectionchanged_cb = qundoview_selectionchanged_callback;
        if (selectionchanged_cb) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            selectionchanged_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qundoview_currentchanged_isbase) {
            qundoview_currentchanged_isbase = false;
            QUndoView::currentChanged(current, previous);
            return;
        }
        auto currentchanged_cb = qundoview_currentchanged_callback;
        if (currentchanged_cb) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            currentchanged_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qundoview_viewportsizehint_isbase) {
            qundoview_viewportsizehint_isbase = false;
            return QUndoView::viewportSizeHint();
        }
        auto viewportsizehint_cb = qundoview_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QUndoView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qundoview_setmodel_isbase) {
            qundoview_setmodel_isbase = false;
            QUndoView::setModel(model);
            return;
        }
        auto setmodel_cb = qundoview_setmodel_callback;
        if (setmodel_cb) {
            QAbstractItemModel* cbval1 = model;

            setmodel_cb(this, cbval1);
            return;
        }
        QUndoView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qundoview_setselectionmodel_isbase) {
            qundoview_setselectionmodel_isbase = false;
            QUndoView::setSelectionModel(selectionModel);
            return;
        }
        auto setselectionmodel_cb = qundoview_setselectionmodel_callback;
        if (setselectionmodel_cb) {
            QItemSelectionModel* cbval1 = selectionModel;

            setselectionmodel_cb(this, cbval1);
            return;
        }
        QUndoView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qundoview_keyboardsearch_isbase) {
            qundoview_keyboardsearch_isbase = false;
            QUndoView::keyboardSearch(search);
            return;
        }
        auto keyboardsearch_cb = qundoview_keyboardsearch_callback;
        if (keyboardsearch_cb) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;

            keyboardsearch_cb(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QUndoView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qundoview_sizehintforrow_isbase) {
            qundoview_sizehintforrow_isbase = false;
            return QUndoView::sizeHintForRow(row);
        }
        auto sizehintforrow_cb = qundoview_sizehintforrow_callback;
        if (sizehintforrow_cb) {
            int cbval1 = row;

            int callback_ret = sizehintforrow_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qundoview_sizehintforcolumn_isbase) {
            qundoview_sizehintforcolumn_isbase = false;
            return QUndoView::sizeHintForColumn(column);
        }
        auto sizehintforcolumn_cb = qundoview_sizehintforcolumn_callback;
        if (sizehintforcolumn_cb) {
            int cbval1 = column;

            int callback_ret = sizehintforcolumn_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qundoview_itemdelegateforindex_isbase) {
            qundoview_itemdelegateforindex_isbase = false;
            return QUndoView::itemDelegateForIndex(index);
        }
        auto itemdelegateforindex_cb = qundoview_itemdelegateforindex_callback;
        if (itemdelegateforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = itemdelegateforindex_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qundoview_inputmethodquery_isbase) {
            qundoview_inputmethodquery_isbase = false;
            return QUndoView::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qundoview_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QUndoView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qundoview_selectall_isbase) {
            qundoview_selectall_isbase = false;
            QUndoView::selectAll();
            return;
        }
        auto selectall_cb = qundoview_selectall_callback;
        if (selectall_cb) {
            selectall_cb();
            return;
        }
        QUndoView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qundoview_updateeditordata_isbase) {
            qundoview_updateeditordata_isbase = false;
            QUndoView::updateEditorData();
            return;
        }
        auto updateeditordata_cb = qundoview_updateeditordata_callback;
        if (updateeditordata_cb) {
            updateeditordata_cb();
            return;
        }
        QUndoView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qundoview_updateeditorgeometries_isbase) {
            qundoview_updateeditorgeometries_isbase = false;
            QUndoView::updateEditorGeometries();
            return;
        }
        auto updateeditorgeometries_cb = qundoview_updateeditorgeometries_callback;
        if (updateeditorgeometries_cb) {
            updateeditorgeometries_cb();
            return;
        }
        QUndoView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qundoview_verticalscrollbaraction_isbase) {
            qundoview_verticalscrollbaraction_isbase = false;
            QUndoView::verticalScrollbarAction(action);
            return;
        }
        auto verticalscrollbaraction_cb = qundoview_verticalscrollbaraction_callback;
        if (verticalscrollbaraction_cb) {
            int cbval1 = action;

            verticalscrollbaraction_cb(this, cbval1);
            return;
        }
        QUndoView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qundoview_horizontalscrollbaraction_isbase) {
            qundoview_horizontalscrollbaraction_isbase = false;
            QUndoView::horizontalScrollbarAction(action);
            return;
        }
        auto horizontalscrollbaraction_cb = qundoview_horizontalscrollbaraction_callback;
        if (horizontalscrollbaraction_cb) {
            int cbval1 = action;

            horizontalscrollbaraction_cb(this, cbval1);
            return;
        }
        QUndoView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qundoview_verticalscrollbarvaluechanged_isbase) {
            qundoview_verticalscrollbarvaluechanged_isbase = false;
            QUndoView::verticalScrollbarValueChanged(value);
            return;
        }
        auto verticalscrollbarvaluechanged_cb = qundoview_verticalscrollbarvaluechanged_callback;
        if (verticalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            verticalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QUndoView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qundoview_horizontalscrollbarvaluechanged_isbase) {
            qundoview_horizontalscrollbarvaluechanged_isbase = false;
            QUndoView::horizontalScrollbarValueChanged(value);
            return;
        }
        auto horizontalscrollbarvaluechanged_cb = qundoview_horizontalscrollbarvaluechanged_callback;
        if (horizontalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            horizontalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QUndoView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qundoview_closeeditor_isbase) {
            qundoview_closeeditor_isbase = false;
            QUndoView::closeEditor(editor, hint);
            return;
        }
        auto closeeditor_cb = qundoview_closeeditor_callback;
        if (closeeditor_cb) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            closeeditor_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qundoview_commitdata_isbase) {
            qundoview_commitdata_isbase = false;
            QUndoView::commitData(editor);
            return;
        }
        auto commitdata_cb = qundoview_commitdata_callback;
        if (commitdata_cb) {
            QWidget* cbval1 = editor;

            commitdata_cb(this, cbval1);
            return;
        }
        QUndoView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qundoview_editordestroyed_isbase) {
            qundoview_editordestroyed_isbase = false;
            QUndoView::editorDestroyed(editor);
            return;
        }
        auto editordestroyed_cb = qundoview_editordestroyed_callback;
        if (editordestroyed_cb) {
            QObject* cbval1 = editor;

            editordestroyed_cb(this, cbval1);
            return;
        }
        QUndoView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qundoview_edit2_isbase) {
            qundoview_edit2_isbase = false;
            return QUndoView::edit(index, trigger, event);
        }
        auto edit2_cb = qundoview_edit2_callback;
        if (edit2_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = edit2_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QUndoView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qundoview_selectioncommand_isbase) {
            qundoview_selectioncommand_isbase = false;
            return QUndoView::selectionCommand(index, event);
        }
        auto selectioncommand_cb = qundoview_selectioncommand_callback;
        if (selectioncommand_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = selectioncommand_cb(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QUndoView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qundoview_focusnextprevchild_isbase) {
            qundoview_focusnextprevchild_isbase = false;
            return QUndoView::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qundoview_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qundoview_viewportevent_isbase) {
            qundoview_viewportevent_isbase = false;
            return QUndoView::viewportEvent(event);
        }
        auto viewportevent_cb = qundoview_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qundoview_mousepressevent_isbase) {
            qundoview_mousepressevent_isbase = false;
            QUndoView::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qundoview_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QUndoView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qundoview_mousedoubleclickevent_isbase) {
            qundoview_mousedoubleclickevent_isbase = false;
            QUndoView::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qundoview_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QUndoView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qundoview_dragenterevent_isbase) {
            qundoview_dragenterevent_isbase = false;
            QUndoView::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qundoview_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QUndoView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qundoview_focusinevent_isbase) {
            qundoview_focusinevent_isbase = false;
            QUndoView::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qundoview_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QUndoView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qundoview_focusoutevent_isbase) {
            qundoview_focusoutevent_isbase = false;
            QUndoView::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qundoview_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QUndoView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qundoview_keypressevent_isbase) {
            qundoview_keypressevent_isbase = false;
            QUndoView::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qundoview_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QUndoView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qundoview_inputmethodevent_isbase) {
            qundoview_inputmethodevent_isbase = false;
            QUndoView::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qundoview_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QUndoView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qundoview_eventfilter_isbase) {
            qundoview_eventfilter_isbase = false;
            return QUndoView::eventFilter(object, event);
        }
        auto eventfilter_cb = qundoview_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QUndoView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qundoview_minimumsizehint_isbase) {
            qundoview_minimumsizehint_isbase = false;
            return QUndoView::minimumSizeHint();
        }
        auto minimumsizehint_cb = qundoview_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QUndoView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qundoview_sizehint_isbase) {
            qundoview_sizehint_isbase = false;
            return QUndoView::sizeHint();
        }
        auto sizehint_cb = qundoview_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QUndoView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qundoview_setupviewport_isbase) {
            qundoview_setupviewport_isbase = false;
            QUndoView::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qundoview_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QUndoView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qundoview_contextmenuevent_isbase) {
            qundoview_contextmenuevent_isbase = false;
            QUndoView::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qundoview_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QUndoView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qundoview_changeevent_isbase) {
            qundoview_changeevent_isbase = false;
            QUndoView::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qundoview_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QUndoView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qundoview_initstyleoption_isbase) {
            qundoview_initstyleoption_isbase = false;
            QUndoView::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qundoview_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QUndoView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qundoview_devtype_isbase) {
            qundoview_devtype_isbase = false;
            return QUndoView::devType();
        }
        auto devtype_cb = qundoview_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QUndoView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qundoview_setvisible_isbase) {
            qundoview_setvisible_isbase = false;
            QUndoView::setVisible(visible);
            return;
        }
        auto setvisible_cb = qundoview_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QUndoView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qundoview_heightforwidth_isbase) {
            qundoview_heightforwidth_isbase = false;
            return QUndoView::heightForWidth(param1);
        }
        auto heightforwidth_cb = qundoview_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qundoview_hasheightforwidth_isbase) {
            qundoview_hasheightforwidth_isbase = false;
            return QUndoView::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qundoview_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QUndoView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qundoview_paintengine_isbase) {
            qundoview_paintengine_isbase = false;
            return QUndoView::paintEngine();
        }
        auto paintengine_cb = qundoview_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QUndoView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qundoview_keyreleaseevent_isbase) {
            qundoview_keyreleaseevent_isbase = false;
            QUndoView::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qundoview_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QUndoView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qundoview_enterevent_isbase) {
            qundoview_enterevent_isbase = false;
            QUndoView::enterEvent(event);
            return;
        }
        auto enterevent_cb = qundoview_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QUndoView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qundoview_leaveevent_isbase) {
            qundoview_leaveevent_isbase = false;
            QUndoView::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qundoview_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QUndoView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qundoview_moveevent_isbase) {
            qundoview_moveevent_isbase = false;
            QUndoView::moveEvent(event);
            return;
        }
        auto moveevent_cb = qundoview_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QUndoView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qundoview_closeevent_isbase) {
            qundoview_closeevent_isbase = false;
            QUndoView::closeEvent(event);
            return;
        }
        auto closeevent_cb = qundoview_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QUndoView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qundoview_tabletevent_isbase) {
            qundoview_tabletevent_isbase = false;
            QUndoView::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qundoview_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QUndoView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qundoview_actionevent_isbase) {
            qundoview_actionevent_isbase = false;
            QUndoView::actionEvent(event);
            return;
        }
        auto actionevent_cb = qundoview_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QUndoView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qundoview_showevent_isbase) {
            qundoview_showevent_isbase = false;
            QUndoView::showEvent(event);
            return;
        }
        auto showevent_cb = qundoview_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QUndoView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qundoview_hideevent_isbase) {
            qundoview_hideevent_isbase = false;
            QUndoView::hideEvent(event);
            return;
        }
        auto hideevent_cb = qundoview_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QUndoView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qundoview_nativeevent_isbase) {
            qundoview_nativeevent_isbase = false;
            return QUndoView::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qundoview_nativeevent_callback;
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
        return QUndoView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qundoview_metric_isbase) {
            qundoview_metric_isbase = false;
            return QUndoView::metric(param1);
        }
        auto metric_cb = qundoview_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qundoview_initpainter_isbase) {
            qundoview_initpainter_isbase = false;
            QUndoView::initPainter(painter);
            return;
        }
        auto initpainter_cb = qundoview_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QUndoView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qundoview_redirected_isbase) {
            qundoview_redirected_isbase = false;
            return QUndoView::redirected(offset);
        }
        auto redirected_cb = qundoview_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qundoview_sharedpainter_isbase) {
            qundoview_sharedpainter_isbase = false;
            return QUndoView::sharedPainter();
        }
        auto sharedpainter_cb = qundoview_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QUndoView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundoview_childevent_isbase) {
            qundoview_childevent_isbase = false;
            QUndoView::childEvent(event);
            return;
        }
        auto childevent_cb = qundoview_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QUndoView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundoview_customevent_isbase) {
            qundoview_customevent_isbase = false;
            QUndoView::customEvent(event);
            return;
        }
        auto customevent_cb = qundoview_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QUndoView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundoview_connectnotify_isbase) {
            qundoview_connectnotify_isbase = false;
            QUndoView::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qundoview_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QUndoView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundoview_disconnectnotify_isbase) {
            qundoview_disconnectnotify_isbase = false;
            QUndoView::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qundoview_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QUndoView::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (qundoview_resizecontents_isbase) {
            qundoview_resizecontents_isbase = false;
            QUndoView::resizeContents(width, height);
            return;
        }
        auto resizecontents_cb = qundoview_resizecontents_callback;
        if (resizecontents_cb) {
            int cbval1 = width;
            int cbval2 = height;

            resizecontents_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::resizeContents(width, height);
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (qundoview_contentssize_isbase) {
            qundoview_contentssize_isbase = false;
            return QUndoView::contentsSize();
        }
        auto contentssize_cb = qundoview_contentssize_callback;
        if (contentssize_cb) {
            QSize* callback_ret = contentssize_cb();
            return *callback_ret;
        }
        return QUndoView::contentsSize();
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (qundoview_rectforindex_isbase) {
            qundoview_rectforindex_isbase = false;
            return QUndoView::rectForIndex(index);
        }
        auto rectforindex_cb = qundoview_rectforindex_callback;
        if (rectforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = rectforindex_cb(this, cbval1);
            return *callback_ret;
        }
        return QUndoView::rectForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (qundoview_setpositionforindex_isbase) {
            qundoview_setpositionforindex_isbase = false;
            QUndoView::setPositionForIndex(position, index);
            return;
        }
        auto setpositionforindex_cb = qundoview_setpositionforindex_callback;
        if (setpositionforindex_cb) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            setpositionforindex_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::setPositionForIndex(position, index);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qundoview_state_isbase) {
            qundoview_state_isbase = false;
            return QUndoView::state();
        }
        auto state_cb = qundoview_state_callback;
        if (state_cb) {
            int callback_ret = state_cb();
            return static_cast<VirtualQUndoView::State>(callback_ret);
        }
        return QUndoView::state();
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qundoview_setstate_isbase) {
            qundoview_setstate_isbase = false;
            QUndoView::setState(state);
            return;
        }
        auto setstate_cb = qundoview_setstate_callback;
        if (setstate_cb) {
            int cbval1 = static_cast<int>(state);

            setstate_cb(this, cbval1);
            return;
        }
        QUndoView::setState(state);
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qundoview_scheduledelayeditemslayout_isbase) {
            qundoview_scheduledelayeditemslayout_isbase = false;
            QUndoView::scheduleDelayedItemsLayout();
            return;
        }
        auto scheduledelayeditemslayout_cb = qundoview_scheduledelayeditemslayout_callback;
        if (scheduledelayeditemslayout_cb) {
            scheduledelayeditemslayout_cb();
            return;
        }
        QUndoView::scheduleDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qundoview_executedelayeditemslayout_isbase) {
            qundoview_executedelayeditemslayout_isbase = false;
            QUndoView::executeDelayedItemsLayout();
            return;
        }
        auto executedelayeditemslayout_cb = qundoview_executedelayeditemslayout_callback;
        if (executedelayeditemslayout_cb) {
            executedelayeditemslayout_cb();
            return;
        }
        QUndoView::executeDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qundoview_setdirtyregion_isbase) {
            qundoview_setdirtyregion_isbase = false;
            QUndoView::setDirtyRegion(region);
            return;
        }
        auto setdirtyregion_cb = qundoview_setdirtyregion_callback;
        if (setdirtyregion_cb) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            setdirtyregion_cb(this, cbval1);
            return;
        }
        QUndoView::setDirtyRegion(region);
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qundoview_scrolldirtyregion_isbase) {
            qundoview_scrolldirtyregion_isbase = false;
            QUndoView::scrollDirtyRegion(dx, dy);
            return;
        }
        auto scrolldirtyregion_cb = qundoview_scrolldirtyregion_callback;
        if (scrolldirtyregion_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrolldirtyregion_cb(this, cbval1, cbval2);
            return;
        }
        QUndoView::scrollDirtyRegion(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qundoview_dirtyregionoffset_isbase) {
            qundoview_dirtyregionoffset_isbase = false;
            return QUndoView::dirtyRegionOffset();
        }
        auto dirtyregionoffset_cb = qundoview_dirtyregionoffset_callback;
        if (dirtyregionoffset_cb) {
            QPoint* callback_ret = dirtyregionoffset_cb();
            return *callback_ret;
        }
        return QUndoView::dirtyRegionOffset();
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qundoview_startautoscroll_isbase) {
            qundoview_startautoscroll_isbase = false;
            QUndoView::startAutoScroll();
            return;
        }
        auto startautoscroll_cb = qundoview_startautoscroll_callback;
        if (startautoscroll_cb) {
            startautoscroll_cb();
            return;
        }
        QUndoView::startAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qundoview_stopautoscroll_isbase) {
            qundoview_stopautoscroll_isbase = false;
            QUndoView::stopAutoScroll();
            return;
        }
        auto stopautoscroll_cb = qundoview_stopautoscroll_callback;
        if (stopautoscroll_cb) {
            stopautoscroll_cb();
            return;
        }
        QUndoView::stopAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qundoview_doautoscroll_isbase) {
            qundoview_doautoscroll_isbase = false;
            QUndoView::doAutoScroll();
            return;
        }
        auto doautoscroll_cb = qundoview_doautoscroll_callback;
        if (doautoscroll_cb) {
            doautoscroll_cb();
            return;
        }
        QUndoView::doAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qundoview_dropindicatorposition_isbase) {
            qundoview_dropindicatorposition_isbase = false;
            return QUndoView::dropIndicatorPosition();
        }
        auto dropindicatorposition_cb = qundoview_dropindicatorposition_callback;
        if (dropindicatorposition_cb) {
            int callback_ret = dropindicatorposition_cb();
            return static_cast<VirtualQUndoView::DropIndicatorPosition>(callback_ret);
        }
        return QUndoView::dropIndicatorPosition();
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qundoview_setviewportmargins_isbase) {
            qundoview_setviewportmargins_isbase = false;
            QUndoView::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qundoview_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QUndoView::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qundoview_viewportmargins_isbase) {
            qundoview_viewportmargins_isbase = false;
            return QUndoView::viewportMargins();
        }
        auto viewportmargins_cb = qundoview_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QUndoView::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qundoview_drawframe_isbase) {
            qundoview_drawframe_isbase = false;
            QUndoView::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qundoview_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QUndoView::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qundoview_updatemicrofocus_isbase) {
            qundoview_updatemicrofocus_isbase = false;
            QUndoView::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qundoview_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QUndoView::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qundoview_create_isbase) {
            qundoview_create_isbase = false;
            QUndoView::create();
            return;
        }
        auto create_cb = qundoview_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QUndoView::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qundoview_destroy_isbase) {
            qundoview_destroy_isbase = false;
            QUndoView::destroy();
            return;
        }
        auto destroy_cb = qundoview_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QUndoView::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qundoview_focusnextchild_isbase) {
            qundoview_focusnextchild_isbase = false;
            return QUndoView::focusNextChild();
        }
        auto focusnextchild_cb = qundoview_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QUndoView::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qundoview_focuspreviouschild_isbase) {
            qundoview_focuspreviouschild_isbase = false;
            return QUndoView::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qundoview_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QUndoView::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qundoview_sender_isbase) {
            qundoview_sender_isbase = false;
            return QUndoView::sender();
        }
        auto sender_cb = qundoview_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QUndoView::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qundoview_sendersignalindex_isbase) {
            qundoview_sendersignalindex_isbase = false;
            return QUndoView::senderSignalIndex();
        }
        auto sendersignalindex_cb = qundoview_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QUndoView::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qundoview_receivers_isbase) {
            qundoview_receivers_isbase = false;
            return QUndoView::receivers(signal);
        }
        auto receivers_cb = qundoview_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qundoview_issignalconnected_isbase) {
            qundoview_issignalconnected_isbase = false;
            return QUndoView::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qundoview_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoView::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qundoview_getdecodedmetricf_isbase) {
            qundoview_getdecodedmetricf_isbase = false;
            return QUndoView::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qundoview_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QUndoView::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QUndoView_Event(QUndoView* self, QEvent* e);
    friend bool QUndoView_SuperEvent(QUndoView* self, QEvent* e);
    friend void QUndoView_ScrollContentsBy(QUndoView* self, int dx, int dy);
    friend void QUndoView_SuperScrollContentsBy(QUndoView* self, int dx, int dy);
    friend void QUndoView_DataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QUndoView_SuperDataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QUndoView_RowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_SuperRowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_RowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_SuperRowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_MouseMoveEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_SuperMouseMoveEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_MouseReleaseEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_SuperMouseReleaseEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_WheelEvent(QUndoView* self, QWheelEvent* e);
    friend void QUndoView_SuperWheelEvent(QUndoView* self, QWheelEvent* e);
    friend void QUndoView_TimerEvent(QUndoView* self, QTimerEvent* e);
    friend void QUndoView_SuperTimerEvent(QUndoView* self, QTimerEvent* e);
    friend void QUndoView_ResizeEvent(QUndoView* self, QResizeEvent* e);
    friend void QUndoView_SuperResizeEvent(QUndoView* self, QResizeEvent* e);
    friend void QUndoView_DragMoveEvent(QUndoView* self, QDragMoveEvent* e);
    friend void QUndoView_SuperDragMoveEvent(QUndoView* self, QDragMoveEvent* e);
    friend void QUndoView_DragLeaveEvent(QUndoView* self, QDragLeaveEvent* e);
    friend void QUndoView_SuperDragLeaveEvent(QUndoView* self, QDragLeaveEvent* e);
    friend void QUndoView_DropEvent(QUndoView* self, QDropEvent* e);
    friend void QUndoView_SuperDropEvent(QUndoView* self, QDropEvent* e);
    friend void QUndoView_StartDrag(QUndoView* self, int supportedActions);
    friend void QUndoView_SuperStartDrag(QUndoView* self, int supportedActions);
    friend void QUndoView_InitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option);
    friend void QUndoView_SuperInitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option);
    friend void QUndoView_PaintEvent(QUndoView* self, QPaintEvent* e);
    friend void QUndoView_SuperPaintEvent(QUndoView* self, QPaintEvent* e);
    friend int QUndoView_HorizontalOffset(const QUndoView* self);
    friend int QUndoView_SuperHorizontalOffset(const QUndoView* self);
    friend int QUndoView_VerticalOffset(const QUndoView* self);
    friend int QUndoView_SuperVerticalOffset(const QUndoView* self);
    friend QModelIndex* QUndoView_MoveCursor(QUndoView* self, int cursorAction, int modifiers);
    friend QModelIndex* QUndoView_SuperMoveCursor(QUndoView* self, int cursorAction, int modifiers);
    friend void QUndoView_SetSelection(QUndoView* self, const QRect* rect, int command);
    friend void QUndoView_SuperSetSelection(QUndoView* self, const QRect* rect, int command);
    friend QRegion* QUndoView_VisualRegionForSelection(const QUndoView* self, const QItemSelection* selection);
    friend QRegion* QUndoView_SuperVisualRegionForSelection(const QUndoView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QUndoView_SelectedIndexes(const QUndoView* self);
    friend libqt_list /* of QModelIndex* */ QUndoView_SuperSelectedIndexes(const QUndoView* self);
    friend void QUndoView_UpdateGeometries(QUndoView* self);
    friend void QUndoView_SuperUpdateGeometries(QUndoView* self);
    friend bool QUndoView_IsIndexHidden(const QUndoView* self, const QModelIndex* index);
    friend bool QUndoView_SuperIsIndexHidden(const QUndoView* self, const QModelIndex* index);
    friend void QUndoView_SelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QUndoView_SuperSelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QUndoView_CurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QUndoView_SuperCurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* QUndoView_ViewportSizeHint(const QUndoView* self);
    friend QSize* QUndoView_SuperViewportSizeHint(const QUndoView* self);
    friend void QUndoView_UpdateEditorData(QUndoView* self);
    friend void QUndoView_SuperUpdateEditorData(QUndoView* self);
    friend void QUndoView_UpdateEditorGeometries(QUndoView* self);
    friend void QUndoView_SuperUpdateEditorGeometries(QUndoView* self);
    friend void QUndoView_VerticalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_SuperVerticalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_HorizontalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_SuperHorizontalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_VerticalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_SuperVerticalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_HorizontalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_SuperHorizontalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_CloseEditor(QUndoView* self, QWidget* editor, int hint);
    friend void QUndoView_SuperCloseEditor(QUndoView* self, QWidget* editor, int hint);
    friend void QUndoView_CommitData(QUndoView* self, QWidget* editor);
    friend void QUndoView_SuperCommitData(QUndoView* self, QWidget* editor);
    friend void QUndoView_EditorDestroyed(QUndoView* self, QObject* editor);
    friend void QUndoView_SuperEditorDestroyed(QUndoView* self, QObject* editor);
    friend bool QUndoView_Edit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QUndoView_SuperEdit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QUndoView_SelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event);
    friend int QUndoView_SuperSelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event);
    friend bool QUndoView_FocusNextPrevChild(QUndoView* self, bool next);
    friend bool QUndoView_SuperFocusNextPrevChild(QUndoView* self, bool next);
    friend bool QUndoView_ViewportEvent(QUndoView* self, QEvent* event);
    friend bool QUndoView_SuperViewportEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_MousePressEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_SuperMousePressEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_MouseDoubleClickEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_SuperMouseDoubleClickEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_DragEnterEvent(QUndoView* self, QDragEnterEvent* event);
    friend void QUndoView_SuperDragEnterEvent(QUndoView* self, QDragEnterEvent* event);
    friend void QUndoView_FocusInEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_SuperFocusInEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_FocusOutEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_SuperFocusOutEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_KeyPressEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_SuperKeyPressEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_InputMethodEvent(QUndoView* self, QInputMethodEvent* event);
    friend void QUndoView_SuperInputMethodEvent(QUndoView* self, QInputMethodEvent* event);
    friend bool QUndoView_EventFilter(QUndoView* self, QObject* object, QEvent* event);
    friend bool QUndoView_SuperEventFilter(QUndoView* self, QObject* object, QEvent* event);
    friend void QUndoView_ContextMenuEvent(QUndoView* self, QContextMenuEvent* param1);
    friend void QUndoView_SuperContextMenuEvent(QUndoView* self, QContextMenuEvent* param1);
    friend void QUndoView_ChangeEvent(QUndoView* self, QEvent* param1);
    friend void QUndoView_SuperChangeEvent(QUndoView* self, QEvent* param1);
    friend void QUndoView_InitStyleOption(const QUndoView* self, QStyleOptionFrame* option);
    friend void QUndoView_SuperInitStyleOption(const QUndoView* self, QStyleOptionFrame* option);
    friend void QUndoView_KeyReleaseEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_SuperKeyReleaseEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_EnterEvent(QUndoView* self, QEnterEvent* event);
    friend void QUndoView_SuperEnterEvent(QUndoView* self, QEnterEvent* event);
    friend void QUndoView_LeaveEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_SuperLeaveEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_MoveEvent(QUndoView* self, QMoveEvent* event);
    friend void QUndoView_SuperMoveEvent(QUndoView* self, QMoveEvent* event);
    friend void QUndoView_CloseEvent(QUndoView* self, QCloseEvent* event);
    friend void QUndoView_SuperCloseEvent(QUndoView* self, QCloseEvent* event);
    friend void QUndoView_TabletEvent(QUndoView* self, QTabletEvent* event);
    friend void QUndoView_SuperTabletEvent(QUndoView* self, QTabletEvent* event);
    friend void QUndoView_ActionEvent(QUndoView* self, QActionEvent* event);
    friend void QUndoView_SuperActionEvent(QUndoView* self, QActionEvent* event);
    friend void QUndoView_ShowEvent(QUndoView* self, QShowEvent* event);
    friend void QUndoView_SuperShowEvent(QUndoView* self, QShowEvent* event);
    friend void QUndoView_HideEvent(QUndoView* self, QHideEvent* event);
    friend void QUndoView_SuperHideEvent(QUndoView* self, QHideEvent* event);
    friend bool QUndoView_NativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QUndoView_SuperNativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QUndoView_Metric(const QUndoView* self, int param1);
    friend int QUndoView_SuperMetric(const QUndoView* self, int param1);
    friend void QUndoView_InitPainter(const QUndoView* self, QPainter* painter);
    friend void QUndoView_SuperInitPainter(const QUndoView* self, QPainter* painter);
    friend QPaintDevice* QUndoView_Redirected(const QUndoView* self, QPoint* offset);
    friend QPaintDevice* QUndoView_SuperRedirected(const QUndoView* self, QPoint* offset);
    friend QPainter* QUndoView_SharedPainter(const QUndoView* self);
    friend QPainter* QUndoView_SuperSharedPainter(const QUndoView* self);
    friend void QUndoView_ChildEvent(QUndoView* self, QChildEvent* event);
    friend void QUndoView_SuperChildEvent(QUndoView* self, QChildEvent* event);
    friend void QUndoView_CustomEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_SuperCustomEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_ConnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_SuperConnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_DisconnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_SuperDisconnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_ResizeContents(QUndoView* self, int width, int height);
    friend void QUndoView_SuperResizeContents(QUndoView* self, int width, int height);
    friend QSize* QUndoView_ContentsSize(const QUndoView* self);
    friend QSize* QUndoView_SuperContentsSize(const QUndoView* self);
    friend QRect* QUndoView_RectForIndex(const QUndoView* self, const QModelIndex* index);
    friend QRect* QUndoView_SuperRectForIndex(const QUndoView* self, const QModelIndex* index);
    friend void QUndoView_SetPositionForIndex(QUndoView* self, const QPoint* position, const QModelIndex* index);
    friend void QUndoView_SuperSetPositionForIndex(QUndoView* self, const QPoint* position, const QModelIndex* index);
    friend int QUndoView_State(const QUndoView* self);
    friend int QUndoView_SuperState(const QUndoView* self);
    friend void QUndoView_SetState(QUndoView* self, int state);
    friend void QUndoView_SuperSetState(QUndoView* self, int state);
    friend void QUndoView_ScheduleDelayedItemsLayout(QUndoView* self);
    friend void QUndoView_SuperScheduleDelayedItemsLayout(QUndoView* self);
    friend void QUndoView_ExecuteDelayedItemsLayout(QUndoView* self);
    friend void QUndoView_SuperExecuteDelayedItemsLayout(QUndoView* self);
    friend void QUndoView_SetDirtyRegion(QUndoView* self, const QRegion* region);
    friend void QUndoView_SuperSetDirtyRegion(QUndoView* self, const QRegion* region);
    friend void QUndoView_ScrollDirtyRegion(QUndoView* self, int dx, int dy);
    friend void QUndoView_SuperScrollDirtyRegion(QUndoView* self, int dx, int dy);
    friend QPoint* QUndoView_DirtyRegionOffset(const QUndoView* self);
    friend QPoint* QUndoView_SuperDirtyRegionOffset(const QUndoView* self);
    friend void QUndoView_StartAutoScroll(QUndoView* self);
    friend void QUndoView_SuperStartAutoScroll(QUndoView* self);
    friend void QUndoView_StopAutoScroll(QUndoView* self);
    friend void QUndoView_SuperStopAutoScroll(QUndoView* self);
    friend void QUndoView_DoAutoScroll(QUndoView* self);
    friend void QUndoView_SuperDoAutoScroll(QUndoView* self);
    friend int QUndoView_DropIndicatorPosition(const QUndoView* self);
    friend int QUndoView_SuperDropIndicatorPosition(const QUndoView* self);
    friend void QUndoView_SetViewportMargins(QUndoView* self, int left, int top, int right, int bottom);
    friend void QUndoView_SuperSetViewportMargins(QUndoView* self, int left, int top, int right, int bottom);
    friend QMargins* QUndoView_ViewportMargins(const QUndoView* self);
    friend QMargins* QUndoView_SuperViewportMargins(const QUndoView* self);
    friend void QUndoView_DrawFrame(QUndoView* self, QPainter* param1);
    friend void QUndoView_SuperDrawFrame(QUndoView* self, QPainter* param1);
    friend void QUndoView_UpdateMicroFocus(QUndoView* self);
    friend void QUndoView_SuperUpdateMicroFocus(QUndoView* self);
    friend void QUndoView_Create(QUndoView* self);
    friend void QUndoView_SuperCreate(QUndoView* self);
    friend void QUndoView_Destroy(QUndoView* self);
    friend void QUndoView_SuperDestroy(QUndoView* self);
    friend bool QUndoView_FocusNextChild(QUndoView* self);
    friend bool QUndoView_SuperFocusNextChild(QUndoView* self);
    friend bool QUndoView_FocusPreviousChild(QUndoView* self);
    friend bool QUndoView_SuperFocusPreviousChild(QUndoView* self);
    friend QObject* QUndoView_Sender(const QUndoView* self);
    friend QObject* QUndoView_SuperSender(const QUndoView* self);
    friend int QUndoView_SenderSignalIndex(const QUndoView* self);
    friend int QUndoView_SuperSenderSignalIndex(const QUndoView* self);
    friend int QUndoView_Receivers(const QUndoView* self, const char* signal);
    friend int QUndoView_SuperReceivers(const QUndoView* self, const char* signal);
    friend bool QUndoView_IsSignalConnected(const QUndoView* self, const QMetaMethod* signal);
    friend bool QUndoView_SuperIsSignalConnected(const QUndoView* self, const QMetaMethod* signal);
    friend double QUndoView_GetDecodedMetricF(const QUndoView* self, int metricA, int metricB);
    friend double QUndoView_SuperGetDecodedMetricF(const QUndoView* self, int metricA, int metricB);
};

#endif
