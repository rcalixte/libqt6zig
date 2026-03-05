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
    using KFilePlacesView_MetaObject_Callback = QMetaObject* (*)();
    using KFilePlacesView_Metacast_Callback = void* (*)(KFilePlacesView*, const char*);
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
    using KFilePlacesView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using KFilePlacesView_UpdateGeometries_Callback = void (*)();
    using KFilePlacesView_IsIndexHidden_Callback = bool (*)(const KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_SelectionChanged_Callback = void (*)(KFilePlacesView*, QItemSelection*, QItemSelection*);
    using KFilePlacesView_CurrentChanged_Callback = void (*)(KFilePlacesView*, QModelIndex*, QModelIndex*);
    using KFilePlacesView_ViewportSizeHint_Callback = QSize* (*)();
    using KFilePlacesView_SetSelectionModel_Callback = void (*)(KFilePlacesView*, QItemSelectionModel*);
    using KFilePlacesView_KeyboardSearch_Callback = void (*)(KFilePlacesView*, const char*);
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
    KFilePlacesView_MetaObject_Callback kfileplacesview_metaobject_callback = nullptr;
    KFilePlacesView_Metacast_Callback kfileplacesview_metacast_callback = nullptr;
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
    mutable bool kfileplacesview_metaobject_isbase = false;
    mutable bool kfileplacesview_metacast_isbase = false;
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

    // Callback setters
    inline void setKFilePlacesView_MetaObject_Callback(KFilePlacesView_MetaObject_Callback cb) { kfileplacesview_metaobject_callback = cb; }
    inline void setKFilePlacesView_Metacast_Callback(KFilePlacesView_Metacast_Callback cb) { kfileplacesview_metacast_callback = cb; }
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
    inline void setKFilePlacesView_MetaObject_IsBase(bool value) const { kfileplacesview_metaobject_isbase = value; }
    inline void setKFilePlacesView_Metacast_IsBase(bool value) const { kfileplacesview_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kfileplacesview_metaobject_isbase) {
            kfileplacesview_metaobject_isbase = false;
            return KFilePlacesView::metaObject();
        }
        auto metaobject_cb = kfileplacesview_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFilePlacesView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfileplacesview_metacast_isbase) {
            kfileplacesview_metacast_isbase = false;
            return KFilePlacesView::qt_metacast(param1);
        }
        auto metacast_cb = kfileplacesview_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileplacesview_metacall_isbase) {
            kfileplacesview_metacall_isbase = false;
            return KFilePlacesView::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfileplacesview_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfileplacesview_sizehint_isbase) {
            kfileplacesview_sizehint_isbase = false;
            return KFilePlacesView::sizeHint();
        }
        auto sizehint_cb = kfileplacesview_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KFilePlacesView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kfileplacesview_setmodel_isbase) {
            kfileplacesview_setmodel_isbase = false;
            KFilePlacesView::setModel(model);
            return;
        }
        auto setmodel_cb = kfileplacesview_setmodel_callback;
        if (setmodel_cb) {
            QAbstractItemModel* cbval1 = model;

            setmodel_cb(this, cbval1);
            return;
        }
        KFilePlacesView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfileplacesview_keypressevent_isbase) {
            kfileplacesview_keypressevent_isbase = false;
            KFilePlacesView::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kfileplacesview_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfileplacesview_contextmenuevent_isbase) {
            kfileplacesview_contextmenuevent_isbase = false;
            KFilePlacesView::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kfileplacesview_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfileplacesview_resizeevent_isbase) {
            kfileplacesview_resizeevent_isbase = false;
            KFilePlacesView::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kfileplacesview_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfileplacesview_showevent_isbase) {
            kfileplacesview_showevent_isbase = false;
            KFilePlacesView::showEvent(event);
            return;
        }
        auto showevent_cb = kfileplacesview_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfileplacesview_hideevent_isbase) {
            kfileplacesview_hideevent_isbase = false;
            KFilePlacesView::hideEvent(event);
            return;
        }
        auto hideevent_cb = kfileplacesview_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfileplacesview_dragenterevent_isbase) {
            kfileplacesview_dragenterevent_isbase = false;
            KFilePlacesView::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kfileplacesview_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfileplacesview_dragleaveevent_isbase) {
            kfileplacesview_dragleaveevent_isbase = false;
            KFilePlacesView::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kfileplacesview_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfileplacesview_dragmoveevent_isbase) {
            kfileplacesview_dragmoveevent_isbase = false;
            KFilePlacesView::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kfileplacesview_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfileplacesview_dropevent_isbase) {
            kfileplacesview_dropevent_isbase = false;
            KFilePlacesView::dropEvent(event);
            return;
        }
        auto dropevent_cb = kfileplacesview_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfileplacesview_paintevent_isbase) {
            kfileplacesview_paintevent_isbase = false;
            KFilePlacesView::paintEvent(event);
            return;
        }
        auto paintevent_cb = kfileplacesview_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (kfileplacesview_startdrag_isbase) {
            kfileplacesview_startdrag_isbase = false;
            KFilePlacesView::startDrag(supportedActions);
            return;
        }
        auto startdrag_cb = kfileplacesview_startdrag_callback;
        if (startdrag_cb) {
            int cbval1 = static_cast<int>(supportedActions);

            startdrag_cb(this, cbval1);
            return;
        }
        KFilePlacesView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfileplacesview_mousepressevent_isbase) {
            kfileplacesview_mousepressevent_isbase = false;
            KFilePlacesView::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kfileplacesview_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (kfileplacesview_rowsinserted_isbase) {
            kfileplacesview_rowsinserted_isbase = false;
            KFilePlacesView::rowsInserted(parent, start, end);
            return;
        }
        auto rowsinserted_cb = kfileplacesview_rowsinserted_callback;
        if (rowsinserted_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsinserted_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KFilePlacesView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (kfileplacesview_datachanged_isbase) {
            kfileplacesview_datachanged_isbase = false;
            KFilePlacesView::dataChanged(topLeft, bottomRight, roles);
            return;
        }
        auto datachanged_cb = kfileplacesview_datachanged_callback;
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
        KFilePlacesView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kfileplacesview_visualrect_isbase) {
            kfileplacesview_visualrect_isbase = false;
            return KFilePlacesView::visualRect(index);
        }
        auto visualrect_cb = kfileplacesview_visualrect_callback;
        if (visualrect_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = visualrect_cb(this, cbval1);
            return *callback_ret;
        }
        return KFilePlacesView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (kfileplacesview_scrollto_isbase) {
            kfileplacesview_scrollto_isbase = false;
            KFilePlacesView::scrollTo(index, hint);
            return;
        }
        auto scrollto_cb = kfileplacesview_scrollto_callback;
        if (scrollto_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            scrollto_cb(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (kfileplacesview_indexat_isbase) {
            kfileplacesview_indexat_isbase = false;
            return KFilePlacesView::indexAt(p);
        }
        auto indexat_cb = kfileplacesview_indexat_callback;
        if (indexat_cb) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = indexat_cb(this, cbval1);
            return *callback_ret;
        }
        return KFilePlacesView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (kfileplacesview_doitemslayout_isbase) {
            kfileplacesview_doitemslayout_isbase = false;
            KFilePlacesView::doItemsLayout();
            return;
        }
        auto doitemslayout_cb = kfileplacesview_doitemslayout_callback;
        if (doitemslayout_cb) {
            doitemslayout_cb();
            return;
        }
        KFilePlacesView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kfileplacesview_reset_isbase) {
            kfileplacesview_reset_isbase = false;
            KFilePlacesView::reset();
            return;
        }
        auto reset_cb = kfileplacesview_reset_callback;
        if (reset_cb) {
            reset_cb();
            return;
        }
        KFilePlacesView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (kfileplacesview_setrootindex_isbase) {
            kfileplacesview_setrootindex_isbase = false;
            KFilePlacesView::setRootIndex(index);
            return;
        }
        auto setrootindex_cb = kfileplacesview_setrootindex_callback;
        if (setrootindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            setrootindex_cb(this, cbval1);
            return;
        }
        KFilePlacesView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kfileplacesview_event_isbase) {
            kfileplacesview_event_isbase = false;
            return KFilePlacesView::event(e);
        }
        auto event_cb = kfileplacesview_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kfileplacesview_scrollcontentsby_isbase) {
            kfileplacesview_scrollcontentsby_isbase = false;
            KFilePlacesView::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = kfileplacesview_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (kfileplacesview_rowsabouttoberemoved_isbase) {
            kfileplacesview_rowsabouttoberemoved_isbase = false;
            KFilePlacesView::rowsAboutToBeRemoved(parent, start, end);
            return;
        }
        auto rowsabouttoberemoved_cb = kfileplacesview_rowsabouttoberemoved_callback;
        if (rowsabouttoberemoved_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsabouttoberemoved_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KFilePlacesView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kfileplacesview_mousemoveevent_isbase) {
            kfileplacesview_mousemoveevent_isbase = false;
            KFilePlacesView::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = kfileplacesview_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kfileplacesview_mousereleaseevent_isbase) {
            kfileplacesview_mousereleaseevent_isbase = false;
            KFilePlacesView::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = kfileplacesview_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kfileplacesview_wheelevent_isbase) {
            kfileplacesview_wheelevent_isbase = false;
            KFilePlacesView::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = kfileplacesview_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kfileplacesview_timerevent_isbase) {
            kfileplacesview_timerevent_isbase = false;
            KFilePlacesView::timerEvent(e);
            return;
        }
        auto timerevent_cb = kfileplacesview_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (kfileplacesview_initviewitemoption_isbase) {
            kfileplacesview_initviewitemoption_isbase = false;
            KFilePlacesView::initViewItemOption(option);
            return;
        }
        auto initviewitemoption_cb = kfileplacesview_initviewitemoption_callback;
        if (initviewitemoption_cb) {
            QStyleOptionViewItem* cbval1 = option;

            initviewitemoption_cb(this, cbval1);
            return;
        }
        KFilePlacesView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (kfileplacesview_horizontaloffset_isbase) {
            kfileplacesview_horizontaloffset_isbase = false;
            return KFilePlacesView::horizontalOffset();
        }
        auto horizontaloffset_cb = kfileplacesview_horizontaloffset_callback;
        if (horizontaloffset_cb) {
            int callback_ret = horizontaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (kfileplacesview_verticaloffset_isbase) {
            kfileplacesview_verticaloffset_isbase = false;
            return KFilePlacesView::verticalOffset();
        }
        auto verticaloffset_cb = kfileplacesview_verticaloffset_callback;
        if (verticaloffset_cb) {
            int callback_ret = verticaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (kfileplacesview_movecursor_isbase) {
            kfileplacesview_movecursor_isbase = false;
            return KFilePlacesView::moveCursor(cursorAction, modifiers);
        }
        auto movecursor_cb = kfileplacesview_movecursor_callback;
        if (movecursor_cb) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = movecursor_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KFilePlacesView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (kfileplacesview_setselection_isbase) {
            kfileplacesview_setselection_isbase = false;
            KFilePlacesView::setSelection(rect, command);
            return;
        }
        auto setselection_cb = kfileplacesview_setselection_callback;
        if (setselection_cb) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            setselection_cb(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (kfileplacesview_visualregionforselection_isbase) {
            kfileplacesview_visualregionforselection_isbase = false;
            return KFilePlacesView::visualRegionForSelection(selection);
        }
        auto visualregionforselection_cb = kfileplacesview_visualregionforselection_callback;
        if (visualregionforselection_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = visualregionforselection_cb(this, cbval1);
            return *callback_ret;
        }
        return KFilePlacesView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (kfileplacesview_selectedindexes_isbase) {
            kfileplacesview_selectedindexes_isbase = false;
            return KFilePlacesView::selectedIndexes();
        }
        auto selectedindexes_cb = kfileplacesview_selectedindexes_callback;
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
        return KFilePlacesView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (kfileplacesview_updategeometries_isbase) {
            kfileplacesview_updategeometries_isbase = false;
            KFilePlacesView::updateGeometries();
            return;
        }
        auto updategeometries_cb = kfileplacesview_updategeometries_callback;
        if (updategeometries_cb) {
            updategeometries_cb();
            return;
        }
        KFilePlacesView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (kfileplacesview_isindexhidden_isbase) {
            kfileplacesview_isindexhidden_isbase = false;
            return KFilePlacesView::isIndexHidden(index);
        }
        auto isindexhidden_cb = kfileplacesview_isindexhidden_callback;
        if (isindexhidden_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = isindexhidden_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (kfileplacesview_selectionchanged_isbase) {
            kfileplacesview_selectionchanged_isbase = false;
            KFilePlacesView::selectionChanged(selected, deselected);
            return;
        }
        auto selectionchanged_cb = kfileplacesview_selectionchanged_callback;
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
        KFilePlacesView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (kfileplacesview_currentchanged_isbase) {
            kfileplacesview_currentchanged_isbase = false;
            KFilePlacesView::currentChanged(current, previous);
            return;
        }
        auto currentchanged_cb = kfileplacesview_currentchanged_callback;
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
        KFilePlacesView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kfileplacesview_viewportsizehint_isbase) {
            kfileplacesview_viewportsizehint_isbase = false;
            return KFilePlacesView::viewportSizeHint();
        }
        auto viewportsizehint_cb = kfileplacesview_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return KFilePlacesView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (kfileplacesview_setselectionmodel_isbase) {
            kfileplacesview_setselectionmodel_isbase = false;
            KFilePlacesView::setSelectionModel(selectionModel);
            return;
        }
        auto setselectionmodel_cb = kfileplacesview_setselectionmodel_callback;
        if (setselectionmodel_cb) {
            QItemSelectionModel* cbval1 = selectionModel;

            setselectionmodel_cb(this, cbval1);
            return;
        }
        KFilePlacesView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (kfileplacesview_keyboardsearch_isbase) {
            kfileplacesview_keyboardsearch_isbase = false;
            KFilePlacesView::keyboardSearch(search);
            return;
        }
        auto keyboardsearch_cb = kfileplacesview_keyboardsearch_callback;
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
        KFilePlacesView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (kfileplacesview_sizehintforrow_isbase) {
            kfileplacesview_sizehintforrow_isbase = false;
            return KFilePlacesView::sizeHintForRow(row);
        }
        auto sizehintforrow_cb = kfileplacesview_sizehintforrow_callback;
        if (sizehintforrow_cb) {
            int cbval1 = row;

            int callback_ret = sizehintforrow_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (kfileplacesview_sizehintforcolumn_isbase) {
            kfileplacesview_sizehintforcolumn_isbase = false;
            return KFilePlacesView::sizeHintForColumn(column);
        }
        auto sizehintforcolumn_cb = kfileplacesview_sizehintforcolumn_callback;
        if (sizehintforcolumn_cb) {
            int cbval1 = column;

            int callback_ret = sizehintforcolumn_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (kfileplacesview_itemdelegateforindex_isbase) {
            kfileplacesview_itemdelegateforindex_isbase = false;
            return KFilePlacesView::itemDelegateForIndex(index);
        }
        auto itemdelegateforindex_cb = kfileplacesview_itemdelegateforindex_callback;
        if (itemdelegateforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = itemdelegateforindex_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (kfileplacesview_inputmethodquery_isbase) {
            kfileplacesview_inputmethodquery_isbase = false;
            return KFilePlacesView::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = kfileplacesview_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KFilePlacesView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (kfileplacesview_selectall_isbase) {
            kfileplacesview_selectall_isbase = false;
            KFilePlacesView::selectAll();
            return;
        }
        auto selectall_cb = kfileplacesview_selectall_callback;
        if (selectall_cb) {
            selectall_cb();
            return;
        }
        KFilePlacesView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (kfileplacesview_updateeditordata_isbase) {
            kfileplacesview_updateeditordata_isbase = false;
            KFilePlacesView::updateEditorData();
            return;
        }
        auto updateeditordata_cb = kfileplacesview_updateeditordata_callback;
        if (updateeditordata_cb) {
            updateeditordata_cb();
            return;
        }
        KFilePlacesView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (kfileplacesview_updateeditorgeometries_isbase) {
            kfileplacesview_updateeditorgeometries_isbase = false;
            KFilePlacesView::updateEditorGeometries();
            return;
        }
        auto updateeditorgeometries_cb = kfileplacesview_updateeditorgeometries_callback;
        if (updateeditorgeometries_cb) {
            updateeditorgeometries_cb();
            return;
        }
        KFilePlacesView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (kfileplacesview_verticalscrollbaraction_isbase) {
            kfileplacesview_verticalscrollbaraction_isbase = false;
            KFilePlacesView::verticalScrollbarAction(action);
            return;
        }
        auto verticalscrollbaraction_cb = kfileplacesview_verticalscrollbaraction_callback;
        if (verticalscrollbaraction_cb) {
            int cbval1 = action;

            verticalscrollbaraction_cb(this, cbval1);
            return;
        }
        KFilePlacesView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (kfileplacesview_horizontalscrollbaraction_isbase) {
            kfileplacesview_horizontalscrollbaraction_isbase = false;
            KFilePlacesView::horizontalScrollbarAction(action);
            return;
        }
        auto horizontalscrollbaraction_cb = kfileplacesview_horizontalscrollbaraction_callback;
        if (horizontalscrollbaraction_cb) {
            int cbval1 = action;

            horizontalscrollbaraction_cb(this, cbval1);
            return;
        }
        KFilePlacesView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (kfileplacesview_verticalscrollbarvaluechanged_isbase) {
            kfileplacesview_verticalscrollbarvaluechanged_isbase = false;
            KFilePlacesView::verticalScrollbarValueChanged(value);
            return;
        }
        auto verticalscrollbarvaluechanged_cb = kfileplacesview_verticalscrollbarvaluechanged_callback;
        if (verticalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            verticalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        KFilePlacesView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (kfileplacesview_horizontalscrollbarvaluechanged_isbase) {
            kfileplacesview_horizontalscrollbarvaluechanged_isbase = false;
            KFilePlacesView::horizontalScrollbarValueChanged(value);
            return;
        }
        auto horizontalscrollbarvaluechanged_cb = kfileplacesview_horizontalscrollbarvaluechanged_callback;
        if (horizontalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            horizontalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        KFilePlacesView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (kfileplacesview_closeeditor_isbase) {
            kfileplacesview_closeeditor_isbase = false;
            KFilePlacesView::closeEditor(editor, hint);
            return;
        }
        auto closeeditor_cb = kfileplacesview_closeeditor_callback;
        if (closeeditor_cb) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            closeeditor_cb(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (kfileplacesview_commitdata_isbase) {
            kfileplacesview_commitdata_isbase = false;
            KFilePlacesView::commitData(editor);
            return;
        }
        auto commitdata_cb = kfileplacesview_commitdata_callback;
        if (commitdata_cb) {
            QWidget* cbval1 = editor;

            commitdata_cb(this, cbval1);
            return;
        }
        KFilePlacesView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (kfileplacesview_editordestroyed_isbase) {
            kfileplacesview_editordestroyed_isbase = false;
            KFilePlacesView::editorDestroyed(editor);
            return;
        }
        auto editordestroyed_cb = kfileplacesview_editordestroyed_callback;
        if (editordestroyed_cb) {
            QObject* cbval1 = editor;

            editordestroyed_cb(this, cbval1);
            return;
        }
        KFilePlacesView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (kfileplacesview_edit2_isbase) {
            kfileplacesview_edit2_isbase = false;
            return KFilePlacesView::edit(index, trigger, event);
        }
        auto edit2_cb = kfileplacesview_edit2_callback;
        if (edit2_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = edit2_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KFilePlacesView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (kfileplacesview_selectioncommand_isbase) {
            kfileplacesview_selectioncommand_isbase = false;
            return KFilePlacesView::selectionCommand(index, event);
        }
        auto selectioncommand_cb = kfileplacesview_selectioncommand_callback;
        if (selectioncommand_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = selectioncommand_cb(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return KFilePlacesView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfileplacesview_focusnextprevchild_isbase) {
            kfileplacesview_focusnextprevchild_isbase = false;
            return KFilePlacesView::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kfileplacesview_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (kfileplacesview_viewportevent_isbase) {
            kfileplacesview_viewportevent_isbase = false;
            return KFilePlacesView::viewportEvent(event);
        }
        auto viewportevent_cb = kfileplacesview_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfileplacesview_mousedoubleclickevent_isbase) {
            kfileplacesview_mousedoubleclickevent_isbase = false;
            KFilePlacesView::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kfileplacesview_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfileplacesview_focusinevent_isbase) {
            kfileplacesview_focusinevent_isbase = false;
            KFilePlacesView::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kfileplacesview_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfileplacesview_focusoutevent_isbase) {
            kfileplacesview_focusoutevent_isbase = false;
            KFilePlacesView::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kfileplacesview_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (kfileplacesview_inputmethodevent_isbase) {
            kfileplacesview_inputmethodevent_isbase = false;
            KFilePlacesView::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = kfileplacesview_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kfileplacesview_eventfilter_isbase) {
            kfileplacesview_eventfilter_isbase = false;
            return KFilePlacesView::eventFilter(object, event);
        }
        auto eventfilter_cb = kfileplacesview_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFilePlacesView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfileplacesview_minimumsizehint_isbase) {
            kfileplacesview_minimumsizehint_isbase = false;
            return KFilePlacesView::minimumSizeHint();
        }
        auto minimumsizehint_cb = kfileplacesview_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KFilePlacesView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kfileplacesview_setupviewport_isbase) {
            kfileplacesview_setupviewport_isbase = false;
            KFilePlacesView::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = kfileplacesview_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        KFilePlacesView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfileplacesview_changeevent_isbase) {
            kfileplacesview_changeevent_isbase = false;
            KFilePlacesView::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kfileplacesview_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kfileplacesview_initstyleoption_isbase) {
            kfileplacesview_initstyleoption_isbase = false;
            KFilePlacesView::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = kfileplacesview_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        KFilePlacesView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfileplacesview_devtype_isbase) {
            kfileplacesview_devtype_isbase = false;
            return KFilePlacesView::devType();
        }
        auto devtype_cb = kfileplacesview_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfileplacesview_setvisible_isbase) {
            kfileplacesview_setvisible_isbase = false;
            KFilePlacesView::setVisible(visible);
            return;
        }
        auto setvisible_cb = kfileplacesview_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KFilePlacesView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfileplacesview_heightforwidth_isbase) {
            kfileplacesview_heightforwidth_isbase = false;
            return KFilePlacesView::heightForWidth(param1);
        }
        auto heightforwidth_cb = kfileplacesview_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfileplacesview_hasheightforwidth_isbase) {
            kfileplacesview_hasheightforwidth_isbase = false;
            return KFilePlacesView::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kfileplacesview_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KFilePlacesView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfileplacesview_paintengine_isbase) {
            kfileplacesview_paintengine_isbase = false;
            return KFilePlacesView::paintEngine();
        }
        auto paintengine_cb = kfileplacesview_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KFilePlacesView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfileplacesview_keyreleaseevent_isbase) {
            kfileplacesview_keyreleaseevent_isbase = false;
            KFilePlacesView::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kfileplacesview_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfileplacesview_enterevent_isbase) {
            kfileplacesview_enterevent_isbase = false;
            KFilePlacesView::enterEvent(event);
            return;
        }
        auto enterevent_cb = kfileplacesview_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfileplacesview_leaveevent_isbase) {
            kfileplacesview_leaveevent_isbase = false;
            KFilePlacesView::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kfileplacesview_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfileplacesview_moveevent_isbase) {
            kfileplacesview_moveevent_isbase = false;
            KFilePlacesView::moveEvent(event);
            return;
        }
        auto moveevent_cb = kfileplacesview_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfileplacesview_closeevent_isbase) {
            kfileplacesview_closeevent_isbase = false;
            KFilePlacesView::closeEvent(event);
            return;
        }
        auto closeevent_cb = kfileplacesview_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfileplacesview_tabletevent_isbase) {
            kfileplacesview_tabletevent_isbase = false;
            KFilePlacesView::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kfileplacesview_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfileplacesview_actionevent_isbase) {
            kfileplacesview_actionevent_isbase = false;
            KFilePlacesView::actionEvent(event);
            return;
        }
        auto actionevent_cb = kfileplacesview_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfileplacesview_nativeevent_isbase) {
            kfileplacesview_nativeevent_isbase = false;
            return KFilePlacesView::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kfileplacesview_nativeevent_callback;
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
        return KFilePlacesView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfileplacesview_metric_isbase) {
            kfileplacesview_metric_isbase = false;
            return KFilePlacesView::metric(param1);
        }
        auto metric_cb = kfileplacesview_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfileplacesview_initpainter_isbase) {
            kfileplacesview_initpainter_isbase = false;
            KFilePlacesView::initPainter(painter);
            return;
        }
        auto initpainter_cb = kfileplacesview_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KFilePlacesView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfileplacesview_redirected_isbase) {
            kfileplacesview_redirected_isbase = false;
            return KFilePlacesView::redirected(offset);
        }
        auto redirected_cb = kfileplacesview_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfileplacesview_sharedpainter_isbase) {
            kfileplacesview_sharedpainter_isbase = false;
            return KFilePlacesView::sharedPainter();
        }
        auto sharedpainter_cb = kfileplacesview_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KFilePlacesView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileplacesview_childevent_isbase) {
            kfileplacesview_childevent_isbase = false;
            KFilePlacesView::childEvent(event);
            return;
        }
        auto childevent_cb = kfileplacesview_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileplacesview_customevent_isbase) {
            kfileplacesview_customevent_isbase = false;
            KFilePlacesView::customEvent(event);
            return;
        }
        auto customevent_cb = kfileplacesview_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFilePlacesView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileplacesview_connectnotify_isbase) {
            kfileplacesview_connectnotify_isbase = false;
            KFilePlacesView::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfileplacesview_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFilePlacesView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileplacesview_disconnectnotify_isbase) {
            kfileplacesview_disconnectnotify_isbase = false;
            KFilePlacesView::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfileplacesview_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFilePlacesView::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (kfileplacesview_resizecontents_isbase) {
            kfileplacesview_resizecontents_isbase = false;
            KFilePlacesView::resizeContents(width, height);
            return;
        }
        auto resizecontents_cb = kfileplacesview_resizecontents_callback;
        if (resizecontents_cb) {
            int cbval1 = width;
            int cbval2 = height;

            resizecontents_cb(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::resizeContents(width, height);
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (kfileplacesview_contentssize_isbase) {
            kfileplacesview_contentssize_isbase = false;
            return KFilePlacesView::contentsSize();
        }
        auto contentssize_cb = kfileplacesview_contentssize_callback;
        if (contentssize_cb) {
            QSize* callback_ret = contentssize_cb();
            return *callback_ret;
        }
        return KFilePlacesView::contentsSize();
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (kfileplacesview_rectforindex_isbase) {
            kfileplacesview_rectforindex_isbase = false;
            return KFilePlacesView::rectForIndex(index);
        }
        auto rectforindex_cb = kfileplacesview_rectforindex_callback;
        if (rectforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = rectforindex_cb(this, cbval1);
            return *callback_ret;
        }
        return KFilePlacesView::rectForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (kfileplacesview_setpositionforindex_isbase) {
            kfileplacesview_setpositionforindex_isbase = false;
            KFilePlacesView::setPositionForIndex(position, index);
            return;
        }
        auto setpositionforindex_cb = kfileplacesview_setpositionforindex_callback;
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
        KFilePlacesView::setPositionForIndex(position, index);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (kfileplacesview_state_isbase) {
            kfileplacesview_state_isbase = false;
            return KFilePlacesView::state();
        }
        auto state_cb = kfileplacesview_state_callback;
        if (state_cb) {
            int callback_ret = state_cb();
            return static_cast<VirtualKFilePlacesView::State>(callback_ret);
        }
        return KFilePlacesView::state();
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (kfileplacesview_setstate_isbase) {
            kfileplacesview_setstate_isbase = false;
            KFilePlacesView::setState(state);
            return;
        }
        auto setstate_cb = kfileplacesview_setstate_callback;
        if (setstate_cb) {
            int cbval1 = static_cast<int>(state);

            setstate_cb(this, cbval1);
            return;
        }
        KFilePlacesView::setState(state);
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (kfileplacesview_scheduledelayeditemslayout_isbase) {
            kfileplacesview_scheduledelayeditemslayout_isbase = false;
            KFilePlacesView::scheduleDelayedItemsLayout();
            return;
        }
        auto scheduledelayeditemslayout_cb = kfileplacesview_scheduledelayeditemslayout_callback;
        if (scheduledelayeditemslayout_cb) {
            scheduledelayeditemslayout_cb();
            return;
        }
        KFilePlacesView::scheduleDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (kfileplacesview_executedelayeditemslayout_isbase) {
            kfileplacesview_executedelayeditemslayout_isbase = false;
            KFilePlacesView::executeDelayedItemsLayout();
            return;
        }
        auto executedelayeditemslayout_cb = kfileplacesview_executedelayeditemslayout_callback;
        if (executedelayeditemslayout_cb) {
            executedelayeditemslayout_cb();
            return;
        }
        KFilePlacesView::executeDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (kfileplacesview_setdirtyregion_isbase) {
            kfileplacesview_setdirtyregion_isbase = false;
            KFilePlacesView::setDirtyRegion(region);
            return;
        }
        auto setdirtyregion_cb = kfileplacesview_setdirtyregion_callback;
        if (setdirtyregion_cb) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            setdirtyregion_cb(this, cbval1);
            return;
        }
        KFilePlacesView::setDirtyRegion(region);
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (kfileplacesview_scrolldirtyregion_isbase) {
            kfileplacesview_scrolldirtyregion_isbase = false;
            KFilePlacesView::scrollDirtyRegion(dx, dy);
            return;
        }
        auto scrolldirtyregion_cb = kfileplacesview_scrolldirtyregion_callback;
        if (scrolldirtyregion_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrolldirtyregion_cb(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::scrollDirtyRegion(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (kfileplacesview_dirtyregionoffset_isbase) {
            kfileplacesview_dirtyregionoffset_isbase = false;
            return KFilePlacesView::dirtyRegionOffset();
        }
        auto dirtyregionoffset_cb = kfileplacesview_dirtyregionoffset_callback;
        if (dirtyregionoffset_cb) {
            QPoint* callback_ret = dirtyregionoffset_cb();
            return *callback_ret;
        }
        return KFilePlacesView::dirtyRegionOffset();
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (kfileplacesview_startautoscroll_isbase) {
            kfileplacesview_startautoscroll_isbase = false;
            KFilePlacesView::startAutoScroll();
            return;
        }
        auto startautoscroll_cb = kfileplacesview_startautoscroll_callback;
        if (startautoscroll_cb) {
            startautoscroll_cb();
            return;
        }
        KFilePlacesView::startAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (kfileplacesview_stopautoscroll_isbase) {
            kfileplacesview_stopautoscroll_isbase = false;
            KFilePlacesView::stopAutoScroll();
            return;
        }
        auto stopautoscroll_cb = kfileplacesview_stopautoscroll_callback;
        if (stopautoscroll_cb) {
            stopautoscroll_cb();
            return;
        }
        KFilePlacesView::stopAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (kfileplacesview_doautoscroll_isbase) {
            kfileplacesview_doautoscroll_isbase = false;
            KFilePlacesView::doAutoScroll();
            return;
        }
        auto doautoscroll_cb = kfileplacesview_doautoscroll_callback;
        if (doautoscroll_cb) {
            doautoscroll_cb();
            return;
        }
        KFilePlacesView::doAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (kfileplacesview_dropindicatorposition_isbase) {
            kfileplacesview_dropindicatorposition_isbase = false;
            return KFilePlacesView::dropIndicatorPosition();
        }
        auto dropindicatorposition_cb = kfileplacesview_dropindicatorposition_callback;
        if (dropindicatorposition_cb) {
            int callback_ret = dropindicatorposition_cb();
            return static_cast<VirtualKFilePlacesView::DropIndicatorPosition>(callback_ret);
        }
        return KFilePlacesView::dropIndicatorPosition();
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (kfileplacesview_setviewportmargins_isbase) {
            kfileplacesview_setviewportmargins_isbase = false;
            KFilePlacesView::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = kfileplacesview_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KFilePlacesView::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (kfileplacesview_viewportmargins_isbase) {
            kfileplacesview_viewportmargins_isbase = false;
            return KFilePlacesView::viewportMargins();
        }
        auto viewportmargins_cb = kfileplacesview_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return KFilePlacesView::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kfileplacesview_drawframe_isbase) {
            kfileplacesview_drawframe_isbase = false;
            KFilePlacesView::drawFrame(param1);
            return;
        }
        auto drawframe_cb = kfileplacesview_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        KFilePlacesView::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfileplacesview_updatemicrofocus_isbase) {
            kfileplacesview_updatemicrofocus_isbase = false;
            KFilePlacesView::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kfileplacesview_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KFilePlacesView::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfileplacesview_create_isbase) {
            kfileplacesview_create_isbase = false;
            KFilePlacesView::create();
            return;
        }
        auto create_cb = kfileplacesview_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KFilePlacesView::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfileplacesview_destroy_isbase) {
            kfileplacesview_destroy_isbase = false;
            KFilePlacesView::destroy();
            return;
        }
        auto destroy_cb = kfileplacesview_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KFilePlacesView::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfileplacesview_focusnextchild_isbase) {
            kfileplacesview_focusnextchild_isbase = false;
            return KFilePlacesView::focusNextChild();
        }
        auto focusnextchild_cb = kfileplacesview_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KFilePlacesView::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfileplacesview_focuspreviouschild_isbase) {
            kfileplacesview_focuspreviouschild_isbase = false;
            return KFilePlacesView::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kfileplacesview_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KFilePlacesView::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfileplacesview_sender_isbase) {
            kfileplacesview_sender_isbase = false;
            return KFilePlacesView::sender();
        }
        auto sender_cb = kfileplacesview_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFilePlacesView::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfileplacesview_sendersignalindex_isbase) {
            kfileplacesview_sendersignalindex_isbase = false;
            return KFilePlacesView::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfileplacesview_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfileplacesview_receivers_isbase) {
            kfileplacesview_receivers_isbase = false;
            return KFilePlacesView::receivers(signal);
        }
        auto receivers_cb = kfileplacesview_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfileplacesview_issignalconnected_isbase) {
            kfileplacesview_issignalconnected_isbase = false;
            return KFilePlacesView::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfileplacesview_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfileplacesview_getdecodedmetricf_isbase) {
            kfileplacesview_getdecodedmetricf_isbase = false;
            return KFilePlacesView::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kfileplacesview_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KFilePlacesView::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KFilePlacesView_KeyPressEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_SuperKeyPressEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_ContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event);
    friend void KFilePlacesView_SuperContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event);
    friend void KFilePlacesView_ResizeEvent(KFilePlacesView* self, QResizeEvent* event);
    friend void KFilePlacesView_SuperResizeEvent(KFilePlacesView* self, QResizeEvent* event);
    friend void KFilePlacesView_ShowEvent(KFilePlacesView* self, QShowEvent* event);
    friend void KFilePlacesView_SuperShowEvent(KFilePlacesView* self, QShowEvent* event);
    friend void KFilePlacesView_HideEvent(KFilePlacesView* self, QHideEvent* event);
    friend void KFilePlacesView_SuperHideEvent(KFilePlacesView* self, QHideEvent* event);
    friend void KFilePlacesView_DragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event);
    friend void KFilePlacesView_SuperDragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event);
    friend void KFilePlacesView_DragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event);
    friend void KFilePlacesView_SuperDragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event);
    friend void KFilePlacesView_DragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event);
    friend void KFilePlacesView_SuperDragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event);
    friend void KFilePlacesView_DropEvent(KFilePlacesView* self, QDropEvent* event);
    friend void KFilePlacesView_SuperDropEvent(KFilePlacesView* self, QDropEvent* event);
    friend void KFilePlacesView_PaintEvent(KFilePlacesView* self, QPaintEvent* event);
    friend void KFilePlacesView_SuperPaintEvent(KFilePlacesView* self, QPaintEvent* event);
    friend void KFilePlacesView_StartDrag(KFilePlacesView* self, int supportedActions);
    friend void KFilePlacesView_SuperStartDrag(KFilePlacesView* self, int supportedActions);
    friend void KFilePlacesView_MousePressEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_SuperMousePressEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_RowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_SuperRowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_DataChanged(KFilePlacesView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void KFilePlacesView_SuperDataChanged(KFilePlacesView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend bool KFilePlacesView_Event(KFilePlacesView* self, QEvent* e);
    friend bool KFilePlacesView_SuperEvent(KFilePlacesView* self, QEvent* e);
    friend void KFilePlacesView_ScrollContentsBy(KFilePlacesView* self, int dx, int dy);
    friend void KFilePlacesView_SuperScrollContentsBy(KFilePlacesView* self, int dx, int dy);
    friend void KFilePlacesView_RowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_SuperRowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_MouseMoveEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_SuperMouseMoveEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_MouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_SuperMouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_WheelEvent(KFilePlacesView* self, QWheelEvent* e);
    friend void KFilePlacesView_SuperWheelEvent(KFilePlacesView* self, QWheelEvent* e);
    friend void KFilePlacesView_TimerEvent(KFilePlacesView* self, QTimerEvent* e);
    friend void KFilePlacesView_SuperTimerEvent(KFilePlacesView* self, QTimerEvent* e);
    friend void KFilePlacesView_InitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option);
    friend void KFilePlacesView_SuperInitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option);
    friend int KFilePlacesView_HorizontalOffset(const KFilePlacesView* self);
    friend int KFilePlacesView_SuperHorizontalOffset(const KFilePlacesView* self);
    friend int KFilePlacesView_VerticalOffset(const KFilePlacesView* self);
    friend int KFilePlacesView_SuperVerticalOffset(const KFilePlacesView* self);
    friend QModelIndex* KFilePlacesView_MoveCursor(KFilePlacesView* self, int cursorAction, int modifiers);
    friend QModelIndex* KFilePlacesView_SuperMoveCursor(KFilePlacesView* self, int cursorAction, int modifiers);
    friend void KFilePlacesView_SetSelection(KFilePlacesView* self, const QRect* rect, int command);
    friend void KFilePlacesView_SuperSetSelection(KFilePlacesView* self, const QRect* rect, int command);
    friend QRegion* KFilePlacesView_VisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection);
    friend QRegion* KFilePlacesView_SuperVisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ KFilePlacesView_SelectedIndexes(const KFilePlacesView* self);
    friend libqt_list /* of QModelIndex* */ KFilePlacesView_SuperSelectedIndexes(const KFilePlacesView* self);
    friend void KFilePlacesView_UpdateGeometries(KFilePlacesView* self);
    friend void KFilePlacesView_SuperUpdateGeometries(KFilePlacesView* self);
    friend bool KFilePlacesView_IsIndexHidden(const KFilePlacesView* self, const QModelIndex* index);
    friend bool KFilePlacesView_SuperIsIndexHidden(const KFilePlacesView* self, const QModelIndex* index);
    friend void KFilePlacesView_SelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KFilePlacesView_SuperSelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KFilePlacesView_CurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void KFilePlacesView_SuperCurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* KFilePlacesView_ViewportSizeHint(const KFilePlacesView* self);
    friend QSize* KFilePlacesView_SuperViewportSizeHint(const KFilePlacesView* self);
    friend void KFilePlacesView_UpdateEditorData(KFilePlacesView* self);
    friend void KFilePlacesView_SuperUpdateEditorData(KFilePlacesView* self);
    friend void KFilePlacesView_UpdateEditorGeometries(KFilePlacesView* self);
    friend void KFilePlacesView_SuperUpdateEditorGeometries(KFilePlacesView* self);
    friend void KFilePlacesView_VerticalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_SuperVerticalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_HorizontalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_SuperHorizontalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_VerticalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_SuperVerticalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_HorizontalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_SuperHorizontalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_CloseEditor(KFilePlacesView* self, QWidget* editor, int hint);
    friend void KFilePlacesView_SuperCloseEditor(KFilePlacesView* self, QWidget* editor, int hint);
    friend void KFilePlacesView_CommitData(KFilePlacesView* self, QWidget* editor);
    friend void KFilePlacesView_SuperCommitData(KFilePlacesView* self, QWidget* editor);
    friend void KFilePlacesView_EditorDestroyed(KFilePlacesView* self, QObject* editor);
    friend void KFilePlacesView_SuperEditorDestroyed(KFilePlacesView* self, QObject* editor);
    friend bool KFilePlacesView_Edit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool KFilePlacesView_SuperEdit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int KFilePlacesView_SelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event);
    friend int KFilePlacesView_SuperSelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event);
    friend bool KFilePlacesView_FocusNextPrevChild(KFilePlacesView* self, bool next);
    friend bool KFilePlacesView_SuperFocusNextPrevChild(KFilePlacesView* self, bool next);
    friend bool KFilePlacesView_ViewportEvent(KFilePlacesView* self, QEvent* event);
    friend bool KFilePlacesView_SuperViewportEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_MouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_SuperMouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_FocusInEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_SuperFocusInEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_FocusOutEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_SuperFocusOutEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_InputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event);
    friend void KFilePlacesView_SuperInputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event);
    friend bool KFilePlacesView_EventFilter(KFilePlacesView* self, QObject* object, QEvent* event);
    friend bool KFilePlacesView_SuperEventFilter(KFilePlacesView* self, QObject* object, QEvent* event);
    friend void KFilePlacesView_ChangeEvent(KFilePlacesView* self, QEvent* param1);
    friend void KFilePlacesView_SuperChangeEvent(KFilePlacesView* self, QEvent* param1);
    friend void KFilePlacesView_InitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option);
    friend void KFilePlacesView_SuperInitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option);
    friend void KFilePlacesView_KeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_SuperKeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_EnterEvent(KFilePlacesView* self, QEnterEvent* event);
    friend void KFilePlacesView_SuperEnterEvent(KFilePlacesView* self, QEnterEvent* event);
    friend void KFilePlacesView_LeaveEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_SuperLeaveEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_MoveEvent(KFilePlacesView* self, QMoveEvent* event);
    friend void KFilePlacesView_SuperMoveEvent(KFilePlacesView* self, QMoveEvent* event);
    friend void KFilePlacesView_CloseEvent(KFilePlacesView* self, QCloseEvent* event);
    friend void KFilePlacesView_SuperCloseEvent(KFilePlacesView* self, QCloseEvent* event);
    friend void KFilePlacesView_TabletEvent(KFilePlacesView* self, QTabletEvent* event);
    friend void KFilePlacesView_SuperTabletEvent(KFilePlacesView* self, QTabletEvent* event);
    friend void KFilePlacesView_ActionEvent(KFilePlacesView* self, QActionEvent* event);
    friend void KFilePlacesView_SuperActionEvent(KFilePlacesView* self, QActionEvent* event);
    friend bool KFilePlacesView_NativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFilePlacesView_SuperNativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KFilePlacesView_Metric(const KFilePlacesView* self, int param1);
    friend int KFilePlacesView_SuperMetric(const KFilePlacesView* self, int param1);
    friend void KFilePlacesView_InitPainter(const KFilePlacesView* self, QPainter* painter);
    friend void KFilePlacesView_SuperInitPainter(const KFilePlacesView* self, QPainter* painter);
    friend QPaintDevice* KFilePlacesView_Redirected(const KFilePlacesView* self, QPoint* offset);
    friend QPaintDevice* KFilePlacesView_SuperRedirected(const KFilePlacesView* self, QPoint* offset);
    friend QPainter* KFilePlacesView_SharedPainter(const KFilePlacesView* self);
    friend QPainter* KFilePlacesView_SuperSharedPainter(const KFilePlacesView* self);
    friend void KFilePlacesView_ChildEvent(KFilePlacesView* self, QChildEvent* event);
    friend void KFilePlacesView_SuperChildEvent(KFilePlacesView* self, QChildEvent* event);
    friend void KFilePlacesView_CustomEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_SuperCustomEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_ConnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_SuperConnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_DisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_SuperDisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_ResizeContents(KFilePlacesView* self, int width, int height);
    friend void KFilePlacesView_SuperResizeContents(KFilePlacesView* self, int width, int height);
    friend QSize* KFilePlacesView_ContentsSize(const KFilePlacesView* self);
    friend QSize* KFilePlacesView_SuperContentsSize(const KFilePlacesView* self);
    friend QRect* KFilePlacesView_RectForIndex(const KFilePlacesView* self, const QModelIndex* index);
    friend QRect* KFilePlacesView_SuperRectForIndex(const KFilePlacesView* self, const QModelIndex* index);
    friend void KFilePlacesView_SetPositionForIndex(KFilePlacesView* self, const QPoint* position, const QModelIndex* index);
    friend void KFilePlacesView_SuperSetPositionForIndex(KFilePlacesView* self, const QPoint* position, const QModelIndex* index);
    friend int KFilePlacesView_State(const KFilePlacesView* self);
    friend int KFilePlacesView_SuperState(const KFilePlacesView* self);
    friend void KFilePlacesView_SetState(KFilePlacesView* self, int state);
    friend void KFilePlacesView_SuperSetState(KFilePlacesView* self, int state);
    friend void KFilePlacesView_ScheduleDelayedItemsLayout(KFilePlacesView* self);
    friend void KFilePlacesView_SuperScheduleDelayedItemsLayout(KFilePlacesView* self);
    friend void KFilePlacesView_ExecuteDelayedItemsLayout(KFilePlacesView* self);
    friend void KFilePlacesView_SuperExecuteDelayedItemsLayout(KFilePlacesView* self);
    friend void KFilePlacesView_SetDirtyRegion(KFilePlacesView* self, const QRegion* region);
    friend void KFilePlacesView_SuperSetDirtyRegion(KFilePlacesView* self, const QRegion* region);
    friend void KFilePlacesView_ScrollDirtyRegion(KFilePlacesView* self, int dx, int dy);
    friend void KFilePlacesView_SuperScrollDirtyRegion(KFilePlacesView* self, int dx, int dy);
    friend QPoint* KFilePlacesView_DirtyRegionOffset(const KFilePlacesView* self);
    friend QPoint* KFilePlacesView_SuperDirtyRegionOffset(const KFilePlacesView* self);
    friend void KFilePlacesView_StartAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_SuperStartAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_StopAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_SuperStopAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_DoAutoScroll(KFilePlacesView* self);
    friend void KFilePlacesView_SuperDoAutoScroll(KFilePlacesView* self);
    friend int KFilePlacesView_DropIndicatorPosition(const KFilePlacesView* self);
    friend int KFilePlacesView_SuperDropIndicatorPosition(const KFilePlacesView* self);
    friend void KFilePlacesView_SetViewportMargins(KFilePlacesView* self, int left, int top, int right, int bottom);
    friend void KFilePlacesView_SuperSetViewportMargins(KFilePlacesView* self, int left, int top, int right, int bottom);
    friend QMargins* KFilePlacesView_ViewportMargins(const KFilePlacesView* self);
    friend QMargins* KFilePlacesView_SuperViewportMargins(const KFilePlacesView* self);
    friend void KFilePlacesView_DrawFrame(KFilePlacesView* self, QPainter* param1);
    friend void KFilePlacesView_SuperDrawFrame(KFilePlacesView* self, QPainter* param1);
    friend void KFilePlacesView_UpdateMicroFocus(KFilePlacesView* self);
    friend void KFilePlacesView_SuperUpdateMicroFocus(KFilePlacesView* self);
    friend void KFilePlacesView_Create(KFilePlacesView* self);
    friend void KFilePlacesView_SuperCreate(KFilePlacesView* self);
    friend void KFilePlacesView_Destroy(KFilePlacesView* self);
    friend void KFilePlacesView_SuperDestroy(KFilePlacesView* self);
    friend bool KFilePlacesView_FocusNextChild(KFilePlacesView* self);
    friend bool KFilePlacesView_SuperFocusNextChild(KFilePlacesView* self);
    friend bool KFilePlacesView_FocusPreviousChild(KFilePlacesView* self);
    friend bool KFilePlacesView_SuperFocusPreviousChild(KFilePlacesView* self);
    friend QObject* KFilePlacesView_Sender(const KFilePlacesView* self);
    friend QObject* KFilePlacesView_SuperSender(const KFilePlacesView* self);
    friend int KFilePlacesView_SenderSignalIndex(const KFilePlacesView* self);
    friend int KFilePlacesView_SuperSenderSignalIndex(const KFilePlacesView* self);
    friend int KFilePlacesView_Receivers(const KFilePlacesView* self, const char* signal);
    friend int KFilePlacesView_SuperReceivers(const KFilePlacesView* self, const char* signal);
    friend bool KFilePlacesView_IsSignalConnected(const KFilePlacesView* self, const QMetaMethod* signal);
    friend bool KFilePlacesView_SuperIsSignalConnected(const KFilePlacesView* self, const QMetaMethod* signal);
    friend double KFilePlacesView_GetDecodedMetricF(const KFilePlacesView* self, int metricA, int metricB);
    friend double KFilePlacesView_SuperGetDecodedMetricF(const KFilePlacesView* self, int metricA, int metricB);
};

#endif
