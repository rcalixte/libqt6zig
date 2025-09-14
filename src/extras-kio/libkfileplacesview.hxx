#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEPLACESVIEW_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEPLACESVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilePlacesView so that we can call protected methods
class VirtualKFilePlacesView final : public KFilePlacesView {

  public:
    // Virtual class boolean flag
    bool isVirtualKFilePlacesView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using KFilePlacesView_Metacall_Callback = int (*)(KFilePlacesView*, int, int, void**);
    using KFilePlacesView_SizeHint_Callback = QSize* (*)();
    using KFilePlacesView_SetModel_Callback = void (*)(KFilePlacesView*, QAbstractItemModel*);
    using KFilePlacesView_KeyPressEvent_Callback = void (*)(KFilePlacesView*, QKeyEvent*);
    using KFilePlacesView_ContextMenuEvent_Callback = void (*)(KFilePlacesView*, QContextMenuEvent*);
    using KFilePlacesView_ResizeEvent_Callback = void (*)(KFilePlacesView*, QResizeEvent*);
    using KFilePlacesView_ShowEvent_Callback = void (*)(KFilePlacesView*, QShowEvent*);
    using KFilePlacesView_HideEvent_Callback = void (*)(KFilePlacesView*, QHideEvent*);
    using KFilePlacesView_DragEnterEvent_Callback = void (*)(KFilePlacesView*, QDragEnterEvent*);
    using KFilePlacesView_DragLeaveEvent_Callback = void (*)(KFilePlacesView*, QDragLeaveEvent*);
    using KFilePlacesView_DragMoveEvent_Callback = void (*)(KFilePlacesView*, QDragMoveEvent*);
    using KFilePlacesView_DropEvent_Callback = void (*)(KFilePlacesView*, QDropEvent*);
    using KFilePlacesView_PaintEvent_Callback = void (*)(KFilePlacesView*, QPaintEvent*);
    using KFilePlacesView_StartDrag_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_MousePressEvent_Callback = void (*)(KFilePlacesView*, QMouseEvent*);
    using KFilePlacesView_RowsInserted_Callback = void (*)(KFilePlacesView*, QModelIndex*, int, int);
    using KFilePlacesView_DataChanged_Callback = void (*)(KFilePlacesView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using KFilePlacesView_VisualRect_Callback = QRect* (*)(const KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_ScrollTo_Callback = void (*)(KFilePlacesView*, QModelIndex*, int);
    using KFilePlacesView_IndexAt_Callback = QModelIndex* (*)(const KFilePlacesView*, QPoint*);
    using KFilePlacesView_DoItemsLayout_Callback = void (*)();
    using KFilePlacesView_Reset_Callback = void (*)();
    using KFilePlacesView_SetRootIndex_Callback = void (*)(KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_Event_Callback = bool (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_ScrollContentsBy_Callback = void (*)(KFilePlacesView*, int, int);
    using KFilePlacesView_RowsAboutToBeRemoved_Callback = void (*)(KFilePlacesView*, QModelIndex*, int, int);
    using KFilePlacesView_MouseMoveEvent_Callback = void (*)(KFilePlacesView*, QMouseEvent*);
    using KFilePlacesView_MouseReleaseEvent_Callback = void (*)(KFilePlacesView*, QMouseEvent*);
    using KFilePlacesView_WheelEvent_Callback = void (*)(KFilePlacesView*, QWheelEvent*);
    using KFilePlacesView_TimerEvent_Callback = void (*)(KFilePlacesView*, QTimerEvent*);
    using KFilePlacesView_InitViewItemOption_Callback = void (*)(const KFilePlacesView*, QStyleOptionViewItem*);
    using KFilePlacesView_HorizontalOffset_Callback = int (*)();
    using KFilePlacesView_VerticalOffset_Callback = int (*)();
    using KFilePlacesView_MoveCursor_Callback = QModelIndex* (*)(KFilePlacesView*, int, int);
    using KFilePlacesView_SetSelection_Callback = void (*)(KFilePlacesView*, QRect*, int);
    using KFilePlacesView_VisualRegionForSelection_Callback = QRegion* (*)(const KFilePlacesView*, QItemSelection*);
    using KFilePlacesView_SelectedIndexes_Callback = QModelIndex** (*)();
    using KFilePlacesView_UpdateGeometries_Callback = void (*)();
    using KFilePlacesView_IsIndexHidden_Callback = bool (*)(const KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_SelectionChanged_Callback = void (*)(KFilePlacesView*, QItemSelection*, QItemSelection*);
    using KFilePlacesView_CurrentChanged_Callback = void (*)(KFilePlacesView*, QModelIndex*, QModelIndex*);
    using KFilePlacesView_ViewportSizeHint_Callback = QSize* (*)();
    using KFilePlacesView_SetSelectionModel_Callback = void (*)(KFilePlacesView*, QItemSelectionModel*);
    using KFilePlacesView_KeyboardSearch_Callback = void (*)(KFilePlacesView*, libqt_string);
    using KFilePlacesView_SizeHintForRow_Callback = int (*)(const KFilePlacesView*, int);
    using KFilePlacesView_SizeHintForColumn_Callback = int (*)(const KFilePlacesView*, int);
    using KFilePlacesView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_InputMethodQuery_Callback = QVariant* (*)(const KFilePlacesView*, int);
    using KFilePlacesView_SelectAll_Callback = void (*)();
    using KFilePlacesView_UpdateEditorData_Callback = void (*)();
    using KFilePlacesView_UpdateEditorGeometries_Callback = void (*)();
    using KFilePlacesView_VerticalScrollbarAction_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_HorizontalScrollbarAction_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_VerticalScrollbarValueChanged_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_HorizontalScrollbarValueChanged_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_CloseEditor_Callback = void (*)(KFilePlacesView*, QWidget*, int);
    using KFilePlacesView_CommitData_Callback = void (*)(KFilePlacesView*, QWidget*);
    using KFilePlacesView_EditorDestroyed_Callback = void (*)(KFilePlacesView*, QObject*);
    using KFilePlacesView_Edit2_Callback = bool (*)(KFilePlacesView*, QModelIndex*, int, QEvent*);
    using KFilePlacesView_SelectionCommand_Callback = int (*)(const KFilePlacesView*, QModelIndex*, QEvent*);
    using KFilePlacesView_FocusNextPrevChild_Callback = bool (*)(KFilePlacesView*, bool);
    using KFilePlacesView_ViewportEvent_Callback = bool (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_MouseDoubleClickEvent_Callback = void (*)(KFilePlacesView*, QMouseEvent*);
    using KFilePlacesView_FocusInEvent_Callback = void (*)(KFilePlacesView*, QFocusEvent*);
    using KFilePlacesView_FocusOutEvent_Callback = void (*)(KFilePlacesView*, QFocusEvent*);
    using KFilePlacesView_InputMethodEvent_Callback = void (*)(KFilePlacesView*, QInputMethodEvent*);
    using KFilePlacesView_EventFilter_Callback = bool (*)(KFilePlacesView*, QObject*, QEvent*);
    using KFilePlacesView_MinimumSizeHint_Callback = QSize* (*)();
    using KFilePlacesView_SetupViewport_Callback = void (*)(KFilePlacesView*, QWidget*);
    using KFilePlacesView_ChangeEvent_Callback = void (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_InitStyleOption_Callback = void (*)(const KFilePlacesView*, QStyleOptionFrame*);
    using KFilePlacesView_DevType_Callback = int (*)();
    using KFilePlacesView_SetVisible_Callback = void (*)(KFilePlacesView*, bool);
    using KFilePlacesView_HeightForWidth_Callback = int (*)(const KFilePlacesView*, int);
    using KFilePlacesView_HasHeightForWidth_Callback = bool (*)();
    using KFilePlacesView_PaintEngine_Callback = QPaintEngine* (*)();
    using KFilePlacesView_KeyReleaseEvent_Callback = void (*)(KFilePlacesView*, QKeyEvent*);
    using KFilePlacesView_EnterEvent_Callback = void (*)(KFilePlacesView*, QEnterEvent*);
    using KFilePlacesView_LeaveEvent_Callback = void (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_MoveEvent_Callback = void (*)(KFilePlacesView*, QMoveEvent*);
    using KFilePlacesView_CloseEvent_Callback = void (*)(KFilePlacesView*, QCloseEvent*);
    using KFilePlacesView_TabletEvent_Callback = void (*)(KFilePlacesView*, QTabletEvent*);
    using KFilePlacesView_ActionEvent_Callback = void (*)(KFilePlacesView*, QActionEvent*);
    using KFilePlacesView_NativeEvent_Callback = bool (*)(KFilePlacesView*, libqt_string, void*, intptr_t*);
    using KFilePlacesView_Metric_Callback = int (*)(const KFilePlacesView*, int);
    using KFilePlacesView_InitPainter_Callback = void (*)(const KFilePlacesView*, QPainter*);
    using KFilePlacesView_Redirected_Callback = QPaintDevice* (*)(const KFilePlacesView*, QPoint*);
    using KFilePlacesView_SharedPainter_Callback = QPainter* (*)();
    using KFilePlacesView_ChildEvent_Callback = void (*)(KFilePlacesView*, QChildEvent*);
    using KFilePlacesView_CustomEvent_Callback = void (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_ConnectNotify_Callback = void (*)(KFilePlacesView*, QMetaMethod*);
    using KFilePlacesView_DisconnectNotify_Callback = void (*)(KFilePlacesView*, QMetaMethod*);
    using KFilePlacesView_ResizeContents_Callback = void (*)(KFilePlacesView*, int, int);
    using KFilePlacesView_ContentsSize_Callback = QSize* (*)();
    using KFilePlacesView_RectForIndex_Callback = QRect* (*)(const KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_SetPositionForIndex_Callback = void (*)(KFilePlacesView*, QPoint*, QModelIndex*);
    using KFilePlacesView_State_Callback = int (*)();
    using KFilePlacesView_SetState_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using KFilePlacesView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using KFilePlacesView_SetDirtyRegion_Callback = void (*)(KFilePlacesView*, QRegion*);
    using KFilePlacesView_ScrollDirtyRegion_Callback = void (*)(KFilePlacesView*, int, int);
    using KFilePlacesView_DirtyRegionOffset_Callback = QPoint* (*)();
    using KFilePlacesView_StartAutoScroll_Callback = void (*)();
    using KFilePlacesView_StopAutoScroll_Callback = void (*)();
    using KFilePlacesView_DoAutoScroll_Callback = void (*)();
    using KFilePlacesView_DropIndicatorPosition_Callback = int (*)();
    using KFilePlacesView_SetViewportMargins_Callback = void (*)(KFilePlacesView*, int, int, int, int);
    using KFilePlacesView_ViewportMargins_Callback = QMargins* (*)();
    using KFilePlacesView_DrawFrame_Callback = void (*)(KFilePlacesView*, QPainter*);
    using KFilePlacesView_UpdateMicroFocus_Callback = void (*)();
    using KFilePlacesView_Create_Callback = void (*)();
    using KFilePlacesView_Destroy_Callback = void (*)();
    using KFilePlacesView_FocusNextChild_Callback = bool (*)();
    using KFilePlacesView_FocusPreviousChild_Callback = bool (*)();
    using KFilePlacesView_Sender_Callback = QObject* (*)();
    using KFilePlacesView_SenderSignalIndex_Callback = int (*)();
    using KFilePlacesView_Receivers_Callback = int (*)(const KFilePlacesView*, const char*);
    using KFilePlacesView_IsSignalConnected_Callback = bool (*)(const KFilePlacesView*, QMetaMethod*);
    using KFilePlacesView_GetDecodedMetricF_Callback = double (*)(const KFilePlacesView*, int, int);

  protected:
    // Instance callback storage
    KFilePlacesView_Metacall_Callback kfileplacesview_metacall_callback = nullptr;
    KFilePlacesView_SizeHint_Callback kfileplacesview_sizehint_callback = nullptr;
    KFilePlacesView_SetModel_Callback kfileplacesview_setmodel_callback = nullptr;
    KFilePlacesView_KeyPressEvent_Callback kfileplacesview_keypressevent_callback = nullptr;
    KFilePlacesView_ContextMenuEvent_Callback kfileplacesview_contextmenuevent_callback = nullptr;
    KFilePlacesView_ResizeEvent_Callback kfileplacesview_resizeevent_callback = nullptr;
    KFilePlacesView_ShowEvent_Callback kfileplacesview_showevent_callback = nullptr;
    KFilePlacesView_HideEvent_Callback kfileplacesview_hideevent_callback = nullptr;
    KFilePlacesView_DragEnterEvent_Callback kfileplacesview_dragenterevent_callback = nullptr;
    KFilePlacesView_DragLeaveEvent_Callback kfileplacesview_dragleaveevent_callback = nullptr;
    KFilePlacesView_DragMoveEvent_Callback kfileplacesview_dragmoveevent_callback = nullptr;
    KFilePlacesView_DropEvent_Callback kfileplacesview_dropevent_callback = nullptr;
    KFilePlacesView_PaintEvent_Callback kfileplacesview_paintevent_callback = nullptr;
    KFilePlacesView_StartDrag_Callback kfileplacesview_startdrag_callback = nullptr;
    KFilePlacesView_MousePressEvent_Callback kfileplacesview_mousepressevent_callback = nullptr;
    KFilePlacesView_RowsInserted_Callback kfileplacesview_rowsinserted_callback = nullptr;
    KFilePlacesView_DataChanged_Callback kfileplacesview_datachanged_callback = nullptr;
    KFilePlacesView_VisualRect_Callback kfileplacesview_visualrect_callback = nullptr;
    KFilePlacesView_ScrollTo_Callback kfileplacesview_scrollto_callback = nullptr;
    KFilePlacesView_IndexAt_Callback kfileplacesview_indexat_callback = nullptr;
    KFilePlacesView_DoItemsLayout_Callback kfileplacesview_doitemslayout_callback = nullptr;
    KFilePlacesView_Reset_Callback kfileplacesview_reset_callback = nullptr;
    KFilePlacesView_SetRootIndex_Callback kfileplacesview_setrootindex_callback = nullptr;
    KFilePlacesView_Event_Callback kfileplacesview_event_callback = nullptr;
    KFilePlacesView_ScrollContentsBy_Callback kfileplacesview_scrollcontentsby_callback = nullptr;
    KFilePlacesView_RowsAboutToBeRemoved_Callback kfileplacesview_rowsabouttoberemoved_callback = nullptr;
    KFilePlacesView_MouseMoveEvent_Callback kfileplacesview_mousemoveevent_callback = nullptr;
    KFilePlacesView_MouseReleaseEvent_Callback kfileplacesview_mousereleaseevent_callback = nullptr;
    KFilePlacesView_WheelEvent_Callback kfileplacesview_wheelevent_callback = nullptr;
    KFilePlacesView_TimerEvent_Callback kfileplacesview_timerevent_callback = nullptr;
    KFilePlacesView_InitViewItemOption_Callback kfileplacesview_initviewitemoption_callback = nullptr;
    KFilePlacesView_HorizontalOffset_Callback kfileplacesview_horizontaloffset_callback = nullptr;
    KFilePlacesView_VerticalOffset_Callback kfileplacesview_verticaloffset_callback = nullptr;
    KFilePlacesView_MoveCursor_Callback kfileplacesview_movecursor_callback = nullptr;
    KFilePlacesView_SetSelection_Callback kfileplacesview_setselection_callback = nullptr;
    KFilePlacesView_VisualRegionForSelection_Callback kfileplacesview_visualregionforselection_callback = nullptr;
    KFilePlacesView_SelectedIndexes_Callback kfileplacesview_selectedindexes_callback = nullptr;
    KFilePlacesView_UpdateGeometries_Callback kfileplacesview_updategeometries_callback = nullptr;
    KFilePlacesView_IsIndexHidden_Callback kfileplacesview_isindexhidden_callback = nullptr;
    KFilePlacesView_SelectionChanged_Callback kfileplacesview_selectionchanged_callback = nullptr;
    KFilePlacesView_CurrentChanged_Callback kfileplacesview_currentchanged_callback = nullptr;
    KFilePlacesView_ViewportSizeHint_Callback kfileplacesview_viewportsizehint_callback = nullptr;
    KFilePlacesView_SetSelectionModel_Callback kfileplacesview_setselectionmodel_callback = nullptr;
    KFilePlacesView_KeyboardSearch_Callback kfileplacesview_keyboardsearch_callback = nullptr;
    KFilePlacesView_SizeHintForRow_Callback kfileplacesview_sizehintforrow_callback = nullptr;
    KFilePlacesView_SizeHintForColumn_Callback kfileplacesview_sizehintforcolumn_callback = nullptr;
    KFilePlacesView_ItemDelegateForIndex_Callback kfileplacesview_itemdelegateforindex_callback = nullptr;
    KFilePlacesView_InputMethodQuery_Callback kfileplacesview_inputmethodquery_callback = nullptr;
    KFilePlacesView_SelectAll_Callback kfileplacesview_selectall_callback = nullptr;
    KFilePlacesView_UpdateEditorData_Callback kfileplacesview_updateeditordata_callback = nullptr;
    KFilePlacesView_UpdateEditorGeometries_Callback kfileplacesview_updateeditorgeometries_callback = nullptr;
    KFilePlacesView_VerticalScrollbarAction_Callback kfileplacesview_verticalscrollbaraction_callback = nullptr;
    KFilePlacesView_HorizontalScrollbarAction_Callback kfileplacesview_horizontalscrollbaraction_callback = nullptr;
    KFilePlacesView_VerticalScrollbarValueChanged_Callback kfileplacesview_verticalscrollbarvaluechanged_callback = nullptr;
    KFilePlacesView_HorizontalScrollbarValueChanged_Callback kfileplacesview_horizontalscrollbarvaluechanged_callback = nullptr;
    KFilePlacesView_CloseEditor_Callback kfileplacesview_closeeditor_callback = nullptr;
    KFilePlacesView_CommitData_Callback kfileplacesview_commitdata_callback = nullptr;
    KFilePlacesView_EditorDestroyed_Callback kfileplacesview_editordestroyed_callback = nullptr;
    KFilePlacesView_Edit2_Callback kfileplacesview_edit2_callback = nullptr;
    KFilePlacesView_SelectionCommand_Callback kfileplacesview_selectioncommand_callback = nullptr;
    KFilePlacesView_FocusNextPrevChild_Callback kfileplacesview_focusnextprevchild_callback = nullptr;
    KFilePlacesView_ViewportEvent_Callback kfileplacesview_viewportevent_callback = nullptr;
    KFilePlacesView_MouseDoubleClickEvent_Callback kfileplacesview_mousedoubleclickevent_callback = nullptr;
    KFilePlacesView_FocusInEvent_Callback kfileplacesview_focusinevent_callback = nullptr;
    KFilePlacesView_FocusOutEvent_Callback kfileplacesview_focusoutevent_callback = nullptr;
    KFilePlacesView_InputMethodEvent_Callback kfileplacesview_inputmethodevent_callback = nullptr;
    KFilePlacesView_EventFilter_Callback kfileplacesview_eventfilter_callback = nullptr;
    KFilePlacesView_MinimumSizeHint_Callback kfileplacesview_minimumsizehint_callback = nullptr;
    KFilePlacesView_SetupViewport_Callback kfileplacesview_setupviewport_callback = nullptr;
    KFilePlacesView_ChangeEvent_Callback kfileplacesview_changeevent_callback = nullptr;
    KFilePlacesView_InitStyleOption_Callback kfileplacesview_initstyleoption_callback = nullptr;
    KFilePlacesView_DevType_Callback kfileplacesview_devtype_callback = nullptr;
    KFilePlacesView_SetVisible_Callback kfileplacesview_setvisible_callback = nullptr;
    KFilePlacesView_HeightForWidth_Callback kfileplacesview_heightforwidth_callback = nullptr;
    KFilePlacesView_HasHeightForWidth_Callback kfileplacesview_hasheightforwidth_callback = nullptr;
    KFilePlacesView_PaintEngine_Callback kfileplacesview_paintengine_callback = nullptr;
    KFilePlacesView_KeyReleaseEvent_Callback kfileplacesview_keyreleaseevent_callback = nullptr;
    KFilePlacesView_EnterEvent_Callback kfileplacesview_enterevent_callback = nullptr;
    KFilePlacesView_LeaveEvent_Callback kfileplacesview_leaveevent_callback = nullptr;
    KFilePlacesView_MoveEvent_Callback kfileplacesview_moveevent_callback = nullptr;
    KFilePlacesView_CloseEvent_Callback kfileplacesview_closeevent_callback = nullptr;
    KFilePlacesView_TabletEvent_Callback kfileplacesview_tabletevent_callback = nullptr;
    KFilePlacesView_ActionEvent_Callback kfileplacesview_actionevent_callback = nullptr;
    KFilePlacesView_NativeEvent_Callback kfileplacesview_nativeevent_callback = nullptr;
    KFilePlacesView_Metric_Callback kfileplacesview_metric_callback = nullptr;
    KFilePlacesView_InitPainter_Callback kfileplacesview_initpainter_callback = nullptr;
    KFilePlacesView_Redirected_Callback kfileplacesview_redirected_callback = nullptr;
    KFilePlacesView_SharedPainter_Callback kfileplacesview_sharedpainter_callback = nullptr;
    KFilePlacesView_ChildEvent_Callback kfileplacesview_childevent_callback = nullptr;
    KFilePlacesView_CustomEvent_Callback kfileplacesview_customevent_callback = nullptr;
    KFilePlacesView_ConnectNotify_Callback kfileplacesview_connectnotify_callback = nullptr;
    KFilePlacesView_DisconnectNotify_Callback kfileplacesview_disconnectnotify_callback = nullptr;
    KFilePlacesView_ResizeContents_Callback kfileplacesview_resizecontents_callback = nullptr;
    KFilePlacesView_ContentsSize_Callback kfileplacesview_contentssize_callback = nullptr;
    KFilePlacesView_RectForIndex_Callback kfileplacesview_rectforindex_callback = nullptr;
    KFilePlacesView_SetPositionForIndex_Callback kfileplacesview_setpositionforindex_callback = nullptr;
    KFilePlacesView_State_Callback kfileplacesview_state_callback = nullptr;
    KFilePlacesView_SetState_Callback kfileplacesview_setstate_callback = nullptr;
    KFilePlacesView_ScheduleDelayedItemsLayout_Callback kfileplacesview_scheduledelayeditemslayout_callback = nullptr;
    KFilePlacesView_ExecuteDelayedItemsLayout_Callback kfileplacesview_executedelayeditemslayout_callback = nullptr;
    KFilePlacesView_SetDirtyRegion_Callback kfileplacesview_setdirtyregion_callback = nullptr;
    KFilePlacesView_ScrollDirtyRegion_Callback kfileplacesview_scrolldirtyregion_callback = nullptr;
    KFilePlacesView_DirtyRegionOffset_Callback kfileplacesview_dirtyregionoffset_callback = nullptr;
    KFilePlacesView_StartAutoScroll_Callback kfileplacesview_startautoscroll_callback = nullptr;
    KFilePlacesView_StopAutoScroll_Callback kfileplacesview_stopautoscroll_callback = nullptr;
    KFilePlacesView_DoAutoScroll_Callback kfileplacesview_doautoscroll_callback = nullptr;
    KFilePlacesView_DropIndicatorPosition_Callback kfileplacesview_dropindicatorposition_callback = nullptr;
    KFilePlacesView_SetViewportMargins_Callback kfileplacesview_setviewportmargins_callback = nullptr;
    KFilePlacesView_ViewportMargins_Callback kfileplacesview_viewportmargins_callback = nullptr;
    KFilePlacesView_DrawFrame_Callback kfileplacesview_drawframe_callback = nullptr;
    KFilePlacesView_UpdateMicroFocus_Callback kfileplacesview_updatemicrofocus_callback = nullptr;
    KFilePlacesView_Create_Callback kfileplacesview_create_callback = nullptr;
    KFilePlacesView_Destroy_Callback kfileplacesview_destroy_callback = nullptr;
    KFilePlacesView_FocusNextChild_Callback kfileplacesview_focusnextchild_callback = nullptr;
    KFilePlacesView_FocusPreviousChild_Callback kfileplacesview_focuspreviouschild_callback = nullptr;
    KFilePlacesView_Sender_Callback kfileplacesview_sender_callback = nullptr;
    KFilePlacesView_SenderSignalIndex_Callback kfileplacesview_sendersignalindex_callback = nullptr;
    KFilePlacesView_Receivers_Callback kfileplacesview_receivers_callback = nullptr;
    KFilePlacesView_IsSignalConnected_Callback kfileplacesview_issignalconnected_callback = nullptr;
    KFilePlacesView_GetDecodedMetricF_Callback kfileplacesview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kfileplacesview_metacall_isbase = false;
    mutable bool kfileplacesview_sizehint_isbase = false;
    mutable bool kfileplacesview_setmodel_isbase = false;
    mutable bool kfileplacesview_keypressevent_isbase = false;
    mutable bool kfileplacesview_contextmenuevent_isbase = false;
    mutable bool kfileplacesview_resizeevent_isbase = false;
    mutable bool kfileplacesview_showevent_isbase = false;
    mutable bool kfileplacesview_hideevent_isbase = false;
    mutable bool kfileplacesview_dragenterevent_isbase = false;
    mutable bool kfileplacesview_dragleaveevent_isbase = false;
    mutable bool kfileplacesview_dragmoveevent_isbase = false;
    mutable bool kfileplacesview_dropevent_isbase = false;
    mutable bool kfileplacesview_paintevent_isbase = false;
    mutable bool kfileplacesview_startdrag_isbase = false;
    mutable bool kfileplacesview_mousepressevent_isbase = false;
    mutable bool kfileplacesview_rowsinserted_isbase = false;
    mutable bool kfileplacesview_datachanged_isbase = false;
    mutable bool kfileplacesview_visualrect_isbase = false;
    mutable bool kfileplacesview_scrollto_isbase = false;
    mutable bool kfileplacesview_indexat_isbase = false;
    mutable bool kfileplacesview_doitemslayout_isbase = false;
    mutable bool kfileplacesview_reset_isbase = false;
    mutable bool kfileplacesview_setrootindex_isbase = false;
    mutable bool kfileplacesview_event_isbase = false;
    mutable bool kfileplacesview_scrollcontentsby_isbase = false;
    mutable bool kfileplacesview_rowsabouttoberemoved_isbase = false;
    mutable bool kfileplacesview_mousemoveevent_isbase = false;
    mutable bool kfileplacesview_mousereleaseevent_isbase = false;
    mutable bool kfileplacesview_wheelevent_isbase = false;
    mutable bool kfileplacesview_timerevent_isbase = false;
    mutable bool kfileplacesview_initviewitemoption_isbase = false;
    mutable bool kfileplacesview_horizontaloffset_isbase = false;
    mutable bool kfileplacesview_verticaloffset_isbase = false;
    mutable bool kfileplacesview_movecursor_isbase = false;
    mutable bool kfileplacesview_setselection_isbase = false;
    mutable bool kfileplacesview_visualregionforselection_isbase = false;
    mutable bool kfileplacesview_selectedindexes_isbase = false;
    mutable bool kfileplacesview_updategeometries_isbase = false;
    mutable bool kfileplacesview_isindexhidden_isbase = false;
    mutable bool kfileplacesview_selectionchanged_isbase = false;
    mutable bool kfileplacesview_currentchanged_isbase = false;
    mutable bool kfileplacesview_viewportsizehint_isbase = false;
    mutable bool kfileplacesview_setselectionmodel_isbase = false;
    mutable bool kfileplacesview_keyboardsearch_isbase = false;
    mutable bool kfileplacesview_sizehintforrow_isbase = false;
    mutable bool kfileplacesview_sizehintforcolumn_isbase = false;
    mutable bool kfileplacesview_itemdelegateforindex_isbase = false;
    mutable bool kfileplacesview_inputmethodquery_isbase = false;
    mutable bool kfileplacesview_selectall_isbase = false;
    mutable bool kfileplacesview_updateeditordata_isbase = false;
    mutable bool kfileplacesview_updateeditorgeometries_isbase = false;
    mutable bool kfileplacesview_verticalscrollbaraction_isbase = false;
    mutable bool kfileplacesview_horizontalscrollbaraction_isbase = false;
    mutable bool kfileplacesview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool kfileplacesview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool kfileplacesview_closeeditor_isbase = false;
    mutable bool kfileplacesview_commitdata_isbase = false;
    mutable bool kfileplacesview_editordestroyed_isbase = false;
    mutable bool kfileplacesview_edit2_isbase = false;
    mutable bool kfileplacesview_selectioncommand_isbase = false;
    mutable bool kfileplacesview_focusnextprevchild_isbase = false;
    mutable bool kfileplacesview_viewportevent_isbase = false;
    mutable bool kfileplacesview_mousedoubleclickevent_isbase = false;
    mutable bool kfileplacesview_focusinevent_isbase = false;
    mutable bool kfileplacesview_focusoutevent_isbase = false;
    mutable bool kfileplacesview_inputmethodevent_isbase = false;
    mutable bool kfileplacesview_eventfilter_isbase = false;
    mutable bool kfileplacesview_minimumsizehint_isbase = false;
    mutable bool kfileplacesview_setupviewport_isbase = false;
    mutable bool kfileplacesview_changeevent_isbase = false;
    mutable bool kfileplacesview_initstyleoption_isbase = false;
    mutable bool kfileplacesview_devtype_isbase = false;
    mutable bool kfileplacesview_setvisible_isbase = false;
    mutable bool kfileplacesview_heightforwidth_isbase = false;
    mutable bool kfileplacesview_hasheightforwidth_isbase = false;
    mutable bool kfileplacesview_paintengine_isbase = false;
    mutable bool kfileplacesview_keyreleaseevent_isbase = false;
    mutable bool kfileplacesview_enterevent_isbase = false;
    mutable bool kfileplacesview_leaveevent_isbase = false;
    mutable bool kfileplacesview_moveevent_isbase = false;
    mutable bool kfileplacesview_closeevent_isbase = false;
    mutable bool kfileplacesview_tabletevent_isbase = false;
    mutable bool kfileplacesview_actionevent_isbase = false;
    mutable bool kfileplacesview_nativeevent_isbase = false;
    mutable bool kfileplacesview_metric_isbase = false;
    mutable bool kfileplacesview_initpainter_isbase = false;
    mutable bool kfileplacesview_redirected_isbase = false;
    mutable bool kfileplacesview_sharedpainter_isbase = false;
    mutable bool kfileplacesview_childevent_isbase = false;
    mutable bool kfileplacesview_customevent_isbase = false;
    mutable bool kfileplacesview_connectnotify_isbase = false;
    mutable bool kfileplacesview_disconnectnotify_isbase = false;
    mutable bool kfileplacesview_resizecontents_isbase = false;
    mutable bool kfileplacesview_contentssize_isbase = false;
    mutable bool kfileplacesview_rectforindex_isbase = false;
    mutable bool kfileplacesview_setpositionforindex_isbase = false;
    mutable bool kfileplacesview_state_isbase = false;
    mutable bool kfileplacesview_setstate_isbase = false;
    mutable bool kfileplacesview_scheduledelayeditemslayout_isbase = false;
    mutable bool kfileplacesview_executedelayeditemslayout_isbase = false;
    mutable bool kfileplacesview_setdirtyregion_isbase = false;
    mutable bool kfileplacesview_scrolldirtyregion_isbase = false;
    mutable bool kfileplacesview_dirtyregionoffset_isbase = false;
    mutable bool kfileplacesview_startautoscroll_isbase = false;
    mutable bool kfileplacesview_stopautoscroll_isbase = false;
    mutable bool kfileplacesview_doautoscroll_isbase = false;
    mutable bool kfileplacesview_dropindicatorposition_isbase = false;
    mutable bool kfileplacesview_setviewportmargins_isbase = false;
    mutable bool kfileplacesview_viewportmargins_isbase = false;
    mutable bool kfileplacesview_drawframe_isbase = false;
    mutable bool kfileplacesview_updatemicrofocus_isbase = false;
    mutable bool kfileplacesview_create_isbase = false;
    mutable bool kfileplacesview_destroy_isbase = false;
    mutable bool kfileplacesview_focusnextchild_isbase = false;
    mutable bool kfileplacesview_focuspreviouschild_isbase = false;
    mutable bool kfileplacesview_sender_isbase = false;
    mutable bool kfileplacesview_sendersignalindex_isbase = false;
    mutable bool kfileplacesview_receivers_isbase = false;
    mutable bool kfileplacesview_issignalconnected_isbase = false;
    mutable bool kfileplacesview_getdecodedmetricf_isbase = false;

  public:
    VirtualKFilePlacesView(QWidget* parent) : KFilePlacesView(parent) {};
    VirtualKFilePlacesView() : KFilePlacesView() {};

    ~VirtualKFilePlacesView() {
        kfileplacesview_metacall_callback = nullptr;
        kfileplacesview_sizehint_callback = nullptr;
        kfileplacesview_setmodel_callback = nullptr;
        kfileplacesview_keypressevent_callback = nullptr;
        kfileplacesview_contextmenuevent_callback = nullptr;
        kfileplacesview_resizeevent_callback = nullptr;
        kfileplacesview_showevent_callback = nullptr;
        kfileplacesview_hideevent_callback = nullptr;
        kfileplacesview_dragenterevent_callback = nullptr;
        kfileplacesview_dragleaveevent_callback = nullptr;
        kfileplacesview_dragmoveevent_callback = nullptr;
        kfileplacesview_dropevent_callback = nullptr;
        kfileplacesview_paintevent_callback = nullptr;
        kfileplacesview_startdrag_callback = nullptr;
        kfileplacesview_mousepressevent_callback = nullptr;
        kfileplacesview_rowsinserted_callback = nullptr;
        kfileplacesview_datachanged_callback = nullptr;
        kfileplacesview_visualrect_callback = nullptr;
        kfileplacesview_scrollto_callback = nullptr;
        kfileplacesview_indexat_callback = nullptr;
        kfileplacesview_doitemslayout_callback = nullptr;
        kfileplacesview_reset_callback = nullptr;
        kfileplacesview_setrootindex_callback = nullptr;
        kfileplacesview_event_callback = nullptr;
        kfileplacesview_scrollcontentsby_callback = nullptr;
        kfileplacesview_rowsabouttoberemoved_callback = nullptr;
        kfileplacesview_mousemoveevent_callback = nullptr;
        kfileplacesview_mousereleaseevent_callback = nullptr;
        kfileplacesview_wheelevent_callback = nullptr;
        kfileplacesview_timerevent_callback = nullptr;
        kfileplacesview_initviewitemoption_callback = nullptr;
        kfileplacesview_horizontaloffset_callback = nullptr;
        kfileplacesview_verticaloffset_callback = nullptr;
        kfileplacesview_movecursor_callback = nullptr;
        kfileplacesview_setselection_callback = nullptr;
        kfileplacesview_visualregionforselection_callback = nullptr;
        kfileplacesview_selectedindexes_callback = nullptr;
        kfileplacesview_updategeometries_callback = nullptr;
        kfileplacesview_isindexhidden_callback = nullptr;
        kfileplacesview_selectionchanged_callback = nullptr;
        kfileplacesview_currentchanged_callback = nullptr;
        kfileplacesview_viewportsizehint_callback = nullptr;
        kfileplacesview_setselectionmodel_callback = nullptr;
        kfileplacesview_keyboardsearch_callback = nullptr;
        kfileplacesview_sizehintforrow_callback = nullptr;
        kfileplacesview_sizehintforcolumn_callback = nullptr;
        kfileplacesview_itemdelegateforindex_callback = nullptr;
        kfileplacesview_inputmethodquery_callback = nullptr;
        kfileplacesview_selectall_callback = nullptr;
        kfileplacesview_updateeditordata_callback = nullptr;
        kfileplacesview_updateeditorgeometries_callback = nullptr;
        kfileplacesview_verticalscrollbaraction_callback = nullptr;
        kfileplacesview_horizontalscrollbaraction_callback = nullptr;
        kfileplacesview_verticalscrollbarvaluechanged_callback = nullptr;
        kfileplacesview_horizontalscrollbarvaluechanged_callback = nullptr;
        kfileplacesview_closeeditor_callback = nullptr;
        kfileplacesview_commitdata_callback = nullptr;
        kfileplacesview_editordestroyed_callback = nullptr;
        kfileplacesview_edit2_callback = nullptr;
        kfileplacesview_selectioncommand_callback = nullptr;
        kfileplacesview_focusnextprevchild_callback = nullptr;
        kfileplacesview_viewportevent_callback = nullptr;
        kfileplacesview_mousedoubleclickevent_callback = nullptr;
        kfileplacesview_focusinevent_callback = nullptr;
        kfileplacesview_focusoutevent_callback = nullptr;
        kfileplacesview_inputmethodevent_callback = nullptr;
        kfileplacesview_eventfilter_callback = nullptr;
        kfileplacesview_minimumsizehint_callback = nullptr;
        kfileplacesview_setupviewport_callback = nullptr;
        kfileplacesview_changeevent_callback = nullptr;
        kfileplacesview_initstyleoption_callback = nullptr;
        kfileplacesview_devtype_callback = nullptr;
        kfileplacesview_setvisible_callback = nullptr;
        kfileplacesview_heightforwidth_callback = nullptr;
        kfileplacesview_hasheightforwidth_callback = nullptr;
        kfileplacesview_paintengine_callback = nullptr;
        kfileplacesview_keyreleaseevent_callback = nullptr;
        kfileplacesview_enterevent_callback = nullptr;
        kfileplacesview_leaveevent_callback = nullptr;
        kfileplacesview_moveevent_callback = nullptr;
        kfileplacesview_closeevent_callback = nullptr;
        kfileplacesview_tabletevent_callback = nullptr;
        kfileplacesview_actionevent_callback = nullptr;
        kfileplacesview_nativeevent_callback = nullptr;
        kfileplacesview_metric_callback = nullptr;
        kfileplacesview_initpainter_callback = nullptr;
        kfileplacesview_redirected_callback = nullptr;
        kfileplacesview_sharedpainter_callback = nullptr;
        kfileplacesview_childevent_callback = nullptr;
        kfileplacesview_customevent_callback = nullptr;
        kfileplacesview_connectnotify_callback = nullptr;
        kfileplacesview_disconnectnotify_callback = nullptr;
        kfileplacesview_resizecontents_callback = nullptr;
        kfileplacesview_contentssize_callback = nullptr;
        kfileplacesview_rectforindex_callback = nullptr;
        kfileplacesview_setpositionforindex_callback = nullptr;
        kfileplacesview_state_callback = nullptr;
        kfileplacesview_setstate_callback = nullptr;
        kfileplacesview_scheduledelayeditemslayout_callback = nullptr;
        kfileplacesview_executedelayeditemslayout_callback = nullptr;
        kfileplacesview_setdirtyregion_callback = nullptr;
        kfileplacesview_scrolldirtyregion_callback = nullptr;
        kfileplacesview_dirtyregionoffset_callback = nullptr;
        kfileplacesview_startautoscroll_callback = nullptr;
        kfileplacesview_stopautoscroll_callback = nullptr;
        kfileplacesview_doautoscroll_callback = nullptr;
        kfileplacesview_dropindicatorposition_callback = nullptr;
        kfileplacesview_setviewportmargins_callback = nullptr;
        kfileplacesview_viewportmargins_callback = nullptr;
        kfileplacesview_drawframe_callback = nullptr;
        kfileplacesview_updatemicrofocus_callback = nullptr;
        kfileplacesview_create_callback = nullptr;
        kfileplacesview_destroy_callback = nullptr;
        kfileplacesview_focusnextchild_callback = nullptr;
        kfileplacesview_focuspreviouschild_callback = nullptr;
        kfileplacesview_sender_callback = nullptr;
        kfileplacesview_sendersignalindex_callback = nullptr;
        kfileplacesview_receivers_callback = nullptr;
        kfileplacesview_issignalconnected_callback = nullptr;
        kfileplacesview_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKFilePlacesView_Metacall_Callback(KFilePlacesView_Metacall_Callback cb) { kfileplacesview_metacall_callback = cb; }
    inline void setKFilePlacesView_SizeHint_Callback(KFilePlacesView_SizeHint_Callback cb) { kfileplacesview_sizehint_callback = cb; }
    inline void setKFilePlacesView_SetModel_Callback(KFilePlacesView_SetModel_Callback cb) { kfileplacesview_setmodel_callback = cb; }
    inline void setKFilePlacesView_KeyPressEvent_Callback(KFilePlacesView_KeyPressEvent_Callback cb) { kfileplacesview_keypressevent_callback = cb; }
    inline void setKFilePlacesView_ContextMenuEvent_Callback(KFilePlacesView_ContextMenuEvent_Callback cb) { kfileplacesview_contextmenuevent_callback = cb; }
    inline void setKFilePlacesView_ResizeEvent_Callback(KFilePlacesView_ResizeEvent_Callback cb) { kfileplacesview_resizeevent_callback = cb; }
    inline void setKFilePlacesView_ShowEvent_Callback(KFilePlacesView_ShowEvent_Callback cb) { kfileplacesview_showevent_callback = cb; }
    inline void setKFilePlacesView_HideEvent_Callback(KFilePlacesView_HideEvent_Callback cb) { kfileplacesview_hideevent_callback = cb; }
    inline void setKFilePlacesView_DragEnterEvent_Callback(KFilePlacesView_DragEnterEvent_Callback cb) { kfileplacesview_dragenterevent_callback = cb; }
    inline void setKFilePlacesView_DragLeaveEvent_Callback(KFilePlacesView_DragLeaveEvent_Callback cb) { kfileplacesview_dragleaveevent_callback = cb; }
    inline void setKFilePlacesView_DragMoveEvent_Callback(KFilePlacesView_DragMoveEvent_Callback cb) { kfileplacesview_dragmoveevent_callback = cb; }
    inline void setKFilePlacesView_DropEvent_Callback(KFilePlacesView_DropEvent_Callback cb) { kfileplacesview_dropevent_callback = cb; }
    inline void setKFilePlacesView_PaintEvent_Callback(KFilePlacesView_PaintEvent_Callback cb) { kfileplacesview_paintevent_callback = cb; }
    inline void setKFilePlacesView_StartDrag_Callback(KFilePlacesView_StartDrag_Callback cb) { kfileplacesview_startdrag_callback = cb; }
    inline void setKFilePlacesView_MousePressEvent_Callback(KFilePlacesView_MousePressEvent_Callback cb) { kfileplacesview_mousepressevent_callback = cb; }
    inline void setKFilePlacesView_RowsInserted_Callback(KFilePlacesView_RowsInserted_Callback cb) { kfileplacesview_rowsinserted_callback = cb; }
    inline void setKFilePlacesView_DataChanged_Callback(KFilePlacesView_DataChanged_Callback cb) { kfileplacesview_datachanged_callback = cb; }
    inline void setKFilePlacesView_VisualRect_Callback(KFilePlacesView_VisualRect_Callback cb) { kfileplacesview_visualrect_callback = cb; }
    inline void setKFilePlacesView_ScrollTo_Callback(KFilePlacesView_ScrollTo_Callback cb) { kfileplacesview_scrollto_callback = cb; }
    inline void setKFilePlacesView_IndexAt_Callback(KFilePlacesView_IndexAt_Callback cb) { kfileplacesview_indexat_callback = cb; }
    inline void setKFilePlacesView_DoItemsLayout_Callback(KFilePlacesView_DoItemsLayout_Callback cb) { kfileplacesview_doitemslayout_callback = cb; }
    inline void setKFilePlacesView_Reset_Callback(KFilePlacesView_Reset_Callback cb) { kfileplacesview_reset_callback = cb; }
    inline void setKFilePlacesView_SetRootIndex_Callback(KFilePlacesView_SetRootIndex_Callback cb) { kfileplacesview_setrootindex_callback = cb; }
    inline void setKFilePlacesView_Event_Callback(KFilePlacesView_Event_Callback cb) { kfileplacesview_event_callback = cb; }
    inline void setKFilePlacesView_ScrollContentsBy_Callback(KFilePlacesView_ScrollContentsBy_Callback cb) { kfileplacesview_scrollcontentsby_callback = cb; }
    inline void setKFilePlacesView_RowsAboutToBeRemoved_Callback(KFilePlacesView_RowsAboutToBeRemoved_Callback cb) { kfileplacesview_rowsabouttoberemoved_callback = cb; }
    inline void setKFilePlacesView_MouseMoveEvent_Callback(KFilePlacesView_MouseMoveEvent_Callback cb) { kfileplacesview_mousemoveevent_callback = cb; }
    inline void setKFilePlacesView_MouseReleaseEvent_Callback(KFilePlacesView_MouseReleaseEvent_Callback cb) { kfileplacesview_mousereleaseevent_callback = cb; }
    inline void setKFilePlacesView_WheelEvent_Callback(KFilePlacesView_WheelEvent_Callback cb) { kfileplacesview_wheelevent_callback = cb; }
    inline void setKFilePlacesView_TimerEvent_Callback(KFilePlacesView_TimerEvent_Callback cb) { kfileplacesview_timerevent_callback = cb; }
    inline void setKFilePlacesView_InitViewItemOption_Callback(KFilePlacesView_InitViewItemOption_Callback cb) { kfileplacesview_initviewitemoption_callback = cb; }
    inline void setKFilePlacesView_HorizontalOffset_Callback(KFilePlacesView_HorizontalOffset_Callback cb) { kfileplacesview_horizontaloffset_callback = cb; }
    inline void setKFilePlacesView_VerticalOffset_Callback(KFilePlacesView_VerticalOffset_Callback cb) { kfileplacesview_verticaloffset_callback = cb; }
    inline void setKFilePlacesView_MoveCursor_Callback(KFilePlacesView_MoveCursor_Callback cb) { kfileplacesview_movecursor_callback = cb; }
    inline void setKFilePlacesView_SetSelection_Callback(KFilePlacesView_SetSelection_Callback cb) { kfileplacesview_setselection_callback = cb; }
    inline void setKFilePlacesView_VisualRegionForSelection_Callback(KFilePlacesView_VisualRegionForSelection_Callback cb) { kfileplacesview_visualregionforselection_callback = cb; }
    inline void setKFilePlacesView_SelectedIndexes_Callback(KFilePlacesView_SelectedIndexes_Callback cb) { kfileplacesview_selectedindexes_callback = cb; }
    inline void setKFilePlacesView_UpdateGeometries_Callback(KFilePlacesView_UpdateGeometries_Callback cb) { kfileplacesview_updategeometries_callback = cb; }
    inline void setKFilePlacesView_IsIndexHidden_Callback(KFilePlacesView_IsIndexHidden_Callback cb) { kfileplacesview_isindexhidden_callback = cb; }
    inline void setKFilePlacesView_SelectionChanged_Callback(KFilePlacesView_SelectionChanged_Callback cb) { kfileplacesview_selectionchanged_callback = cb; }
    inline void setKFilePlacesView_CurrentChanged_Callback(KFilePlacesView_CurrentChanged_Callback cb) { kfileplacesview_currentchanged_callback = cb; }
    inline void setKFilePlacesView_ViewportSizeHint_Callback(KFilePlacesView_ViewportSizeHint_Callback cb) { kfileplacesview_viewportsizehint_callback = cb; }
    inline void setKFilePlacesView_SetSelectionModel_Callback(KFilePlacesView_SetSelectionModel_Callback cb) { kfileplacesview_setselectionmodel_callback = cb; }
    inline void setKFilePlacesView_KeyboardSearch_Callback(KFilePlacesView_KeyboardSearch_Callback cb) { kfileplacesview_keyboardsearch_callback = cb; }
    inline void setKFilePlacesView_SizeHintForRow_Callback(KFilePlacesView_SizeHintForRow_Callback cb) { kfileplacesview_sizehintforrow_callback = cb; }
    inline void setKFilePlacesView_SizeHintForColumn_Callback(KFilePlacesView_SizeHintForColumn_Callback cb) { kfileplacesview_sizehintforcolumn_callback = cb; }
    inline void setKFilePlacesView_ItemDelegateForIndex_Callback(KFilePlacesView_ItemDelegateForIndex_Callback cb) { kfileplacesview_itemdelegateforindex_callback = cb; }
    inline void setKFilePlacesView_InputMethodQuery_Callback(KFilePlacesView_InputMethodQuery_Callback cb) { kfileplacesview_inputmethodquery_callback = cb; }
    inline void setKFilePlacesView_SelectAll_Callback(KFilePlacesView_SelectAll_Callback cb) { kfileplacesview_selectall_callback = cb; }
    inline void setKFilePlacesView_UpdateEditorData_Callback(KFilePlacesView_UpdateEditorData_Callback cb) { kfileplacesview_updateeditordata_callback = cb; }
    inline void setKFilePlacesView_UpdateEditorGeometries_Callback(KFilePlacesView_UpdateEditorGeometries_Callback cb) { kfileplacesview_updateeditorgeometries_callback = cb; }
    inline void setKFilePlacesView_VerticalScrollbarAction_Callback(KFilePlacesView_VerticalScrollbarAction_Callback cb) { kfileplacesview_verticalscrollbaraction_callback = cb; }
    inline void setKFilePlacesView_HorizontalScrollbarAction_Callback(KFilePlacesView_HorizontalScrollbarAction_Callback cb) { kfileplacesview_horizontalscrollbaraction_callback = cb; }
    inline void setKFilePlacesView_VerticalScrollbarValueChanged_Callback(KFilePlacesView_VerticalScrollbarValueChanged_Callback cb) { kfileplacesview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setKFilePlacesView_HorizontalScrollbarValueChanged_Callback(KFilePlacesView_HorizontalScrollbarValueChanged_Callback cb) { kfileplacesview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setKFilePlacesView_CloseEditor_Callback(KFilePlacesView_CloseEditor_Callback cb) { kfileplacesview_closeeditor_callback = cb; }
    inline void setKFilePlacesView_CommitData_Callback(KFilePlacesView_CommitData_Callback cb) { kfileplacesview_commitdata_callback = cb; }
    inline void setKFilePlacesView_EditorDestroyed_Callback(KFilePlacesView_EditorDestroyed_Callback cb) { kfileplacesview_editordestroyed_callback = cb; }
    inline void setKFilePlacesView_Edit2_Callback(KFilePlacesView_Edit2_Callback cb) { kfileplacesview_edit2_callback = cb; }
    inline void setKFilePlacesView_SelectionCommand_Callback(KFilePlacesView_SelectionCommand_Callback cb) { kfileplacesview_selectioncommand_callback = cb; }
    inline void setKFilePlacesView_FocusNextPrevChild_Callback(KFilePlacesView_FocusNextPrevChild_Callback cb) { kfileplacesview_focusnextprevchild_callback = cb; }
    inline void setKFilePlacesView_ViewportEvent_Callback(KFilePlacesView_ViewportEvent_Callback cb) { kfileplacesview_viewportevent_callback = cb; }
    inline void setKFilePlacesView_MouseDoubleClickEvent_Callback(KFilePlacesView_MouseDoubleClickEvent_Callback cb) { kfileplacesview_mousedoubleclickevent_callback = cb; }
    inline void setKFilePlacesView_FocusInEvent_Callback(KFilePlacesView_FocusInEvent_Callback cb) { kfileplacesview_focusinevent_callback = cb; }
    inline void setKFilePlacesView_FocusOutEvent_Callback(KFilePlacesView_FocusOutEvent_Callback cb) { kfileplacesview_focusoutevent_callback = cb; }
    inline void setKFilePlacesView_InputMethodEvent_Callback(KFilePlacesView_InputMethodEvent_Callback cb) { kfileplacesview_inputmethodevent_callback = cb; }
    inline void setKFilePlacesView_EventFilter_Callback(KFilePlacesView_EventFilter_Callback cb) { kfileplacesview_eventfilter_callback = cb; }
    inline void setKFilePlacesView_MinimumSizeHint_Callback(KFilePlacesView_MinimumSizeHint_Callback cb) { kfileplacesview_minimumsizehint_callback = cb; }
    inline void setKFilePlacesView_SetupViewport_Callback(KFilePlacesView_SetupViewport_Callback cb) { kfileplacesview_setupviewport_callback = cb; }
    inline void setKFilePlacesView_ChangeEvent_Callback(KFilePlacesView_ChangeEvent_Callback cb) { kfileplacesview_changeevent_callback = cb; }
    inline void setKFilePlacesView_InitStyleOption_Callback(KFilePlacesView_InitStyleOption_Callback cb) { kfileplacesview_initstyleoption_callback = cb; }
    inline void setKFilePlacesView_DevType_Callback(KFilePlacesView_DevType_Callback cb) { kfileplacesview_devtype_callback = cb; }
    inline void setKFilePlacesView_SetVisible_Callback(KFilePlacesView_SetVisible_Callback cb) { kfileplacesview_setvisible_callback = cb; }
    inline void setKFilePlacesView_HeightForWidth_Callback(KFilePlacesView_HeightForWidth_Callback cb) { kfileplacesview_heightforwidth_callback = cb; }
    inline void setKFilePlacesView_HasHeightForWidth_Callback(KFilePlacesView_HasHeightForWidth_Callback cb) { kfileplacesview_hasheightforwidth_callback = cb; }
    inline void setKFilePlacesView_PaintEngine_Callback(KFilePlacesView_PaintEngine_Callback cb) { kfileplacesview_paintengine_callback = cb; }
    inline void setKFilePlacesView_KeyReleaseEvent_Callback(KFilePlacesView_KeyReleaseEvent_Callback cb) { kfileplacesview_keyreleaseevent_callback = cb; }
    inline void setKFilePlacesView_EnterEvent_Callback(KFilePlacesView_EnterEvent_Callback cb) { kfileplacesview_enterevent_callback = cb; }
    inline void setKFilePlacesView_LeaveEvent_Callback(KFilePlacesView_LeaveEvent_Callback cb) { kfileplacesview_leaveevent_callback = cb; }
    inline void setKFilePlacesView_MoveEvent_Callback(KFilePlacesView_MoveEvent_Callback cb) { kfileplacesview_moveevent_callback = cb; }
    inline void setKFilePlacesView_CloseEvent_Callback(KFilePlacesView_CloseEvent_Callback cb) { kfileplacesview_closeevent_callback = cb; }
    inline void setKFilePlacesView_TabletEvent_Callback(KFilePlacesView_TabletEvent_Callback cb) { kfileplacesview_tabletevent_callback = cb; }
    inline void setKFilePlacesView_ActionEvent_Callback(KFilePlacesView_ActionEvent_Callback cb) { kfileplacesview_actionevent_callback = cb; }
    inline void setKFilePlacesView_NativeEvent_Callback(KFilePlacesView_NativeEvent_Callback cb) { kfileplacesview_nativeevent_callback = cb; }
    inline void setKFilePlacesView_Metric_Callback(KFilePlacesView_Metric_Callback cb) { kfileplacesview_metric_callback = cb; }
    inline void setKFilePlacesView_InitPainter_Callback(KFilePlacesView_InitPainter_Callback cb) { kfileplacesview_initpainter_callback = cb; }
    inline void setKFilePlacesView_Redirected_Callback(KFilePlacesView_Redirected_Callback cb) { kfileplacesview_redirected_callback = cb; }
    inline void setKFilePlacesView_SharedPainter_Callback(KFilePlacesView_SharedPainter_Callback cb) { kfileplacesview_sharedpainter_callback = cb; }
    inline void setKFilePlacesView_ChildEvent_Callback(KFilePlacesView_ChildEvent_Callback cb) { kfileplacesview_childevent_callback = cb; }
    inline void setKFilePlacesView_CustomEvent_Callback(KFilePlacesView_CustomEvent_Callback cb) { kfileplacesview_customevent_callback = cb; }
    inline void setKFilePlacesView_ConnectNotify_Callback(KFilePlacesView_ConnectNotify_Callback cb) { kfileplacesview_connectnotify_callback = cb; }
    inline void setKFilePlacesView_DisconnectNotify_Callback(KFilePlacesView_DisconnectNotify_Callback cb) { kfileplacesview_disconnectnotify_callback = cb; }
    inline void setKFilePlacesView_ResizeContents_Callback(KFilePlacesView_ResizeContents_Callback cb) { kfileplacesview_resizecontents_callback = cb; }
    inline void setKFilePlacesView_ContentsSize_Callback(KFilePlacesView_ContentsSize_Callback cb) { kfileplacesview_contentssize_callback = cb; }
    inline void setKFilePlacesView_RectForIndex_Callback(KFilePlacesView_RectForIndex_Callback cb) { kfileplacesview_rectforindex_callback = cb; }
    inline void setKFilePlacesView_SetPositionForIndex_Callback(KFilePlacesView_SetPositionForIndex_Callback cb) { kfileplacesview_setpositionforindex_callback = cb; }
    inline void setKFilePlacesView_State_Callback(KFilePlacesView_State_Callback cb) { kfileplacesview_state_callback = cb; }
    inline void setKFilePlacesView_SetState_Callback(KFilePlacesView_SetState_Callback cb) { kfileplacesview_setstate_callback = cb; }
    inline void setKFilePlacesView_ScheduleDelayedItemsLayout_Callback(KFilePlacesView_ScheduleDelayedItemsLayout_Callback cb) { kfileplacesview_scheduledelayeditemslayout_callback = cb; }
    inline void setKFilePlacesView_ExecuteDelayedItemsLayout_Callback(KFilePlacesView_ExecuteDelayedItemsLayout_Callback cb) { kfileplacesview_executedelayeditemslayout_callback = cb; }
    inline void setKFilePlacesView_SetDirtyRegion_Callback(KFilePlacesView_SetDirtyRegion_Callback cb) { kfileplacesview_setdirtyregion_callback = cb; }
    inline void setKFilePlacesView_ScrollDirtyRegion_Callback(KFilePlacesView_ScrollDirtyRegion_Callback cb) { kfileplacesview_scrolldirtyregion_callback = cb; }
    inline void setKFilePlacesView_DirtyRegionOffset_Callback(KFilePlacesView_DirtyRegionOffset_Callback cb) { kfileplacesview_dirtyregionoffset_callback = cb; }
    inline void setKFilePlacesView_StartAutoScroll_Callback(KFilePlacesView_StartAutoScroll_Callback cb) { kfileplacesview_startautoscroll_callback = cb; }
    inline void setKFilePlacesView_StopAutoScroll_Callback(KFilePlacesView_StopAutoScroll_Callback cb) { kfileplacesview_stopautoscroll_callback = cb; }
    inline void setKFilePlacesView_DoAutoScroll_Callback(KFilePlacesView_DoAutoScroll_Callback cb) { kfileplacesview_doautoscroll_callback = cb; }
    inline void setKFilePlacesView_DropIndicatorPosition_Callback(KFilePlacesView_DropIndicatorPosition_Callback cb) { kfileplacesview_dropindicatorposition_callback = cb; }
    inline void setKFilePlacesView_SetViewportMargins_Callback(KFilePlacesView_SetViewportMargins_Callback cb) { kfileplacesview_setviewportmargins_callback = cb; }
    inline void setKFilePlacesView_ViewportMargins_Callback(KFilePlacesView_ViewportMargins_Callback cb) { kfileplacesview_viewportmargins_callback = cb; }
    inline void setKFilePlacesView_DrawFrame_Callback(KFilePlacesView_DrawFrame_Callback cb) { kfileplacesview_drawframe_callback = cb; }
    inline void setKFilePlacesView_UpdateMicroFocus_Callback(KFilePlacesView_UpdateMicroFocus_Callback cb) { kfileplacesview_updatemicrofocus_callback = cb; }
    inline void setKFilePlacesView_Create_Callback(KFilePlacesView_Create_Callback cb) { kfileplacesview_create_callback = cb; }
    inline void setKFilePlacesView_Destroy_Callback(KFilePlacesView_Destroy_Callback cb) { kfileplacesview_destroy_callback = cb; }
    inline void setKFilePlacesView_FocusNextChild_Callback(KFilePlacesView_FocusNextChild_Callback cb) { kfileplacesview_focusnextchild_callback = cb; }
    inline void setKFilePlacesView_FocusPreviousChild_Callback(KFilePlacesView_FocusPreviousChild_Callback cb) { kfileplacesview_focuspreviouschild_callback = cb; }
    inline void setKFilePlacesView_Sender_Callback(KFilePlacesView_Sender_Callback cb) { kfileplacesview_sender_callback = cb; }
    inline void setKFilePlacesView_SenderSignalIndex_Callback(KFilePlacesView_SenderSignalIndex_Callback cb) { kfileplacesview_sendersignalindex_callback = cb; }
    inline void setKFilePlacesView_Receivers_Callback(KFilePlacesView_Receivers_Callback cb) { kfileplacesview_receivers_callback = cb; }
    inline void setKFilePlacesView_IsSignalConnected_Callback(KFilePlacesView_IsSignalConnected_Callback cb) { kfileplacesview_issignalconnected_callback = cb; }
    inline void setKFilePlacesView_GetDecodedMetricF_Callback(KFilePlacesView_GetDecodedMetricF_Callback cb) { kfileplacesview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKFilePlacesView_Metacall_IsBase(bool value) const { kfileplacesview_metacall_isbase = value; }
    inline void setKFilePlacesView_SizeHint_IsBase(bool value) const { kfileplacesview_sizehint_isbase = value; }
    inline void setKFilePlacesView_SetModel_IsBase(bool value) const { kfileplacesview_setmodel_isbase = value; }
    inline void setKFilePlacesView_KeyPressEvent_IsBase(bool value) const { kfileplacesview_keypressevent_isbase = value; }
    inline void setKFilePlacesView_ContextMenuEvent_IsBase(bool value) const { kfileplacesview_contextmenuevent_isbase = value; }
    inline void setKFilePlacesView_ResizeEvent_IsBase(bool value) const { kfileplacesview_resizeevent_isbase = value; }
    inline void setKFilePlacesView_ShowEvent_IsBase(bool value) const { kfileplacesview_showevent_isbase = value; }
    inline void setKFilePlacesView_HideEvent_IsBase(bool value) const { kfileplacesview_hideevent_isbase = value; }
    inline void setKFilePlacesView_DragEnterEvent_IsBase(bool value) const { kfileplacesview_dragenterevent_isbase = value; }
    inline void setKFilePlacesView_DragLeaveEvent_IsBase(bool value) const { kfileplacesview_dragleaveevent_isbase = value; }
    inline void setKFilePlacesView_DragMoveEvent_IsBase(bool value) const { kfileplacesview_dragmoveevent_isbase = value; }
    inline void setKFilePlacesView_DropEvent_IsBase(bool value) const { kfileplacesview_dropevent_isbase = value; }
    inline void setKFilePlacesView_PaintEvent_IsBase(bool value) const { kfileplacesview_paintevent_isbase = value; }
    inline void setKFilePlacesView_StartDrag_IsBase(bool value) const { kfileplacesview_startdrag_isbase = value; }
    inline void setKFilePlacesView_MousePressEvent_IsBase(bool value) const { kfileplacesview_mousepressevent_isbase = value; }
    inline void setKFilePlacesView_RowsInserted_IsBase(bool value) const { kfileplacesview_rowsinserted_isbase = value; }
    inline void setKFilePlacesView_DataChanged_IsBase(bool value) const { kfileplacesview_datachanged_isbase = value; }
    inline void setKFilePlacesView_VisualRect_IsBase(bool value) const { kfileplacesview_visualrect_isbase = value; }
    inline void setKFilePlacesView_ScrollTo_IsBase(bool value) const { kfileplacesview_scrollto_isbase = value; }
    inline void setKFilePlacesView_IndexAt_IsBase(bool value) const { kfileplacesview_indexat_isbase = value; }
    inline void setKFilePlacesView_DoItemsLayout_IsBase(bool value) const { kfileplacesview_doitemslayout_isbase = value; }
    inline void setKFilePlacesView_Reset_IsBase(bool value) const { kfileplacesview_reset_isbase = value; }
    inline void setKFilePlacesView_SetRootIndex_IsBase(bool value) const { kfileplacesview_setrootindex_isbase = value; }
    inline void setKFilePlacesView_Event_IsBase(bool value) const { kfileplacesview_event_isbase = value; }
    inline void setKFilePlacesView_ScrollContentsBy_IsBase(bool value) const { kfileplacesview_scrollcontentsby_isbase = value; }
    inline void setKFilePlacesView_RowsAboutToBeRemoved_IsBase(bool value) const { kfileplacesview_rowsabouttoberemoved_isbase = value; }
    inline void setKFilePlacesView_MouseMoveEvent_IsBase(bool value) const { kfileplacesview_mousemoveevent_isbase = value; }
    inline void setKFilePlacesView_MouseReleaseEvent_IsBase(bool value) const { kfileplacesview_mousereleaseevent_isbase = value; }
    inline void setKFilePlacesView_WheelEvent_IsBase(bool value) const { kfileplacesview_wheelevent_isbase = value; }
    inline void setKFilePlacesView_TimerEvent_IsBase(bool value) const { kfileplacesview_timerevent_isbase = value; }
    inline void setKFilePlacesView_InitViewItemOption_IsBase(bool value) const { kfileplacesview_initviewitemoption_isbase = value; }
    inline void setKFilePlacesView_HorizontalOffset_IsBase(bool value) const { kfileplacesview_horizontaloffset_isbase = value; }
    inline void setKFilePlacesView_VerticalOffset_IsBase(bool value) const { kfileplacesview_verticaloffset_isbase = value; }
    inline void setKFilePlacesView_MoveCursor_IsBase(bool value) const { kfileplacesview_movecursor_isbase = value; }
    inline void setKFilePlacesView_SetSelection_IsBase(bool value) const { kfileplacesview_setselection_isbase = value; }
    inline void setKFilePlacesView_VisualRegionForSelection_IsBase(bool value) const { kfileplacesview_visualregionforselection_isbase = value; }
    inline void setKFilePlacesView_SelectedIndexes_IsBase(bool value) const { kfileplacesview_selectedindexes_isbase = value; }
    inline void setKFilePlacesView_UpdateGeometries_IsBase(bool value) const { kfileplacesview_updategeometries_isbase = value; }
    inline void setKFilePlacesView_IsIndexHidden_IsBase(bool value) const { kfileplacesview_isindexhidden_isbase = value; }
    inline void setKFilePlacesView_SelectionChanged_IsBase(bool value) const { kfileplacesview_selectionchanged_isbase = value; }
    inline void setKFilePlacesView_CurrentChanged_IsBase(bool value) const { kfileplacesview_currentchanged_isbase = value; }
    inline void setKFilePlacesView_ViewportSizeHint_IsBase(bool value) const { kfileplacesview_viewportsizehint_isbase = value; }
    inline void setKFilePlacesView_SetSelectionModel_IsBase(bool value) const { kfileplacesview_setselectionmodel_isbase = value; }
    inline void setKFilePlacesView_KeyboardSearch_IsBase(bool value) const { kfileplacesview_keyboardsearch_isbase = value; }
    inline void setKFilePlacesView_SizeHintForRow_IsBase(bool value) const { kfileplacesview_sizehintforrow_isbase = value; }
    inline void setKFilePlacesView_SizeHintForColumn_IsBase(bool value) const { kfileplacesview_sizehintforcolumn_isbase = value; }
    inline void setKFilePlacesView_ItemDelegateForIndex_IsBase(bool value) const { kfileplacesview_itemdelegateforindex_isbase = value; }
    inline void setKFilePlacesView_InputMethodQuery_IsBase(bool value) const { kfileplacesview_inputmethodquery_isbase = value; }
    inline void setKFilePlacesView_SelectAll_IsBase(bool value) const { kfileplacesview_selectall_isbase = value; }
    inline void setKFilePlacesView_UpdateEditorData_IsBase(bool value) const { kfileplacesview_updateeditordata_isbase = value; }
    inline void setKFilePlacesView_UpdateEditorGeometries_IsBase(bool value) const { kfileplacesview_updateeditorgeometries_isbase = value; }
    inline void setKFilePlacesView_VerticalScrollbarAction_IsBase(bool value) const { kfileplacesview_verticalscrollbaraction_isbase = value; }
    inline void setKFilePlacesView_HorizontalScrollbarAction_IsBase(bool value) const { kfileplacesview_horizontalscrollbaraction_isbase = value; }
    inline void setKFilePlacesView_VerticalScrollbarValueChanged_IsBase(bool value) const { kfileplacesview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setKFilePlacesView_HorizontalScrollbarValueChanged_IsBase(bool value) const { kfileplacesview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setKFilePlacesView_CloseEditor_IsBase(bool value) const { kfileplacesview_closeeditor_isbase = value; }
    inline void setKFilePlacesView_CommitData_IsBase(bool value) const { kfileplacesview_commitdata_isbase = value; }
    inline void setKFilePlacesView_EditorDestroyed_IsBase(bool value) const { kfileplacesview_editordestroyed_isbase = value; }
    inline void setKFilePlacesView_Edit2_IsBase(bool value) const { kfileplacesview_edit2_isbase = value; }
    inline void setKFilePlacesView_SelectionCommand_IsBase(bool value) const { kfileplacesview_selectioncommand_isbase = value; }
    inline void setKFilePlacesView_FocusNextPrevChild_IsBase(bool value) const { kfileplacesview_focusnextprevchild_isbase = value; }
    inline void setKFilePlacesView_ViewportEvent_IsBase(bool value) const { kfileplacesview_viewportevent_isbase = value; }
    inline void setKFilePlacesView_MouseDoubleClickEvent_IsBase(bool value) const { kfileplacesview_mousedoubleclickevent_isbase = value; }
    inline void setKFilePlacesView_FocusInEvent_IsBase(bool value) const { kfileplacesview_focusinevent_isbase = value; }
    inline void setKFilePlacesView_FocusOutEvent_IsBase(bool value) const { kfileplacesview_focusoutevent_isbase = value; }
    inline void setKFilePlacesView_InputMethodEvent_IsBase(bool value) const { kfileplacesview_inputmethodevent_isbase = value; }
    inline void setKFilePlacesView_EventFilter_IsBase(bool value) const { kfileplacesview_eventfilter_isbase = value; }
    inline void setKFilePlacesView_MinimumSizeHint_IsBase(bool value) const { kfileplacesview_minimumsizehint_isbase = value; }
    inline void setKFilePlacesView_SetupViewport_IsBase(bool value) const { kfileplacesview_setupviewport_isbase = value; }
    inline void setKFilePlacesView_ChangeEvent_IsBase(bool value) const { kfileplacesview_changeevent_isbase = value; }
    inline void setKFilePlacesView_InitStyleOption_IsBase(bool value) const { kfileplacesview_initstyleoption_isbase = value; }
    inline void setKFilePlacesView_DevType_IsBase(bool value) const { kfileplacesview_devtype_isbase = value; }
    inline void setKFilePlacesView_SetVisible_IsBase(bool value) const { kfileplacesview_setvisible_isbase = value; }
    inline void setKFilePlacesView_HeightForWidth_IsBase(bool value) const { kfileplacesview_heightforwidth_isbase = value; }
    inline void setKFilePlacesView_HasHeightForWidth_IsBase(bool value) const { kfileplacesview_hasheightforwidth_isbase = value; }
    inline void setKFilePlacesView_PaintEngine_IsBase(bool value) const { kfileplacesview_paintengine_isbase = value; }
    inline void setKFilePlacesView_KeyReleaseEvent_IsBase(bool value) const { kfileplacesview_keyreleaseevent_isbase = value; }
    inline void setKFilePlacesView_EnterEvent_IsBase(bool value) const { kfileplacesview_enterevent_isbase = value; }
    inline void setKFilePlacesView_LeaveEvent_IsBase(bool value) const { kfileplacesview_leaveevent_isbase = value; }
    inline void setKFilePlacesView_MoveEvent_IsBase(bool value) const { kfileplacesview_moveevent_isbase = value; }
    inline void setKFilePlacesView_CloseEvent_IsBase(bool value) const { kfileplacesview_closeevent_isbase = value; }
    inline void setKFilePlacesView_TabletEvent_IsBase(bool value) const { kfileplacesview_tabletevent_isbase = value; }
    inline void setKFilePlacesView_ActionEvent_IsBase(bool value) const { kfileplacesview_actionevent_isbase = value; }
    inline void setKFilePlacesView_NativeEvent_IsBase(bool value) const { kfileplacesview_nativeevent_isbase = value; }
    inline void setKFilePlacesView_Metric_IsBase(bool value) const { kfileplacesview_metric_isbase = value; }
    inline void setKFilePlacesView_InitPainter_IsBase(bool value) const { kfileplacesview_initpainter_isbase = value; }
    inline void setKFilePlacesView_Redirected_IsBase(bool value) const { kfileplacesview_redirected_isbase = value; }
    inline void setKFilePlacesView_SharedPainter_IsBase(bool value) const { kfileplacesview_sharedpainter_isbase = value; }
    inline void setKFilePlacesView_ChildEvent_IsBase(bool value) const { kfileplacesview_childevent_isbase = value; }
    inline void setKFilePlacesView_CustomEvent_IsBase(bool value) const { kfileplacesview_customevent_isbase = value; }
    inline void setKFilePlacesView_ConnectNotify_IsBase(bool value) const { kfileplacesview_connectnotify_isbase = value; }
    inline void setKFilePlacesView_DisconnectNotify_IsBase(bool value) const { kfileplacesview_disconnectnotify_isbase = value; }
    inline void setKFilePlacesView_ResizeContents_IsBase(bool value) const { kfileplacesview_resizecontents_isbase = value; }
    inline void setKFilePlacesView_ContentsSize_IsBase(bool value) const { kfileplacesview_contentssize_isbase = value; }
    inline void setKFilePlacesView_RectForIndex_IsBase(bool value) const { kfileplacesview_rectforindex_isbase = value; }
    inline void setKFilePlacesView_SetPositionForIndex_IsBase(bool value) const { kfileplacesview_setpositionforindex_isbase = value; }
    inline void setKFilePlacesView_State_IsBase(bool value) const { kfileplacesview_state_isbase = value; }
    inline void setKFilePlacesView_SetState_IsBase(bool value) const { kfileplacesview_setstate_isbase = value; }
    inline void setKFilePlacesView_ScheduleDelayedItemsLayout_IsBase(bool value) const { kfileplacesview_scheduledelayeditemslayout_isbase = value; }
    inline void setKFilePlacesView_ExecuteDelayedItemsLayout_IsBase(bool value) const { kfileplacesview_executedelayeditemslayout_isbase = value; }
    inline void setKFilePlacesView_SetDirtyRegion_IsBase(bool value) const { kfileplacesview_setdirtyregion_isbase = value; }
    inline void setKFilePlacesView_ScrollDirtyRegion_IsBase(bool value) const { kfileplacesview_scrolldirtyregion_isbase = value; }
    inline void setKFilePlacesView_DirtyRegionOffset_IsBase(bool value) const { kfileplacesview_dirtyregionoffset_isbase = value; }
    inline void setKFilePlacesView_StartAutoScroll_IsBase(bool value) const { kfileplacesview_startautoscroll_isbase = value; }
    inline void setKFilePlacesView_StopAutoScroll_IsBase(bool value) const { kfileplacesview_stopautoscroll_isbase = value; }
    inline void setKFilePlacesView_DoAutoScroll_IsBase(bool value) const { kfileplacesview_doautoscroll_isbase = value; }
    inline void setKFilePlacesView_DropIndicatorPosition_IsBase(bool value) const { kfileplacesview_dropindicatorposition_isbase = value; }
    inline void setKFilePlacesView_SetViewportMargins_IsBase(bool value) const { kfileplacesview_setviewportmargins_isbase = value; }
    inline void setKFilePlacesView_ViewportMargins_IsBase(bool value) const { kfileplacesview_viewportmargins_isbase = value; }
    inline void setKFilePlacesView_DrawFrame_IsBase(bool value) const { kfileplacesview_drawframe_isbase = value; }
    inline void setKFilePlacesView_UpdateMicroFocus_IsBase(bool value) const { kfileplacesview_updatemicrofocus_isbase = value; }
    inline void setKFilePlacesView_Create_IsBase(bool value) const { kfileplacesview_create_isbase = value; }
    inline void setKFilePlacesView_Destroy_IsBase(bool value) const { kfileplacesview_destroy_isbase = value; }
    inline void setKFilePlacesView_FocusNextChild_IsBase(bool value) const { kfileplacesview_focusnextchild_isbase = value; }
    inline void setKFilePlacesView_FocusPreviousChild_IsBase(bool value) const { kfileplacesview_focuspreviouschild_isbase = value; }
    inline void setKFilePlacesView_Sender_IsBase(bool value) const { kfileplacesview_sender_isbase = value; }
    inline void setKFilePlacesView_SenderSignalIndex_IsBase(bool value) const { kfileplacesview_sendersignalindex_isbase = value; }
    inline void setKFilePlacesView_Receivers_IsBase(bool value) const { kfileplacesview_receivers_isbase = value; }
    inline void setKFilePlacesView_IsSignalConnected_IsBase(bool value) const { kfileplacesview_issignalconnected_isbase = value; }
    inline void setKFilePlacesView_GetDecodedMetricF_IsBase(bool value) const { kfileplacesview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileplacesview_metacall_isbase) {
            kfileplacesview_metacall_isbase = false;
            return KFilePlacesView::qt_metacall(param1, param2, param3);
        } else if (kfileplacesview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfileplacesview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfileplacesview_sizehint_isbase) {
            kfileplacesview_sizehint_isbase = false;
            return KFilePlacesView::sizeHint();
        } else if (kfileplacesview_sizehint_callback != nullptr) {
            QSize* callback_ret = kfileplacesview_sizehint_callback();
            return *callback_ret;
        } else {
            return KFilePlacesView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kfileplacesview_setmodel_isbase) {
            kfileplacesview_setmodel_isbase = false;
            KFilePlacesView::setModel(model);
        } else if (kfileplacesview_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kfileplacesview_setmodel_callback(this, cbval1);
        } else {
            KFilePlacesView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfileplacesview_keypressevent_isbase) {
            kfileplacesview_keypressevent_isbase = false;
            KFilePlacesView::keyPressEvent(event);
        } else if (kfileplacesview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfileplacesview_keypressevent_callback(this, cbval1);
        } else {
            KFilePlacesView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfileplacesview_contextmenuevent_isbase) {
            kfileplacesview_contextmenuevent_isbase = false;
            KFilePlacesView::contextMenuEvent(event);
        } else if (kfileplacesview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kfileplacesview_contextmenuevent_callback(this, cbval1);
        } else {
            KFilePlacesView::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfileplacesview_resizeevent_isbase) {
            kfileplacesview_resizeevent_isbase = false;
            KFilePlacesView::resizeEvent(event);
        } else if (kfileplacesview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kfileplacesview_resizeevent_callback(this, cbval1);
        } else {
            KFilePlacesView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfileplacesview_showevent_isbase) {
            kfileplacesview_showevent_isbase = false;
            KFilePlacesView::showEvent(event);
        } else if (kfileplacesview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kfileplacesview_showevent_callback(this, cbval1);
        } else {
            KFilePlacesView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfileplacesview_hideevent_isbase) {
            kfileplacesview_hideevent_isbase = false;
            KFilePlacesView::hideEvent(event);
        } else if (kfileplacesview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kfileplacesview_hideevent_callback(this, cbval1);
        } else {
            KFilePlacesView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfileplacesview_dragenterevent_isbase) {
            kfileplacesview_dragenterevent_isbase = false;
            KFilePlacesView::dragEnterEvent(event);
        } else if (kfileplacesview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kfileplacesview_dragenterevent_callback(this, cbval1);
        } else {
            KFilePlacesView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfileplacesview_dragleaveevent_isbase) {
            kfileplacesview_dragleaveevent_isbase = false;
            KFilePlacesView::dragLeaveEvent(event);
        } else if (kfileplacesview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kfileplacesview_dragleaveevent_callback(this, cbval1);
        } else {
            KFilePlacesView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfileplacesview_dragmoveevent_isbase) {
            kfileplacesview_dragmoveevent_isbase = false;
            KFilePlacesView::dragMoveEvent(event);
        } else if (kfileplacesview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kfileplacesview_dragmoveevent_callback(this, cbval1);
        } else {
            KFilePlacesView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfileplacesview_dropevent_isbase) {
            kfileplacesview_dropevent_isbase = false;
            KFilePlacesView::dropEvent(event);
        } else if (kfileplacesview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kfileplacesview_dropevent_callback(this, cbval1);
        } else {
            KFilePlacesView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfileplacesview_paintevent_isbase) {
            kfileplacesview_paintevent_isbase = false;
            KFilePlacesView::paintEvent(event);
        } else if (kfileplacesview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kfileplacesview_paintevent_callback(this, cbval1);
        } else {
            KFilePlacesView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (kfileplacesview_startdrag_isbase) {
            kfileplacesview_startdrag_isbase = false;
            KFilePlacesView::startDrag(supportedActions);
        } else if (kfileplacesview_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            kfileplacesview_startdrag_callback(this, cbval1);
        } else {
            KFilePlacesView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfileplacesview_mousepressevent_isbase) {
            kfileplacesview_mousepressevent_isbase = false;
            KFilePlacesView::mousePressEvent(event);
        } else if (kfileplacesview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfileplacesview_mousepressevent_callback(this, cbval1);
        } else {
            KFilePlacesView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (kfileplacesview_rowsinserted_isbase) {
            kfileplacesview_rowsinserted_isbase = false;
            KFilePlacesView::rowsInserted(parent, start, end);
        } else if (kfileplacesview_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            kfileplacesview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFilePlacesView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (kfileplacesview_datachanged_isbase) {
            kfileplacesview_datachanged_isbase = false;
            KFilePlacesView::dataChanged(topLeft, bottomRight, roles);
        } else if (kfileplacesview_datachanged_callback != nullptr) {
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

            kfileplacesview_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFilePlacesView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kfileplacesview_visualrect_isbase) {
            kfileplacesview_visualrect_isbase = false;
            return KFilePlacesView::visualRect(index);
        } else if (kfileplacesview_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = kfileplacesview_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlacesView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (kfileplacesview_scrollto_isbase) {
            kfileplacesview_scrollto_isbase = false;
            KFilePlacesView::scrollTo(index, hint);
        } else if (kfileplacesview_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            kfileplacesview_scrollto_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (kfileplacesview_indexat_isbase) {
            kfileplacesview_indexat_isbase = false;
            return KFilePlacesView::indexAt(p);
        } else if (kfileplacesview_indexat_callback != nullptr) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = kfileplacesview_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlacesView::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (kfileplacesview_doitemslayout_isbase) {
            kfileplacesview_doitemslayout_isbase = false;
            KFilePlacesView::doItemsLayout();
        } else if (kfileplacesview_doitemslayout_callback != nullptr) {
            kfileplacesview_doitemslayout_callback();
        } else {
            KFilePlacesView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kfileplacesview_reset_isbase) {
            kfileplacesview_reset_isbase = false;
            KFilePlacesView::reset();
        } else if (kfileplacesview_reset_callback != nullptr) {
            kfileplacesview_reset_callback();
        } else {
            KFilePlacesView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (kfileplacesview_setrootindex_isbase) {
            kfileplacesview_setrootindex_isbase = false;
            KFilePlacesView::setRootIndex(index);
        } else if (kfileplacesview_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            kfileplacesview_setrootindex_callback(this, cbval1);
        } else {
            KFilePlacesView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kfileplacesview_event_isbase) {
            kfileplacesview_event_isbase = false;
            return KFilePlacesView::event(e);
        } else if (kfileplacesview_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kfileplacesview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesView::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kfileplacesview_scrollcontentsby_isbase) {
            kfileplacesview_scrollcontentsby_isbase = false;
            KFilePlacesView::scrollContentsBy(dx, dy);
        } else if (kfileplacesview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            kfileplacesview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (kfileplacesview_rowsabouttoberemoved_isbase) {
            kfileplacesview_rowsabouttoberemoved_isbase = false;
            KFilePlacesView::rowsAboutToBeRemoved(parent, start, end);
        } else if (kfileplacesview_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            kfileplacesview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFilePlacesView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kfileplacesview_mousemoveevent_isbase) {
            kfileplacesview_mousemoveevent_isbase = false;
            KFilePlacesView::mouseMoveEvent(e);
        } else if (kfileplacesview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kfileplacesview_mousemoveevent_callback(this, cbval1);
        } else {
            KFilePlacesView::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kfileplacesview_mousereleaseevent_isbase) {
            kfileplacesview_mousereleaseevent_isbase = false;
            KFilePlacesView::mouseReleaseEvent(e);
        } else if (kfileplacesview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kfileplacesview_mousereleaseevent_callback(this, cbval1);
        } else {
            KFilePlacesView::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kfileplacesview_wheelevent_isbase) {
            kfileplacesview_wheelevent_isbase = false;
            KFilePlacesView::wheelEvent(e);
        } else if (kfileplacesview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            kfileplacesview_wheelevent_callback(this, cbval1);
        } else {
            KFilePlacesView::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kfileplacesview_timerevent_isbase) {
            kfileplacesview_timerevent_isbase = false;
            KFilePlacesView::timerEvent(e);
        } else if (kfileplacesview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            kfileplacesview_timerevent_callback(this, cbval1);
        } else {
            KFilePlacesView::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (kfileplacesview_initviewitemoption_isbase) {
            kfileplacesview_initviewitemoption_isbase = false;
            KFilePlacesView::initViewItemOption(option);
        } else if (kfileplacesview_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            kfileplacesview_initviewitemoption_callback(this, cbval1);
        } else {
            KFilePlacesView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (kfileplacesview_horizontaloffset_isbase) {
            kfileplacesview_horizontaloffset_isbase = false;
            return KFilePlacesView::horizontalOffset();
        } else if (kfileplacesview_horizontaloffset_callback != nullptr) {
            int callback_ret = kfileplacesview_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (kfileplacesview_verticaloffset_isbase) {
            kfileplacesview_verticaloffset_isbase = false;
            return KFilePlacesView::verticalOffset();
        } else if (kfileplacesview_verticaloffset_callback != nullptr) {
            int callback_ret = kfileplacesview_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (kfileplacesview_movecursor_isbase) {
            kfileplacesview_movecursor_isbase = false;
            return KFilePlacesView::moveCursor(cursorAction, modifiers);
        } else if (kfileplacesview_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = kfileplacesview_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KFilePlacesView::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (kfileplacesview_setselection_isbase) {
            kfileplacesview_setselection_isbase = false;
            KFilePlacesView::setSelection(rect, command);
        } else if (kfileplacesview_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            kfileplacesview_setselection_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (kfileplacesview_visualregionforselection_isbase) {
            kfileplacesview_visualregionforselection_isbase = false;
            return KFilePlacesView::visualRegionForSelection(selection);
        } else if (kfileplacesview_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = kfileplacesview_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlacesView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (kfileplacesview_selectedindexes_isbase) {
            kfileplacesview_selectedindexes_isbase = false;
            return KFilePlacesView::selectedIndexes();
        } else if (kfileplacesview_selectedindexes_callback != nullptr) {
            QModelIndex** callback_ret = kfileplacesview_selectedindexes_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KFilePlacesView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (kfileplacesview_updategeometries_isbase) {
            kfileplacesview_updategeometries_isbase = false;
            KFilePlacesView::updateGeometries();
        } else if (kfileplacesview_updategeometries_callback != nullptr) {
            kfileplacesview_updategeometries_callback();
        } else {
            KFilePlacesView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (kfileplacesview_isindexhidden_isbase) {
            kfileplacesview_isindexhidden_isbase = false;
            return KFilePlacesView::isIndexHidden(index);
        } else if (kfileplacesview_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kfileplacesview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (kfileplacesview_selectionchanged_isbase) {
            kfileplacesview_selectionchanged_isbase = false;
            KFilePlacesView::selectionChanged(selected, deselected);
        } else if (kfileplacesview_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            kfileplacesview_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (kfileplacesview_currentchanged_isbase) {
            kfileplacesview_currentchanged_isbase = false;
            KFilePlacesView::currentChanged(current, previous);
        } else if (kfileplacesview_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            kfileplacesview_currentchanged_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kfileplacesview_viewportsizehint_isbase) {
            kfileplacesview_viewportsizehint_isbase = false;
            return KFilePlacesView::viewportSizeHint();
        } else if (kfileplacesview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = kfileplacesview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return KFilePlacesView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (kfileplacesview_setselectionmodel_isbase) {
            kfileplacesview_setselectionmodel_isbase = false;
            KFilePlacesView::setSelectionModel(selectionModel);
        } else if (kfileplacesview_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            kfileplacesview_setselectionmodel_callback(this, cbval1);
        } else {
            KFilePlacesView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (kfileplacesview_keyboardsearch_isbase) {
            kfileplacesview_keyboardsearch_isbase = false;
            KFilePlacesView::keyboardSearch(search);
        } else if (kfileplacesview_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<const char*>(malloc(search_str.len + 1));
            memcpy((void*)search_str.data, search_b.data(), search_str.len);
            ((char*)search_str.data)[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            kfileplacesview_keyboardsearch_callback(this, cbval1);
        } else {
            KFilePlacesView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (kfileplacesview_sizehintforrow_isbase) {
            kfileplacesview_sizehintforrow_isbase = false;
            return KFilePlacesView::sizeHintForRow(row);
        } else if (kfileplacesview_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = kfileplacesview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (kfileplacesview_sizehintforcolumn_isbase) {
            kfileplacesview_sizehintforcolumn_isbase = false;
            return KFilePlacesView::sizeHintForColumn(column);
        } else if (kfileplacesview_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = kfileplacesview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (kfileplacesview_itemdelegateforindex_isbase) {
            kfileplacesview_itemdelegateforindex_isbase = false;
            return KFilePlacesView::itemDelegateForIndex(index);
        } else if (kfileplacesview_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = kfileplacesview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (kfileplacesview_inputmethodquery_isbase) {
            kfileplacesview_inputmethodquery_isbase = false;
            return KFilePlacesView::inputMethodQuery(query);
        } else if (kfileplacesview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = kfileplacesview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlacesView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (kfileplacesview_selectall_isbase) {
            kfileplacesview_selectall_isbase = false;
            KFilePlacesView::selectAll();
        } else if (kfileplacesview_selectall_callback != nullptr) {
            kfileplacesview_selectall_callback();
        } else {
            KFilePlacesView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (kfileplacesview_updateeditordata_isbase) {
            kfileplacesview_updateeditordata_isbase = false;
            KFilePlacesView::updateEditorData();
        } else if (kfileplacesview_updateeditordata_callback != nullptr) {
            kfileplacesview_updateeditordata_callback();
        } else {
            KFilePlacesView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (kfileplacesview_updateeditorgeometries_isbase) {
            kfileplacesview_updateeditorgeometries_isbase = false;
            KFilePlacesView::updateEditorGeometries();
        } else if (kfileplacesview_updateeditorgeometries_callback != nullptr) {
            kfileplacesview_updateeditorgeometries_callback();
        } else {
            KFilePlacesView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (kfileplacesview_verticalscrollbaraction_isbase) {
            kfileplacesview_verticalscrollbaraction_isbase = false;
            KFilePlacesView::verticalScrollbarAction(action);
        } else if (kfileplacesview_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            kfileplacesview_verticalscrollbaraction_callback(this, cbval1);
        } else {
            KFilePlacesView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (kfileplacesview_horizontalscrollbaraction_isbase) {
            kfileplacesview_horizontalscrollbaraction_isbase = false;
            KFilePlacesView::horizontalScrollbarAction(action);
        } else if (kfileplacesview_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            kfileplacesview_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            KFilePlacesView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (kfileplacesview_verticalscrollbarvaluechanged_isbase) {
            kfileplacesview_verticalscrollbarvaluechanged_isbase = false;
            KFilePlacesView::verticalScrollbarValueChanged(value);
        } else if (kfileplacesview_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            kfileplacesview_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            KFilePlacesView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (kfileplacesview_horizontalscrollbarvaluechanged_isbase) {
            kfileplacesview_horizontalscrollbarvaluechanged_isbase = false;
            KFilePlacesView::horizontalScrollbarValueChanged(value);
        } else if (kfileplacesview_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            kfileplacesview_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            KFilePlacesView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (kfileplacesview_closeeditor_isbase) {
            kfileplacesview_closeeditor_isbase = false;
            KFilePlacesView::closeEditor(editor, hint);
        } else if (kfileplacesview_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            kfileplacesview_closeeditor_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (kfileplacesview_commitdata_isbase) {
            kfileplacesview_commitdata_isbase = false;
            KFilePlacesView::commitData(editor);
        } else if (kfileplacesview_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            kfileplacesview_commitdata_callback(this, cbval1);
        } else {
            KFilePlacesView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (kfileplacesview_editordestroyed_isbase) {
            kfileplacesview_editordestroyed_isbase = false;
            KFilePlacesView::editorDestroyed(editor);
        } else if (kfileplacesview_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            kfileplacesview_editordestroyed_callback(this, cbval1);
        } else {
            KFilePlacesView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (kfileplacesview_edit2_isbase) {
            kfileplacesview_edit2_isbase = false;
            return KFilePlacesView::edit(index, trigger, event);
        } else if (kfileplacesview_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = kfileplacesview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFilePlacesView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (kfileplacesview_selectioncommand_isbase) {
            kfileplacesview_selectioncommand_isbase = false;
            return KFilePlacesView::selectionCommand(index, event);
        } else if (kfileplacesview_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = kfileplacesview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return KFilePlacesView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfileplacesview_focusnextprevchild_isbase) {
            kfileplacesview_focusnextprevchild_isbase = false;
            return KFilePlacesView::focusNextPrevChild(next);
        } else if (kfileplacesview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kfileplacesview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (kfileplacesview_viewportevent_isbase) {
            kfileplacesview_viewportevent_isbase = false;
            return KFilePlacesView::viewportEvent(event);
        } else if (kfileplacesview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfileplacesview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfileplacesview_mousedoubleclickevent_isbase) {
            kfileplacesview_mousedoubleclickevent_isbase = false;
            KFilePlacesView::mouseDoubleClickEvent(event);
        } else if (kfileplacesview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfileplacesview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KFilePlacesView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfileplacesview_focusinevent_isbase) {
            kfileplacesview_focusinevent_isbase = false;
            KFilePlacesView::focusInEvent(event);
        } else if (kfileplacesview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfileplacesview_focusinevent_callback(this, cbval1);
        } else {
            KFilePlacesView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfileplacesview_focusoutevent_isbase) {
            kfileplacesview_focusoutevent_isbase = false;
            KFilePlacesView::focusOutEvent(event);
        } else if (kfileplacesview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfileplacesview_focusoutevent_callback(this, cbval1);
        } else {
            KFilePlacesView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (kfileplacesview_inputmethodevent_isbase) {
            kfileplacesview_inputmethodevent_isbase = false;
            KFilePlacesView::inputMethodEvent(event);
        } else if (kfileplacesview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            kfileplacesview_inputmethodevent_callback(this, cbval1);
        } else {
            KFilePlacesView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kfileplacesview_eventfilter_isbase) {
            kfileplacesview_eventfilter_isbase = false;
            return KFilePlacesView::eventFilter(object, event);
        } else if (kfileplacesview_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = kfileplacesview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFilePlacesView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfileplacesview_minimumsizehint_isbase) {
            kfileplacesview_minimumsizehint_isbase = false;
            return KFilePlacesView::minimumSizeHint();
        } else if (kfileplacesview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kfileplacesview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KFilePlacesView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kfileplacesview_setupviewport_isbase) {
            kfileplacesview_setupviewport_isbase = false;
            KFilePlacesView::setupViewport(viewport);
        } else if (kfileplacesview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            kfileplacesview_setupviewport_callback(this, cbval1);
        } else {
            KFilePlacesView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfileplacesview_changeevent_isbase) {
            kfileplacesview_changeevent_isbase = false;
            KFilePlacesView::changeEvent(param1);
        } else if (kfileplacesview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kfileplacesview_changeevent_callback(this, cbval1);
        } else {
            KFilePlacesView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kfileplacesview_initstyleoption_isbase) {
            kfileplacesview_initstyleoption_isbase = false;
            KFilePlacesView::initStyleOption(option);
        } else if (kfileplacesview_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kfileplacesview_initstyleoption_callback(this, cbval1);
        } else {
            KFilePlacesView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfileplacesview_devtype_isbase) {
            kfileplacesview_devtype_isbase = false;
            return KFilePlacesView::devType();
        } else if (kfileplacesview_devtype_callback != nullptr) {
            int callback_ret = kfileplacesview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfileplacesview_setvisible_isbase) {
            kfileplacesview_setvisible_isbase = false;
            KFilePlacesView::setVisible(visible);
        } else if (kfileplacesview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kfileplacesview_setvisible_callback(this, cbval1);
        } else {
            KFilePlacesView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfileplacesview_heightforwidth_isbase) {
            kfileplacesview_heightforwidth_isbase = false;
            return KFilePlacesView::heightForWidth(param1);
        } else if (kfileplacesview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kfileplacesview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfileplacesview_hasheightforwidth_isbase) {
            kfileplacesview_hasheightforwidth_isbase = false;
            return KFilePlacesView::hasHeightForWidth();
        } else if (kfileplacesview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kfileplacesview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KFilePlacesView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfileplacesview_paintengine_isbase) {
            kfileplacesview_paintengine_isbase = false;
            return KFilePlacesView::paintEngine();
        } else if (kfileplacesview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kfileplacesview_paintengine_callback();
            return callback_ret;
        } else {
            return KFilePlacesView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfileplacesview_keyreleaseevent_isbase) {
            kfileplacesview_keyreleaseevent_isbase = false;
            KFilePlacesView::keyReleaseEvent(event);
        } else if (kfileplacesview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfileplacesview_keyreleaseevent_callback(this, cbval1);
        } else {
            KFilePlacesView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfileplacesview_enterevent_isbase) {
            kfileplacesview_enterevent_isbase = false;
            KFilePlacesView::enterEvent(event);
        } else if (kfileplacesview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kfileplacesview_enterevent_callback(this, cbval1);
        } else {
            KFilePlacesView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfileplacesview_leaveevent_isbase) {
            kfileplacesview_leaveevent_isbase = false;
            KFilePlacesView::leaveEvent(event);
        } else if (kfileplacesview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfileplacesview_leaveevent_callback(this, cbval1);
        } else {
            KFilePlacesView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfileplacesview_moveevent_isbase) {
            kfileplacesview_moveevent_isbase = false;
            KFilePlacesView::moveEvent(event);
        } else if (kfileplacesview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kfileplacesview_moveevent_callback(this, cbval1);
        } else {
            KFilePlacesView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfileplacesview_closeevent_isbase) {
            kfileplacesview_closeevent_isbase = false;
            KFilePlacesView::closeEvent(event);
        } else if (kfileplacesview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kfileplacesview_closeevent_callback(this, cbval1);
        } else {
            KFilePlacesView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfileplacesview_tabletevent_isbase) {
            kfileplacesview_tabletevent_isbase = false;
            KFilePlacesView::tabletEvent(event);
        } else if (kfileplacesview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kfileplacesview_tabletevent_callback(this, cbval1);
        } else {
            KFilePlacesView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfileplacesview_actionevent_isbase) {
            kfileplacesview_actionevent_isbase = false;
            KFilePlacesView::actionEvent(event);
        } else if (kfileplacesview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kfileplacesview_actionevent_callback(this, cbval1);
        } else {
            KFilePlacesView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfileplacesview_nativeevent_isbase) {
            kfileplacesview_nativeevent_isbase = false;
            return KFilePlacesView::nativeEvent(eventType, message, result);
        } else if (kfileplacesview_nativeevent_callback != nullptr) {
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

            bool callback_ret = kfileplacesview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFilePlacesView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfileplacesview_metric_isbase) {
            kfileplacesview_metric_isbase = false;
            return KFilePlacesView::metric(param1);
        } else if (kfileplacesview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kfileplacesview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfileplacesview_initpainter_isbase) {
            kfileplacesview_initpainter_isbase = false;
            KFilePlacesView::initPainter(painter);
        } else if (kfileplacesview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kfileplacesview_initpainter_callback(this, cbval1);
        } else {
            KFilePlacesView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfileplacesview_redirected_isbase) {
            kfileplacesview_redirected_isbase = false;
            return KFilePlacesView::redirected(offset);
        } else if (kfileplacesview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kfileplacesview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfileplacesview_sharedpainter_isbase) {
            kfileplacesview_sharedpainter_isbase = false;
            return KFilePlacesView::sharedPainter();
        } else if (kfileplacesview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kfileplacesview_sharedpainter_callback();
            return callback_ret;
        } else {
            return KFilePlacesView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileplacesview_childevent_isbase) {
            kfileplacesview_childevent_isbase = false;
            KFilePlacesView::childEvent(event);
        } else if (kfileplacesview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfileplacesview_childevent_callback(this, cbval1);
        } else {
            KFilePlacesView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileplacesview_customevent_isbase) {
            kfileplacesview_customevent_isbase = false;
            KFilePlacesView::customEvent(event);
        } else if (kfileplacesview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfileplacesview_customevent_callback(this, cbval1);
        } else {
            KFilePlacesView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileplacesview_connectnotify_isbase) {
            kfileplacesview_connectnotify_isbase = false;
            KFilePlacesView::connectNotify(signal);
        } else if (kfileplacesview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileplacesview_connectnotify_callback(this, cbval1);
        } else {
            KFilePlacesView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileplacesview_disconnectnotify_isbase) {
            kfileplacesview_disconnectnotify_isbase = false;
            KFilePlacesView::disconnectNotify(signal);
        } else if (kfileplacesview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileplacesview_disconnectnotify_callback(this, cbval1);
        } else {
            KFilePlacesView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (kfileplacesview_resizecontents_isbase) {
            kfileplacesview_resizecontents_isbase = false;
            KFilePlacesView::resizeContents(width, height);
        } else if (kfileplacesview_resizecontents_callback != nullptr) {
            int cbval1 = width;
            int cbval2 = height;

            kfileplacesview_resizecontents_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::resizeContents(width, height);
        }
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (kfileplacesview_contentssize_isbase) {
            kfileplacesview_contentssize_isbase = false;
            return KFilePlacesView::contentsSize();
        } else if (kfileplacesview_contentssize_callback != nullptr) {
            QSize* callback_ret = kfileplacesview_contentssize_callback();
            return *callback_ret;
        } else {
            return KFilePlacesView::contentsSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (kfileplacesview_rectforindex_isbase) {
            kfileplacesview_rectforindex_isbase = false;
            return KFilePlacesView::rectForIndex(index);
        } else if (kfileplacesview_rectforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = kfileplacesview_rectforindex_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlacesView::rectForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (kfileplacesview_setpositionforindex_isbase) {
            kfileplacesview_setpositionforindex_isbase = false;
            KFilePlacesView::setPositionForIndex(position, index);
        } else if (kfileplacesview_setpositionforindex_callback != nullptr) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            kfileplacesview_setpositionforindex_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::setPositionForIndex(position, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (kfileplacesview_state_isbase) {
            kfileplacesview_state_isbase = false;
            return KFilePlacesView::state();
        } else if (kfileplacesview_state_callback != nullptr) {
            int callback_ret = kfileplacesview_state_callback();
            return static_cast<VirtualKFilePlacesView::State>(callback_ret);
        } else {
            return KFilePlacesView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (kfileplacesview_setstate_isbase) {
            kfileplacesview_setstate_isbase = false;
            KFilePlacesView::setState(state);
        } else if (kfileplacesview_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            kfileplacesview_setstate_callback(this, cbval1);
        } else {
            KFilePlacesView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (kfileplacesview_scheduledelayeditemslayout_isbase) {
            kfileplacesview_scheduledelayeditemslayout_isbase = false;
            KFilePlacesView::scheduleDelayedItemsLayout();
        } else if (kfileplacesview_scheduledelayeditemslayout_callback != nullptr) {
            kfileplacesview_scheduledelayeditemslayout_callback();
        } else {
            KFilePlacesView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (kfileplacesview_executedelayeditemslayout_isbase) {
            kfileplacesview_executedelayeditemslayout_isbase = false;
            KFilePlacesView::executeDelayedItemsLayout();
        } else if (kfileplacesview_executedelayeditemslayout_callback != nullptr) {
            kfileplacesview_executedelayeditemslayout_callback();
        } else {
            KFilePlacesView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (kfileplacesview_setdirtyregion_isbase) {
            kfileplacesview_setdirtyregion_isbase = false;
            KFilePlacesView::setDirtyRegion(region);
        } else if (kfileplacesview_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            kfileplacesview_setdirtyregion_callback(this, cbval1);
        } else {
            KFilePlacesView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (kfileplacesview_scrolldirtyregion_isbase) {
            kfileplacesview_scrolldirtyregion_isbase = false;
            KFilePlacesView::scrollDirtyRegion(dx, dy);
        } else if (kfileplacesview_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            kfileplacesview_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (kfileplacesview_dirtyregionoffset_isbase) {
            kfileplacesview_dirtyregionoffset_isbase = false;
            return KFilePlacesView::dirtyRegionOffset();
        } else if (kfileplacesview_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = kfileplacesview_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return KFilePlacesView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (kfileplacesview_startautoscroll_isbase) {
            kfileplacesview_startautoscroll_isbase = false;
            KFilePlacesView::startAutoScroll();
        } else if (kfileplacesview_startautoscroll_callback != nullptr) {
            kfileplacesview_startautoscroll_callback();
        } else {
            KFilePlacesView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (kfileplacesview_stopautoscroll_isbase) {
            kfileplacesview_stopautoscroll_isbase = false;
            KFilePlacesView::stopAutoScroll();
        } else if (kfileplacesview_stopautoscroll_callback != nullptr) {
            kfileplacesview_stopautoscroll_callback();
        } else {
            KFilePlacesView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (kfileplacesview_doautoscroll_isbase) {
            kfileplacesview_doautoscroll_isbase = false;
            KFilePlacesView::doAutoScroll();
        } else if (kfileplacesview_doautoscroll_callback != nullptr) {
            kfileplacesview_doautoscroll_callback();
        } else {
            KFilePlacesView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (kfileplacesview_dropindicatorposition_isbase) {
            kfileplacesview_dropindicatorposition_isbase = false;
            return KFilePlacesView::dropIndicatorPosition();
        } else if (kfileplacesview_dropindicatorposition_callback != nullptr) {
            int callback_ret = kfileplacesview_dropindicatorposition_callback();
            return static_cast<VirtualKFilePlacesView::DropIndicatorPosition>(callback_ret);
        } else {
            return KFilePlacesView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (kfileplacesview_setviewportmargins_isbase) {
            kfileplacesview_setviewportmargins_isbase = false;
            KFilePlacesView::setViewportMargins(left, top, right, bottom);
        } else if (kfileplacesview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            kfileplacesview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KFilePlacesView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (kfileplacesview_viewportmargins_isbase) {
            kfileplacesview_viewportmargins_isbase = false;
            return KFilePlacesView::viewportMargins();
        } else if (kfileplacesview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = kfileplacesview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return KFilePlacesView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kfileplacesview_drawframe_isbase) {
            kfileplacesview_drawframe_isbase = false;
            KFilePlacesView::drawFrame(param1);
        } else if (kfileplacesview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kfileplacesview_drawframe_callback(this, cbval1);
        } else {
            KFilePlacesView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfileplacesview_updatemicrofocus_isbase) {
            kfileplacesview_updatemicrofocus_isbase = false;
            KFilePlacesView::updateMicroFocus();
        } else if (kfileplacesview_updatemicrofocus_callback != nullptr) {
            kfileplacesview_updatemicrofocus_callback();
        } else {
            KFilePlacesView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfileplacesview_create_isbase) {
            kfileplacesview_create_isbase = false;
            KFilePlacesView::create();
        } else if (kfileplacesview_create_callback != nullptr) {
            kfileplacesview_create_callback();
        } else {
            KFilePlacesView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfileplacesview_destroy_isbase) {
            kfileplacesview_destroy_isbase = false;
            KFilePlacesView::destroy();
        } else if (kfileplacesview_destroy_callback != nullptr) {
            kfileplacesview_destroy_callback();
        } else {
            KFilePlacesView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfileplacesview_focusnextchild_isbase) {
            kfileplacesview_focusnextchild_isbase = false;
            return KFilePlacesView::focusNextChild();
        } else if (kfileplacesview_focusnextchild_callback != nullptr) {
            bool callback_ret = kfileplacesview_focusnextchild_callback();
            return callback_ret;
        } else {
            return KFilePlacesView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfileplacesview_focuspreviouschild_isbase) {
            kfileplacesview_focuspreviouschild_isbase = false;
            return KFilePlacesView::focusPreviousChild();
        } else if (kfileplacesview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kfileplacesview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KFilePlacesView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfileplacesview_sender_isbase) {
            kfileplacesview_sender_isbase = false;
            return KFilePlacesView::sender();
        } else if (kfileplacesview_sender_callback != nullptr) {
            QObject* callback_ret = kfileplacesview_sender_callback();
            return callback_ret;
        } else {
            return KFilePlacesView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfileplacesview_sendersignalindex_isbase) {
            kfileplacesview_sendersignalindex_isbase = false;
            return KFilePlacesView::senderSignalIndex();
        } else if (kfileplacesview_sendersignalindex_callback != nullptr) {
            int callback_ret = kfileplacesview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfileplacesview_receivers_isbase) {
            kfileplacesview_receivers_isbase = false;
            return KFilePlacesView::receivers(signal);
        } else if (kfileplacesview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfileplacesview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfileplacesview_issignalconnected_isbase) {
            kfileplacesview_issignalconnected_isbase = false;
            return KFilePlacesView::isSignalConnected(signal);
        } else if (kfileplacesview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfileplacesview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesView::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfileplacesview_getdecodedmetricf_isbase) {
            kfileplacesview_getdecodedmetricf_isbase = false;
            return KFilePlacesView::getDecodedMetricF(metricA, metricB);
        } else if (kfileplacesview_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kfileplacesview_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KFilePlacesView::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KFilePlacesView_KeyPressEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_QBaseKeyPressEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_ContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event);
    friend void KFilePlacesView_QBaseContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event);
    friend void KFilePlacesView_ResizeEvent(KFilePlacesView* self, QResizeEvent* event);
    friend void KFilePlacesView_QBaseResizeEvent(KFilePlacesView* self, QResizeEvent* event);
    friend void KFilePlacesView_ShowEvent(KFilePlacesView* self, QShowEvent* event);
    friend void KFilePlacesView_QBaseShowEvent(KFilePlacesView* self, QShowEvent* event);
    friend void KFilePlacesView_HideEvent(KFilePlacesView* self, QHideEvent* event);
    friend void KFilePlacesView_QBaseHideEvent(KFilePlacesView* self, QHideEvent* event);
    friend void KFilePlacesView_DragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event);
    friend void KFilePlacesView_QBaseDragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event);
    friend void KFilePlacesView_DragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event);
    friend void KFilePlacesView_QBaseDragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event);
    friend void KFilePlacesView_DragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event);
    friend void KFilePlacesView_QBaseDragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event);
    friend void KFilePlacesView_DropEvent(KFilePlacesView* self, QDropEvent* event);
    friend void KFilePlacesView_QBaseDropEvent(KFilePlacesView* self, QDropEvent* event);
    friend void KFilePlacesView_PaintEvent(KFilePlacesView* self, QPaintEvent* event);
    friend void KFilePlacesView_QBasePaintEvent(KFilePlacesView* self, QPaintEvent* event);
    friend void KFilePlacesView_StartDrag(KFilePlacesView* self, int supportedActions);
    friend void KFilePlacesView_QBaseStartDrag(KFilePlacesView* self, int supportedActions);
    friend void KFilePlacesView_MousePressEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_QBaseMousePressEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_RowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_QBaseRowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_DataChanged(KFilePlacesView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void KFilePlacesView_QBaseDataChanged(KFilePlacesView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend bool KFilePlacesView_Event(KFilePlacesView* self, QEvent* e);
    friend bool KFilePlacesView_QBaseEvent(KFilePlacesView* self, QEvent* e);
    friend void KFilePlacesView_ScrollContentsBy(KFilePlacesView* self, int dx, int dy);
    friend void KFilePlacesView_QBaseScrollContentsBy(KFilePlacesView* self, int dx, int dy);
    friend void KFilePlacesView_RowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_QBaseRowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_MouseMoveEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_QBaseMouseMoveEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_MouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_QBaseMouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_WheelEvent(KFilePlacesView* self, QWheelEvent* e);
    friend void KFilePlacesView_QBaseWheelEvent(KFilePlacesView* self, QWheelEvent* e);
    friend void KFilePlacesView_TimerEvent(KFilePlacesView* self, QTimerEvent* e);
    friend void KFilePlacesView_QBaseTimerEvent(KFilePlacesView* self, QTimerEvent* e);
    friend void KFilePlacesView_InitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option);
    friend void KFilePlacesView_QBaseInitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option);
    friend int KFilePlacesView_HorizontalOffset(const KFilePlacesView* self);
    friend int KFilePlacesView_QBaseHorizontalOffset(const KFilePlacesView* self);
    friend int KFilePlacesView_VerticalOffset(const KFilePlacesView* self);
    friend int KFilePlacesView_QBaseVerticalOffset(const KFilePlacesView* self);
    friend QModelIndex* KFilePlacesView_MoveCursor(KFilePlacesView* self, int cursorAction, int modifiers);
    friend QModelIndex* KFilePlacesView_QBaseMoveCursor(KFilePlacesView* self, int cursorAction, int modifiers);
    friend void KFilePlacesView_SetSelection(KFilePlacesView* self, const QRect* rect, int command);
    friend void KFilePlacesView_QBaseSetSelection(KFilePlacesView* self, const QRect* rect, int command);
    friend QRegion* KFilePlacesView_VisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection);
    friend QRegion* KFilePlacesView_QBaseVisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ KFilePlacesView_SelectedIndexes(const KFilePlacesView* self);
    friend libqt_list /* of QModelIndex* */ KFilePlacesView_QBaseSelectedIndexes(const KFilePlacesView* self);
    friend void KFilePlacesView_UpdateGeometries(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseUpdateGeometries(KFilePlacesView* self);
    friend bool KFilePlacesView_IsIndexHidden(const KFilePlacesView* self, const QModelIndex* index);
    friend bool KFilePlacesView_QBaseIsIndexHidden(const KFilePlacesView* self, const QModelIndex* index);
    friend void KFilePlacesView_SelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KFilePlacesView_QBaseSelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KFilePlacesView_CurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void KFilePlacesView_QBaseCurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* KFilePlacesView_ViewportSizeHint(const KFilePlacesView* self);
    friend QSize* KFilePlacesView_QBaseViewportSizeHint(const KFilePlacesView* self);
    friend void KFilePlacesView_UpdateEditorData(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseUpdateEditorData(KFilePlacesView* self);
    friend void KFilePlacesView_UpdateEditorGeometries(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseUpdateEditorGeometries(KFilePlacesView* self);
    friend void KFilePlacesView_VerticalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_QBaseVerticalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_HorizontalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_QBaseHorizontalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_VerticalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_QBaseVerticalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_HorizontalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_QBaseHorizontalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_CloseEditor(KFilePlacesView* self, QWidget* editor, int hint);
    friend void KFilePlacesView_QBaseCloseEditor(KFilePlacesView* self, QWidget* editor, int hint);
    friend void KFilePlacesView_CommitData(KFilePlacesView* self, QWidget* editor);
    friend void KFilePlacesView_QBaseCommitData(KFilePlacesView* self, QWidget* editor);
    friend void KFilePlacesView_EditorDestroyed(KFilePlacesView* self, QObject* editor);
    friend void KFilePlacesView_QBaseEditorDestroyed(KFilePlacesView* self, QObject* editor);
    friend bool KFilePlacesView_Edit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool KFilePlacesView_QBaseEdit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int KFilePlacesView_SelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event);
    friend int KFilePlacesView_QBaseSelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event);
    friend bool KFilePlacesView_FocusNextPrevChild(KFilePlacesView* self, bool next);
    friend bool KFilePlacesView_QBaseFocusNextPrevChild(KFilePlacesView* self, bool next);
    friend bool KFilePlacesView_ViewportEvent(KFilePlacesView* self, QEvent* event);
    friend bool KFilePlacesView_QBaseViewportEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_MouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_QBaseMouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_FocusInEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_QBaseFocusInEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_FocusOutEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_QBaseFocusOutEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_InputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event);
    friend void KFilePlacesView_QBaseInputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event);
    friend bool KFilePlacesView_EventFilter(KFilePlacesView* self, QObject* object, QEvent* event);
    friend bool KFilePlacesView_QBaseEventFilter(KFilePlacesView* self, QObject* object, QEvent* event);
    friend void KFilePlacesView_ChangeEvent(KFilePlacesView* self, QEvent* param1);
    friend void KFilePlacesView_QBaseChangeEvent(KFilePlacesView* self, QEvent* param1);
    friend void KFilePlacesView_InitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option);
    friend void KFilePlacesView_QBaseInitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option);
    friend void KFilePlacesView_KeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_QBaseKeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_EnterEvent(KFilePlacesView* self, QEnterEvent* event);
    friend void KFilePlacesView_QBaseEnterEvent(KFilePlacesView* self, QEnterEvent* event);
    friend void KFilePlacesView_LeaveEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_QBaseLeaveEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_MoveEvent(KFilePlacesView* self, QMoveEvent* event);
    friend void KFilePlacesView_QBaseMoveEvent(KFilePlacesView* self, QMoveEvent* event);
    friend void KFilePlacesView_CloseEvent(KFilePlacesView* self, QCloseEvent* event);
    friend void KFilePlacesView_QBaseCloseEvent(KFilePlacesView* self, QCloseEvent* event);
    friend void KFilePlacesView_TabletEvent(KFilePlacesView* self, QTabletEvent* event);
    friend void KFilePlacesView_QBaseTabletEvent(KFilePlacesView* self, QTabletEvent* event);
    friend void KFilePlacesView_ActionEvent(KFilePlacesView* self, QActionEvent* event);
    friend void KFilePlacesView_QBaseActionEvent(KFilePlacesView* self, QActionEvent* event);
    friend bool KFilePlacesView_NativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFilePlacesView_QBaseNativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KFilePlacesView_Metric(const KFilePlacesView* self, int param1);
    friend int KFilePlacesView_QBaseMetric(const KFilePlacesView* self, int param1);
    friend void KFilePlacesView_InitPainter(const KFilePlacesView* self, QPainter* painter);
    friend void KFilePlacesView_QBaseInitPainter(const KFilePlacesView* self, QPainter* painter);
    friend QPaintDevice* KFilePlacesView_Redirected(const KFilePlacesView* self, QPoint* offset);
    friend QPaintDevice* KFilePlacesView_QBaseRedirected(const KFilePlacesView* self, QPoint* offset);
    friend QPainter* KFilePlacesView_SharedPainter(const KFilePlacesView* self);
    friend QPainter* KFilePlacesView_QBaseSharedPainter(const KFilePlacesView* self);
    friend void KFilePlacesView_ChildEvent(KFilePlacesView* self, QChildEvent* event);
    friend void KFilePlacesView_QBaseChildEvent(KFilePlacesView* self, QChildEvent* event);
    friend void KFilePlacesView_CustomEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_QBaseCustomEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_ConnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_QBaseConnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_DisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_QBaseDisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_ResizeContents(KFilePlacesView* self, int width, int height);
    friend void KFilePlacesView_QBaseResizeContents(KFilePlacesView* self, int width, int height);
    friend QSize* KFilePlacesView_ContentsSize(const KFilePlacesView* self);
    friend QSize* KFilePlacesView_QBaseContentsSize(const KFilePlacesView* self);
    friend QRect* KFilePlacesView_RectForIndex(const KFilePlacesView* self, const QModelIndex* index);
    friend QRect* KFilePlacesView_QBaseRectForIndex(const KFilePlacesView* self, const QModelIndex* index);
    friend void KFilePlacesView_SetPositionForIndex(KFilePlacesView* self, const QPoint* position, const QModelIndex* index);
    friend void KFilePlacesView_QBaseSetPositionForIndex(KFilePlacesView* self, const QPoint* position, const QModelIndex* index);
    friend int KFilePlacesView_State(const KFilePlacesView* self);
    friend int KFilePlacesView_QBaseState(const KFilePlacesView* self);
    friend void KFilePlacesView_SetState(KFilePlacesView* self, int state);
    friend void KFilePlacesView_QBaseSetState(KFilePlacesView* self, int state);
    friend void KFilePlacesView_ScheduleDelayedItemsLayout(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseScheduleDelayedItemsLayout(KFilePlacesView* self);
    friend void KFilePlacesView_ExecuteDelayedItemsLayout(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseExecuteDelayedItemsLayout(KFilePlacesView* self);
    friend void KFilePlacesView_SetDirtyRegion(KFilePlacesView* self, const QRegion* region);
    friend void KFilePlacesView_QBaseSetDirtyRegion(KFilePlacesView* self, const QRegion* region);
    friend void KFilePlacesView_ScrollDirtyRegion(KFilePlacesView* self, int dx, int dy);
    friend void KFilePlacesView_QBaseScrollDirtyRegion(KFilePlacesView* self, int dx, int dy);
    friend QPoint* KFilePlacesView_DirtyRegionOffset(const KFilePlacesView* self);
    friend QPoint* KFilePlacesView_QBaseDirtyRegionOffset(const KFilePlacesView* self);
    friend void KFilePlacesView_StartAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseStartAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_StopAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseStopAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_DoAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseDoAutoScroll(KFilePlacesView* self);
    friend int KFilePlacesView_DropIndicatorPosition(const KFilePlacesView* self);
    friend int KFilePlacesView_QBaseDropIndicatorPosition(const KFilePlacesView* self);
    friend void KFilePlacesView_SetViewportMargins(KFilePlacesView* self, int left, int top, int right, int bottom);
    friend void KFilePlacesView_QBaseSetViewportMargins(KFilePlacesView* self, int left, int top, int right, int bottom);
    friend QMargins* KFilePlacesView_ViewportMargins(const KFilePlacesView* self);
    friend QMargins* KFilePlacesView_QBaseViewportMargins(const KFilePlacesView* self);
    friend void KFilePlacesView_DrawFrame(KFilePlacesView* self, QPainter* param1);
    friend void KFilePlacesView_QBaseDrawFrame(KFilePlacesView* self, QPainter* param1);
    friend void KFilePlacesView_UpdateMicroFocus(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseUpdateMicroFocus(KFilePlacesView* self);
    friend void KFilePlacesView_Create(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseCreate(KFilePlacesView* self);
    friend void KFilePlacesView_Destroy(KFilePlacesView* self);
    friend void KFilePlacesView_QBaseDestroy(KFilePlacesView* self);
    friend bool KFilePlacesView_FocusNextChild(KFilePlacesView* self);
    friend bool KFilePlacesView_QBaseFocusNextChild(KFilePlacesView* self);
    friend bool KFilePlacesView_FocusPreviousChild(KFilePlacesView* self);
    friend bool KFilePlacesView_QBaseFocusPreviousChild(KFilePlacesView* self);
    friend QObject* KFilePlacesView_Sender(const KFilePlacesView* self);
    friend QObject* KFilePlacesView_QBaseSender(const KFilePlacesView* self);
    friend int KFilePlacesView_SenderSignalIndex(const KFilePlacesView* self);
    friend int KFilePlacesView_QBaseSenderSignalIndex(const KFilePlacesView* self);
    friend int KFilePlacesView_Receivers(const KFilePlacesView* self, const char* signal);
    friend int KFilePlacesView_QBaseReceivers(const KFilePlacesView* self, const char* signal);
    friend bool KFilePlacesView_IsSignalConnected(const KFilePlacesView* self, const QMetaMethod* signal);
    friend bool KFilePlacesView_QBaseIsSignalConnected(const KFilePlacesView* self, const QMetaMethod* signal);
    friend double KFilePlacesView_GetDecodedMetricF(const KFilePlacesView* self, int metricA, int metricB);
    friend double KFilePlacesView_QBaseGetDecodedMetricF(const KFilePlacesView* self, int metricA, int metricB);
};

#endif
