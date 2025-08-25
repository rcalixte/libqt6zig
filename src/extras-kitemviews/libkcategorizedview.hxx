#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKCATEGORIZEDVIEW_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKCATEGORIZEDVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCategorizedView so that we can call protected methods
class VirtualKCategorizedView final : public KCategorizedView {

  public:
    // Virtual class boolean flag
    bool isVirtualKCategorizedView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using KCategorizedView_Metacall_Callback = int (*)(KCategorizedView*, int, int, void**);
    using KCategorizedView_SetModel_Callback = void (*)(KCategorizedView*, QAbstractItemModel*);
    using KCategorizedView_VisualRect_Callback = QRect* (*)(const KCategorizedView*, QModelIndex*);
    using KCategorizedView_IndexAt_Callback = QModelIndex* (*)(const KCategorizedView*, QPoint*);
    using KCategorizedView_Reset_Callback = void (*)();
    using KCategorizedView_PaintEvent_Callback = void (*)(KCategorizedView*, QPaintEvent*);
    using KCategorizedView_ResizeEvent_Callback = void (*)(KCategorizedView*, QResizeEvent*);
    using KCategorizedView_SetSelection_Callback = void (*)(KCategorizedView*, QRect*, int);
    using KCategorizedView_MouseMoveEvent_Callback = void (*)(KCategorizedView*, QMouseEvent*);
    using KCategorizedView_MousePressEvent_Callback = void (*)(KCategorizedView*, QMouseEvent*);
    using KCategorizedView_MouseReleaseEvent_Callback = void (*)(KCategorizedView*, QMouseEvent*);
    using KCategorizedView_LeaveEvent_Callback = void (*)(KCategorizedView*, QEvent*);
    using KCategorizedView_StartDrag_Callback = void (*)(KCategorizedView*, int);
    using KCategorizedView_DragMoveEvent_Callback = void (*)(KCategorizedView*, QDragMoveEvent*);
    using KCategorizedView_DragEnterEvent_Callback = void (*)(KCategorizedView*, QDragEnterEvent*);
    using KCategorizedView_DragLeaveEvent_Callback = void (*)(KCategorizedView*, QDragLeaveEvent*);
    using KCategorizedView_DropEvent_Callback = void (*)(KCategorizedView*, QDropEvent*);
    using KCategorizedView_MoveCursor_Callback = QModelIndex* (*)(KCategorizedView*, int, int);
    using KCategorizedView_RowsAboutToBeRemoved_Callback = void (*)(KCategorizedView*, QModelIndex*, int, int);
    using KCategorizedView_UpdateGeometries_Callback = void (*)();
    using KCategorizedView_CurrentChanged_Callback = void (*)(KCategorizedView*, QModelIndex*, QModelIndex*);
    using KCategorizedView_DataChanged_Callback = void (*)(KCategorizedView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using KCategorizedView_RowsInserted_Callback = void (*)(KCategorizedView*, QModelIndex*, int, int);
    using KCategorizedView_SlotLayoutChanged_Callback = void (*)();
    using KCategorizedView_ScrollTo_Callback = void (*)(KCategorizedView*, QModelIndex*, int);
    using KCategorizedView_DoItemsLayout_Callback = void (*)();
    using KCategorizedView_SetRootIndex_Callback = void (*)(KCategorizedView*, QModelIndex*);
    using KCategorizedView_Event_Callback = bool (*)(KCategorizedView*, QEvent*);
    using KCategorizedView_ScrollContentsBy_Callback = void (*)(KCategorizedView*, int, int);
    using KCategorizedView_WheelEvent_Callback = void (*)(KCategorizedView*, QWheelEvent*);
    using KCategorizedView_TimerEvent_Callback = void (*)(KCategorizedView*, QTimerEvent*);
    using KCategorizedView_InitViewItemOption_Callback = void (*)(const KCategorizedView*, QStyleOptionViewItem*);
    using KCategorizedView_HorizontalOffset_Callback = int (*)();
    using KCategorizedView_VerticalOffset_Callback = int (*)();
    using KCategorizedView_VisualRegionForSelection_Callback = QRegion* (*)(const KCategorizedView*, QItemSelection*);
    using KCategorizedView_SelectedIndexes_Callback = QModelIndex** (*)();
    using KCategorizedView_IsIndexHidden_Callback = bool (*)(const KCategorizedView*, QModelIndex*);
    using KCategorizedView_SelectionChanged_Callback = void (*)(KCategorizedView*, QItemSelection*, QItemSelection*);
    using KCategorizedView_ViewportSizeHint_Callback = QSize* (*)();
    using KCategorizedView_SetSelectionModel_Callback = void (*)(KCategorizedView*, QItemSelectionModel*);
    using KCategorizedView_KeyboardSearch_Callback = void (*)(KCategorizedView*, libqt_string);
    using KCategorizedView_SizeHintForRow_Callback = int (*)(const KCategorizedView*, int);
    using KCategorizedView_SizeHintForColumn_Callback = int (*)(const KCategorizedView*, int);
    using KCategorizedView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const KCategorizedView*, QModelIndex*);
    using KCategorizedView_InputMethodQuery_Callback = QVariant* (*)(const KCategorizedView*, int);
    using KCategorizedView_SelectAll_Callback = void (*)();
    using KCategorizedView_UpdateEditorData_Callback = void (*)();
    using KCategorizedView_UpdateEditorGeometries_Callback = void (*)();
    using KCategorizedView_VerticalScrollbarAction_Callback = void (*)(KCategorizedView*, int);
    using KCategorizedView_HorizontalScrollbarAction_Callback = void (*)(KCategorizedView*, int);
    using KCategorizedView_VerticalScrollbarValueChanged_Callback = void (*)(KCategorizedView*, int);
    using KCategorizedView_HorizontalScrollbarValueChanged_Callback = void (*)(KCategorizedView*, int);
    using KCategorizedView_CloseEditor_Callback = void (*)(KCategorizedView*, QWidget*, int);
    using KCategorizedView_CommitData_Callback = void (*)(KCategorizedView*, QWidget*);
    using KCategorizedView_EditorDestroyed_Callback = void (*)(KCategorizedView*, QObject*);
    using KCategorizedView_Edit2_Callback = bool (*)(KCategorizedView*, QModelIndex*, int, QEvent*);
    using KCategorizedView_SelectionCommand_Callback = int (*)(const KCategorizedView*, QModelIndex*, QEvent*);
    using KCategorizedView_FocusNextPrevChild_Callback = bool (*)(KCategorizedView*, bool);
    using KCategorizedView_ViewportEvent_Callback = bool (*)(KCategorizedView*, QEvent*);
    using KCategorizedView_MouseDoubleClickEvent_Callback = void (*)(KCategorizedView*, QMouseEvent*);
    using KCategorizedView_FocusInEvent_Callback = void (*)(KCategorizedView*, QFocusEvent*);
    using KCategorizedView_FocusOutEvent_Callback = void (*)(KCategorizedView*, QFocusEvent*);
    using KCategorizedView_KeyPressEvent_Callback = void (*)(KCategorizedView*, QKeyEvent*);
    using KCategorizedView_InputMethodEvent_Callback = void (*)(KCategorizedView*, QInputMethodEvent*);
    using KCategorizedView_EventFilter_Callback = bool (*)(KCategorizedView*, QObject*, QEvent*);
    using KCategorizedView_MinimumSizeHint_Callback = QSize* (*)();
    using KCategorizedView_SizeHint_Callback = QSize* (*)();
    using KCategorizedView_SetupViewport_Callback = void (*)(KCategorizedView*, QWidget*);
    using KCategorizedView_ContextMenuEvent_Callback = void (*)(KCategorizedView*, QContextMenuEvent*);
    using KCategorizedView_ChangeEvent_Callback = void (*)(KCategorizedView*, QEvent*);
    using KCategorizedView_InitStyleOption_Callback = void (*)(const KCategorizedView*, QStyleOptionFrame*);
    using KCategorizedView_DevType_Callback = int (*)();
    using KCategorizedView_SetVisible_Callback = void (*)(KCategorizedView*, bool);
    using KCategorizedView_HeightForWidth_Callback = int (*)(const KCategorizedView*, int);
    using KCategorizedView_HasHeightForWidth_Callback = bool (*)();
    using KCategorizedView_PaintEngine_Callback = QPaintEngine* (*)();
    using KCategorizedView_KeyReleaseEvent_Callback = void (*)(KCategorizedView*, QKeyEvent*);
    using KCategorizedView_EnterEvent_Callback = void (*)(KCategorizedView*, QEnterEvent*);
    using KCategorizedView_MoveEvent_Callback = void (*)(KCategorizedView*, QMoveEvent*);
    using KCategorizedView_CloseEvent_Callback = void (*)(KCategorizedView*, QCloseEvent*);
    using KCategorizedView_TabletEvent_Callback = void (*)(KCategorizedView*, QTabletEvent*);
    using KCategorizedView_ActionEvent_Callback = void (*)(KCategorizedView*, QActionEvent*);
    using KCategorizedView_ShowEvent_Callback = void (*)(KCategorizedView*, QShowEvent*);
    using KCategorizedView_HideEvent_Callback = void (*)(KCategorizedView*, QHideEvent*);
    using KCategorizedView_NativeEvent_Callback = bool (*)(KCategorizedView*, libqt_string, void*, intptr_t*);
    using KCategorizedView_Metric_Callback = int (*)(const KCategorizedView*, int);
    using KCategorizedView_InitPainter_Callback = void (*)(const KCategorizedView*, QPainter*);
    using KCategorizedView_Redirected_Callback = QPaintDevice* (*)(const KCategorizedView*, QPoint*);
    using KCategorizedView_SharedPainter_Callback = QPainter* (*)();
    using KCategorizedView_ChildEvent_Callback = void (*)(KCategorizedView*, QChildEvent*);
    using KCategorizedView_CustomEvent_Callback = void (*)(KCategorizedView*, QEvent*);
    using KCategorizedView_ConnectNotify_Callback = void (*)(KCategorizedView*, QMetaMethod*);
    using KCategorizedView_DisconnectNotify_Callback = void (*)(KCategorizedView*, QMetaMethod*);
    using KCategorizedView_ResizeContents_Callback = void (*)(KCategorizedView*, int, int);
    using KCategorizedView_ContentsSize_Callback = QSize* (*)();
    using KCategorizedView_RectForIndex_Callback = QRect* (*)(const KCategorizedView*, QModelIndex*);
    using KCategorizedView_SetPositionForIndex_Callback = void (*)(KCategorizedView*, QPoint*, QModelIndex*);
    using KCategorizedView_State_Callback = int (*)();
    using KCategorizedView_SetState_Callback = void (*)(KCategorizedView*, int);
    using KCategorizedView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using KCategorizedView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using KCategorizedView_SetDirtyRegion_Callback = void (*)(KCategorizedView*, QRegion*);
    using KCategorizedView_ScrollDirtyRegion_Callback = void (*)(KCategorizedView*, int, int);
    using KCategorizedView_DirtyRegionOffset_Callback = QPoint* (*)();
    using KCategorizedView_StartAutoScroll_Callback = void (*)();
    using KCategorizedView_StopAutoScroll_Callback = void (*)();
    using KCategorizedView_DoAutoScroll_Callback = void (*)();
    using KCategorizedView_DropIndicatorPosition_Callback = int (*)();
    using KCategorizedView_SetViewportMargins_Callback = void (*)(KCategorizedView*, int, int, int, int);
    using KCategorizedView_ViewportMargins_Callback = QMargins* (*)();
    using KCategorizedView_DrawFrame_Callback = void (*)(KCategorizedView*, QPainter*);
    using KCategorizedView_UpdateMicroFocus_Callback = void (*)();
    using KCategorizedView_Create_Callback = void (*)();
    using KCategorizedView_Destroy_Callback = void (*)();
    using KCategorizedView_FocusNextChild_Callback = bool (*)();
    using KCategorizedView_FocusPreviousChild_Callback = bool (*)();
    using KCategorizedView_Sender_Callback = QObject* (*)();
    using KCategorizedView_SenderSignalIndex_Callback = int (*)();
    using KCategorizedView_Receivers_Callback = int (*)(const KCategorizedView*, const char*);
    using KCategorizedView_IsSignalConnected_Callback = bool (*)(const KCategorizedView*, QMetaMethod*);
    using KCategorizedView_GetDecodedMetricF_Callback = double (*)(const KCategorizedView*, int, int);

  protected:
    // Instance callback storage
    KCategorizedView_Metacall_Callback kcategorizedview_metacall_callback = nullptr;
    KCategorizedView_SetModel_Callback kcategorizedview_setmodel_callback = nullptr;
    KCategorizedView_VisualRect_Callback kcategorizedview_visualrect_callback = nullptr;
    KCategorizedView_IndexAt_Callback kcategorizedview_indexat_callback = nullptr;
    KCategorizedView_Reset_Callback kcategorizedview_reset_callback = nullptr;
    KCategorizedView_PaintEvent_Callback kcategorizedview_paintevent_callback = nullptr;
    KCategorizedView_ResizeEvent_Callback kcategorizedview_resizeevent_callback = nullptr;
    KCategorizedView_SetSelection_Callback kcategorizedview_setselection_callback = nullptr;
    KCategorizedView_MouseMoveEvent_Callback kcategorizedview_mousemoveevent_callback = nullptr;
    KCategorizedView_MousePressEvent_Callback kcategorizedview_mousepressevent_callback = nullptr;
    KCategorizedView_MouseReleaseEvent_Callback kcategorizedview_mousereleaseevent_callback = nullptr;
    KCategorizedView_LeaveEvent_Callback kcategorizedview_leaveevent_callback = nullptr;
    KCategorizedView_StartDrag_Callback kcategorizedview_startdrag_callback = nullptr;
    KCategorizedView_DragMoveEvent_Callback kcategorizedview_dragmoveevent_callback = nullptr;
    KCategorizedView_DragEnterEvent_Callback kcategorizedview_dragenterevent_callback = nullptr;
    KCategorizedView_DragLeaveEvent_Callback kcategorizedview_dragleaveevent_callback = nullptr;
    KCategorizedView_DropEvent_Callback kcategorizedview_dropevent_callback = nullptr;
    KCategorizedView_MoveCursor_Callback kcategorizedview_movecursor_callback = nullptr;
    KCategorizedView_RowsAboutToBeRemoved_Callback kcategorizedview_rowsabouttoberemoved_callback = nullptr;
    KCategorizedView_UpdateGeometries_Callback kcategorizedview_updategeometries_callback = nullptr;
    KCategorizedView_CurrentChanged_Callback kcategorizedview_currentchanged_callback = nullptr;
    KCategorizedView_DataChanged_Callback kcategorizedview_datachanged_callback = nullptr;
    KCategorizedView_RowsInserted_Callback kcategorizedview_rowsinserted_callback = nullptr;
    KCategorizedView_SlotLayoutChanged_Callback kcategorizedview_slotlayoutchanged_callback = nullptr;
    KCategorizedView_ScrollTo_Callback kcategorizedview_scrollto_callback = nullptr;
    KCategorizedView_DoItemsLayout_Callback kcategorizedview_doitemslayout_callback = nullptr;
    KCategorizedView_SetRootIndex_Callback kcategorizedview_setrootindex_callback = nullptr;
    KCategorizedView_Event_Callback kcategorizedview_event_callback = nullptr;
    KCategorizedView_ScrollContentsBy_Callback kcategorizedview_scrollcontentsby_callback = nullptr;
    KCategorizedView_WheelEvent_Callback kcategorizedview_wheelevent_callback = nullptr;
    KCategorizedView_TimerEvent_Callback kcategorizedview_timerevent_callback = nullptr;
    KCategorizedView_InitViewItemOption_Callback kcategorizedview_initviewitemoption_callback = nullptr;
    KCategorizedView_HorizontalOffset_Callback kcategorizedview_horizontaloffset_callback = nullptr;
    KCategorizedView_VerticalOffset_Callback kcategorizedview_verticaloffset_callback = nullptr;
    KCategorizedView_VisualRegionForSelection_Callback kcategorizedview_visualregionforselection_callback = nullptr;
    KCategorizedView_SelectedIndexes_Callback kcategorizedview_selectedindexes_callback = nullptr;
    KCategorizedView_IsIndexHidden_Callback kcategorizedview_isindexhidden_callback = nullptr;
    KCategorizedView_SelectionChanged_Callback kcategorizedview_selectionchanged_callback = nullptr;
    KCategorizedView_ViewportSizeHint_Callback kcategorizedview_viewportsizehint_callback = nullptr;
    KCategorizedView_SetSelectionModel_Callback kcategorizedview_setselectionmodel_callback = nullptr;
    KCategorizedView_KeyboardSearch_Callback kcategorizedview_keyboardsearch_callback = nullptr;
    KCategorizedView_SizeHintForRow_Callback kcategorizedview_sizehintforrow_callback = nullptr;
    KCategorizedView_SizeHintForColumn_Callback kcategorizedview_sizehintforcolumn_callback = nullptr;
    KCategorizedView_ItemDelegateForIndex_Callback kcategorizedview_itemdelegateforindex_callback = nullptr;
    KCategorizedView_InputMethodQuery_Callback kcategorizedview_inputmethodquery_callback = nullptr;
    KCategorizedView_SelectAll_Callback kcategorizedview_selectall_callback = nullptr;
    KCategorizedView_UpdateEditorData_Callback kcategorizedview_updateeditordata_callback = nullptr;
    KCategorizedView_UpdateEditorGeometries_Callback kcategorizedview_updateeditorgeometries_callback = nullptr;
    KCategorizedView_VerticalScrollbarAction_Callback kcategorizedview_verticalscrollbaraction_callback = nullptr;
    KCategorizedView_HorizontalScrollbarAction_Callback kcategorizedview_horizontalscrollbaraction_callback = nullptr;
    KCategorizedView_VerticalScrollbarValueChanged_Callback kcategorizedview_verticalscrollbarvaluechanged_callback = nullptr;
    KCategorizedView_HorizontalScrollbarValueChanged_Callback kcategorizedview_horizontalscrollbarvaluechanged_callback = nullptr;
    KCategorizedView_CloseEditor_Callback kcategorizedview_closeeditor_callback = nullptr;
    KCategorizedView_CommitData_Callback kcategorizedview_commitdata_callback = nullptr;
    KCategorizedView_EditorDestroyed_Callback kcategorizedview_editordestroyed_callback = nullptr;
    KCategorizedView_Edit2_Callback kcategorizedview_edit2_callback = nullptr;
    KCategorizedView_SelectionCommand_Callback kcategorizedview_selectioncommand_callback = nullptr;
    KCategorizedView_FocusNextPrevChild_Callback kcategorizedview_focusnextprevchild_callback = nullptr;
    KCategorizedView_ViewportEvent_Callback kcategorizedview_viewportevent_callback = nullptr;
    KCategorizedView_MouseDoubleClickEvent_Callback kcategorizedview_mousedoubleclickevent_callback = nullptr;
    KCategorizedView_FocusInEvent_Callback kcategorizedview_focusinevent_callback = nullptr;
    KCategorizedView_FocusOutEvent_Callback kcategorizedview_focusoutevent_callback = nullptr;
    KCategorizedView_KeyPressEvent_Callback kcategorizedview_keypressevent_callback = nullptr;
    KCategorizedView_InputMethodEvent_Callback kcategorizedview_inputmethodevent_callback = nullptr;
    KCategorizedView_EventFilter_Callback kcategorizedview_eventfilter_callback = nullptr;
    KCategorizedView_MinimumSizeHint_Callback kcategorizedview_minimumsizehint_callback = nullptr;
    KCategorizedView_SizeHint_Callback kcategorizedview_sizehint_callback = nullptr;
    KCategorizedView_SetupViewport_Callback kcategorizedview_setupviewport_callback = nullptr;
    KCategorizedView_ContextMenuEvent_Callback kcategorizedview_contextmenuevent_callback = nullptr;
    KCategorizedView_ChangeEvent_Callback kcategorizedview_changeevent_callback = nullptr;
    KCategorizedView_InitStyleOption_Callback kcategorizedview_initstyleoption_callback = nullptr;
    KCategorizedView_DevType_Callback kcategorizedview_devtype_callback = nullptr;
    KCategorizedView_SetVisible_Callback kcategorizedview_setvisible_callback = nullptr;
    KCategorizedView_HeightForWidth_Callback kcategorizedview_heightforwidth_callback = nullptr;
    KCategorizedView_HasHeightForWidth_Callback kcategorizedview_hasheightforwidth_callback = nullptr;
    KCategorizedView_PaintEngine_Callback kcategorizedview_paintengine_callback = nullptr;
    KCategorizedView_KeyReleaseEvent_Callback kcategorizedview_keyreleaseevent_callback = nullptr;
    KCategorizedView_EnterEvent_Callback kcategorizedview_enterevent_callback = nullptr;
    KCategorizedView_MoveEvent_Callback kcategorizedview_moveevent_callback = nullptr;
    KCategorizedView_CloseEvent_Callback kcategorizedview_closeevent_callback = nullptr;
    KCategorizedView_TabletEvent_Callback kcategorizedview_tabletevent_callback = nullptr;
    KCategorizedView_ActionEvent_Callback kcategorizedview_actionevent_callback = nullptr;
    KCategorizedView_ShowEvent_Callback kcategorizedview_showevent_callback = nullptr;
    KCategorizedView_HideEvent_Callback kcategorizedview_hideevent_callback = nullptr;
    KCategorizedView_NativeEvent_Callback kcategorizedview_nativeevent_callback = nullptr;
    KCategorizedView_Metric_Callback kcategorizedview_metric_callback = nullptr;
    KCategorizedView_InitPainter_Callback kcategorizedview_initpainter_callback = nullptr;
    KCategorizedView_Redirected_Callback kcategorizedview_redirected_callback = nullptr;
    KCategorizedView_SharedPainter_Callback kcategorizedview_sharedpainter_callback = nullptr;
    KCategorizedView_ChildEvent_Callback kcategorizedview_childevent_callback = nullptr;
    KCategorizedView_CustomEvent_Callback kcategorizedview_customevent_callback = nullptr;
    KCategorizedView_ConnectNotify_Callback kcategorizedview_connectnotify_callback = nullptr;
    KCategorizedView_DisconnectNotify_Callback kcategorizedview_disconnectnotify_callback = nullptr;
    KCategorizedView_ResizeContents_Callback kcategorizedview_resizecontents_callback = nullptr;
    KCategorizedView_ContentsSize_Callback kcategorizedview_contentssize_callback = nullptr;
    KCategorizedView_RectForIndex_Callback kcategorizedview_rectforindex_callback = nullptr;
    KCategorizedView_SetPositionForIndex_Callback kcategorizedview_setpositionforindex_callback = nullptr;
    KCategorizedView_State_Callback kcategorizedview_state_callback = nullptr;
    KCategorizedView_SetState_Callback kcategorizedview_setstate_callback = nullptr;
    KCategorizedView_ScheduleDelayedItemsLayout_Callback kcategorizedview_scheduledelayeditemslayout_callback = nullptr;
    KCategorizedView_ExecuteDelayedItemsLayout_Callback kcategorizedview_executedelayeditemslayout_callback = nullptr;
    KCategorizedView_SetDirtyRegion_Callback kcategorizedview_setdirtyregion_callback = nullptr;
    KCategorizedView_ScrollDirtyRegion_Callback kcategorizedview_scrolldirtyregion_callback = nullptr;
    KCategorizedView_DirtyRegionOffset_Callback kcategorizedview_dirtyregionoffset_callback = nullptr;
    KCategorizedView_StartAutoScroll_Callback kcategorizedview_startautoscroll_callback = nullptr;
    KCategorizedView_StopAutoScroll_Callback kcategorizedview_stopautoscroll_callback = nullptr;
    KCategorizedView_DoAutoScroll_Callback kcategorizedview_doautoscroll_callback = nullptr;
    KCategorizedView_DropIndicatorPosition_Callback kcategorizedview_dropindicatorposition_callback = nullptr;
    KCategorizedView_SetViewportMargins_Callback kcategorizedview_setviewportmargins_callback = nullptr;
    KCategorizedView_ViewportMargins_Callback kcategorizedview_viewportmargins_callback = nullptr;
    KCategorizedView_DrawFrame_Callback kcategorizedview_drawframe_callback = nullptr;
    KCategorizedView_UpdateMicroFocus_Callback kcategorizedview_updatemicrofocus_callback = nullptr;
    KCategorizedView_Create_Callback kcategorizedview_create_callback = nullptr;
    KCategorizedView_Destroy_Callback kcategorizedview_destroy_callback = nullptr;
    KCategorizedView_FocusNextChild_Callback kcategorizedview_focusnextchild_callback = nullptr;
    KCategorizedView_FocusPreviousChild_Callback kcategorizedview_focuspreviouschild_callback = nullptr;
    KCategorizedView_Sender_Callback kcategorizedview_sender_callback = nullptr;
    KCategorizedView_SenderSignalIndex_Callback kcategorizedview_sendersignalindex_callback = nullptr;
    KCategorizedView_Receivers_Callback kcategorizedview_receivers_callback = nullptr;
    KCategorizedView_IsSignalConnected_Callback kcategorizedview_issignalconnected_callback = nullptr;
    KCategorizedView_GetDecodedMetricF_Callback kcategorizedview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcategorizedview_metacall_isbase = false;
    mutable bool kcategorizedview_setmodel_isbase = false;
    mutable bool kcategorizedview_visualrect_isbase = false;
    mutable bool kcategorizedview_indexat_isbase = false;
    mutable bool kcategorizedview_reset_isbase = false;
    mutable bool kcategorizedview_paintevent_isbase = false;
    mutable bool kcategorizedview_resizeevent_isbase = false;
    mutable bool kcategorizedview_setselection_isbase = false;
    mutable bool kcategorizedview_mousemoveevent_isbase = false;
    mutable bool kcategorizedview_mousepressevent_isbase = false;
    mutable bool kcategorizedview_mousereleaseevent_isbase = false;
    mutable bool kcategorizedview_leaveevent_isbase = false;
    mutable bool kcategorizedview_startdrag_isbase = false;
    mutable bool kcategorizedview_dragmoveevent_isbase = false;
    mutable bool kcategorizedview_dragenterevent_isbase = false;
    mutable bool kcategorizedview_dragleaveevent_isbase = false;
    mutable bool kcategorizedview_dropevent_isbase = false;
    mutable bool kcategorizedview_movecursor_isbase = false;
    mutable bool kcategorizedview_rowsabouttoberemoved_isbase = false;
    mutable bool kcategorizedview_updategeometries_isbase = false;
    mutable bool kcategorizedview_currentchanged_isbase = false;
    mutable bool kcategorizedview_datachanged_isbase = false;
    mutable bool kcategorizedview_rowsinserted_isbase = false;
    mutable bool kcategorizedview_slotlayoutchanged_isbase = false;
    mutable bool kcategorizedview_scrollto_isbase = false;
    mutable bool kcategorizedview_doitemslayout_isbase = false;
    mutable bool kcategorizedview_setrootindex_isbase = false;
    mutable bool kcategorizedview_event_isbase = false;
    mutable bool kcategorizedview_scrollcontentsby_isbase = false;
    mutable bool kcategorizedview_wheelevent_isbase = false;
    mutable bool kcategorizedview_timerevent_isbase = false;
    mutable bool kcategorizedview_initviewitemoption_isbase = false;
    mutable bool kcategorizedview_horizontaloffset_isbase = false;
    mutable bool kcategorizedview_verticaloffset_isbase = false;
    mutable bool kcategorizedview_visualregionforselection_isbase = false;
    mutable bool kcategorizedview_selectedindexes_isbase = false;
    mutable bool kcategorizedview_isindexhidden_isbase = false;
    mutable bool kcategorizedview_selectionchanged_isbase = false;
    mutable bool kcategorizedview_viewportsizehint_isbase = false;
    mutable bool kcategorizedview_setselectionmodel_isbase = false;
    mutable bool kcategorizedview_keyboardsearch_isbase = false;
    mutable bool kcategorizedview_sizehintforrow_isbase = false;
    mutable bool kcategorizedview_sizehintforcolumn_isbase = false;
    mutable bool kcategorizedview_itemdelegateforindex_isbase = false;
    mutable bool kcategorizedview_inputmethodquery_isbase = false;
    mutable bool kcategorizedview_selectall_isbase = false;
    mutable bool kcategorizedview_updateeditordata_isbase = false;
    mutable bool kcategorizedview_updateeditorgeometries_isbase = false;
    mutable bool kcategorizedview_verticalscrollbaraction_isbase = false;
    mutable bool kcategorizedview_horizontalscrollbaraction_isbase = false;
    mutable bool kcategorizedview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool kcategorizedview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool kcategorizedview_closeeditor_isbase = false;
    mutable bool kcategorizedview_commitdata_isbase = false;
    mutable bool kcategorizedview_editordestroyed_isbase = false;
    mutable bool kcategorizedview_edit2_isbase = false;
    mutable bool kcategorizedview_selectioncommand_isbase = false;
    mutable bool kcategorizedview_focusnextprevchild_isbase = false;
    mutable bool kcategorizedview_viewportevent_isbase = false;
    mutable bool kcategorizedview_mousedoubleclickevent_isbase = false;
    mutable bool kcategorizedview_focusinevent_isbase = false;
    mutable bool kcategorizedview_focusoutevent_isbase = false;
    mutable bool kcategorizedview_keypressevent_isbase = false;
    mutable bool kcategorizedview_inputmethodevent_isbase = false;
    mutable bool kcategorizedview_eventfilter_isbase = false;
    mutable bool kcategorizedview_minimumsizehint_isbase = false;
    mutable bool kcategorizedview_sizehint_isbase = false;
    mutable bool kcategorizedview_setupviewport_isbase = false;
    mutable bool kcategorizedview_contextmenuevent_isbase = false;
    mutable bool kcategorizedview_changeevent_isbase = false;
    mutable bool kcategorizedview_initstyleoption_isbase = false;
    mutable bool kcategorizedview_devtype_isbase = false;
    mutable bool kcategorizedview_setvisible_isbase = false;
    mutable bool kcategorizedview_heightforwidth_isbase = false;
    mutable bool kcategorizedview_hasheightforwidth_isbase = false;
    mutable bool kcategorizedview_paintengine_isbase = false;
    mutable bool kcategorizedview_keyreleaseevent_isbase = false;
    mutable bool kcategorizedview_enterevent_isbase = false;
    mutable bool kcategorizedview_moveevent_isbase = false;
    mutable bool kcategorizedview_closeevent_isbase = false;
    mutable bool kcategorizedview_tabletevent_isbase = false;
    mutable bool kcategorizedview_actionevent_isbase = false;
    mutable bool kcategorizedview_showevent_isbase = false;
    mutable bool kcategorizedview_hideevent_isbase = false;
    mutable bool kcategorizedview_nativeevent_isbase = false;
    mutable bool kcategorizedview_metric_isbase = false;
    mutable bool kcategorizedview_initpainter_isbase = false;
    mutable bool kcategorizedview_redirected_isbase = false;
    mutable bool kcategorizedview_sharedpainter_isbase = false;
    mutable bool kcategorizedview_childevent_isbase = false;
    mutable bool kcategorizedview_customevent_isbase = false;
    mutable bool kcategorizedview_connectnotify_isbase = false;
    mutable bool kcategorizedview_disconnectnotify_isbase = false;
    mutable bool kcategorizedview_resizecontents_isbase = false;
    mutable bool kcategorizedview_contentssize_isbase = false;
    mutable bool kcategorizedview_rectforindex_isbase = false;
    mutable bool kcategorizedview_setpositionforindex_isbase = false;
    mutable bool kcategorizedview_state_isbase = false;
    mutable bool kcategorizedview_setstate_isbase = false;
    mutable bool kcategorizedview_scheduledelayeditemslayout_isbase = false;
    mutable bool kcategorizedview_executedelayeditemslayout_isbase = false;
    mutable bool kcategorizedview_setdirtyregion_isbase = false;
    mutable bool kcategorizedview_scrolldirtyregion_isbase = false;
    mutable bool kcategorizedview_dirtyregionoffset_isbase = false;
    mutable bool kcategorizedview_startautoscroll_isbase = false;
    mutable bool kcategorizedview_stopautoscroll_isbase = false;
    mutable bool kcategorizedview_doautoscroll_isbase = false;
    mutable bool kcategorizedview_dropindicatorposition_isbase = false;
    mutable bool kcategorizedview_setviewportmargins_isbase = false;
    mutable bool kcategorizedview_viewportmargins_isbase = false;
    mutable bool kcategorizedview_drawframe_isbase = false;
    mutable bool kcategorizedview_updatemicrofocus_isbase = false;
    mutable bool kcategorizedview_create_isbase = false;
    mutable bool kcategorizedview_destroy_isbase = false;
    mutable bool kcategorizedview_focusnextchild_isbase = false;
    mutable bool kcategorizedview_focuspreviouschild_isbase = false;
    mutable bool kcategorizedview_sender_isbase = false;
    mutable bool kcategorizedview_sendersignalindex_isbase = false;
    mutable bool kcategorizedview_receivers_isbase = false;
    mutable bool kcategorizedview_issignalconnected_isbase = false;
    mutable bool kcategorizedview_getdecodedmetricf_isbase = false;

  public:
    VirtualKCategorizedView(QWidget* parent) : KCategorizedView(parent) {};
    VirtualKCategorizedView() : KCategorizedView() {};

    ~VirtualKCategorizedView() {
        kcategorizedview_metacall_callback = nullptr;
        kcategorizedview_setmodel_callback = nullptr;
        kcategorizedview_visualrect_callback = nullptr;
        kcategorizedview_indexat_callback = nullptr;
        kcategorizedview_reset_callback = nullptr;
        kcategorizedview_paintevent_callback = nullptr;
        kcategorizedview_resizeevent_callback = nullptr;
        kcategorizedview_setselection_callback = nullptr;
        kcategorizedview_mousemoveevent_callback = nullptr;
        kcategorizedview_mousepressevent_callback = nullptr;
        kcategorizedview_mousereleaseevent_callback = nullptr;
        kcategorizedview_leaveevent_callback = nullptr;
        kcategorizedview_startdrag_callback = nullptr;
        kcategorizedview_dragmoveevent_callback = nullptr;
        kcategorizedview_dragenterevent_callback = nullptr;
        kcategorizedview_dragleaveevent_callback = nullptr;
        kcategorizedview_dropevent_callback = nullptr;
        kcategorizedview_movecursor_callback = nullptr;
        kcategorizedview_rowsabouttoberemoved_callback = nullptr;
        kcategorizedview_updategeometries_callback = nullptr;
        kcategorizedview_currentchanged_callback = nullptr;
        kcategorizedview_datachanged_callback = nullptr;
        kcategorizedview_rowsinserted_callback = nullptr;
        kcategorizedview_slotlayoutchanged_callback = nullptr;
        kcategorizedview_scrollto_callback = nullptr;
        kcategorizedview_doitemslayout_callback = nullptr;
        kcategorizedview_setrootindex_callback = nullptr;
        kcategorizedview_event_callback = nullptr;
        kcategorizedview_scrollcontentsby_callback = nullptr;
        kcategorizedview_wheelevent_callback = nullptr;
        kcategorizedview_timerevent_callback = nullptr;
        kcategorizedview_initviewitemoption_callback = nullptr;
        kcategorizedview_horizontaloffset_callback = nullptr;
        kcategorizedview_verticaloffset_callback = nullptr;
        kcategorizedview_visualregionforselection_callback = nullptr;
        kcategorizedview_selectedindexes_callback = nullptr;
        kcategorizedview_isindexhidden_callback = nullptr;
        kcategorizedview_selectionchanged_callback = nullptr;
        kcategorizedview_viewportsizehint_callback = nullptr;
        kcategorizedview_setselectionmodel_callback = nullptr;
        kcategorizedview_keyboardsearch_callback = nullptr;
        kcategorizedview_sizehintforrow_callback = nullptr;
        kcategorizedview_sizehintforcolumn_callback = nullptr;
        kcategorizedview_itemdelegateforindex_callback = nullptr;
        kcategorizedview_inputmethodquery_callback = nullptr;
        kcategorizedview_selectall_callback = nullptr;
        kcategorizedview_updateeditordata_callback = nullptr;
        kcategorizedview_updateeditorgeometries_callback = nullptr;
        kcategorizedview_verticalscrollbaraction_callback = nullptr;
        kcategorizedview_horizontalscrollbaraction_callback = nullptr;
        kcategorizedview_verticalscrollbarvaluechanged_callback = nullptr;
        kcategorizedview_horizontalscrollbarvaluechanged_callback = nullptr;
        kcategorizedview_closeeditor_callback = nullptr;
        kcategorizedview_commitdata_callback = nullptr;
        kcategorizedview_editordestroyed_callback = nullptr;
        kcategorizedview_edit2_callback = nullptr;
        kcategorizedview_selectioncommand_callback = nullptr;
        kcategorizedview_focusnextprevchild_callback = nullptr;
        kcategorizedview_viewportevent_callback = nullptr;
        kcategorizedview_mousedoubleclickevent_callback = nullptr;
        kcategorizedview_focusinevent_callback = nullptr;
        kcategorizedview_focusoutevent_callback = nullptr;
        kcategorizedview_keypressevent_callback = nullptr;
        kcategorizedview_inputmethodevent_callback = nullptr;
        kcategorizedview_eventfilter_callback = nullptr;
        kcategorizedview_minimumsizehint_callback = nullptr;
        kcategorizedview_sizehint_callback = nullptr;
        kcategorizedview_setupviewport_callback = nullptr;
        kcategorizedview_contextmenuevent_callback = nullptr;
        kcategorizedview_changeevent_callback = nullptr;
        kcategorizedview_initstyleoption_callback = nullptr;
        kcategorizedview_devtype_callback = nullptr;
        kcategorizedview_setvisible_callback = nullptr;
        kcategorizedview_heightforwidth_callback = nullptr;
        kcategorizedview_hasheightforwidth_callback = nullptr;
        kcategorizedview_paintengine_callback = nullptr;
        kcategorizedview_keyreleaseevent_callback = nullptr;
        kcategorizedview_enterevent_callback = nullptr;
        kcategorizedview_moveevent_callback = nullptr;
        kcategorizedview_closeevent_callback = nullptr;
        kcategorizedview_tabletevent_callback = nullptr;
        kcategorizedview_actionevent_callback = nullptr;
        kcategorizedview_showevent_callback = nullptr;
        kcategorizedview_hideevent_callback = nullptr;
        kcategorizedview_nativeevent_callback = nullptr;
        kcategorizedview_metric_callback = nullptr;
        kcategorizedview_initpainter_callback = nullptr;
        kcategorizedview_redirected_callback = nullptr;
        kcategorizedview_sharedpainter_callback = nullptr;
        kcategorizedview_childevent_callback = nullptr;
        kcategorizedview_customevent_callback = nullptr;
        kcategorizedview_connectnotify_callback = nullptr;
        kcategorizedview_disconnectnotify_callback = nullptr;
        kcategorizedview_resizecontents_callback = nullptr;
        kcategorizedview_contentssize_callback = nullptr;
        kcategorizedview_rectforindex_callback = nullptr;
        kcategorizedview_setpositionforindex_callback = nullptr;
        kcategorizedview_state_callback = nullptr;
        kcategorizedview_setstate_callback = nullptr;
        kcategorizedview_scheduledelayeditemslayout_callback = nullptr;
        kcategorizedview_executedelayeditemslayout_callback = nullptr;
        kcategorizedview_setdirtyregion_callback = nullptr;
        kcategorizedview_scrolldirtyregion_callback = nullptr;
        kcategorizedview_dirtyregionoffset_callback = nullptr;
        kcategorizedview_startautoscroll_callback = nullptr;
        kcategorizedview_stopautoscroll_callback = nullptr;
        kcategorizedview_doautoscroll_callback = nullptr;
        kcategorizedview_dropindicatorposition_callback = nullptr;
        kcategorizedview_setviewportmargins_callback = nullptr;
        kcategorizedview_viewportmargins_callback = nullptr;
        kcategorizedview_drawframe_callback = nullptr;
        kcategorizedview_updatemicrofocus_callback = nullptr;
        kcategorizedview_create_callback = nullptr;
        kcategorizedview_destroy_callback = nullptr;
        kcategorizedview_focusnextchild_callback = nullptr;
        kcategorizedview_focuspreviouschild_callback = nullptr;
        kcategorizedview_sender_callback = nullptr;
        kcategorizedview_sendersignalindex_callback = nullptr;
        kcategorizedview_receivers_callback = nullptr;
        kcategorizedview_issignalconnected_callback = nullptr;
        kcategorizedview_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKCategorizedView_Metacall_Callback(KCategorizedView_Metacall_Callback cb) { kcategorizedview_metacall_callback = cb; }
    inline void setKCategorizedView_SetModel_Callback(KCategorizedView_SetModel_Callback cb) { kcategorizedview_setmodel_callback = cb; }
    inline void setKCategorizedView_VisualRect_Callback(KCategorizedView_VisualRect_Callback cb) { kcategorizedview_visualrect_callback = cb; }
    inline void setKCategorizedView_IndexAt_Callback(KCategorizedView_IndexAt_Callback cb) { kcategorizedview_indexat_callback = cb; }
    inline void setKCategorizedView_Reset_Callback(KCategorizedView_Reset_Callback cb) { kcategorizedview_reset_callback = cb; }
    inline void setKCategorizedView_PaintEvent_Callback(KCategorizedView_PaintEvent_Callback cb) { kcategorizedview_paintevent_callback = cb; }
    inline void setKCategorizedView_ResizeEvent_Callback(KCategorizedView_ResizeEvent_Callback cb) { kcategorizedview_resizeevent_callback = cb; }
    inline void setKCategorizedView_SetSelection_Callback(KCategorizedView_SetSelection_Callback cb) { kcategorizedview_setselection_callback = cb; }
    inline void setKCategorizedView_MouseMoveEvent_Callback(KCategorizedView_MouseMoveEvent_Callback cb) { kcategorizedview_mousemoveevent_callback = cb; }
    inline void setKCategorizedView_MousePressEvent_Callback(KCategorizedView_MousePressEvent_Callback cb) { kcategorizedview_mousepressevent_callback = cb; }
    inline void setKCategorizedView_MouseReleaseEvent_Callback(KCategorizedView_MouseReleaseEvent_Callback cb) { kcategorizedview_mousereleaseevent_callback = cb; }
    inline void setKCategorizedView_LeaveEvent_Callback(KCategorizedView_LeaveEvent_Callback cb) { kcategorizedview_leaveevent_callback = cb; }
    inline void setKCategorizedView_StartDrag_Callback(KCategorizedView_StartDrag_Callback cb) { kcategorizedview_startdrag_callback = cb; }
    inline void setKCategorizedView_DragMoveEvent_Callback(KCategorizedView_DragMoveEvent_Callback cb) { kcategorizedview_dragmoveevent_callback = cb; }
    inline void setKCategorizedView_DragEnterEvent_Callback(KCategorizedView_DragEnterEvent_Callback cb) { kcategorizedview_dragenterevent_callback = cb; }
    inline void setKCategorizedView_DragLeaveEvent_Callback(KCategorizedView_DragLeaveEvent_Callback cb) { kcategorizedview_dragleaveevent_callback = cb; }
    inline void setKCategorizedView_DropEvent_Callback(KCategorizedView_DropEvent_Callback cb) { kcategorizedview_dropevent_callback = cb; }
    inline void setKCategorizedView_MoveCursor_Callback(KCategorizedView_MoveCursor_Callback cb) { kcategorizedview_movecursor_callback = cb; }
    inline void setKCategorizedView_RowsAboutToBeRemoved_Callback(KCategorizedView_RowsAboutToBeRemoved_Callback cb) { kcategorizedview_rowsabouttoberemoved_callback = cb; }
    inline void setKCategorizedView_UpdateGeometries_Callback(KCategorizedView_UpdateGeometries_Callback cb) { kcategorizedview_updategeometries_callback = cb; }
    inline void setKCategorizedView_CurrentChanged_Callback(KCategorizedView_CurrentChanged_Callback cb) { kcategorizedview_currentchanged_callback = cb; }
    inline void setKCategorizedView_DataChanged_Callback(KCategorizedView_DataChanged_Callback cb) { kcategorizedview_datachanged_callback = cb; }
    inline void setKCategorizedView_RowsInserted_Callback(KCategorizedView_RowsInserted_Callback cb) { kcategorizedview_rowsinserted_callback = cb; }
    inline void setKCategorizedView_SlotLayoutChanged_Callback(KCategorizedView_SlotLayoutChanged_Callback cb) { kcategorizedview_slotlayoutchanged_callback = cb; }
    inline void setKCategorizedView_ScrollTo_Callback(KCategorizedView_ScrollTo_Callback cb) { kcategorizedview_scrollto_callback = cb; }
    inline void setKCategorizedView_DoItemsLayout_Callback(KCategorizedView_DoItemsLayout_Callback cb) { kcategorizedview_doitemslayout_callback = cb; }
    inline void setKCategorizedView_SetRootIndex_Callback(KCategorizedView_SetRootIndex_Callback cb) { kcategorizedview_setrootindex_callback = cb; }
    inline void setKCategorizedView_Event_Callback(KCategorizedView_Event_Callback cb) { kcategorizedview_event_callback = cb; }
    inline void setKCategorizedView_ScrollContentsBy_Callback(KCategorizedView_ScrollContentsBy_Callback cb) { kcategorizedview_scrollcontentsby_callback = cb; }
    inline void setKCategorizedView_WheelEvent_Callback(KCategorizedView_WheelEvent_Callback cb) { kcategorizedview_wheelevent_callback = cb; }
    inline void setKCategorizedView_TimerEvent_Callback(KCategorizedView_TimerEvent_Callback cb) { kcategorizedview_timerevent_callback = cb; }
    inline void setKCategorizedView_InitViewItemOption_Callback(KCategorizedView_InitViewItemOption_Callback cb) { kcategorizedview_initviewitemoption_callback = cb; }
    inline void setKCategorizedView_HorizontalOffset_Callback(KCategorizedView_HorizontalOffset_Callback cb) { kcategorizedview_horizontaloffset_callback = cb; }
    inline void setKCategorizedView_VerticalOffset_Callback(KCategorizedView_VerticalOffset_Callback cb) { kcategorizedview_verticaloffset_callback = cb; }
    inline void setKCategorizedView_VisualRegionForSelection_Callback(KCategorizedView_VisualRegionForSelection_Callback cb) { kcategorizedview_visualregionforselection_callback = cb; }
    inline void setKCategorizedView_SelectedIndexes_Callback(KCategorizedView_SelectedIndexes_Callback cb) { kcategorizedview_selectedindexes_callback = cb; }
    inline void setKCategorizedView_IsIndexHidden_Callback(KCategorizedView_IsIndexHidden_Callback cb) { kcategorizedview_isindexhidden_callback = cb; }
    inline void setKCategorizedView_SelectionChanged_Callback(KCategorizedView_SelectionChanged_Callback cb) { kcategorizedview_selectionchanged_callback = cb; }
    inline void setKCategorizedView_ViewportSizeHint_Callback(KCategorizedView_ViewportSizeHint_Callback cb) { kcategorizedview_viewportsizehint_callback = cb; }
    inline void setKCategorizedView_SetSelectionModel_Callback(KCategorizedView_SetSelectionModel_Callback cb) { kcategorizedview_setselectionmodel_callback = cb; }
    inline void setKCategorizedView_KeyboardSearch_Callback(KCategorizedView_KeyboardSearch_Callback cb) { kcategorizedview_keyboardsearch_callback = cb; }
    inline void setKCategorizedView_SizeHintForRow_Callback(KCategorizedView_SizeHintForRow_Callback cb) { kcategorizedview_sizehintforrow_callback = cb; }
    inline void setKCategorizedView_SizeHintForColumn_Callback(KCategorizedView_SizeHintForColumn_Callback cb) { kcategorizedview_sizehintforcolumn_callback = cb; }
    inline void setKCategorizedView_ItemDelegateForIndex_Callback(KCategorizedView_ItemDelegateForIndex_Callback cb) { kcategorizedview_itemdelegateforindex_callback = cb; }
    inline void setKCategorizedView_InputMethodQuery_Callback(KCategorizedView_InputMethodQuery_Callback cb) { kcategorizedview_inputmethodquery_callback = cb; }
    inline void setKCategorizedView_SelectAll_Callback(KCategorizedView_SelectAll_Callback cb) { kcategorizedview_selectall_callback = cb; }
    inline void setKCategorizedView_UpdateEditorData_Callback(KCategorizedView_UpdateEditorData_Callback cb) { kcategorizedview_updateeditordata_callback = cb; }
    inline void setKCategorizedView_UpdateEditorGeometries_Callback(KCategorizedView_UpdateEditorGeometries_Callback cb) { kcategorizedview_updateeditorgeometries_callback = cb; }
    inline void setKCategorizedView_VerticalScrollbarAction_Callback(KCategorizedView_VerticalScrollbarAction_Callback cb) { kcategorizedview_verticalscrollbaraction_callback = cb; }
    inline void setKCategorizedView_HorizontalScrollbarAction_Callback(KCategorizedView_HorizontalScrollbarAction_Callback cb) { kcategorizedview_horizontalscrollbaraction_callback = cb; }
    inline void setKCategorizedView_VerticalScrollbarValueChanged_Callback(KCategorizedView_VerticalScrollbarValueChanged_Callback cb) { kcategorizedview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setKCategorizedView_HorizontalScrollbarValueChanged_Callback(KCategorizedView_HorizontalScrollbarValueChanged_Callback cb) { kcategorizedview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setKCategorizedView_CloseEditor_Callback(KCategorizedView_CloseEditor_Callback cb) { kcategorizedview_closeeditor_callback = cb; }
    inline void setKCategorizedView_CommitData_Callback(KCategorizedView_CommitData_Callback cb) { kcategorizedview_commitdata_callback = cb; }
    inline void setKCategorizedView_EditorDestroyed_Callback(KCategorizedView_EditorDestroyed_Callback cb) { kcategorizedview_editordestroyed_callback = cb; }
    inline void setKCategorizedView_Edit2_Callback(KCategorizedView_Edit2_Callback cb) { kcategorizedview_edit2_callback = cb; }
    inline void setKCategorizedView_SelectionCommand_Callback(KCategorizedView_SelectionCommand_Callback cb) { kcategorizedview_selectioncommand_callback = cb; }
    inline void setKCategorizedView_FocusNextPrevChild_Callback(KCategorizedView_FocusNextPrevChild_Callback cb) { kcategorizedview_focusnextprevchild_callback = cb; }
    inline void setKCategorizedView_ViewportEvent_Callback(KCategorizedView_ViewportEvent_Callback cb) { kcategorizedview_viewportevent_callback = cb; }
    inline void setKCategorizedView_MouseDoubleClickEvent_Callback(KCategorizedView_MouseDoubleClickEvent_Callback cb) { kcategorizedview_mousedoubleclickevent_callback = cb; }
    inline void setKCategorizedView_FocusInEvent_Callback(KCategorizedView_FocusInEvent_Callback cb) { kcategorizedview_focusinevent_callback = cb; }
    inline void setKCategorizedView_FocusOutEvent_Callback(KCategorizedView_FocusOutEvent_Callback cb) { kcategorizedview_focusoutevent_callback = cb; }
    inline void setKCategorizedView_KeyPressEvent_Callback(KCategorizedView_KeyPressEvent_Callback cb) { kcategorizedview_keypressevent_callback = cb; }
    inline void setKCategorizedView_InputMethodEvent_Callback(KCategorizedView_InputMethodEvent_Callback cb) { kcategorizedview_inputmethodevent_callback = cb; }
    inline void setKCategorizedView_EventFilter_Callback(KCategorizedView_EventFilter_Callback cb) { kcategorizedview_eventfilter_callback = cb; }
    inline void setKCategorizedView_MinimumSizeHint_Callback(KCategorizedView_MinimumSizeHint_Callback cb) { kcategorizedview_minimumsizehint_callback = cb; }
    inline void setKCategorizedView_SizeHint_Callback(KCategorizedView_SizeHint_Callback cb) { kcategorizedview_sizehint_callback = cb; }
    inline void setKCategorizedView_SetupViewport_Callback(KCategorizedView_SetupViewport_Callback cb) { kcategorizedview_setupviewport_callback = cb; }
    inline void setKCategorizedView_ContextMenuEvent_Callback(KCategorizedView_ContextMenuEvent_Callback cb) { kcategorizedview_contextmenuevent_callback = cb; }
    inline void setKCategorizedView_ChangeEvent_Callback(KCategorizedView_ChangeEvent_Callback cb) { kcategorizedview_changeevent_callback = cb; }
    inline void setKCategorizedView_InitStyleOption_Callback(KCategorizedView_InitStyleOption_Callback cb) { kcategorizedview_initstyleoption_callback = cb; }
    inline void setKCategorizedView_DevType_Callback(KCategorizedView_DevType_Callback cb) { kcategorizedview_devtype_callback = cb; }
    inline void setKCategorizedView_SetVisible_Callback(KCategorizedView_SetVisible_Callback cb) { kcategorizedview_setvisible_callback = cb; }
    inline void setKCategorizedView_HeightForWidth_Callback(KCategorizedView_HeightForWidth_Callback cb) { kcategorizedview_heightforwidth_callback = cb; }
    inline void setKCategorizedView_HasHeightForWidth_Callback(KCategorizedView_HasHeightForWidth_Callback cb) { kcategorizedview_hasheightforwidth_callback = cb; }
    inline void setKCategorizedView_PaintEngine_Callback(KCategorizedView_PaintEngine_Callback cb) { kcategorizedview_paintengine_callback = cb; }
    inline void setKCategorizedView_KeyReleaseEvent_Callback(KCategorizedView_KeyReleaseEvent_Callback cb) { kcategorizedview_keyreleaseevent_callback = cb; }
    inline void setKCategorizedView_EnterEvent_Callback(KCategorizedView_EnterEvent_Callback cb) { kcategorizedview_enterevent_callback = cb; }
    inline void setKCategorizedView_MoveEvent_Callback(KCategorizedView_MoveEvent_Callback cb) { kcategorizedview_moveevent_callback = cb; }
    inline void setKCategorizedView_CloseEvent_Callback(KCategorizedView_CloseEvent_Callback cb) { kcategorizedview_closeevent_callback = cb; }
    inline void setKCategorizedView_TabletEvent_Callback(KCategorizedView_TabletEvent_Callback cb) { kcategorizedview_tabletevent_callback = cb; }
    inline void setKCategorizedView_ActionEvent_Callback(KCategorizedView_ActionEvent_Callback cb) { kcategorizedview_actionevent_callback = cb; }
    inline void setKCategorizedView_ShowEvent_Callback(KCategorizedView_ShowEvent_Callback cb) { kcategorizedview_showevent_callback = cb; }
    inline void setKCategorizedView_HideEvent_Callback(KCategorizedView_HideEvent_Callback cb) { kcategorizedview_hideevent_callback = cb; }
    inline void setKCategorizedView_NativeEvent_Callback(KCategorizedView_NativeEvent_Callback cb) { kcategorizedview_nativeevent_callback = cb; }
    inline void setKCategorizedView_Metric_Callback(KCategorizedView_Metric_Callback cb) { kcategorizedview_metric_callback = cb; }
    inline void setKCategorizedView_InitPainter_Callback(KCategorizedView_InitPainter_Callback cb) { kcategorizedview_initpainter_callback = cb; }
    inline void setKCategorizedView_Redirected_Callback(KCategorizedView_Redirected_Callback cb) { kcategorizedview_redirected_callback = cb; }
    inline void setKCategorizedView_SharedPainter_Callback(KCategorizedView_SharedPainter_Callback cb) { kcategorizedview_sharedpainter_callback = cb; }
    inline void setKCategorizedView_ChildEvent_Callback(KCategorizedView_ChildEvent_Callback cb) { kcategorizedview_childevent_callback = cb; }
    inline void setKCategorizedView_CustomEvent_Callback(KCategorizedView_CustomEvent_Callback cb) { kcategorizedview_customevent_callback = cb; }
    inline void setKCategorizedView_ConnectNotify_Callback(KCategorizedView_ConnectNotify_Callback cb) { kcategorizedview_connectnotify_callback = cb; }
    inline void setKCategorizedView_DisconnectNotify_Callback(KCategorizedView_DisconnectNotify_Callback cb) { kcategorizedview_disconnectnotify_callback = cb; }
    inline void setKCategorizedView_ResizeContents_Callback(KCategorizedView_ResizeContents_Callback cb) { kcategorizedview_resizecontents_callback = cb; }
    inline void setKCategorizedView_ContentsSize_Callback(KCategorizedView_ContentsSize_Callback cb) { kcategorizedview_contentssize_callback = cb; }
    inline void setKCategorizedView_RectForIndex_Callback(KCategorizedView_RectForIndex_Callback cb) { kcategorizedview_rectforindex_callback = cb; }
    inline void setKCategorizedView_SetPositionForIndex_Callback(KCategorizedView_SetPositionForIndex_Callback cb) { kcategorizedview_setpositionforindex_callback = cb; }
    inline void setKCategorizedView_State_Callback(KCategorizedView_State_Callback cb) { kcategorizedview_state_callback = cb; }
    inline void setKCategorizedView_SetState_Callback(KCategorizedView_SetState_Callback cb) { kcategorizedview_setstate_callback = cb; }
    inline void setKCategorizedView_ScheduleDelayedItemsLayout_Callback(KCategorizedView_ScheduleDelayedItemsLayout_Callback cb) { kcategorizedview_scheduledelayeditemslayout_callback = cb; }
    inline void setKCategorizedView_ExecuteDelayedItemsLayout_Callback(KCategorizedView_ExecuteDelayedItemsLayout_Callback cb) { kcategorizedview_executedelayeditemslayout_callback = cb; }
    inline void setKCategorizedView_SetDirtyRegion_Callback(KCategorizedView_SetDirtyRegion_Callback cb) { kcategorizedview_setdirtyregion_callback = cb; }
    inline void setKCategorizedView_ScrollDirtyRegion_Callback(KCategorizedView_ScrollDirtyRegion_Callback cb) { kcategorizedview_scrolldirtyregion_callback = cb; }
    inline void setKCategorizedView_DirtyRegionOffset_Callback(KCategorizedView_DirtyRegionOffset_Callback cb) { kcategorizedview_dirtyregionoffset_callback = cb; }
    inline void setKCategorizedView_StartAutoScroll_Callback(KCategorizedView_StartAutoScroll_Callback cb) { kcategorizedview_startautoscroll_callback = cb; }
    inline void setKCategorizedView_StopAutoScroll_Callback(KCategorizedView_StopAutoScroll_Callback cb) { kcategorizedview_stopautoscroll_callback = cb; }
    inline void setKCategorizedView_DoAutoScroll_Callback(KCategorizedView_DoAutoScroll_Callback cb) { kcategorizedview_doautoscroll_callback = cb; }
    inline void setKCategorizedView_DropIndicatorPosition_Callback(KCategorizedView_DropIndicatorPosition_Callback cb) { kcategorizedview_dropindicatorposition_callback = cb; }
    inline void setKCategorizedView_SetViewportMargins_Callback(KCategorizedView_SetViewportMargins_Callback cb) { kcategorizedview_setviewportmargins_callback = cb; }
    inline void setKCategorizedView_ViewportMargins_Callback(KCategorizedView_ViewportMargins_Callback cb) { kcategorizedview_viewportmargins_callback = cb; }
    inline void setKCategorizedView_DrawFrame_Callback(KCategorizedView_DrawFrame_Callback cb) { kcategorizedview_drawframe_callback = cb; }
    inline void setKCategorizedView_UpdateMicroFocus_Callback(KCategorizedView_UpdateMicroFocus_Callback cb) { kcategorizedview_updatemicrofocus_callback = cb; }
    inline void setKCategorizedView_Create_Callback(KCategorizedView_Create_Callback cb) { kcategorizedview_create_callback = cb; }
    inline void setKCategorizedView_Destroy_Callback(KCategorizedView_Destroy_Callback cb) { kcategorizedview_destroy_callback = cb; }
    inline void setKCategorizedView_FocusNextChild_Callback(KCategorizedView_FocusNextChild_Callback cb) { kcategorizedview_focusnextchild_callback = cb; }
    inline void setKCategorizedView_FocusPreviousChild_Callback(KCategorizedView_FocusPreviousChild_Callback cb) { kcategorizedview_focuspreviouschild_callback = cb; }
    inline void setKCategorizedView_Sender_Callback(KCategorizedView_Sender_Callback cb) { kcategorizedview_sender_callback = cb; }
    inline void setKCategorizedView_SenderSignalIndex_Callback(KCategorizedView_SenderSignalIndex_Callback cb) { kcategorizedview_sendersignalindex_callback = cb; }
    inline void setKCategorizedView_Receivers_Callback(KCategorizedView_Receivers_Callback cb) { kcategorizedview_receivers_callback = cb; }
    inline void setKCategorizedView_IsSignalConnected_Callback(KCategorizedView_IsSignalConnected_Callback cb) { kcategorizedview_issignalconnected_callback = cb; }
    inline void setKCategorizedView_GetDecodedMetricF_Callback(KCategorizedView_GetDecodedMetricF_Callback cb) { kcategorizedview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKCategorizedView_Metacall_IsBase(bool value) const { kcategorizedview_metacall_isbase = value; }
    inline void setKCategorizedView_SetModel_IsBase(bool value) const { kcategorizedview_setmodel_isbase = value; }
    inline void setKCategorizedView_VisualRect_IsBase(bool value) const { kcategorizedview_visualrect_isbase = value; }
    inline void setKCategorizedView_IndexAt_IsBase(bool value) const { kcategorizedview_indexat_isbase = value; }
    inline void setKCategorizedView_Reset_IsBase(bool value) const { kcategorizedview_reset_isbase = value; }
    inline void setKCategorizedView_PaintEvent_IsBase(bool value) const { kcategorizedview_paintevent_isbase = value; }
    inline void setKCategorizedView_ResizeEvent_IsBase(bool value) const { kcategorizedview_resizeevent_isbase = value; }
    inline void setKCategorizedView_SetSelection_IsBase(bool value) const { kcategorizedview_setselection_isbase = value; }
    inline void setKCategorizedView_MouseMoveEvent_IsBase(bool value) const { kcategorizedview_mousemoveevent_isbase = value; }
    inline void setKCategorizedView_MousePressEvent_IsBase(bool value) const { kcategorizedview_mousepressevent_isbase = value; }
    inline void setKCategorizedView_MouseReleaseEvent_IsBase(bool value) const { kcategorizedview_mousereleaseevent_isbase = value; }
    inline void setKCategorizedView_LeaveEvent_IsBase(bool value) const { kcategorizedview_leaveevent_isbase = value; }
    inline void setKCategorizedView_StartDrag_IsBase(bool value) const { kcategorizedview_startdrag_isbase = value; }
    inline void setKCategorizedView_DragMoveEvent_IsBase(bool value) const { kcategorizedview_dragmoveevent_isbase = value; }
    inline void setKCategorizedView_DragEnterEvent_IsBase(bool value) const { kcategorizedview_dragenterevent_isbase = value; }
    inline void setKCategorizedView_DragLeaveEvent_IsBase(bool value) const { kcategorizedview_dragleaveevent_isbase = value; }
    inline void setKCategorizedView_DropEvent_IsBase(bool value) const { kcategorizedview_dropevent_isbase = value; }
    inline void setKCategorizedView_MoveCursor_IsBase(bool value) const { kcategorizedview_movecursor_isbase = value; }
    inline void setKCategorizedView_RowsAboutToBeRemoved_IsBase(bool value) const { kcategorizedview_rowsabouttoberemoved_isbase = value; }
    inline void setKCategorizedView_UpdateGeometries_IsBase(bool value) const { kcategorizedview_updategeometries_isbase = value; }
    inline void setKCategorizedView_CurrentChanged_IsBase(bool value) const { kcategorizedview_currentchanged_isbase = value; }
    inline void setKCategorizedView_DataChanged_IsBase(bool value) const { kcategorizedview_datachanged_isbase = value; }
    inline void setKCategorizedView_RowsInserted_IsBase(bool value) const { kcategorizedview_rowsinserted_isbase = value; }
    inline void setKCategorizedView_SlotLayoutChanged_IsBase(bool value) const { kcategorizedview_slotlayoutchanged_isbase = value; }
    inline void setKCategorizedView_ScrollTo_IsBase(bool value) const { kcategorizedview_scrollto_isbase = value; }
    inline void setKCategorizedView_DoItemsLayout_IsBase(bool value) const { kcategorizedview_doitemslayout_isbase = value; }
    inline void setKCategorizedView_SetRootIndex_IsBase(bool value) const { kcategorizedview_setrootindex_isbase = value; }
    inline void setKCategorizedView_Event_IsBase(bool value) const { kcategorizedview_event_isbase = value; }
    inline void setKCategorizedView_ScrollContentsBy_IsBase(bool value) const { kcategorizedview_scrollcontentsby_isbase = value; }
    inline void setKCategorizedView_WheelEvent_IsBase(bool value) const { kcategorizedview_wheelevent_isbase = value; }
    inline void setKCategorizedView_TimerEvent_IsBase(bool value) const { kcategorizedview_timerevent_isbase = value; }
    inline void setKCategorizedView_InitViewItemOption_IsBase(bool value) const { kcategorizedview_initviewitemoption_isbase = value; }
    inline void setKCategorizedView_HorizontalOffset_IsBase(bool value) const { kcategorizedview_horizontaloffset_isbase = value; }
    inline void setKCategorizedView_VerticalOffset_IsBase(bool value) const { kcategorizedview_verticaloffset_isbase = value; }
    inline void setKCategorizedView_VisualRegionForSelection_IsBase(bool value) const { kcategorizedview_visualregionforselection_isbase = value; }
    inline void setKCategorizedView_SelectedIndexes_IsBase(bool value) const { kcategorizedview_selectedindexes_isbase = value; }
    inline void setKCategorizedView_IsIndexHidden_IsBase(bool value) const { kcategorizedview_isindexhidden_isbase = value; }
    inline void setKCategorizedView_SelectionChanged_IsBase(bool value) const { kcategorizedview_selectionchanged_isbase = value; }
    inline void setKCategorizedView_ViewportSizeHint_IsBase(bool value) const { kcategorizedview_viewportsizehint_isbase = value; }
    inline void setKCategorizedView_SetSelectionModel_IsBase(bool value) const { kcategorizedview_setselectionmodel_isbase = value; }
    inline void setKCategorizedView_KeyboardSearch_IsBase(bool value) const { kcategorizedview_keyboardsearch_isbase = value; }
    inline void setKCategorizedView_SizeHintForRow_IsBase(bool value) const { kcategorizedview_sizehintforrow_isbase = value; }
    inline void setKCategorizedView_SizeHintForColumn_IsBase(bool value) const { kcategorizedview_sizehintforcolumn_isbase = value; }
    inline void setKCategorizedView_ItemDelegateForIndex_IsBase(bool value) const { kcategorizedview_itemdelegateforindex_isbase = value; }
    inline void setKCategorizedView_InputMethodQuery_IsBase(bool value) const { kcategorizedview_inputmethodquery_isbase = value; }
    inline void setKCategorizedView_SelectAll_IsBase(bool value) const { kcategorizedview_selectall_isbase = value; }
    inline void setKCategorizedView_UpdateEditorData_IsBase(bool value) const { kcategorizedview_updateeditordata_isbase = value; }
    inline void setKCategorizedView_UpdateEditorGeometries_IsBase(bool value) const { kcategorizedview_updateeditorgeometries_isbase = value; }
    inline void setKCategorizedView_VerticalScrollbarAction_IsBase(bool value) const { kcategorizedview_verticalscrollbaraction_isbase = value; }
    inline void setKCategorizedView_HorizontalScrollbarAction_IsBase(bool value) const { kcategorizedview_horizontalscrollbaraction_isbase = value; }
    inline void setKCategorizedView_VerticalScrollbarValueChanged_IsBase(bool value) const { kcategorizedview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setKCategorizedView_HorizontalScrollbarValueChanged_IsBase(bool value) const { kcategorizedview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setKCategorizedView_CloseEditor_IsBase(bool value) const { kcategorizedview_closeeditor_isbase = value; }
    inline void setKCategorizedView_CommitData_IsBase(bool value) const { kcategorizedview_commitdata_isbase = value; }
    inline void setKCategorizedView_EditorDestroyed_IsBase(bool value) const { kcategorizedview_editordestroyed_isbase = value; }
    inline void setKCategorizedView_Edit2_IsBase(bool value) const { kcategorizedview_edit2_isbase = value; }
    inline void setKCategorizedView_SelectionCommand_IsBase(bool value) const { kcategorizedview_selectioncommand_isbase = value; }
    inline void setKCategorizedView_FocusNextPrevChild_IsBase(bool value) const { kcategorizedview_focusnextprevchild_isbase = value; }
    inline void setKCategorizedView_ViewportEvent_IsBase(bool value) const { kcategorizedview_viewportevent_isbase = value; }
    inline void setKCategorizedView_MouseDoubleClickEvent_IsBase(bool value) const { kcategorizedview_mousedoubleclickevent_isbase = value; }
    inline void setKCategorizedView_FocusInEvent_IsBase(bool value) const { kcategorizedview_focusinevent_isbase = value; }
    inline void setKCategorizedView_FocusOutEvent_IsBase(bool value) const { kcategorizedview_focusoutevent_isbase = value; }
    inline void setKCategorizedView_KeyPressEvent_IsBase(bool value) const { kcategorizedview_keypressevent_isbase = value; }
    inline void setKCategorizedView_InputMethodEvent_IsBase(bool value) const { kcategorizedview_inputmethodevent_isbase = value; }
    inline void setKCategorizedView_EventFilter_IsBase(bool value) const { kcategorizedview_eventfilter_isbase = value; }
    inline void setKCategorizedView_MinimumSizeHint_IsBase(bool value) const { kcategorizedview_minimumsizehint_isbase = value; }
    inline void setKCategorizedView_SizeHint_IsBase(bool value) const { kcategorizedview_sizehint_isbase = value; }
    inline void setKCategorizedView_SetupViewport_IsBase(bool value) const { kcategorizedview_setupviewport_isbase = value; }
    inline void setKCategorizedView_ContextMenuEvent_IsBase(bool value) const { kcategorizedview_contextmenuevent_isbase = value; }
    inline void setKCategorizedView_ChangeEvent_IsBase(bool value) const { kcategorizedview_changeevent_isbase = value; }
    inline void setKCategorizedView_InitStyleOption_IsBase(bool value) const { kcategorizedview_initstyleoption_isbase = value; }
    inline void setKCategorizedView_DevType_IsBase(bool value) const { kcategorizedview_devtype_isbase = value; }
    inline void setKCategorizedView_SetVisible_IsBase(bool value) const { kcategorizedview_setvisible_isbase = value; }
    inline void setKCategorizedView_HeightForWidth_IsBase(bool value) const { kcategorizedview_heightforwidth_isbase = value; }
    inline void setKCategorizedView_HasHeightForWidth_IsBase(bool value) const { kcategorizedview_hasheightforwidth_isbase = value; }
    inline void setKCategorizedView_PaintEngine_IsBase(bool value) const { kcategorizedview_paintengine_isbase = value; }
    inline void setKCategorizedView_KeyReleaseEvent_IsBase(bool value) const { kcategorizedview_keyreleaseevent_isbase = value; }
    inline void setKCategorizedView_EnterEvent_IsBase(bool value) const { kcategorizedview_enterevent_isbase = value; }
    inline void setKCategorizedView_MoveEvent_IsBase(bool value) const { kcategorizedview_moveevent_isbase = value; }
    inline void setKCategorizedView_CloseEvent_IsBase(bool value) const { kcategorizedview_closeevent_isbase = value; }
    inline void setKCategorizedView_TabletEvent_IsBase(bool value) const { kcategorizedview_tabletevent_isbase = value; }
    inline void setKCategorizedView_ActionEvent_IsBase(bool value) const { kcategorizedview_actionevent_isbase = value; }
    inline void setKCategorizedView_ShowEvent_IsBase(bool value) const { kcategorizedview_showevent_isbase = value; }
    inline void setKCategorizedView_HideEvent_IsBase(bool value) const { kcategorizedview_hideevent_isbase = value; }
    inline void setKCategorizedView_NativeEvent_IsBase(bool value) const { kcategorizedview_nativeevent_isbase = value; }
    inline void setKCategorizedView_Metric_IsBase(bool value) const { kcategorizedview_metric_isbase = value; }
    inline void setKCategorizedView_InitPainter_IsBase(bool value) const { kcategorizedview_initpainter_isbase = value; }
    inline void setKCategorizedView_Redirected_IsBase(bool value) const { kcategorizedview_redirected_isbase = value; }
    inline void setKCategorizedView_SharedPainter_IsBase(bool value) const { kcategorizedview_sharedpainter_isbase = value; }
    inline void setKCategorizedView_ChildEvent_IsBase(bool value) const { kcategorizedview_childevent_isbase = value; }
    inline void setKCategorizedView_CustomEvent_IsBase(bool value) const { kcategorizedview_customevent_isbase = value; }
    inline void setKCategorizedView_ConnectNotify_IsBase(bool value) const { kcategorizedview_connectnotify_isbase = value; }
    inline void setKCategorizedView_DisconnectNotify_IsBase(bool value) const { kcategorizedview_disconnectnotify_isbase = value; }
    inline void setKCategorizedView_ResizeContents_IsBase(bool value) const { kcategorizedview_resizecontents_isbase = value; }
    inline void setKCategorizedView_ContentsSize_IsBase(bool value) const { kcategorizedview_contentssize_isbase = value; }
    inline void setKCategorizedView_RectForIndex_IsBase(bool value) const { kcategorizedview_rectforindex_isbase = value; }
    inline void setKCategorizedView_SetPositionForIndex_IsBase(bool value) const { kcategorizedview_setpositionforindex_isbase = value; }
    inline void setKCategorizedView_State_IsBase(bool value) const { kcategorizedview_state_isbase = value; }
    inline void setKCategorizedView_SetState_IsBase(bool value) const { kcategorizedview_setstate_isbase = value; }
    inline void setKCategorizedView_ScheduleDelayedItemsLayout_IsBase(bool value) const { kcategorizedview_scheduledelayeditemslayout_isbase = value; }
    inline void setKCategorizedView_ExecuteDelayedItemsLayout_IsBase(bool value) const { kcategorizedview_executedelayeditemslayout_isbase = value; }
    inline void setKCategorizedView_SetDirtyRegion_IsBase(bool value) const { kcategorizedview_setdirtyregion_isbase = value; }
    inline void setKCategorizedView_ScrollDirtyRegion_IsBase(bool value) const { kcategorizedview_scrolldirtyregion_isbase = value; }
    inline void setKCategorizedView_DirtyRegionOffset_IsBase(bool value) const { kcategorizedview_dirtyregionoffset_isbase = value; }
    inline void setKCategorizedView_StartAutoScroll_IsBase(bool value) const { kcategorizedview_startautoscroll_isbase = value; }
    inline void setKCategorizedView_StopAutoScroll_IsBase(bool value) const { kcategorizedview_stopautoscroll_isbase = value; }
    inline void setKCategorizedView_DoAutoScroll_IsBase(bool value) const { kcategorizedview_doautoscroll_isbase = value; }
    inline void setKCategorizedView_DropIndicatorPosition_IsBase(bool value) const { kcategorizedview_dropindicatorposition_isbase = value; }
    inline void setKCategorizedView_SetViewportMargins_IsBase(bool value) const { kcategorizedview_setviewportmargins_isbase = value; }
    inline void setKCategorizedView_ViewportMargins_IsBase(bool value) const { kcategorizedview_viewportmargins_isbase = value; }
    inline void setKCategorizedView_DrawFrame_IsBase(bool value) const { kcategorizedview_drawframe_isbase = value; }
    inline void setKCategorizedView_UpdateMicroFocus_IsBase(bool value) const { kcategorizedview_updatemicrofocus_isbase = value; }
    inline void setKCategorizedView_Create_IsBase(bool value) const { kcategorizedview_create_isbase = value; }
    inline void setKCategorizedView_Destroy_IsBase(bool value) const { kcategorizedview_destroy_isbase = value; }
    inline void setKCategorizedView_FocusNextChild_IsBase(bool value) const { kcategorizedview_focusnextchild_isbase = value; }
    inline void setKCategorizedView_FocusPreviousChild_IsBase(bool value) const { kcategorizedview_focuspreviouschild_isbase = value; }
    inline void setKCategorizedView_Sender_IsBase(bool value) const { kcategorizedview_sender_isbase = value; }
    inline void setKCategorizedView_SenderSignalIndex_IsBase(bool value) const { kcategorizedview_sendersignalindex_isbase = value; }
    inline void setKCategorizedView_Receivers_IsBase(bool value) const { kcategorizedview_receivers_isbase = value; }
    inline void setKCategorizedView_IsSignalConnected_IsBase(bool value) const { kcategorizedview_issignalconnected_isbase = value; }
    inline void setKCategorizedView_GetDecodedMetricF_IsBase(bool value) const { kcategorizedview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcategorizedview_metacall_isbase) {
            kcategorizedview_metacall_isbase = false;
            return KCategorizedView::qt_metacall(param1, param2, param3);
        } else if (kcategorizedview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcategorizedview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kcategorizedview_setmodel_isbase) {
            kcategorizedview_setmodel_isbase = false;
            KCategorizedView::setModel(model);
        } else if (kcategorizedview_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kcategorizedview_setmodel_callback(this, cbval1);
        } else {
            KCategorizedView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kcategorizedview_visualrect_isbase) {
            kcategorizedview_visualrect_isbase = false;
            return KCategorizedView::visualRect(index);
        } else if (kcategorizedview_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = kcategorizedview_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCategorizedView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& point) const override {
        if (kcategorizedview_indexat_isbase) {
            kcategorizedview_indexat_isbase = false;
            return KCategorizedView::indexAt(point);
        } else if (kcategorizedview_indexat_callback != nullptr) {
            const QPoint& point_ret = point;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&point_ret);

            QModelIndex* callback_ret = kcategorizedview_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCategorizedView::indexAt(point);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kcategorizedview_reset_isbase) {
            kcategorizedview_reset_isbase = false;
            KCategorizedView::reset();
        } else if (kcategorizedview_reset_callback != nullptr) {
            kcategorizedview_reset_callback();
        } else {
            KCategorizedView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcategorizedview_paintevent_isbase) {
            kcategorizedview_paintevent_isbase = false;
            KCategorizedView::paintEvent(event);
        } else if (kcategorizedview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kcategorizedview_paintevent_callback(this, cbval1);
        } else {
            KCategorizedView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcategorizedview_resizeevent_isbase) {
            kcategorizedview_resizeevent_isbase = false;
            KCategorizedView::resizeEvent(event);
        } else if (kcategorizedview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kcategorizedview_resizeevent_callback(this, cbval1);
        } else {
            KCategorizedView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags flags) override {
        if (kcategorizedview_setselection_isbase) {
            kcategorizedview_setselection_isbase = false;
            KCategorizedView::setSelection(rect, flags);
        } else if (kcategorizedview_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(flags);

            kcategorizedview_setselection_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::setSelection(rect, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcategorizedview_mousemoveevent_isbase) {
            kcategorizedview_mousemoveevent_isbase = false;
            KCategorizedView::mouseMoveEvent(event);
        } else if (kcategorizedview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcategorizedview_mousemoveevent_callback(this, cbval1);
        } else {
            KCategorizedView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcategorizedview_mousepressevent_isbase) {
            kcategorizedview_mousepressevent_isbase = false;
            KCategorizedView::mousePressEvent(event);
        } else if (kcategorizedview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcategorizedview_mousepressevent_callback(this, cbval1);
        } else {
            KCategorizedView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcategorizedview_mousereleaseevent_isbase) {
            kcategorizedview_mousereleaseevent_isbase = false;
            KCategorizedView::mouseReleaseEvent(event);
        } else if (kcategorizedview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcategorizedview_mousereleaseevent_callback(this, cbval1);
        } else {
            KCategorizedView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcategorizedview_leaveevent_isbase) {
            kcategorizedview_leaveevent_isbase = false;
            KCategorizedView::leaveEvent(event);
        } else if (kcategorizedview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcategorizedview_leaveevent_callback(this, cbval1);
        } else {
            KCategorizedView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (kcategorizedview_startdrag_isbase) {
            kcategorizedview_startdrag_isbase = false;
            KCategorizedView::startDrag(supportedActions);
        } else if (kcategorizedview_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            kcategorizedview_startdrag_callback(this, cbval1);
        } else {
            KCategorizedView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcategorizedview_dragmoveevent_isbase) {
            kcategorizedview_dragmoveevent_isbase = false;
            KCategorizedView::dragMoveEvent(event);
        } else if (kcategorizedview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcategorizedview_dragmoveevent_callback(this, cbval1);
        } else {
            KCategorizedView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcategorizedview_dragenterevent_isbase) {
            kcategorizedview_dragenterevent_isbase = false;
            KCategorizedView::dragEnterEvent(event);
        } else if (kcategorizedview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcategorizedview_dragenterevent_callback(this, cbval1);
        } else {
            KCategorizedView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcategorizedview_dragleaveevent_isbase) {
            kcategorizedview_dragleaveevent_isbase = false;
            KCategorizedView::dragLeaveEvent(event);
        } else if (kcategorizedview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcategorizedview_dragleaveevent_callback(this, cbval1);
        } else {
            KCategorizedView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcategorizedview_dropevent_isbase) {
            kcategorizedview_dropevent_isbase = false;
            KCategorizedView::dropEvent(event);
        } else if (kcategorizedview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcategorizedview_dropevent_callback(this, cbval1);
        } else {
            KCategorizedView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (kcategorizedview_movecursor_isbase) {
            kcategorizedview_movecursor_isbase = false;
            return KCategorizedView::moveCursor(cursorAction, modifiers);
        } else if (kcategorizedview_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = kcategorizedview_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KCategorizedView::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (kcategorizedview_rowsabouttoberemoved_isbase) {
            kcategorizedview_rowsabouttoberemoved_isbase = false;
            KCategorizedView::rowsAboutToBeRemoved(parent, start, end);
        } else if (kcategorizedview_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            kcategorizedview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCategorizedView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (kcategorizedview_updategeometries_isbase) {
            kcategorizedview_updategeometries_isbase = false;
            KCategorizedView::updateGeometries();
        } else if (kcategorizedview_updategeometries_callback != nullptr) {
            kcategorizedview_updategeometries_callback();
        } else {
            KCategorizedView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (kcategorizedview_currentchanged_isbase) {
            kcategorizedview_currentchanged_isbase = false;
            KCategorizedView::currentChanged(current, previous);
        } else if (kcategorizedview_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            kcategorizedview_currentchanged_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (kcategorizedview_datachanged_isbase) {
            kcategorizedview_datachanged_isbase = false;
            KCategorizedView::dataChanged(topLeft, bottomRight, roles);
        } else if (kcategorizedview_datachanged_callback != nullptr) {
            const QModelIndex& topLeft_ret = topLeft;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&topLeft_ret);
            const QModelIndex& bottomRight_ret = bottomRight;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&bottomRight_ret);
            const QList<int>& roles_ret = roles;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* roles_arr = static_cast<int*>(malloc(sizeof(int) * (roles_ret.size() + 1)));
            for (qsizetype i = 0; i < roles_ret.size(); ++i) {
                roles_arr[i] = roles_ret[i];
            }
            libqt_list roles_out;
            roles_out.len = roles_ret.size();
            roles_out.data = static_cast<void*>(roles_arr);
            libqt_list /* of int */ cbval3 = roles_out;

            kcategorizedview_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCategorizedView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (kcategorizedview_rowsinserted_isbase) {
            kcategorizedview_rowsinserted_isbase = false;
            KCategorizedView::rowsInserted(parent, start, end);
        } else if (kcategorizedview_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            kcategorizedview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCategorizedView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotLayoutChanged() override {
        if (kcategorizedview_slotlayoutchanged_isbase) {
            kcategorizedview_slotlayoutchanged_isbase = false;
            KCategorizedView::slotLayoutChanged();
        } else if (kcategorizedview_slotlayoutchanged_callback != nullptr) {
            kcategorizedview_slotlayoutchanged_callback();
        } else {
            KCategorizedView::slotLayoutChanged();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (kcategorizedview_scrollto_isbase) {
            kcategorizedview_scrollto_isbase = false;
            KCategorizedView::scrollTo(index, hint);
        } else if (kcategorizedview_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            kcategorizedview_scrollto_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (kcategorizedview_doitemslayout_isbase) {
            kcategorizedview_doitemslayout_isbase = false;
            KCategorizedView::doItemsLayout();
        } else if (kcategorizedview_doitemslayout_callback != nullptr) {
            kcategorizedview_doitemslayout_callback();
        } else {
            KCategorizedView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (kcategorizedview_setrootindex_isbase) {
            kcategorizedview_setrootindex_isbase = false;
            KCategorizedView::setRootIndex(index);
        } else if (kcategorizedview_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            kcategorizedview_setrootindex_callback(this, cbval1);
        } else {
            KCategorizedView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcategorizedview_event_isbase) {
            kcategorizedview_event_isbase = false;
            return KCategorizedView::event(e);
        } else if (kcategorizedview_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kcategorizedview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategorizedView::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kcategorizedview_scrollcontentsby_isbase) {
            kcategorizedview_scrollcontentsby_isbase = false;
            KCategorizedView::scrollContentsBy(dx, dy);
        } else if (kcategorizedview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            kcategorizedview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcategorizedview_wheelevent_isbase) {
            kcategorizedview_wheelevent_isbase = false;
            KCategorizedView::wheelEvent(e);
        } else if (kcategorizedview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            kcategorizedview_wheelevent_callback(this, cbval1);
        } else {
            KCategorizedView::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kcategorizedview_timerevent_isbase) {
            kcategorizedview_timerevent_isbase = false;
            KCategorizedView::timerEvent(e);
        } else if (kcategorizedview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            kcategorizedview_timerevent_callback(this, cbval1);
        } else {
            KCategorizedView::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (kcategorizedview_initviewitemoption_isbase) {
            kcategorizedview_initviewitemoption_isbase = false;
            KCategorizedView::initViewItemOption(option);
        } else if (kcategorizedview_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            kcategorizedview_initviewitemoption_callback(this, cbval1);
        } else {
            KCategorizedView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (kcategorizedview_horizontaloffset_isbase) {
            kcategorizedview_horizontaloffset_isbase = false;
            return KCategorizedView::horizontalOffset();
        } else if (kcategorizedview_horizontaloffset_callback != nullptr) {
            int callback_ret = kcategorizedview_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (kcategorizedview_verticaloffset_isbase) {
            kcategorizedview_verticaloffset_isbase = false;
            return KCategorizedView::verticalOffset();
        } else if (kcategorizedview_verticaloffset_callback != nullptr) {
            int callback_ret = kcategorizedview_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (kcategorizedview_visualregionforselection_isbase) {
            kcategorizedview_visualregionforselection_isbase = false;
            return KCategorizedView::visualRegionForSelection(selection);
        } else if (kcategorizedview_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = kcategorizedview_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCategorizedView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (kcategorizedview_selectedindexes_isbase) {
            kcategorizedview_selectedindexes_isbase = false;
            return KCategorizedView::selectedIndexes();
        } else if (kcategorizedview_selectedindexes_callback != nullptr) {
            QModelIndex** callback_ret = kcategorizedview_selectedindexes_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KCategorizedView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (kcategorizedview_isindexhidden_isbase) {
            kcategorizedview_isindexhidden_isbase = false;
            return KCategorizedView::isIndexHidden(index);
        } else if (kcategorizedview_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kcategorizedview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategorizedView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (kcategorizedview_selectionchanged_isbase) {
            kcategorizedview_selectionchanged_isbase = false;
            KCategorizedView::selectionChanged(selected, deselected);
        } else if (kcategorizedview_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            kcategorizedview_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kcategorizedview_viewportsizehint_isbase) {
            kcategorizedview_viewportsizehint_isbase = false;
            return KCategorizedView::viewportSizeHint();
        } else if (kcategorizedview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = kcategorizedview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return KCategorizedView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (kcategorizedview_setselectionmodel_isbase) {
            kcategorizedview_setselectionmodel_isbase = false;
            KCategorizedView::setSelectionModel(selectionModel);
        } else if (kcategorizedview_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            kcategorizedview_setselectionmodel_callback(this, cbval1);
        } else {
            KCategorizedView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (kcategorizedview_keyboardsearch_isbase) {
            kcategorizedview_keyboardsearch_isbase = false;
            KCategorizedView::keyboardSearch(search);
        } else if (kcategorizedview_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<const char*>(malloc(search_str.len + 1));
            memcpy((void*)search_str.data, search_b.data(), search_str.len);
            ((char*)search_str.data)[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            kcategorizedview_keyboardsearch_callback(this, cbval1);
        } else {
            KCategorizedView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (kcategorizedview_sizehintforrow_isbase) {
            kcategorizedview_sizehintforrow_isbase = false;
            return KCategorizedView::sizeHintForRow(row);
        } else if (kcategorizedview_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = kcategorizedview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (kcategorizedview_sizehintforcolumn_isbase) {
            kcategorizedview_sizehintforcolumn_isbase = false;
            return KCategorizedView::sizeHintForColumn(column);
        } else if (kcategorizedview_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = kcategorizedview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (kcategorizedview_itemdelegateforindex_isbase) {
            kcategorizedview_itemdelegateforindex_isbase = false;
            return KCategorizedView::itemDelegateForIndex(index);
        } else if (kcategorizedview_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = kcategorizedview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategorizedView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (kcategorizedview_inputmethodquery_isbase) {
            kcategorizedview_inputmethodquery_isbase = false;
            return KCategorizedView::inputMethodQuery(query);
        } else if (kcategorizedview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = kcategorizedview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCategorizedView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (kcategorizedview_selectall_isbase) {
            kcategorizedview_selectall_isbase = false;
            KCategorizedView::selectAll();
        } else if (kcategorizedview_selectall_callback != nullptr) {
            kcategorizedview_selectall_callback();
        } else {
            KCategorizedView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (kcategorizedview_updateeditordata_isbase) {
            kcategorizedview_updateeditordata_isbase = false;
            KCategorizedView::updateEditorData();
        } else if (kcategorizedview_updateeditordata_callback != nullptr) {
            kcategorizedview_updateeditordata_callback();
        } else {
            KCategorizedView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (kcategorizedview_updateeditorgeometries_isbase) {
            kcategorizedview_updateeditorgeometries_isbase = false;
            KCategorizedView::updateEditorGeometries();
        } else if (kcategorizedview_updateeditorgeometries_callback != nullptr) {
            kcategorizedview_updateeditorgeometries_callback();
        } else {
            KCategorizedView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (kcategorizedview_verticalscrollbaraction_isbase) {
            kcategorizedview_verticalscrollbaraction_isbase = false;
            KCategorizedView::verticalScrollbarAction(action);
        } else if (kcategorizedview_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            kcategorizedview_verticalscrollbaraction_callback(this, cbval1);
        } else {
            KCategorizedView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (kcategorizedview_horizontalscrollbaraction_isbase) {
            kcategorizedview_horizontalscrollbaraction_isbase = false;
            KCategorizedView::horizontalScrollbarAction(action);
        } else if (kcategorizedview_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            kcategorizedview_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            KCategorizedView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (kcategorizedview_verticalscrollbarvaluechanged_isbase) {
            kcategorizedview_verticalscrollbarvaluechanged_isbase = false;
            KCategorizedView::verticalScrollbarValueChanged(value);
        } else if (kcategorizedview_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            kcategorizedview_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            KCategorizedView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (kcategorizedview_horizontalscrollbarvaluechanged_isbase) {
            kcategorizedview_horizontalscrollbarvaluechanged_isbase = false;
            KCategorizedView::horizontalScrollbarValueChanged(value);
        } else if (kcategorizedview_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            kcategorizedview_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            KCategorizedView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (kcategorizedview_closeeditor_isbase) {
            kcategorizedview_closeeditor_isbase = false;
            KCategorizedView::closeEditor(editor, hint);
        } else if (kcategorizedview_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            kcategorizedview_closeeditor_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (kcategorizedview_commitdata_isbase) {
            kcategorizedview_commitdata_isbase = false;
            KCategorizedView::commitData(editor);
        } else if (kcategorizedview_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            kcategorizedview_commitdata_callback(this, cbval1);
        } else {
            KCategorizedView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (kcategorizedview_editordestroyed_isbase) {
            kcategorizedview_editordestroyed_isbase = false;
            KCategorizedView::editorDestroyed(editor);
        } else if (kcategorizedview_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            kcategorizedview_editordestroyed_callback(this, cbval1);
        } else {
            KCategorizedView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (kcategorizedview_edit2_isbase) {
            kcategorizedview_edit2_isbase = false;
            return KCategorizedView::edit(index, trigger, event);
        } else if (kcategorizedview_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = kcategorizedview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCategorizedView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (kcategorizedview_selectioncommand_isbase) {
            kcategorizedview_selectioncommand_isbase = false;
            return KCategorizedView::selectionCommand(index, event);
        } else if (kcategorizedview_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = kcategorizedview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return KCategorizedView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcategorizedview_focusnextprevchild_isbase) {
            kcategorizedview_focusnextprevchild_isbase = false;
            return KCategorizedView::focusNextPrevChild(next);
        } else if (kcategorizedview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcategorizedview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategorizedView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (kcategorizedview_viewportevent_isbase) {
            kcategorizedview_viewportevent_isbase = false;
            return KCategorizedView::viewportEvent(event);
        } else if (kcategorizedview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcategorizedview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategorizedView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcategorizedview_mousedoubleclickevent_isbase) {
            kcategorizedview_mousedoubleclickevent_isbase = false;
            KCategorizedView::mouseDoubleClickEvent(event);
        } else if (kcategorizedview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcategorizedview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KCategorizedView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcategorizedview_focusinevent_isbase) {
            kcategorizedview_focusinevent_isbase = false;
            KCategorizedView::focusInEvent(event);
        } else if (kcategorizedview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcategorizedview_focusinevent_callback(this, cbval1);
        } else {
            KCategorizedView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcategorizedview_focusoutevent_isbase) {
            kcategorizedview_focusoutevent_isbase = false;
            KCategorizedView::focusOutEvent(event);
        } else if (kcategorizedview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcategorizedview_focusoutevent_callback(this, cbval1);
        } else {
            KCategorizedView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcategorizedview_keypressevent_isbase) {
            kcategorizedview_keypressevent_isbase = false;
            KCategorizedView::keyPressEvent(event);
        } else if (kcategorizedview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcategorizedview_keypressevent_callback(this, cbval1);
        } else {
            KCategorizedView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (kcategorizedview_inputmethodevent_isbase) {
            kcategorizedview_inputmethodevent_isbase = false;
            KCategorizedView::inputMethodEvent(event);
        } else if (kcategorizedview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            kcategorizedview_inputmethodevent_callback(this, cbval1);
        } else {
            KCategorizedView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kcategorizedview_eventfilter_isbase) {
            kcategorizedview_eventfilter_isbase = false;
            return KCategorizedView::eventFilter(object, event);
        } else if (kcategorizedview_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = kcategorizedview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCategorizedView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcategorizedview_minimumsizehint_isbase) {
            kcategorizedview_minimumsizehint_isbase = false;
            return KCategorizedView::minimumSizeHint();
        } else if (kcategorizedview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcategorizedview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KCategorizedView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcategorizedview_sizehint_isbase) {
            kcategorizedview_sizehint_isbase = false;
            return KCategorizedView::sizeHint();
        } else if (kcategorizedview_sizehint_callback != nullptr) {
            QSize* callback_ret = kcategorizedview_sizehint_callback();
            return *callback_ret;
        } else {
            return KCategorizedView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kcategorizedview_setupviewport_isbase) {
            kcategorizedview_setupviewport_isbase = false;
            KCategorizedView::setupViewport(viewport);
        } else if (kcategorizedview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            kcategorizedview_setupviewport_callback(this, cbval1);
        } else {
            KCategorizedView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kcategorizedview_contextmenuevent_isbase) {
            kcategorizedview_contextmenuevent_isbase = false;
            KCategorizedView::contextMenuEvent(param1);
        } else if (kcategorizedview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kcategorizedview_contextmenuevent_callback(this, cbval1);
        } else {
            KCategorizedView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcategorizedview_changeevent_isbase) {
            kcategorizedview_changeevent_isbase = false;
            KCategorizedView::changeEvent(param1);
        } else if (kcategorizedview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kcategorizedview_changeevent_callback(this, cbval1);
        } else {
            KCategorizedView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kcategorizedview_initstyleoption_isbase) {
            kcategorizedview_initstyleoption_isbase = false;
            KCategorizedView::initStyleOption(option);
        } else if (kcategorizedview_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kcategorizedview_initstyleoption_callback(this, cbval1);
        } else {
            KCategorizedView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcategorizedview_devtype_isbase) {
            kcategorizedview_devtype_isbase = false;
            return KCategorizedView::devType();
        } else if (kcategorizedview_devtype_callback != nullptr) {
            int callback_ret = kcategorizedview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcategorizedview_setvisible_isbase) {
            kcategorizedview_setvisible_isbase = false;
            KCategorizedView::setVisible(visible);
        } else if (kcategorizedview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcategorizedview_setvisible_callback(this, cbval1);
        } else {
            KCategorizedView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcategorizedview_heightforwidth_isbase) {
            kcategorizedview_heightforwidth_isbase = false;
            return KCategorizedView::heightForWidth(param1);
        } else if (kcategorizedview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcategorizedview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcategorizedview_hasheightforwidth_isbase) {
            kcategorizedview_hasheightforwidth_isbase = false;
            return KCategorizedView::hasHeightForWidth();
        } else if (kcategorizedview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcategorizedview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KCategorizedView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcategorizedview_paintengine_isbase) {
            kcategorizedview_paintengine_isbase = false;
            return KCategorizedView::paintEngine();
        } else if (kcategorizedview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcategorizedview_paintengine_callback();
            return callback_ret;
        } else {
            return KCategorizedView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcategorizedview_keyreleaseevent_isbase) {
            kcategorizedview_keyreleaseevent_isbase = false;
            KCategorizedView::keyReleaseEvent(event);
        } else if (kcategorizedview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcategorizedview_keyreleaseevent_callback(this, cbval1);
        } else {
            KCategorizedView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcategorizedview_enterevent_isbase) {
            kcategorizedview_enterevent_isbase = false;
            KCategorizedView::enterEvent(event);
        } else if (kcategorizedview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcategorizedview_enterevent_callback(this, cbval1);
        } else {
            KCategorizedView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcategorizedview_moveevent_isbase) {
            kcategorizedview_moveevent_isbase = false;
            KCategorizedView::moveEvent(event);
        } else if (kcategorizedview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcategorizedview_moveevent_callback(this, cbval1);
        } else {
            KCategorizedView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcategorizedview_closeevent_isbase) {
            kcategorizedview_closeevent_isbase = false;
            KCategorizedView::closeEvent(event);
        } else if (kcategorizedview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcategorizedview_closeevent_callback(this, cbval1);
        } else {
            KCategorizedView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcategorizedview_tabletevent_isbase) {
            kcategorizedview_tabletevent_isbase = false;
            KCategorizedView::tabletEvent(event);
        } else if (kcategorizedview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcategorizedview_tabletevent_callback(this, cbval1);
        } else {
            KCategorizedView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcategorizedview_actionevent_isbase) {
            kcategorizedview_actionevent_isbase = false;
            KCategorizedView::actionEvent(event);
        } else if (kcategorizedview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcategorizedview_actionevent_callback(this, cbval1);
        } else {
            KCategorizedView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcategorizedview_showevent_isbase) {
            kcategorizedview_showevent_isbase = false;
            KCategorizedView::showEvent(event);
        } else if (kcategorizedview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kcategorizedview_showevent_callback(this, cbval1);
        } else {
            KCategorizedView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcategorizedview_hideevent_isbase) {
            kcategorizedview_hideevent_isbase = false;
            KCategorizedView::hideEvent(event);
        } else if (kcategorizedview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kcategorizedview_hideevent_callback(this, cbval1);
        } else {
            KCategorizedView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcategorizedview_nativeevent_isbase) {
            kcategorizedview_nativeevent_isbase = false;
            return KCategorizedView::nativeEvent(eventType, message, result);
        } else if (kcategorizedview_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc(eventType_str.len + 1));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = kcategorizedview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCategorizedView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcategorizedview_metric_isbase) {
            kcategorizedview_metric_isbase = false;
            return KCategorizedView::metric(param1);
        } else if (kcategorizedview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcategorizedview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcategorizedview_initpainter_isbase) {
            kcategorizedview_initpainter_isbase = false;
            KCategorizedView::initPainter(painter);
        } else if (kcategorizedview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcategorizedview_initpainter_callback(this, cbval1);
        } else {
            KCategorizedView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcategorizedview_redirected_isbase) {
            kcategorizedview_redirected_isbase = false;
            return KCategorizedView::redirected(offset);
        } else if (kcategorizedview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcategorizedview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategorizedView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcategorizedview_sharedpainter_isbase) {
            kcategorizedview_sharedpainter_isbase = false;
            return KCategorizedView::sharedPainter();
        } else if (kcategorizedview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcategorizedview_sharedpainter_callback();
            return callback_ret;
        } else {
            return KCategorizedView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcategorizedview_childevent_isbase) {
            kcategorizedview_childevent_isbase = false;
            KCategorizedView::childEvent(event);
        } else if (kcategorizedview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcategorizedview_childevent_callback(this, cbval1);
        } else {
            KCategorizedView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcategorizedview_customevent_isbase) {
            kcategorizedview_customevent_isbase = false;
            KCategorizedView::customEvent(event);
        } else if (kcategorizedview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcategorizedview_customevent_callback(this, cbval1);
        } else {
            KCategorizedView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcategorizedview_connectnotify_isbase) {
            kcategorizedview_connectnotify_isbase = false;
            KCategorizedView::connectNotify(signal);
        } else if (kcategorizedview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcategorizedview_connectnotify_callback(this, cbval1);
        } else {
            KCategorizedView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcategorizedview_disconnectnotify_isbase) {
            kcategorizedview_disconnectnotify_isbase = false;
            KCategorizedView::disconnectNotify(signal);
        } else if (kcategorizedview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcategorizedview_disconnectnotify_callback(this, cbval1);
        } else {
            KCategorizedView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (kcategorizedview_resizecontents_isbase) {
            kcategorizedview_resizecontents_isbase = false;
            KCategorizedView::resizeContents(width, height);
        } else if (kcategorizedview_resizecontents_callback != nullptr) {
            int cbval1 = width;
            int cbval2 = height;

            kcategorizedview_resizecontents_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::resizeContents(width, height);
        }
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (kcategorizedview_contentssize_isbase) {
            kcategorizedview_contentssize_isbase = false;
            return KCategorizedView::contentsSize();
        } else if (kcategorizedview_contentssize_callback != nullptr) {
            QSize* callback_ret = kcategorizedview_contentssize_callback();
            return *callback_ret;
        } else {
            return KCategorizedView::contentsSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (kcategorizedview_rectforindex_isbase) {
            kcategorizedview_rectforindex_isbase = false;
            return KCategorizedView::rectForIndex(index);
        } else if (kcategorizedview_rectforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = kcategorizedview_rectforindex_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCategorizedView::rectForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (kcategorizedview_setpositionforindex_isbase) {
            kcategorizedview_setpositionforindex_isbase = false;
            KCategorizedView::setPositionForIndex(position, index);
        } else if (kcategorizedview_setpositionforindex_callback != nullptr) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            kcategorizedview_setpositionforindex_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::setPositionForIndex(position, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (kcategorizedview_state_isbase) {
            kcategorizedview_state_isbase = false;
            return KCategorizedView::state();
        } else if (kcategorizedview_state_callback != nullptr) {
            int callback_ret = kcategorizedview_state_callback();
            return static_cast<VirtualKCategorizedView::State>(callback_ret);
        } else {
            return KCategorizedView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (kcategorizedview_setstate_isbase) {
            kcategorizedview_setstate_isbase = false;
            KCategorizedView::setState(state);
        } else if (kcategorizedview_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            kcategorizedview_setstate_callback(this, cbval1);
        } else {
            KCategorizedView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (kcategorizedview_scheduledelayeditemslayout_isbase) {
            kcategorizedview_scheduledelayeditemslayout_isbase = false;
            KCategorizedView::scheduleDelayedItemsLayout();
        } else if (kcategorizedview_scheduledelayeditemslayout_callback != nullptr) {
            kcategorizedview_scheduledelayeditemslayout_callback();
        } else {
            KCategorizedView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (kcategorizedview_executedelayeditemslayout_isbase) {
            kcategorizedview_executedelayeditemslayout_isbase = false;
            KCategorizedView::executeDelayedItemsLayout();
        } else if (kcategorizedview_executedelayeditemslayout_callback != nullptr) {
            kcategorizedview_executedelayeditemslayout_callback();
        } else {
            KCategorizedView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (kcategorizedview_setdirtyregion_isbase) {
            kcategorizedview_setdirtyregion_isbase = false;
            KCategorizedView::setDirtyRegion(region);
        } else if (kcategorizedview_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            kcategorizedview_setdirtyregion_callback(this, cbval1);
        } else {
            KCategorizedView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (kcategorizedview_scrolldirtyregion_isbase) {
            kcategorizedview_scrolldirtyregion_isbase = false;
            KCategorizedView::scrollDirtyRegion(dx, dy);
        } else if (kcategorizedview_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            kcategorizedview_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            KCategorizedView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (kcategorizedview_dirtyregionoffset_isbase) {
            kcategorizedview_dirtyregionoffset_isbase = false;
            return KCategorizedView::dirtyRegionOffset();
        } else if (kcategorizedview_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = kcategorizedview_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return KCategorizedView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (kcategorizedview_startautoscroll_isbase) {
            kcategorizedview_startautoscroll_isbase = false;
            KCategorizedView::startAutoScroll();
        } else if (kcategorizedview_startautoscroll_callback != nullptr) {
            kcategorizedview_startautoscroll_callback();
        } else {
            KCategorizedView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (kcategorizedview_stopautoscroll_isbase) {
            kcategorizedview_stopautoscroll_isbase = false;
            KCategorizedView::stopAutoScroll();
        } else if (kcategorizedview_stopautoscroll_callback != nullptr) {
            kcategorizedview_stopautoscroll_callback();
        } else {
            KCategorizedView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (kcategorizedview_doautoscroll_isbase) {
            kcategorizedview_doautoscroll_isbase = false;
            KCategorizedView::doAutoScroll();
        } else if (kcategorizedview_doautoscroll_callback != nullptr) {
            kcategorizedview_doautoscroll_callback();
        } else {
            KCategorizedView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (kcategorizedview_dropindicatorposition_isbase) {
            kcategorizedview_dropindicatorposition_isbase = false;
            return KCategorizedView::dropIndicatorPosition();
        } else if (kcategorizedview_dropindicatorposition_callback != nullptr) {
            int callback_ret = kcategorizedview_dropindicatorposition_callback();
            return static_cast<VirtualKCategorizedView::DropIndicatorPosition>(callback_ret);
        } else {
            return KCategorizedView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (kcategorizedview_setviewportmargins_isbase) {
            kcategorizedview_setviewportmargins_isbase = false;
            KCategorizedView::setViewportMargins(left, top, right, bottom);
        } else if (kcategorizedview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            kcategorizedview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KCategorizedView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (kcategorizedview_viewportmargins_isbase) {
            kcategorizedview_viewportmargins_isbase = false;
            return KCategorizedView::viewportMargins();
        } else if (kcategorizedview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = kcategorizedview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return KCategorizedView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kcategorizedview_drawframe_isbase) {
            kcategorizedview_drawframe_isbase = false;
            KCategorizedView::drawFrame(param1);
        } else if (kcategorizedview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kcategorizedview_drawframe_callback(this, cbval1);
        } else {
            KCategorizedView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcategorizedview_updatemicrofocus_isbase) {
            kcategorizedview_updatemicrofocus_isbase = false;
            KCategorizedView::updateMicroFocus();
        } else if (kcategorizedview_updatemicrofocus_callback != nullptr) {
            kcategorizedview_updatemicrofocus_callback();
        } else {
            KCategorizedView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcategorizedview_create_isbase) {
            kcategorizedview_create_isbase = false;
            KCategorizedView::create();
        } else if (kcategorizedview_create_callback != nullptr) {
            kcategorizedview_create_callback();
        } else {
            KCategorizedView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcategorizedview_destroy_isbase) {
            kcategorizedview_destroy_isbase = false;
            KCategorizedView::destroy();
        } else if (kcategorizedview_destroy_callback != nullptr) {
            kcategorizedview_destroy_callback();
        } else {
            KCategorizedView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcategorizedview_focusnextchild_isbase) {
            kcategorizedview_focusnextchild_isbase = false;
            return KCategorizedView::focusNextChild();
        } else if (kcategorizedview_focusnextchild_callback != nullptr) {
            bool callback_ret = kcategorizedview_focusnextchild_callback();
            return callback_ret;
        } else {
            return KCategorizedView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcategorizedview_focuspreviouschild_isbase) {
            kcategorizedview_focuspreviouschild_isbase = false;
            return KCategorizedView::focusPreviousChild();
        } else if (kcategorizedview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcategorizedview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KCategorizedView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcategorizedview_sender_isbase) {
            kcategorizedview_sender_isbase = false;
            return KCategorizedView::sender();
        } else if (kcategorizedview_sender_callback != nullptr) {
            QObject* callback_ret = kcategorizedview_sender_callback();
            return callback_ret;
        } else {
            return KCategorizedView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcategorizedview_sendersignalindex_isbase) {
            kcategorizedview_sendersignalindex_isbase = false;
            return KCategorizedView::senderSignalIndex();
        } else if (kcategorizedview_sendersignalindex_callback != nullptr) {
            int callback_ret = kcategorizedview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcategorizedview_receivers_isbase) {
            kcategorizedview_receivers_isbase = false;
            return KCategorizedView::receivers(signal);
        } else if (kcategorizedview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcategorizedview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCategorizedView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcategorizedview_issignalconnected_isbase) {
            kcategorizedview_issignalconnected_isbase = false;
            return KCategorizedView::isSignalConnected(signal);
        } else if (kcategorizedview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcategorizedview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategorizedView::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcategorizedview_getdecodedmetricf_isbase) {
            kcategorizedview_getdecodedmetricf_isbase = false;
            return KCategorizedView::getDecodedMetricF(metricA, metricB);
        } else if (kcategorizedview_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcategorizedview_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KCategorizedView::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KCategorizedView_PaintEvent(KCategorizedView* self, QPaintEvent* event);
    friend void KCategorizedView_QBasePaintEvent(KCategorizedView* self, QPaintEvent* event);
    friend void KCategorizedView_ResizeEvent(KCategorizedView* self, QResizeEvent* event);
    friend void KCategorizedView_QBaseResizeEvent(KCategorizedView* self, QResizeEvent* event);
    friend void KCategorizedView_SetSelection(KCategorizedView* self, const QRect* rect, int flags);
    friend void KCategorizedView_QBaseSetSelection(KCategorizedView* self, const QRect* rect, int flags);
    friend void KCategorizedView_MouseMoveEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_QBaseMouseMoveEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_MousePressEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_QBaseMousePressEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_MouseReleaseEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_QBaseMouseReleaseEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_LeaveEvent(KCategorizedView* self, QEvent* event);
    friend void KCategorizedView_QBaseLeaveEvent(KCategorizedView* self, QEvent* event);
    friend void KCategorizedView_StartDrag(KCategorizedView* self, int supportedActions);
    friend void KCategorizedView_QBaseStartDrag(KCategorizedView* self, int supportedActions);
    friend void KCategorizedView_DragMoveEvent(KCategorizedView* self, QDragMoveEvent* event);
    friend void KCategorizedView_QBaseDragMoveEvent(KCategorizedView* self, QDragMoveEvent* event);
    friend void KCategorizedView_DragEnterEvent(KCategorizedView* self, QDragEnterEvent* event);
    friend void KCategorizedView_QBaseDragEnterEvent(KCategorizedView* self, QDragEnterEvent* event);
    friend void KCategorizedView_DragLeaveEvent(KCategorizedView* self, QDragLeaveEvent* event);
    friend void KCategorizedView_QBaseDragLeaveEvent(KCategorizedView* self, QDragLeaveEvent* event);
    friend void KCategorizedView_DropEvent(KCategorizedView* self, QDropEvent* event);
    friend void KCategorizedView_QBaseDropEvent(KCategorizedView* self, QDropEvent* event);
    friend QModelIndex* KCategorizedView_MoveCursor(KCategorizedView* self, int cursorAction, int modifiers);
    friend QModelIndex* KCategorizedView_QBaseMoveCursor(KCategorizedView* self, int cursorAction, int modifiers);
    friend void KCategorizedView_RowsAboutToBeRemoved(KCategorizedView* self, const QModelIndex* parent, int start, int end);
    friend void KCategorizedView_QBaseRowsAboutToBeRemoved(KCategorizedView* self, const QModelIndex* parent, int start, int end);
    friend void KCategorizedView_UpdateGeometries(KCategorizedView* self);
    friend void KCategorizedView_QBaseUpdateGeometries(KCategorizedView* self);
    friend void KCategorizedView_CurrentChanged(KCategorizedView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void KCategorizedView_QBaseCurrentChanged(KCategorizedView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void KCategorizedView_DataChanged(KCategorizedView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void KCategorizedView_QBaseDataChanged(KCategorizedView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void KCategorizedView_RowsInserted(KCategorizedView* self, const QModelIndex* parent, int start, int end);
    friend void KCategorizedView_QBaseRowsInserted(KCategorizedView* self, const QModelIndex* parent, int start, int end);
    friend void KCategorizedView_SlotLayoutChanged(KCategorizedView* self);
    friend void KCategorizedView_QBaseSlotLayoutChanged(KCategorizedView* self);
    friend bool KCategorizedView_Event(KCategorizedView* self, QEvent* e);
    friend bool KCategorizedView_QBaseEvent(KCategorizedView* self, QEvent* e);
    friend void KCategorizedView_ScrollContentsBy(KCategorizedView* self, int dx, int dy);
    friend void KCategorizedView_QBaseScrollContentsBy(KCategorizedView* self, int dx, int dy);
    friend void KCategorizedView_WheelEvent(KCategorizedView* self, QWheelEvent* e);
    friend void KCategorizedView_QBaseWheelEvent(KCategorizedView* self, QWheelEvent* e);
    friend void KCategorizedView_TimerEvent(KCategorizedView* self, QTimerEvent* e);
    friend void KCategorizedView_QBaseTimerEvent(KCategorizedView* self, QTimerEvent* e);
    friend void KCategorizedView_InitViewItemOption(const KCategorizedView* self, QStyleOptionViewItem* option);
    friend void KCategorizedView_QBaseInitViewItemOption(const KCategorizedView* self, QStyleOptionViewItem* option);
    friend int KCategorizedView_HorizontalOffset(const KCategorizedView* self);
    friend int KCategorizedView_QBaseHorizontalOffset(const KCategorizedView* self);
    friend int KCategorizedView_VerticalOffset(const KCategorizedView* self);
    friend int KCategorizedView_QBaseVerticalOffset(const KCategorizedView* self);
    friend QRegion* KCategorizedView_VisualRegionForSelection(const KCategorizedView* self, const QItemSelection* selection);
    friend QRegion* KCategorizedView_QBaseVisualRegionForSelection(const KCategorizedView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ KCategorizedView_SelectedIndexes(const KCategorizedView* self);
    friend libqt_list /* of QModelIndex* */ KCategorizedView_QBaseSelectedIndexes(const KCategorizedView* self);
    friend bool KCategorizedView_IsIndexHidden(const KCategorizedView* self, const QModelIndex* index);
    friend bool KCategorizedView_QBaseIsIndexHidden(const KCategorizedView* self, const QModelIndex* index);
    friend void KCategorizedView_SelectionChanged(KCategorizedView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KCategorizedView_QBaseSelectionChanged(KCategorizedView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend QSize* KCategorizedView_ViewportSizeHint(const KCategorizedView* self);
    friend QSize* KCategorizedView_QBaseViewportSizeHint(const KCategorizedView* self);
    friend void KCategorizedView_UpdateEditorData(KCategorizedView* self);
    friend void KCategorizedView_QBaseUpdateEditorData(KCategorizedView* self);
    friend void KCategorizedView_UpdateEditorGeometries(KCategorizedView* self);
    friend void KCategorizedView_QBaseUpdateEditorGeometries(KCategorizedView* self);
    friend void KCategorizedView_VerticalScrollbarAction(KCategorizedView* self, int action);
    friend void KCategorizedView_QBaseVerticalScrollbarAction(KCategorizedView* self, int action);
    friend void KCategorizedView_HorizontalScrollbarAction(KCategorizedView* self, int action);
    friend void KCategorizedView_QBaseHorizontalScrollbarAction(KCategorizedView* self, int action);
    friend void KCategorizedView_VerticalScrollbarValueChanged(KCategorizedView* self, int value);
    friend void KCategorizedView_QBaseVerticalScrollbarValueChanged(KCategorizedView* self, int value);
    friend void KCategorizedView_HorizontalScrollbarValueChanged(KCategorizedView* self, int value);
    friend void KCategorizedView_QBaseHorizontalScrollbarValueChanged(KCategorizedView* self, int value);
    friend void KCategorizedView_CloseEditor(KCategorizedView* self, QWidget* editor, int hint);
    friend void KCategorizedView_QBaseCloseEditor(KCategorizedView* self, QWidget* editor, int hint);
    friend void KCategorizedView_CommitData(KCategorizedView* self, QWidget* editor);
    friend void KCategorizedView_QBaseCommitData(KCategorizedView* self, QWidget* editor);
    friend void KCategorizedView_EditorDestroyed(KCategorizedView* self, QObject* editor);
    friend void KCategorizedView_QBaseEditorDestroyed(KCategorizedView* self, QObject* editor);
    friend bool KCategorizedView_Edit2(KCategorizedView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool KCategorizedView_QBaseEdit2(KCategorizedView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int KCategorizedView_SelectionCommand(const KCategorizedView* self, const QModelIndex* index, const QEvent* event);
    friend int KCategorizedView_QBaseSelectionCommand(const KCategorizedView* self, const QModelIndex* index, const QEvent* event);
    friend bool KCategorizedView_FocusNextPrevChild(KCategorizedView* self, bool next);
    friend bool KCategorizedView_QBaseFocusNextPrevChild(KCategorizedView* self, bool next);
    friend bool KCategorizedView_ViewportEvent(KCategorizedView* self, QEvent* event);
    friend bool KCategorizedView_QBaseViewportEvent(KCategorizedView* self, QEvent* event);
    friend void KCategorizedView_MouseDoubleClickEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_QBaseMouseDoubleClickEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_FocusInEvent(KCategorizedView* self, QFocusEvent* event);
    friend void KCategorizedView_QBaseFocusInEvent(KCategorizedView* self, QFocusEvent* event);
    friend void KCategorizedView_FocusOutEvent(KCategorizedView* self, QFocusEvent* event);
    friend void KCategorizedView_QBaseFocusOutEvent(KCategorizedView* self, QFocusEvent* event);
    friend void KCategorizedView_KeyPressEvent(KCategorizedView* self, QKeyEvent* event);
    friend void KCategorizedView_QBaseKeyPressEvent(KCategorizedView* self, QKeyEvent* event);
    friend void KCategorizedView_InputMethodEvent(KCategorizedView* self, QInputMethodEvent* event);
    friend void KCategorizedView_QBaseInputMethodEvent(KCategorizedView* self, QInputMethodEvent* event);
    friend bool KCategorizedView_EventFilter(KCategorizedView* self, QObject* object, QEvent* event);
    friend bool KCategorizedView_QBaseEventFilter(KCategorizedView* self, QObject* object, QEvent* event);
    friend void KCategorizedView_ContextMenuEvent(KCategorizedView* self, QContextMenuEvent* param1);
    friend void KCategorizedView_QBaseContextMenuEvent(KCategorizedView* self, QContextMenuEvent* param1);
    friend void KCategorizedView_ChangeEvent(KCategorizedView* self, QEvent* param1);
    friend void KCategorizedView_QBaseChangeEvent(KCategorizedView* self, QEvent* param1);
    friend void KCategorizedView_InitStyleOption(const KCategorizedView* self, QStyleOptionFrame* option);
    friend void KCategorizedView_QBaseInitStyleOption(const KCategorizedView* self, QStyleOptionFrame* option);
    friend void KCategorizedView_KeyReleaseEvent(KCategorizedView* self, QKeyEvent* event);
    friend void KCategorizedView_QBaseKeyReleaseEvent(KCategorizedView* self, QKeyEvent* event);
    friend void KCategorizedView_EnterEvent(KCategorizedView* self, QEnterEvent* event);
    friend void KCategorizedView_QBaseEnterEvent(KCategorizedView* self, QEnterEvent* event);
    friend void KCategorizedView_MoveEvent(KCategorizedView* self, QMoveEvent* event);
    friend void KCategorizedView_QBaseMoveEvent(KCategorizedView* self, QMoveEvent* event);
    friend void KCategorizedView_CloseEvent(KCategorizedView* self, QCloseEvent* event);
    friend void KCategorizedView_QBaseCloseEvent(KCategorizedView* self, QCloseEvent* event);
    friend void KCategorizedView_TabletEvent(KCategorizedView* self, QTabletEvent* event);
    friend void KCategorizedView_QBaseTabletEvent(KCategorizedView* self, QTabletEvent* event);
    friend void KCategorizedView_ActionEvent(KCategorizedView* self, QActionEvent* event);
    friend void KCategorizedView_QBaseActionEvent(KCategorizedView* self, QActionEvent* event);
    friend void KCategorizedView_ShowEvent(KCategorizedView* self, QShowEvent* event);
    friend void KCategorizedView_QBaseShowEvent(KCategorizedView* self, QShowEvent* event);
    friend void KCategorizedView_HideEvent(KCategorizedView* self, QHideEvent* event);
    friend void KCategorizedView_QBaseHideEvent(KCategorizedView* self, QHideEvent* event);
    friend bool KCategorizedView_NativeEvent(KCategorizedView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KCategorizedView_QBaseNativeEvent(KCategorizedView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KCategorizedView_Metric(const KCategorizedView* self, int param1);
    friend int KCategorizedView_QBaseMetric(const KCategorizedView* self, int param1);
    friend void KCategorizedView_InitPainter(const KCategorizedView* self, QPainter* painter);
    friend void KCategorizedView_QBaseInitPainter(const KCategorizedView* self, QPainter* painter);
    friend QPaintDevice* KCategorizedView_Redirected(const KCategorizedView* self, QPoint* offset);
    friend QPaintDevice* KCategorizedView_QBaseRedirected(const KCategorizedView* self, QPoint* offset);
    friend QPainter* KCategorizedView_SharedPainter(const KCategorizedView* self);
    friend QPainter* KCategorizedView_QBaseSharedPainter(const KCategorizedView* self);
    friend void KCategorizedView_ChildEvent(KCategorizedView* self, QChildEvent* event);
    friend void KCategorizedView_QBaseChildEvent(KCategorizedView* self, QChildEvent* event);
    friend void KCategorizedView_CustomEvent(KCategorizedView* self, QEvent* event);
    friend void KCategorizedView_QBaseCustomEvent(KCategorizedView* self, QEvent* event);
    friend void KCategorizedView_ConnectNotify(KCategorizedView* self, const QMetaMethod* signal);
    friend void KCategorizedView_QBaseConnectNotify(KCategorizedView* self, const QMetaMethod* signal);
    friend void KCategorizedView_DisconnectNotify(KCategorizedView* self, const QMetaMethod* signal);
    friend void KCategorizedView_QBaseDisconnectNotify(KCategorizedView* self, const QMetaMethod* signal);
    friend void KCategorizedView_ResizeContents(KCategorizedView* self, int width, int height);
    friend void KCategorizedView_QBaseResizeContents(KCategorizedView* self, int width, int height);
    friend QSize* KCategorizedView_ContentsSize(const KCategorizedView* self);
    friend QSize* KCategorizedView_QBaseContentsSize(const KCategorizedView* self);
    friend QRect* KCategorizedView_RectForIndex(const KCategorizedView* self, const QModelIndex* index);
    friend QRect* KCategorizedView_QBaseRectForIndex(const KCategorizedView* self, const QModelIndex* index);
    friend void KCategorizedView_SetPositionForIndex(KCategorizedView* self, const QPoint* position, const QModelIndex* index);
    friend void KCategorizedView_QBaseSetPositionForIndex(KCategorizedView* self, const QPoint* position, const QModelIndex* index);
    friend int KCategorizedView_State(const KCategorizedView* self);
    friend int KCategorizedView_QBaseState(const KCategorizedView* self);
    friend void KCategorizedView_SetState(KCategorizedView* self, int state);
    friend void KCategorizedView_QBaseSetState(KCategorizedView* self, int state);
    friend void KCategorizedView_ScheduleDelayedItemsLayout(KCategorizedView* self);
    friend void KCategorizedView_QBaseScheduleDelayedItemsLayout(KCategorizedView* self);
    friend void KCategorizedView_ExecuteDelayedItemsLayout(KCategorizedView* self);
    friend void KCategorizedView_QBaseExecuteDelayedItemsLayout(KCategorizedView* self);
    friend void KCategorizedView_SetDirtyRegion(KCategorizedView* self, const QRegion* region);
    friend void KCategorizedView_QBaseSetDirtyRegion(KCategorizedView* self, const QRegion* region);
    friend void KCategorizedView_ScrollDirtyRegion(KCategorizedView* self, int dx, int dy);
    friend void KCategorizedView_QBaseScrollDirtyRegion(KCategorizedView* self, int dx, int dy);
    friend QPoint* KCategorizedView_DirtyRegionOffset(const KCategorizedView* self);
    friend QPoint* KCategorizedView_QBaseDirtyRegionOffset(const KCategorizedView* self);
    friend void KCategorizedView_StartAutoScroll(KCategorizedView* self);
    friend void KCategorizedView_QBaseStartAutoScroll(KCategorizedView* self);
    friend void KCategorizedView_StopAutoScroll(KCategorizedView* self);
    friend void KCategorizedView_QBaseStopAutoScroll(KCategorizedView* self);
    friend void KCategorizedView_DoAutoScroll(KCategorizedView* self);
    friend void KCategorizedView_QBaseDoAutoScroll(KCategorizedView* self);
    friend int KCategorizedView_DropIndicatorPosition(const KCategorizedView* self);
    friend int KCategorizedView_QBaseDropIndicatorPosition(const KCategorizedView* self);
    friend void KCategorizedView_SetViewportMargins(KCategorizedView* self, int left, int top, int right, int bottom);
    friend void KCategorizedView_QBaseSetViewportMargins(KCategorizedView* self, int left, int top, int right, int bottom);
    friend QMargins* KCategorizedView_ViewportMargins(const KCategorizedView* self);
    friend QMargins* KCategorizedView_QBaseViewportMargins(const KCategorizedView* self);
    friend void KCategorizedView_DrawFrame(KCategorizedView* self, QPainter* param1);
    friend void KCategorizedView_QBaseDrawFrame(KCategorizedView* self, QPainter* param1);
    friend void KCategorizedView_UpdateMicroFocus(KCategorizedView* self);
    friend void KCategorizedView_QBaseUpdateMicroFocus(KCategorizedView* self);
    friend void KCategorizedView_Create(KCategorizedView* self);
    friend void KCategorizedView_QBaseCreate(KCategorizedView* self);
    friend void KCategorizedView_Destroy(KCategorizedView* self);
    friend void KCategorizedView_QBaseDestroy(KCategorizedView* self);
    friend bool KCategorizedView_FocusNextChild(KCategorizedView* self);
    friend bool KCategorizedView_QBaseFocusNextChild(KCategorizedView* self);
    friend bool KCategorizedView_FocusPreviousChild(KCategorizedView* self);
    friend bool KCategorizedView_QBaseFocusPreviousChild(KCategorizedView* self);
    friend QObject* KCategorizedView_Sender(const KCategorizedView* self);
    friend QObject* KCategorizedView_QBaseSender(const KCategorizedView* self);
    friend int KCategorizedView_SenderSignalIndex(const KCategorizedView* self);
    friend int KCategorizedView_QBaseSenderSignalIndex(const KCategorizedView* self);
    friend int KCategorizedView_Receivers(const KCategorizedView* self, const char* signal);
    friend int KCategorizedView_QBaseReceivers(const KCategorizedView* self, const char* signal);
    friend bool KCategorizedView_IsSignalConnected(const KCategorizedView* self, const QMetaMethod* signal);
    friend bool KCategorizedView_QBaseIsSignalConnected(const KCategorizedView* self, const QMetaMethod* signal);
    friend double KCategorizedView_GetDecodedMetricF(const KCategorizedView* self, int metricA, int metricB);
    friend double KCategorizedView_QBaseGetDecodedMetricF(const KCategorizedView* self, int metricA, int metricB);
};

#endif
