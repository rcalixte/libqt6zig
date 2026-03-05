#pragma once
#ifndef SRCC_LIBVIRTUALQTREEVIEW_H
#define SRCC_LIBVIRTUALQTREEVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTreeView so that we can call protected methods
class VirtualQTreeView final : public QTreeView {

  public:
    // Virtual class boolean flag
    bool isVirtualQTreeView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTreeView_MetaObject_Callback = QMetaObject* (*)();
    using QTreeView_Metacast_Callback = void* (*)(QTreeView*, const char*);
    using QTreeView_Metacall_Callback = int (*)(QTreeView*, int, int, void**);
    using QTreeView_SetModel_Callback = void (*)(QTreeView*, QAbstractItemModel*);
    using QTreeView_SetRootIndex_Callback = void (*)(QTreeView*, QModelIndex*);
    using QTreeView_SetSelectionModel_Callback = void (*)(QTreeView*, QItemSelectionModel*);
    using QTreeView_KeyboardSearch_Callback = void (*)(QTreeView*, const char*);
    using QTreeView_VisualRect_Callback = QRect* (*)(const QTreeView*, QModelIndex*);
    using QTreeView_ScrollTo_Callback = void (*)(QTreeView*, QModelIndex*, int);
    using QTreeView_IndexAt_Callback = QModelIndex* (*)(const QTreeView*, QPoint*);
    using QTreeView_DoItemsLayout_Callback = void (*)();
    using QTreeView_Reset_Callback = void (*)();
    using QTreeView_DataChanged_Callback = void (*)(QTreeView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QTreeView_SelectAll_Callback = void (*)();
    using QTreeView_VerticalScrollbarValueChanged_Callback = void (*)(QTreeView*, int);
    using QTreeView_ScrollContentsBy_Callback = void (*)(QTreeView*, int, int);
    using QTreeView_RowsInserted_Callback = void (*)(QTreeView*, QModelIndex*, int, int);
    using QTreeView_RowsAboutToBeRemoved_Callback = void (*)(QTreeView*, QModelIndex*, int, int);
    using QTreeView_MoveCursor_Callback = QModelIndex* (*)(QTreeView*, int, int);
    using QTreeView_HorizontalOffset_Callback = int (*)();
    using QTreeView_VerticalOffset_Callback = int (*)();
    using QTreeView_SetSelection_Callback = void (*)(QTreeView*, QRect*, int);
    using QTreeView_VisualRegionForSelection_Callback = QRegion* (*)(const QTreeView*, QItemSelection*);
    using QTreeView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QTreeView_ChangeEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_TimerEvent_Callback = void (*)(QTreeView*, QTimerEvent*);
    using QTreeView_PaintEvent_Callback = void (*)(QTreeView*, QPaintEvent*);
    using QTreeView_DrawRow_Callback = void (*)(const QTreeView*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using QTreeView_DrawBranches_Callback = void (*)(const QTreeView*, QPainter*, QRect*, QModelIndex*);
    using QTreeView_MousePressEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseReleaseEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseDoubleClickEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseMoveEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_KeyPressEvent_Callback = void (*)(QTreeView*, QKeyEvent*);
    using QTreeView_DragMoveEvent_Callback = void (*)(QTreeView*, QDragMoveEvent*);
    using QTreeView_ViewportEvent_Callback = bool (*)(QTreeView*, QEvent*);
    using QTreeView_UpdateGeometries_Callback = void (*)();
    using QTreeView_ViewportSizeHint_Callback = QSize* (*)();
    using QTreeView_SizeHintForColumn_Callback = int (*)(const QTreeView*, int);
    using QTreeView_HorizontalScrollbarAction_Callback = void (*)(QTreeView*, int);
    using QTreeView_IsIndexHidden_Callback = bool (*)(const QTreeView*, QModelIndex*);
    using QTreeView_SelectionChanged_Callback = void (*)(QTreeView*, QItemSelection*, QItemSelection*);
    using QTreeView_CurrentChanged_Callback = void (*)(QTreeView*, QModelIndex*, QModelIndex*);
    using QTreeView_SizeHintForRow_Callback = int (*)(const QTreeView*, int);
    using QTreeView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTreeView*, QModelIndex*);
    using QTreeView_InputMethodQuery_Callback = QVariant* (*)(const QTreeView*, int);
    using QTreeView_UpdateEditorData_Callback = void (*)();
    using QTreeView_UpdateEditorGeometries_Callback = void (*)();
    using QTreeView_VerticalScrollbarAction_Callback = void (*)(QTreeView*, int);
    using QTreeView_HorizontalScrollbarValueChanged_Callback = void (*)(QTreeView*, int);
    using QTreeView_CloseEditor_Callback = void (*)(QTreeView*, QWidget*, int);
    using QTreeView_CommitData_Callback = void (*)(QTreeView*, QWidget*);
    using QTreeView_EditorDestroyed_Callback = void (*)(QTreeView*, QObject*);
    using QTreeView_Edit2_Callback = bool (*)(QTreeView*, QModelIndex*, int, QEvent*);
    using QTreeView_SelectionCommand_Callback = int (*)(const QTreeView*, QModelIndex*, QEvent*);
    using QTreeView_StartDrag_Callback = void (*)(QTreeView*, int);
    using QTreeView_InitViewItemOption_Callback = void (*)(const QTreeView*, QStyleOptionViewItem*);
    using QTreeView_FocusNextPrevChild_Callback = bool (*)(QTreeView*, bool);
    using QTreeView_Event_Callback = bool (*)(QTreeView*, QEvent*);
    using QTreeView_DragEnterEvent_Callback = void (*)(QTreeView*, QDragEnterEvent*);
    using QTreeView_DragLeaveEvent_Callback = void (*)(QTreeView*, QDragLeaveEvent*);
    using QTreeView_DropEvent_Callback = void (*)(QTreeView*, QDropEvent*);
    using QTreeView_FocusInEvent_Callback = void (*)(QTreeView*, QFocusEvent*);
    using QTreeView_FocusOutEvent_Callback = void (*)(QTreeView*, QFocusEvent*);
    using QTreeView_ResizeEvent_Callback = void (*)(QTreeView*, QResizeEvent*);
    using QTreeView_InputMethodEvent_Callback = void (*)(QTreeView*, QInputMethodEvent*);
    using QTreeView_EventFilter_Callback = bool (*)(QTreeView*, QObject*, QEvent*);
    using QTreeView_MinimumSizeHint_Callback = QSize* (*)();
    using QTreeView_SizeHint_Callback = QSize* (*)();
    using QTreeView_SetupViewport_Callback = void (*)(QTreeView*, QWidget*);
    using QTreeView_WheelEvent_Callback = void (*)(QTreeView*, QWheelEvent*);
    using QTreeView_ContextMenuEvent_Callback = void (*)(QTreeView*, QContextMenuEvent*);
    using QTreeView_InitStyleOption_Callback = void (*)(const QTreeView*, QStyleOptionFrame*);
    using QTreeView_DevType_Callback = int (*)();
    using QTreeView_SetVisible_Callback = void (*)(QTreeView*, bool);
    using QTreeView_HeightForWidth_Callback = int (*)(const QTreeView*, int);
    using QTreeView_HasHeightForWidth_Callback = bool (*)();
    using QTreeView_PaintEngine_Callback = QPaintEngine* (*)();
    using QTreeView_KeyReleaseEvent_Callback = void (*)(QTreeView*, QKeyEvent*);
    using QTreeView_EnterEvent_Callback = void (*)(QTreeView*, QEnterEvent*);
    using QTreeView_LeaveEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_MoveEvent_Callback = void (*)(QTreeView*, QMoveEvent*);
    using QTreeView_CloseEvent_Callback = void (*)(QTreeView*, QCloseEvent*);
    using QTreeView_TabletEvent_Callback = void (*)(QTreeView*, QTabletEvent*);
    using QTreeView_ActionEvent_Callback = void (*)(QTreeView*, QActionEvent*);
    using QTreeView_ShowEvent_Callback = void (*)(QTreeView*, QShowEvent*);
    using QTreeView_HideEvent_Callback = void (*)(QTreeView*, QHideEvent*);
    using QTreeView_NativeEvent_Callback = bool (*)(QTreeView*, libqt_string, void*, intptr_t*);
    using QTreeView_Metric_Callback = int (*)(const QTreeView*, int);
    using QTreeView_InitPainter_Callback = void (*)(const QTreeView*, QPainter*);
    using QTreeView_Redirected_Callback = QPaintDevice* (*)(const QTreeView*, QPoint*);
    using QTreeView_SharedPainter_Callback = QPainter* (*)();
    using QTreeView_ChildEvent_Callback = void (*)(QTreeView*, QChildEvent*);
    using QTreeView_CustomEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_ConnectNotify_Callback = void (*)(QTreeView*, QMetaMethod*);
    using QTreeView_DisconnectNotify_Callback = void (*)(QTreeView*, QMetaMethod*);
    using QTreeView_ColumnResized_Callback = void (*)(QTreeView*, int, int, int);
    using QTreeView_ColumnCountChanged_Callback = void (*)(QTreeView*, int, int);
    using QTreeView_ColumnMoved_Callback = void (*)();
    using QTreeView_Reexpand_Callback = void (*)();
    using QTreeView_RowsRemoved_Callback = void (*)(QTreeView*, QModelIndex*, int, int);
    using QTreeView_DrawTree_Callback = void (*)(const QTreeView*, QPainter*, QRegion*);
    using QTreeView_IndexRowSizeHint_Callback = int (*)(const QTreeView*, QModelIndex*);
    using QTreeView_RowHeight_Callback = int (*)(const QTreeView*, QModelIndex*);
    using QTreeView_State_Callback = int (*)();
    using QTreeView_SetState_Callback = void (*)(QTreeView*, int);
    using QTreeView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QTreeView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QTreeView_SetDirtyRegion_Callback = void (*)(QTreeView*, QRegion*);
    using QTreeView_ScrollDirtyRegion_Callback = void (*)(QTreeView*, int, int);
    using QTreeView_DirtyRegionOffset_Callback = QPoint* (*)();
    using QTreeView_StartAutoScroll_Callback = void (*)();
    using QTreeView_StopAutoScroll_Callback = void (*)();
    using QTreeView_DoAutoScroll_Callback = void (*)();
    using QTreeView_DropIndicatorPosition_Callback = int (*)();
    using QTreeView_SetViewportMargins_Callback = void (*)(QTreeView*, int, int, int, int);
    using QTreeView_ViewportMargins_Callback = QMargins* (*)();
    using QTreeView_DrawFrame_Callback = void (*)(QTreeView*, QPainter*);
    using QTreeView_UpdateMicroFocus_Callback = void (*)();
    using QTreeView_Create_Callback = void (*)();
    using QTreeView_Destroy_Callback = void (*)();
    using QTreeView_FocusNextChild_Callback = bool (*)();
    using QTreeView_FocusPreviousChild_Callback = bool (*)();
    using QTreeView_Sender_Callback = QObject* (*)();
    using QTreeView_SenderSignalIndex_Callback = int (*)();
    using QTreeView_Receivers_Callback = int (*)(const QTreeView*, const char*);
    using QTreeView_IsSignalConnected_Callback = bool (*)(const QTreeView*, QMetaMethod*);
    using QTreeView_GetDecodedMetricF_Callback = double (*)(const QTreeView*, int, int);

  protected:
    // Instance callback storage
    QTreeView_MetaObject_Callback qtreeview_metaobject_callback = nullptr;
    QTreeView_Metacast_Callback qtreeview_metacast_callback = nullptr;
    QTreeView_Metacall_Callback qtreeview_metacall_callback = nullptr;
    QTreeView_SetModel_Callback qtreeview_setmodel_callback = nullptr;
    QTreeView_SetRootIndex_Callback qtreeview_setrootindex_callback = nullptr;
    QTreeView_SetSelectionModel_Callback qtreeview_setselectionmodel_callback = nullptr;
    QTreeView_KeyboardSearch_Callback qtreeview_keyboardsearch_callback = nullptr;
    QTreeView_VisualRect_Callback qtreeview_visualrect_callback = nullptr;
    QTreeView_ScrollTo_Callback qtreeview_scrollto_callback = nullptr;
    QTreeView_IndexAt_Callback qtreeview_indexat_callback = nullptr;
    QTreeView_DoItemsLayout_Callback qtreeview_doitemslayout_callback = nullptr;
    QTreeView_Reset_Callback qtreeview_reset_callback = nullptr;
    QTreeView_DataChanged_Callback qtreeview_datachanged_callback = nullptr;
    QTreeView_SelectAll_Callback qtreeview_selectall_callback = nullptr;
    QTreeView_VerticalScrollbarValueChanged_Callback qtreeview_verticalscrollbarvaluechanged_callback = nullptr;
    QTreeView_ScrollContentsBy_Callback qtreeview_scrollcontentsby_callback = nullptr;
    QTreeView_RowsInserted_Callback qtreeview_rowsinserted_callback = nullptr;
    QTreeView_RowsAboutToBeRemoved_Callback qtreeview_rowsabouttoberemoved_callback = nullptr;
    QTreeView_MoveCursor_Callback qtreeview_movecursor_callback = nullptr;
    QTreeView_HorizontalOffset_Callback qtreeview_horizontaloffset_callback = nullptr;
    QTreeView_VerticalOffset_Callback qtreeview_verticaloffset_callback = nullptr;
    QTreeView_SetSelection_Callback qtreeview_setselection_callback = nullptr;
    QTreeView_VisualRegionForSelection_Callback qtreeview_visualregionforselection_callback = nullptr;
    QTreeView_SelectedIndexes_Callback qtreeview_selectedindexes_callback = nullptr;
    QTreeView_ChangeEvent_Callback qtreeview_changeevent_callback = nullptr;
    QTreeView_TimerEvent_Callback qtreeview_timerevent_callback = nullptr;
    QTreeView_PaintEvent_Callback qtreeview_paintevent_callback = nullptr;
    QTreeView_DrawRow_Callback qtreeview_drawrow_callback = nullptr;
    QTreeView_DrawBranches_Callback qtreeview_drawbranches_callback = nullptr;
    QTreeView_MousePressEvent_Callback qtreeview_mousepressevent_callback = nullptr;
    QTreeView_MouseReleaseEvent_Callback qtreeview_mousereleaseevent_callback = nullptr;
    QTreeView_MouseDoubleClickEvent_Callback qtreeview_mousedoubleclickevent_callback = nullptr;
    QTreeView_MouseMoveEvent_Callback qtreeview_mousemoveevent_callback = nullptr;
    QTreeView_KeyPressEvent_Callback qtreeview_keypressevent_callback = nullptr;
    QTreeView_DragMoveEvent_Callback qtreeview_dragmoveevent_callback = nullptr;
    QTreeView_ViewportEvent_Callback qtreeview_viewportevent_callback = nullptr;
    QTreeView_UpdateGeometries_Callback qtreeview_updategeometries_callback = nullptr;
    QTreeView_ViewportSizeHint_Callback qtreeview_viewportsizehint_callback = nullptr;
    QTreeView_SizeHintForColumn_Callback qtreeview_sizehintforcolumn_callback = nullptr;
    QTreeView_HorizontalScrollbarAction_Callback qtreeview_horizontalscrollbaraction_callback = nullptr;
    QTreeView_IsIndexHidden_Callback qtreeview_isindexhidden_callback = nullptr;
    QTreeView_SelectionChanged_Callback qtreeview_selectionchanged_callback = nullptr;
    QTreeView_CurrentChanged_Callback qtreeview_currentchanged_callback = nullptr;
    QTreeView_SizeHintForRow_Callback qtreeview_sizehintforrow_callback = nullptr;
    QTreeView_ItemDelegateForIndex_Callback qtreeview_itemdelegateforindex_callback = nullptr;
    QTreeView_InputMethodQuery_Callback qtreeview_inputmethodquery_callback = nullptr;
    QTreeView_UpdateEditorData_Callback qtreeview_updateeditordata_callback = nullptr;
    QTreeView_UpdateEditorGeometries_Callback qtreeview_updateeditorgeometries_callback = nullptr;
    QTreeView_VerticalScrollbarAction_Callback qtreeview_verticalscrollbaraction_callback = nullptr;
    QTreeView_HorizontalScrollbarValueChanged_Callback qtreeview_horizontalscrollbarvaluechanged_callback = nullptr;
    QTreeView_CloseEditor_Callback qtreeview_closeeditor_callback = nullptr;
    QTreeView_CommitData_Callback qtreeview_commitdata_callback = nullptr;
    QTreeView_EditorDestroyed_Callback qtreeview_editordestroyed_callback = nullptr;
    QTreeView_Edit2_Callback qtreeview_edit2_callback = nullptr;
    QTreeView_SelectionCommand_Callback qtreeview_selectioncommand_callback = nullptr;
    QTreeView_StartDrag_Callback qtreeview_startdrag_callback = nullptr;
    QTreeView_InitViewItemOption_Callback qtreeview_initviewitemoption_callback = nullptr;
    QTreeView_FocusNextPrevChild_Callback qtreeview_focusnextprevchild_callback = nullptr;
    QTreeView_Event_Callback qtreeview_event_callback = nullptr;
    QTreeView_DragEnterEvent_Callback qtreeview_dragenterevent_callback = nullptr;
    QTreeView_DragLeaveEvent_Callback qtreeview_dragleaveevent_callback = nullptr;
    QTreeView_DropEvent_Callback qtreeview_dropevent_callback = nullptr;
    QTreeView_FocusInEvent_Callback qtreeview_focusinevent_callback = nullptr;
    QTreeView_FocusOutEvent_Callback qtreeview_focusoutevent_callback = nullptr;
    QTreeView_ResizeEvent_Callback qtreeview_resizeevent_callback = nullptr;
    QTreeView_InputMethodEvent_Callback qtreeview_inputmethodevent_callback = nullptr;
    QTreeView_EventFilter_Callback qtreeview_eventfilter_callback = nullptr;
    QTreeView_MinimumSizeHint_Callback qtreeview_minimumsizehint_callback = nullptr;
    QTreeView_SizeHint_Callback qtreeview_sizehint_callback = nullptr;
    QTreeView_SetupViewport_Callback qtreeview_setupviewport_callback = nullptr;
    QTreeView_WheelEvent_Callback qtreeview_wheelevent_callback = nullptr;
    QTreeView_ContextMenuEvent_Callback qtreeview_contextmenuevent_callback = nullptr;
    QTreeView_InitStyleOption_Callback qtreeview_initstyleoption_callback = nullptr;
    QTreeView_DevType_Callback qtreeview_devtype_callback = nullptr;
    QTreeView_SetVisible_Callback qtreeview_setvisible_callback = nullptr;
    QTreeView_HeightForWidth_Callback qtreeview_heightforwidth_callback = nullptr;
    QTreeView_HasHeightForWidth_Callback qtreeview_hasheightforwidth_callback = nullptr;
    QTreeView_PaintEngine_Callback qtreeview_paintengine_callback = nullptr;
    QTreeView_KeyReleaseEvent_Callback qtreeview_keyreleaseevent_callback = nullptr;
    QTreeView_EnterEvent_Callback qtreeview_enterevent_callback = nullptr;
    QTreeView_LeaveEvent_Callback qtreeview_leaveevent_callback = nullptr;
    QTreeView_MoveEvent_Callback qtreeview_moveevent_callback = nullptr;
    QTreeView_CloseEvent_Callback qtreeview_closeevent_callback = nullptr;
    QTreeView_TabletEvent_Callback qtreeview_tabletevent_callback = nullptr;
    QTreeView_ActionEvent_Callback qtreeview_actionevent_callback = nullptr;
    QTreeView_ShowEvent_Callback qtreeview_showevent_callback = nullptr;
    QTreeView_HideEvent_Callback qtreeview_hideevent_callback = nullptr;
    QTreeView_NativeEvent_Callback qtreeview_nativeevent_callback = nullptr;
    QTreeView_Metric_Callback qtreeview_metric_callback = nullptr;
    QTreeView_InitPainter_Callback qtreeview_initpainter_callback = nullptr;
    QTreeView_Redirected_Callback qtreeview_redirected_callback = nullptr;
    QTreeView_SharedPainter_Callback qtreeview_sharedpainter_callback = nullptr;
    QTreeView_ChildEvent_Callback qtreeview_childevent_callback = nullptr;
    QTreeView_CustomEvent_Callback qtreeview_customevent_callback = nullptr;
    QTreeView_ConnectNotify_Callback qtreeview_connectnotify_callback = nullptr;
    QTreeView_DisconnectNotify_Callback qtreeview_disconnectnotify_callback = nullptr;
    QTreeView_ColumnResized_Callback qtreeview_columnresized_callback = nullptr;
    QTreeView_ColumnCountChanged_Callback qtreeview_columncountchanged_callback = nullptr;
    QTreeView_ColumnMoved_Callback qtreeview_columnmoved_callback = nullptr;
    QTreeView_Reexpand_Callback qtreeview_reexpand_callback = nullptr;
    QTreeView_RowsRemoved_Callback qtreeview_rowsremoved_callback = nullptr;
    QTreeView_DrawTree_Callback qtreeview_drawtree_callback = nullptr;
    QTreeView_IndexRowSizeHint_Callback qtreeview_indexrowsizehint_callback = nullptr;
    QTreeView_RowHeight_Callback qtreeview_rowheight_callback = nullptr;
    QTreeView_State_Callback qtreeview_state_callback = nullptr;
    QTreeView_SetState_Callback qtreeview_setstate_callback = nullptr;
    QTreeView_ScheduleDelayedItemsLayout_Callback qtreeview_scheduledelayeditemslayout_callback = nullptr;
    QTreeView_ExecuteDelayedItemsLayout_Callback qtreeview_executedelayeditemslayout_callback = nullptr;
    QTreeView_SetDirtyRegion_Callback qtreeview_setdirtyregion_callback = nullptr;
    QTreeView_ScrollDirtyRegion_Callback qtreeview_scrolldirtyregion_callback = nullptr;
    QTreeView_DirtyRegionOffset_Callback qtreeview_dirtyregionoffset_callback = nullptr;
    QTreeView_StartAutoScroll_Callback qtreeview_startautoscroll_callback = nullptr;
    QTreeView_StopAutoScroll_Callback qtreeview_stopautoscroll_callback = nullptr;
    QTreeView_DoAutoScroll_Callback qtreeview_doautoscroll_callback = nullptr;
    QTreeView_DropIndicatorPosition_Callback qtreeview_dropindicatorposition_callback = nullptr;
    QTreeView_SetViewportMargins_Callback qtreeview_setviewportmargins_callback = nullptr;
    QTreeView_ViewportMargins_Callback qtreeview_viewportmargins_callback = nullptr;
    QTreeView_DrawFrame_Callback qtreeview_drawframe_callback = nullptr;
    QTreeView_UpdateMicroFocus_Callback qtreeview_updatemicrofocus_callback = nullptr;
    QTreeView_Create_Callback qtreeview_create_callback = nullptr;
    QTreeView_Destroy_Callback qtreeview_destroy_callback = nullptr;
    QTreeView_FocusNextChild_Callback qtreeview_focusnextchild_callback = nullptr;
    QTreeView_FocusPreviousChild_Callback qtreeview_focuspreviouschild_callback = nullptr;
    QTreeView_Sender_Callback qtreeview_sender_callback = nullptr;
    QTreeView_SenderSignalIndex_Callback qtreeview_sendersignalindex_callback = nullptr;
    QTreeView_Receivers_Callback qtreeview_receivers_callback = nullptr;
    QTreeView_IsSignalConnected_Callback qtreeview_issignalconnected_callback = nullptr;
    QTreeView_GetDecodedMetricF_Callback qtreeview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qtreeview_metaobject_isbase = false;
    mutable bool qtreeview_metacast_isbase = false;
    mutable bool qtreeview_metacall_isbase = false;
    mutable bool qtreeview_setmodel_isbase = false;
    mutable bool qtreeview_setrootindex_isbase = false;
    mutable bool qtreeview_setselectionmodel_isbase = false;
    mutable bool qtreeview_keyboardsearch_isbase = false;
    mutable bool qtreeview_visualrect_isbase = false;
    mutable bool qtreeview_scrollto_isbase = false;
    mutable bool qtreeview_indexat_isbase = false;
    mutable bool qtreeview_doitemslayout_isbase = false;
    mutable bool qtreeview_reset_isbase = false;
    mutable bool qtreeview_datachanged_isbase = false;
    mutable bool qtreeview_selectall_isbase = false;
    mutable bool qtreeview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qtreeview_scrollcontentsby_isbase = false;
    mutable bool qtreeview_rowsinserted_isbase = false;
    mutable bool qtreeview_rowsabouttoberemoved_isbase = false;
    mutable bool qtreeview_movecursor_isbase = false;
    mutable bool qtreeview_horizontaloffset_isbase = false;
    mutable bool qtreeview_verticaloffset_isbase = false;
    mutable bool qtreeview_setselection_isbase = false;
    mutable bool qtreeview_visualregionforselection_isbase = false;
    mutable bool qtreeview_selectedindexes_isbase = false;
    mutable bool qtreeview_changeevent_isbase = false;
    mutable bool qtreeview_timerevent_isbase = false;
    mutable bool qtreeview_paintevent_isbase = false;
    mutable bool qtreeview_drawrow_isbase = false;
    mutable bool qtreeview_drawbranches_isbase = false;
    mutable bool qtreeview_mousepressevent_isbase = false;
    mutable bool qtreeview_mousereleaseevent_isbase = false;
    mutable bool qtreeview_mousedoubleclickevent_isbase = false;
    mutable bool qtreeview_mousemoveevent_isbase = false;
    mutable bool qtreeview_keypressevent_isbase = false;
    mutable bool qtreeview_dragmoveevent_isbase = false;
    mutable bool qtreeview_viewportevent_isbase = false;
    mutable bool qtreeview_updategeometries_isbase = false;
    mutable bool qtreeview_viewportsizehint_isbase = false;
    mutable bool qtreeview_sizehintforcolumn_isbase = false;
    mutable bool qtreeview_horizontalscrollbaraction_isbase = false;
    mutable bool qtreeview_isindexhidden_isbase = false;
    mutable bool qtreeview_selectionchanged_isbase = false;
    mutable bool qtreeview_currentchanged_isbase = false;
    mutable bool qtreeview_sizehintforrow_isbase = false;
    mutable bool qtreeview_itemdelegateforindex_isbase = false;
    mutable bool qtreeview_inputmethodquery_isbase = false;
    mutable bool qtreeview_updateeditordata_isbase = false;
    mutable bool qtreeview_updateeditorgeometries_isbase = false;
    mutable bool qtreeview_verticalscrollbaraction_isbase = false;
    mutable bool qtreeview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qtreeview_closeeditor_isbase = false;
    mutable bool qtreeview_commitdata_isbase = false;
    mutable bool qtreeview_editordestroyed_isbase = false;
    mutable bool qtreeview_edit2_isbase = false;
    mutable bool qtreeview_selectioncommand_isbase = false;
    mutable bool qtreeview_startdrag_isbase = false;
    mutable bool qtreeview_initviewitemoption_isbase = false;
    mutable bool qtreeview_focusnextprevchild_isbase = false;
    mutable bool qtreeview_event_isbase = false;
    mutable bool qtreeview_dragenterevent_isbase = false;
    mutable bool qtreeview_dragleaveevent_isbase = false;
    mutable bool qtreeview_dropevent_isbase = false;
    mutable bool qtreeview_focusinevent_isbase = false;
    mutable bool qtreeview_focusoutevent_isbase = false;
    mutable bool qtreeview_resizeevent_isbase = false;
    mutable bool qtreeview_inputmethodevent_isbase = false;
    mutable bool qtreeview_eventfilter_isbase = false;
    mutable bool qtreeview_minimumsizehint_isbase = false;
    mutable bool qtreeview_sizehint_isbase = false;
    mutable bool qtreeview_setupviewport_isbase = false;
    mutable bool qtreeview_wheelevent_isbase = false;
    mutable bool qtreeview_contextmenuevent_isbase = false;
    mutable bool qtreeview_initstyleoption_isbase = false;
    mutable bool qtreeview_devtype_isbase = false;
    mutable bool qtreeview_setvisible_isbase = false;
    mutable bool qtreeview_heightforwidth_isbase = false;
    mutable bool qtreeview_hasheightforwidth_isbase = false;
    mutable bool qtreeview_paintengine_isbase = false;
    mutable bool qtreeview_keyreleaseevent_isbase = false;
    mutable bool qtreeview_enterevent_isbase = false;
    mutable bool qtreeview_leaveevent_isbase = false;
    mutable bool qtreeview_moveevent_isbase = false;
    mutable bool qtreeview_closeevent_isbase = false;
    mutable bool qtreeview_tabletevent_isbase = false;
    mutable bool qtreeview_actionevent_isbase = false;
    mutable bool qtreeview_showevent_isbase = false;
    mutable bool qtreeview_hideevent_isbase = false;
    mutable bool qtreeview_nativeevent_isbase = false;
    mutable bool qtreeview_metric_isbase = false;
    mutable bool qtreeview_initpainter_isbase = false;
    mutable bool qtreeview_redirected_isbase = false;
    mutable bool qtreeview_sharedpainter_isbase = false;
    mutable bool qtreeview_childevent_isbase = false;
    mutable bool qtreeview_customevent_isbase = false;
    mutable bool qtreeview_connectnotify_isbase = false;
    mutable bool qtreeview_disconnectnotify_isbase = false;
    mutable bool qtreeview_columnresized_isbase = false;
    mutable bool qtreeview_columncountchanged_isbase = false;
    mutable bool qtreeview_columnmoved_isbase = false;
    mutable bool qtreeview_reexpand_isbase = false;
    mutable bool qtreeview_rowsremoved_isbase = false;
    mutable bool qtreeview_drawtree_isbase = false;
    mutable bool qtreeview_indexrowsizehint_isbase = false;
    mutable bool qtreeview_rowheight_isbase = false;
    mutable bool qtreeview_state_isbase = false;
    mutable bool qtreeview_setstate_isbase = false;
    mutable bool qtreeview_scheduledelayeditemslayout_isbase = false;
    mutable bool qtreeview_executedelayeditemslayout_isbase = false;
    mutable bool qtreeview_setdirtyregion_isbase = false;
    mutable bool qtreeview_scrolldirtyregion_isbase = false;
    mutable bool qtreeview_dirtyregionoffset_isbase = false;
    mutable bool qtreeview_startautoscroll_isbase = false;
    mutable bool qtreeview_stopautoscroll_isbase = false;
    mutable bool qtreeview_doautoscroll_isbase = false;
    mutable bool qtreeview_dropindicatorposition_isbase = false;
    mutable bool qtreeview_setviewportmargins_isbase = false;
    mutable bool qtreeview_viewportmargins_isbase = false;
    mutable bool qtreeview_drawframe_isbase = false;
    mutable bool qtreeview_updatemicrofocus_isbase = false;
    mutable bool qtreeview_create_isbase = false;
    mutable bool qtreeview_destroy_isbase = false;
    mutable bool qtreeview_focusnextchild_isbase = false;
    mutable bool qtreeview_focuspreviouschild_isbase = false;
    mutable bool qtreeview_sender_isbase = false;
    mutable bool qtreeview_sendersignalindex_isbase = false;
    mutable bool qtreeview_receivers_isbase = false;
    mutable bool qtreeview_issignalconnected_isbase = false;
    mutable bool qtreeview_getdecodedmetricf_isbase = false;

  public:
    VirtualQTreeView(QWidget* parent) : QTreeView(parent) {};
    VirtualQTreeView() : QTreeView() {};

    // Callback setters
    inline void setQTreeView_MetaObject_Callback(QTreeView_MetaObject_Callback cb) { qtreeview_metaobject_callback = cb; }
    inline void setQTreeView_Metacast_Callback(QTreeView_Metacast_Callback cb) { qtreeview_metacast_callback = cb; }
    inline void setQTreeView_Metacall_Callback(QTreeView_Metacall_Callback cb) { qtreeview_metacall_callback = cb; }
    inline void setQTreeView_SetModel_Callback(QTreeView_SetModel_Callback cb) { qtreeview_setmodel_callback = cb; }
    inline void setQTreeView_SetRootIndex_Callback(QTreeView_SetRootIndex_Callback cb) { qtreeview_setrootindex_callback = cb; }
    inline void setQTreeView_SetSelectionModel_Callback(QTreeView_SetSelectionModel_Callback cb) { qtreeview_setselectionmodel_callback = cb; }
    inline void setQTreeView_KeyboardSearch_Callback(QTreeView_KeyboardSearch_Callback cb) { qtreeview_keyboardsearch_callback = cb; }
    inline void setQTreeView_VisualRect_Callback(QTreeView_VisualRect_Callback cb) { qtreeview_visualrect_callback = cb; }
    inline void setQTreeView_ScrollTo_Callback(QTreeView_ScrollTo_Callback cb) { qtreeview_scrollto_callback = cb; }
    inline void setQTreeView_IndexAt_Callback(QTreeView_IndexAt_Callback cb) { qtreeview_indexat_callback = cb; }
    inline void setQTreeView_DoItemsLayout_Callback(QTreeView_DoItemsLayout_Callback cb) { qtreeview_doitemslayout_callback = cb; }
    inline void setQTreeView_Reset_Callback(QTreeView_Reset_Callback cb) { qtreeview_reset_callback = cb; }
    inline void setQTreeView_DataChanged_Callback(QTreeView_DataChanged_Callback cb) { qtreeview_datachanged_callback = cb; }
    inline void setQTreeView_SelectAll_Callback(QTreeView_SelectAll_Callback cb) { qtreeview_selectall_callback = cb; }
    inline void setQTreeView_VerticalScrollbarValueChanged_Callback(QTreeView_VerticalScrollbarValueChanged_Callback cb) { qtreeview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQTreeView_ScrollContentsBy_Callback(QTreeView_ScrollContentsBy_Callback cb) { qtreeview_scrollcontentsby_callback = cb; }
    inline void setQTreeView_RowsInserted_Callback(QTreeView_RowsInserted_Callback cb) { qtreeview_rowsinserted_callback = cb; }
    inline void setQTreeView_RowsAboutToBeRemoved_Callback(QTreeView_RowsAboutToBeRemoved_Callback cb) { qtreeview_rowsabouttoberemoved_callback = cb; }
    inline void setQTreeView_MoveCursor_Callback(QTreeView_MoveCursor_Callback cb) { qtreeview_movecursor_callback = cb; }
    inline void setQTreeView_HorizontalOffset_Callback(QTreeView_HorizontalOffset_Callback cb) { qtreeview_horizontaloffset_callback = cb; }
    inline void setQTreeView_VerticalOffset_Callback(QTreeView_VerticalOffset_Callback cb) { qtreeview_verticaloffset_callback = cb; }
    inline void setQTreeView_SetSelection_Callback(QTreeView_SetSelection_Callback cb) { qtreeview_setselection_callback = cb; }
    inline void setQTreeView_VisualRegionForSelection_Callback(QTreeView_VisualRegionForSelection_Callback cb) { qtreeview_visualregionforselection_callback = cb; }
    inline void setQTreeView_SelectedIndexes_Callback(QTreeView_SelectedIndexes_Callback cb) { qtreeview_selectedindexes_callback = cb; }
    inline void setQTreeView_ChangeEvent_Callback(QTreeView_ChangeEvent_Callback cb) { qtreeview_changeevent_callback = cb; }
    inline void setQTreeView_TimerEvent_Callback(QTreeView_TimerEvent_Callback cb) { qtreeview_timerevent_callback = cb; }
    inline void setQTreeView_PaintEvent_Callback(QTreeView_PaintEvent_Callback cb) { qtreeview_paintevent_callback = cb; }
    inline void setQTreeView_DrawRow_Callback(QTreeView_DrawRow_Callback cb) { qtreeview_drawrow_callback = cb; }
    inline void setQTreeView_DrawBranches_Callback(QTreeView_DrawBranches_Callback cb) { qtreeview_drawbranches_callback = cb; }
    inline void setQTreeView_MousePressEvent_Callback(QTreeView_MousePressEvent_Callback cb) { qtreeview_mousepressevent_callback = cb; }
    inline void setQTreeView_MouseReleaseEvent_Callback(QTreeView_MouseReleaseEvent_Callback cb) { qtreeview_mousereleaseevent_callback = cb; }
    inline void setQTreeView_MouseDoubleClickEvent_Callback(QTreeView_MouseDoubleClickEvent_Callback cb) { qtreeview_mousedoubleclickevent_callback = cb; }
    inline void setQTreeView_MouseMoveEvent_Callback(QTreeView_MouseMoveEvent_Callback cb) { qtreeview_mousemoveevent_callback = cb; }
    inline void setQTreeView_KeyPressEvent_Callback(QTreeView_KeyPressEvent_Callback cb) { qtreeview_keypressevent_callback = cb; }
    inline void setQTreeView_DragMoveEvent_Callback(QTreeView_DragMoveEvent_Callback cb) { qtreeview_dragmoveevent_callback = cb; }
    inline void setQTreeView_ViewportEvent_Callback(QTreeView_ViewportEvent_Callback cb) { qtreeview_viewportevent_callback = cb; }
    inline void setQTreeView_UpdateGeometries_Callback(QTreeView_UpdateGeometries_Callback cb) { qtreeview_updategeometries_callback = cb; }
    inline void setQTreeView_ViewportSizeHint_Callback(QTreeView_ViewportSizeHint_Callback cb) { qtreeview_viewportsizehint_callback = cb; }
    inline void setQTreeView_SizeHintForColumn_Callback(QTreeView_SizeHintForColumn_Callback cb) { qtreeview_sizehintforcolumn_callback = cb; }
    inline void setQTreeView_HorizontalScrollbarAction_Callback(QTreeView_HorizontalScrollbarAction_Callback cb) { qtreeview_horizontalscrollbaraction_callback = cb; }
    inline void setQTreeView_IsIndexHidden_Callback(QTreeView_IsIndexHidden_Callback cb) { qtreeview_isindexhidden_callback = cb; }
    inline void setQTreeView_SelectionChanged_Callback(QTreeView_SelectionChanged_Callback cb) { qtreeview_selectionchanged_callback = cb; }
    inline void setQTreeView_CurrentChanged_Callback(QTreeView_CurrentChanged_Callback cb) { qtreeview_currentchanged_callback = cb; }
    inline void setQTreeView_SizeHintForRow_Callback(QTreeView_SizeHintForRow_Callback cb) { qtreeview_sizehintforrow_callback = cb; }
    inline void setQTreeView_ItemDelegateForIndex_Callback(QTreeView_ItemDelegateForIndex_Callback cb) { qtreeview_itemdelegateforindex_callback = cb; }
    inline void setQTreeView_InputMethodQuery_Callback(QTreeView_InputMethodQuery_Callback cb) { qtreeview_inputmethodquery_callback = cb; }
    inline void setQTreeView_UpdateEditorData_Callback(QTreeView_UpdateEditorData_Callback cb) { qtreeview_updateeditordata_callback = cb; }
    inline void setQTreeView_UpdateEditorGeometries_Callback(QTreeView_UpdateEditorGeometries_Callback cb) { qtreeview_updateeditorgeometries_callback = cb; }
    inline void setQTreeView_VerticalScrollbarAction_Callback(QTreeView_VerticalScrollbarAction_Callback cb) { qtreeview_verticalscrollbaraction_callback = cb; }
    inline void setQTreeView_HorizontalScrollbarValueChanged_Callback(QTreeView_HorizontalScrollbarValueChanged_Callback cb) { qtreeview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQTreeView_CloseEditor_Callback(QTreeView_CloseEditor_Callback cb) { qtreeview_closeeditor_callback = cb; }
    inline void setQTreeView_CommitData_Callback(QTreeView_CommitData_Callback cb) { qtreeview_commitdata_callback = cb; }
    inline void setQTreeView_EditorDestroyed_Callback(QTreeView_EditorDestroyed_Callback cb) { qtreeview_editordestroyed_callback = cb; }
    inline void setQTreeView_Edit2_Callback(QTreeView_Edit2_Callback cb) { qtreeview_edit2_callback = cb; }
    inline void setQTreeView_SelectionCommand_Callback(QTreeView_SelectionCommand_Callback cb) { qtreeview_selectioncommand_callback = cb; }
    inline void setQTreeView_StartDrag_Callback(QTreeView_StartDrag_Callback cb) { qtreeview_startdrag_callback = cb; }
    inline void setQTreeView_InitViewItemOption_Callback(QTreeView_InitViewItemOption_Callback cb) { qtreeview_initviewitemoption_callback = cb; }
    inline void setQTreeView_FocusNextPrevChild_Callback(QTreeView_FocusNextPrevChild_Callback cb) { qtreeview_focusnextprevchild_callback = cb; }
    inline void setQTreeView_Event_Callback(QTreeView_Event_Callback cb) { qtreeview_event_callback = cb; }
    inline void setQTreeView_DragEnterEvent_Callback(QTreeView_DragEnterEvent_Callback cb) { qtreeview_dragenterevent_callback = cb; }
    inline void setQTreeView_DragLeaveEvent_Callback(QTreeView_DragLeaveEvent_Callback cb) { qtreeview_dragleaveevent_callback = cb; }
    inline void setQTreeView_DropEvent_Callback(QTreeView_DropEvent_Callback cb) { qtreeview_dropevent_callback = cb; }
    inline void setQTreeView_FocusInEvent_Callback(QTreeView_FocusInEvent_Callback cb) { qtreeview_focusinevent_callback = cb; }
    inline void setQTreeView_FocusOutEvent_Callback(QTreeView_FocusOutEvent_Callback cb) { qtreeview_focusoutevent_callback = cb; }
    inline void setQTreeView_ResizeEvent_Callback(QTreeView_ResizeEvent_Callback cb) { qtreeview_resizeevent_callback = cb; }
    inline void setQTreeView_InputMethodEvent_Callback(QTreeView_InputMethodEvent_Callback cb) { qtreeview_inputmethodevent_callback = cb; }
    inline void setQTreeView_EventFilter_Callback(QTreeView_EventFilter_Callback cb) { qtreeview_eventfilter_callback = cb; }
    inline void setQTreeView_MinimumSizeHint_Callback(QTreeView_MinimumSizeHint_Callback cb) { qtreeview_minimumsizehint_callback = cb; }
    inline void setQTreeView_SizeHint_Callback(QTreeView_SizeHint_Callback cb) { qtreeview_sizehint_callback = cb; }
    inline void setQTreeView_SetupViewport_Callback(QTreeView_SetupViewport_Callback cb) { qtreeview_setupviewport_callback = cb; }
    inline void setQTreeView_WheelEvent_Callback(QTreeView_WheelEvent_Callback cb) { qtreeview_wheelevent_callback = cb; }
    inline void setQTreeView_ContextMenuEvent_Callback(QTreeView_ContextMenuEvent_Callback cb) { qtreeview_contextmenuevent_callback = cb; }
    inline void setQTreeView_InitStyleOption_Callback(QTreeView_InitStyleOption_Callback cb) { qtreeview_initstyleoption_callback = cb; }
    inline void setQTreeView_DevType_Callback(QTreeView_DevType_Callback cb) { qtreeview_devtype_callback = cb; }
    inline void setQTreeView_SetVisible_Callback(QTreeView_SetVisible_Callback cb) { qtreeview_setvisible_callback = cb; }
    inline void setQTreeView_HeightForWidth_Callback(QTreeView_HeightForWidth_Callback cb) { qtreeview_heightforwidth_callback = cb; }
    inline void setQTreeView_HasHeightForWidth_Callback(QTreeView_HasHeightForWidth_Callback cb) { qtreeview_hasheightforwidth_callback = cb; }
    inline void setQTreeView_PaintEngine_Callback(QTreeView_PaintEngine_Callback cb) { qtreeview_paintengine_callback = cb; }
    inline void setQTreeView_KeyReleaseEvent_Callback(QTreeView_KeyReleaseEvent_Callback cb) { qtreeview_keyreleaseevent_callback = cb; }
    inline void setQTreeView_EnterEvent_Callback(QTreeView_EnterEvent_Callback cb) { qtreeview_enterevent_callback = cb; }
    inline void setQTreeView_LeaveEvent_Callback(QTreeView_LeaveEvent_Callback cb) { qtreeview_leaveevent_callback = cb; }
    inline void setQTreeView_MoveEvent_Callback(QTreeView_MoveEvent_Callback cb) { qtreeview_moveevent_callback = cb; }
    inline void setQTreeView_CloseEvent_Callback(QTreeView_CloseEvent_Callback cb) { qtreeview_closeevent_callback = cb; }
    inline void setQTreeView_TabletEvent_Callback(QTreeView_TabletEvent_Callback cb) { qtreeview_tabletevent_callback = cb; }
    inline void setQTreeView_ActionEvent_Callback(QTreeView_ActionEvent_Callback cb) { qtreeview_actionevent_callback = cb; }
    inline void setQTreeView_ShowEvent_Callback(QTreeView_ShowEvent_Callback cb) { qtreeview_showevent_callback = cb; }
    inline void setQTreeView_HideEvent_Callback(QTreeView_HideEvent_Callback cb) { qtreeview_hideevent_callback = cb; }
    inline void setQTreeView_NativeEvent_Callback(QTreeView_NativeEvent_Callback cb) { qtreeview_nativeevent_callback = cb; }
    inline void setQTreeView_Metric_Callback(QTreeView_Metric_Callback cb) { qtreeview_metric_callback = cb; }
    inline void setQTreeView_InitPainter_Callback(QTreeView_InitPainter_Callback cb) { qtreeview_initpainter_callback = cb; }
    inline void setQTreeView_Redirected_Callback(QTreeView_Redirected_Callback cb) { qtreeview_redirected_callback = cb; }
    inline void setQTreeView_SharedPainter_Callback(QTreeView_SharedPainter_Callback cb) { qtreeview_sharedpainter_callback = cb; }
    inline void setQTreeView_ChildEvent_Callback(QTreeView_ChildEvent_Callback cb) { qtreeview_childevent_callback = cb; }
    inline void setQTreeView_CustomEvent_Callback(QTreeView_CustomEvent_Callback cb) { qtreeview_customevent_callback = cb; }
    inline void setQTreeView_ConnectNotify_Callback(QTreeView_ConnectNotify_Callback cb) { qtreeview_connectnotify_callback = cb; }
    inline void setQTreeView_DisconnectNotify_Callback(QTreeView_DisconnectNotify_Callback cb) { qtreeview_disconnectnotify_callback = cb; }
    inline void setQTreeView_ColumnResized_Callback(QTreeView_ColumnResized_Callback cb) { qtreeview_columnresized_callback = cb; }
    inline void setQTreeView_ColumnCountChanged_Callback(QTreeView_ColumnCountChanged_Callback cb) { qtreeview_columncountchanged_callback = cb; }
    inline void setQTreeView_ColumnMoved_Callback(QTreeView_ColumnMoved_Callback cb) { qtreeview_columnmoved_callback = cb; }
    inline void setQTreeView_Reexpand_Callback(QTreeView_Reexpand_Callback cb) { qtreeview_reexpand_callback = cb; }
    inline void setQTreeView_RowsRemoved_Callback(QTreeView_RowsRemoved_Callback cb) { qtreeview_rowsremoved_callback = cb; }
    inline void setQTreeView_DrawTree_Callback(QTreeView_DrawTree_Callback cb) { qtreeview_drawtree_callback = cb; }
    inline void setQTreeView_IndexRowSizeHint_Callback(QTreeView_IndexRowSizeHint_Callback cb) { qtreeview_indexrowsizehint_callback = cb; }
    inline void setQTreeView_RowHeight_Callback(QTreeView_RowHeight_Callback cb) { qtreeview_rowheight_callback = cb; }
    inline void setQTreeView_State_Callback(QTreeView_State_Callback cb) { qtreeview_state_callback = cb; }
    inline void setQTreeView_SetState_Callback(QTreeView_SetState_Callback cb) { qtreeview_setstate_callback = cb; }
    inline void setQTreeView_ScheduleDelayedItemsLayout_Callback(QTreeView_ScheduleDelayedItemsLayout_Callback cb) { qtreeview_scheduledelayeditemslayout_callback = cb; }
    inline void setQTreeView_ExecuteDelayedItemsLayout_Callback(QTreeView_ExecuteDelayedItemsLayout_Callback cb) { qtreeview_executedelayeditemslayout_callback = cb; }
    inline void setQTreeView_SetDirtyRegion_Callback(QTreeView_SetDirtyRegion_Callback cb) { qtreeview_setdirtyregion_callback = cb; }
    inline void setQTreeView_ScrollDirtyRegion_Callback(QTreeView_ScrollDirtyRegion_Callback cb) { qtreeview_scrolldirtyregion_callback = cb; }
    inline void setQTreeView_DirtyRegionOffset_Callback(QTreeView_DirtyRegionOffset_Callback cb) { qtreeview_dirtyregionoffset_callback = cb; }
    inline void setQTreeView_StartAutoScroll_Callback(QTreeView_StartAutoScroll_Callback cb) { qtreeview_startautoscroll_callback = cb; }
    inline void setQTreeView_StopAutoScroll_Callback(QTreeView_StopAutoScroll_Callback cb) { qtreeview_stopautoscroll_callback = cb; }
    inline void setQTreeView_DoAutoScroll_Callback(QTreeView_DoAutoScroll_Callback cb) { qtreeview_doautoscroll_callback = cb; }
    inline void setQTreeView_DropIndicatorPosition_Callback(QTreeView_DropIndicatorPosition_Callback cb) { qtreeview_dropindicatorposition_callback = cb; }
    inline void setQTreeView_SetViewportMargins_Callback(QTreeView_SetViewportMargins_Callback cb) { qtreeview_setviewportmargins_callback = cb; }
    inline void setQTreeView_ViewportMargins_Callback(QTreeView_ViewportMargins_Callback cb) { qtreeview_viewportmargins_callback = cb; }
    inline void setQTreeView_DrawFrame_Callback(QTreeView_DrawFrame_Callback cb) { qtreeview_drawframe_callback = cb; }
    inline void setQTreeView_UpdateMicroFocus_Callback(QTreeView_UpdateMicroFocus_Callback cb) { qtreeview_updatemicrofocus_callback = cb; }
    inline void setQTreeView_Create_Callback(QTreeView_Create_Callback cb) { qtreeview_create_callback = cb; }
    inline void setQTreeView_Destroy_Callback(QTreeView_Destroy_Callback cb) { qtreeview_destroy_callback = cb; }
    inline void setQTreeView_FocusNextChild_Callback(QTreeView_FocusNextChild_Callback cb) { qtreeview_focusnextchild_callback = cb; }
    inline void setQTreeView_FocusPreviousChild_Callback(QTreeView_FocusPreviousChild_Callback cb) { qtreeview_focuspreviouschild_callback = cb; }
    inline void setQTreeView_Sender_Callback(QTreeView_Sender_Callback cb) { qtreeview_sender_callback = cb; }
    inline void setQTreeView_SenderSignalIndex_Callback(QTreeView_SenderSignalIndex_Callback cb) { qtreeview_sendersignalindex_callback = cb; }
    inline void setQTreeView_Receivers_Callback(QTreeView_Receivers_Callback cb) { qtreeview_receivers_callback = cb; }
    inline void setQTreeView_IsSignalConnected_Callback(QTreeView_IsSignalConnected_Callback cb) { qtreeview_issignalconnected_callback = cb; }
    inline void setQTreeView_GetDecodedMetricF_Callback(QTreeView_GetDecodedMetricF_Callback cb) { qtreeview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQTreeView_MetaObject_IsBase(bool value) const { qtreeview_metaobject_isbase = value; }
    inline void setQTreeView_Metacast_IsBase(bool value) const { qtreeview_metacast_isbase = value; }
    inline void setQTreeView_Metacall_IsBase(bool value) const { qtreeview_metacall_isbase = value; }
    inline void setQTreeView_SetModel_IsBase(bool value) const { qtreeview_setmodel_isbase = value; }
    inline void setQTreeView_SetRootIndex_IsBase(bool value) const { qtreeview_setrootindex_isbase = value; }
    inline void setQTreeView_SetSelectionModel_IsBase(bool value) const { qtreeview_setselectionmodel_isbase = value; }
    inline void setQTreeView_KeyboardSearch_IsBase(bool value) const { qtreeview_keyboardsearch_isbase = value; }
    inline void setQTreeView_VisualRect_IsBase(bool value) const { qtreeview_visualrect_isbase = value; }
    inline void setQTreeView_ScrollTo_IsBase(bool value) const { qtreeview_scrollto_isbase = value; }
    inline void setQTreeView_IndexAt_IsBase(bool value) const { qtreeview_indexat_isbase = value; }
    inline void setQTreeView_DoItemsLayout_IsBase(bool value) const { qtreeview_doitemslayout_isbase = value; }
    inline void setQTreeView_Reset_IsBase(bool value) const { qtreeview_reset_isbase = value; }
    inline void setQTreeView_DataChanged_IsBase(bool value) const { qtreeview_datachanged_isbase = value; }
    inline void setQTreeView_SelectAll_IsBase(bool value) const { qtreeview_selectall_isbase = value; }
    inline void setQTreeView_VerticalScrollbarValueChanged_IsBase(bool value) const { qtreeview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQTreeView_ScrollContentsBy_IsBase(bool value) const { qtreeview_scrollcontentsby_isbase = value; }
    inline void setQTreeView_RowsInserted_IsBase(bool value) const { qtreeview_rowsinserted_isbase = value; }
    inline void setQTreeView_RowsAboutToBeRemoved_IsBase(bool value) const { qtreeview_rowsabouttoberemoved_isbase = value; }
    inline void setQTreeView_MoveCursor_IsBase(bool value) const { qtreeview_movecursor_isbase = value; }
    inline void setQTreeView_HorizontalOffset_IsBase(bool value) const { qtreeview_horizontaloffset_isbase = value; }
    inline void setQTreeView_VerticalOffset_IsBase(bool value) const { qtreeview_verticaloffset_isbase = value; }
    inline void setQTreeView_SetSelection_IsBase(bool value) const { qtreeview_setselection_isbase = value; }
    inline void setQTreeView_VisualRegionForSelection_IsBase(bool value) const { qtreeview_visualregionforselection_isbase = value; }
    inline void setQTreeView_SelectedIndexes_IsBase(bool value) const { qtreeview_selectedindexes_isbase = value; }
    inline void setQTreeView_ChangeEvent_IsBase(bool value) const { qtreeview_changeevent_isbase = value; }
    inline void setQTreeView_TimerEvent_IsBase(bool value) const { qtreeview_timerevent_isbase = value; }
    inline void setQTreeView_PaintEvent_IsBase(bool value) const { qtreeview_paintevent_isbase = value; }
    inline void setQTreeView_DrawRow_IsBase(bool value) const { qtreeview_drawrow_isbase = value; }
    inline void setQTreeView_DrawBranches_IsBase(bool value) const { qtreeview_drawbranches_isbase = value; }
    inline void setQTreeView_MousePressEvent_IsBase(bool value) const { qtreeview_mousepressevent_isbase = value; }
    inline void setQTreeView_MouseReleaseEvent_IsBase(bool value) const { qtreeview_mousereleaseevent_isbase = value; }
    inline void setQTreeView_MouseDoubleClickEvent_IsBase(bool value) const { qtreeview_mousedoubleclickevent_isbase = value; }
    inline void setQTreeView_MouseMoveEvent_IsBase(bool value) const { qtreeview_mousemoveevent_isbase = value; }
    inline void setQTreeView_KeyPressEvent_IsBase(bool value) const { qtreeview_keypressevent_isbase = value; }
    inline void setQTreeView_DragMoveEvent_IsBase(bool value) const { qtreeview_dragmoveevent_isbase = value; }
    inline void setQTreeView_ViewportEvent_IsBase(bool value) const { qtreeview_viewportevent_isbase = value; }
    inline void setQTreeView_UpdateGeometries_IsBase(bool value) const { qtreeview_updategeometries_isbase = value; }
    inline void setQTreeView_ViewportSizeHint_IsBase(bool value) const { qtreeview_viewportsizehint_isbase = value; }
    inline void setQTreeView_SizeHintForColumn_IsBase(bool value) const { qtreeview_sizehintforcolumn_isbase = value; }
    inline void setQTreeView_HorizontalScrollbarAction_IsBase(bool value) const { qtreeview_horizontalscrollbaraction_isbase = value; }
    inline void setQTreeView_IsIndexHidden_IsBase(bool value) const { qtreeview_isindexhidden_isbase = value; }
    inline void setQTreeView_SelectionChanged_IsBase(bool value) const { qtreeview_selectionchanged_isbase = value; }
    inline void setQTreeView_CurrentChanged_IsBase(bool value) const { qtreeview_currentchanged_isbase = value; }
    inline void setQTreeView_SizeHintForRow_IsBase(bool value) const { qtreeview_sizehintforrow_isbase = value; }
    inline void setQTreeView_ItemDelegateForIndex_IsBase(bool value) const { qtreeview_itemdelegateforindex_isbase = value; }
    inline void setQTreeView_InputMethodQuery_IsBase(bool value) const { qtreeview_inputmethodquery_isbase = value; }
    inline void setQTreeView_UpdateEditorData_IsBase(bool value) const { qtreeview_updateeditordata_isbase = value; }
    inline void setQTreeView_UpdateEditorGeometries_IsBase(bool value) const { qtreeview_updateeditorgeometries_isbase = value; }
    inline void setQTreeView_VerticalScrollbarAction_IsBase(bool value) const { qtreeview_verticalscrollbaraction_isbase = value; }
    inline void setQTreeView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qtreeview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQTreeView_CloseEditor_IsBase(bool value) const { qtreeview_closeeditor_isbase = value; }
    inline void setQTreeView_CommitData_IsBase(bool value) const { qtreeview_commitdata_isbase = value; }
    inline void setQTreeView_EditorDestroyed_IsBase(bool value) const { qtreeview_editordestroyed_isbase = value; }
    inline void setQTreeView_Edit2_IsBase(bool value) const { qtreeview_edit2_isbase = value; }
    inline void setQTreeView_SelectionCommand_IsBase(bool value) const { qtreeview_selectioncommand_isbase = value; }
    inline void setQTreeView_StartDrag_IsBase(bool value) const { qtreeview_startdrag_isbase = value; }
    inline void setQTreeView_InitViewItemOption_IsBase(bool value) const { qtreeview_initviewitemoption_isbase = value; }
    inline void setQTreeView_FocusNextPrevChild_IsBase(bool value) const { qtreeview_focusnextprevchild_isbase = value; }
    inline void setQTreeView_Event_IsBase(bool value) const { qtreeview_event_isbase = value; }
    inline void setQTreeView_DragEnterEvent_IsBase(bool value) const { qtreeview_dragenterevent_isbase = value; }
    inline void setQTreeView_DragLeaveEvent_IsBase(bool value) const { qtreeview_dragleaveevent_isbase = value; }
    inline void setQTreeView_DropEvent_IsBase(bool value) const { qtreeview_dropevent_isbase = value; }
    inline void setQTreeView_FocusInEvent_IsBase(bool value) const { qtreeview_focusinevent_isbase = value; }
    inline void setQTreeView_FocusOutEvent_IsBase(bool value) const { qtreeview_focusoutevent_isbase = value; }
    inline void setQTreeView_ResizeEvent_IsBase(bool value) const { qtreeview_resizeevent_isbase = value; }
    inline void setQTreeView_InputMethodEvent_IsBase(bool value) const { qtreeview_inputmethodevent_isbase = value; }
    inline void setQTreeView_EventFilter_IsBase(bool value) const { qtreeview_eventfilter_isbase = value; }
    inline void setQTreeView_MinimumSizeHint_IsBase(bool value) const { qtreeview_minimumsizehint_isbase = value; }
    inline void setQTreeView_SizeHint_IsBase(bool value) const { qtreeview_sizehint_isbase = value; }
    inline void setQTreeView_SetupViewport_IsBase(bool value) const { qtreeview_setupviewport_isbase = value; }
    inline void setQTreeView_WheelEvent_IsBase(bool value) const { qtreeview_wheelevent_isbase = value; }
    inline void setQTreeView_ContextMenuEvent_IsBase(bool value) const { qtreeview_contextmenuevent_isbase = value; }
    inline void setQTreeView_InitStyleOption_IsBase(bool value) const { qtreeview_initstyleoption_isbase = value; }
    inline void setQTreeView_DevType_IsBase(bool value) const { qtreeview_devtype_isbase = value; }
    inline void setQTreeView_SetVisible_IsBase(bool value) const { qtreeview_setvisible_isbase = value; }
    inline void setQTreeView_HeightForWidth_IsBase(bool value) const { qtreeview_heightforwidth_isbase = value; }
    inline void setQTreeView_HasHeightForWidth_IsBase(bool value) const { qtreeview_hasheightforwidth_isbase = value; }
    inline void setQTreeView_PaintEngine_IsBase(bool value) const { qtreeview_paintengine_isbase = value; }
    inline void setQTreeView_KeyReleaseEvent_IsBase(bool value) const { qtreeview_keyreleaseevent_isbase = value; }
    inline void setQTreeView_EnterEvent_IsBase(bool value) const { qtreeview_enterevent_isbase = value; }
    inline void setQTreeView_LeaveEvent_IsBase(bool value) const { qtreeview_leaveevent_isbase = value; }
    inline void setQTreeView_MoveEvent_IsBase(bool value) const { qtreeview_moveevent_isbase = value; }
    inline void setQTreeView_CloseEvent_IsBase(bool value) const { qtreeview_closeevent_isbase = value; }
    inline void setQTreeView_TabletEvent_IsBase(bool value) const { qtreeview_tabletevent_isbase = value; }
    inline void setQTreeView_ActionEvent_IsBase(bool value) const { qtreeview_actionevent_isbase = value; }
    inline void setQTreeView_ShowEvent_IsBase(bool value) const { qtreeview_showevent_isbase = value; }
    inline void setQTreeView_HideEvent_IsBase(bool value) const { qtreeview_hideevent_isbase = value; }
    inline void setQTreeView_NativeEvent_IsBase(bool value) const { qtreeview_nativeevent_isbase = value; }
    inline void setQTreeView_Metric_IsBase(bool value) const { qtreeview_metric_isbase = value; }
    inline void setQTreeView_InitPainter_IsBase(bool value) const { qtreeview_initpainter_isbase = value; }
    inline void setQTreeView_Redirected_IsBase(bool value) const { qtreeview_redirected_isbase = value; }
    inline void setQTreeView_SharedPainter_IsBase(bool value) const { qtreeview_sharedpainter_isbase = value; }
    inline void setQTreeView_ChildEvent_IsBase(bool value) const { qtreeview_childevent_isbase = value; }
    inline void setQTreeView_CustomEvent_IsBase(bool value) const { qtreeview_customevent_isbase = value; }
    inline void setQTreeView_ConnectNotify_IsBase(bool value) const { qtreeview_connectnotify_isbase = value; }
    inline void setQTreeView_DisconnectNotify_IsBase(bool value) const { qtreeview_disconnectnotify_isbase = value; }
    inline void setQTreeView_ColumnResized_IsBase(bool value) const { qtreeview_columnresized_isbase = value; }
    inline void setQTreeView_ColumnCountChanged_IsBase(bool value) const { qtreeview_columncountchanged_isbase = value; }
    inline void setQTreeView_ColumnMoved_IsBase(bool value) const { qtreeview_columnmoved_isbase = value; }
    inline void setQTreeView_Reexpand_IsBase(bool value) const { qtreeview_reexpand_isbase = value; }
    inline void setQTreeView_RowsRemoved_IsBase(bool value) const { qtreeview_rowsremoved_isbase = value; }
    inline void setQTreeView_DrawTree_IsBase(bool value) const { qtreeview_drawtree_isbase = value; }
    inline void setQTreeView_IndexRowSizeHint_IsBase(bool value) const { qtreeview_indexrowsizehint_isbase = value; }
    inline void setQTreeView_RowHeight_IsBase(bool value) const { qtreeview_rowheight_isbase = value; }
    inline void setQTreeView_State_IsBase(bool value) const { qtreeview_state_isbase = value; }
    inline void setQTreeView_SetState_IsBase(bool value) const { qtreeview_setstate_isbase = value; }
    inline void setQTreeView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qtreeview_scheduledelayeditemslayout_isbase = value; }
    inline void setQTreeView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qtreeview_executedelayeditemslayout_isbase = value; }
    inline void setQTreeView_SetDirtyRegion_IsBase(bool value) const { qtreeview_setdirtyregion_isbase = value; }
    inline void setQTreeView_ScrollDirtyRegion_IsBase(bool value) const { qtreeview_scrolldirtyregion_isbase = value; }
    inline void setQTreeView_DirtyRegionOffset_IsBase(bool value) const { qtreeview_dirtyregionoffset_isbase = value; }
    inline void setQTreeView_StartAutoScroll_IsBase(bool value) const { qtreeview_startautoscroll_isbase = value; }
    inline void setQTreeView_StopAutoScroll_IsBase(bool value) const { qtreeview_stopautoscroll_isbase = value; }
    inline void setQTreeView_DoAutoScroll_IsBase(bool value) const { qtreeview_doautoscroll_isbase = value; }
    inline void setQTreeView_DropIndicatorPosition_IsBase(bool value) const { qtreeview_dropindicatorposition_isbase = value; }
    inline void setQTreeView_SetViewportMargins_IsBase(bool value) const { qtreeview_setviewportmargins_isbase = value; }
    inline void setQTreeView_ViewportMargins_IsBase(bool value) const { qtreeview_viewportmargins_isbase = value; }
    inline void setQTreeView_DrawFrame_IsBase(bool value) const { qtreeview_drawframe_isbase = value; }
    inline void setQTreeView_UpdateMicroFocus_IsBase(bool value) const { qtreeview_updatemicrofocus_isbase = value; }
    inline void setQTreeView_Create_IsBase(bool value) const { qtreeview_create_isbase = value; }
    inline void setQTreeView_Destroy_IsBase(bool value) const { qtreeview_destroy_isbase = value; }
    inline void setQTreeView_FocusNextChild_IsBase(bool value) const { qtreeview_focusnextchild_isbase = value; }
    inline void setQTreeView_FocusPreviousChild_IsBase(bool value) const { qtreeview_focuspreviouschild_isbase = value; }
    inline void setQTreeView_Sender_IsBase(bool value) const { qtreeview_sender_isbase = value; }
    inline void setQTreeView_SenderSignalIndex_IsBase(bool value) const { qtreeview_sendersignalindex_isbase = value; }
    inline void setQTreeView_Receivers_IsBase(bool value) const { qtreeview_receivers_isbase = value; }
    inline void setQTreeView_IsSignalConnected_IsBase(bool value) const { qtreeview_issignalconnected_isbase = value; }
    inline void setQTreeView_GetDecodedMetricF_IsBase(bool value) const { qtreeview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtreeview_metaobject_isbase) {
            qtreeview_metaobject_isbase = false;
            return QTreeView::metaObject();
        }
        auto metaobject_cb = qtreeview_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTreeView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtreeview_metacast_isbase) {
            qtreeview_metacast_isbase = false;
            return QTreeView::qt_metacast(param1);
        }
        auto metacast_cb = qtreeview_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTreeView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtreeview_metacall_isbase) {
            qtreeview_metacall_isbase = false;
            return QTreeView::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtreeview_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qtreeview_setmodel_isbase) {
            qtreeview_setmodel_isbase = false;
            QTreeView::setModel(model);
            return;
        }
        auto setmodel_cb = qtreeview_setmodel_callback;
        if (setmodel_cb) {
            QAbstractItemModel* cbval1 = model;

            setmodel_cb(this, cbval1);
            return;
        }
        QTreeView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtreeview_setrootindex_isbase) {
            qtreeview_setrootindex_isbase = false;
            QTreeView::setRootIndex(index);
            return;
        }
        auto setrootindex_cb = qtreeview_setrootindex_callback;
        if (setrootindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            setrootindex_cb(this, cbval1);
            return;
        }
        QTreeView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtreeview_setselectionmodel_isbase) {
            qtreeview_setselectionmodel_isbase = false;
            QTreeView::setSelectionModel(selectionModel);
            return;
        }
        auto setselectionmodel_cb = qtreeview_setselectionmodel_callback;
        if (setselectionmodel_cb) {
            QItemSelectionModel* cbval1 = selectionModel;

            setselectionmodel_cb(this, cbval1);
            return;
        }
        QTreeView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtreeview_keyboardsearch_isbase) {
            qtreeview_keyboardsearch_isbase = false;
            QTreeView::keyboardSearch(search);
            return;
        }
        auto keyboardsearch_cb = qtreeview_keyboardsearch_callback;
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
        QTreeView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtreeview_visualrect_isbase) {
            qtreeview_visualrect_isbase = false;
            return QTreeView::visualRect(index);
        }
        auto visualrect_cb = qtreeview_visualrect_callback;
        if (visualrect_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = visualrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QTreeView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtreeview_scrollto_isbase) {
            qtreeview_scrollto_isbase = false;
            QTreeView::scrollTo(index, hint);
            return;
        }
        auto scrollto_cb = qtreeview_scrollto_callback;
        if (scrollto_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            scrollto_cb(this, cbval1, cbval2);
            return;
        }
        QTreeView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtreeview_indexat_isbase) {
            qtreeview_indexat_isbase = false;
            return QTreeView::indexAt(p);
        }
        auto indexat_cb = qtreeview_indexat_callback;
        if (indexat_cb) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = indexat_cb(this, cbval1);
            return *callback_ret;
        }
        return QTreeView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtreeview_doitemslayout_isbase) {
            qtreeview_doitemslayout_isbase = false;
            QTreeView::doItemsLayout();
            return;
        }
        auto doitemslayout_cb = qtreeview_doitemslayout_callback;
        if (doitemslayout_cb) {
            doitemslayout_cb();
            return;
        }
        QTreeView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtreeview_reset_isbase) {
            qtreeview_reset_isbase = false;
            QTreeView::reset();
            return;
        }
        auto reset_cb = qtreeview_reset_callback;
        if (reset_cb) {
            reset_cb();
            return;
        }
        QTreeView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtreeview_datachanged_isbase) {
            qtreeview_datachanged_isbase = false;
            QTreeView::dataChanged(topLeft, bottomRight, roles);
            return;
        }
        auto datachanged_cb = qtreeview_datachanged_callback;
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
        QTreeView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtreeview_selectall_isbase) {
            qtreeview_selectall_isbase = false;
            QTreeView::selectAll();
            return;
        }
        auto selectall_cb = qtreeview_selectall_callback;
        if (selectall_cb) {
            selectall_cb();
            return;
        }
        QTreeView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtreeview_verticalscrollbarvaluechanged_isbase) {
            qtreeview_verticalscrollbarvaluechanged_isbase = false;
            QTreeView::verticalScrollbarValueChanged(value);
            return;
        }
        auto verticalscrollbarvaluechanged_cb = qtreeview_verticalscrollbarvaluechanged_callback;
        if (verticalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            verticalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QTreeView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtreeview_scrollcontentsby_isbase) {
            qtreeview_scrollcontentsby_isbase = false;
            QTreeView::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qtreeview_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QTreeView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtreeview_rowsinserted_isbase) {
            qtreeview_rowsinserted_isbase = false;
            QTreeView::rowsInserted(parent, start, end);
            return;
        }
        auto rowsinserted_cb = qtreeview_rowsinserted_callback;
        if (rowsinserted_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsinserted_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtreeview_rowsabouttoberemoved_isbase) {
            qtreeview_rowsabouttoberemoved_isbase = false;
            QTreeView::rowsAboutToBeRemoved(parent, start, end);
            return;
        }
        auto rowsabouttoberemoved_cb = qtreeview_rowsabouttoberemoved_callback;
        if (rowsabouttoberemoved_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsabouttoberemoved_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtreeview_movecursor_isbase) {
            qtreeview_movecursor_isbase = false;
            return QTreeView::moveCursor(cursorAction, modifiers);
        }
        auto movecursor_cb = qtreeview_movecursor_callback;
        if (movecursor_cb) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = movecursor_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QTreeView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtreeview_horizontaloffset_isbase) {
            qtreeview_horizontaloffset_isbase = false;
            return QTreeView::horizontalOffset();
        }
        auto horizontaloffset_cb = qtreeview_horizontaloffset_callback;
        if (horizontaloffset_cb) {
            int callback_ret = horizontaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return QTreeView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtreeview_verticaloffset_isbase) {
            qtreeview_verticaloffset_isbase = false;
            return QTreeView::verticalOffset();
        }
        auto verticaloffset_cb = qtreeview_verticaloffset_callback;
        if (verticaloffset_cb) {
            int callback_ret = verticaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return QTreeView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtreeview_setselection_isbase) {
            qtreeview_setselection_isbase = false;
            QTreeView::setSelection(rect, command);
            return;
        }
        auto setselection_cb = qtreeview_setselection_callback;
        if (setselection_cb) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            setselection_cb(this, cbval1, cbval2);
            return;
        }
        QTreeView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtreeview_visualregionforselection_isbase) {
            qtreeview_visualregionforselection_isbase = false;
            return QTreeView::visualRegionForSelection(selection);
        }
        auto visualregionforselection_cb = qtreeview_visualregionforselection_callback;
        if (visualregionforselection_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = visualregionforselection_cb(this, cbval1);
            return *callback_ret;
        }
        return QTreeView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qtreeview_selectedindexes_isbase) {
            qtreeview_selectedindexes_isbase = false;
            return QTreeView::selectedIndexes();
        }
        auto selectedindexes_cb = qtreeview_selectedindexes_callback;
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
        return QTreeView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtreeview_changeevent_isbase) {
            qtreeview_changeevent_isbase = false;
            QTreeView::changeEvent(event);
            return;
        }
        auto changeevent_cb = qtreeview_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QTreeView::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtreeview_timerevent_isbase) {
            qtreeview_timerevent_isbase = false;
            QTreeView::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtreeview_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTreeView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtreeview_paintevent_isbase) {
            qtreeview_paintevent_isbase = false;
            QTreeView::paintEvent(event);
            return;
        }
        auto paintevent_cb = qtreeview_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QTreeView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
        if (qtreeview_drawrow_isbase) {
            qtreeview_drawrow_isbase = false;
            QTreeView::drawRow(painter, options, index);
            return;
        }
        auto drawrow_cb = qtreeview_drawrow_callback;
        if (drawrow_cb) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& options_ret = options;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&options_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            drawrow_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::drawRow(painter, options, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
        if (qtreeview_drawbranches_isbase) {
            qtreeview_drawbranches_isbase = false;
            QTreeView::drawBranches(painter, rect, index);
            return;
        }
        auto drawbranches_cb = qtreeview_drawbranches_callback;
        if (drawbranches_cb) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            drawbranches_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::drawBranches(painter, rect, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtreeview_mousepressevent_isbase) {
            qtreeview_mousepressevent_isbase = false;
            QTreeView::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qtreeview_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QTreeView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtreeview_mousereleaseevent_isbase) {
            qtreeview_mousereleaseevent_isbase = false;
            QTreeView::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qtreeview_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QTreeView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtreeview_mousedoubleclickevent_isbase) {
            qtreeview_mousedoubleclickevent_isbase = false;
            QTreeView::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qtreeview_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QTreeView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtreeview_mousemoveevent_isbase) {
            qtreeview_mousemoveevent_isbase = false;
            QTreeView::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qtreeview_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QTreeView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtreeview_keypressevent_isbase) {
            qtreeview_keypressevent_isbase = false;
            QTreeView::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qtreeview_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QTreeView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtreeview_dragmoveevent_isbase) {
            qtreeview_dragmoveevent_isbase = false;
            QTreeView::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qtreeview_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QTreeView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtreeview_viewportevent_isbase) {
            qtreeview_viewportevent_isbase = false;
            return QTreeView::viewportEvent(event);
        }
        auto viewportevent_cb = qtreeview_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QTreeView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtreeview_updategeometries_isbase) {
            qtreeview_updategeometries_isbase = false;
            QTreeView::updateGeometries();
            return;
        }
        auto updategeometries_cb = qtreeview_updategeometries_callback;
        if (updategeometries_cb) {
            updategeometries_cb();
            return;
        }
        QTreeView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtreeview_viewportsizehint_isbase) {
            qtreeview_viewportsizehint_isbase = false;
            return QTreeView::viewportSizeHint();
        }
        auto viewportsizehint_cb = qtreeview_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QTreeView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtreeview_sizehintforcolumn_isbase) {
            qtreeview_sizehintforcolumn_isbase = false;
            return QTreeView::sizeHintForColumn(column);
        }
        auto sizehintforcolumn_cb = qtreeview_sizehintforcolumn_callback;
        if (sizehintforcolumn_cb) {
            int cbval1 = column;

            int callback_ret = sizehintforcolumn_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtreeview_horizontalscrollbaraction_isbase) {
            qtreeview_horizontalscrollbaraction_isbase = false;
            QTreeView::horizontalScrollbarAction(action);
            return;
        }
        auto horizontalscrollbaraction_cb = qtreeview_horizontalscrollbaraction_callback;
        if (horizontalscrollbaraction_cb) {
            int cbval1 = action;

            horizontalscrollbaraction_cb(this, cbval1);
            return;
        }
        QTreeView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtreeview_isindexhidden_isbase) {
            qtreeview_isindexhidden_isbase = false;
            return QTreeView::isIndexHidden(index);
        }
        auto isindexhidden_cb = qtreeview_isindexhidden_callback;
        if (isindexhidden_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = isindexhidden_cb(this, cbval1);
            return callback_ret;
        }
        return QTreeView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtreeview_selectionchanged_isbase) {
            qtreeview_selectionchanged_isbase = false;
            QTreeView::selectionChanged(selected, deselected);
            return;
        }
        auto selectionchanged_cb = qtreeview_selectionchanged_callback;
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
        QTreeView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtreeview_currentchanged_isbase) {
            qtreeview_currentchanged_isbase = false;
            QTreeView::currentChanged(current, previous);
            return;
        }
        auto currentchanged_cb = qtreeview_currentchanged_callback;
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
        QTreeView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtreeview_sizehintforrow_isbase) {
            qtreeview_sizehintforrow_isbase = false;
            return QTreeView::sizeHintForRow(row);
        }
        auto sizehintforrow_cb = qtreeview_sizehintforrow_callback;
        if (sizehintforrow_cb) {
            int cbval1 = row;

            int callback_ret = sizehintforrow_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtreeview_itemdelegateforindex_isbase) {
            qtreeview_itemdelegateforindex_isbase = false;
            return QTreeView::itemDelegateForIndex(index);
        }
        auto itemdelegateforindex_cb = qtreeview_itemdelegateforindex_callback;
        if (itemdelegateforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = itemdelegateforindex_cb(this, cbval1);
            return callback_ret;
        }
        return QTreeView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtreeview_inputmethodquery_isbase) {
            qtreeview_inputmethodquery_isbase = false;
            return QTreeView::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qtreeview_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QTreeView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtreeview_updateeditordata_isbase) {
            qtreeview_updateeditordata_isbase = false;
            QTreeView::updateEditorData();
            return;
        }
        auto updateeditordata_cb = qtreeview_updateeditordata_callback;
        if (updateeditordata_cb) {
            updateeditordata_cb();
            return;
        }
        QTreeView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtreeview_updateeditorgeometries_isbase) {
            qtreeview_updateeditorgeometries_isbase = false;
            QTreeView::updateEditorGeometries();
            return;
        }
        auto updateeditorgeometries_cb = qtreeview_updateeditorgeometries_callback;
        if (updateeditorgeometries_cb) {
            updateeditorgeometries_cb();
            return;
        }
        QTreeView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtreeview_verticalscrollbaraction_isbase) {
            qtreeview_verticalscrollbaraction_isbase = false;
            QTreeView::verticalScrollbarAction(action);
            return;
        }
        auto verticalscrollbaraction_cb = qtreeview_verticalscrollbaraction_callback;
        if (verticalscrollbaraction_cb) {
            int cbval1 = action;

            verticalscrollbaraction_cb(this, cbval1);
            return;
        }
        QTreeView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtreeview_horizontalscrollbarvaluechanged_isbase) {
            qtreeview_horizontalscrollbarvaluechanged_isbase = false;
            QTreeView::horizontalScrollbarValueChanged(value);
            return;
        }
        auto horizontalscrollbarvaluechanged_cb = qtreeview_horizontalscrollbarvaluechanged_callback;
        if (horizontalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            horizontalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QTreeView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtreeview_closeeditor_isbase) {
            qtreeview_closeeditor_isbase = false;
            QTreeView::closeEditor(editor, hint);
            return;
        }
        auto closeeditor_cb = qtreeview_closeeditor_callback;
        if (closeeditor_cb) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            closeeditor_cb(this, cbval1, cbval2);
            return;
        }
        QTreeView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtreeview_commitdata_isbase) {
            qtreeview_commitdata_isbase = false;
            QTreeView::commitData(editor);
            return;
        }
        auto commitdata_cb = qtreeview_commitdata_callback;
        if (commitdata_cb) {
            QWidget* cbval1 = editor;

            commitdata_cb(this, cbval1);
            return;
        }
        QTreeView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtreeview_editordestroyed_isbase) {
            qtreeview_editordestroyed_isbase = false;
            QTreeView::editorDestroyed(editor);
            return;
        }
        auto editordestroyed_cb = qtreeview_editordestroyed_callback;
        if (editordestroyed_cb) {
            QObject* cbval1 = editor;

            editordestroyed_cb(this, cbval1);
            return;
        }
        QTreeView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtreeview_edit2_isbase) {
            qtreeview_edit2_isbase = false;
            return QTreeView::edit(index, trigger, event);
        }
        auto edit2_cb = qtreeview_edit2_callback;
        if (edit2_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = edit2_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTreeView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtreeview_selectioncommand_isbase) {
            qtreeview_selectioncommand_isbase = false;
            return QTreeView::selectionCommand(index, event);
        }
        auto selectioncommand_cb = qtreeview_selectioncommand_callback;
        if (selectioncommand_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = selectioncommand_cb(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QTreeView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtreeview_startdrag_isbase) {
            qtreeview_startdrag_isbase = false;
            QTreeView::startDrag(supportedActions);
            return;
        }
        auto startdrag_cb = qtreeview_startdrag_callback;
        if (startdrag_cb) {
            int cbval1 = static_cast<int>(supportedActions);

            startdrag_cb(this, cbval1);
            return;
        }
        QTreeView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtreeview_initviewitemoption_isbase) {
            qtreeview_initviewitemoption_isbase = false;
            QTreeView::initViewItemOption(option);
            return;
        }
        auto initviewitemoption_cb = qtreeview_initviewitemoption_callback;
        if (initviewitemoption_cb) {
            QStyleOptionViewItem* cbval1 = option;

            initviewitemoption_cb(this, cbval1);
            return;
        }
        QTreeView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtreeview_focusnextprevchild_isbase) {
            qtreeview_focusnextprevchild_isbase = false;
            return QTreeView::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qtreeview_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QTreeView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtreeview_event_isbase) {
            qtreeview_event_isbase = false;
            return QTreeView::event(event);
        }
        auto event_cb = qtreeview_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTreeView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtreeview_dragenterevent_isbase) {
            qtreeview_dragenterevent_isbase = false;
            QTreeView::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qtreeview_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QTreeView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtreeview_dragleaveevent_isbase) {
            qtreeview_dragleaveevent_isbase = false;
            QTreeView::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qtreeview_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QTreeView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtreeview_dropevent_isbase) {
            qtreeview_dropevent_isbase = false;
            QTreeView::dropEvent(event);
            return;
        }
        auto dropevent_cb = qtreeview_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QTreeView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtreeview_focusinevent_isbase) {
            qtreeview_focusinevent_isbase = false;
            QTreeView::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qtreeview_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QTreeView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtreeview_focusoutevent_isbase) {
            qtreeview_focusoutevent_isbase = false;
            QTreeView::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qtreeview_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QTreeView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtreeview_resizeevent_isbase) {
            qtreeview_resizeevent_isbase = false;
            QTreeView::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qtreeview_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QTreeView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtreeview_inputmethodevent_isbase) {
            qtreeview_inputmethodevent_isbase = false;
            QTreeView::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qtreeview_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QTreeView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtreeview_eventfilter_isbase) {
            qtreeview_eventfilter_isbase = false;
            return QTreeView::eventFilter(object, event);
        }
        auto eventfilter_cb = qtreeview_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTreeView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtreeview_minimumsizehint_isbase) {
            qtreeview_minimumsizehint_isbase = false;
            return QTreeView::minimumSizeHint();
        }
        auto minimumsizehint_cb = qtreeview_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QTreeView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtreeview_sizehint_isbase) {
            qtreeview_sizehint_isbase = false;
            return QTreeView::sizeHint();
        }
        auto sizehint_cb = qtreeview_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QTreeView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtreeview_setupviewport_isbase) {
            qtreeview_setupviewport_isbase = false;
            QTreeView::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qtreeview_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QTreeView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtreeview_wheelevent_isbase) {
            qtreeview_wheelevent_isbase = false;
            QTreeView::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = qtreeview_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;

            wheelevent_cb(this, cbval1);
            return;
        }
        QTreeView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtreeview_contextmenuevent_isbase) {
            qtreeview_contextmenuevent_isbase = false;
            QTreeView::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qtreeview_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QTreeView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtreeview_initstyleoption_isbase) {
            qtreeview_initstyleoption_isbase = false;
            QTreeView::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qtreeview_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QTreeView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtreeview_devtype_isbase) {
            qtreeview_devtype_isbase = false;
            return QTreeView::devType();
        }
        auto devtype_cb = qtreeview_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QTreeView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtreeview_setvisible_isbase) {
            qtreeview_setvisible_isbase = false;
            QTreeView::setVisible(visible);
            return;
        }
        auto setvisible_cb = qtreeview_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QTreeView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtreeview_heightforwidth_isbase) {
            qtreeview_heightforwidth_isbase = false;
            return QTreeView::heightForWidth(param1);
        }
        auto heightforwidth_cb = qtreeview_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtreeview_hasheightforwidth_isbase) {
            qtreeview_hasheightforwidth_isbase = false;
            return QTreeView::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qtreeview_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QTreeView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtreeview_paintengine_isbase) {
            qtreeview_paintengine_isbase = false;
            return QTreeView::paintEngine();
        }
        auto paintengine_cb = qtreeview_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QTreeView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtreeview_keyreleaseevent_isbase) {
            qtreeview_keyreleaseevent_isbase = false;
            QTreeView::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qtreeview_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QTreeView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtreeview_enterevent_isbase) {
            qtreeview_enterevent_isbase = false;
            QTreeView::enterEvent(event);
            return;
        }
        auto enterevent_cb = qtreeview_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QTreeView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtreeview_leaveevent_isbase) {
            qtreeview_leaveevent_isbase = false;
            QTreeView::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qtreeview_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QTreeView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtreeview_moveevent_isbase) {
            qtreeview_moveevent_isbase = false;
            QTreeView::moveEvent(event);
            return;
        }
        auto moveevent_cb = qtreeview_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QTreeView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtreeview_closeevent_isbase) {
            qtreeview_closeevent_isbase = false;
            QTreeView::closeEvent(event);
            return;
        }
        auto closeevent_cb = qtreeview_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QTreeView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtreeview_tabletevent_isbase) {
            qtreeview_tabletevent_isbase = false;
            QTreeView::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qtreeview_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QTreeView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtreeview_actionevent_isbase) {
            qtreeview_actionevent_isbase = false;
            QTreeView::actionEvent(event);
            return;
        }
        auto actionevent_cb = qtreeview_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QTreeView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtreeview_showevent_isbase) {
            qtreeview_showevent_isbase = false;
            QTreeView::showEvent(event);
            return;
        }
        auto showevent_cb = qtreeview_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QTreeView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtreeview_hideevent_isbase) {
            qtreeview_hideevent_isbase = false;
            QTreeView::hideEvent(event);
            return;
        }
        auto hideevent_cb = qtreeview_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QTreeView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtreeview_nativeevent_isbase) {
            qtreeview_nativeevent_isbase = false;
            return QTreeView::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qtreeview_nativeevent_callback;
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
        return QTreeView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtreeview_metric_isbase) {
            qtreeview_metric_isbase = false;
            return QTreeView::metric(param1);
        }
        auto metric_cb = qtreeview_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtreeview_initpainter_isbase) {
            qtreeview_initpainter_isbase = false;
            QTreeView::initPainter(painter);
            return;
        }
        auto initpainter_cb = qtreeview_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QTreeView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtreeview_redirected_isbase) {
            qtreeview_redirected_isbase = false;
            return QTreeView::redirected(offset);
        }
        auto redirected_cb = qtreeview_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QTreeView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtreeview_sharedpainter_isbase) {
            qtreeview_sharedpainter_isbase = false;
            return QTreeView::sharedPainter();
        }
        auto sharedpainter_cb = qtreeview_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QTreeView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtreeview_childevent_isbase) {
            qtreeview_childevent_isbase = false;
            QTreeView::childEvent(event);
            return;
        }
        auto childevent_cb = qtreeview_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTreeView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtreeview_customevent_isbase) {
            qtreeview_customevent_isbase = false;
            QTreeView::customEvent(event);
            return;
        }
        auto customevent_cb = qtreeview_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTreeView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtreeview_connectnotify_isbase) {
            qtreeview_connectnotify_isbase = false;
            QTreeView::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtreeview_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTreeView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtreeview_disconnectnotify_isbase) {
            qtreeview_disconnectnotify_isbase = false;
            QTreeView::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtreeview_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTreeView::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void columnResized(int column, int oldSize, int newSize) {
        if (qtreeview_columnresized_isbase) {
            qtreeview_columnresized_isbase = false;
            QTreeView::columnResized(column, oldSize, newSize);
            return;
        }
        auto columnresized_cb = qtreeview_columnresized_callback;
        if (columnresized_cb) {
            int cbval1 = column;
            int cbval2 = oldSize;
            int cbval3 = newSize;

            columnresized_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::columnResized(column, oldSize, newSize);
    }

    // Virtual method for C ABI access and custom callback
    void columnCountChanged(int oldCount, int newCount) {
        if (qtreeview_columncountchanged_isbase) {
            qtreeview_columncountchanged_isbase = false;
            QTreeView::columnCountChanged(oldCount, newCount);
            return;
        }
        auto columncountchanged_cb = qtreeview_columncountchanged_callback;
        if (columncountchanged_cb) {
            int cbval1 = oldCount;
            int cbval2 = newCount;

            columncountchanged_cb(this, cbval1, cbval2);
            return;
        }
        QTreeView::columnCountChanged(oldCount, newCount);
    }

    // Virtual method for C ABI access and custom callback
    void columnMoved() {
        if (qtreeview_columnmoved_isbase) {
            qtreeview_columnmoved_isbase = false;
            QTreeView::columnMoved();
            return;
        }
        auto columnmoved_cb = qtreeview_columnmoved_callback;
        if (columnmoved_cb) {
            columnmoved_cb();
            return;
        }
        QTreeView::columnMoved();
    }

    // Virtual method for C ABI access and custom callback
    void reexpand() {
        if (qtreeview_reexpand_isbase) {
            qtreeview_reexpand_isbase = false;
            QTreeView::reexpand();
            return;
        }
        auto reexpand_cb = qtreeview_reexpand_callback;
        if (reexpand_cb) {
            reexpand_cb();
            return;
        }
        QTreeView::reexpand();
    }

    // Virtual method for C ABI access and custom callback
    void rowsRemoved(const QModelIndex& parent, int first, int last) {
        if (qtreeview_rowsremoved_isbase) {
            qtreeview_rowsremoved_isbase = false;
            QTreeView::rowsRemoved(parent, first, last);
            return;
        }
        auto rowsremoved_cb = qtreeview_rowsremoved_callback;
        if (rowsremoved_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            rowsremoved_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::rowsRemoved(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void drawTree(QPainter* painter, const QRegion& region) const {
        if (qtreeview_drawtree_isbase) {
            qtreeview_drawtree_isbase = false;
            QTreeView::drawTree(painter, region);
            return;
        }
        auto drawtree_cb = qtreeview_drawtree_callback;
        if (drawtree_cb) {
            QPainter* cbval1 = painter;
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval2 = const_cast<QRegion*>(&region_ret);

            drawtree_cb(this, cbval1, cbval2);
            return;
        }
        QTreeView::drawTree(painter, region);
    }

    // Virtual method for C ABI access and custom callback
    int indexRowSizeHint(const QModelIndex& index) const {
        if (qtreeview_indexrowsizehint_isbase) {
            qtreeview_indexrowsizehint_isbase = false;
            return QTreeView::indexRowSizeHint(index);
        }
        auto indexrowsizehint_cb = qtreeview_indexrowsizehint_callback;
        if (indexrowsizehint_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = indexrowsizehint_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::indexRowSizeHint(index);
    }

    // Virtual method for C ABI access and custom callback
    int rowHeight(const QModelIndex& index) const {
        if (qtreeview_rowheight_isbase) {
            qtreeview_rowheight_isbase = false;
            return QTreeView::rowHeight(index);
        }
        auto rowheight_cb = qtreeview_rowheight_callback;
        if (rowheight_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = rowheight_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::rowHeight(index);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qtreeview_state_isbase) {
            qtreeview_state_isbase = false;
            return QTreeView::state();
        }
        auto state_cb = qtreeview_state_callback;
        if (state_cb) {
            int callback_ret = state_cb();
            return static_cast<VirtualQTreeView::State>(callback_ret);
        }
        return QTreeView::state();
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qtreeview_setstate_isbase) {
            qtreeview_setstate_isbase = false;
            QTreeView::setState(state);
            return;
        }
        auto setstate_cb = qtreeview_setstate_callback;
        if (setstate_cb) {
            int cbval1 = static_cast<int>(state);

            setstate_cb(this, cbval1);
            return;
        }
        QTreeView::setState(state);
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qtreeview_scheduledelayeditemslayout_isbase) {
            qtreeview_scheduledelayeditemslayout_isbase = false;
            QTreeView::scheduleDelayedItemsLayout();
            return;
        }
        auto scheduledelayeditemslayout_cb = qtreeview_scheduledelayeditemslayout_callback;
        if (scheduledelayeditemslayout_cb) {
            scheduledelayeditemslayout_cb();
            return;
        }
        QTreeView::scheduleDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qtreeview_executedelayeditemslayout_isbase) {
            qtreeview_executedelayeditemslayout_isbase = false;
            QTreeView::executeDelayedItemsLayout();
            return;
        }
        auto executedelayeditemslayout_cb = qtreeview_executedelayeditemslayout_callback;
        if (executedelayeditemslayout_cb) {
            executedelayeditemslayout_cb();
            return;
        }
        QTreeView::executeDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qtreeview_setdirtyregion_isbase) {
            qtreeview_setdirtyregion_isbase = false;
            QTreeView::setDirtyRegion(region);
            return;
        }
        auto setdirtyregion_cb = qtreeview_setdirtyregion_callback;
        if (setdirtyregion_cb) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            setdirtyregion_cb(this, cbval1);
            return;
        }
        QTreeView::setDirtyRegion(region);
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qtreeview_scrolldirtyregion_isbase) {
            qtreeview_scrolldirtyregion_isbase = false;
            QTreeView::scrollDirtyRegion(dx, dy);
            return;
        }
        auto scrolldirtyregion_cb = qtreeview_scrolldirtyregion_callback;
        if (scrolldirtyregion_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrolldirtyregion_cb(this, cbval1, cbval2);
            return;
        }
        QTreeView::scrollDirtyRegion(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qtreeview_dirtyregionoffset_isbase) {
            qtreeview_dirtyregionoffset_isbase = false;
            return QTreeView::dirtyRegionOffset();
        }
        auto dirtyregionoffset_cb = qtreeview_dirtyregionoffset_callback;
        if (dirtyregionoffset_cb) {
            QPoint* callback_ret = dirtyregionoffset_cb();
            return *callback_ret;
        }
        return QTreeView::dirtyRegionOffset();
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qtreeview_startautoscroll_isbase) {
            qtreeview_startautoscroll_isbase = false;
            QTreeView::startAutoScroll();
            return;
        }
        auto startautoscroll_cb = qtreeview_startautoscroll_callback;
        if (startautoscroll_cb) {
            startautoscroll_cb();
            return;
        }
        QTreeView::startAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qtreeview_stopautoscroll_isbase) {
            qtreeview_stopautoscroll_isbase = false;
            QTreeView::stopAutoScroll();
            return;
        }
        auto stopautoscroll_cb = qtreeview_stopautoscroll_callback;
        if (stopautoscroll_cb) {
            stopautoscroll_cb();
            return;
        }
        QTreeView::stopAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qtreeview_doautoscroll_isbase) {
            qtreeview_doautoscroll_isbase = false;
            QTreeView::doAutoScroll();
            return;
        }
        auto doautoscroll_cb = qtreeview_doautoscroll_callback;
        if (doautoscroll_cb) {
            doautoscroll_cb();
            return;
        }
        QTreeView::doAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qtreeview_dropindicatorposition_isbase) {
            qtreeview_dropindicatorposition_isbase = false;
            return QTreeView::dropIndicatorPosition();
        }
        auto dropindicatorposition_cb = qtreeview_dropindicatorposition_callback;
        if (dropindicatorposition_cb) {
            int callback_ret = dropindicatorposition_cb();
            return static_cast<VirtualQTreeView::DropIndicatorPosition>(callback_ret);
        }
        return QTreeView::dropIndicatorPosition();
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtreeview_setviewportmargins_isbase) {
            qtreeview_setviewportmargins_isbase = false;
            QTreeView::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qtreeview_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QTreeView::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtreeview_viewportmargins_isbase) {
            qtreeview_viewportmargins_isbase = false;
            return QTreeView::viewportMargins();
        }
        auto viewportmargins_cb = qtreeview_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QTreeView::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtreeview_drawframe_isbase) {
            qtreeview_drawframe_isbase = false;
            QTreeView::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qtreeview_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QTreeView::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtreeview_updatemicrofocus_isbase) {
            qtreeview_updatemicrofocus_isbase = false;
            QTreeView::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qtreeview_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QTreeView::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtreeview_create_isbase) {
            qtreeview_create_isbase = false;
            QTreeView::create();
            return;
        }
        auto create_cb = qtreeview_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QTreeView::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtreeview_destroy_isbase) {
            qtreeview_destroy_isbase = false;
            QTreeView::destroy();
            return;
        }
        auto destroy_cb = qtreeview_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QTreeView::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtreeview_focusnextchild_isbase) {
            qtreeview_focusnextchild_isbase = false;
            return QTreeView::focusNextChild();
        }
        auto focusnextchild_cb = qtreeview_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QTreeView::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtreeview_focuspreviouschild_isbase) {
            qtreeview_focuspreviouschild_isbase = false;
            return QTreeView::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qtreeview_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QTreeView::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtreeview_sender_isbase) {
            qtreeview_sender_isbase = false;
            return QTreeView::sender();
        }
        auto sender_cb = qtreeview_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTreeView::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtreeview_sendersignalindex_isbase) {
            qtreeview_sendersignalindex_isbase = false;
            return QTreeView::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtreeview_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTreeView::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtreeview_receivers_isbase) {
            qtreeview_receivers_isbase = false;
            return QTreeView::receivers(signal);
        }
        auto receivers_cb = qtreeview_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtreeview_issignalconnected_isbase) {
            qtreeview_issignalconnected_isbase = false;
            return QTreeView::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtreeview_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTreeView::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtreeview_getdecodedmetricf_isbase) {
            qtreeview_getdecodedmetricf_isbase = false;
            return QTreeView::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qtreeview_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QTreeView::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QTreeView_VerticalScrollbarValueChanged(QTreeView* self, int value);
    friend void QTreeView_SuperVerticalScrollbarValueChanged(QTreeView* self, int value);
    friend void QTreeView_ScrollContentsBy(QTreeView* self, int dx, int dy);
    friend void QTreeView_SuperScrollContentsBy(QTreeView* self, int dx, int dy);
    friend void QTreeView_RowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end);
    friend void QTreeView_SuperRowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end);
    friend void QTreeView_RowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end);
    friend void QTreeView_SuperRowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end);
    friend QModelIndex* QTreeView_MoveCursor(QTreeView* self, int cursorAction, int modifiers);
    friend QModelIndex* QTreeView_SuperMoveCursor(QTreeView* self, int cursorAction, int modifiers);
    friend int QTreeView_HorizontalOffset(const QTreeView* self);
    friend int QTreeView_SuperHorizontalOffset(const QTreeView* self);
    friend int QTreeView_VerticalOffset(const QTreeView* self);
    friend int QTreeView_SuperVerticalOffset(const QTreeView* self);
    friend void QTreeView_SetSelection(QTreeView* self, const QRect* rect, int command);
    friend void QTreeView_SuperSetSelection(QTreeView* self, const QRect* rect, int command);
    friend QRegion* QTreeView_VisualRegionForSelection(const QTreeView* self, const QItemSelection* selection);
    friend QRegion* QTreeView_SuperVisualRegionForSelection(const QTreeView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QTreeView_SelectedIndexes(const QTreeView* self);
    friend libqt_list /* of QModelIndex* */ QTreeView_SuperSelectedIndexes(const QTreeView* self);
    friend void QTreeView_ChangeEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_SuperChangeEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_TimerEvent(QTreeView* self, QTimerEvent* event);
    friend void QTreeView_SuperTimerEvent(QTreeView* self, QTimerEvent* event);
    friend void QTreeView_PaintEvent(QTreeView* self, QPaintEvent* event);
    friend void QTreeView_SuperPaintEvent(QTreeView* self, QPaintEvent* event);
    friend void QTreeView_DrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index);
    friend void QTreeView_SuperDrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index);
    friend void QTreeView_DrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index);
    friend void QTreeView_SuperDrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index);
    friend void QTreeView_MousePressEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_SuperMousePressEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_MouseReleaseEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_SuperMouseReleaseEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_MouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_SuperMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_MouseMoveEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_SuperMouseMoveEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_KeyPressEvent(QTreeView* self, QKeyEvent* event);
    friend void QTreeView_SuperKeyPressEvent(QTreeView* self, QKeyEvent* event);
    friend void QTreeView_DragMoveEvent(QTreeView* self, QDragMoveEvent* event);
    friend void QTreeView_SuperDragMoveEvent(QTreeView* self, QDragMoveEvent* event);
    friend bool QTreeView_ViewportEvent(QTreeView* self, QEvent* event);
    friend bool QTreeView_SuperViewportEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_UpdateGeometries(QTreeView* self);
    friend void QTreeView_SuperUpdateGeometries(QTreeView* self);
    friend QSize* QTreeView_ViewportSizeHint(const QTreeView* self);
    friend QSize* QTreeView_SuperViewportSizeHint(const QTreeView* self);
    friend int QTreeView_SizeHintForColumn(const QTreeView* self, int column);
    friend int QTreeView_SuperSizeHintForColumn(const QTreeView* self, int column);
    friend void QTreeView_HorizontalScrollbarAction(QTreeView* self, int action);
    friend void QTreeView_SuperHorizontalScrollbarAction(QTreeView* self, int action);
    friend bool QTreeView_IsIndexHidden(const QTreeView* self, const QModelIndex* index);
    friend bool QTreeView_SuperIsIndexHidden(const QTreeView* self, const QModelIndex* index);
    friend void QTreeView_SelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTreeView_SuperSelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTreeView_CurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTreeView_SuperCurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTreeView_UpdateEditorData(QTreeView* self);
    friend void QTreeView_SuperUpdateEditorData(QTreeView* self);
    friend void QTreeView_UpdateEditorGeometries(QTreeView* self);
    friend void QTreeView_SuperUpdateEditorGeometries(QTreeView* self);
    friend void QTreeView_VerticalScrollbarAction(QTreeView* self, int action);
    friend void QTreeView_SuperVerticalScrollbarAction(QTreeView* self, int action);
    friend void QTreeView_HorizontalScrollbarValueChanged(QTreeView* self, int value);
    friend void QTreeView_SuperHorizontalScrollbarValueChanged(QTreeView* self, int value);
    friend void QTreeView_CloseEditor(QTreeView* self, QWidget* editor, int hint);
    friend void QTreeView_SuperCloseEditor(QTreeView* self, QWidget* editor, int hint);
    friend void QTreeView_CommitData(QTreeView* self, QWidget* editor);
    friend void QTreeView_SuperCommitData(QTreeView* self, QWidget* editor);
    friend void QTreeView_EditorDestroyed(QTreeView* self, QObject* editor);
    friend void QTreeView_SuperEditorDestroyed(QTreeView* self, QObject* editor);
    friend bool QTreeView_Edit2(QTreeView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QTreeView_SuperEdit2(QTreeView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QTreeView_SelectionCommand(const QTreeView* self, const QModelIndex* index, const QEvent* event);
    friend int QTreeView_SuperSelectionCommand(const QTreeView* self, const QModelIndex* index, const QEvent* event);
    friend void QTreeView_StartDrag(QTreeView* self, int supportedActions);
    friend void QTreeView_SuperStartDrag(QTreeView* self, int supportedActions);
    friend void QTreeView_InitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option);
    friend void QTreeView_SuperInitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option);
    friend bool QTreeView_FocusNextPrevChild(QTreeView* self, bool next);
    friend bool QTreeView_SuperFocusNextPrevChild(QTreeView* self, bool next);
    friend bool QTreeView_Event(QTreeView* self, QEvent* event);
    friend bool QTreeView_SuperEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_DragEnterEvent(QTreeView* self, QDragEnterEvent* event);
    friend void QTreeView_SuperDragEnterEvent(QTreeView* self, QDragEnterEvent* event);
    friend void QTreeView_DragLeaveEvent(QTreeView* self, QDragLeaveEvent* event);
    friend void QTreeView_SuperDragLeaveEvent(QTreeView* self, QDragLeaveEvent* event);
    friend void QTreeView_DropEvent(QTreeView* self, QDropEvent* event);
    friend void QTreeView_SuperDropEvent(QTreeView* self, QDropEvent* event);
    friend void QTreeView_FocusInEvent(QTreeView* self, QFocusEvent* event);
    friend void QTreeView_SuperFocusInEvent(QTreeView* self, QFocusEvent* event);
    friend void QTreeView_FocusOutEvent(QTreeView* self, QFocusEvent* event);
    friend void QTreeView_SuperFocusOutEvent(QTreeView* self, QFocusEvent* event);
    friend void QTreeView_ResizeEvent(QTreeView* self, QResizeEvent* event);
    friend void QTreeView_SuperResizeEvent(QTreeView* self, QResizeEvent* event);
    friend void QTreeView_InputMethodEvent(QTreeView* self, QInputMethodEvent* event);
    friend void QTreeView_SuperInputMethodEvent(QTreeView* self, QInputMethodEvent* event);
    friend bool QTreeView_EventFilter(QTreeView* self, QObject* object, QEvent* event);
    friend bool QTreeView_SuperEventFilter(QTreeView* self, QObject* object, QEvent* event);
    friend void QTreeView_WheelEvent(QTreeView* self, QWheelEvent* param1);
    friend void QTreeView_SuperWheelEvent(QTreeView* self, QWheelEvent* param1);
    friend void QTreeView_ContextMenuEvent(QTreeView* self, QContextMenuEvent* param1);
    friend void QTreeView_SuperContextMenuEvent(QTreeView* self, QContextMenuEvent* param1);
    friend void QTreeView_InitStyleOption(const QTreeView* self, QStyleOptionFrame* option);
    friend void QTreeView_SuperInitStyleOption(const QTreeView* self, QStyleOptionFrame* option);
    friend void QTreeView_KeyReleaseEvent(QTreeView* self, QKeyEvent* event);
    friend void QTreeView_SuperKeyReleaseEvent(QTreeView* self, QKeyEvent* event);
    friend void QTreeView_EnterEvent(QTreeView* self, QEnterEvent* event);
    friend void QTreeView_SuperEnterEvent(QTreeView* self, QEnterEvent* event);
    friend void QTreeView_LeaveEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_SuperLeaveEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_MoveEvent(QTreeView* self, QMoveEvent* event);
    friend void QTreeView_SuperMoveEvent(QTreeView* self, QMoveEvent* event);
    friend void QTreeView_CloseEvent(QTreeView* self, QCloseEvent* event);
    friend void QTreeView_SuperCloseEvent(QTreeView* self, QCloseEvent* event);
    friend void QTreeView_TabletEvent(QTreeView* self, QTabletEvent* event);
    friend void QTreeView_SuperTabletEvent(QTreeView* self, QTabletEvent* event);
    friend void QTreeView_ActionEvent(QTreeView* self, QActionEvent* event);
    friend void QTreeView_SuperActionEvent(QTreeView* self, QActionEvent* event);
    friend void QTreeView_ShowEvent(QTreeView* self, QShowEvent* event);
    friend void QTreeView_SuperShowEvent(QTreeView* self, QShowEvent* event);
    friend void QTreeView_HideEvent(QTreeView* self, QHideEvent* event);
    friend void QTreeView_SuperHideEvent(QTreeView* self, QHideEvent* event);
    friend bool QTreeView_NativeEvent(QTreeView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTreeView_SuperNativeEvent(QTreeView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTreeView_Metric(const QTreeView* self, int param1);
    friend int QTreeView_SuperMetric(const QTreeView* self, int param1);
    friend void QTreeView_InitPainter(const QTreeView* self, QPainter* painter);
    friend void QTreeView_SuperInitPainter(const QTreeView* self, QPainter* painter);
    friend QPaintDevice* QTreeView_Redirected(const QTreeView* self, QPoint* offset);
    friend QPaintDevice* QTreeView_SuperRedirected(const QTreeView* self, QPoint* offset);
    friend QPainter* QTreeView_SharedPainter(const QTreeView* self);
    friend QPainter* QTreeView_SuperSharedPainter(const QTreeView* self);
    friend void QTreeView_ChildEvent(QTreeView* self, QChildEvent* event);
    friend void QTreeView_SuperChildEvent(QTreeView* self, QChildEvent* event);
    friend void QTreeView_CustomEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_SuperCustomEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_ConnectNotify(QTreeView* self, const QMetaMethod* signal);
    friend void QTreeView_SuperConnectNotify(QTreeView* self, const QMetaMethod* signal);
    friend void QTreeView_DisconnectNotify(QTreeView* self, const QMetaMethod* signal);
    friend void QTreeView_SuperDisconnectNotify(QTreeView* self, const QMetaMethod* signal);
    friend void QTreeView_ColumnResized(QTreeView* self, int column, int oldSize, int newSize);
    friend void QTreeView_SuperColumnResized(QTreeView* self, int column, int oldSize, int newSize);
    friend void QTreeView_ColumnCountChanged(QTreeView* self, int oldCount, int newCount);
    friend void QTreeView_SuperColumnCountChanged(QTreeView* self, int oldCount, int newCount);
    friend void QTreeView_ColumnMoved(QTreeView* self);
    friend void QTreeView_SuperColumnMoved(QTreeView* self);
    friend void QTreeView_Reexpand(QTreeView* self);
    friend void QTreeView_SuperReexpand(QTreeView* self);
    friend void QTreeView_RowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last);
    friend void QTreeView_SuperRowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last);
    friend void QTreeView_DrawTree(const QTreeView* self, QPainter* painter, const QRegion* region);
    friend void QTreeView_SuperDrawTree(const QTreeView* self, QPainter* painter, const QRegion* region);
    friend int QTreeView_IndexRowSizeHint(const QTreeView* self, const QModelIndex* index);
    friend int QTreeView_SuperIndexRowSizeHint(const QTreeView* self, const QModelIndex* index);
    friend int QTreeView_RowHeight(const QTreeView* self, const QModelIndex* index);
    friend int QTreeView_SuperRowHeight(const QTreeView* self, const QModelIndex* index);
    friend int QTreeView_State(const QTreeView* self);
    friend int QTreeView_SuperState(const QTreeView* self);
    friend void QTreeView_SetState(QTreeView* self, int state);
    friend void QTreeView_SuperSetState(QTreeView* self, int state);
    friend void QTreeView_ScheduleDelayedItemsLayout(QTreeView* self);
    friend void QTreeView_SuperScheduleDelayedItemsLayout(QTreeView* self);
    friend void QTreeView_ExecuteDelayedItemsLayout(QTreeView* self);
    friend void QTreeView_SuperExecuteDelayedItemsLayout(QTreeView* self);
    friend void QTreeView_SetDirtyRegion(QTreeView* self, const QRegion* region);
    friend void QTreeView_SuperSetDirtyRegion(QTreeView* self, const QRegion* region);
    friend void QTreeView_ScrollDirtyRegion(QTreeView* self, int dx, int dy);
    friend void QTreeView_SuperScrollDirtyRegion(QTreeView* self, int dx, int dy);
    friend QPoint* QTreeView_DirtyRegionOffset(const QTreeView* self);
    friend QPoint* QTreeView_SuperDirtyRegionOffset(const QTreeView* self);
    friend void QTreeView_StartAutoScroll(QTreeView* self);
    friend void QTreeView_SuperStartAutoScroll(QTreeView* self);
    friend void QTreeView_StopAutoScroll(QTreeView* self);
    friend void QTreeView_SuperStopAutoScroll(QTreeView* self);
    friend void QTreeView_DoAutoScroll(QTreeView* self);
    friend void QTreeView_SuperDoAutoScroll(QTreeView* self);
    friend int QTreeView_DropIndicatorPosition(const QTreeView* self);
    friend int QTreeView_SuperDropIndicatorPosition(const QTreeView* self);
    friend void QTreeView_SetViewportMargins(QTreeView* self, int left, int top, int right, int bottom);
    friend void QTreeView_SuperSetViewportMargins(QTreeView* self, int left, int top, int right, int bottom);
    friend QMargins* QTreeView_ViewportMargins(const QTreeView* self);
    friend QMargins* QTreeView_SuperViewportMargins(const QTreeView* self);
    friend void QTreeView_DrawFrame(QTreeView* self, QPainter* param1);
    friend void QTreeView_SuperDrawFrame(QTreeView* self, QPainter* param1);
    friend void QTreeView_UpdateMicroFocus(QTreeView* self);
    friend void QTreeView_SuperUpdateMicroFocus(QTreeView* self);
    friend void QTreeView_Create(QTreeView* self);
    friend void QTreeView_SuperCreate(QTreeView* self);
    friend void QTreeView_Destroy(QTreeView* self);
    friend void QTreeView_SuperDestroy(QTreeView* self);
    friend bool QTreeView_FocusNextChild(QTreeView* self);
    friend bool QTreeView_SuperFocusNextChild(QTreeView* self);
    friend bool QTreeView_FocusPreviousChild(QTreeView* self);
    friend bool QTreeView_SuperFocusPreviousChild(QTreeView* self);
    friend QObject* QTreeView_Sender(const QTreeView* self);
    friend QObject* QTreeView_SuperSender(const QTreeView* self);
    friend int QTreeView_SenderSignalIndex(const QTreeView* self);
    friend int QTreeView_SuperSenderSignalIndex(const QTreeView* self);
    friend int QTreeView_Receivers(const QTreeView* self, const char* signal);
    friend int QTreeView_SuperReceivers(const QTreeView* self, const char* signal);
    friend bool QTreeView_IsSignalConnected(const QTreeView* self, const QMetaMethod* signal);
    friend bool QTreeView_SuperIsSignalConnected(const QTreeView* self, const QMetaMethod* signal);
    friend double QTreeView_GetDecodedMetricF(const QTreeView* self, int metricA, int metricB);
    friend double QTreeView_SuperGetDecodedMetricF(const QTreeView* self, int metricA, int metricB);
};

#endif
