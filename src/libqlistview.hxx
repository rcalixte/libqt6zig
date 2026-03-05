#pragma once
#ifndef SRCC_LIBVIRTUALQLISTVIEW_H
#define SRCC_LIBVIRTUALQLISTVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QListView so that we can call protected methods
class VirtualQListView final : public QListView {

  public:
    // Virtual class boolean flag
    bool isVirtualQListView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QListView_MetaObject_Callback = QMetaObject* (*)();
    using QListView_Metacast_Callback = void* (*)(QListView*, const char*);
    using QListView_Metacall_Callback = int (*)(QListView*, int, int, void**);
    using QListView_VisualRect_Callback = QRect* (*)(const QListView*, QModelIndex*);
    using QListView_ScrollTo_Callback = void (*)(QListView*, QModelIndex*, int);
    using QListView_IndexAt_Callback = QModelIndex* (*)(const QListView*, QPoint*);
    using QListView_DoItemsLayout_Callback = void (*)();
    using QListView_Reset_Callback = void (*)();
    using QListView_SetRootIndex_Callback = void (*)(QListView*, QModelIndex*);
    using QListView_Event_Callback = bool (*)(QListView*, QEvent*);
    using QListView_ScrollContentsBy_Callback = void (*)(QListView*, int, int);
    using QListView_DataChanged_Callback = void (*)(QListView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QListView_RowsInserted_Callback = void (*)(QListView*, QModelIndex*, int, int);
    using QListView_RowsAboutToBeRemoved_Callback = void (*)(QListView*, QModelIndex*, int, int);
    using QListView_MouseMoveEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_MouseReleaseEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_WheelEvent_Callback = void (*)(QListView*, QWheelEvent*);
    using QListView_TimerEvent_Callback = void (*)(QListView*, QTimerEvent*);
    using QListView_ResizeEvent_Callback = void (*)(QListView*, QResizeEvent*);
    using QListView_DragMoveEvent_Callback = void (*)(QListView*, QDragMoveEvent*);
    using QListView_DragLeaveEvent_Callback = void (*)(QListView*, QDragLeaveEvent*);
    using QListView_DropEvent_Callback = void (*)(QListView*, QDropEvent*);
    using QListView_StartDrag_Callback = void (*)(QListView*, int);
    using QListView_InitViewItemOption_Callback = void (*)(const QListView*, QStyleOptionViewItem*);
    using QListView_PaintEvent_Callback = void (*)(QListView*, QPaintEvent*);
    using QListView_HorizontalOffset_Callback = int (*)();
    using QListView_VerticalOffset_Callback = int (*)();
    using QListView_MoveCursor_Callback = QModelIndex* (*)(QListView*, int, int);
    using QListView_SetSelection_Callback = void (*)(QListView*, QRect*, int);
    using QListView_VisualRegionForSelection_Callback = QRegion* (*)(const QListView*, QItemSelection*);
    using QListView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QListView_UpdateGeometries_Callback = void (*)();
    using QListView_IsIndexHidden_Callback = bool (*)(const QListView*, QModelIndex*);
    using QListView_SelectionChanged_Callback = void (*)(QListView*, QItemSelection*, QItemSelection*);
    using QListView_CurrentChanged_Callback = void (*)(QListView*, QModelIndex*, QModelIndex*);
    using QListView_ViewportSizeHint_Callback = QSize* (*)();
    using QListView_SetModel_Callback = void (*)(QListView*, QAbstractItemModel*);
    using QListView_SetSelectionModel_Callback = void (*)(QListView*, QItemSelectionModel*);
    using QListView_KeyboardSearch_Callback = void (*)(QListView*, const char*);
    using QListView_SizeHintForRow_Callback = int (*)(const QListView*, int);
    using QListView_SizeHintForColumn_Callback = int (*)(const QListView*, int);
    using QListView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QListView*, QModelIndex*);
    using QListView_InputMethodQuery_Callback = QVariant* (*)(const QListView*, int);
    using QListView_SelectAll_Callback = void (*)();
    using QListView_UpdateEditorData_Callback = void (*)();
    using QListView_UpdateEditorGeometries_Callback = void (*)();
    using QListView_VerticalScrollbarAction_Callback = void (*)(QListView*, int);
    using QListView_HorizontalScrollbarAction_Callback = void (*)(QListView*, int);
    using QListView_VerticalScrollbarValueChanged_Callback = void (*)(QListView*, int);
    using QListView_HorizontalScrollbarValueChanged_Callback = void (*)(QListView*, int);
    using QListView_CloseEditor_Callback = void (*)(QListView*, QWidget*, int);
    using QListView_CommitData_Callback = void (*)(QListView*, QWidget*);
    using QListView_EditorDestroyed_Callback = void (*)(QListView*, QObject*);
    using QListView_Edit2_Callback = bool (*)(QListView*, QModelIndex*, int, QEvent*);
    using QListView_SelectionCommand_Callback = int (*)(const QListView*, QModelIndex*, QEvent*);
    using QListView_FocusNextPrevChild_Callback = bool (*)(QListView*, bool);
    using QListView_ViewportEvent_Callback = bool (*)(QListView*, QEvent*);
    using QListView_MousePressEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_MouseDoubleClickEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_DragEnterEvent_Callback = void (*)(QListView*, QDragEnterEvent*);
    using QListView_FocusInEvent_Callback = void (*)(QListView*, QFocusEvent*);
    using QListView_FocusOutEvent_Callback = void (*)(QListView*, QFocusEvent*);
    using QListView_KeyPressEvent_Callback = void (*)(QListView*, QKeyEvent*);
    using QListView_InputMethodEvent_Callback = void (*)(QListView*, QInputMethodEvent*);
    using QListView_EventFilter_Callback = bool (*)(QListView*, QObject*, QEvent*);
    using QListView_MinimumSizeHint_Callback = QSize* (*)();
    using QListView_SizeHint_Callback = QSize* (*)();
    using QListView_SetupViewport_Callback = void (*)(QListView*, QWidget*);
    using QListView_ContextMenuEvent_Callback = void (*)(QListView*, QContextMenuEvent*);
    using QListView_ChangeEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_InitStyleOption_Callback = void (*)(const QListView*, QStyleOptionFrame*);
    using QListView_DevType_Callback = int (*)();
    using QListView_SetVisible_Callback = void (*)(QListView*, bool);
    using QListView_HeightForWidth_Callback = int (*)(const QListView*, int);
    using QListView_HasHeightForWidth_Callback = bool (*)();
    using QListView_PaintEngine_Callback = QPaintEngine* (*)();
    using QListView_KeyReleaseEvent_Callback = void (*)(QListView*, QKeyEvent*);
    using QListView_EnterEvent_Callback = void (*)(QListView*, QEnterEvent*);
    using QListView_LeaveEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_MoveEvent_Callback = void (*)(QListView*, QMoveEvent*);
    using QListView_CloseEvent_Callback = void (*)(QListView*, QCloseEvent*);
    using QListView_TabletEvent_Callback = void (*)(QListView*, QTabletEvent*);
    using QListView_ActionEvent_Callback = void (*)(QListView*, QActionEvent*);
    using QListView_ShowEvent_Callback = void (*)(QListView*, QShowEvent*);
    using QListView_HideEvent_Callback = void (*)(QListView*, QHideEvent*);
    using QListView_NativeEvent_Callback = bool (*)(QListView*, libqt_string, void*, intptr_t*);
    using QListView_Metric_Callback = int (*)(const QListView*, int);
    using QListView_InitPainter_Callback = void (*)(const QListView*, QPainter*);
    using QListView_Redirected_Callback = QPaintDevice* (*)(const QListView*, QPoint*);
    using QListView_SharedPainter_Callback = QPainter* (*)();
    using QListView_ChildEvent_Callback = void (*)(QListView*, QChildEvent*);
    using QListView_CustomEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_ConnectNotify_Callback = void (*)(QListView*, QMetaMethod*);
    using QListView_DisconnectNotify_Callback = void (*)(QListView*, QMetaMethod*);
    using QListView_ResizeContents_Callback = void (*)(QListView*, int, int);
    using QListView_ContentsSize_Callback = QSize* (*)();
    using QListView_RectForIndex_Callback = QRect* (*)(const QListView*, QModelIndex*);
    using QListView_SetPositionForIndex_Callback = void (*)(QListView*, QPoint*, QModelIndex*);
    using QListView_State_Callback = int (*)();
    using QListView_SetState_Callback = void (*)(QListView*, int);
    using QListView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QListView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QListView_SetDirtyRegion_Callback = void (*)(QListView*, QRegion*);
    using QListView_ScrollDirtyRegion_Callback = void (*)(QListView*, int, int);
    using QListView_DirtyRegionOffset_Callback = QPoint* (*)();
    using QListView_StartAutoScroll_Callback = void (*)();
    using QListView_StopAutoScroll_Callback = void (*)();
    using QListView_DoAutoScroll_Callback = void (*)();
    using QListView_DropIndicatorPosition_Callback = int (*)();
    using QListView_SetViewportMargins_Callback = void (*)(QListView*, int, int, int, int);
    using QListView_ViewportMargins_Callback = QMargins* (*)();
    using QListView_DrawFrame_Callback = void (*)(QListView*, QPainter*);
    using QListView_UpdateMicroFocus_Callback = void (*)();
    using QListView_Create_Callback = void (*)();
    using QListView_Destroy_Callback = void (*)();
    using QListView_FocusNextChild_Callback = bool (*)();
    using QListView_FocusPreviousChild_Callback = bool (*)();
    using QListView_Sender_Callback = QObject* (*)();
    using QListView_SenderSignalIndex_Callback = int (*)();
    using QListView_Receivers_Callback = int (*)(const QListView*, const char*);
    using QListView_IsSignalConnected_Callback = bool (*)(const QListView*, QMetaMethod*);
    using QListView_GetDecodedMetricF_Callback = double (*)(const QListView*, int, int);

  protected:
    // Instance callback storage
    QListView_MetaObject_Callback qlistview_metaobject_callback = nullptr;
    QListView_Metacast_Callback qlistview_metacast_callback = nullptr;
    QListView_Metacall_Callback qlistview_metacall_callback = nullptr;
    QListView_VisualRect_Callback qlistview_visualrect_callback = nullptr;
    QListView_ScrollTo_Callback qlistview_scrollto_callback = nullptr;
    QListView_IndexAt_Callback qlistview_indexat_callback = nullptr;
    QListView_DoItemsLayout_Callback qlistview_doitemslayout_callback = nullptr;
    QListView_Reset_Callback qlistview_reset_callback = nullptr;
    QListView_SetRootIndex_Callback qlistview_setrootindex_callback = nullptr;
    QListView_Event_Callback qlistview_event_callback = nullptr;
    QListView_ScrollContentsBy_Callback qlistview_scrollcontentsby_callback = nullptr;
    QListView_DataChanged_Callback qlistview_datachanged_callback = nullptr;
    QListView_RowsInserted_Callback qlistview_rowsinserted_callback = nullptr;
    QListView_RowsAboutToBeRemoved_Callback qlistview_rowsabouttoberemoved_callback = nullptr;
    QListView_MouseMoveEvent_Callback qlistview_mousemoveevent_callback = nullptr;
    QListView_MouseReleaseEvent_Callback qlistview_mousereleaseevent_callback = nullptr;
    QListView_WheelEvent_Callback qlistview_wheelevent_callback = nullptr;
    QListView_TimerEvent_Callback qlistview_timerevent_callback = nullptr;
    QListView_ResizeEvent_Callback qlistview_resizeevent_callback = nullptr;
    QListView_DragMoveEvent_Callback qlistview_dragmoveevent_callback = nullptr;
    QListView_DragLeaveEvent_Callback qlistview_dragleaveevent_callback = nullptr;
    QListView_DropEvent_Callback qlistview_dropevent_callback = nullptr;
    QListView_StartDrag_Callback qlistview_startdrag_callback = nullptr;
    QListView_InitViewItemOption_Callback qlistview_initviewitemoption_callback = nullptr;
    QListView_PaintEvent_Callback qlistview_paintevent_callback = nullptr;
    QListView_HorizontalOffset_Callback qlistview_horizontaloffset_callback = nullptr;
    QListView_VerticalOffset_Callback qlistview_verticaloffset_callback = nullptr;
    QListView_MoveCursor_Callback qlistview_movecursor_callback = nullptr;
    QListView_SetSelection_Callback qlistview_setselection_callback = nullptr;
    QListView_VisualRegionForSelection_Callback qlistview_visualregionforselection_callback = nullptr;
    QListView_SelectedIndexes_Callback qlistview_selectedindexes_callback = nullptr;
    QListView_UpdateGeometries_Callback qlistview_updategeometries_callback = nullptr;
    QListView_IsIndexHidden_Callback qlistview_isindexhidden_callback = nullptr;
    QListView_SelectionChanged_Callback qlistview_selectionchanged_callback = nullptr;
    QListView_CurrentChanged_Callback qlistview_currentchanged_callback = nullptr;
    QListView_ViewportSizeHint_Callback qlistview_viewportsizehint_callback = nullptr;
    QListView_SetModel_Callback qlistview_setmodel_callback = nullptr;
    QListView_SetSelectionModel_Callback qlistview_setselectionmodel_callback = nullptr;
    QListView_KeyboardSearch_Callback qlistview_keyboardsearch_callback = nullptr;
    QListView_SizeHintForRow_Callback qlistview_sizehintforrow_callback = nullptr;
    QListView_SizeHintForColumn_Callback qlistview_sizehintforcolumn_callback = nullptr;
    QListView_ItemDelegateForIndex_Callback qlistview_itemdelegateforindex_callback = nullptr;
    QListView_InputMethodQuery_Callback qlistview_inputmethodquery_callback = nullptr;
    QListView_SelectAll_Callback qlistview_selectall_callback = nullptr;
    QListView_UpdateEditorData_Callback qlistview_updateeditordata_callback = nullptr;
    QListView_UpdateEditorGeometries_Callback qlistview_updateeditorgeometries_callback = nullptr;
    QListView_VerticalScrollbarAction_Callback qlistview_verticalscrollbaraction_callback = nullptr;
    QListView_HorizontalScrollbarAction_Callback qlistview_horizontalscrollbaraction_callback = nullptr;
    QListView_VerticalScrollbarValueChanged_Callback qlistview_verticalscrollbarvaluechanged_callback = nullptr;
    QListView_HorizontalScrollbarValueChanged_Callback qlistview_horizontalscrollbarvaluechanged_callback = nullptr;
    QListView_CloseEditor_Callback qlistview_closeeditor_callback = nullptr;
    QListView_CommitData_Callback qlistview_commitdata_callback = nullptr;
    QListView_EditorDestroyed_Callback qlistview_editordestroyed_callback = nullptr;
    QListView_Edit2_Callback qlistview_edit2_callback = nullptr;
    QListView_SelectionCommand_Callback qlistview_selectioncommand_callback = nullptr;
    QListView_FocusNextPrevChild_Callback qlistview_focusnextprevchild_callback = nullptr;
    QListView_ViewportEvent_Callback qlistview_viewportevent_callback = nullptr;
    QListView_MousePressEvent_Callback qlistview_mousepressevent_callback = nullptr;
    QListView_MouseDoubleClickEvent_Callback qlistview_mousedoubleclickevent_callback = nullptr;
    QListView_DragEnterEvent_Callback qlistview_dragenterevent_callback = nullptr;
    QListView_FocusInEvent_Callback qlistview_focusinevent_callback = nullptr;
    QListView_FocusOutEvent_Callback qlistview_focusoutevent_callback = nullptr;
    QListView_KeyPressEvent_Callback qlistview_keypressevent_callback = nullptr;
    QListView_InputMethodEvent_Callback qlistview_inputmethodevent_callback = nullptr;
    QListView_EventFilter_Callback qlistview_eventfilter_callback = nullptr;
    QListView_MinimumSizeHint_Callback qlistview_minimumsizehint_callback = nullptr;
    QListView_SizeHint_Callback qlistview_sizehint_callback = nullptr;
    QListView_SetupViewport_Callback qlistview_setupviewport_callback = nullptr;
    QListView_ContextMenuEvent_Callback qlistview_contextmenuevent_callback = nullptr;
    QListView_ChangeEvent_Callback qlistview_changeevent_callback = nullptr;
    QListView_InitStyleOption_Callback qlistview_initstyleoption_callback = nullptr;
    QListView_DevType_Callback qlistview_devtype_callback = nullptr;
    QListView_SetVisible_Callback qlistview_setvisible_callback = nullptr;
    QListView_HeightForWidth_Callback qlistview_heightforwidth_callback = nullptr;
    QListView_HasHeightForWidth_Callback qlistview_hasheightforwidth_callback = nullptr;
    QListView_PaintEngine_Callback qlistview_paintengine_callback = nullptr;
    QListView_KeyReleaseEvent_Callback qlistview_keyreleaseevent_callback = nullptr;
    QListView_EnterEvent_Callback qlistview_enterevent_callback = nullptr;
    QListView_LeaveEvent_Callback qlistview_leaveevent_callback = nullptr;
    QListView_MoveEvent_Callback qlistview_moveevent_callback = nullptr;
    QListView_CloseEvent_Callback qlistview_closeevent_callback = nullptr;
    QListView_TabletEvent_Callback qlistview_tabletevent_callback = nullptr;
    QListView_ActionEvent_Callback qlistview_actionevent_callback = nullptr;
    QListView_ShowEvent_Callback qlistview_showevent_callback = nullptr;
    QListView_HideEvent_Callback qlistview_hideevent_callback = nullptr;
    QListView_NativeEvent_Callback qlistview_nativeevent_callback = nullptr;
    QListView_Metric_Callback qlistview_metric_callback = nullptr;
    QListView_InitPainter_Callback qlistview_initpainter_callback = nullptr;
    QListView_Redirected_Callback qlistview_redirected_callback = nullptr;
    QListView_SharedPainter_Callback qlistview_sharedpainter_callback = nullptr;
    QListView_ChildEvent_Callback qlistview_childevent_callback = nullptr;
    QListView_CustomEvent_Callback qlistview_customevent_callback = nullptr;
    QListView_ConnectNotify_Callback qlistview_connectnotify_callback = nullptr;
    QListView_DisconnectNotify_Callback qlistview_disconnectnotify_callback = nullptr;
    QListView_ResizeContents_Callback qlistview_resizecontents_callback = nullptr;
    QListView_ContentsSize_Callback qlistview_contentssize_callback = nullptr;
    QListView_RectForIndex_Callback qlistview_rectforindex_callback = nullptr;
    QListView_SetPositionForIndex_Callback qlistview_setpositionforindex_callback = nullptr;
    QListView_State_Callback qlistview_state_callback = nullptr;
    QListView_SetState_Callback qlistview_setstate_callback = nullptr;
    QListView_ScheduleDelayedItemsLayout_Callback qlistview_scheduledelayeditemslayout_callback = nullptr;
    QListView_ExecuteDelayedItemsLayout_Callback qlistview_executedelayeditemslayout_callback = nullptr;
    QListView_SetDirtyRegion_Callback qlistview_setdirtyregion_callback = nullptr;
    QListView_ScrollDirtyRegion_Callback qlistview_scrolldirtyregion_callback = nullptr;
    QListView_DirtyRegionOffset_Callback qlistview_dirtyregionoffset_callback = nullptr;
    QListView_StartAutoScroll_Callback qlistview_startautoscroll_callback = nullptr;
    QListView_StopAutoScroll_Callback qlistview_stopautoscroll_callback = nullptr;
    QListView_DoAutoScroll_Callback qlistview_doautoscroll_callback = nullptr;
    QListView_DropIndicatorPosition_Callback qlistview_dropindicatorposition_callback = nullptr;
    QListView_SetViewportMargins_Callback qlistview_setviewportmargins_callback = nullptr;
    QListView_ViewportMargins_Callback qlistview_viewportmargins_callback = nullptr;
    QListView_DrawFrame_Callback qlistview_drawframe_callback = nullptr;
    QListView_UpdateMicroFocus_Callback qlistview_updatemicrofocus_callback = nullptr;
    QListView_Create_Callback qlistview_create_callback = nullptr;
    QListView_Destroy_Callback qlistview_destroy_callback = nullptr;
    QListView_FocusNextChild_Callback qlistview_focusnextchild_callback = nullptr;
    QListView_FocusPreviousChild_Callback qlistview_focuspreviouschild_callback = nullptr;
    QListView_Sender_Callback qlistview_sender_callback = nullptr;
    QListView_SenderSignalIndex_Callback qlistview_sendersignalindex_callback = nullptr;
    QListView_Receivers_Callback qlistview_receivers_callback = nullptr;
    QListView_IsSignalConnected_Callback qlistview_issignalconnected_callback = nullptr;
    QListView_GetDecodedMetricF_Callback qlistview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qlistview_metaobject_isbase = false;
    mutable bool qlistview_metacast_isbase = false;
    mutable bool qlistview_metacall_isbase = false;
    mutable bool qlistview_visualrect_isbase = false;
    mutable bool qlistview_scrollto_isbase = false;
    mutable bool qlistview_indexat_isbase = false;
    mutable bool qlistview_doitemslayout_isbase = false;
    mutable bool qlistview_reset_isbase = false;
    mutable bool qlistview_setrootindex_isbase = false;
    mutable bool qlistview_event_isbase = false;
    mutable bool qlistview_scrollcontentsby_isbase = false;
    mutable bool qlistview_datachanged_isbase = false;
    mutable bool qlistview_rowsinserted_isbase = false;
    mutable bool qlistview_rowsabouttoberemoved_isbase = false;
    mutable bool qlistview_mousemoveevent_isbase = false;
    mutable bool qlistview_mousereleaseevent_isbase = false;
    mutable bool qlistview_wheelevent_isbase = false;
    mutable bool qlistview_timerevent_isbase = false;
    mutable bool qlistview_resizeevent_isbase = false;
    mutable bool qlistview_dragmoveevent_isbase = false;
    mutable bool qlistview_dragleaveevent_isbase = false;
    mutable bool qlistview_dropevent_isbase = false;
    mutable bool qlistview_startdrag_isbase = false;
    mutable bool qlistview_initviewitemoption_isbase = false;
    mutable bool qlistview_paintevent_isbase = false;
    mutable bool qlistview_horizontaloffset_isbase = false;
    mutable bool qlistview_verticaloffset_isbase = false;
    mutable bool qlistview_movecursor_isbase = false;
    mutable bool qlistview_setselection_isbase = false;
    mutable bool qlistview_visualregionforselection_isbase = false;
    mutable bool qlistview_selectedindexes_isbase = false;
    mutable bool qlistview_updategeometries_isbase = false;
    mutable bool qlistview_isindexhidden_isbase = false;
    mutable bool qlistview_selectionchanged_isbase = false;
    mutable bool qlistview_currentchanged_isbase = false;
    mutable bool qlistview_viewportsizehint_isbase = false;
    mutable bool qlistview_setmodel_isbase = false;
    mutable bool qlistview_setselectionmodel_isbase = false;
    mutable bool qlistview_keyboardsearch_isbase = false;
    mutable bool qlistview_sizehintforrow_isbase = false;
    mutable bool qlistview_sizehintforcolumn_isbase = false;
    mutable bool qlistview_itemdelegateforindex_isbase = false;
    mutable bool qlistview_inputmethodquery_isbase = false;
    mutable bool qlistview_selectall_isbase = false;
    mutable bool qlistview_updateeditordata_isbase = false;
    mutable bool qlistview_updateeditorgeometries_isbase = false;
    mutable bool qlistview_verticalscrollbaraction_isbase = false;
    mutable bool qlistview_horizontalscrollbaraction_isbase = false;
    mutable bool qlistview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qlistview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qlistview_closeeditor_isbase = false;
    mutable bool qlistview_commitdata_isbase = false;
    mutable bool qlistview_editordestroyed_isbase = false;
    mutable bool qlistview_edit2_isbase = false;
    mutable bool qlistview_selectioncommand_isbase = false;
    mutable bool qlistview_focusnextprevchild_isbase = false;
    mutable bool qlistview_viewportevent_isbase = false;
    mutable bool qlistview_mousepressevent_isbase = false;
    mutable bool qlistview_mousedoubleclickevent_isbase = false;
    mutable bool qlistview_dragenterevent_isbase = false;
    mutable bool qlistview_focusinevent_isbase = false;
    mutable bool qlistview_focusoutevent_isbase = false;
    mutable bool qlistview_keypressevent_isbase = false;
    mutable bool qlistview_inputmethodevent_isbase = false;
    mutable bool qlistview_eventfilter_isbase = false;
    mutable bool qlistview_minimumsizehint_isbase = false;
    mutable bool qlistview_sizehint_isbase = false;
    mutable bool qlistview_setupviewport_isbase = false;
    mutable bool qlistview_contextmenuevent_isbase = false;
    mutable bool qlistview_changeevent_isbase = false;
    mutable bool qlistview_initstyleoption_isbase = false;
    mutable bool qlistview_devtype_isbase = false;
    mutable bool qlistview_setvisible_isbase = false;
    mutable bool qlistview_heightforwidth_isbase = false;
    mutable bool qlistview_hasheightforwidth_isbase = false;
    mutable bool qlistview_paintengine_isbase = false;
    mutable bool qlistview_keyreleaseevent_isbase = false;
    mutable bool qlistview_enterevent_isbase = false;
    mutable bool qlistview_leaveevent_isbase = false;
    mutable bool qlistview_moveevent_isbase = false;
    mutable bool qlistview_closeevent_isbase = false;
    mutable bool qlistview_tabletevent_isbase = false;
    mutable bool qlistview_actionevent_isbase = false;
    mutable bool qlistview_showevent_isbase = false;
    mutable bool qlistview_hideevent_isbase = false;
    mutable bool qlistview_nativeevent_isbase = false;
    mutable bool qlistview_metric_isbase = false;
    mutable bool qlistview_initpainter_isbase = false;
    mutable bool qlistview_redirected_isbase = false;
    mutable bool qlistview_sharedpainter_isbase = false;
    mutable bool qlistview_childevent_isbase = false;
    mutable bool qlistview_customevent_isbase = false;
    mutable bool qlistview_connectnotify_isbase = false;
    mutable bool qlistview_disconnectnotify_isbase = false;
    mutable bool qlistview_resizecontents_isbase = false;
    mutable bool qlistview_contentssize_isbase = false;
    mutable bool qlistview_rectforindex_isbase = false;
    mutable bool qlistview_setpositionforindex_isbase = false;
    mutable bool qlistview_state_isbase = false;
    mutable bool qlistview_setstate_isbase = false;
    mutable bool qlistview_scheduledelayeditemslayout_isbase = false;
    mutable bool qlistview_executedelayeditemslayout_isbase = false;
    mutable bool qlistview_setdirtyregion_isbase = false;
    mutable bool qlistview_scrolldirtyregion_isbase = false;
    mutable bool qlistview_dirtyregionoffset_isbase = false;
    mutable bool qlistview_startautoscroll_isbase = false;
    mutable bool qlistview_stopautoscroll_isbase = false;
    mutable bool qlistview_doautoscroll_isbase = false;
    mutable bool qlistview_dropindicatorposition_isbase = false;
    mutable bool qlistview_setviewportmargins_isbase = false;
    mutable bool qlistview_viewportmargins_isbase = false;
    mutable bool qlistview_drawframe_isbase = false;
    mutable bool qlistview_updatemicrofocus_isbase = false;
    mutable bool qlistview_create_isbase = false;
    mutable bool qlistview_destroy_isbase = false;
    mutable bool qlistview_focusnextchild_isbase = false;
    mutable bool qlistview_focuspreviouschild_isbase = false;
    mutable bool qlistview_sender_isbase = false;
    mutable bool qlistview_sendersignalindex_isbase = false;
    mutable bool qlistview_receivers_isbase = false;
    mutable bool qlistview_issignalconnected_isbase = false;
    mutable bool qlistview_getdecodedmetricf_isbase = false;

  public:
    VirtualQListView(QWidget* parent) : QListView(parent) {};
    VirtualQListView() : QListView() {};

    // Callback setters
    inline void setQListView_MetaObject_Callback(QListView_MetaObject_Callback cb) { qlistview_metaobject_callback = cb; }
    inline void setQListView_Metacast_Callback(QListView_Metacast_Callback cb) { qlistview_metacast_callback = cb; }
    inline void setQListView_Metacall_Callback(QListView_Metacall_Callback cb) { qlistview_metacall_callback = cb; }
    inline void setQListView_VisualRect_Callback(QListView_VisualRect_Callback cb) { qlistview_visualrect_callback = cb; }
    inline void setQListView_ScrollTo_Callback(QListView_ScrollTo_Callback cb) { qlistview_scrollto_callback = cb; }
    inline void setQListView_IndexAt_Callback(QListView_IndexAt_Callback cb) { qlistview_indexat_callback = cb; }
    inline void setQListView_DoItemsLayout_Callback(QListView_DoItemsLayout_Callback cb) { qlistview_doitemslayout_callback = cb; }
    inline void setQListView_Reset_Callback(QListView_Reset_Callback cb) { qlistview_reset_callback = cb; }
    inline void setQListView_SetRootIndex_Callback(QListView_SetRootIndex_Callback cb) { qlistview_setrootindex_callback = cb; }
    inline void setQListView_Event_Callback(QListView_Event_Callback cb) { qlistview_event_callback = cb; }
    inline void setQListView_ScrollContentsBy_Callback(QListView_ScrollContentsBy_Callback cb) { qlistview_scrollcontentsby_callback = cb; }
    inline void setQListView_DataChanged_Callback(QListView_DataChanged_Callback cb) { qlistview_datachanged_callback = cb; }
    inline void setQListView_RowsInserted_Callback(QListView_RowsInserted_Callback cb) { qlistview_rowsinserted_callback = cb; }
    inline void setQListView_RowsAboutToBeRemoved_Callback(QListView_RowsAboutToBeRemoved_Callback cb) { qlistview_rowsabouttoberemoved_callback = cb; }
    inline void setQListView_MouseMoveEvent_Callback(QListView_MouseMoveEvent_Callback cb) { qlistview_mousemoveevent_callback = cb; }
    inline void setQListView_MouseReleaseEvent_Callback(QListView_MouseReleaseEvent_Callback cb) { qlistview_mousereleaseevent_callback = cb; }
    inline void setQListView_WheelEvent_Callback(QListView_WheelEvent_Callback cb) { qlistview_wheelevent_callback = cb; }
    inline void setQListView_TimerEvent_Callback(QListView_TimerEvent_Callback cb) { qlistview_timerevent_callback = cb; }
    inline void setQListView_ResizeEvent_Callback(QListView_ResizeEvent_Callback cb) { qlistview_resizeevent_callback = cb; }
    inline void setQListView_DragMoveEvent_Callback(QListView_DragMoveEvent_Callback cb) { qlistview_dragmoveevent_callback = cb; }
    inline void setQListView_DragLeaveEvent_Callback(QListView_DragLeaveEvent_Callback cb) { qlistview_dragleaveevent_callback = cb; }
    inline void setQListView_DropEvent_Callback(QListView_DropEvent_Callback cb) { qlistview_dropevent_callback = cb; }
    inline void setQListView_StartDrag_Callback(QListView_StartDrag_Callback cb) { qlistview_startdrag_callback = cb; }
    inline void setQListView_InitViewItemOption_Callback(QListView_InitViewItemOption_Callback cb) { qlistview_initviewitemoption_callback = cb; }
    inline void setQListView_PaintEvent_Callback(QListView_PaintEvent_Callback cb) { qlistview_paintevent_callback = cb; }
    inline void setQListView_HorizontalOffset_Callback(QListView_HorizontalOffset_Callback cb) { qlistview_horizontaloffset_callback = cb; }
    inline void setQListView_VerticalOffset_Callback(QListView_VerticalOffset_Callback cb) { qlistview_verticaloffset_callback = cb; }
    inline void setQListView_MoveCursor_Callback(QListView_MoveCursor_Callback cb) { qlistview_movecursor_callback = cb; }
    inline void setQListView_SetSelection_Callback(QListView_SetSelection_Callback cb) { qlistview_setselection_callback = cb; }
    inline void setQListView_VisualRegionForSelection_Callback(QListView_VisualRegionForSelection_Callback cb) { qlistview_visualregionforselection_callback = cb; }
    inline void setQListView_SelectedIndexes_Callback(QListView_SelectedIndexes_Callback cb) { qlistview_selectedindexes_callback = cb; }
    inline void setQListView_UpdateGeometries_Callback(QListView_UpdateGeometries_Callback cb) { qlistview_updategeometries_callback = cb; }
    inline void setQListView_IsIndexHidden_Callback(QListView_IsIndexHidden_Callback cb) { qlistview_isindexhidden_callback = cb; }
    inline void setQListView_SelectionChanged_Callback(QListView_SelectionChanged_Callback cb) { qlistview_selectionchanged_callback = cb; }
    inline void setQListView_CurrentChanged_Callback(QListView_CurrentChanged_Callback cb) { qlistview_currentchanged_callback = cb; }
    inline void setQListView_ViewportSizeHint_Callback(QListView_ViewportSizeHint_Callback cb) { qlistview_viewportsizehint_callback = cb; }
    inline void setQListView_SetModel_Callback(QListView_SetModel_Callback cb) { qlistview_setmodel_callback = cb; }
    inline void setQListView_SetSelectionModel_Callback(QListView_SetSelectionModel_Callback cb) { qlistview_setselectionmodel_callback = cb; }
    inline void setQListView_KeyboardSearch_Callback(QListView_KeyboardSearch_Callback cb) { qlistview_keyboardsearch_callback = cb; }
    inline void setQListView_SizeHintForRow_Callback(QListView_SizeHintForRow_Callback cb) { qlistview_sizehintforrow_callback = cb; }
    inline void setQListView_SizeHintForColumn_Callback(QListView_SizeHintForColumn_Callback cb) { qlistview_sizehintforcolumn_callback = cb; }
    inline void setQListView_ItemDelegateForIndex_Callback(QListView_ItemDelegateForIndex_Callback cb) { qlistview_itemdelegateforindex_callback = cb; }
    inline void setQListView_InputMethodQuery_Callback(QListView_InputMethodQuery_Callback cb) { qlistview_inputmethodquery_callback = cb; }
    inline void setQListView_SelectAll_Callback(QListView_SelectAll_Callback cb) { qlistview_selectall_callback = cb; }
    inline void setQListView_UpdateEditorData_Callback(QListView_UpdateEditorData_Callback cb) { qlistview_updateeditordata_callback = cb; }
    inline void setQListView_UpdateEditorGeometries_Callback(QListView_UpdateEditorGeometries_Callback cb) { qlistview_updateeditorgeometries_callback = cb; }
    inline void setQListView_VerticalScrollbarAction_Callback(QListView_VerticalScrollbarAction_Callback cb) { qlistview_verticalscrollbaraction_callback = cb; }
    inline void setQListView_HorizontalScrollbarAction_Callback(QListView_HorizontalScrollbarAction_Callback cb) { qlistview_horizontalscrollbaraction_callback = cb; }
    inline void setQListView_VerticalScrollbarValueChanged_Callback(QListView_VerticalScrollbarValueChanged_Callback cb) { qlistview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQListView_HorizontalScrollbarValueChanged_Callback(QListView_HorizontalScrollbarValueChanged_Callback cb) { qlistview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQListView_CloseEditor_Callback(QListView_CloseEditor_Callback cb) { qlistview_closeeditor_callback = cb; }
    inline void setQListView_CommitData_Callback(QListView_CommitData_Callback cb) { qlistview_commitdata_callback = cb; }
    inline void setQListView_EditorDestroyed_Callback(QListView_EditorDestroyed_Callback cb) { qlistview_editordestroyed_callback = cb; }
    inline void setQListView_Edit2_Callback(QListView_Edit2_Callback cb) { qlistview_edit2_callback = cb; }
    inline void setQListView_SelectionCommand_Callback(QListView_SelectionCommand_Callback cb) { qlistview_selectioncommand_callback = cb; }
    inline void setQListView_FocusNextPrevChild_Callback(QListView_FocusNextPrevChild_Callback cb) { qlistview_focusnextprevchild_callback = cb; }
    inline void setQListView_ViewportEvent_Callback(QListView_ViewportEvent_Callback cb) { qlistview_viewportevent_callback = cb; }
    inline void setQListView_MousePressEvent_Callback(QListView_MousePressEvent_Callback cb) { qlistview_mousepressevent_callback = cb; }
    inline void setQListView_MouseDoubleClickEvent_Callback(QListView_MouseDoubleClickEvent_Callback cb) { qlistview_mousedoubleclickevent_callback = cb; }
    inline void setQListView_DragEnterEvent_Callback(QListView_DragEnterEvent_Callback cb) { qlistview_dragenterevent_callback = cb; }
    inline void setQListView_FocusInEvent_Callback(QListView_FocusInEvent_Callback cb) { qlistview_focusinevent_callback = cb; }
    inline void setQListView_FocusOutEvent_Callback(QListView_FocusOutEvent_Callback cb) { qlistview_focusoutevent_callback = cb; }
    inline void setQListView_KeyPressEvent_Callback(QListView_KeyPressEvent_Callback cb) { qlistview_keypressevent_callback = cb; }
    inline void setQListView_InputMethodEvent_Callback(QListView_InputMethodEvent_Callback cb) { qlistview_inputmethodevent_callback = cb; }
    inline void setQListView_EventFilter_Callback(QListView_EventFilter_Callback cb) { qlistview_eventfilter_callback = cb; }
    inline void setQListView_MinimumSizeHint_Callback(QListView_MinimumSizeHint_Callback cb) { qlistview_minimumsizehint_callback = cb; }
    inline void setQListView_SizeHint_Callback(QListView_SizeHint_Callback cb) { qlistview_sizehint_callback = cb; }
    inline void setQListView_SetupViewport_Callback(QListView_SetupViewport_Callback cb) { qlistview_setupviewport_callback = cb; }
    inline void setQListView_ContextMenuEvent_Callback(QListView_ContextMenuEvent_Callback cb) { qlistview_contextmenuevent_callback = cb; }
    inline void setQListView_ChangeEvent_Callback(QListView_ChangeEvent_Callback cb) { qlistview_changeevent_callback = cb; }
    inline void setQListView_InitStyleOption_Callback(QListView_InitStyleOption_Callback cb) { qlistview_initstyleoption_callback = cb; }
    inline void setQListView_DevType_Callback(QListView_DevType_Callback cb) { qlistview_devtype_callback = cb; }
    inline void setQListView_SetVisible_Callback(QListView_SetVisible_Callback cb) { qlistview_setvisible_callback = cb; }
    inline void setQListView_HeightForWidth_Callback(QListView_HeightForWidth_Callback cb) { qlistview_heightforwidth_callback = cb; }
    inline void setQListView_HasHeightForWidth_Callback(QListView_HasHeightForWidth_Callback cb) { qlistview_hasheightforwidth_callback = cb; }
    inline void setQListView_PaintEngine_Callback(QListView_PaintEngine_Callback cb) { qlistview_paintengine_callback = cb; }
    inline void setQListView_KeyReleaseEvent_Callback(QListView_KeyReleaseEvent_Callback cb) { qlistview_keyreleaseevent_callback = cb; }
    inline void setQListView_EnterEvent_Callback(QListView_EnterEvent_Callback cb) { qlistview_enterevent_callback = cb; }
    inline void setQListView_LeaveEvent_Callback(QListView_LeaveEvent_Callback cb) { qlistview_leaveevent_callback = cb; }
    inline void setQListView_MoveEvent_Callback(QListView_MoveEvent_Callback cb) { qlistview_moveevent_callback = cb; }
    inline void setQListView_CloseEvent_Callback(QListView_CloseEvent_Callback cb) { qlistview_closeevent_callback = cb; }
    inline void setQListView_TabletEvent_Callback(QListView_TabletEvent_Callback cb) { qlistview_tabletevent_callback = cb; }
    inline void setQListView_ActionEvent_Callback(QListView_ActionEvent_Callback cb) { qlistview_actionevent_callback = cb; }
    inline void setQListView_ShowEvent_Callback(QListView_ShowEvent_Callback cb) { qlistview_showevent_callback = cb; }
    inline void setQListView_HideEvent_Callback(QListView_HideEvent_Callback cb) { qlistview_hideevent_callback = cb; }
    inline void setQListView_NativeEvent_Callback(QListView_NativeEvent_Callback cb) { qlistview_nativeevent_callback = cb; }
    inline void setQListView_Metric_Callback(QListView_Metric_Callback cb) { qlistview_metric_callback = cb; }
    inline void setQListView_InitPainter_Callback(QListView_InitPainter_Callback cb) { qlistview_initpainter_callback = cb; }
    inline void setQListView_Redirected_Callback(QListView_Redirected_Callback cb) { qlistview_redirected_callback = cb; }
    inline void setQListView_SharedPainter_Callback(QListView_SharedPainter_Callback cb) { qlistview_sharedpainter_callback = cb; }
    inline void setQListView_ChildEvent_Callback(QListView_ChildEvent_Callback cb) { qlistview_childevent_callback = cb; }
    inline void setQListView_CustomEvent_Callback(QListView_CustomEvent_Callback cb) { qlistview_customevent_callback = cb; }
    inline void setQListView_ConnectNotify_Callback(QListView_ConnectNotify_Callback cb) { qlistview_connectnotify_callback = cb; }
    inline void setQListView_DisconnectNotify_Callback(QListView_DisconnectNotify_Callback cb) { qlistview_disconnectnotify_callback = cb; }
    inline void setQListView_ResizeContents_Callback(QListView_ResizeContents_Callback cb) { qlistview_resizecontents_callback = cb; }
    inline void setQListView_ContentsSize_Callback(QListView_ContentsSize_Callback cb) { qlistview_contentssize_callback = cb; }
    inline void setQListView_RectForIndex_Callback(QListView_RectForIndex_Callback cb) { qlistview_rectforindex_callback = cb; }
    inline void setQListView_SetPositionForIndex_Callback(QListView_SetPositionForIndex_Callback cb) { qlistview_setpositionforindex_callback = cb; }
    inline void setQListView_State_Callback(QListView_State_Callback cb) { qlistview_state_callback = cb; }
    inline void setQListView_SetState_Callback(QListView_SetState_Callback cb) { qlistview_setstate_callback = cb; }
    inline void setQListView_ScheduleDelayedItemsLayout_Callback(QListView_ScheduleDelayedItemsLayout_Callback cb) { qlistview_scheduledelayeditemslayout_callback = cb; }
    inline void setQListView_ExecuteDelayedItemsLayout_Callback(QListView_ExecuteDelayedItemsLayout_Callback cb) { qlistview_executedelayeditemslayout_callback = cb; }
    inline void setQListView_SetDirtyRegion_Callback(QListView_SetDirtyRegion_Callback cb) { qlistview_setdirtyregion_callback = cb; }
    inline void setQListView_ScrollDirtyRegion_Callback(QListView_ScrollDirtyRegion_Callback cb) { qlistview_scrolldirtyregion_callback = cb; }
    inline void setQListView_DirtyRegionOffset_Callback(QListView_DirtyRegionOffset_Callback cb) { qlistview_dirtyregionoffset_callback = cb; }
    inline void setQListView_StartAutoScroll_Callback(QListView_StartAutoScroll_Callback cb) { qlistview_startautoscroll_callback = cb; }
    inline void setQListView_StopAutoScroll_Callback(QListView_StopAutoScroll_Callback cb) { qlistview_stopautoscroll_callback = cb; }
    inline void setQListView_DoAutoScroll_Callback(QListView_DoAutoScroll_Callback cb) { qlistview_doautoscroll_callback = cb; }
    inline void setQListView_DropIndicatorPosition_Callback(QListView_DropIndicatorPosition_Callback cb) { qlistview_dropindicatorposition_callback = cb; }
    inline void setQListView_SetViewportMargins_Callback(QListView_SetViewportMargins_Callback cb) { qlistview_setviewportmargins_callback = cb; }
    inline void setQListView_ViewportMargins_Callback(QListView_ViewportMargins_Callback cb) { qlistview_viewportmargins_callback = cb; }
    inline void setQListView_DrawFrame_Callback(QListView_DrawFrame_Callback cb) { qlistview_drawframe_callback = cb; }
    inline void setQListView_UpdateMicroFocus_Callback(QListView_UpdateMicroFocus_Callback cb) { qlistview_updatemicrofocus_callback = cb; }
    inline void setQListView_Create_Callback(QListView_Create_Callback cb) { qlistview_create_callback = cb; }
    inline void setQListView_Destroy_Callback(QListView_Destroy_Callback cb) { qlistview_destroy_callback = cb; }
    inline void setQListView_FocusNextChild_Callback(QListView_FocusNextChild_Callback cb) { qlistview_focusnextchild_callback = cb; }
    inline void setQListView_FocusPreviousChild_Callback(QListView_FocusPreviousChild_Callback cb) { qlistview_focuspreviouschild_callback = cb; }
    inline void setQListView_Sender_Callback(QListView_Sender_Callback cb) { qlistview_sender_callback = cb; }
    inline void setQListView_SenderSignalIndex_Callback(QListView_SenderSignalIndex_Callback cb) { qlistview_sendersignalindex_callback = cb; }
    inline void setQListView_Receivers_Callback(QListView_Receivers_Callback cb) { qlistview_receivers_callback = cb; }
    inline void setQListView_IsSignalConnected_Callback(QListView_IsSignalConnected_Callback cb) { qlistview_issignalconnected_callback = cb; }
    inline void setQListView_GetDecodedMetricF_Callback(QListView_GetDecodedMetricF_Callback cb) { qlistview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQListView_MetaObject_IsBase(bool value) const { qlistview_metaobject_isbase = value; }
    inline void setQListView_Metacast_IsBase(bool value) const { qlistview_metacast_isbase = value; }
    inline void setQListView_Metacall_IsBase(bool value) const { qlistview_metacall_isbase = value; }
    inline void setQListView_VisualRect_IsBase(bool value) const { qlistview_visualrect_isbase = value; }
    inline void setQListView_ScrollTo_IsBase(bool value) const { qlistview_scrollto_isbase = value; }
    inline void setQListView_IndexAt_IsBase(bool value) const { qlistview_indexat_isbase = value; }
    inline void setQListView_DoItemsLayout_IsBase(bool value) const { qlistview_doitemslayout_isbase = value; }
    inline void setQListView_Reset_IsBase(bool value) const { qlistview_reset_isbase = value; }
    inline void setQListView_SetRootIndex_IsBase(bool value) const { qlistview_setrootindex_isbase = value; }
    inline void setQListView_Event_IsBase(bool value) const { qlistview_event_isbase = value; }
    inline void setQListView_ScrollContentsBy_IsBase(bool value) const { qlistview_scrollcontentsby_isbase = value; }
    inline void setQListView_DataChanged_IsBase(bool value) const { qlistview_datachanged_isbase = value; }
    inline void setQListView_RowsInserted_IsBase(bool value) const { qlistview_rowsinserted_isbase = value; }
    inline void setQListView_RowsAboutToBeRemoved_IsBase(bool value) const { qlistview_rowsabouttoberemoved_isbase = value; }
    inline void setQListView_MouseMoveEvent_IsBase(bool value) const { qlistview_mousemoveevent_isbase = value; }
    inline void setQListView_MouseReleaseEvent_IsBase(bool value) const { qlistview_mousereleaseevent_isbase = value; }
    inline void setQListView_WheelEvent_IsBase(bool value) const { qlistview_wheelevent_isbase = value; }
    inline void setQListView_TimerEvent_IsBase(bool value) const { qlistview_timerevent_isbase = value; }
    inline void setQListView_ResizeEvent_IsBase(bool value) const { qlistview_resizeevent_isbase = value; }
    inline void setQListView_DragMoveEvent_IsBase(bool value) const { qlistview_dragmoveevent_isbase = value; }
    inline void setQListView_DragLeaveEvent_IsBase(bool value) const { qlistview_dragleaveevent_isbase = value; }
    inline void setQListView_DropEvent_IsBase(bool value) const { qlistview_dropevent_isbase = value; }
    inline void setQListView_StartDrag_IsBase(bool value) const { qlistview_startdrag_isbase = value; }
    inline void setQListView_InitViewItemOption_IsBase(bool value) const { qlistview_initviewitemoption_isbase = value; }
    inline void setQListView_PaintEvent_IsBase(bool value) const { qlistview_paintevent_isbase = value; }
    inline void setQListView_HorizontalOffset_IsBase(bool value) const { qlistview_horizontaloffset_isbase = value; }
    inline void setQListView_VerticalOffset_IsBase(bool value) const { qlistview_verticaloffset_isbase = value; }
    inline void setQListView_MoveCursor_IsBase(bool value) const { qlistview_movecursor_isbase = value; }
    inline void setQListView_SetSelection_IsBase(bool value) const { qlistview_setselection_isbase = value; }
    inline void setQListView_VisualRegionForSelection_IsBase(bool value) const { qlistview_visualregionforselection_isbase = value; }
    inline void setQListView_SelectedIndexes_IsBase(bool value) const { qlistview_selectedindexes_isbase = value; }
    inline void setQListView_UpdateGeometries_IsBase(bool value) const { qlistview_updategeometries_isbase = value; }
    inline void setQListView_IsIndexHidden_IsBase(bool value) const { qlistview_isindexhidden_isbase = value; }
    inline void setQListView_SelectionChanged_IsBase(bool value) const { qlistview_selectionchanged_isbase = value; }
    inline void setQListView_CurrentChanged_IsBase(bool value) const { qlistview_currentchanged_isbase = value; }
    inline void setQListView_ViewportSizeHint_IsBase(bool value) const { qlistview_viewportsizehint_isbase = value; }
    inline void setQListView_SetModel_IsBase(bool value) const { qlistview_setmodel_isbase = value; }
    inline void setQListView_SetSelectionModel_IsBase(bool value) const { qlistview_setselectionmodel_isbase = value; }
    inline void setQListView_KeyboardSearch_IsBase(bool value) const { qlistview_keyboardsearch_isbase = value; }
    inline void setQListView_SizeHintForRow_IsBase(bool value) const { qlistview_sizehintforrow_isbase = value; }
    inline void setQListView_SizeHintForColumn_IsBase(bool value) const { qlistview_sizehintforcolumn_isbase = value; }
    inline void setQListView_ItemDelegateForIndex_IsBase(bool value) const { qlistview_itemdelegateforindex_isbase = value; }
    inline void setQListView_InputMethodQuery_IsBase(bool value) const { qlistview_inputmethodquery_isbase = value; }
    inline void setQListView_SelectAll_IsBase(bool value) const { qlistview_selectall_isbase = value; }
    inline void setQListView_UpdateEditorData_IsBase(bool value) const { qlistview_updateeditordata_isbase = value; }
    inline void setQListView_UpdateEditorGeometries_IsBase(bool value) const { qlistview_updateeditorgeometries_isbase = value; }
    inline void setQListView_VerticalScrollbarAction_IsBase(bool value) const { qlistview_verticalscrollbaraction_isbase = value; }
    inline void setQListView_HorizontalScrollbarAction_IsBase(bool value) const { qlistview_horizontalscrollbaraction_isbase = value; }
    inline void setQListView_VerticalScrollbarValueChanged_IsBase(bool value) const { qlistview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQListView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qlistview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQListView_CloseEditor_IsBase(bool value) const { qlistview_closeeditor_isbase = value; }
    inline void setQListView_CommitData_IsBase(bool value) const { qlistview_commitdata_isbase = value; }
    inline void setQListView_EditorDestroyed_IsBase(bool value) const { qlistview_editordestroyed_isbase = value; }
    inline void setQListView_Edit2_IsBase(bool value) const { qlistview_edit2_isbase = value; }
    inline void setQListView_SelectionCommand_IsBase(bool value) const { qlistview_selectioncommand_isbase = value; }
    inline void setQListView_FocusNextPrevChild_IsBase(bool value) const { qlistview_focusnextprevchild_isbase = value; }
    inline void setQListView_ViewportEvent_IsBase(bool value) const { qlistview_viewportevent_isbase = value; }
    inline void setQListView_MousePressEvent_IsBase(bool value) const { qlistview_mousepressevent_isbase = value; }
    inline void setQListView_MouseDoubleClickEvent_IsBase(bool value) const { qlistview_mousedoubleclickevent_isbase = value; }
    inline void setQListView_DragEnterEvent_IsBase(bool value) const { qlistview_dragenterevent_isbase = value; }
    inline void setQListView_FocusInEvent_IsBase(bool value) const { qlistview_focusinevent_isbase = value; }
    inline void setQListView_FocusOutEvent_IsBase(bool value) const { qlistview_focusoutevent_isbase = value; }
    inline void setQListView_KeyPressEvent_IsBase(bool value) const { qlistview_keypressevent_isbase = value; }
    inline void setQListView_InputMethodEvent_IsBase(bool value) const { qlistview_inputmethodevent_isbase = value; }
    inline void setQListView_EventFilter_IsBase(bool value) const { qlistview_eventfilter_isbase = value; }
    inline void setQListView_MinimumSizeHint_IsBase(bool value) const { qlistview_minimumsizehint_isbase = value; }
    inline void setQListView_SizeHint_IsBase(bool value) const { qlistview_sizehint_isbase = value; }
    inline void setQListView_SetupViewport_IsBase(bool value) const { qlistview_setupviewport_isbase = value; }
    inline void setQListView_ContextMenuEvent_IsBase(bool value) const { qlistview_contextmenuevent_isbase = value; }
    inline void setQListView_ChangeEvent_IsBase(bool value) const { qlistview_changeevent_isbase = value; }
    inline void setQListView_InitStyleOption_IsBase(bool value) const { qlistview_initstyleoption_isbase = value; }
    inline void setQListView_DevType_IsBase(bool value) const { qlistview_devtype_isbase = value; }
    inline void setQListView_SetVisible_IsBase(bool value) const { qlistview_setvisible_isbase = value; }
    inline void setQListView_HeightForWidth_IsBase(bool value) const { qlistview_heightforwidth_isbase = value; }
    inline void setQListView_HasHeightForWidth_IsBase(bool value) const { qlistview_hasheightforwidth_isbase = value; }
    inline void setQListView_PaintEngine_IsBase(bool value) const { qlistview_paintengine_isbase = value; }
    inline void setQListView_KeyReleaseEvent_IsBase(bool value) const { qlistview_keyreleaseevent_isbase = value; }
    inline void setQListView_EnterEvent_IsBase(bool value) const { qlistview_enterevent_isbase = value; }
    inline void setQListView_LeaveEvent_IsBase(bool value) const { qlistview_leaveevent_isbase = value; }
    inline void setQListView_MoveEvent_IsBase(bool value) const { qlistview_moveevent_isbase = value; }
    inline void setQListView_CloseEvent_IsBase(bool value) const { qlistview_closeevent_isbase = value; }
    inline void setQListView_TabletEvent_IsBase(bool value) const { qlistview_tabletevent_isbase = value; }
    inline void setQListView_ActionEvent_IsBase(bool value) const { qlistview_actionevent_isbase = value; }
    inline void setQListView_ShowEvent_IsBase(bool value) const { qlistview_showevent_isbase = value; }
    inline void setQListView_HideEvent_IsBase(bool value) const { qlistview_hideevent_isbase = value; }
    inline void setQListView_NativeEvent_IsBase(bool value) const { qlistview_nativeevent_isbase = value; }
    inline void setQListView_Metric_IsBase(bool value) const { qlistview_metric_isbase = value; }
    inline void setQListView_InitPainter_IsBase(bool value) const { qlistview_initpainter_isbase = value; }
    inline void setQListView_Redirected_IsBase(bool value) const { qlistview_redirected_isbase = value; }
    inline void setQListView_SharedPainter_IsBase(bool value) const { qlistview_sharedpainter_isbase = value; }
    inline void setQListView_ChildEvent_IsBase(bool value) const { qlistview_childevent_isbase = value; }
    inline void setQListView_CustomEvent_IsBase(bool value) const { qlistview_customevent_isbase = value; }
    inline void setQListView_ConnectNotify_IsBase(bool value) const { qlistview_connectnotify_isbase = value; }
    inline void setQListView_DisconnectNotify_IsBase(bool value) const { qlistview_disconnectnotify_isbase = value; }
    inline void setQListView_ResizeContents_IsBase(bool value) const { qlistview_resizecontents_isbase = value; }
    inline void setQListView_ContentsSize_IsBase(bool value) const { qlistview_contentssize_isbase = value; }
    inline void setQListView_RectForIndex_IsBase(bool value) const { qlistview_rectforindex_isbase = value; }
    inline void setQListView_SetPositionForIndex_IsBase(bool value) const { qlistview_setpositionforindex_isbase = value; }
    inline void setQListView_State_IsBase(bool value) const { qlistview_state_isbase = value; }
    inline void setQListView_SetState_IsBase(bool value) const { qlistview_setstate_isbase = value; }
    inline void setQListView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qlistview_scheduledelayeditemslayout_isbase = value; }
    inline void setQListView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qlistview_executedelayeditemslayout_isbase = value; }
    inline void setQListView_SetDirtyRegion_IsBase(bool value) const { qlistview_setdirtyregion_isbase = value; }
    inline void setQListView_ScrollDirtyRegion_IsBase(bool value) const { qlistview_scrolldirtyregion_isbase = value; }
    inline void setQListView_DirtyRegionOffset_IsBase(bool value) const { qlistview_dirtyregionoffset_isbase = value; }
    inline void setQListView_StartAutoScroll_IsBase(bool value) const { qlistview_startautoscroll_isbase = value; }
    inline void setQListView_StopAutoScroll_IsBase(bool value) const { qlistview_stopautoscroll_isbase = value; }
    inline void setQListView_DoAutoScroll_IsBase(bool value) const { qlistview_doautoscroll_isbase = value; }
    inline void setQListView_DropIndicatorPosition_IsBase(bool value) const { qlistview_dropindicatorposition_isbase = value; }
    inline void setQListView_SetViewportMargins_IsBase(bool value) const { qlistview_setviewportmargins_isbase = value; }
    inline void setQListView_ViewportMargins_IsBase(bool value) const { qlistview_viewportmargins_isbase = value; }
    inline void setQListView_DrawFrame_IsBase(bool value) const { qlistview_drawframe_isbase = value; }
    inline void setQListView_UpdateMicroFocus_IsBase(bool value) const { qlistview_updatemicrofocus_isbase = value; }
    inline void setQListView_Create_IsBase(bool value) const { qlistview_create_isbase = value; }
    inline void setQListView_Destroy_IsBase(bool value) const { qlistview_destroy_isbase = value; }
    inline void setQListView_FocusNextChild_IsBase(bool value) const { qlistview_focusnextchild_isbase = value; }
    inline void setQListView_FocusPreviousChild_IsBase(bool value) const { qlistview_focuspreviouschild_isbase = value; }
    inline void setQListView_Sender_IsBase(bool value) const { qlistview_sender_isbase = value; }
    inline void setQListView_SenderSignalIndex_IsBase(bool value) const { qlistview_sendersignalindex_isbase = value; }
    inline void setQListView_Receivers_IsBase(bool value) const { qlistview_receivers_isbase = value; }
    inline void setQListView_IsSignalConnected_IsBase(bool value) const { qlistview_issignalconnected_isbase = value; }
    inline void setQListView_GetDecodedMetricF_IsBase(bool value) const { qlistview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlistview_metaobject_isbase) {
            qlistview_metaobject_isbase = false;
            return QListView::metaObject();
        }
        auto metaobject_cb = qlistview_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QListView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlistview_metacast_isbase) {
            qlistview_metacast_isbase = false;
            return QListView::qt_metacast(param1);
        }
        auto metacast_cb = qlistview_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QListView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlistview_metacall_isbase) {
            qlistview_metacall_isbase = false;
            return QListView::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qlistview_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QListView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qlistview_visualrect_isbase) {
            qlistview_visualrect_isbase = false;
            return QListView::visualRect(index);
        }
        auto visualrect_cb = qlistview_visualrect_callback;
        if (visualrect_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = visualrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QListView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qlistview_scrollto_isbase) {
            qlistview_scrollto_isbase = false;
            QListView::scrollTo(index, hint);
            return;
        }
        auto scrollto_cb = qlistview_scrollto_callback;
        if (scrollto_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            scrollto_cb(this, cbval1, cbval2);
            return;
        }
        QListView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qlistview_indexat_isbase) {
            qlistview_indexat_isbase = false;
            return QListView::indexAt(p);
        }
        auto indexat_cb = qlistview_indexat_callback;
        if (indexat_cb) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = indexat_cb(this, cbval1);
            return *callback_ret;
        }
        return QListView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qlistview_doitemslayout_isbase) {
            qlistview_doitemslayout_isbase = false;
            QListView::doItemsLayout();
            return;
        }
        auto doitemslayout_cb = qlistview_doitemslayout_callback;
        if (doitemslayout_cb) {
            doitemslayout_cb();
            return;
        }
        QListView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qlistview_reset_isbase) {
            qlistview_reset_isbase = false;
            QListView::reset();
            return;
        }
        auto reset_cb = qlistview_reset_callback;
        if (reset_cb) {
            reset_cb();
            return;
        }
        QListView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qlistview_setrootindex_isbase) {
            qlistview_setrootindex_isbase = false;
            QListView::setRootIndex(index);
            return;
        }
        auto setrootindex_cb = qlistview_setrootindex_callback;
        if (setrootindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            setrootindex_cb(this, cbval1);
            return;
        }
        QListView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlistview_event_isbase) {
            qlistview_event_isbase = false;
            return QListView::event(e);
        }
        auto event_cb = qlistview_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QListView::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qlistview_scrollcontentsby_isbase) {
            qlistview_scrollcontentsby_isbase = false;
            QListView::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qlistview_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QListView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qlistview_datachanged_isbase) {
            qlistview_datachanged_isbase = false;
            QListView::dataChanged(topLeft, bottomRight, roles);
            return;
        }
        auto datachanged_cb = qlistview_datachanged_callback;
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
        QListView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qlistview_rowsinserted_isbase) {
            qlistview_rowsinserted_isbase = false;
            QListView::rowsInserted(parent, start, end);
            return;
        }
        auto rowsinserted_cb = qlistview_rowsinserted_callback;
        if (rowsinserted_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsinserted_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QListView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qlistview_rowsabouttoberemoved_isbase) {
            qlistview_rowsabouttoberemoved_isbase = false;
            QListView::rowsAboutToBeRemoved(parent, start, end);
            return;
        }
        auto rowsabouttoberemoved_cb = qlistview_rowsabouttoberemoved_callback;
        if (rowsabouttoberemoved_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsabouttoberemoved_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QListView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qlistview_mousemoveevent_isbase) {
            qlistview_mousemoveevent_isbase = false;
            QListView::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = qlistview_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QListView::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qlistview_mousereleaseevent_isbase) {
            qlistview_mousereleaseevent_isbase = false;
            QListView::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = qlistview_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QListView::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qlistview_wheelevent_isbase) {
            qlistview_wheelevent_isbase = false;
            QListView::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = qlistview_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        QListView::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qlistview_timerevent_isbase) {
            qlistview_timerevent_isbase = false;
            QListView::timerEvent(e);
            return;
        }
        auto timerevent_cb = qlistview_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        QListView::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qlistview_resizeevent_isbase) {
            qlistview_resizeevent_isbase = false;
            QListView::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = qlistview_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        QListView::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlistview_dragmoveevent_isbase) {
            qlistview_dragmoveevent_isbase = false;
            QListView::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = qlistview_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QListView::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlistview_dragleaveevent_isbase) {
            qlistview_dragleaveevent_isbase = false;
            QListView::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = qlistview_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QListView::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qlistview_dropevent_isbase) {
            qlistview_dropevent_isbase = false;
            QListView::dropEvent(e);
            return;
        }
        auto dropevent_cb = qlistview_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;

            dropevent_cb(this, cbval1);
            return;
        }
        QListView::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qlistview_startdrag_isbase) {
            qlistview_startdrag_isbase = false;
            QListView::startDrag(supportedActions);
            return;
        }
        auto startdrag_cb = qlistview_startdrag_callback;
        if (startdrag_cb) {
            int cbval1 = static_cast<int>(supportedActions);

            startdrag_cb(this, cbval1);
            return;
        }
        QListView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qlistview_initviewitemoption_isbase) {
            qlistview_initviewitemoption_isbase = false;
            QListView::initViewItemOption(option);
            return;
        }
        auto initviewitemoption_cb = qlistview_initviewitemoption_callback;
        if (initviewitemoption_cb) {
            QStyleOptionViewItem* cbval1 = option;

            initviewitemoption_cb(this, cbval1);
            return;
        }
        QListView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qlistview_paintevent_isbase) {
            qlistview_paintevent_isbase = false;
            QListView::paintEvent(e);
            return;
        }
        auto paintevent_cb = qlistview_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        QListView::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qlistview_horizontaloffset_isbase) {
            qlistview_horizontaloffset_isbase = false;
            return QListView::horizontalOffset();
        }
        auto horizontaloffset_cb = qlistview_horizontaloffset_callback;
        if (horizontaloffset_cb) {
            int callback_ret = horizontaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return QListView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qlistview_verticaloffset_isbase) {
            qlistview_verticaloffset_isbase = false;
            return QListView::verticalOffset();
        }
        auto verticaloffset_cb = qlistview_verticaloffset_callback;
        if (verticaloffset_cb) {
            int callback_ret = verticaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return QListView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qlistview_movecursor_isbase) {
            qlistview_movecursor_isbase = false;
            return QListView::moveCursor(cursorAction, modifiers);
        }
        auto movecursor_cb = qlistview_movecursor_callback;
        if (movecursor_cb) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = movecursor_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QListView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qlistview_setselection_isbase) {
            qlistview_setselection_isbase = false;
            QListView::setSelection(rect, command);
            return;
        }
        auto setselection_cb = qlistview_setselection_callback;
        if (setselection_cb) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            setselection_cb(this, cbval1, cbval2);
            return;
        }
        QListView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qlistview_visualregionforselection_isbase) {
            qlistview_visualregionforselection_isbase = false;
            return QListView::visualRegionForSelection(selection);
        }
        auto visualregionforselection_cb = qlistview_visualregionforselection_callback;
        if (visualregionforselection_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = visualregionforselection_cb(this, cbval1);
            return *callback_ret;
        }
        return QListView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qlistview_selectedindexes_isbase) {
            qlistview_selectedindexes_isbase = false;
            return QListView::selectedIndexes();
        }
        auto selectedindexes_cb = qlistview_selectedindexes_callback;
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
        return QListView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qlistview_updategeometries_isbase) {
            qlistview_updategeometries_isbase = false;
            QListView::updateGeometries();
            return;
        }
        auto updategeometries_cb = qlistview_updategeometries_callback;
        if (updategeometries_cb) {
            updategeometries_cb();
            return;
        }
        QListView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qlistview_isindexhidden_isbase) {
            qlistview_isindexhidden_isbase = false;
            return QListView::isIndexHidden(index);
        }
        auto isindexhidden_cb = qlistview_isindexhidden_callback;
        if (isindexhidden_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = isindexhidden_cb(this, cbval1);
            return callback_ret;
        }
        return QListView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qlistview_selectionchanged_isbase) {
            qlistview_selectionchanged_isbase = false;
            QListView::selectionChanged(selected, deselected);
            return;
        }
        auto selectionchanged_cb = qlistview_selectionchanged_callback;
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
        QListView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qlistview_currentchanged_isbase) {
            qlistview_currentchanged_isbase = false;
            QListView::currentChanged(current, previous);
            return;
        }
        auto currentchanged_cb = qlistview_currentchanged_callback;
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
        QListView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qlistview_viewportsizehint_isbase) {
            qlistview_viewportsizehint_isbase = false;
            return QListView::viewportSizeHint();
        }
        auto viewportsizehint_cb = qlistview_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QListView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qlistview_setmodel_isbase) {
            qlistview_setmodel_isbase = false;
            QListView::setModel(model);
            return;
        }
        auto setmodel_cb = qlistview_setmodel_callback;
        if (setmodel_cb) {
            QAbstractItemModel* cbval1 = model;

            setmodel_cb(this, cbval1);
            return;
        }
        QListView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qlistview_setselectionmodel_isbase) {
            qlistview_setselectionmodel_isbase = false;
            QListView::setSelectionModel(selectionModel);
            return;
        }
        auto setselectionmodel_cb = qlistview_setselectionmodel_callback;
        if (setselectionmodel_cb) {
            QItemSelectionModel* cbval1 = selectionModel;

            setselectionmodel_cb(this, cbval1);
            return;
        }
        QListView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qlistview_keyboardsearch_isbase) {
            qlistview_keyboardsearch_isbase = false;
            QListView::keyboardSearch(search);
            return;
        }
        auto keyboardsearch_cb = qlistview_keyboardsearch_callback;
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
        QListView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qlistview_sizehintforrow_isbase) {
            qlistview_sizehintforrow_isbase = false;
            return QListView::sizeHintForRow(row);
        }
        auto sizehintforrow_cb = qlistview_sizehintforrow_callback;
        if (sizehintforrow_cb) {
            int cbval1 = row;

            int callback_ret = sizehintforrow_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qlistview_sizehintforcolumn_isbase) {
            qlistview_sizehintforcolumn_isbase = false;
            return QListView::sizeHintForColumn(column);
        }
        auto sizehintforcolumn_cb = qlistview_sizehintforcolumn_callback;
        if (sizehintforcolumn_cb) {
            int cbval1 = column;

            int callback_ret = sizehintforcolumn_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qlistview_itemdelegateforindex_isbase) {
            qlistview_itemdelegateforindex_isbase = false;
            return QListView::itemDelegateForIndex(index);
        }
        auto itemdelegateforindex_cb = qlistview_itemdelegateforindex_callback;
        if (itemdelegateforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = itemdelegateforindex_cb(this, cbval1);
            return callback_ret;
        }
        return QListView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qlistview_inputmethodquery_isbase) {
            qlistview_inputmethodquery_isbase = false;
            return QListView::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qlistview_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QListView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qlistview_selectall_isbase) {
            qlistview_selectall_isbase = false;
            QListView::selectAll();
            return;
        }
        auto selectall_cb = qlistview_selectall_callback;
        if (selectall_cb) {
            selectall_cb();
            return;
        }
        QListView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qlistview_updateeditordata_isbase) {
            qlistview_updateeditordata_isbase = false;
            QListView::updateEditorData();
            return;
        }
        auto updateeditordata_cb = qlistview_updateeditordata_callback;
        if (updateeditordata_cb) {
            updateeditordata_cb();
            return;
        }
        QListView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qlistview_updateeditorgeometries_isbase) {
            qlistview_updateeditorgeometries_isbase = false;
            QListView::updateEditorGeometries();
            return;
        }
        auto updateeditorgeometries_cb = qlistview_updateeditorgeometries_callback;
        if (updateeditorgeometries_cb) {
            updateeditorgeometries_cb();
            return;
        }
        QListView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qlistview_verticalscrollbaraction_isbase) {
            qlistview_verticalscrollbaraction_isbase = false;
            QListView::verticalScrollbarAction(action);
            return;
        }
        auto verticalscrollbaraction_cb = qlistview_verticalscrollbaraction_callback;
        if (verticalscrollbaraction_cb) {
            int cbval1 = action;

            verticalscrollbaraction_cb(this, cbval1);
            return;
        }
        QListView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qlistview_horizontalscrollbaraction_isbase) {
            qlistview_horizontalscrollbaraction_isbase = false;
            QListView::horizontalScrollbarAction(action);
            return;
        }
        auto horizontalscrollbaraction_cb = qlistview_horizontalscrollbaraction_callback;
        if (horizontalscrollbaraction_cb) {
            int cbval1 = action;

            horizontalscrollbaraction_cb(this, cbval1);
            return;
        }
        QListView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qlistview_verticalscrollbarvaluechanged_isbase) {
            qlistview_verticalscrollbarvaluechanged_isbase = false;
            QListView::verticalScrollbarValueChanged(value);
            return;
        }
        auto verticalscrollbarvaluechanged_cb = qlistview_verticalscrollbarvaluechanged_callback;
        if (verticalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            verticalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QListView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qlistview_horizontalscrollbarvaluechanged_isbase) {
            qlistview_horizontalscrollbarvaluechanged_isbase = false;
            QListView::horizontalScrollbarValueChanged(value);
            return;
        }
        auto horizontalscrollbarvaluechanged_cb = qlistview_horizontalscrollbarvaluechanged_callback;
        if (horizontalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            horizontalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QListView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qlistview_closeeditor_isbase) {
            qlistview_closeeditor_isbase = false;
            QListView::closeEditor(editor, hint);
            return;
        }
        auto closeeditor_cb = qlistview_closeeditor_callback;
        if (closeeditor_cb) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            closeeditor_cb(this, cbval1, cbval2);
            return;
        }
        QListView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qlistview_commitdata_isbase) {
            qlistview_commitdata_isbase = false;
            QListView::commitData(editor);
            return;
        }
        auto commitdata_cb = qlistview_commitdata_callback;
        if (commitdata_cb) {
            QWidget* cbval1 = editor;

            commitdata_cb(this, cbval1);
            return;
        }
        QListView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qlistview_editordestroyed_isbase) {
            qlistview_editordestroyed_isbase = false;
            QListView::editorDestroyed(editor);
            return;
        }
        auto editordestroyed_cb = qlistview_editordestroyed_callback;
        if (editordestroyed_cb) {
            QObject* cbval1 = editor;

            editordestroyed_cb(this, cbval1);
            return;
        }
        QListView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qlistview_edit2_isbase) {
            qlistview_edit2_isbase = false;
            return QListView::edit(index, trigger, event);
        }
        auto edit2_cb = qlistview_edit2_callback;
        if (edit2_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = edit2_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QListView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qlistview_selectioncommand_isbase) {
            qlistview_selectioncommand_isbase = false;
            return QListView::selectionCommand(index, event);
        }
        auto selectioncommand_cb = qlistview_selectioncommand_callback;
        if (selectioncommand_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = selectioncommand_cb(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QListView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlistview_focusnextprevchild_isbase) {
            qlistview_focusnextprevchild_isbase = false;
            return QListView::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qlistview_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QListView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qlistview_viewportevent_isbase) {
            qlistview_viewportevent_isbase = false;
            return QListView::viewportEvent(event);
        }
        auto viewportevent_cb = qlistview_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QListView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlistview_mousepressevent_isbase) {
            qlistview_mousepressevent_isbase = false;
            QListView::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qlistview_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QListView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlistview_mousedoubleclickevent_isbase) {
            qlistview_mousedoubleclickevent_isbase = false;
            QListView::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qlistview_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QListView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlistview_dragenterevent_isbase) {
            qlistview_dragenterevent_isbase = false;
            QListView::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qlistview_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QListView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlistview_focusinevent_isbase) {
            qlistview_focusinevent_isbase = false;
            QListView::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qlistview_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QListView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlistview_focusoutevent_isbase) {
            qlistview_focusoutevent_isbase = false;
            QListView::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qlistview_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QListView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlistview_keypressevent_isbase) {
            qlistview_keypressevent_isbase = false;
            QListView::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qlistview_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QListView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qlistview_inputmethodevent_isbase) {
            qlistview_inputmethodevent_isbase = false;
            QListView::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qlistview_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QListView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qlistview_eventfilter_isbase) {
            qlistview_eventfilter_isbase = false;
            return QListView::eventFilter(object, event);
        }
        auto eventfilter_cb = qlistview_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QListView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlistview_minimumsizehint_isbase) {
            qlistview_minimumsizehint_isbase = false;
            return QListView::minimumSizeHint();
        }
        auto minimumsizehint_cb = qlistview_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QListView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlistview_sizehint_isbase) {
            qlistview_sizehint_isbase = false;
            return QListView::sizeHint();
        }
        auto sizehint_cb = qlistview_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QListView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qlistview_setupviewport_isbase) {
            qlistview_setupviewport_isbase = false;
            QListView::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qlistview_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QListView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlistview_contextmenuevent_isbase) {
            qlistview_contextmenuevent_isbase = false;
            QListView::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qlistview_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QListView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlistview_changeevent_isbase) {
            qlistview_changeevent_isbase = false;
            QListView::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qlistview_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QListView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlistview_initstyleoption_isbase) {
            qlistview_initstyleoption_isbase = false;
            QListView::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qlistview_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QListView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlistview_devtype_isbase) {
            qlistview_devtype_isbase = false;
            return QListView::devType();
        }
        auto devtype_cb = qlistview_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QListView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlistview_setvisible_isbase) {
            qlistview_setvisible_isbase = false;
            QListView::setVisible(visible);
            return;
        }
        auto setvisible_cb = qlistview_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QListView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlistview_heightforwidth_isbase) {
            qlistview_heightforwidth_isbase = false;
            return QListView::heightForWidth(param1);
        }
        auto heightforwidth_cb = qlistview_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlistview_hasheightforwidth_isbase) {
            qlistview_hasheightforwidth_isbase = false;
            return QListView::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qlistview_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QListView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlistview_paintengine_isbase) {
            qlistview_paintengine_isbase = false;
            return QListView::paintEngine();
        }
        auto paintengine_cb = qlistview_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QListView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlistview_keyreleaseevent_isbase) {
            qlistview_keyreleaseevent_isbase = false;
            QListView::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qlistview_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QListView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlistview_enterevent_isbase) {
            qlistview_enterevent_isbase = false;
            QListView::enterEvent(event);
            return;
        }
        auto enterevent_cb = qlistview_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QListView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlistview_leaveevent_isbase) {
            qlistview_leaveevent_isbase = false;
            QListView::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qlistview_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QListView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlistview_moveevent_isbase) {
            qlistview_moveevent_isbase = false;
            QListView::moveEvent(event);
            return;
        }
        auto moveevent_cb = qlistview_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QListView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlistview_closeevent_isbase) {
            qlistview_closeevent_isbase = false;
            QListView::closeEvent(event);
            return;
        }
        auto closeevent_cb = qlistview_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QListView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlistview_tabletevent_isbase) {
            qlistview_tabletevent_isbase = false;
            QListView::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qlistview_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QListView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlistview_actionevent_isbase) {
            qlistview_actionevent_isbase = false;
            QListView::actionEvent(event);
            return;
        }
        auto actionevent_cb = qlistview_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QListView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlistview_showevent_isbase) {
            qlistview_showevent_isbase = false;
            QListView::showEvent(event);
            return;
        }
        auto showevent_cb = qlistview_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QListView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlistview_hideevent_isbase) {
            qlistview_hideevent_isbase = false;
            QListView::hideEvent(event);
            return;
        }
        auto hideevent_cb = qlistview_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QListView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlistview_nativeevent_isbase) {
            qlistview_nativeevent_isbase = false;
            return QListView::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qlistview_nativeevent_callback;
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
        return QListView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlistview_metric_isbase) {
            qlistview_metric_isbase = false;
            return QListView::metric(param1);
        }
        auto metric_cb = qlistview_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlistview_initpainter_isbase) {
            qlistview_initpainter_isbase = false;
            QListView::initPainter(painter);
            return;
        }
        auto initpainter_cb = qlistview_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QListView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlistview_redirected_isbase) {
            qlistview_redirected_isbase = false;
            return QListView::redirected(offset);
        }
        auto redirected_cb = qlistview_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QListView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlistview_sharedpainter_isbase) {
            qlistview_sharedpainter_isbase = false;
            return QListView::sharedPainter();
        }
        auto sharedpainter_cb = qlistview_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QListView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlistview_childevent_isbase) {
            qlistview_childevent_isbase = false;
            QListView::childEvent(event);
            return;
        }
        auto childevent_cb = qlistview_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QListView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlistview_customevent_isbase) {
            qlistview_customevent_isbase = false;
            QListView::customEvent(event);
            return;
        }
        auto customevent_cb = qlistview_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QListView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlistview_connectnotify_isbase) {
            qlistview_connectnotify_isbase = false;
            QListView::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qlistview_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QListView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlistview_disconnectnotify_isbase) {
            qlistview_disconnectnotify_isbase = false;
            QListView::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qlistview_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QListView::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (qlistview_resizecontents_isbase) {
            qlistview_resizecontents_isbase = false;
            QListView::resizeContents(width, height);
            return;
        }
        auto resizecontents_cb = qlistview_resizecontents_callback;
        if (resizecontents_cb) {
            int cbval1 = width;
            int cbval2 = height;

            resizecontents_cb(this, cbval1, cbval2);
            return;
        }
        QListView::resizeContents(width, height);
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (qlistview_contentssize_isbase) {
            qlistview_contentssize_isbase = false;
            return QListView::contentsSize();
        }
        auto contentssize_cb = qlistview_contentssize_callback;
        if (contentssize_cb) {
            QSize* callback_ret = contentssize_cb();
            return *callback_ret;
        }
        return QListView::contentsSize();
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (qlistview_rectforindex_isbase) {
            qlistview_rectforindex_isbase = false;
            return QListView::rectForIndex(index);
        }
        auto rectforindex_cb = qlistview_rectforindex_callback;
        if (rectforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = rectforindex_cb(this, cbval1);
            return *callback_ret;
        }
        return QListView::rectForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (qlistview_setpositionforindex_isbase) {
            qlistview_setpositionforindex_isbase = false;
            QListView::setPositionForIndex(position, index);
            return;
        }
        auto setpositionforindex_cb = qlistview_setpositionforindex_callback;
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
        QListView::setPositionForIndex(position, index);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qlistview_state_isbase) {
            qlistview_state_isbase = false;
            return QListView::state();
        }
        auto state_cb = qlistview_state_callback;
        if (state_cb) {
            int callback_ret = state_cb();
            return static_cast<VirtualQListView::State>(callback_ret);
        }
        return QListView::state();
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qlistview_setstate_isbase) {
            qlistview_setstate_isbase = false;
            QListView::setState(state);
            return;
        }
        auto setstate_cb = qlistview_setstate_callback;
        if (setstate_cb) {
            int cbval1 = static_cast<int>(state);

            setstate_cb(this, cbval1);
            return;
        }
        QListView::setState(state);
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qlistview_scheduledelayeditemslayout_isbase) {
            qlistview_scheduledelayeditemslayout_isbase = false;
            QListView::scheduleDelayedItemsLayout();
            return;
        }
        auto scheduledelayeditemslayout_cb = qlistview_scheduledelayeditemslayout_callback;
        if (scheduledelayeditemslayout_cb) {
            scheduledelayeditemslayout_cb();
            return;
        }
        QListView::scheduleDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qlistview_executedelayeditemslayout_isbase) {
            qlistview_executedelayeditemslayout_isbase = false;
            QListView::executeDelayedItemsLayout();
            return;
        }
        auto executedelayeditemslayout_cb = qlistview_executedelayeditemslayout_callback;
        if (executedelayeditemslayout_cb) {
            executedelayeditemslayout_cb();
            return;
        }
        QListView::executeDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qlistview_setdirtyregion_isbase) {
            qlistview_setdirtyregion_isbase = false;
            QListView::setDirtyRegion(region);
            return;
        }
        auto setdirtyregion_cb = qlistview_setdirtyregion_callback;
        if (setdirtyregion_cb) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            setdirtyregion_cb(this, cbval1);
            return;
        }
        QListView::setDirtyRegion(region);
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qlistview_scrolldirtyregion_isbase) {
            qlistview_scrolldirtyregion_isbase = false;
            QListView::scrollDirtyRegion(dx, dy);
            return;
        }
        auto scrolldirtyregion_cb = qlistview_scrolldirtyregion_callback;
        if (scrolldirtyregion_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrolldirtyregion_cb(this, cbval1, cbval2);
            return;
        }
        QListView::scrollDirtyRegion(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qlistview_dirtyregionoffset_isbase) {
            qlistview_dirtyregionoffset_isbase = false;
            return QListView::dirtyRegionOffset();
        }
        auto dirtyregionoffset_cb = qlistview_dirtyregionoffset_callback;
        if (dirtyregionoffset_cb) {
            QPoint* callback_ret = dirtyregionoffset_cb();
            return *callback_ret;
        }
        return QListView::dirtyRegionOffset();
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qlistview_startautoscroll_isbase) {
            qlistview_startautoscroll_isbase = false;
            QListView::startAutoScroll();
            return;
        }
        auto startautoscroll_cb = qlistview_startautoscroll_callback;
        if (startautoscroll_cb) {
            startautoscroll_cb();
            return;
        }
        QListView::startAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qlistview_stopautoscroll_isbase) {
            qlistview_stopautoscroll_isbase = false;
            QListView::stopAutoScroll();
            return;
        }
        auto stopautoscroll_cb = qlistview_stopautoscroll_callback;
        if (stopautoscroll_cb) {
            stopautoscroll_cb();
            return;
        }
        QListView::stopAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qlistview_doautoscroll_isbase) {
            qlistview_doautoscroll_isbase = false;
            QListView::doAutoScroll();
            return;
        }
        auto doautoscroll_cb = qlistview_doautoscroll_callback;
        if (doautoscroll_cb) {
            doautoscroll_cb();
            return;
        }
        QListView::doAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qlistview_dropindicatorposition_isbase) {
            qlistview_dropindicatorposition_isbase = false;
            return QListView::dropIndicatorPosition();
        }
        auto dropindicatorposition_cb = qlistview_dropindicatorposition_callback;
        if (dropindicatorposition_cb) {
            int callback_ret = dropindicatorposition_cb();
            return static_cast<VirtualQListView::DropIndicatorPosition>(callback_ret);
        }
        return QListView::dropIndicatorPosition();
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qlistview_setviewportmargins_isbase) {
            qlistview_setviewportmargins_isbase = false;
            QListView::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qlistview_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QListView::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qlistview_viewportmargins_isbase) {
            qlistview_viewportmargins_isbase = false;
            return QListView::viewportMargins();
        }
        auto viewportmargins_cb = qlistview_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QListView::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qlistview_drawframe_isbase) {
            qlistview_drawframe_isbase = false;
            QListView::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qlistview_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QListView::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlistview_updatemicrofocus_isbase) {
            qlistview_updatemicrofocus_isbase = false;
            QListView::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qlistview_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QListView::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlistview_create_isbase) {
            qlistview_create_isbase = false;
            QListView::create();
            return;
        }
        auto create_cb = qlistview_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QListView::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlistview_destroy_isbase) {
            qlistview_destroy_isbase = false;
            QListView::destroy();
            return;
        }
        auto destroy_cb = qlistview_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QListView::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlistview_focusnextchild_isbase) {
            qlistview_focusnextchild_isbase = false;
            return QListView::focusNextChild();
        }
        auto focusnextchild_cb = qlistview_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QListView::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlistview_focuspreviouschild_isbase) {
            qlistview_focuspreviouschild_isbase = false;
            return QListView::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qlistview_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QListView::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlistview_sender_isbase) {
            qlistview_sender_isbase = false;
            return QListView::sender();
        }
        auto sender_cb = qlistview_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QListView::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlistview_sendersignalindex_isbase) {
            qlistview_sendersignalindex_isbase = false;
            return QListView::senderSignalIndex();
        }
        auto sendersignalindex_cb = qlistview_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QListView::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlistview_receivers_isbase) {
            qlistview_receivers_isbase = false;
            return QListView::receivers(signal);
        }
        auto receivers_cb = qlistview_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlistview_issignalconnected_isbase) {
            qlistview_issignalconnected_isbase = false;
            return QListView::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qlistview_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QListView::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qlistview_getdecodedmetricf_isbase) {
            qlistview_getdecodedmetricf_isbase = false;
            return QListView::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qlistview_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QListView::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QListView_Event(QListView* self, QEvent* e);
    friend bool QListView_SuperEvent(QListView* self, QEvent* e);
    friend void QListView_ScrollContentsBy(QListView* self, int dx, int dy);
    friend void QListView_SuperScrollContentsBy(QListView* self, int dx, int dy);
    friend void QListView_DataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QListView_SuperDataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QListView_RowsInserted(QListView* self, const QModelIndex* parent, int start, int end);
    friend void QListView_SuperRowsInserted(QListView* self, const QModelIndex* parent, int start, int end);
    friend void QListView_RowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end);
    friend void QListView_SuperRowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end);
    friend void QListView_MouseMoveEvent(QListView* self, QMouseEvent* e);
    friend void QListView_SuperMouseMoveEvent(QListView* self, QMouseEvent* e);
    friend void QListView_MouseReleaseEvent(QListView* self, QMouseEvent* e);
    friend void QListView_SuperMouseReleaseEvent(QListView* self, QMouseEvent* e);
    friend void QListView_WheelEvent(QListView* self, QWheelEvent* e);
    friend void QListView_SuperWheelEvent(QListView* self, QWheelEvent* e);
    friend void QListView_TimerEvent(QListView* self, QTimerEvent* e);
    friend void QListView_SuperTimerEvent(QListView* self, QTimerEvent* e);
    friend void QListView_ResizeEvent(QListView* self, QResizeEvent* e);
    friend void QListView_SuperResizeEvent(QListView* self, QResizeEvent* e);
    friend void QListView_DragMoveEvent(QListView* self, QDragMoveEvent* e);
    friend void QListView_SuperDragMoveEvent(QListView* self, QDragMoveEvent* e);
    friend void QListView_DragLeaveEvent(QListView* self, QDragLeaveEvent* e);
    friend void QListView_SuperDragLeaveEvent(QListView* self, QDragLeaveEvent* e);
    friend void QListView_DropEvent(QListView* self, QDropEvent* e);
    friend void QListView_SuperDropEvent(QListView* self, QDropEvent* e);
    friend void QListView_StartDrag(QListView* self, int supportedActions);
    friend void QListView_SuperStartDrag(QListView* self, int supportedActions);
    friend void QListView_InitViewItemOption(const QListView* self, QStyleOptionViewItem* option);
    friend void QListView_SuperInitViewItemOption(const QListView* self, QStyleOptionViewItem* option);
    friend void QListView_PaintEvent(QListView* self, QPaintEvent* e);
    friend void QListView_SuperPaintEvent(QListView* self, QPaintEvent* e);
    friend int QListView_HorizontalOffset(const QListView* self);
    friend int QListView_SuperHorizontalOffset(const QListView* self);
    friend int QListView_VerticalOffset(const QListView* self);
    friend int QListView_SuperVerticalOffset(const QListView* self);
    friend QModelIndex* QListView_MoveCursor(QListView* self, int cursorAction, int modifiers);
    friend QModelIndex* QListView_SuperMoveCursor(QListView* self, int cursorAction, int modifiers);
    friend void QListView_SetSelection(QListView* self, const QRect* rect, int command);
    friend void QListView_SuperSetSelection(QListView* self, const QRect* rect, int command);
    friend QRegion* QListView_VisualRegionForSelection(const QListView* self, const QItemSelection* selection);
    friend QRegion* QListView_SuperVisualRegionForSelection(const QListView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QListView_SelectedIndexes(const QListView* self);
    friend libqt_list /* of QModelIndex* */ QListView_SuperSelectedIndexes(const QListView* self);
    friend void QListView_UpdateGeometries(QListView* self);
    friend void QListView_SuperUpdateGeometries(QListView* self);
    friend bool QListView_IsIndexHidden(const QListView* self, const QModelIndex* index);
    friend bool QListView_SuperIsIndexHidden(const QListView* self, const QModelIndex* index);
    friend void QListView_SelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QListView_SuperSelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QListView_CurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QListView_SuperCurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* QListView_ViewportSizeHint(const QListView* self);
    friend QSize* QListView_SuperViewportSizeHint(const QListView* self);
    friend void QListView_UpdateEditorData(QListView* self);
    friend void QListView_SuperUpdateEditorData(QListView* self);
    friend void QListView_UpdateEditorGeometries(QListView* self);
    friend void QListView_SuperUpdateEditorGeometries(QListView* self);
    friend void QListView_VerticalScrollbarAction(QListView* self, int action);
    friend void QListView_SuperVerticalScrollbarAction(QListView* self, int action);
    friend void QListView_HorizontalScrollbarAction(QListView* self, int action);
    friend void QListView_SuperHorizontalScrollbarAction(QListView* self, int action);
    friend void QListView_VerticalScrollbarValueChanged(QListView* self, int value);
    friend void QListView_SuperVerticalScrollbarValueChanged(QListView* self, int value);
    friend void QListView_HorizontalScrollbarValueChanged(QListView* self, int value);
    friend void QListView_SuperHorizontalScrollbarValueChanged(QListView* self, int value);
    friend void QListView_CloseEditor(QListView* self, QWidget* editor, int hint);
    friend void QListView_SuperCloseEditor(QListView* self, QWidget* editor, int hint);
    friend void QListView_CommitData(QListView* self, QWidget* editor);
    friend void QListView_SuperCommitData(QListView* self, QWidget* editor);
    friend void QListView_EditorDestroyed(QListView* self, QObject* editor);
    friend void QListView_SuperEditorDestroyed(QListView* self, QObject* editor);
    friend bool QListView_Edit2(QListView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QListView_SuperEdit2(QListView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QListView_SelectionCommand(const QListView* self, const QModelIndex* index, const QEvent* event);
    friend int QListView_SuperSelectionCommand(const QListView* self, const QModelIndex* index, const QEvent* event);
    friend bool QListView_FocusNextPrevChild(QListView* self, bool next);
    friend bool QListView_SuperFocusNextPrevChild(QListView* self, bool next);
    friend bool QListView_ViewportEvent(QListView* self, QEvent* event);
    friend bool QListView_SuperViewportEvent(QListView* self, QEvent* event);
    friend void QListView_MousePressEvent(QListView* self, QMouseEvent* event);
    friend void QListView_SuperMousePressEvent(QListView* self, QMouseEvent* event);
    friend void QListView_MouseDoubleClickEvent(QListView* self, QMouseEvent* event);
    friend void QListView_SuperMouseDoubleClickEvent(QListView* self, QMouseEvent* event);
    friend void QListView_DragEnterEvent(QListView* self, QDragEnterEvent* event);
    friend void QListView_SuperDragEnterEvent(QListView* self, QDragEnterEvent* event);
    friend void QListView_FocusInEvent(QListView* self, QFocusEvent* event);
    friend void QListView_SuperFocusInEvent(QListView* self, QFocusEvent* event);
    friend void QListView_FocusOutEvent(QListView* self, QFocusEvent* event);
    friend void QListView_SuperFocusOutEvent(QListView* self, QFocusEvent* event);
    friend void QListView_KeyPressEvent(QListView* self, QKeyEvent* event);
    friend void QListView_SuperKeyPressEvent(QListView* self, QKeyEvent* event);
    friend void QListView_InputMethodEvent(QListView* self, QInputMethodEvent* event);
    friend void QListView_SuperInputMethodEvent(QListView* self, QInputMethodEvent* event);
    friend bool QListView_EventFilter(QListView* self, QObject* object, QEvent* event);
    friend bool QListView_SuperEventFilter(QListView* self, QObject* object, QEvent* event);
    friend void QListView_ContextMenuEvent(QListView* self, QContextMenuEvent* param1);
    friend void QListView_SuperContextMenuEvent(QListView* self, QContextMenuEvent* param1);
    friend void QListView_ChangeEvent(QListView* self, QEvent* param1);
    friend void QListView_SuperChangeEvent(QListView* self, QEvent* param1);
    friend void QListView_InitStyleOption(const QListView* self, QStyleOptionFrame* option);
    friend void QListView_SuperInitStyleOption(const QListView* self, QStyleOptionFrame* option);
    friend void QListView_KeyReleaseEvent(QListView* self, QKeyEvent* event);
    friend void QListView_SuperKeyReleaseEvent(QListView* self, QKeyEvent* event);
    friend void QListView_EnterEvent(QListView* self, QEnterEvent* event);
    friend void QListView_SuperEnterEvent(QListView* self, QEnterEvent* event);
    friend void QListView_LeaveEvent(QListView* self, QEvent* event);
    friend void QListView_SuperLeaveEvent(QListView* self, QEvent* event);
    friend void QListView_MoveEvent(QListView* self, QMoveEvent* event);
    friend void QListView_SuperMoveEvent(QListView* self, QMoveEvent* event);
    friend void QListView_CloseEvent(QListView* self, QCloseEvent* event);
    friend void QListView_SuperCloseEvent(QListView* self, QCloseEvent* event);
    friend void QListView_TabletEvent(QListView* self, QTabletEvent* event);
    friend void QListView_SuperTabletEvent(QListView* self, QTabletEvent* event);
    friend void QListView_ActionEvent(QListView* self, QActionEvent* event);
    friend void QListView_SuperActionEvent(QListView* self, QActionEvent* event);
    friend void QListView_ShowEvent(QListView* self, QShowEvent* event);
    friend void QListView_SuperShowEvent(QListView* self, QShowEvent* event);
    friend void QListView_HideEvent(QListView* self, QHideEvent* event);
    friend void QListView_SuperHideEvent(QListView* self, QHideEvent* event);
    friend bool QListView_NativeEvent(QListView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QListView_SuperNativeEvent(QListView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QListView_Metric(const QListView* self, int param1);
    friend int QListView_SuperMetric(const QListView* self, int param1);
    friend void QListView_InitPainter(const QListView* self, QPainter* painter);
    friend void QListView_SuperInitPainter(const QListView* self, QPainter* painter);
    friend QPaintDevice* QListView_Redirected(const QListView* self, QPoint* offset);
    friend QPaintDevice* QListView_SuperRedirected(const QListView* self, QPoint* offset);
    friend QPainter* QListView_SharedPainter(const QListView* self);
    friend QPainter* QListView_SuperSharedPainter(const QListView* self);
    friend void QListView_ChildEvent(QListView* self, QChildEvent* event);
    friend void QListView_SuperChildEvent(QListView* self, QChildEvent* event);
    friend void QListView_CustomEvent(QListView* self, QEvent* event);
    friend void QListView_SuperCustomEvent(QListView* self, QEvent* event);
    friend void QListView_ConnectNotify(QListView* self, const QMetaMethod* signal);
    friend void QListView_SuperConnectNotify(QListView* self, const QMetaMethod* signal);
    friend void QListView_DisconnectNotify(QListView* self, const QMetaMethod* signal);
    friend void QListView_SuperDisconnectNotify(QListView* self, const QMetaMethod* signal);
    friend void QListView_ResizeContents(QListView* self, int width, int height);
    friend void QListView_SuperResizeContents(QListView* self, int width, int height);
    friend QSize* QListView_ContentsSize(const QListView* self);
    friend QSize* QListView_SuperContentsSize(const QListView* self);
    friend QRect* QListView_RectForIndex(const QListView* self, const QModelIndex* index);
    friend QRect* QListView_SuperRectForIndex(const QListView* self, const QModelIndex* index);
    friend void QListView_SetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index);
    friend void QListView_SuperSetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index);
    friend int QListView_State(const QListView* self);
    friend int QListView_SuperState(const QListView* self);
    friend void QListView_SetState(QListView* self, int state);
    friend void QListView_SuperSetState(QListView* self, int state);
    friend void QListView_ScheduleDelayedItemsLayout(QListView* self);
    friend void QListView_SuperScheduleDelayedItemsLayout(QListView* self);
    friend void QListView_ExecuteDelayedItemsLayout(QListView* self);
    friend void QListView_SuperExecuteDelayedItemsLayout(QListView* self);
    friend void QListView_SetDirtyRegion(QListView* self, const QRegion* region);
    friend void QListView_SuperSetDirtyRegion(QListView* self, const QRegion* region);
    friend void QListView_ScrollDirtyRegion(QListView* self, int dx, int dy);
    friend void QListView_SuperScrollDirtyRegion(QListView* self, int dx, int dy);
    friend QPoint* QListView_DirtyRegionOffset(const QListView* self);
    friend QPoint* QListView_SuperDirtyRegionOffset(const QListView* self);
    friend void QListView_StartAutoScroll(QListView* self);
    friend void QListView_SuperStartAutoScroll(QListView* self);
    friend void QListView_StopAutoScroll(QListView* self);
    friend void QListView_SuperStopAutoScroll(QListView* self);
    friend void QListView_DoAutoScroll(QListView* self);
    friend void QListView_SuperDoAutoScroll(QListView* self);
    friend int QListView_DropIndicatorPosition(const QListView* self);
    friend int QListView_SuperDropIndicatorPosition(const QListView* self);
    friend void QListView_SetViewportMargins(QListView* self, int left, int top, int right, int bottom);
    friend void QListView_SuperSetViewportMargins(QListView* self, int left, int top, int right, int bottom);
    friend QMargins* QListView_ViewportMargins(const QListView* self);
    friend QMargins* QListView_SuperViewportMargins(const QListView* self);
    friend void QListView_DrawFrame(QListView* self, QPainter* param1);
    friend void QListView_SuperDrawFrame(QListView* self, QPainter* param1);
    friend void QListView_UpdateMicroFocus(QListView* self);
    friend void QListView_SuperUpdateMicroFocus(QListView* self);
    friend void QListView_Create(QListView* self);
    friend void QListView_SuperCreate(QListView* self);
    friend void QListView_Destroy(QListView* self);
    friend void QListView_SuperDestroy(QListView* self);
    friend bool QListView_FocusNextChild(QListView* self);
    friend bool QListView_SuperFocusNextChild(QListView* self);
    friend bool QListView_FocusPreviousChild(QListView* self);
    friend bool QListView_SuperFocusPreviousChild(QListView* self);
    friend QObject* QListView_Sender(const QListView* self);
    friend QObject* QListView_SuperSender(const QListView* self);
    friend int QListView_SenderSignalIndex(const QListView* self);
    friend int QListView_SuperSenderSignalIndex(const QListView* self);
    friend int QListView_Receivers(const QListView* self, const char* signal);
    friend int QListView_SuperReceivers(const QListView* self, const char* signal);
    friend bool QListView_IsSignalConnected(const QListView* self, const QMetaMethod* signal);
    friend bool QListView_SuperIsSignalConnected(const QListView* self, const QMetaMethod* signal);
    friend double QListView_GetDecodedMetricF(const QListView* self, int metricA, int metricB);
    friend double QListView_SuperGetDecodedMetricF(const QListView* self, int metricA, int metricB);
};

#endif
