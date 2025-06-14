#pragma once
#ifndef SRCC_LIBVIRTUALQUNDOVIEW_H
#define SRCC_LIBVIRTUALQUNDOVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
    using QUndoView_KeyboardSearch_Callback = void (*)(QUndoView*, libqt_string);
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

  protected:
    // Instance callback storage
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

    // Instance base flags
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

  public:
    VirtualQUndoView(QWidget* parent) : QUndoView(parent){};
    VirtualQUndoView() : QUndoView(){};
    VirtualQUndoView(QUndoStack* stack) : QUndoView(stack){};
    VirtualQUndoView(QUndoGroup* group) : QUndoView(group){};
    VirtualQUndoView(QUndoStack* stack, QWidget* parent) : QUndoView(stack, parent){};
    VirtualQUndoView(QUndoGroup* group, QWidget* parent) : QUndoView(group, parent){};

    ~VirtualQUndoView() {
        qundoview_metacall_callback = nullptr;
        qundoview_visualrect_callback = nullptr;
        qundoview_scrollto_callback = nullptr;
        qundoview_indexat_callback = nullptr;
        qundoview_doitemslayout_callback = nullptr;
        qundoview_reset_callback = nullptr;
        qundoview_setrootindex_callback = nullptr;
        qundoview_event_callback = nullptr;
        qundoview_scrollcontentsby_callback = nullptr;
        qundoview_datachanged_callback = nullptr;
        qundoview_rowsinserted_callback = nullptr;
        qundoview_rowsabouttoberemoved_callback = nullptr;
        qundoview_mousemoveevent_callback = nullptr;
        qundoview_mousereleaseevent_callback = nullptr;
        qundoview_wheelevent_callback = nullptr;
        qundoview_timerevent_callback = nullptr;
        qundoview_resizeevent_callback = nullptr;
        qundoview_dragmoveevent_callback = nullptr;
        qundoview_dragleaveevent_callback = nullptr;
        qundoview_dropevent_callback = nullptr;
        qundoview_startdrag_callback = nullptr;
        qundoview_initviewitemoption_callback = nullptr;
        qundoview_paintevent_callback = nullptr;
        qundoview_horizontaloffset_callback = nullptr;
        qundoview_verticaloffset_callback = nullptr;
        qundoview_movecursor_callback = nullptr;
        qundoview_setselection_callback = nullptr;
        qundoview_visualregionforselection_callback = nullptr;
        qundoview_selectedindexes_callback = nullptr;
        qundoview_updategeometries_callback = nullptr;
        qundoview_isindexhidden_callback = nullptr;
        qundoview_selectionchanged_callback = nullptr;
        qundoview_currentchanged_callback = nullptr;
        qundoview_viewportsizehint_callback = nullptr;
        qundoview_setmodel_callback = nullptr;
        qundoview_setselectionmodel_callback = nullptr;
        qundoview_keyboardsearch_callback = nullptr;
        qundoview_sizehintforrow_callback = nullptr;
        qundoview_sizehintforcolumn_callback = nullptr;
        qundoview_itemdelegateforindex_callback = nullptr;
        qundoview_inputmethodquery_callback = nullptr;
        qundoview_selectall_callback = nullptr;
        qundoview_updateeditordata_callback = nullptr;
        qundoview_updateeditorgeometries_callback = nullptr;
        qundoview_verticalscrollbaraction_callback = nullptr;
        qundoview_horizontalscrollbaraction_callback = nullptr;
        qundoview_verticalscrollbarvaluechanged_callback = nullptr;
        qundoview_horizontalscrollbarvaluechanged_callback = nullptr;
        qundoview_closeeditor_callback = nullptr;
        qundoview_commitdata_callback = nullptr;
        qundoview_editordestroyed_callback = nullptr;
        qundoview_edit2_callback = nullptr;
        qundoview_selectioncommand_callback = nullptr;
        qundoview_focusnextprevchild_callback = nullptr;
        qundoview_viewportevent_callback = nullptr;
        qundoview_mousepressevent_callback = nullptr;
        qundoview_mousedoubleclickevent_callback = nullptr;
        qundoview_dragenterevent_callback = nullptr;
        qundoview_focusinevent_callback = nullptr;
        qundoview_focusoutevent_callback = nullptr;
        qundoview_keypressevent_callback = nullptr;
        qundoview_inputmethodevent_callback = nullptr;
        qundoview_eventfilter_callback = nullptr;
        qundoview_minimumsizehint_callback = nullptr;
        qundoview_sizehint_callback = nullptr;
        qundoview_setupviewport_callback = nullptr;
        qundoview_contextmenuevent_callback = nullptr;
        qundoview_changeevent_callback = nullptr;
        qundoview_initstyleoption_callback = nullptr;
        qundoview_devtype_callback = nullptr;
        qundoview_setvisible_callback = nullptr;
        qundoview_heightforwidth_callback = nullptr;
        qundoview_hasheightforwidth_callback = nullptr;
        qundoview_paintengine_callback = nullptr;
        qundoview_keyreleaseevent_callback = nullptr;
        qundoview_enterevent_callback = nullptr;
        qundoview_leaveevent_callback = nullptr;
        qundoview_moveevent_callback = nullptr;
        qundoview_closeevent_callback = nullptr;
        qundoview_tabletevent_callback = nullptr;
        qundoview_actionevent_callback = nullptr;
        qundoview_showevent_callback = nullptr;
        qundoview_hideevent_callback = nullptr;
        qundoview_nativeevent_callback = nullptr;
        qundoview_metric_callback = nullptr;
        qundoview_initpainter_callback = nullptr;
        qundoview_redirected_callback = nullptr;
        qundoview_sharedpainter_callback = nullptr;
        qundoview_childevent_callback = nullptr;
        qundoview_customevent_callback = nullptr;
        qundoview_connectnotify_callback = nullptr;
        qundoview_disconnectnotify_callback = nullptr;
        qundoview_resizecontents_callback = nullptr;
        qundoview_contentssize_callback = nullptr;
        qundoview_rectforindex_callback = nullptr;
        qundoview_setpositionforindex_callback = nullptr;
        qundoview_state_callback = nullptr;
        qundoview_setstate_callback = nullptr;
        qundoview_scheduledelayeditemslayout_callback = nullptr;
        qundoview_executedelayeditemslayout_callback = nullptr;
        qundoview_setdirtyregion_callback = nullptr;
        qundoview_scrolldirtyregion_callback = nullptr;
        qundoview_dirtyregionoffset_callback = nullptr;
        qundoview_startautoscroll_callback = nullptr;
        qundoview_stopautoscroll_callback = nullptr;
        qundoview_doautoscroll_callback = nullptr;
        qundoview_dropindicatorposition_callback = nullptr;
        qundoview_setviewportmargins_callback = nullptr;
        qundoview_viewportmargins_callback = nullptr;
        qundoview_drawframe_callback = nullptr;
        qundoview_updatemicrofocus_callback = nullptr;
        qundoview_create_callback = nullptr;
        qundoview_destroy_callback = nullptr;
        qundoview_focusnextchild_callback = nullptr;
        qundoview_focuspreviouschild_callback = nullptr;
        qundoview_sender_callback = nullptr;
        qundoview_sendersignalindex_callback = nullptr;
        qundoview_receivers_callback = nullptr;
        qundoview_issignalconnected_callback = nullptr;
    }

    // Callback setters
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

    // Base flag setters
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

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundoview_metacall_isbase) {
            qundoview_metacall_isbase = false;
            return QUndoView::qt_metacall(param1, param2, param3);
        } else if (qundoview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qundoview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qundoview_visualrect_isbase) {
            qundoview_visualrect_isbase = false;
            return QUndoView::visualRect(index);
        } else if (qundoview_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qundoview_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QUndoView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qundoview_scrollto_isbase) {
            qundoview_scrollto_isbase = false;
            QUndoView::scrollTo(index, hint);
        } else if (qundoview_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            qundoview_scrollto_callback(this, cbval1, cbval2);
        } else {
            QUndoView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qundoview_indexat_isbase) {
            qundoview_indexat_isbase = false;
            return QUndoView::indexAt(p);
        } else if (qundoview_indexat_callback != nullptr) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = qundoview_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QUndoView::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qundoview_doitemslayout_isbase) {
            qundoview_doitemslayout_isbase = false;
            QUndoView::doItemsLayout();
        } else if (qundoview_doitemslayout_callback != nullptr) {
            qundoview_doitemslayout_callback();
        } else {
            QUndoView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qundoview_reset_isbase) {
            qundoview_reset_isbase = false;
            QUndoView::reset();
        } else if (qundoview_reset_callback != nullptr) {
            qundoview_reset_callback();
        } else {
            QUndoView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qundoview_setrootindex_isbase) {
            qundoview_setrootindex_isbase = false;
            QUndoView::setRootIndex(index);
        } else if (qundoview_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            qundoview_setrootindex_callback(this, cbval1);
        } else {
            QUndoView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qundoview_event_isbase) {
            qundoview_event_isbase = false;
            return QUndoView::event(e);
        } else if (qundoview_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qundoview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoView::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qundoview_scrollcontentsby_isbase) {
            qundoview_scrollcontentsby_isbase = false;
            QUndoView::scrollContentsBy(dx, dy);
        } else if (qundoview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qundoview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QUndoView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qundoview_datachanged_isbase) {
            qundoview_datachanged_isbase = false;
            QUndoView::dataChanged(topLeft, bottomRight, roles);
        } else if (qundoview_datachanged_callback != nullptr) {
            const QModelIndex& topLeft_ret = topLeft;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&topLeft_ret);
            const QModelIndex& bottomRight_ret = bottomRight;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&bottomRight_ret);
            const QList<int>& roles_ret = roles;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
            for (size_t i = 0; i < roles_ret.length(); ++i) {
                roles_arr[i] = roles_ret[i];
            }
            libqt_list roles_out;
            roles_out.len = roles_ret.length();
            roles_out.data = static_cast<void*>(roles_arr);
            libqt_list /* of int */ cbval3 = roles_out;

            qundoview_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            QUndoView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qundoview_rowsinserted_isbase) {
            qundoview_rowsinserted_isbase = false;
            QUndoView::rowsInserted(parent, start, end);
        } else if (qundoview_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qundoview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            QUndoView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qundoview_rowsabouttoberemoved_isbase) {
            qundoview_rowsabouttoberemoved_isbase = false;
            QUndoView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qundoview_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qundoview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QUndoView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qundoview_mousemoveevent_isbase) {
            qundoview_mousemoveevent_isbase = false;
            QUndoView::mouseMoveEvent(e);
        } else if (qundoview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qundoview_mousemoveevent_callback(this, cbval1);
        } else {
            QUndoView::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qundoview_mousereleaseevent_isbase) {
            qundoview_mousereleaseevent_isbase = false;
            QUndoView::mouseReleaseEvent(e);
        } else if (qundoview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qundoview_mousereleaseevent_callback(this, cbval1);
        } else {
            QUndoView::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qundoview_wheelevent_isbase) {
            qundoview_wheelevent_isbase = false;
            QUndoView::wheelEvent(e);
        } else if (qundoview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            qundoview_wheelevent_callback(this, cbval1);
        } else {
            QUndoView::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qundoview_timerevent_isbase) {
            qundoview_timerevent_isbase = false;
            QUndoView::timerEvent(e);
        } else if (qundoview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            qundoview_timerevent_callback(this, cbval1);
        } else {
            QUndoView::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qundoview_resizeevent_isbase) {
            qundoview_resizeevent_isbase = false;
            QUndoView::resizeEvent(e);
        } else if (qundoview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            qundoview_resizeevent_callback(this, cbval1);
        } else {
            QUndoView::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qundoview_dragmoveevent_isbase) {
            qundoview_dragmoveevent_isbase = false;
            QUndoView::dragMoveEvent(e);
        } else if (qundoview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            qundoview_dragmoveevent_callback(this, cbval1);
        } else {
            QUndoView::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qundoview_dragleaveevent_isbase) {
            qundoview_dragleaveevent_isbase = false;
            QUndoView::dragLeaveEvent(e);
        } else if (qundoview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            qundoview_dragleaveevent_callback(this, cbval1);
        } else {
            QUndoView::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qundoview_dropevent_isbase) {
            qundoview_dropevent_isbase = false;
            QUndoView::dropEvent(e);
        } else if (qundoview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = e;

            qundoview_dropevent_callback(this, cbval1);
        } else {
            QUndoView::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qundoview_startdrag_isbase) {
            qundoview_startdrag_isbase = false;
            QUndoView::startDrag(supportedActions);
        } else if (qundoview_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            qundoview_startdrag_callback(this, cbval1);
        } else {
            QUndoView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qundoview_initviewitemoption_isbase) {
            qundoview_initviewitemoption_isbase = false;
            QUndoView::initViewItemOption(option);
        } else if (qundoview_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            qundoview_initviewitemoption_callback(this, cbval1);
        } else {
            QUndoView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qundoview_paintevent_isbase) {
            qundoview_paintevent_isbase = false;
            QUndoView::paintEvent(e);
        } else if (qundoview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            qundoview_paintevent_callback(this, cbval1);
        } else {
            QUndoView::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qundoview_horizontaloffset_isbase) {
            qundoview_horizontaloffset_isbase = false;
            return QUndoView::horizontalOffset();
        } else if (qundoview_horizontaloffset_callback != nullptr) {
            int callback_ret = qundoview_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qundoview_verticaloffset_isbase) {
            qundoview_verticaloffset_isbase = false;
            return QUndoView::verticalOffset();
        } else if (qundoview_verticaloffset_callback != nullptr) {
            int callback_ret = qundoview_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qundoview_movecursor_isbase) {
            qundoview_movecursor_isbase = false;
            return QUndoView::moveCursor(cursorAction, modifiers);
        } else if (qundoview_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = qundoview_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QUndoView::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qundoview_setselection_isbase) {
            qundoview_setselection_isbase = false;
            QUndoView::setSelection(rect, command);
        } else if (qundoview_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            qundoview_setselection_callback(this, cbval1, cbval2);
        } else {
            QUndoView::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qundoview_visualregionforselection_isbase) {
            qundoview_visualregionforselection_isbase = false;
            return QUndoView::visualRegionForSelection(selection);
        } else if (qundoview_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = qundoview_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QUndoView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qundoview_selectedindexes_isbase) {
            qundoview_selectedindexes_isbase = false;
            return QUndoView::selectedIndexes();
        } else if (qundoview_selectedindexes_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qundoview_selectedindexes_callback();
            QModelIndexList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QUndoView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qundoview_updategeometries_isbase) {
            qundoview_updategeometries_isbase = false;
            QUndoView::updateGeometries();
        } else if (qundoview_updategeometries_callback != nullptr) {
            qundoview_updategeometries_callback();
        } else {
            QUndoView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qundoview_isindexhidden_isbase) {
            qundoview_isindexhidden_isbase = false;
            return QUndoView::isIndexHidden(index);
        } else if (qundoview_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qundoview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qundoview_selectionchanged_isbase) {
            qundoview_selectionchanged_isbase = false;
            QUndoView::selectionChanged(selected, deselected);
        } else if (qundoview_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            qundoview_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            QUndoView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qundoview_currentchanged_isbase) {
            qundoview_currentchanged_isbase = false;
            QUndoView::currentChanged(current, previous);
        } else if (qundoview_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            qundoview_currentchanged_callback(this, cbval1, cbval2);
        } else {
            QUndoView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qundoview_viewportsizehint_isbase) {
            qundoview_viewportsizehint_isbase = false;
            return QUndoView::viewportSizeHint();
        } else if (qundoview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qundoview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QUndoView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qundoview_setmodel_isbase) {
            qundoview_setmodel_isbase = false;
            QUndoView::setModel(model);
        } else if (qundoview_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            qundoview_setmodel_callback(this, cbval1);
        } else {
            QUndoView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qundoview_setselectionmodel_isbase) {
            qundoview_setselectionmodel_isbase = false;
            QUndoView::setSelectionModel(selectionModel);
        } else if (qundoview_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            qundoview_setselectionmodel_callback(this, cbval1);
        } else {
            QUndoView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qundoview_keyboardsearch_isbase) {
            qundoview_keyboardsearch_isbase = false;
            QUndoView::keyboardSearch(search);
        } else if (qundoview_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<const char*>(malloc((search_str.len + 1) * sizeof(char)));
            memcpy((void*)search_str.data, search_b.data(), search_str.len);
            ((char*)search_str.data)[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            qundoview_keyboardsearch_callback(this, cbval1);
        } else {
            QUndoView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qundoview_sizehintforrow_isbase) {
            qundoview_sizehintforrow_isbase = false;
            return QUndoView::sizeHintForRow(row);
        } else if (qundoview_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = qundoview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qundoview_sizehintforcolumn_isbase) {
            qundoview_sizehintforcolumn_isbase = false;
            return QUndoView::sizeHintForColumn(column);
        } else if (qundoview_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = qundoview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qundoview_itemdelegateforindex_isbase) {
            qundoview_itemdelegateforindex_isbase = false;
            return QUndoView::itemDelegateForIndex(index);
        } else if (qundoview_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = qundoview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qundoview_inputmethodquery_isbase) {
            qundoview_inputmethodquery_isbase = false;
            return QUndoView::inputMethodQuery(query);
        } else if (qundoview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qundoview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QUndoView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qundoview_selectall_isbase) {
            qundoview_selectall_isbase = false;
            QUndoView::selectAll();
        } else if (qundoview_selectall_callback != nullptr) {
            qundoview_selectall_callback();
        } else {
            QUndoView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qundoview_updateeditordata_isbase) {
            qundoview_updateeditordata_isbase = false;
            QUndoView::updateEditorData();
        } else if (qundoview_updateeditordata_callback != nullptr) {
            qundoview_updateeditordata_callback();
        } else {
            QUndoView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qundoview_updateeditorgeometries_isbase) {
            qundoview_updateeditorgeometries_isbase = false;
            QUndoView::updateEditorGeometries();
        } else if (qundoview_updateeditorgeometries_callback != nullptr) {
            qundoview_updateeditorgeometries_callback();
        } else {
            QUndoView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qundoview_verticalscrollbaraction_isbase) {
            qundoview_verticalscrollbaraction_isbase = false;
            QUndoView::verticalScrollbarAction(action);
        } else if (qundoview_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qundoview_verticalscrollbaraction_callback(this, cbval1);
        } else {
            QUndoView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qundoview_horizontalscrollbaraction_isbase) {
            qundoview_horizontalscrollbaraction_isbase = false;
            QUndoView::horizontalScrollbarAction(action);
        } else if (qundoview_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qundoview_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            QUndoView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qundoview_verticalscrollbarvaluechanged_isbase) {
            qundoview_verticalscrollbarvaluechanged_isbase = false;
            QUndoView::verticalScrollbarValueChanged(value);
        } else if (qundoview_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qundoview_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QUndoView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qundoview_horizontalscrollbarvaluechanged_isbase) {
            qundoview_horizontalscrollbarvaluechanged_isbase = false;
            QUndoView::horizontalScrollbarValueChanged(value);
        } else if (qundoview_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qundoview_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QUndoView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qundoview_closeeditor_isbase) {
            qundoview_closeeditor_isbase = false;
            QUndoView::closeEditor(editor, hint);
        } else if (qundoview_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            qundoview_closeeditor_callback(this, cbval1, cbval2);
        } else {
            QUndoView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qundoview_commitdata_isbase) {
            qundoview_commitdata_isbase = false;
            QUndoView::commitData(editor);
        } else if (qundoview_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            qundoview_commitdata_callback(this, cbval1);
        } else {
            QUndoView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qundoview_editordestroyed_isbase) {
            qundoview_editordestroyed_isbase = false;
            QUndoView::editorDestroyed(editor);
        } else if (qundoview_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            qundoview_editordestroyed_callback(this, cbval1);
        } else {
            QUndoView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qundoview_edit2_isbase) {
            qundoview_edit2_isbase = false;
            return QUndoView::edit(index, trigger, event);
        } else if (qundoview_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = qundoview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QUndoView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qundoview_selectioncommand_isbase) {
            qundoview_selectioncommand_isbase = false;
            return QUndoView::selectionCommand(index, event);
        } else if (qundoview_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = qundoview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return QUndoView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qundoview_focusnextprevchild_isbase) {
            qundoview_focusnextprevchild_isbase = false;
            return QUndoView::focusNextPrevChild(next);
        } else if (qundoview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qundoview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qundoview_viewportevent_isbase) {
            qundoview_viewportevent_isbase = false;
            return QUndoView::viewportEvent(event);
        } else if (qundoview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qundoview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qundoview_mousepressevent_isbase) {
            qundoview_mousepressevent_isbase = false;
            QUndoView::mousePressEvent(event);
        } else if (qundoview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qundoview_mousepressevent_callback(this, cbval1);
        } else {
            QUndoView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qundoview_mousedoubleclickevent_isbase) {
            qundoview_mousedoubleclickevent_isbase = false;
            QUndoView::mouseDoubleClickEvent(event);
        } else if (qundoview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qundoview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QUndoView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qundoview_dragenterevent_isbase) {
            qundoview_dragenterevent_isbase = false;
            QUndoView::dragEnterEvent(event);
        } else if (qundoview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qundoview_dragenterevent_callback(this, cbval1);
        } else {
            QUndoView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qundoview_focusinevent_isbase) {
            qundoview_focusinevent_isbase = false;
            QUndoView::focusInEvent(event);
        } else if (qundoview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qundoview_focusinevent_callback(this, cbval1);
        } else {
            QUndoView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qundoview_focusoutevent_isbase) {
            qundoview_focusoutevent_isbase = false;
            QUndoView::focusOutEvent(event);
        } else if (qundoview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qundoview_focusoutevent_callback(this, cbval1);
        } else {
            QUndoView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qundoview_keypressevent_isbase) {
            qundoview_keypressevent_isbase = false;
            QUndoView::keyPressEvent(event);
        } else if (qundoview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qundoview_keypressevent_callback(this, cbval1);
        } else {
            QUndoView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qundoview_inputmethodevent_isbase) {
            qundoview_inputmethodevent_isbase = false;
            QUndoView::inputMethodEvent(event);
        } else if (qundoview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qundoview_inputmethodevent_callback(this, cbval1);
        } else {
            QUndoView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qundoview_eventfilter_isbase) {
            qundoview_eventfilter_isbase = false;
            return QUndoView::eventFilter(object, event);
        } else if (qundoview_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qundoview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QUndoView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qundoview_minimumsizehint_isbase) {
            qundoview_minimumsizehint_isbase = false;
            return QUndoView::minimumSizeHint();
        } else if (qundoview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qundoview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QUndoView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qundoview_sizehint_isbase) {
            qundoview_sizehint_isbase = false;
            return QUndoView::sizeHint();
        } else if (qundoview_sizehint_callback != nullptr) {
            QSize* callback_ret = qundoview_sizehint_callback();
            return *callback_ret;
        } else {
            return QUndoView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qundoview_setupviewport_isbase) {
            qundoview_setupviewport_isbase = false;
            QUndoView::setupViewport(viewport);
        } else if (qundoview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qundoview_setupviewport_callback(this, cbval1);
        } else {
            QUndoView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qundoview_contextmenuevent_isbase) {
            qundoview_contextmenuevent_isbase = false;
            QUndoView::contextMenuEvent(param1);
        } else if (qundoview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qundoview_contextmenuevent_callback(this, cbval1);
        } else {
            QUndoView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qundoview_changeevent_isbase) {
            qundoview_changeevent_isbase = false;
            QUndoView::changeEvent(param1);
        } else if (qundoview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qundoview_changeevent_callback(this, cbval1);
        } else {
            QUndoView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qundoview_initstyleoption_isbase) {
            qundoview_initstyleoption_isbase = false;
            QUndoView::initStyleOption(option);
        } else if (qundoview_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qundoview_initstyleoption_callback(this, cbval1);
        } else {
            QUndoView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qundoview_devtype_isbase) {
            qundoview_devtype_isbase = false;
            return QUndoView::devType();
        } else if (qundoview_devtype_callback != nullptr) {
            int callback_ret = qundoview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qundoview_setvisible_isbase) {
            qundoview_setvisible_isbase = false;
            QUndoView::setVisible(visible);
        } else if (qundoview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qundoview_setvisible_callback(this, cbval1);
        } else {
            QUndoView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qundoview_heightforwidth_isbase) {
            qundoview_heightforwidth_isbase = false;
            return QUndoView::heightForWidth(param1);
        } else if (qundoview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qundoview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qundoview_hasheightforwidth_isbase) {
            qundoview_hasheightforwidth_isbase = false;
            return QUndoView::hasHeightForWidth();
        } else if (qundoview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qundoview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QUndoView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qundoview_paintengine_isbase) {
            qundoview_paintengine_isbase = false;
            return QUndoView::paintEngine();
        } else if (qundoview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qundoview_paintengine_callback();
            return callback_ret;
        } else {
            return QUndoView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qundoview_keyreleaseevent_isbase) {
            qundoview_keyreleaseevent_isbase = false;
            QUndoView::keyReleaseEvent(event);
        } else if (qundoview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qundoview_keyreleaseevent_callback(this, cbval1);
        } else {
            QUndoView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qundoview_enterevent_isbase) {
            qundoview_enterevent_isbase = false;
            QUndoView::enterEvent(event);
        } else if (qundoview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qundoview_enterevent_callback(this, cbval1);
        } else {
            QUndoView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qundoview_leaveevent_isbase) {
            qundoview_leaveevent_isbase = false;
            QUndoView::leaveEvent(event);
        } else if (qundoview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qundoview_leaveevent_callback(this, cbval1);
        } else {
            QUndoView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qundoview_moveevent_isbase) {
            qundoview_moveevent_isbase = false;
            QUndoView::moveEvent(event);
        } else if (qundoview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qundoview_moveevent_callback(this, cbval1);
        } else {
            QUndoView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qundoview_closeevent_isbase) {
            qundoview_closeevent_isbase = false;
            QUndoView::closeEvent(event);
        } else if (qundoview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qundoview_closeevent_callback(this, cbval1);
        } else {
            QUndoView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qundoview_tabletevent_isbase) {
            qundoview_tabletevent_isbase = false;
            QUndoView::tabletEvent(event);
        } else if (qundoview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qundoview_tabletevent_callback(this, cbval1);
        } else {
            QUndoView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qundoview_actionevent_isbase) {
            qundoview_actionevent_isbase = false;
            QUndoView::actionEvent(event);
        } else if (qundoview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qundoview_actionevent_callback(this, cbval1);
        } else {
            QUndoView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qundoview_showevent_isbase) {
            qundoview_showevent_isbase = false;
            QUndoView::showEvent(event);
        } else if (qundoview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qundoview_showevent_callback(this, cbval1);
        } else {
            QUndoView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qundoview_hideevent_isbase) {
            qundoview_hideevent_isbase = false;
            QUndoView::hideEvent(event);
        } else if (qundoview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qundoview_hideevent_callback(this, cbval1);
        } else {
            QUndoView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qundoview_nativeevent_isbase) {
            qundoview_nativeevent_isbase = false;
            return QUndoView::nativeEvent(eventType, message, result);
        } else if (qundoview_nativeevent_callback != nullptr) {
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

            bool callback_ret = qundoview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QUndoView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qundoview_metric_isbase) {
            qundoview_metric_isbase = false;
            return QUndoView::metric(param1);
        } else if (qundoview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qundoview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qundoview_initpainter_isbase) {
            qundoview_initpainter_isbase = false;
            QUndoView::initPainter(painter);
        } else if (qundoview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qundoview_initpainter_callback(this, cbval1);
        } else {
            QUndoView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qundoview_redirected_isbase) {
            qundoview_redirected_isbase = false;
            return QUndoView::redirected(offset);
        } else if (qundoview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qundoview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qundoview_sharedpainter_isbase) {
            qundoview_sharedpainter_isbase = false;
            return QUndoView::sharedPainter();
        } else if (qundoview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qundoview_sharedpainter_callback();
            return callback_ret;
        } else {
            return QUndoView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundoview_childevent_isbase) {
            qundoview_childevent_isbase = false;
            QUndoView::childEvent(event);
        } else if (qundoview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qundoview_childevent_callback(this, cbval1);
        } else {
            QUndoView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundoview_customevent_isbase) {
            qundoview_customevent_isbase = false;
            QUndoView::customEvent(event);
        } else if (qundoview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qundoview_customevent_callback(this, cbval1);
        } else {
            QUndoView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundoview_connectnotify_isbase) {
            qundoview_connectnotify_isbase = false;
            QUndoView::connectNotify(signal);
        } else if (qundoview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qundoview_connectnotify_callback(this, cbval1);
        } else {
            QUndoView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundoview_disconnectnotify_isbase) {
            qundoview_disconnectnotify_isbase = false;
            QUndoView::disconnectNotify(signal);
        } else if (qundoview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qundoview_disconnectnotify_callback(this, cbval1);
        } else {
            QUndoView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (qundoview_resizecontents_isbase) {
            qundoview_resizecontents_isbase = false;
            QUndoView::resizeContents(width, height);
        } else if (qundoview_resizecontents_callback != nullptr) {
            int cbval1 = width;
            int cbval2 = height;

            qundoview_resizecontents_callback(this, cbval1, cbval2);
        } else {
            QUndoView::resizeContents(width, height);
        }
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (qundoview_contentssize_isbase) {
            qundoview_contentssize_isbase = false;
            return QUndoView::contentsSize();
        } else if (qundoview_contentssize_callback != nullptr) {
            QSize* callback_ret = qundoview_contentssize_callback();
            return *callback_ret;
        } else {
            return QUndoView::contentsSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (qundoview_rectforindex_isbase) {
            qundoview_rectforindex_isbase = false;
            return QUndoView::rectForIndex(index);
        } else if (qundoview_rectforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qundoview_rectforindex_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QUndoView::rectForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (qundoview_setpositionforindex_isbase) {
            qundoview_setpositionforindex_isbase = false;
            QUndoView::setPositionForIndex(position, index);
        } else if (qundoview_setpositionforindex_callback != nullptr) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            qundoview_setpositionforindex_callback(this, cbval1, cbval2);
        } else {
            QUndoView::setPositionForIndex(position, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qundoview_state_isbase) {
            qundoview_state_isbase = false;
            return QUndoView::state();
        } else if (qundoview_state_callback != nullptr) {
            int callback_ret = qundoview_state_callback();
            return static_cast<VirtualQUndoView::State>(callback_ret);
        } else {
            return QUndoView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qundoview_setstate_isbase) {
            qundoview_setstate_isbase = false;
            QUndoView::setState(state);
        } else if (qundoview_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qundoview_setstate_callback(this, cbval1);
        } else {
            QUndoView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qundoview_scheduledelayeditemslayout_isbase) {
            qundoview_scheduledelayeditemslayout_isbase = false;
            QUndoView::scheduleDelayedItemsLayout();
        } else if (qundoview_scheduledelayeditemslayout_callback != nullptr) {
            qundoview_scheduledelayeditemslayout_callback();
        } else {
            QUndoView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qundoview_executedelayeditemslayout_isbase) {
            qundoview_executedelayeditemslayout_isbase = false;
            QUndoView::executeDelayedItemsLayout();
        } else if (qundoview_executedelayeditemslayout_callback != nullptr) {
            qundoview_executedelayeditemslayout_callback();
        } else {
            QUndoView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qundoview_setdirtyregion_isbase) {
            qundoview_setdirtyregion_isbase = false;
            QUndoView::setDirtyRegion(region);
        } else if (qundoview_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            qundoview_setdirtyregion_callback(this, cbval1);
        } else {
            QUndoView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qundoview_scrolldirtyregion_isbase) {
            qundoview_scrolldirtyregion_isbase = false;
            QUndoView::scrollDirtyRegion(dx, dy);
        } else if (qundoview_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qundoview_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            QUndoView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qundoview_dirtyregionoffset_isbase) {
            qundoview_dirtyregionoffset_isbase = false;
            return QUndoView::dirtyRegionOffset();
        } else if (qundoview_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = qundoview_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return QUndoView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qundoview_startautoscroll_isbase) {
            qundoview_startautoscroll_isbase = false;
            QUndoView::startAutoScroll();
        } else if (qundoview_startautoscroll_callback != nullptr) {
            qundoview_startautoscroll_callback();
        } else {
            QUndoView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qundoview_stopautoscroll_isbase) {
            qundoview_stopautoscroll_isbase = false;
            QUndoView::stopAutoScroll();
        } else if (qundoview_stopautoscroll_callback != nullptr) {
            qundoview_stopautoscroll_callback();
        } else {
            QUndoView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qundoview_doautoscroll_isbase) {
            qundoview_doautoscroll_isbase = false;
            QUndoView::doAutoScroll();
        } else if (qundoview_doautoscroll_callback != nullptr) {
            qundoview_doautoscroll_callback();
        } else {
            QUndoView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qundoview_dropindicatorposition_isbase) {
            qundoview_dropindicatorposition_isbase = false;
            return QUndoView::dropIndicatorPosition();
        } else if (qundoview_dropindicatorposition_callback != nullptr) {
            int callback_ret = qundoview_dropindicatorposition_callback();
            return static_cast<VirtualQUndoView::DropIndicatorPosition>(callback_ret);
        } else {
            return QUndoView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qundoview_setviewportmargins_isbase) {
            qundoview_setviewportmargins_isbase = false;
            QUndoView::setViewportMargins(left, top, right, bottom);
        } else if (qundoview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qundoview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QUndoView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qundoview_viewportmargins_isbase) {
            qundoview_viewportmargins_isbase = false;
            return QUndoView::viewportMargins();
        } else if (qundoview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qundoview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QUndoView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qundoview_drawframe_isbase) {
            qundoview_drawframe_isbase = false;
            QUndoView::drawFrame(param1);
        } else if (qundoview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qundoview_drawframe_callback(this, cbval1);
        } else {
            QUndoView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qundoview_updatemicrofocus_isbase) {
            qundoview_updatemicrofocus_isbase = false;
            QUndoView::updateMicroFocus();
        } else if (qundoview_updatemicrofocus_callback != nullptr) {
            qundoview_updatemicrofocus_callback();
        } else {
            QUndoView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qundoview_create_isbase) {
            qundoview_create_isbase = false;
            QUndoView::create();
        } else if (qundoview_create_callback != nullptr) {
            qundoview_create_callback();
        } else {
            QUndoView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qundoview_destroy_isbase) {
            qundoview_destroy_isbase = false;
            QUndoView::destroy();
        } else if (qundoview_destroy_callback != nullptr) {
            qundoview_destroy_callback();
        } else {
            QUndoView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qundoview_focusnextchild_isbase) {
            qundoview_focusnextchild_isbase = false;
            return QUndoView::focusNextChild();
        } else if (qundoview_focusnextchild_callback != nullptr) {
            bool callback_ret = qundoview_focusnextchild_callback();
            return callback_ret;
        } else {
            return QUndoView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qundoview_focuspreviouschild_isbase) {
            qundoview_focuspreviouschild_isbase = false;
            return QUndoView::focusPreviousChild();
        } else if (qundoview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qundoview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QUndoView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qundoview_sender_isbase) {
            qundoview_sender_isbase = false;
            return QUndoView::sender();
        } else if (qundoview_sender_callback != nullptr) {
            QObject* callback_ret = qundoview_sender_callback();
            return callback_ret;
        } else {
            return QUndoView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qundoview_sendersignalindex_isbase) {
            qundoview_sendersignalindex_isbase = false;
            return QUndoView::senderSignalIndex();
        } else if (qundoview_sendersignalindex_callback != nullptr) {
            int callback_ret = qundoview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qundoview_receivers_isbase) {
            qundoview_receivers_isbase = false;
            return QUndoView::receivers(signal);
        } else if (qundoview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qundoview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QUndoView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qundoview_issignalconnected_isbase) {
            qundoview_issignalconnected_isbase = false;
            return QUndoView::isSignalConnected(signal);
        } else if (qundoview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qundoview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoView::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QUndoView_Event(QUndoView* self, QEvent* e);
    friend bool QUndoView_QBaseEvent(QUndoView* self, QEvent* e);
    friend void QUndoView_ScrollContentsBy(QUndoView* self, int dx, int dy);
    friend void QUndoView_QBaseScrollContentsBy(QUndoView* self, int dx, int dy);
    friend void QUndoView_DataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QUndoView_QBaseDataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QUndoView_RowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_QBaseRowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_RowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_QBaseRowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_MouseMoveEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_QBaseMouseMoveEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_MouseReleaseEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_QBaseMouseReleaseEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_WheelEvent(QUndoView* self, QWheelEvent* e);
    friend void QUndoView_QBaseWheelEvent(QUndoView* self, QWheelEvent* e);
    friend void QUndoView_TimerEvent(QUndoView* self, QTimerEvent* e);
    friend void QUndoView_QBaseTimerEvent(QUndoView* self, QTimerEvent* e);
    friend void QUndoView_ResizeEvent(QUndoView* self, QResizeEvent* e);
    friend void QUndoView_QBaseResizeEvent(QUndoView* self, QResizeEvent* e);
    friend void QUndoView_DragMoveEvent(QUndoView* self, QDragMoveEvent* e);
    friend void QUndoView_QBaseDragMoveEvent(QUndoView* self, QDragMoveEvent* e);
    friend void QUndoView_DragLeaveEvent(QUndoView* self, QDragLeaveEvent* e);
    friend void QUndoView_QBaseDragLeaveEvent(QUndoView* self, QDragLeaveEvent* e);
    friend void QUndoView_DropEvent(QUndoView* self, QDropEvent* e);
    friend void QUndoView_QBaseDropEvent(QUndoView* self, QDropEvent* e);
    friend void QUndoView_StartDrag(QUndoView* self, int supportedActions);
    friend void QUndoView_QBaseStartDrag(QUndoView* self, int supportedActions);
    friend void QUndoView_InitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option);
    friend void QUndoView_QBaseInitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option);
    friend void QUndoView_PaintEvent(QUndoView* self, QPaintEvent* e);
    friend void QUndoView_QBasePaintEvent(QUndoView* self, QPaintEvent* e);
    friend int QUndoView_HorizontalOffset(const QUndoView* self);
    friend int QUndoView_QBaseHorizontalOffset(const QUndoView* self);
    friend int QUndoView_VerticalOffset(const QUndoView* self);
    friend int QUndoView_QBaseVerticalOffset(const QUndoView* self);
    friend QModelIndex* QUndoView_MoveCursor(QUndoView* self, int cursorAction, int modifiers);
    friend QModelIndex* QUndoView_QBaseMoveCursor(QUndoView* self, int cursorAction, int modifiers);
    friend void QUndoView_SetSelection(QUndoView* self, const QRect* rect, int command);
    friend void QUndoView_QBaseSetSelection(QUndoView* self, const QRect* rect, int command);
    friend QRegion* QUndoView_VisualRegionForSelection(const QUndoView* self, const QItemSelection* selection);
    friend QRegion* QUndoView_QBaseVisualRegionForSelection(const QUndoView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QUndoView_SelectedIndexes(const QUndoView* self);
    friend libqt_list /* of QModelIndex* */ QUndoView_QBaseSelectedIndexes(const QUndoView* self);
    friend void QUndoView_UpdateGeometries(QUndoView* self);
    friend void QUndoView_QBaseUpdateGeometries(QUndoView* self);
    friend bool QUndoView_IsIndexHidden(const QUndoView* self, const QModelIndex* index);
    friend bool QUndoView_QBaseIsIndexHidden(const QUndoView* self, const QModelIndex* index);
    friend void QUndoView_SelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QUndoView_QBaseSelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QUndoView_CurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QUndoView_QBaseCurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* QUndoView_ViewportSizeHint(const QUndoView* self);
    friend QSize* QUndoView_QBaseViewportSizeHint(const QUndoView* self);
    friend void QUndoView_UpdateEditorData(QUndoView* self);
    friend void QUndoView_QBaseUpdateEditorData(QUndoView* self);
    friend void QUndoView_UpdateEditorGeometries(QUndoView* self);
    friend void QUndoView_QBaseUpdateEditorGeometries(QUndoView* self);
    friend void QUndoView_VerticalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_QBaseVerticalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_HorizontalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_QBaseHorizontalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_VerticalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_QBaseVerticalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_HorizontalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_QBaseHorizontalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_CloseEditor(QUndoView* self, QWidget* editor, int hint);
    friend void QUndoView_QBaseCloseEditor(QUndoView* self, QWidget* editor, int hint);
    friend void QUndoView_CommitData(QUndoView* self, QWidget* editor);
    friend void QUndoView_QBaseCommitData(QUndoView* self, QWidget* editor);
    friend void QUndoView_EditorDestroyed(QUndoView* self, QObject* editor);
    friend void QUndoView_QBaseEditorDestroyed(QUndoView* self, QObject* editor);
    friend bool QUndoView_Edit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QUndoView_QBaseEdit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QUndoView_SelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event);
    friend int QUndoView_QBaseSelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event);
    friend bool QUndoView_FocusNextPrevChild(QUndoView* self, bool next);
    friend bool QUndoView_QBaseFocusNextPrevChild(QUndoView* self, bool next);
    friend bool QUndoView_ViewportEvent(QUndoView* self, QEvent* event);
    friend bool QUndoView_QBaseViewportEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_MousePressEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_QBaseMousePressEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_MouseDoubleClickEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_QBaseMouseDoubleClickEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_DragEnterEvent(QUndoView* self, QDragEnterEvent* event);
    friend void QUndoView_QBaseDragEnterEvent(QUndoView* self, QDragEnterEvent* event);
    friend void QUndoView_FocusInEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_QBaseFocusInEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_FocusOutEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_QBaseFocusOutEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_KeyPressEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_QBaseKeyPressEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_InputMethodEvent(QUndoView* self, QInputMethodEvent* event);
    friend void QUndoView_QBaseInputMethodEvent(QUndoView* self, QInputMethodEvent* event);
    friend bool QUndoView_EventFilter(QUndoView* self, QObject* object, QEvent* event);
    friend bool QUndoView_QBaseEventFilter(QUndoView* self, QObject* object, QEvent* event);
    friend void QUndoView_ContextMenuEvent(QUndoView* self, QContextMenuEvent* param1);
    friend void QUndoView_QBaseContextMenuEvent(QUndoView* self, QContextMenuEvent* param1);
    friend void QUndoView_ChangeEvent(QUndoView* self, QEvent* param1);
    friend void QUndoView_QBaseChangeEvent(QUndoView* self, QEvent* param1);
    friend void QUndoView_InitStyleOption(const QUndoView* self, QStyleOptionFrame* option);
    friend void QUndoView_QBaseInitStyleOption(const QUndoView* self, QStyleOptionFrame* option);
    friend void QUndoView_KeyReleaseEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_QBaseKeyReleaseEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_EnterEvent(QUndoView* self, QEnterEvent* event);
    friend void QUndoView_QBaseEnterEvent(QUndoView* self, QEnterEvent* event);
    friend void QUndoView_LeaveEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_QBaseLeaveEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_MoveEvent(QUndoView* self, QMoveEvent* event);
    friend void QUndoView_QBaseMoveEvent(QUndoView* self, QMoveEvent* event);
    friend void QUndoView_CloseEvent(QUndoView* self, QCloseEvent* event);
    friend void QUndoView_QBaseCloseEvent(QUndoView* self, QCloseEvent* event);
    friend void QUndoView_TabletEvent(QUndoView* self, QTabletEvent* event);
    friend void QUndoView_QBaseTabletEvent(QUndoView* self, QTabletEvent* event);
    friend void QUndoView_ActionEvent(QUndoView* self, QActionEvent* event);
    friend void QUndoView_QBaseActionEvent(QUndoView* self, QActionEvent* event);
    friend void QUndoView_ShowEvent(QUndoView* self, QShowEvent* event);
    friend void QUndoView_QBaseShowEvent(QUndoView* self, QShowEvent* event);
    friend void QUndoView_HideEvent(QUndoView* self, QHideEvent* event);
    friend void QUndoView_QBaseHideEvent(QUndoView* self, QHideEvent* event);
    friend bool QUndoView_NativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QUndoView_QBaseNativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QUndoView_Metric(const QUndoView* self, int param1);
    friend int QUndoView_QBaseMetric(const QUndoView* self, int param1);
    friend void QUndoView_InitPainter(const QUndoView* self, QPainter* painter);
    friend void QUndoView_QBaseInitPainter(const QUndoView* self, QPainter* painter);
    friend QPaintDevice* QUndoView_Redirected(const QUndoView* self, QPoint* offset);
    friend QPaintDevice* QUndoView_QBaseRedirected(const QUndoView* self, QPoint* offset);
    friend QPainter* QUndoView_SharedPainter(const QUndoView* self);
    friend QPainter* QUndoView_QBaseSharedPainter(const QUndoView* self);
    friend void QUndoView_ChildEvent(QUndoView* self, QChildEvent* event);
    friend void QUndoView_QBaseChildEvent(QUndoView* self, QChildEvent* event);
    friend void QUndoView_CustomEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_QBaseCustomEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_ConnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_QBaseConnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_DisconnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_QBaseDisconnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_ResizeContents(QUndoView* self, int width, int height);
    friend void QUndoView_QBaseResizeContents(QUndoView* self, int width, int height);
    friend QSize* QUndoView_ContentsSize(const QUndoView* self);
    friend QSize* QUndoView_QBaseContentsSize(const QUndoView* self);
    friend QRect* QUndoView_RectForIndex(const QUndoView* self, const QModelIndex* index);
    friend QRect* QUndoView_QBaseRectForIndex(const QUndoView* self, const QModelIndex* index);
    friend void QUndoView_SetPositionForIndex(QUndoView* self, const QPoint* position, const QModelIndex* index);
    friend void QUndoView_QBaseSetPositionForIndex(QUndoView* self, const QPoint* position, const QModelIndex* index);
    friend int QUndoView_State(const QUndoView* self);
    friend int QUndoView_QBaseState(const QUndoView* self);
    friend void QUndoView_SetState(QUndoView* self, int state);
    friend void QUndoView_QBaseSetState(QUndoView* self, int state);
    friend void QUndoView_ScheduleDelayedItemsLayout(QUndoView* self);
    friend void QUndoView_QBaseScheduleDelayedItemsLayout(QUndoView* self);
    friend void QUndoView_ExecuteDelayedItemsLayout(QUndoView* self);
    friend void QUndoView_QBaseExecuteDelayedItemsLayout(QUndoView* self);
    friend void QUndoView_SetDirtyRegion(QUndoView* self, const QRegion* region);
    friend void QUndoView_QBaseSetDirtyRegion(QUndoView* self, const QRegion* region);
    friend void QUndoView_ScrollDirtyRegion(QUndoView* self, int dx, int dy);
    friend void QUndoView_QBaseScrollDirtyRegion(QUndoView* self, int dx, int dy);
    friend QPoint* QUndoView_DirtyRegionOffset(const QUndoView* self);
    friend QPoint* QUndoView_QBaseDirtyRegionOffset(const QUndoView* self);
    friend void QUndoView_StartAutoScroll(QUndoView* self);
    friend void QUndoView_QBaseStartAutoScroll(QUndoView* self);
    friend void QUndoView_StopAutoScroll(QUndoView* self);
    friend void QUndoView_QBaseStopAutoScroll(QUndoView* self);
    friend void QUndoView_DoAutoScroll(QUndoView* self);
    friend void QUndoView_QBaseDoAutoScroll(QUndoView* self);
    friend int QUndoView_DropIndicatorPosition(const QUndoView* self);
    friend int QUndoView_QBaseDropIndicatorPosition(const QUndoView* self);
    friend void QUndoView_SetViewportMargins(QUndoView* self, int left, int top, int right, int bottom);
    friend void QUndoView_QBaseSetViewportMargins(QUndoView* self, int left, int top, int right, int bottom);
    friend QMargins* QUndoView_ViewportMargins(const QUndoView* self);
    friend QMargins* QUndoView_QBaseViewportMargins(const QUndoView* self);
    friend void QUndoView_DrawFrame(QUndoView* self, QPainter* param1);
    friend void QUndoView_QBaseDrawFrame(QUndoView* self, QPainter* param1);
    friend void QUndoView_UpdateMicroFocus(QUndoView* self);
    friend void QUndoView_QBaseUpdateMicroFocus(QUndoView* self);
    friend void QUndoView_Create(QUndoView* self);
    friend void QUndoView_QBaseCreate(QUndoView* self);
    friend void QUndoView_Destroy(QUndoView* self);
    friend void QUndoView_QBaseDestroy(QUndoView* self);
    friend bool QUndoView_FocusNextChild(QUndoView* self);
    friend bool QUndoView_QBaseFocusNextChild(QUndoView* self);
    friend bool QUndoView_FocusPreviousChild(QUndoView* self);
    friend bool QUndoView_QBaseFocusPreviousChild(QUndoView* self);
    friend QObject* QUndoView_Sender(const QUndoView* self);
    friend QObject* QUndoView_QBaseSender(const QUndoView* self);
    friend int QUndoView_SenderSignalIndex(const QUndoView* self);
    friend int QUndoView_QBaseSenderSignalIndex(const QUndoView* self);
    friend int QUndoView_Receivers(const QUndoView* self, const char* signal);
    friend int QUndoView_QBaseReceivers(const QUndoView* self, const char* signal);
    friend bool QUndoView_IsSignalConnected(const QUndoView* self, const QMetaMethod* signal);
    friend bool QUndoView_QBaseIsSignalConnected(const QUndoView* self, const QMetaMethod* signal);
};

#endif
