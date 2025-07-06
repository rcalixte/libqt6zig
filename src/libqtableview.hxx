#pragma once
#ifndef SRCC_LIBVIRTUALQTABLEVIEW_H
#define SRCC_LIBVIRTUALQTABLEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTableView so that we can call protected methods
class VirtualQTableView final : public QTableView {

  public:
    // Virtual class boolean flag
    bool isVirtualQTableView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTableView_Metacall_Callback = int (*)(QTableView*, int, int, void**);
    using QTableView_SetModel_Callback = void (*)(QTableView*, QAbstractItemModel*);
    using QTableView_SetRootIndex_Callback = void (*)(QTableView*, QModelIndex*);
    using QTableView_SetSelectionModel_Callback = void (*)(QTableView*, QItemSelectionModel*);
    using QTableView_DoItemsLayout_Callback = void (*)();
    using QTableView_VisualRect_Callback = QRect* (*)(const QTableView*, QModelIndex*);
    using QTableView_ScrollTo_Callback = void (*)(QTableView*, QModelIndex*, int);
    using QTableView_IndexAt_Callback = QModelIndex* (*)(const QTableView*, QPoint*);
    using QTableView_ScrollContentsBy_Callback = void (*)(QTableView*, int, int);
    using QTableView_InitViewItemOption_Callback = void (*)(const QTableView*, QStyleOptionViewItem*);
    using QTableView_PaintEvent_Callback = void (*)(QTableView*, QPaintEvent*);
    using QTableView_TimerEvent_Callback = void (*)(QTableView*, QTimerEvent*);
    using QTableView_DropEvent_Callback = void (*)(QTableView*, QDropEvent*);
    using QTableView_HorizontalOffset_Callback = int (*)();
    using QTableView_VerticalOffset_Callback = int (*)();
    using QTableView_MoveCursor_Callback = QModelIndex* (*)(QTableView*, int, int);
    using QTableView_SetSelection_Callback = void (*)(QTableView*, QRect*, int);
    using QTableView_VisualRegionForSelection_Callback = QRegion* (*)(const QTableView*, QItemSelection*);
    using QTableView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QTableView_UpdateGeometries_Callback = void (*)();
    using QTableView_ViewportSizeHint_Callback = QSize* (*)();
    using QTableView_SizeHintForRow_Callback = int (*)(const QTableView*, int);
    using QTableView_SizeHintForColumn_Callback = int (*)(const QTableView*, int);
    using QTableView_VerticalScrollbarAction_Callback = void (*)(QTableView*, int);
    using QTableView_HorizontalScrollbarAction_Callback = void (*)(QTableView*, int);
    using QTableView_IsIndexHidden_Callback = bool (*)(const QTableView*, QModelIndex*);
    using QTableView_SelectionChanged_Callback = void (*)(QTableView*, QItemSelection*, QItemSelection*);
    using QTableView_CurrentChanged_Callback = void (*)(QTableView*, QModelIndex*, QModelIndex*);
    using QTableView_KeyboardSearch_Callback = void (*)(QTableView*, libqt_string);
    using QTableView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTableView*, QModelIndex*);
    using QTableView_InputMethodQuery_Callback = QVariant* (*)(const QTableView*, int);
    using QTableView_Reset_Callback = void (*)();
    using QTableView_SelectAll_Callback = void (*)();
    using QTableView_DataChanged_Callback = void (*)(QTableView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QTableView_RowsInserted_Callback = void (*)(QTableView*, QModelIndex*, int, int);
    using QTableView_RowsAboutToBeRemoved_Callback = void (*)(QTableView*, QModelIndex*, int, int);
    using QTableView_UpdateEditorData_Callback = void (*)();
    using QTableView_UpdateEditorGeometries_Callback = void (*)();
    using QTableView_VerticalScrollbarValueChanged_Callback = void (*)(QTableView*, int);
    using QTableView_HorizontalScrollbarValueChanged_Callback = void (*)(QTableView*, int);
    using QTableView_CloseEditor_Callback = void (*)(QTableView*, QWidget*, int);
    using QTableView_CommitData_Callback = void (*)(QTableView*, QWidget*);
    using QTableView_EditorDestroyed_Callback = void (*)(QTableView*, QObject*);
    using QTableView_Edit2_Callback = bool (*)(QTableView*, QModelIndex*, int, QEvent*);
    using QTableView_SelectionCommand_Callback = int (*)(const QTableView*, QModelIndex*, QEvent*);
    using QTableView_StartDrag_Callback = void (*)(QTableView*, int);
    using QTableView_FocusNextPrevChild_Callback = bool (*)(QTableView*, bool);
    using QTableView_Event_Callback = bool (*)(QTableView*, QEvent*);
    using QTableView_ViewportEvent_Callback = bool (*)(QTableView*, QEvent*);
    using QTableView_MousePressEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseMoveEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseReleaseEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseDoubleClickEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_DragEnterEvent_Callback = void (*)(QTableView*, QDragEnterEvent*);
    using QTableView_DragMoveEvent_Callback = void (*)(QTableView*, QDragMoveEvent*);
    using QTableView_DragLeaveEvent_Callback = void (*)(QTableView*, QDragLeaveEvent*);
    using QTableView_FocusInEvent_Callback = void (*)(QTableView*, QFocusEvent*);
    using QTableView_FocusOutEvent_Callback = void (*)(QTableView*, QFocusEvent*);
    using QTableView_KeyPressEvent_Callback = void (*)(QTableView*, QKeyEvent*);
    using QTableView_ResizeEvent_Callback = void (*)(QTableView*, QResizeEvent*);
    using QTableView_InputMethodEvent_Callback = void (*)(QTableView*, QInputMethodEvent*);
    using QTableView_EventFilter_Callback = bool (*)(QTableView*, QObject*, QEvent*);
    using QTableView_MinimumSizeHint_Callback = QSize* (*)();
    using QTableView_SizeHint_Callback = QSize* (*)();
    using QTableView_SetupViewport_Callback = void (*)(QTableView*, QWidget*);
    using QTableView_WheelEvent_Callback = void (*)(QTableView*, QWheelEvent*);
    using QTableView_ContextMenuEvent_Callback = void (*)(QTableView*, QContextMenuEvent*);
    using QTableView_ChangeEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_InitStyleOption_Callback = void (*)(const QTableView*, QStyleOptionFrame*);
    using QTableView_DevType_Callback = int (*)();
    using QTableView_SetVisible_Callback = void (*)(QTableView*, bool);
    using QTableView_HeightForWidth_Callback = int (*)(const QTableView*, int);
    using QTableView_HasHeightForWidth_Callback = bool (*)();
    using QTableView_PaintEngine_Callback = QPaintEngine* (*)();
    using QTableView_KeyReleaseEvent_Callback = void (*)(QTableView*, QKeyEvent*);
    using QTableView_EnterEvent_Callback = void (*)(QTableView*, QEnterEvent*);
    using QTableView_LeaveEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_MoveEvent_Callback = void (*)(QTableView*, QMoveEvent*);
    using QTableView_CloseEvent_Callback = void (*)(QTableView*, QCloseEvent*);
    using QTableView_TabletEvent_Callback = void (*)(QTableView*, QTabletEvent*);
    using QTableView_ActionEvent_Callback = void (*)(QTableView*, QActionEvent*);
    using QTableView_ShowEvent_Callback = void (*)(QTableView*, QShowEvent*);
    using QTableView_HideEvent_Callback = void (*)(QTableView*, QHideEvent*);
    using QTableView_NativeEvent_Callback = bool (*)(QTableView*, libqt_string, void*, intptr_t*);
    using QTableView_Metric_Callback = int (*)(const QTableView*, int);
    using QTableView_InitPainter_Callback = void (*)(const QTableView*, QPainter*);
    using QTableView_Redirected_Callback = QPaintDevice* (*)(const QTableView*, QPoint*);
    using QTableView_SharedPainter_Callback = QPainter* (*)();
    using QTableView_ChildEvent_Callback = void (*)(QTableView*, QChildEvent*);
    using QTableView_CustomEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_ConnectNotify_Callback = void (*)(QTableView*, QMetaMethod*);
    using QTableView_DisconnectNotify_Callback = void (*)(QTableView*, QMetaMethod*);
    using QTableView_RowMoved_Callback = void (*)(QTableView*, int, int, int);
    using QTableView_ColumnMoved_Callback = void (*)(QTableView*, int, int, int);
    using QTableView_RowResized_Callback = void (*)(QTableView*, int, int, int);
    using QTableView_ColumnResized_Callback = void (*)(QTableView*, int, int, int);
    using QTableView_RowCountChanged_Callback = void (*)(QTableView*, int, int);
    using QTableView_ColumnCountChanged_Callback = void (*)(QTableView*, int, int);
    using QTableView_State_Callback = int (*)();
    using QTableView_SetState_Callback = void (*)(QTableView*, int);
    using QTableView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QTableView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QTableView_SetDirtyRegion_Callback = void (*)(QTableView*, QRegion*);
    using QTableView_ScrollDirtyRegion_Callback = void (*)(QTableView*, int, int);
    using QTableView_DirtyRegionOffset_Callback = QPoint* (*)();
    using QTableView_StartAutoScroll_Callback = void (*)();
    using QTableView_StopAutoScroll_Callback = void (*)();
    using QTableView_DoAutoScroll_Callback = void (*)();
    using QTableView_DropIndicatorPosition_Callback = int (*)();
    using QTableView_SetViewportMargins_Callback = void (*)(QTableView*, int, int, int, int);
    using QTableView_ViewportMargins_Callback = QMargins* (*)();
    using QTableView_DrawFrame_Callback = void (*)(QTableView*, QPainter*);
    using QTableView_UpdateMicroFocus_Callback = void (*)();
    using QTableView_Create_Callback = void (*)();
    using QTableView_Destroy_Callback = void (*)();
    using QTableView_FocusNextChild_Callback = bool (*)();
    using QTableView_FocusPreviousChild_Callback = bool (*)();
    using QTableView_Sender_Callback = QObject* (*)();
    using QTableView_SenderSignalIndex_Callback = int (*)();
    using QTableView_Receivers_Callback = int (*)(const QTableView*, const char*);
    using QTableView_IsSignalConnected_Callback = bool (*)(const QTableView*, QMetaMethod*);
    using QTableView_GetDecodedMetricF_Callback = double (*)(const QTableView*, int, int);

  protected:
    // Instance callback storage
    QTableView_Metacall_Callback qtableview_metacall_callback = nullptr;
    QTableView_SetModel_Callback qtableview_setmodel_callback = nullptr;
    QTableView_SetRootIndex_Callback qtableview_setrootindex_callback = nullptr;
    QTableView_SetSelectionModel_Callback qtableview_setselectionmodel_callback = nullptr;
    QTableView_DoItemsLayout_Callback qtableview_doitemslayout_callback = nullptr;
    QTableView_VisualRect_Callback qtableview_visualrect_callback = nullptr;
    QTableView_ScrollTo_Callback qtableview_scrollto_callback = nullptr;
    QTableView_IndexAt_Callback qtableview_indexat_callback = nullptr;
    QTableView_ScrollContentsBy_Callback qtableview_scrollcontentsby_callback = nullptr;
    QTableView_InitViewItemOption_Callback qtableview_initviewitemoption_callback = nullptr;
    QTableView_PaintEvent_Callback qtableview_paintevent_callback = nullptr;
    QTableView_TimerEvent_Callback qtableview_timerevent_callback = nullptr;
    QTableView_DropEvent_Callback qtableview_dropevent_callback = nullptr;
    QTableView_HorizontalOffset_Callback qtableview_horizontaloffset_callback = nullptr;
    QTableView_VerticalOffset_Callback qtableview_verticaloffset_callback = nullptr;
    QTableView_MoveCursor_Callback qtableview_movecursor_callback = nullptr;
    QTableView_SetSelection_Callback qtableview_setselection_callback = nullptr;
    QTableView_VisualRegionForSelection_Callback qtableview_visualregionforselection_callback = nullptr;
    QTableView_SelectedIndexes_Callback qtableview_selectedindexes_callback = nullptr;
    QTableView_UpdateGeometries_Callback qtableview_updategeometries_callback = nullptr;
    QTableView_ViewportSizeHint_Callback qtableview_viewportsizehint_callback = nullptr;
    QTableView_SizeHintForRow_Callback qtableview_sizehintforrow_callback = nullptr;
    QTableView_SizeHintForColumn_Callback qtableview_sizehintforcolumn_callback = nullptr;
    QTableView_VerticalScrollbarAction_Callback qtableview_verticalscrollbaraction_callback = nullptr;
    QTableView_HorizontalScrollbarAction_Callback qtableview_horizontalscrollbaraction_callback = nullptr;
    QTableView_IsIndexHidden_Callback qtableview_isindexhidden_callback = nullptr;
    QTableView_SelectionChanged_Callback qtableview_selectionchanged_callback = nullptr;
    QTableView_CurrentChanged_Callback qtableview_currentchanged_callback = nullptr;
    QTableView_KeyboardSearch_Callback qtableview_keyboardsearch_callback = nullptr;
    QTableView_ItemDelegateForIndex_Callback qtableview_itemdelegateforindex_callback = nullptr;
    QTableView_InputMethodQuery_Callback qtableview_inputmethodquery_callback = nullptr;
    QTableView_Reset_Callback qtableview_reset_callback = nullptr;
    QTableView_SelectAll_Callback qtableview_selectall_callback = nullptr;
    QTableView_DataChanged_Callback qtableview_datachanged_callback = nullptr;
    QTableView_RowsInserted_Callback qtableview_rowsinserted_callback = nullptr;
    QTableView_RowsAboutToBeRemoved_Callback qtableview_rowsabouttoberemoved_callback = nullptr;
    QTableView_UpdateEditorData_Callback qtableview_updateeditordata_callback = nullptr;
    QTableView_UpdateEditorGeometries_Callback qtableview_updateeditorgeometries_callback = nullptr;
    QTableView_VerticalScrollbarValueChanged_Callback qtableview_verticalscrollbarvaluechanged_callback = nullptr;
    QTableView_HorizontalScrollbarValueChanged_Callback qtableview_horizontalscrollbarvaluechanged_callback = nullptr;
    QTableView_CloseEditor_Callback qtableview_closeeditor_callback = nullptr;
    QTableView_CommitData_Callback qtableview_commitdata_callback = nullptr;
    QTableView_EditorDestroyed_Callback qtableview_editordestroyed_callback = nullptr;
    QTableView_Edit2_Callback qtableview_edit2_callback = nullptr;
    QTableView_SelectionCommand_Callback qtableview_selectioncommand_callback = nullptr;
    QTableView_StartDrag_Callback qtableview_startdrag_callback = nullptr;
    QTableView_FocusNextPrevChild_Callback qtableview_focusnextprevchild_callback = nullptr;
    QTableView_Event_Callback qtableview_event_callback = nullptr;
    QTableView_ViewportEvent_Callback qtableview_viewportevent_callback = nullptr;
    QTableView_MousePressEvent_Callback qtableview_mousepressevent_callback = nullptr;
    QTableView_MouseMoveEvent_Callback qtableview_mousemoveevent_callback = nullptr;
    QTableView_MouseReleaseEvent_Callback qtableview_mousereleaseevent_callback = nullptr;
    QTableView_MouseDoubleClickEvent_Callback qtableview_mousedoubleclickevent_callback = nullptr;
    QTableView_DragEnterEvent_Callback qtableview_dragenterevent_callback = nullptr;
    QTableView_DragMoveEvent_Callback qtableview_dragmoveevent_callback = nullptr;
    QTableView_DragLeaveEvent_Callback qtableview_dragleaveevent_callback = nullptr;
    QTableView_FocusInEvent_Callback qtableview_focusinevent_callback = nullptr;
    QTableView_FocusOutEvent_Callback qtableview_focusoutevent_callback = nullptr;
    QTableView_KeyPressEvent_Callback qtableview_keypressevent_callback = nullptr;
    QTableView_ResizeEvent_Callback qtableview_resizeevent_callback = nullptr;
    QTableView_InputMethodEvent_Callback qtableview_inputmethodevent_callback = nullptr;
    QTableView_EventFilter_Callback qtableview_eventfilter_callback = nullptr;
    QTableView_MinimumSizeHint_Callback qtableview_minimumsizehint_callback = nullptr;
    QTableView_SizeHint_Callback qtableview_sizehint_callback = nullptr;
    QTableView_SetupViewport_Callback qtableview_setupviewport_callback = nullptr;
    QTableView_WheelEvent_Callback qtableview_wheelevent_callback = nullptr;
    QTableView_ContextMenuEvent_Callback qtableview_contextmenuevent_callback = nullptr;
    QTableView_ChangeEvent_Callback qtableview_changeevent_callback = nullptr;
    QTableView_InitStyleOption_Callback qtableview_initstyleoption_callback = nullptr;
    QTableView_DevType_Callback qtableview_devtype_callback = nullptr;
    QTableView_SetVisible_Callback qtableview_setvisible_callback = nullptr;
    QTableView_HeightForWidth_Callback qtableview_heightforwidth_callback = nullptr;
    QTableView_HasHeightForWidth_Callback qtableview_hasheightforwidth_callback = nullptr;
    QTableView_PaintEngine_Callback qtableview_paintengine_callback = nullptr;
    QTableView_KeyReleaseEvent_Callback qtableview_keyreleaseevent_callback = nullptr;
    QTableView_EnterEvent_Callback qtableview_enterevent_callback = nullptr;
    QTableView_LeaveEvent_Callback qtableview_leaveevent_callback = nullptr;
    QTableView_MoveEvent_Callback qtableview_moveevent_callback = nullptr;
    QTableView_CloseEvent_Callback qtableview_closeevent_callback = nullptr;
    QTableView_TabletEvent_Callback qtableview_tabletevent_callback = nullptr;
    QTableView_ActionEvent_Callback qtableview_actionevent_callback = nullptr;
    QTableView_ShowEvent_Callback qtableview_showevent_callback = nullptr;
    QTableView_HideEvent_Callback qtableview_hideevent_callback = nullptr;
    QTableView_NativeEvent_Callback qtableview_nativeevent_callback = nullptr;
    QTableView_Metric_Callback qtableview_metric_callback = nullptr;
    QTableView_InitPainter_Callback qtableview_initpainter_callback = nullptr;
    QTableView_Redirected_Callback qtableview_redirected_callback = nullptr;
    QTableView_SharedPainter_Callback qtableview_sharedpainter_callback = nullptr;
    QTableView_ChildEvent_Callback qtableview_childevent_callback = nullptr;
    QTableView_CustomEvent_Callback qtableview_customevent_callback = nullptr;
    QTableView_ConnectNotify_Callback qtableview_connectnotify_callback = nullptr;
    QTableView_DisconnectNotify_Callback qtableview_disconnectnotify_callback = nullptr;
    QTableView_RowMoved_Callback qtableview_rowmoved_callback = nullptr;
    QTableView_ColumnMoved_Callback qtableview_columnmoved_callback = nullptr;
    QTableView_RowResized_Callback qtableview_rowresized_callback = nullptr;
    QTableView_ColumnResized_Callback qtableview_columnresized_callback = nullptr;
    QTableView_RowCountChanged_Callback qtableview_rowcountchanged_callback = nullptr;
    QTableView_ColumnCountChanged_Callback qtableview_columncountchanged_callback = nullptr;
    QTableView_State_Callback qtableview_state_callback = nullptr;
    QTableView_SetState_Callback qtableview_setstate_callback = nullptr;
    QTableView_ScheduleDelayedItemsLayout_Callback qtableview_scheduledelayeditemslayout_callback = nullptr;
    QTableView_ExecuteDelayedItemsLayout_Callback qtableview_executedelayeditemslayout_callback = nullptr;
    QTableView_SetDirtyRegion_Callback qtableview_setdirtyregion_callback = nullptr;
    QTableView_ScrollDirtyRegion_Callback qtableview_scrolldirtyregion_callback = nullptr;
    QTableView_DirtyRegionOffset_Callback qtableview_dirtyregionoffset_callback = nullptr;
    QTableView_StartAutoScroll_Callback qtableview_startautoscroll_callback = nullptr;
    QTableView_StopAutoScroll_Callback qtableview_stopautoscroll_callback = nullptr;
    QTableView_DoAutoScroll_Callback qtableview_doautoscroll_callback = nullptr;
    QTableView_DropIndicatorPosition_Callback qtableview_dropindicatorposition_callback = nullptr;
    QTableView_SetViewportMargins_Callback qtableview_setviewportmargins_callback = nullptr;
    QTableView_ViewportMargins_Callback qtableview_viewportmargins_callback = nullptr;
    QTableView_DrawFrame_Callback qtableview_drawframe_callback = nullptr;
    QTableView_UpdateMicroFocus_Callback qtableview_updatemicrofocus_callback = nullptr;
    QTableView_Create_Callback qtableview_create_callback = nullptr;
    QTableView_Destroy_Callback qtableview_destroy_callback = nullptr;
    QTableView_FocusNextChild_Callback qtableview_focusnextchild_callback = nullptr;
    QTableView_FocusPreviousChild_Callback qtableview_focuspreviouschild_callback = nullptr;
    QTableView_Sender_Callback qtableview_sender_callback = nullptr;
    QTableView_SenderSignalIndex_Callback qtableview_sendersignalindex_callback = nullptr;
    QTableView_Receivers_Callback qtableview_receivers_callback = nullptr;
    QTableView_IsSignalConnected_Callback qtableview_issignalconnected_callback = nullptr;
    QTableView_GetDecodedMetricF_Callback qtableview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qtableview_metacall_isbase = false;
    mutable bool qtableview_setmodel_isbase = false;
    mutable bool qtableview_setrootindex_isbase = false;
    mutable bool qtableview_setselectionmodel_isbase = false;
    mutable bool qtableview_doitemslayout_isbase = false;
    mutable bool qtableview_visualrect_isbase = false;
    mutable bool qtableview_scrollto_isbase = false;
    mutable bool qtableview_indexat_isbase = false;
    mutable bool qtableview_scrollcontentsby_isbase = false;
    mutable bool qtableview_initviewitemoption_isbase = false;
    mutable bool qtableview_paintevent_isbase = false;
    mutable bool qtableview_timerevent_isbase = false;
    mutable bool qtableview_dropevent_isbase = false;
    mutable bool qtableview_horizontaloffset_isbase = false;
    mutable bool qtableview_verticaloffset_isbase = false;
    mutable bool qtableview_movecursor_isbase = false;
    mutable bool qtableview_setselection_isbase = false;
    mutable bool qtableview_visualregionforselection_isbase = false;
    mutable bool qtableview_selectedindexes_isbase = false;
    mutable bool qtableview_updategeometries_isbase = false;
    mutable bool qtableview_viewportsizehint_isbase = false;
    mutable bool qtableview_sizehintforrow_isbase = false;
    mutable bool qtableview_sizehintforcolumn_isbase = false;
    mutable bool qtableview_verticalscrollbaraction_isbase = false;
    mutable bool qtableview_horizontalscrollbaraction_isbase = false;
    mutable bool qtableview_isindexhidden_isbase = false;
    mutable bool qtableview_selectionchanged_isbase = false;
    mutable bool qtableview_currentchanged_isbase = false;
    mutable bool qtableview_keyboardsearch_isbase = false;
    mutable bool qtableview_itemdelegateforindex_isbase = false;
    mutable bool qtableview_inputmethodquery_isbase = false;
    mutable bool qtableview_reset_isbase = false;
    mutable bool qtableview_selectall_isbase = false;
    mutable bool qtableview_datachanged_isbase = false;
    mutable bool qtableview_rowsinserted_isbase = false;
    mutable bool qtableview_rowsabouttoberemoved_isbase = false;
    mutable bool qtableview_updateeditordata_isbase = false;
    mutable bool qtableview_updateeditorgeometries_isbase = false;
    mutable bool qtableview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qtableview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qtableview_closeeditor_isbase = false;
    mutable bool qtableview_commitdata_isbase = false;
    mutable bool qtableview_editordestroyed_isbase = false;
    mutable bool qtableview_edit2_isbase = false;
    mutable bool qtableview_selectioncommand_isbase = false;
    mutable bool qtableview_startdrag_isbase = false;
    mutable bool qtableview_focusnextprevchild_isbase = false;
    mutable bool qtableview_event_isbase = false;
    mutable bool qtableview_viewportevent_isbase = false;
    mutable bool qtableview_mousepressevent_isbase = false;
    mutable bool qtableview_mousemoveevent_isbase = false;
    mutable bool qtableview_mousereleaseevent_isbase = false;
    mutable bool qtableview_mousedoubleclickevent_isbase = false;
    mutable bool qtableview_dragenterevent_isbase = false;
    mutable bool qtableview_dragmoveevent_isbase = false;
    mutable bool qtableview_dragleaveevent_isbase = false;
    mutable bool qtableview_focusinevent_isbase = false;
    mutable bool qtableview_focusoutevent_isbase = false;
    mutable bool qtableview_keypressevent_isbase = false;
    mutable bool qtableview_resizeevent_isbase = false;
    mutable bool qtableview_inputmethodevent_isbase = false;
    mutable bool qtableview_eventfilter_isbase = false;
    mutable bool qtableview_minimumsizehint_isbase = false;
    mutable bool qtableview_sizehint_isbase = false;
    mutable bool qtableview_setupviewport_isbase = false;
    mutable bool qtableview_wheelevent_isbase = false;
    mutable bool qtableview_contextmenuevent_isbase = false;
    mutable bool qtableview_changeevent_isbase = false;
    mutable bool qtableview_initstyleoption_isbase = false;
    mutable bool qtableview_devtype_isbase = false;
    mutable bool qtableview_setvisible_isbase = false;
    mutable bool qtableview_heightforwidth_isbase = false;
    mutable bool qtableview_hasheightforwidth_isbase = false;
    mutable bool qtableview_paintengine_isbase = false;
    mutable bool qtableview_keyreleaseevent_isbase = false;
    mutable bool qtableview_enterevent_isbase = false;
    mutable bool qtableview_leaveevent_isbase = false;
    mutable bool qtableview_moveevent_isbase = false;
    mutable bool qtableview_closeevent_isbase = false;
    mutable bool qtableview_tabletevent_isbase = false;
    mutable bool qtableview_actionevent_isbase = false;
    mutable bool qtableview_showevent_isbase = false;
    mutable bool qtableview_hideevent_isbase = false;
    mutable bool qtableview_nativeevent_isbase = false;
    mutable bool qtableview_metric_isbase = false;
    mutable bool qtableview_initpainter_isbase = false;
    mutable bool qtableview_redirected_isbase = false;
    mutable bool qtableview_sharedpainter_isbase = false;
    mutable bool qtableview_childevent_isbase = false;
    mutable bool qtableview_customevent_isbase = false;
    mutable bool qtableview_connectnotify_isbase = false;
    mutable bool qtableview_disconnectnotify_isbase = false;
    mutable bool qtableview_rowmoved_isbase = false;
    mutable bool qtableview_columnmoved_isbase = false;
    mutable bool qtableview_rowresized_isbase = false;
    mutable bool qtableview_columnresized_isbase = false;
    mutable bool qtableview_rowcountchanged_isbase = false;
    mutable bool qtableview_columncountchanged_isbase = false;
    mutable bool qtableview_state_isbase = false;
    mutable bool qtableview_setstate_isbase = false;
    mutable bool qtableview_scheduledelayeditemslayout_isbase = false;
    mutable bool qtableview_executedelayeditemslayout_isbase = false;
    mutable bool qtableview_setdirtyregion_isbase = false;
    mutable bool qtableview_scrolldirtyregion_isbase = false;
    mutable bool qtableview_dirtyregionoffset_isbase = false;
    mutable bool qtableview_startautoscroll_isbase = false;
    mutable bool qtableview_stopautoscroll_isbase = false;
    mutable bool qtableview_doautoscroll_isbase = false;
    mutable bool qtableview_dropindicatorposition_isbase = false;
    mutable bool qtableview_setviewportmargins_isbase = false;
    mutable bool qtableview_viewportmargins_isbase = false;
    mutable bool qtableview_drawframe_isbase = false;
    mutable bool qtableview_updatemicrofocus_isbase = false;
    mutable bool qtableview_create_isbase = false;
    mutable bool qtableview_destroy_isbase = false;
    mutable bool qtableview_focusnextchild_isbase = false;
    mutable bool qtableview_focuspreviouschild_isbase = false;
    mutable bool qtableview_sender_isbase = false;
    mutable bool qtableview_sendersignalindex_isbase = false;
    mutable bool qtableview_receivers_isbase = false;
    mutable bool qtableview_issignalconnected_isbase = false;
    mutable bool qtableview_getdecodedmetricf_isbase = false;

  public:
    VirtualQTableView(QWidget* parent) : QTableView(parent) {};
    VirtualQTableView() : QTableView() {};

    ~VirtualQTableView() {
        qtableview_metacall_callback = nullptr;
        qtableview_setmodel_callback = nullptr;
        qtableview_setrootindex_callback = nullptr;
        qtableview_setselectionmodel_callback = nullptr;
        qtableview_doitemslayout_callback = nullptr;
        qtableview_visualrect_callback = nullptr;
        qtableview_scrollto_callback = nullptr;
        qtableview_indexat_callback = nullptr;
        qtableview_scrollcontentsby_callback = nullptr;
        qtableview_initviewitemoption_callback = nullptr;
        qtableview_paintevent_callback = nullptr;
        qtableview_timerevent_callback = nullptr;
        qtableview_dropevent_callback = nullptr;
        qtableview_horizontaloffset_callback = nullptr;
        qtableview_verticaloffset_callback = nullptr;
        qtableview_movecursor_callback = nullptr;
        qtableview_setselection_callback = nullptr;
        qtableview_visualregionforselection_callback = nullptr;
        qtableview_selectedindexes_callback = nullptr;
        qtableview_updategeometries_callback = nullptr;
        qtableview_viewportsizehint_callback = nullptr;
        qtableview_sizehintforrow_callback = nullptr;
        qtableview_sizehintforcolumn_callback = nullptr;
        qtableview_verticalscrollbaraction_callback = nullptr;
        qtableview_horizontalscrollbaraction_callback = nullptr;
        qtableview_isindexhidden_callback = nullptr;
        qtableview_selectionchanged_callback = nullptr;
        qtableview_currentchanged_callback = nullptr;
        qtableview_keyboardsearch_callback = nullptr;
        qtableview_itemdelegateforindex_callback = nullptr;
        qtableview_inputmethodquery_callback = nullptr;
        qtableview_reset_callback = nullptr;
        qtableview_selectall_callback = nullptr;
        qtableview_datachanged_callback = nullptr;
        qtableview_rowsinserted_callback = nullptr;
        qtableview_rowsabouttoberemoved_callback = nullptr;
        qtableview_updateeditordata_callback = nullptr;
        qtableview_updateeditorgeometries_callback = nullptr;
        qtableview_verticalscrollbarvaluechanged_callback = nullptr;
        qtableview_horizontalscrollbarvaluechanged_callback = nullptr;
        qtableview_closeeditor_callback = nullptr;
        qtableview_commitdata_callback = nullptr;
        qtableview_editordestroyed_callback = nullptr;
        qtableview_edit2_callback = nullptr;
        qtableview_selectioncommand_callback = nullptr;
        qtableview_startdrag_callback = nullptr;
        qtableview_focusnextprevchild_callback = nullptr;
        qtableview_event_callback = nullptr;
        qtableview_viewportevent_callback = nullptr;
        qtableview_mousepressevent_callback = nullptr;
        qtableview_mousemoveevent_callback = nullptr;
        qtableview_mousereleaseevent_callback = nullptr;
        qtableview_mousedoubleclickevent_callback = nullptr;
        qtableview_dragenterevent_callback = nullptr;
        qtableview_dragmoveevent_callback = nullptr;
        qtableview_dragleaveevent_callback = nullptr;
        qtableview_focusinevent_callback = nullptr;
        qtableview_focusoutevent_callback = nullptr;
        qtableview_keypressevent_callback = nullptr;
        qtableview_resizeevent_callback = nullptr;
        qtableview_inputmethodevent_callback = nullptr;
        qtableview_eventfilter_callback = nullptr;
        qtableview_minimumsizehint_callback = nullptr;
        qtableview_sizehint_callback = nullptr;
        qtableview_setupviewport_callback = nullptr;
        qtableview_wheelevent_callback = nullptr;
        qtableview_contextmenuevent_callback = nullptr;
        qtableview_changeevent_callback = nullptr;
        qtableview_initstyleoption_callback = nullptr;
        qtableview_devtype_callback = nullptr;
        qtableview_setvisible_callback = nullptr;
        qtableview_heightforwidth_callback = nullptr;
        qtableview_hasheightforwidth_callback = nullptr;
        qtableview_paintengine_callback = nullptr;
        qtableview_keyreleaseevent_callback = nullptr;
        qtableview_enterevent_callback = nullptr;
        qtableview_leaveevent_callback = nullptr;
        qtableview_moveevent_callback = nullptr;
        qtableview_closeevent_callback = nullptr;
        qtableview_tabletevent_callback = nullptr;
        qtableview_actionevent_callback = nullptr;
        qtableview_showevent_callback = nullptr;
        qtableview_hideevent_callback = nullptr;
        qtableview_nativeevent_callback = nullptr;
        qtableview_metric_callback = nullptr;
        qtableview_initpainter_callback = nullptr;
        qtableview_redirected_callback = nullptr;
        qtableview_sharedpainter_callback = nullptr;
        qtableview_childevent_callback = nullptr;
        qtableview_customevent_callback = nullptr;
        qtableview_connectnotify_callback = nullptr;
        qtableview_disconnectnotify_callback = nullptr;
        qtableview_rowmoved_callback = nullptr;
        qtableview_columnmoved_callback = nullptr;
        qtableview_rowresized_callback = nullptr;
        qtableview_columnresized_callback = nullptr;
        qtableview_rowcountchanged_callback = nullptr;
        qtableview_columncountchanged_callback = nullptr;
        qtableview_state_callback = nullptr;
        qtableview_setstate_callback = nullptr;
        qtableview_scheduledelayeditemslayout_callback = nullptr;
        qtableview_executedelayeditemslayout_callback = nullptr;
        qtableview_setdirtyregion_callback = nullptr;
        qtableview_scrolldirtyregion_callback = nullptr;
        qtableview_dirtyregionoffset_callback = nullptr;
        qtableview_startautoscroll_callback = nullptr;
        qtableview_stopautoscroll_callback = nullptr;
        qtableview_doautoscroll_callback = nullptr;
        qtableview_dropindicatorposition_callback = nullptr;
        qtableview_setviewportmargins_callback = nullptr;
        qtableview_viewportmargins_callback = nullptr;
        qtableview_drawframe_callback = nullptr;
        qtableview_updatemicrofocus_callback = nullptr;
        qtableview_create_callback = nullptr;
        qtableview_destroy_callback = nullptr;
        qtableview_focusnextchild_callback = nullptr;
        qtableview_focuspreviouschild_callback = nullptr;
        qtableview_sender_callback = nullptr;
        qtableview_sendersignalindex_callback = nullptr;
        qtableview_receivers_callback = nullptr;
        qtableview_issignalconnected_callback = nullptr;
        qtableview_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQTableView_Metacall_Callback(QTableView_Metacall_Callback cb) { qtableview_metacall_callback = cb; }
    inline void setQTableView_SetModel_Callback(QTableView_SetModel_Callback cb) { qtableview_setmodel_callback = cb; }
    inline void setQTableView_SetRootIndex_Callback(QTableView_SetRootIndex_Callback cb) { qtableview_setrootindex_callback = cb; }
    inline void setQTableView_SetSelectionModel_Callback(QTableView_SetSelectionModel_Callback cb) { qtableview_setselectionmodel_callback = cb; }
    inline void setQTableView_DoItemsLayout_Callback(QTableView_DoItemsLayout_Callback cb) { qtableview_doitemslayout_callback = cb; }
    inline void setQTableView_VisualRect_Callback(QTableView_VisualRect_Callback cb) { qtableview_visualrect_callback = cb; }
    inline void setQTableView_ScrollTo_Callback(QTableView_ScrollTo_Callback cb) { qtableview_scrollto_callback = cb; }
    inline void setQTableView_IndexAt_Callback(QTableView_IndexAt_Callback cb) { qtableview_indexat_callback = cb; }
    inline void setQTableView_ScrollContentsBy_Callback(QTableView_ScrollContentsBy_Callback cb) { qtableview_scrollcontentsby_callback = cb; }
    inline void setQTableView_InitViewItemOption_Callback(QTableView_InitViewItemOption_Callback cb) { qtableview_initviewitemoption_callback = cb; }
    inline void setQTableView_PaintEvent_Callback(QTableView_PaintEvent_Callback cb) { qtableview_paintevent_callback = cb; }
    inline void setQTableView_TimerEvent_Callback(QTableView_TimerEvent_Callback cb) { qtableview_timerevent_callback = cb; }
    inline void setQTableView_DropEvent_Callback(QTableView_DropEvent_Callback cb) { qtableview_dropevent_callback = cb; }
    inline void setQTableView_HorizontalOffset_Callback(QTableView_HorizontalOffset_Callback cb) { qtableview_horizontaloffset_callback = cb; }
    inline void setQTableView_VerticalOffset_Callback(QTableView_VerticalOffset_Callback cb) { qtableview_verticaloffset_callback = cb; }
    inline void setQTableView_MoveCursor_Callback(QTableView_MoveCursor_Callback cb) { qtableview_movecursor_callback = cb; }
    inline void setQTableView_SetSelection_Callback(QTableView_SetSelection_Callback cb) { qtableview_setselection_callback = cb; }
    inline void setQTableView_VisualRegionForSelection_Callback(QTableView_VisualRegionForSelection_Callback cb) { qtableview_visualregionforselection_callback = cb; }
    inline void setQTableView_SelectedIndexes_Callback(QTableView_SelectedIndexes_Callback cb) { qtableview_selectedindexes_callback = cb; }
    inline void setQTableView_UpdateGeometries_Callback(QTableView_UpdateGeometries_Callback cb) { qtableview_updategeometries_callback = cb; }
    inline void setQTableView_ViewportSizeHint_Callback(QTableView_ViewportSizeHint_Callback cb) { qtableview_viewportsizehint_callback = cb; }
    inline void setQTableView_SizeHintForRow_Callback(QTableView_SizeHintForRow_Callback cb) { qtableview_sizehintforrow_callback = cb; }
    inline void setQTableView_SizeHintForColumn_Callback(QTableView_SizeHintForColumn_Callback cb) { qtableview_sizehintforcolumn_callback = cb; }
    inline void setQTableView_VerticalScrollbarAction_Callback(QTableView_VerticalScrollbarAction_Callback cb) { qtableview_verticalscrollbaraction_callback = cb; }
    inline void setQTableView_HorizontalScrollbarAction_Callback(QTableView_HorizontalScrollbarAction_Callback cb) { qtableview_horizontalscrollbaraction_callback = cb; }
    inline void setQTableView_IsIndexHidden_Callback(QTableView_IsIndexHidden_Callback cb) { qtableview_isindexhidden_callback = cb; }
    inline void setQTableView_SelectionChanged_Callback(QTableView_SelectionChanged_Callback cb) { qtableview_selectionchanged_callback = cb; }
    inline void setQTableView_CurrentChanged_Callback(QTableView_CurrentChanged_Callback cb) { qtableview_currentchanged_callback = cb; }
    inline void setQTableView_KeyboardSearch_Callback(QTableView_KeyboardSearch_Callback cb) { qtableview_keyboardsearch_callback = cb; }
    inline void setQTableView_ItemDelegateForIndex_Callback(QTableView_ItemDelegateForIndex_Callback cb) { qtableview_itemdelegateforindex_callback = cb; }
    inline void setQTableView_InputMethodQuery_Callback(QTableView_InputMethodQuery_Callback cb) { qtableview_inputmethodquery_callback = cb; }
    inline void setQTableView_Reset_Callback(QTableView_Reset_Callback cb) { qtableview_reset_callback = cb; }
    inline void setQTableView_SelectAll_Callback(QTableView_SelectAll_Callback cb) { qtableview_selectall_callback = cb; }
    inline void setQTableView_DataChanged_Callback(QTableView_DataChanged_Callback cb) { qtableview_datachanged_callback = cb; }
    inline void setQTableView_RowsInserted_Callback(QTableView_RowsInserted_Callback cb) { qtableview_rowsinserted_callback = cb; }
    inline void setQTableView_RowsAboutToBeRemoved_Callback(QTableView_RowsAboutToBeRemoved_Callback cb) { qtableview_rowsabouttoberemoved_callback = cb; }
    inline void setQTableView_UpdateEditorData_Callback(QTableView_UpdateEditorData_Callback cb) { qtableview_updateeditordata_callback = cb; }
    inline void setQTableView_UpdateEditorGeometries_Callback(QTableView_UpdateEditorGeometries_Callback cb) { qtableview_updateeditorgeometries_callback = cb; }
    inline void setQTableView_VerticalScrollbarValueChanged_Callback(QTableView_VerticalScrollbarValueChanged_Callback cb) { qtableview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQTableView_HorizontalScrollbarValueChanged_Callback(QTableView_HorizontalScrollbarValueChanged_Callback cb) { qtableview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQTableView_CloseEditor_Callback(QTableView_CloseEditor_Callback cb) { qtableview_closeeditor_callback = cb; }
    inline void setQTableView_CommitData_Callback(QTableView_CommitData_Callback cb) { qtableview_commitdata_callback = cb; }
    inline void setQTableView_EditorDestroyed_Callback(QTableView_EditorDestroyed_Callback cb) { qtableview_editordestroyed_callback = cb; }
    inline void setQTableView_Edit2_Callback(QTableView_Edit2_Callback cb) { qtableview_edit2_callback = cb; }
    inline void setQTableView_SelectionCommand_Callback(QTableView_SelectionCommand_Callback cb) { qtableview_selectioncommand_callback = cb; }
    inline void setQTableView_StartDrag_Callback(QTableView_StartDrag_Callback cb) { qtableview_startdrag_callback = cb; }
    inline void setQTableView_FocusNextPrevChild_Callback(QTableView_FocusNextPrevChild_Callback cb) { qtableview_focusnextprevchild_callback = cb; }
    inline void setQTableView_Event_Callback(QTableView_Event_Callback cb) { qtableview_event_callback = cb; }
    inline void setQTableView_ViewportEvent_Callback(QTableView_ViewportEvent_Callback cb) { qtableview_viewportevent_callback = cb; }
    inline void setQTableView_MousePressEvent_Callback(QTableView_MousePressEvent_Callback cb) { qtableview_mousepressevent_callback = cb; }
    inline void setQTableView_MouseMoveEvent_Callback(QTableView_MouseMoveEvent_Callback cb) { qtableview_mousemoveevent_callback = cb; }
    inline void setQTableView_MouseReleaseEvent_Callback(QTableView_MouseReleaseEvent_Callback cb) { qtableview_mousereleaseevent_callback = cb; }
    inline void setQTableView_MouseDoubleClickEvent_Callback(QTableView_MouseDoubleClickEvent_Callback cb) { qtableview_mousedoubleclickevent_callback = cb; }
    inline void setQTableView_DragEnterEvent_Callback(QTableView_DragEnterEvent_Callback cb) { qtableview_dragenterevent_callback = cb; }
    inline void setQTableView_DragMoveEvent_Callback(QTableView_DragMoveEvent_Callback cb) { qtableview_dragmoveevent_callback = cb; }
    inline void setQTableView_DragLeaveEvent_Callback(QTableView_DragLeaveEvent_Callback cb) { qtableview_dragleaveevent_callback = cb; }
    inline void setQTableView_FocusInEvent_Callback(QTableView_FocusInEvent_Callback cb) { qtableview_focusinevent_callback = cb; }
    inline void setQTableView_FocusOutEvent_Callback(QTableView_FocusOutEvent_Callback cb) { qtableview_focusoutevent_callback = cb; }
    inline void setQTableView_KeyPressEvent_Callback(QTableView_KeyPressEvent_Callback cb) { qtableview_keypressevent_callback = cb; }
    inline void setQTableView_ResizeEvent_Callback(QTableView_ResizeEvent_Callback cb) { qtableview_resizeevent_callback = cb; }
    inline void setQTableView_InputMethodEvent_Callback(QTableView_InputMethodEvent_Callback cb) { qtableview_inputmethodevent_callback = cb; }
    inline void setQTableView_EventFilter_Callback(QTableView_EventFilter_Callback cb) { qtableview_eventfilter_callback = cb; }
    inline void setQTableView_MinimumSizeHint_Callback(QTableView_MinimumSizeHint_Callback cb) { qtableview_minimumsizehint_callback = cb; }
    inline void setQTableView_SizeHint_Callback(QTableView_SizeHint_Callback cb) { qtableview_sizehint_callback = cb; }
    inline void setQTableView_SetupViewport_Callback(QTableView_SetupViewport_Callback cb) { qtableview_setupviewport_callback = cb; }
    inline void setQTableView_WheelEvent_Callback(QTableView_WheelEvent_Callback cb) { qtableview_wheelevent_callback = cb; }
    inline void setQTableView_ContextMenuEvent_Callback(QTableView_ContextMenuEvent_Callback cb) { qtableview_contextmenuevent_callback = cb; }
    inline void setQTableView_ChangeEvent_Callback(QTableView_ChangeEvent_Callback cb) { qtableview_changeevent_callback = cb; }
    inline void setQTableView_InitStyleOption_Callback(QTableView_InitStyleOption_Callback cb) { qtableview_initstyleoption_callback = cb; }
    inline void setQTableView_DevType_Callback(QTableView_DevType_Callback cb) { qtableview_devtype_callback = cb; }
    inline void setQTableView_SetVisible_Callback(QTableView_SetVisible_Callback cb) { qtableview_setvisible_callback = cb; }
    inline void setQTableView_HeightForWidth_Callback(QTableView_HeightForWidth_Callback cb) { qtableview_heightforwidth_callback = cb; }
    inline void setQTableView_HasHeightForWidth_Callback(QTableView_HasHeightForWidth_Callback cb) { qtableview_hasheightforwidth_callback = cb; }
    inline void setQTableView_PaintEngine_Callback(QTableView_PaintEngine_Callback cb) { qtableview_paintengine_callback = cb; }
    inline void setQTableView_KeyReleaseEvent_Callback(QTableView_KeyReleaseEvent_Callback cb) { qtableview_keyreleaseevent_callback = cb; }
    inline void setQTableView_EnterEvent_Callback(QTableView_EnterEvent_Callback cb) { qtableview_enterevent_callback = cb; }
    inline void setQTableView_LeaveEvent_Callback(QTableView_LeaveEvent_Callback cb) { qtableview_leaveevent_callback = cb; }
    inline void setQTableView_MoveEvent_Callback(QTableView_MoveEvent_Callback cb) { qtableview_moveevent_callback = cb; }
    inline void setQTableView_CloseEvent_Callback(QTableView_CloseEvent_Callback cb) { qtableview_closeevent_callback = cb; }
    inline void setQTableView_TabletEvent_Callback(QTableView_TabletEvent_Callback cb) { qtableview_tabletevent_callback = cb; }
    inline void setQTableView_ActionEvent_Callback(QTableView_ActionEvent_Callback cb) { qtableview_actionevent_callback = cb; }
    inline void setQTableView_ShowEvent_Callback(QTableView_ShowEvent_Callback cb) { qtableview_showevent_callback = cb; }
    inline void setQTableView_HideEvent_Callback(QTableView_HideEvent_Callback cb) { qtableview_hideevent_callback = cb; }
    inline void setQTableView_NativeEvent_Callback(QTableView_NativeEvent_Callback cb) { qtableview_nativeevent_callback = cb; }
    inline void setQTableView_Metric_Callback(QTableView_Metric_Callback cb) { qtableview_metric_callback = cb; }
    inline void setQTableView_InitPainter_Callback(QTableView_InitPainter_Callback cb) { qtableview_initpainter_callback = cb; }
    inline void setQTableView_Redirected_Callback(QTableView_Redirected_Callback cb) { qtableview_redirected_callback = cb; }
    inline void setQTableView_SharedPainter_Callback(QTableView_SharedPainter_Callback cb) { qtableview_sharedpainter_callback = cb; }
    inline void setQTableView_ChildEvent_Callback(QTableView_ChildEvent_Callback cb) { qtableview_childevent_callback = cb; }
    inline void setQTableView_CustomEvent_Callback(QTableView_CustomEvent_Callback cb) { qtableview_customevent_callback = cb; }
    inline void setQTableView_ConnectNotify_Callback(QTableView_ConnectNotify_Callback cb) { qtableview_connectnotify_callback = cb; }
    inline void setQTableView_DisconnectNotify_Callback(QTableView_DisconnectNotify_Callback cb) { qtableview_disconnectnotify_callback = cb; }
    inline void setQTableView_RowMoved_Callback(QTableView_RowMoved_Callback cb) { qtableview_rowmoved_callback = cb; }
    inline void setQTableView_ColumnMoved_Callback(QTableView_ColumnMoved_Callback cb) { qtableview_columnmoved_callback = cb; }
    inline void setQTableView_RowResized_Callback(QTableView_RowResized_Callback cb) { qtableview_rowresized_callback = cb; }
    inline void setQTableView_ColumnResized_Callback(QTableView_ColumnResized_Callback cb) { qtableview_columnresized_callback = cb; }
    inline void setQTableView_RowCountChanged_Callback(QTableView_RowCountChanged_Callback cb) { qtableview_rowcountchanged_callback = cb; }
    inline void setQTableView_ColumnCountChanged_Callback(QTableView_ColumnCountChanged_Callback cb) { qtableview_columncountchanged_callback = cb; }
    inline void setQTableView_State_Callback(QTableView_State_Callback cb) { qtableview_state_callback = cb; }
    inline void setQTableView_SetState_Callback(QTableView_SetState_Callback cb) { qtableview_setstate_callback = cb; }
    inline void setQTableView_ScheduleDelayedItemsLayout_Callback(QTableView_ScheduleDelayedItemsLayout_Callback cb) { qtableview_scheduledelayeditemslayout_callback = cb; }
    inline void setQTableView_ExecuteDelayedItemsLayout_Callback(QTableView_ExecuteDelayedItemsLayout_Callback cb) { qtableview_executedelayeditemslayout_callback = cb; }
    inline void setQTableView_SetDirtyRegion_Callback(QTableView_SetDirtyRegion_Callback cb) { qtableview_setdirtyregion_callback = cb; }
    inline void setQTableView_ScrollDirtyRegion_Callback(QTableView_ScrollDirtyRegion_Callback cb) { qtableview_scrolldirtyregion_callback = cb; }
    inline void setQTableView_DirtyRegionOffset_Callback(QTableView_DirtyRegionOffset_Callback cb) { qtableview_dirtyregionoffset_callback = cb; }
    inline void setQTableView_StartAutoScroll_Callback(QTableView_StartAutoScroll_Callback cb) { qtableview_startautoscroll_callback = cb; }
    inline void setQTableView_StopAutoScroll_Callback(QTableView_StopAutoScroll_Callback cb) { qtableview_stopautoscroll_callback = cb; }
    inline void setQTableView_DoAutoScroll_Callback(QTableView_DoAutoScroll_Callback cb) { qtableview_doautoscroll_callback = cb; }
    inline void setQTableView_DropIndicatorPosition_Callback(QTableView_DropIndicatorPosition_Callback cb) { qtableview_dropindicatorposition_callback = cb; }
    inline void setQTableView_SetViewportMargins_Callback(QTableView_SetViewportMargins_Callback cb) { qtableview_setviewportmargins_callback = cb; }
    inline void setQTableView_ViewportMargins_Callback(QTableView_ViewportMargins_Callback cb) { qtableview_viewportmargins_callback = cb; }
    inline void setQTableView_DrawFrame_Callback(QTableView_DrawFrame_Callback cb) { qtableview_drawframe_callback = cb; }
    inline void setQTableView_UpdateMicroFocus_Callback(QTableView_UpdateMicroFocus_Callback cb) { qtableview_updatemicrofocus_callback = cb; }
    inline void setQTableView_Create_Callback(QTableView_Create_Callback cb) { qtableview_create_callback = cb; }
    inline void setQTableView_Destroy_Callback(QTableView_Destroy_Callback cb) { qtableview_destroy_callback = cb; }
    inline void setQTableView_FocusNextChild_Callback(QTableView_FocusNextChild_Callback cb) { qtableview_focusnextchild_callback = cb; }
    inline void setQTableView_FocusPreviousChild_Callback(QTableView_FocusPreviousChild_Callback cb) { qtableview_focuspreviouschild_callback = cb; }
    inline void setQTableView_Sender_Callback(QTableView_Sender_Callback cb) { qtableview_sender_callback = cb; }
    inline void setQTableView_SenderSignalIndex_Callback(QTableView_SenderSignalIndex_Callback cb) { qtableview_sendersignalindex_callback = cb; }
    inline void setQTableView_Receivers_Callback(QTableView_Receivers_Callback cb) { qtableview_receivers_callback = cb; }
    inline void setQTableView_IsSignalConnected_Callback(QTableView_IsSignalConnected_Callback cb) { qtableview_issignalconnected_callback = cb; }
    inline void setQTableView_GetDecodedMetricF_Callback(QTableView_GetDecodedMetricF_Callback cb) { qtableview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQTableView_Metacall_IsBase(bool value) const { qtableview_metacall_isbase = value; }
    inline void setQTableView_SetModel_IsBase(bool value) const { qtableview_setmodel_isbase = value; }
    inline void setQTableView_SetRootIndex_IsBase(bool value) const { qtableview_setrootindex_isbase = value; }
    inline void setQTableView_SetSelectionModel_IsBase(bool value) const { qtableview_setselectionmodel_isbase = value; }
    inline void setQTableView_DoItemsLayout_IsBase(bool value) const { qtableview_doitemslayout_isbase = value; }
    inline void setQTableView_VisualRect_IsBase(bool value) const { qtableview_visualrect_isbase = value; }
    inline void setQTableView_ScrollTo_IsBase(bool value) const { qtableview_scrollto_isbase = value; }
    inline void setQTableView_IndexAt_IsBase(bool value) const { qtableview_indexat_isbase = value; }
    inline void setQTableView_ScrollContentsBy_IsBase(bool value) const { qtableview_scrollcontentsby_isbase = value; }
    inline void setQTableView_InitViewItemOption_IsBase(bool value) const { qtableview_initviewitemoption_isbase = value; }
    inline void setQTableView_PaintEvent_IsBase(bool value) const { qtableview_paintevent_isbase = value; }
    inline void setQTableView_TimerEvent_IsBase(bool value) const { qtableview_timerevent_isbase = value; }
    inline void setQTableView_DropEvent_IsBase(bool value) const { qtableview_dropevent_isbase = value; }
    inline void setQTableView_HorizontalOffset_IsBase(bool value) const { qtableview_horizontaloffset_isbase = value; }
    inline void setQTableView_VerticalOffset_IsBase(bool value) const { qtableview_verticaloffset_isbase = value; }
    inline void setQTableView_MoveCursor_IsBase(bool value) const { qtableview_movecursor_isbase = value; }
    inline void setQTableView_SetSelection_IsBase(bool value) const { qtableview_setselection_isbase = value; }
    inline void setQTableView_VisualRegionForSelection_IsBase(bool value) const { qtableview_visualregionforselection_isbase = value; }
    inline void setQTableView_SelectedIndexes_IsBase(bool value) const { qtableview_selectedindexes_isbase = value; }
    inline void setQTableView_UpdateGeometries_IsBase(bool value) const { qtableview_updategeometries_isbase = value; }
    inline void setQTableView_ViewportSizeHint_IsBase(bool value) const { qtableview_viewportsizehint_isbase = value; }
    inline void setQTableView_SizeHintForRow_IsBase(bool value) const { qtableview_sizehintforrow_isbase = value; }
    inline void setQTableView_SizeHintForColumn_IsBase(bool value) const { qtableview_sizehintforcolumn_isbase = value; }
    inline void setQTableView_VerticalScrollbarAction_IsBase(bool value) const { qtableview_verticalscrollbaraction_isbase = value; }
    inline void setQTableView_HorizontalScrollbarAction_IsBase(bool value) const { qtableview_horizontalscrollbaraction_isbase = value; }
    inline void setQTableView_IsIndexHidden_IsBase(bool value) const { qtableview_isindexhidden_isbase = value; }
    inline void setQTableView_SelectionChanged_IsBase(bool value) const { qtableview_selectionchanged_isbase = value; }
    inline void setQTableView_CurrentChanged_IsBase(bool value) const { qtableview_currentchanged_isbase = value; }
    inline void setQTableView_KeyboardSearch_IsBase(bool value) const { qtableview_keyboardsearch_isbase = value; }
    inline void setQTableView_ItemDelegateForIndex_IsBase(bool value) const { qtableview_itemdelegateforindex_isbase = value; }
    inline void setQTableView_InputMethodQuery_IsBase(bool value) const { qtableview_inputmethodquery_isbase = value; }
    inline void setQTableView_Reset_IsBase(bool value) const { qtableview_reset_isbase = value; }
    inline void setQTableView_SelectAll_IsBase(bool value) const { qtableview_selectall_isbase = value; }
    inline void setQTableView_DataChanged_IsBase(bool value) const { qtableview_datachanged_isbase = value; }
    inline void setQTableView_RowsInserted_IsBase(bool value) const { qtableview_rowsinserted_isbase = value; }
    inline void setQTableView_RowsAboutToBeRemoved_IsBase(bool value) const { qtableview_rowsabouttoberemoved_isbase = value; }
    inline void setQTableView_UpdateEditorData_IsBase(bool value) const { qtableview_updateeditordata_isbase = value; }
    inline void setQTableView_UpdateEditorGeometries_IsBase(bool value) const { qtableview_updateeditorgeometries_isbase = value; }
    inline void setQTableView_VerticalScrollbarValueChanged_IsBase(bool value) const { qtableview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQTableView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qtableview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQTableView_CloseEditor_IsBase(bool value) const { qtableview_closeeditor_isbase = value; }
    inline void setQTableView_CommitData_IsBase(bool value) const { qtableview_commitdata_isbase = value; }
    inline void setQTableView_EditorDestroyed_IsBase(bool value) const { qtableview_editordestroyed_isbase = value; }
    inline void setQTableView_Edit2_IsBase(bool value) const { qtableview_edit2_isbase = value; }
    inline void setQTableView_SelectionCommand_IsBase(bool value) const { qtableview_selectioncommand_isbase = value; }
    inline void setQTableView_StartDrag_IsBase(bool value) const { qtableview_startdrag_isbase = value; }
    inline void setQTableView_FocusNextPrevChild_IsBase(bool value) const { qtableview_focusnextprevchild_isbase = value; }
    inline void setQTableView_Event_IsBase(bool value) const { qtableview_event_isbase = value; }
    inline void setQTableView_ViewportEvent_IsBase(bool value) const { qtableview_viewportevent_isbase = value; }
    inline void setQTableView_MousePressEvent_IsBase(bool value) const { qtableview_mousepressevent_isbase = value; }
    inline void setQTableView_MouseMoveEvent_IsBase(bool value) const { qtableview_mousemoveevent_isbase = value; }
    inline void setQTableView_MouseReleaseEvent_IsBase(bool value) const { qtableview_mousereleaseevent_isbase = value; }
    inline void setQTableView_MouseDoubleClickEvent_IsBase(bool value) const { qtableview_mousedoubleclickevent_isbase = value; }
    inline void setQTableView_DragEnterEvent_IsBase(bool value) const { qtableview_dragenterevent_isbase = value; }
    inline void setQTableView_DragMoveEvent_IsBase(bool value) const { qtableview_dragmoveevent_isbase = value; }
    inline void setQTableView_DragLeaveEvent_IsBase(bool value) const { qtableview_dragleaveevent_isbase = value; }
    inline void setQTableView_FocusInEvent_IsBase(bool value) const { qtableview_focusinevent_isbase = value; }
    inline void setQTableView_FocusOutEvent_IsBase(bool value) const { qtableview_focusoutevent_isbase = value; }
    inline void setQTableView_KeyPressEvent_IsBase(bool value) const { qtableview_keypressevent_isbase = value; }
    inline void setQTableView_ResizeEvent_IsBase(bool value) const { qtableview_resizeevent_isbase = value; }
    inline void setQTableView_InputMethodEvent_IsBase(bool value) const { qtableview_inputmethodevent_isbase = value; }
    inline void setQTableView_EventFilter_IsBase(bool value) const { qtableview_eventfilter_isbase = value; }
    inline void setQTableView_MinimumSizeHint_IsBase(bool value) const { qtableview_minimumsizehint_isbase = value; }
    inline void setQTableView_SizeHint_IsBase(bool value) const { qtableview_sizehint_isbase = value; }
    inline void setQTableView_SetupViewport_IsBase(bool value) const { qtableview_setupviewport_isbase = value; }
    inline void setQTableView_WheelEvent_IsBase(bool value) const { qtableview_wheelevent_isbase = value; }
    inline void setQTableView_ContextMenuEvent_IsBase(bool value) const { qtableview_contextmenuevent_isbase = value; }
    inline void setQTableView_ChangeEvent_IsBase(bool value) const { qtableview_changeevent_isbase = value; }
    inline void setQTableView_InitStyleOption_IsBase(bool value) const { qtableview_initstyleoption_isbase = value; }
    inline void setQTableView_DevType_IsBase(bool value) const { qtableview_devtype_isbase = value; }
    inline void setQTableView_SetVisible_IsBase(bool value) const { qtableview_setvisible_isbase = value; }
    inline void setQTableView_HeightForWidth_IsBase(bool value) const { qtableview_heightforwidth_isbase = value; }
    inline void setQTableView_HasHeightForWidth_IsBase(bool value) const { qtableview_hasheightforwidth_isbase = value; }
    inline void setQTableView_PaintEngine_IsBase(bool value) const { qtableview_paintengine_isbase = value; }
    inline void setQTableView_KeyReleaseEvent_IsBase(bool value) const { qtableview_keyreleaseevent_isbase = value; }
    inline void setQTableView_EnterEvent_IsBase(bool value) const { qtableview_enterevent_isbase = value; }
    inline void setQTableView_LeaveEvent_IsBase(bool value) const { qtableview_leaveevent_isbase = value; }
    inline void setQTableView_MoveEvent_IsBase(bool value) const { qtableview_moveevent_isbase = value; }
    inline void setQTableView_CloseEvent_IsBase(bool value) const { qtableview_closeevent_isbase = value; }
    inline void setQTableView_TabletEvent_IsBase(bool value) const { qtableview_tabletevent_isbase = value; }
    inline void setQTableView_ActionEvent_IsBase(bool value) const { qtableview_actionevent_isbase = value; }
    inline void setQTableView_ShowEvent_IsBase(bool value) const { qtableview_showevent_isbase = value; }
    inline void setQTableView_HideEvent_IsBase(bool value) const { qtableview_hideevent_isbase = value; }
    inline void setQTableView_NativeEvent_IsBase(bool value) const { qtableview_nativeevent_isbase = value; }
    inline void setQTableView_Metric_IsBase(bool value) const { qtableview_metric_isbase = value; }
    inline void setQTableView_InitPainter_IsBase(bool value) const { qtableview_initpainter_isbase = value; }
    inline void setQTableView_Redirected_IsBase(bool value) const { qtableview_redirected_isbase = value; }
    inline void setQTableView_SharedPainter_IsBase(bool value) const { qtableview_sharedpainter_isbase = value; }
    inline void setQTableView_ChildEvent_IsBase(bool value) const { qtableview_childevent_isbase = value; }
    inline void setQTableView_CustomEvent_IsBase(bool value) const { qtableview_customevent_isbase = value; }
    inline void setQTableView_ConnectNotify_IsBase(bool value) const { qtableview_connectnotify_isbase = value; }
    inline void setQTableView_DisconnectNotify_IsBase(bool value) const { qtableview_disconnectnotify_isbase = value; }
    inline void setQTableView_RowMoved_IsBase(bool value) const { qtableview_rowmoved_isbase = value; }
    inline void setQTableView_ColumnMoved_IsBase(bool value) const { qtableview_columnmoved_isbase = value; }
    inline void setQTableView_RowResized_IsBase(bool value) const { qtableview_rowresized_isbase = value; }
    inline void setQTableView_ColumnResized_IsBase(bool value) const { qtableview_columnresized_isbase = value; }
    inline void setQTableView_RowCountChanged_IsBase(bool value) const { qtableview_rowcountchanged_isbase = value; }
    inline void setQTableView_ColumnCountChanged_IsBase(bool value) const { qtableview_columncountchanged_isbase = value; }
    inline void setQTableView_State_IsBase(bool value) const { qtableview_state_isbase = value; }
    inline void setQTableView_SetState_IsBase(bool value) const { qtableview_setstate_isbase = value; }
    inline void setQTableView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qtableview_scheduledelayeditemslayout_isbase = value; }
    inline void setQTableView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qtableview_executedelayeditemslayout_isbase = value; }
    inline void setQTableView_SetDirtyRegion_IsBase(bool value) const { qtableview_setdirtyregion_isbase = value; }
    inline void setQTableView_ScrollDirtyRegion_IsBase(bool value) const { qtableview_scrolldirtyregion_isbase = value; }
    inline void setQTableView_DirtyRegionOffset_IsBase(bool value) const { qtableview_dirtyregionoffset_isbase = value; }
    inline void setQTableView_StartAutoScroll_IsBase(bool value) const { qtableview_startautoscroll_isbase = value; }
    inline void setQTableView_StopAutoScroll_IsBase(bool value) const { qtableview_stopautoscroll_isbase = value; }
    inline void setQTableView_DoAutoScroll_IsBase(bool value) const { qtableview_doautoscroll_isbase = value; }
    inline void setQTableView_DropIndicatorPosition_IsBase(bool value) const { qtableview_dropindicatorposition_isbase = value; }
    inline void setQTableView_SetViewportMargins_IsBase(bool value) const { qtableview_setviewportmargins_isbase = value; }
    inline void setQTableView_ViewportMargins_IsBase(bool value) const { qtableview_viewportmargins_isbase = value; }
    inline void setQTableView_DrawFrame_IsBase(bool value) const { qtableview_drawframe_isbase = value; }
    inline void setQTableView_UpdateMicroFocus_IsBase(bool value) const { qtableview_updatemicrofocus_isbase = value; }
    inline void setQTableView_Create_IsBase(bool value) const { qtableview_create_isbase = value; }
    inline void setQTableView_Destroy_IsBase(bool value) const { qtableview_destroy_isbase = value; }
    inline void setQTableView_FocusNextChild_IsBase(bool value) const { qtableview_focusnextchild_isbase = value; }
    inline void setQTableView_FocusPreviousChild_IsBase(bool value) const { qtableview_focuspreviouschild_isbase = value; }
    inline void setQTableView_Sender_IsBase(bool value) const { qtableview_sender_isbase = value; }
    inline void setQTableView_SenderSignalIndex_IsBase(bool value) const { qtableview_sendersignalindex_isbase = value; }
    inline void setQTableView_Receivers_IsBase(bool value) const { qtableview_receivers_isbase = value; }
    inline void setQTableView_IsSignalConnected_IsBase(bool value) const { qtableview_issignalconnected_isbase = value; }
    inline void setQTableView_GetDecodedMetricF_IsBase(bool value) const { qtableview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtableview_metacall_isbase) {
            qtableview_metacall_isbase = false;
            return QTableView::qt_metacall(param1, param2, param3);
        } else if (qtableview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtableview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qtableview_setmodel_isbase) {
            qtableview_setmodel_isbase = false;
            QTableView::setModel(model);
        } else if (qtableview_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            qtableview_setmodel_callback(this, cbval1);
        } else {
            QTableView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtableview_setrootindex_isbase) {
            qtableview_setrootindex_isbase = false;
            QTableView::setRootIndex(index);
        } else if (qtableview_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            qtableview_setrootindex_callback(this, cbval1);
        } else {
            QTableView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtableview_setselectionmodel_isbase) {
            qtableview_setselectionmodel_isbase = false;
            QTableView::setSelectionModel(selectionModel);
        } else if (qtableview_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            qtableview_setselectionmodel_callback(this, cbval1);
        } else {
            QTableView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtableview_doitemslayout_isbase) {
            qtableview_doitemslayout_isbase = false;
            QTableView::doItemsLayout();
        } else if (qtableview_doitemslayout_callback != nullptr) {
            qtableview_doitemslayout_callback();
        } else {
            QTableView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtableview_visualrect_isbase) {
            qtableview_visualrect_isbase = false;
            return QTableView::visualRect(index);
        } else if (qtableview_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qtableview_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtableview_scrollto_isbase) {
            qtableview_scrollto_isbase = false;
            QTableView::scrollTo(index, hint);
        } else if (qtableview_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            qtableview_scrollto_callback(this, cbval1, cbval2);
        } else {
            QTableView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtableview_indexat_isbase) {
            qtableview_indexat_isbase = false;
            return QTableView::indexAt(p);
        } else if (qtableview_indexat_callback != nullptr) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = qtableview_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableView::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtableview_scrollcontentsby_isbase) {
            qtableview_scrollcontentsby_isbase = false;
            QTableView::scrollContentsBy(dx, dy);
        } else if (qtableview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qtableview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QTableView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtableview_initviewitemoption_isbase) {
            qtableview_initviewitemoption_isbase = false;
            QTableView::initViewItemOption(option);
        } else if (qtableview_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            qtableview_initviewitemoption_callback(this, cbval1);
        } else {
            QTableView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtableview_paintevent_isbase) {
            qtableview_paintevent_isbase = false;
            QTableView::paintEvent(e);
        } else if (qtableview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            qtableview_paintevent_callback(this, cbval1);
        } else {
            QTableView::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtableview_timerevent_isbase) {
            qtableview_timerevent_isbase = false;
            QTableView::timerEvent(event);
        } else if (qtableview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtableview_timerevent_callback(this, cbval1);
        } else {
            QTableView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtableview_dropevent_isbase) {
            qtableview_dropevent_isbase = false;
            QTableView::dropEvent(event);
        } else if (qtableview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qtableview_dropevent_callback(this, cbval1);
        } else {
            QTableView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtableview_horizontaloffset_isbase) {
            qtableview_horizontaloffset_isbase = false;
            return QTableView::horizontalOffset();
        } else if (qtableview_horizontaloffset_callback != nullptr) {
            int callback_ret = qtableview_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtableview_verticaloffset_isbase) {
            qtableview_verticaloffset_isbase = false;
            return QTableView::verticalOffset();
        } else if (qtableview_verticaloffset_callback != nullptr) {
            int callback_ret = qtableview_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtableview_movecursor_isbase) {
            qtableview_movecursor_isbase = false;
            return QTableView::moveCursor(cursorAction, modifiers);
        } else if (qtableview_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = qtableview_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QTableView::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtableview_setselection_isbase) {
            qtableview_setselection_isbase = false;
            QTableView::setSelection(rect, command);
        } else if (qtableview_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            qtableview_setselection_callback(this, cbval1, cbval2);
        } else {
            QTableView::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtableview_visualregionforselection_isbase) {
            qtableview_visualregionforselection_isbase = false;
            return QTableView::visualRegionForSelection(selection);
        } else if (qtableview_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = qtableview_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qtableview_selectedindexes_isbase) {
            qtableview_selectedindexes_isbase = false;
            return QTableView::selectedIndexes();
        } else if (qtableview_selectedindexes_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qtableview_selectedindexes_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QTableView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtableview_updategeometries_isbase) {
            qtableview_updategeometries_isbase = false;
            QTableView::updateGeometries();
        } else if (qtableview_updategeometries_callback != nullptr) {
            qtableview_updategeometries_callback();
        } else {
            QTableView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtableview_viewportsizehint_isbase) {
            qtableview_viewportsizehint_isbase = false;
            return QTableView::viewportSizeHint();
        } else if (qtableview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qtableview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QTableView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtableview_sizehintforrow_isbase) {
            qtableview_sizehintforrow_isbase = false;
            return QTableView::sizeHintForRow(row);
        } else if (qtableview_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = qtableview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtableview_sizehintforcolumn_isbase) {
            qtableview_sizehintforcolumn_isbase = false;
            return QTableView::sizeHintForColumn(column);
        } else if (qtableview_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = qtableview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtableview_verticalscrollbaraction_isbase) {
            qtableview_verticalscrollbaraction_isbase = false;
            QTableView::verticalScrollbarAction(action);
        } else if (qtableview_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qtableview_verticalscrollbaraction_callback(this, cbval1);
        } else {
            QTableView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtableview_horizontalscrollbaraction_isbase) {
            qtableview_horizontalscrollbaraction_isbase = false;
            QTableView::horizontalScrollbarAction(action);
        } else if (qtableview_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qtableview_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            QTableView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtableview_isindexhidden_isbase) {
            qtableview_isindexhidden_isbase = false;
            return QTableView::isIndexHidden(index);
        } else if (qtableview_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qtableview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtableview_selectionchanged_isbase) {
            qtableview_selectionchanged_isbase = false;
            QTableView::selectionChanged(selected, deselected);
        } else if (qtableview_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            qtableview_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            QTableView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtableview_currentchanged_isbase) {
            qtableview_currentchanged_isbase = false;
            QTableView::currentChanged(current, previous);
        } else if (qtableview_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            qtableview_currentchanged_callback(this, cbval1, cbval2);
        } else {
            QTableView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtableview_keyboardsearch_isbase) {
            qtableview_keyboardsearch_isbase = false;
            QTableView::keyboardSearch(search);
        } else if (qtableview_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<const char*>(malloc((search_str.len + 1) * sizeof(char)));
            memcpy((void*)search_str.data, search_b.data(), search_str.len);
            ((char*)search_str.data)[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            qtableview_keyboardsearch_callback(this, cbval1);
        } else {
            QTableView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtableview_itemdelegateforindex_isbase) {
            qtableview_itemdelegateforindex_isbase = false;
            return QTableView::itemDelegateForIndex(index);
        } else if (qtableview_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = qtableview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtableview_inputmethodquery_isbase) {
            qtableview_inputmethodquery_isbase = false;
            return QTableView::inputMethodQuery(query);
        } else if (qtableview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qtableview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtableview_reset_isbase) {
            qtableview_reset_isbase = false;
            QTableView::reset();
        } else if (qtableview_reset_callback != nullptr) {
            qtableview_reset_callback();
        } else {
            QTableView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtableview_selectall_isbase) {
            qtableview_selectall_isbase = false;
            QTableView::selectAll();
        } else if (qtableview_selectall_callback != nullptr) {
            qtableview_selectall_callback();
        } else {
            QTableView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtableview_datachanged_isbase) {
            qtableview_datachanged_isbase = false;
            QTableView::dataChanged(topLeft, bottomRight, roles);
        } else if (qtableview_datachanged_callback != nullptr) {
            const QModelIndex& topLeft_ret = topLeft;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&topLeft_ret);
            const QModelIndex& bottomRight_ret = bottomRight;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&bottomRight_ret);
            const QList<int>& roles_ret = roles;
            // Convert const QList<> from C++ memory to manually-managed C memory
            int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
            for (size_t i = 0; i < roles_ret.size(); ++i) {
                roles_arr[i] = roles_ret[i];
            }
            libqt_list roles_out;
            roles_out.len = roles_ret.size();
            roles_out.data = static_cast<void*>(roles_arr);
            libqt_list /* of int */ cbval3 = roles_out;

            qtableview_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtableview_rowsinserted_isbase) {
            qtableview_rowsinserted_isbase = false;
            QTableView::rowsInserted(parent, start, end);
        } else if (qtableview_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qtableview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtableview_rowsabouttoberemoved_isbase) {
            qtableview_rowsabouttoberemoved_isbase = false;
            QTableView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qtableview_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qtableview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtableview_updateeditordata_isbase) {
            qtableview_updateeditordata_isbase = false;
            QTableView::updateEditorData();
        } else if (qtableview_updateeditordata_callback != nullptr) {
            qtableview_updateeditordata_callback();
        } else {
            QTableView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtableview_updateeditorgeometries_isbase) {
            qtableview_updateeditorgeometries_isbase = false;
            QTableView::updateEditorGeometries();
        } else if (qtableview_updateeditorgeometries_callback != nullptr) {
            qtableview_updateeditorgeometries_callback();
        } else {
            QTableView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtableview_verticalscrollbarvaluechanged_isbase) {
            qtableview_verticalscrollbarvaluechanged_isbase = false;
            QTableView::verticalScrollbarValueChanged(value);
        } else if (qtableview_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qtableview_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QTableView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtableview_horizontalscrollbarvaluechanged_isbase) {
            qtableview_horizontalscrollbarvaluechanged_isbase = false;
            QTableView::horizontalScrollbarValueChanged(value);
        } else if (qtableview_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qtableview_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QTableView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtableview_closeeditor_isbase) {
            qtableview_closeeditor_isbase = false;
            QTableView::closeEditor(editor, hint);
        } else if (qtableview_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            qtableview_closeeditor_callback(this, cbval1, cbval2);
        } else {
            QTableView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtableview_commitdata_isbase) {
            qtableview_commitdata_isbase = false;
            QTableView::commitData(editor);
        } else if (qtableview_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            qtableview_commitdata_callback(this, cbval1);
        } else {
            QTableView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtableview_editordestroyed_isbase) {
            qtableview_editordestroyed_isbase = false;
            QTableView::editorDestroyed(editor);
        } else if (qtableview_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            qtableview_editordestroyed_callback(this, cbval1);
        } else {
            QTableView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtableview_edit2_isbase) {
            qtableview_edit2_isbase = false;
            return QTableView::edit(index, trigger, event);
        } else if (qtableview_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = qtableview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTableView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtableview_selectioncommand_isbase) {
            qtableview_selectioncommand_isbase = false;
            return QTableView::selectionCommand(index, event);
        } else if (qtableview_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = qtableview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return QTableView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtableview_startdrag_isbase) {
            qtableview_startdrag_isbase = false;
            QTableView::startDrag(supportedActions);
        } else if (qtableview_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            qtableview_startdrag_callback(this, cbval1);
        } else {
            QTableView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtableview_focusnextprevchild_isbase) {
            qtableview_focusnextprevchild_isbase = false;
            return QTableView::focusNextPrevChild(next);
        } else if (qtableview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qtableview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtableview_event_isbase) {
            qtableview_event_isbase = false;
            return QTableView::event(event);
        } else if (qtableview_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtableview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtableview_viewportevent_isbase) {
            qtableview_viewportevent_isbase = false;
            return QTableView::viewportEvent(event);
        } else if (qtableview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtableview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtableview_mousepressevent_isbase) {
            qtableview_mousepressevent_isbase = false;
            QTableView::mousePressEvent(event);
        } else if (qtableview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtableview_mousepressevent_callback(this, cbval1);
        } else {
            QTableView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtableview_mousemoveevent_isbase) {
            qtableview_mousemoveevent_isbase = false;
            QTableView::mouseMoveEvent(event);
        } else if (qtableview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtableview_mousemoveevent_callback(this, cbval1);
        } else {
            QTableView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtableview_mousereleaseevent_isbase) {
            qtableview_mousereleaseevent_isbase = false;
            QTableView::mouseReleaseEvent(event);
        } else if (qtableview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtableview_mousereleaseevent_callback(this, cbval1);
        } else {
            QTableView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtableview_mousedoubleclickevent_isbase) {
            qtableview_mousedoubleclickevent_isbase = false;
            QTableView::mouseDoubleClickEvent(event);
        } else if (qtableview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtableview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QTableView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtableview_dragenterevent_isbase) {
            qtableview_dragenterevent_isbase = false;
            QTableView::dragEnterEvent(event);
        } else if (qtableview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qtableview_dragenterevent_callback(this, cbval1);
        } else {
            QTableView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtableview_dragmoveevent_isbase) {
            qtableview_dragmoveevent_isbase = false;
            QTableView::dragMoveEvent(event);
        } else if (qtableview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qtableview_dragmoveevent_callback(this, cbval1);
        } else {
            QTableView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtableview_dragleaveevent_isbase) {
            qtableview_dragleaveevent_isbase = false;
            QTableView::dragLeaveEvent(event);
        } else if (qtableview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qtableview_dragleaveevent_callback(this, cbval1);
        } else {
            QTableView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtableview_focusinevent_isbase) {
            qtableview_focusinevent_isbase = false;
            QTableView::focusInEvent(event);
        } else if (qtableview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtableview_focusinevent_callback(this, cbval1);
        } else {
            QTableView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtableview_focusoutevent_isbase) {
            qtableview_focusoutevent_isbase = false;
            QTableView::focusOutEvent(event);
        } else if (qtableview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtableview_focusoutevent_callback(this, cbval1);
        } else {
            QTableView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtableview_keypressevent_isbase) {
            qtableview_keypressevent_isbase = false;
            QTableView::keyPressEvent(event);
        } else if (qtableview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtableview_keypressevent_callback(this, cbval1);
        } else {
            QTableView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtableview_resizeevent_isbase) {
            qtableview_resizeevent_isbase = false;
            QTableView::resizeEvent(event);
        } else if (qtableview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qtableview_resizeevent_callback(this, cbval1);
        } else {
            QTableView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtableview_inputmethodevent_isbase) {
            qtableview_inputmethodevent_isbase = false;
            QTableView::inputMethodEvent(event);
        } else if (qtableview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qtableview_inputmethodevent_callback(this, cbval1);
        } else {
            QTableView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtableview_eventfilter_isbase) {
            qtableview_eventfilter_isbase = false;
            return QTableView::eventFilter(object, event);
        } else if (qtableview_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qtableview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTableView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtableview_minimumsizehint_isbase) {
            qtableview_minimumsizehint_isbase = false;
            return QTableView::minimumSizeHint();
        } else if (qtableview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qtableview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QTableView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtableview_sizehint_isbase) {
            qtableview_sizehint_isbase = false;
            return QTableView::sizeHint();
        } else if (qtableview_sizehint_callback != nullptr) {
            QSize* callback_ret = qtableview_sizehint_callback();
            return *callback_ret;
        } else {
            return QTableView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtableview_setupviewport_isbase) {
            qtableview_setupviewport_isbase = false;
            QTableView::setupViewport(viewport);
        } else if (qtableview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qtableview_setupviewport_callback(this, cbval1);
        } else {
            QTableView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtableview_wheelevent_isbase) {
            qtableview_wheelevent_isbase = false;
            QTableView::wheelEvent(param1);
        } else if (qtableview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qtableview_wheelevent_callback(this, cbval1);
        } else {
            QTableView::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtableview_contextmenuevent_isbase) {
            qtableview_contextmenuevent_isbase = false;
            QTableView::contextMenuEvent(param1);
        } else if (qtableview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qtableview_contextmenuevent_callback(this, cbval1);
        } else {
            QTableView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtableview_changeevent_isbase) {
            qtableview_changeevent_isbase = false;
            QTableView::changeEvent(param1);
        } else if (qtableview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qtableview_changeevent_callback(this, cbval1);
        } else {
            QTableView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtableview_initstyleoption_isbase) {
            qtableview_initstyleoption_isbase = false;
            QTableView::initStyleOption(option);
        } else if (qtableview_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qtableview_initstyleoption_callback(this, cbval1);
        } else {
            QTableView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtableview_devtype_isbase) {
            qtableview_devtype_isbase = false;
            return QTableView::devType();
        } else if (qtableview_devtype_callback != nullptr) {
            int callback_ret = qtableview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtableview_setvisible_isbase) {
            qtableview_setvisible_isbase = false;
            QTableView::setVisible(visible);
        } else if (qtableview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qtableview_setvisible_callback(this, cbval1);
        } else {
            QTableView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtableview_heightforwidth_isbase) {
            qtableview_heightforwidth_isbase = false;
            return QTableView::heightForWidth(param1);
        } else if (qtableview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qtableview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtableview_hasheightforwidth_isbase) {
            qtableview_hasheightforwidth_isbase = false;
            return QTableView::hasHeightForWidth();
        } else if (qtableview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qtableview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QTableView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtableview_paintengine_isbase) {
            qtableview_paintengine_isbase = false;
            return QTableView::paintEngine();
        } else if (qtableview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qtableview_paintengine_callback();
            return callback_ret;
        } else {
            return QTableView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtableview_keyreleaseevent_isbase) {
            qtableview_keyreleaseevent_isbase = false;
            QTableView::keyReleaseEvent(event);
        } else if (qtableview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtableview_keyreleaseevent_callback(this, cbval1);
        } else {
            QTableView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtableview_enterevent_isbase) {
            qtableview_enterevent_isbase = false;
            QTableView::enterEvent(event);
        } else if (qtableview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qtableview_enterevent_callback(this, cbval1);
        } else {
            QTableView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtableview_leaveevent_isbase) {
            qtableview_leaveevent_isbase = false;
            QTableView::leaveEvent(event);
        } else if (qtableview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtableview_leaveevent_callback(this, cbval1);
        } else {
            QTableView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtableview_moveevent_isbase) {
            qtableview_moveevent_isbase = false;
            QTableView::moveEvent(event);
        } else if (qtableview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qtableview_moveevent_callback(this, cbval1);
        } else {
            QTableView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtableview_closeevent_isbase) {
            qtableview_closeevent_isbase = false;
            QTableView::closeEvent(event);
        } else if (qtableview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qtableview_closeevent_callback(this, cbval1);
        } else {
            QTableView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtableview_tabletevent_isbase) {
            qtableview_tabletevent_isbase = false;
            QTableView::tabletEvent(event);
        } else if (qtableview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qtableview_tabletevent_callback(this, cbval1);
        } else {
            QTableView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtableview_actionevent_isbase) {
            qtableview_actionevent_isbase = false;
            QTableView::actionEvent(event);
        } else if (qtableview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qtableview_actionevent_callback(this, cbval1);
        } else {
            QTableView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtableview_showevent_isbase) {
            qtableview_showevent_isbase = false;
            QTableView::showEvent(event);
        } else if (qtableview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qtableview_showevent_callback(this, cbval1);
        } else {
            QTableView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtableview_hideevent_isbase) {
            qtableview_hideevent_isbase = false;
            QTableView::hideEvent(event);
        } else if (qtableview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qtableview_hideevent_callback(this, cbval1);
        } else {
            QTableView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtableview_nativeevent_isbase) {
            qtableview_nativeevent_isbase = false;
            return QTableView::nativeEvent(eventType, message, result);
        } else if (qtableview_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qtableview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTableView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtableview_metric_isbase) {
            qtableview_metric_isbase = false;
            return QTableView::metric(param1);
        } else if (qtableview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qtableview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtableview_initpainter_isbase) {
            qtableview_initpainter_isbase = false;
            QTableView::initPainter(painter);
        } else if (qtableview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qtableview_initpainter_callback(this, cbval1);
        } else {
            QTableView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtableview_redirected_isbase) {
            qtableview_redirected_isbase = false;
            return QTableView::redirected(offset);
        } else if (qtableview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qtableview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtableview_sharedpainter_isbase) {
            qtableview_sharedpainter_isbase = false;
            return QTableView::sharedPainter();
        } else if (qtableview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qtableview_sharedpainter_callback();
            return callback_ret;
        } else {
            return QTableView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtableview_childevent_isbase) {
            qtableview_childevent_isbase = false;
            QTableView::childEvent(event);
        } else if (qtableview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtableview_childevent_callback(this, cbval1);
        } else {
            QTableView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtableview_customevent_isbase) {
            qtableview_customevent_isbase = false;
            QTableView::customEvent(event);
        } else if (qtableview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtableview_customevent_callback(this, cbval1);
        } else {
            QTableView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtableview_connectnotify_isbase) {
            qtableview_connectnotify_isbase = false;
            QTableView::connectNotify(signal);
        } else if (qtableview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtableview_connectnotify_callback(this, cbval1);
        } else {
            QTableView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtableview_disconnectnotify_isbase) {
            qtableview_disconnectnotify_isbase = false;
            QTableView::disconnectNotify(signal);
        } else if (qtableview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtableview_disconnectnotify_callback(this, cbval1);
        } else {
            QTableView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowMoved(int row, int oldIndex, int newIndex) {
        if (qtableview_rowmoved_isbase) {
            qtableview_rowmoved_isbase = false;
            QTableView::rowMoved(row, oldIndex, newIndex);
        } else if (qtableview_rowmoved_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = oldIndex;
            int cbval3 = newIndex;

            qtableview_rowmoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableView::rowMoved(row, oldIndex, newIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnMoved(int column, int oldIndex, int newIndex) {
        if (qtableview_columnmoved_isbase) {
            qtableview_columnmoved_isbase = false;
            QTableView::columnMoved(column, oldIndex, newIndex);
        } else if (qtableview_columnmoved_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = oldIndex;
            int cbval3 = newIndex;

            qtableview_columnmoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableView::columnMoved(column, oldIndex, newIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowResized(int row, int oldHeight, int newHeight) {
        if (qtableview_rowresized_isbase) {
            qtableview_rowresized_isbase = false;
            QTableView::rowResized(row, oldHeight, newHeight);
        } else if (qtableview_rowresized_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = oldHeight;
            int cbval3 = newHeight;

            qtableview_rowresized_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableView::rowResized(row, oldHeight, newHeight);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnResized(int column, int oldWidth, int newWidth) {
        if (qtableview_columnresized_isbase) {
            qtableview_columnresized_isbase = false;
            QTableView::columnResized(column, oldWidth, newWidth);
        } else if (qtableview_columnresized_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = oldWidth;
            int cbval3 = newWidth;

            qtableview_columnresized_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableView::columnResized(column, oldWidth, newWidth);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowCountChanged(int oldCount, int newCount) {
        if (qtableview_rowcountchanged_isbase) {
            qtableview_rowcountchanged_isbase = false;
            QTableView::rowCountChanged(oldCount, newCount);
        } else if (qtableview_rowcountchanged_callback != nullptr) {
            int cbval1 = oldCount;
            int cbval2 = newCount;

            qtableview_rowcountchanged_callback(this, cbval1, cbval2);
        } else {
            QTableView::rowCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnCountChanged(int oldCount, int newCount) {
        if (qtableview_columncountchanged_isbase) {
            qtableview_columncountchanged_isbase = false;
            QTableView::columnCountChanged(oldCount, newCount);
        } else if (qtableview_columncountchanged_callback != nullptr) {
            int cbval1 = oldCount;
            int cbval2 = newCount;

            qtableview_columncountchanged_callback(this, cbval1, cbval2);
        } else {
            QTableView::columnCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qtableview_state_isbase) {
            qtableview_state_isbase = false;
            return QTableView::state();
        } else if (qtableview_state_callback != nullptr) {
            int callback_ret = qtableview_state_callback();
            return static_cast<VirtualQTableView::State>(callback_ret);
        } else {
            return QTableView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qtableview_setstate_isbase) {
            qtableview_setstate_isbase = false;
            QTableView::setState(state);
        } else if (qtableview_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qtableview_setstate_callback(this, cbval1);
        } else {
            QTableView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qtableview_scheduledelayeditemslayout_isbase) {
            qtableview_scheduledelayeditemslayout_isbase = false;
            QTableView::scheduleDelayedItemsLayout();
        } else if (qtableview_scheduledelayeditemslayout_callback != nullptr) {
            qtableview_scheduledelayeditemslayout_callback();
        } else {
            QTableView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qtableview_executedelayeditemslayout_isbase) {
            qtableview_executedelayeditemslayout_isbase = false;
            QTableView::executeDelayedItemsLayout();
        } else if (qtableview_executedelayeditemslayout_callback != nullptr) {
            qtableview_executedelayeditemslayout_callback();
        } else {
            QTableView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qtableview_setdirtyregion_isbase) {
            qtableview_setdirtyregion_isbase = false;
            QTableView::setDirtyRegion(region);
        } else if (qtableview_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            qtableview_setdirtyregion_callback(this, cbval1);
        } else {
            QTableView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qtableview_scrolldirtyregion_isbase) {
            qtableview_scrolldirtyregion_isbase = false;
            QTableView::scrollDirtyRegion(dx, dy);
        } else if (qtableview_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qtableview_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            QTableView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qtableview_dirtyregionoffset_isbase) {
            qtableview_dirtyregionoffset_isbase = false;
            return QTableView::dirtyRegionOffset();
        } else if (qtableview_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = qtableview_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return QTableView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qtableview_startautoscroll_isbase) {
            qtableview_startautoscroll_isbase = false;
            QTableView::startAutoScroll();
        } else if (qtableview_startautoscroll_callback != nullptr) {
            qtableview_startautoscroll_callback();
        } else {
            QTableView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qtableview_stopautoscroll_isbase) {
            qtableview_stopautoscroll_isbase = false;
            QTableView::stopAutoScroll();
        } else if (qtableview_stopautoscroll_callback != nullptr) {
            qtableview_stopautoscroll_callback();
        } else {
            QTableView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qtableview_doautoscroll_isbase) {
            qtableview_doautoscroll_isbase = false;
            QTableView::doAutoScroll();
        } else if (qtableview_doautoscroll_callback != nullptr) {
            qtableview_doautoscroll_callback();
        } else {
            QTableView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qtableview_dropindicatorposition_isbase) {
            qtableview_dropindicatorposition_isbase = false;
            return QTableView::dropIndicatorPosition();
        } else if (qtableview_dropindicatorposition_callback != nullptr) {
            int callback_ret = qtableview_dropindicatorposition_callback();
            return static_cast<VirtualQTableView::DropIndicatorPosition>(callback_ret);
        } else {
            return QTableView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtableview_setviewportmargins_isbase) {
            qtableview_setviewportmargins_isbase = false;
            QTableView::setViewportMargins(left, top, right, bottom);
        } else if (qtableview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qtableview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QTableView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtableview_viewportmargins_isbase) {
            qtableview_viewportmargins_isbase = false;
            return QTableView::viewportMargins();
        } else if (qtableview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qtableview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QTableView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtableview_drawframe_isbase) {
            qtableview_drawframe_isbase = false;
            QTableView::drawFrame(param1);
        } else if (qtableview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qtableview_drawframe_callback(this, cbval1);
        } else {
            QTableView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtableview_updatemicrofocus_isbase) {
            qtableview_updatemicrofocus_isbase = false;
            QTableView::updateMicroFocus();
        } else if (qtableview_updatemicrofocus_callback != nullptr) {
            qtableview_updatemicrofocus_callback();
        } else {
            QTableView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtableview_create_isbase) {
            qtableview_create_isbase = false;
            QTableView::create();
        } else if (qtableview_create_callback != nullptr) {
            qtableview_create_callback();
        } else {
            QTableView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtableview_destroy_isbase) {
            qtableview_destroy_isbase = false;
            QTableView::destroy();
        } else if (qtableview_destroy_callback != nullptr) {
            qtableview_destroy_callback();
        } else {
            QTableView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtableview_focusnextchild_isbase) {
            qtableview_focusnextchild_isbase = false;
            return QTableView::focusNextChild();
        } else if (qtableview_focusnextchild_callback != nullptr) {
            bool callback_ret = qtableview_focusnextchild_callback();
            return callback_ret;
        } else {
            return QTableView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtableview_focuspreviouschild_isbase) {
            qtableview_focuspreviouschild_isbase = false;
            return QTableView::focusPreviousChild();
        } else if (qtableview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qtableview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QTableView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtableview_sender_isbase) {
            qtableview_sender_isbase = false;
            return QTableView::sender();
        } else if (qtableview_sender_callback != nullptr) {
            QObject* callback_ret = qtableview_sender_callback();
            return callback_ret;
        } else {
            return QTableView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtableview_sendersignalindex_isbase) {
            qtableview_sendersignalindex_isbase = false;
            return QTableView::senderSignalIndex();
        } else if (qtableview_sendersignalindex_callback != nullptr) {
            int callback_ret = qtableview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtableview_receivers_isbase) {
            qtableview_receivers_isbase = false;
            return QTableView::receivers(signal);
        } else if (qtableview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtableview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtableview_issignalconnected_isbase) {
            qtableview_issignalconnected_isbase = false;
            return QTableView::isSignalConnected(signal);
        } else if (qtableview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtableview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableView::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtableview_getdecodedmetricf_isbase) {
            qtableview_getdecodedmetricf_isbase = false;
            return QTableView::getDecodedMetricF(metricA, metricB);
        } else if (qtableview_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qtableview_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QTableView::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QTableView_ScrollContentsBy(QTableView* self, int dx, int dy);
    friend void QTableView_QBaseScrollContentsBy(QTableView* self, int dx, int dy);
    friend void QTableView_InitViewItemOption(const QTableView* self, QStyleOptionViewItem* option);
    friend void QTableView_QBaseInitViewItemOption(const QTableView* self, QStyleOptionViewItem* option);
    friend void QTableView_PaintEvent(QTableView* self, QPaintEvent* e);
    friend void QTableView_QBasePaintEvent(QTableView* self, QPaintEvent* e);
    friend void QTableView_TimerEvent(QTableView* self, QTimerEvent* event);
    friend void QTableView_QBaseTimerEvent(QTableView* self, QTimerEvent* event);
    friend void QTableView_DropEvent(QTableView* self, QDropEvent* event);
    friend void QTableView_QBaseDropEvent(QTableView* self, QDropEvent* event);
    friend int QTableView_HorizontalOffset(const QTableView* self);
    friend int QTableView_QBaseHorizontalOffset(const QTableView* self);
    friend int QTableView_VerticalOffset(const QTableView* self);
    friend int QTableView_QBaseVerticalOffset(const QTableView* self);
    friend QModelIndex* QTableView_MoveCursor(QTableView* self, int cursorAction, int modifiers);
    friend QModelIndex* QTableView_QBaseMoveCursor(QTableView* self, int cursorAction, int modifiers);
    friend void QTableView_SetSelection(QTableView* self, const QRect* rect, int command);
    friend void QTableView_QBaseSetSelection(QTableView* self, const QRect* rect, int command);
    friend QRegion* QTableView_VisualRegionForSelection(const QTableView* self, const QItemSelection* selection);
    friend QRegion* QTableView_QBaseVisualRegionForSelection(const QTableView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QTableView_SelectedIndexes(const QTableView* self);
    friend libqt_list /* of QModelIndex* */ QTableView_QBaseSelectedIndexes(const QTableView* self);
    friend void QTableView_UpdateGeometries(QTableView* self);
    friend void QTableView_QBaseUpdateGeometries(QTableView* self);
    friend QSize* QTableView_ViewportSizeHint(const QTableView* self);
    friend QSize* QTableView_QBaseViewportSizeHint(const QTableView* self);
    friend int QTableView_SizeHintForRow(const QTableView* self, int row);
    friend int QTableView_QBaseSizeHintForRow(const QTableView* self, int row);
    friend int QTableView_SizeHintForColumn(const QTableView* self, int column);
    friend int QTableView_QBaseSizeHintForColumn(const QTableView* self, int column);
    friend void QTableView_VerticalScrollbarAction(QTableView* self, int action);
    friend void QTableView_QBaseVerticalScrollbarAction(QTableView* self, int action);
    friend void QTableView_HorizontalScrollbarAction(QTableView* self, int action);
    friend void QTableView_QBaseHorizontalScrollbarAction(QTableView* self, int action);
    friend bool QTableView_IsIndexHidden(const QTableView* self, const QModelIndex* index);
    friend bool QTableView_QBaseIsIndexHidden(const QTableView* self, const QModelIndex* index);
    friend void QTableView_SelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTableView_QBaseSelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTableView_CurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTableView_QBaseCurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTableView_DataChanged(QTableView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QTableView_QBaseDataChanged(QTableView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QTableView_RowsInserted(QTableView* self, const QModelIndex* parent, int start, int end);
    friend void QTableView_QBaseRowsInserted(QTableView* self, const QModelIndex* parent, int start, int end);
    friend void QTableView_RowsAboutToBeRemoved(QTableView* self, const QModelIndex* parent, int start, int end);
    friend void QTableView_QBaseRowsAboutToBeRemoved(QTableView* self, const QModelIndex* parent, int start, int end);
    friend void QTableView_UpdateEditorData(QTableView* self);
    friend void QTableView_QBaseUpdateEditorData(QTableView* self);
    friend void QTableView_UpdateEditorGeometries(QTableView* self);
    friend void QTableView_QBaseUpdateEditorGeometries(QTableView* self);
    friend void QTableView_VerticalScrollbarValueChanged(QTableView* self, int value);
    friend void QTableView_QBaseVerticalScrollbarValueChanged(QTableView* self, int value);
    friend void QTableView_HorizontalScrollbarValueChanged(QTableView* self, int value);
    friend void QTableView_QBaseHorizontalScrollbarValueChanged(QTableView* self, int value);
    friend void QTableView_CloseEditor(QTableView* self, QWidget* editor, int hint);
    friend void QTableView_QBaseCloseEditor(QTableView* self, QWidget* editor, int hint);
    friend void QTableView_CommitData(QTableView* self, QWidget* editor);
    friend void QTableView_QBaseCommitData(QTableView* self, QWidget* editor);
    friend void QTableView_EditorDestroyed(QTableView* self, QObject* editor);
    friend void QTableView_QBaseEditorDestroyed(QTableView* self, QObject* editor);
    friend bool QTableView_Edit2(QTableView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QTableView_QBaseEdit2(QTableView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QTableView_SelectionCommand(const QTableView* self, const QModelIndex* index, const QEvent* event);
    friend int QTableView_QBaseSelectionCommand(const QTableView* self, const QModelIndex* index, const QEvent* event);
    friend void QTableView_StartDrag(QTableView* self, int supportedActions);
    friend void QTableView_QBaseStartDrag(QTableView* self, int supportedActions);
    friend bool QTableView_FocusNextPrevChild(QTableView* self, bool next);
    friend bool QTableView_QBaseFocusNextPrevChild(QTableView* self, bool next);
    friend bool QTableView_Event(QTableView* self, QEvent* event);
    friend bool QTableView_QBaseEvent(QTableView* self, QEvent* event);
    friend bool QTableView_ViewportEvent(QTableView* self, QEvent* event);
    friend bool QTableView_QBaseViewportEvent(QTableView* self, QEvent* event);
    friend void QTableView_MousePressEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_QBaseMousePressEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_MouseMoveEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_QBaseMouseMoveEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_MouseReleaseEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_QBaseMouseReleaseEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_MouseDoubleClickEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_QBaseMouseDoubleClickEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_DragEnterEvent(QTableView* self, QDragEnterEvent* event);
    friend void QTableView_QBaseDragEnterEvent(QTableView* self, QDragEnterEvent* event);
    friend void QTableView_DragMoveEvent(QTableView* self, QDragMoveEvent* event);
    friend void QTableView_QBaseDragMoveEvent(QTableView* self, QDragMoveEvent* event);
    friend void QTableView_DragLeaveEvent(QTableView* self, QDragLeaveEvent* event);
    friend void QTableView_QBaseDragLeaveEvent(QTableView* self, QDragLeaveEvent* event);
    friend void QTableView_FocusInEvent(QTableView* self, QFocusEvent* event);
    friend void QTableView_QBaseFocusInEvent(QTableView* self, QFocusEvent* event);
    friend void QTableView_FocusOutEvent(QTableView* self, QFocusEvent* event);
    friend void QTableView_QBaseFocusOutEvent(QTableView* self, QFocusEvent* event);
    friend void QTableView_KeyPressEvent(QTableView* self, QKeyEvent* event);
    friend void QTableView_QBaseKeyPressEvent(QTableView* self, QKeyEvent* event);
    friend void QTableView_ResizeEvent(QTableView* self, QResizeEvent* event);
    friend void QTableView_QBaseResizeEvent(QTableView* self, QResizeEvent* event);
    friend void QTableView_InputMethodEvent(QTableView* self, QInputMethodEvent* event);
    friend void QTableView_QBaseInputMethodEvent(QTableView* self, QInputMethodEvent* event);
    friend bool QTableView_EventFilter(QTableView* self, QObject* object, QEvent* event);
    friend bool QTableView_QBaseEventFilter(QTableView* self, QObject* object, QEvent* event);
    friend void QTableView_WheelEvent(QTableView* self, QWheelEvent* param1);
    friend void QTableView_QBaseWheelEvent(QTableView* self, QWheelEvent* param1);
    friend void QTableView_ContextMenuEvent(QTableView* self, QContextMenuEvent* param1);
    friend void QTableView_QBaseContextMenuEvent(QTableView* self, QContextMenuEvent* param1);
    friend void QTableView_ChangeEvent(QTableView* self, QEvent* param1);
    friend void QTableView_QBaseChangeEvent(QTableView* self, QEvent* param1);
    friend void QTableView_InitStyleOption(const QTableView* self, QStyleOptionFrame* option);
    friend void QTableView_QBaseInitStyleOption(const QTableView* self, QStyleOptionFrame* option);
    friend void QTableView_KeyReleaseEvent(QTableView* self, QKeyEvent* event);
    friend void QTableView_QBaseKeyReleaseEvent(QTableView* self, QKeyEvent* event);
    friend void QTableView_EnterEvent(QTableView* self, QEnterEvent* event);
    friend void QTableView_QBaseEnterEvent(QTableView* self, QEnterEvent* event);
    friend void QTableView_LeaveEvent(QTableView* self, QEvent* event);
    friend void QTableView_QBaseLeaveEvent(QTableView* self, QEvent* event);
    friend void QTableView_MoveEvent(QTableView* self, QMoveEvent* event);
    friend void QTableView_QBaseMoveEvent(QTableView* self, QMoveEvent* event);
    friend void QTableView_CloseEvent(QTableView* self, QCloseEvent* event);
    friend void QTableView_QBaseCloseEvent(QTableView* self, QCloseEvent* event);
    friend void QTableView_TabletEvent(QTableView* self, QTabletEvent* event);
    friend void QTableView_QBaseTabletEvent(QTableView* self, QTabletEvent* event);
    friend void QTableView_ActionEvent(QTableView* self, QActionEvent* event);
    friend void QTableView_QBaseActionEvent(QTableView* self, QActionEvent* event);
    friend void QTableView_ShowEvent(QTableView* self, QShowEvent* event);
    friend void QTableView_QBaseShowEvent(QTableView* self, QShowEvent* event);
    friend void QTableView_HideEvent(QTableView* self, QHideEvent* event);
    friend void QTableView_QBaseHideEvent(QTableView* self, QHideEvent* event);
    friend bool QTableView_NativeEvent(QTableView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTableView_QBaseNativeEvent(QTableView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTableView_Metric(const QTableView* self, int param1);
    friend int QTableView_QBaseMetric(const QTableView* self, int param1);
    friend void QTableView_InitPainter(const QTableView* self, QPainter* painter);
    friend void QTableView_QBaseInitPainter(const QTableView* self, QPainter* painter);
    friend QPaintDevice* QTableView_Redirected(const QTableView* self, QPoint* offset);
    friend QPaintDevice* QTableView_QBaseRedirected(const QTableView* self, QPoint* offset);
    friend QPainter* QTableView_SharedPainter(const QTableView* self);
    friend QPainter* QTableView_QBaseSharedPainter(const QTableView* self);
    friend void QTableView_ChildEvent(QTableView* self, QChildEvent* event);
    friend void QTableView_QBaseChildEvent(QTableView* self, QChildEvent* event);
    friend void QTableView_CustomEvent(QTableView* self, QEvent* event);
    friend void QTableView_QBaseCustomEvent(QTableView* self, QEvent* event);
    friend void QTableView_ConnectNotify(QTableView* self, const QMetaMethod* signal);
    friend void QTableView_QBaseConnectNotify(QTableView* self, const QMetaMethod* signal);
    friend void QTableView_DisconnectNotify(QTableView* self, const QMetaMethod* signal);
    friend void QTableView_QBaseDisconnectNotify(QTableView* self, const QMetaMethod* signal);
    friend void QTableView_RowMoved(QTableView* self, int row, int oldIndex, int newIndex);
    friend void QTableView_QBaseRowMoved(QTableView* self, int row, int oldIndex, int newIndex);
    friend void QTableView_ColumnMoved(QTableView* self, int column, int oldIndex, int newIndex);
    friend void QTableView_QBaseColumnMoved(QTableView* self, int column, int oldIndex, int newIndex);
    friend void QTableView_RowResized(QTableView* self, int row, int oldHeight, int newHeight);
    friend void QTableView_QBaseRowResized(QTableView* self, int row, int oldHeight, int newHeight);
    friend void QTableView_ColumnResized(QTableView* self, int column, int oldWidth, int newWidth);
    friend void QTableView_QBaseColumnResized(QTableView* self, int column, int oldWidth, int newWidth);
    friend void QTableView_RowCountChanged(QTableView* self, int oldCount, int newCount);
    friend void QTableView_QBaseRowCountChanged(QTableView* self, int oldCount, int newCount);
    friend void QTableView_ColumnCountChanged(QTableView* self, int oldCount, int newCount);
    friend void QTableView_QBaseColumnCountChanged(QTableView* self, int oldCount, int newCount);
    friend int QTableView_State(const QTableView* self);
    friend int QTableView_QBaseState(const QTableView* self);
    friend void QTableView_SetState(QTableView* self, int state);
    friend void QTableView_QBaseSetState(QTableView* self, int state);
    friend void QTableView_ScheduleDelayedItemsLayout(QTableView* self);
    friend void QTableView_QBaseScheduleDelayedItemsLayout(QTableView* self);
    friend void QTableView_ExecuteDelayedItemsLayout(QTableView* self);
    friend void QTableView_QBaseExecuteDelayedItemsLayout(QTableView* self);
    friend void QTableView_SetDirtyRegion(QTableView* self, const QRegion* region);
    friend void QTableView_QBaseSetDirtyRegion(QTableView* self, const QRegion* region);
    friend void QTableView_ScrollDirtyRegion(QTableView* self, int dx, int dy);
    friend void QTableView_QBaseScrollDirtyRegion(QTableView* self, int dx, int dy);
    friend QPoint* QTableView_DirtyRegionOffset(const QTableView* self);
    friend QPoint* QTableView_QBaseDirtyRegionOffset(const QTableView* self);
    friend void QTableView_StartAutoScroll(QTableView* self);
    friend void QTableView_QBaseStartAutoScroll(QTableView* self);
    friend void QTableView_StopAutoScroll(QTableView* self);
    friend void QTableView_QBaseStopAutoScroll(QTableView* self);
    friend void QTableView_DoAutoScroll(QTableView* self);
    friend void QTableView_QBaseDoAutoScroll(QTableView* self);
    friend int QTableView_DropIndicatorPosition(const QTableView* self);
    friend int QTableView_QBaseDropIndicatorPosition(const QTableView* self);
    friend void QTableView_SetViewportMargins(QTableView* self, int left, int top, int right, int bottom);
    friend void QTableView_QBaseSetViewportMargins(QTableView* self, int left, int top, int right, int bottom);
    friend QMargins* QTableView_ViewportMargins(const QTableView* self);
    friend QMargins* QTableView_QBaseViewportMargins(const QTableView* self);
    friend void QTableView_DrawFrame(QTableView* self, QPainter* param1);
    friend void QTableView_QBaseDrawFrame(QTableView* self, QPainter* param1);
    friend void QTableView_UpdateMicroFocus(QTableView* self);
    friend void QTableView_QBaseUpdateMicroFocus(QTableView* self);
    friend void QTableView_Create(QTableView* self);
    friend void QTableView_QBaseCreate(QTableView* self);
    friend void QTableView_Destroy(QTableView* self);
    friend void QTableView_QBaseDestroy(QTableView* self);
    friend bool QTableView_FocusNextChild(QTableView* self);
    friend bool QTableView_QBaseFocusNextChild(QTableView* self);
    friend bool QTableView_FocusPreviousChild(QTableView* self);
    friend bool QTableView_QBaseFocusPreviousChild(QTableView* self);
    friend QObject* QTableView_Sender(const QTableView* self);
    friend QObject* QTableView_QBaseSender(const QTableView* self);
    friend int QTableView_SenderSignalIndex(const QTableView* self);
    friend int QTableView_QBaseSenderSignalIndex(const QTableView* self);
    friend int QTableView_Receivers(const QTableView* self, const char* signal);
    friend int QTableView_QBaseReceivers(const QTableView* self, const char* signal);
    friend bool QTableView_IsSignalConnected(const QTableView* self, const QMetaMethod* signal);
    friend bool QTableView_QBaseIsSignalConnected(const QTableView* self, const QMetaMethod* signal);
    friend double QTableView_GetDecodedMetricF(const QTableView* self, int metricA, int metricB);
    friend double QTableView_QBaseGetDecodedMetricF(const QTableView* self, int metricA, int metricB);
};

#endif
