#pragma once
#ifndef SRCC_LIBVIRTUALQCOLUMNVIEW_H
#define SRCC_LIBVIRTUALQCOLUMNVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QColumnView so that we can call protected methods
class VirtualQColumnView final : public QColumnView {

  public:
    // Virtual class boolean flag
    bool isVirtualQColumnView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QColumnView_Metacall_Callback = int (*)(QColumnView*, int, int, void**);
    using QColumnView_IndexAt_Callback = QModelIndex* (*)(const QColumnView*, QPoint*);
    using QColumnView_ScrollTo_Callback = void (*)(QColumnView*, QModelIndex*, int);
    using QColumnView_SizeHint_Callback = QSize* (*)();
    using QColumnView_VisualRect_Callback = QRect* (*)(const QColumnView*, QModelIndex*);
    using QColumnView_SetModel_Callback = void (*)(QColumnView*, QAbstractItemModel*);
    using QColumnView_SetSelectionModel_Callback = void (*)(QColumnView*, QItemSelectionModel*);
    using QColumnView_SetRootIndex_Callback = void (*)(QColumnView*, QModelIndex*);
    using QColumnView_SelectAll_Callback = void (*)();
    using QColumnView_IsIndexHidden_Callback = bool (*)(const QColumnView*, QModelIndex*);
    using QColumnView_MoveCursor_Callback = QModelIndex* (*)(QColumnView*, int, int);
    using QColumnView_ResizeEvent_Callback = void (*)(QColumnView*, QResizeEvent*);
    using QColumnView_SetSelection_Callback = void (*)(QColumnView*, QRect*, int);
    using QColumnView_VisualRegionForSelection_Callback = QRegion* (*)(const QColumnView*, QItemSelection*);
    using QColumnView_HorizontalOffset_Callback = int (*)();
    using QColumnView_VerticalOffset_Callback = int (*)();
    using QColumnView_RowsInserted_Callback = void (*)(QColumnView*, QModelIndex*, int, int);
    using QColumnView_CurrentChanged_Callback = void (*)(QColumnView*, QModelIndex*, QModelIndex*);
    using QColumnView_ScrollContentsBy_Callback = void (*)(QColumnView*, int, int);
    using QColumnView_CreateColumn_Callback = QAbstractItemView* (*)(QColumnView*, QModelIndex*);
    using QColumnView_KeyboardSearch_Callback = void (*)(QColumnView*, libqt_string);
    using QColumnView_SizeHintForRow_Callback = int (*)(const QColumnView*, int);
    using QColumnView_SizeHintForColumn_Callback = int (*)(const QColumnView*, int);
    using QColumnView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QColumnView*, QModelIndex*);
    using QColumnView_InputMethodQuery_Callback = QVariant* (*)(const QColumnView*, int);
    using QColumnView_Reset_Callback = void (*)();
    using QColumnView_DoItemsLayout_Callback = void (*)();
    using QColumnView_DataChanged_Callback = void (*)(QColumnView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QColumnView_RowsAboutToBeRemoved_Callback = void (*)(QColumnView*, QModelIndex*, int, int);
    using QColumnView_SelectionChanged_Callback = void (*)(QColumnView*, QItemSelection*, QItemSelection*);
    using QColumnView_UpdateEditorData_Callback = void (*)();
    using QColumnView_UpdateEditorGeometries_Callback = void (*)();
    using QColumnView_UpdateGeometries_Callback = void (*)();
    using QColumnView_VerticalScrollbarAction_Callback = void (*)(QColumnView*, int);
    using QColumnView_HorizontalScrollbarAction_Callback = void (*)(QColumnView*, int);
    using QColumnView_VerticalScrollbarValueChanged_Callback = void (*)(QColumnView*, int);
    using QColumnView_HorizontalScrollbarValueChanged_Callback = void (*)(QColumnView*, int);
    using QColumnView_CloseEditor_Callback = void (*)(QColumnView*, QWidget*, int);
    using QColumnView_CommitData_Callback = void (*)(QColumnView*, QWidget*);
    using QColumnView_EditorDestroyed_Callback = void (*)(QColumnView*, QObject*);
    using QColumnView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QColumnView_Edit2_Callback = bool (*)(QColumnView*, QModelIndex*, int, QEvent*);
    using QColumnView_SelectionCommand_Callback = int (*)(const QColumnView*, QModelIndex*, QEvent*);
    using QColumnView_StartDrag_Callback = void (*)(QColumnView*, int);
    using QColumnView_InitViewItemOption_Callback = void (*)(const QColumnView*, QStyleOptionViewItem*);
    using QColumnView_FocusNextPrevChild_Callback = bool (*)(QColumnView*, bool);
    using QColumnView_Event_Callback = bool (*)(QColumnView*, QEvent*);
    using QColumnView_ViewportEvent_Callback = bool (*)(QColumnView*, QEvent*);
    using QColumnView_MousePressEvent_Callback = void (*)(QColumnView*, QMouseEvent*);
    using QColumnView_MouseMoveEvent_Callback = void (*)(QColumnView*, QMouseEvent*);
    using QColumnView_MouseReleaseEvent_Callback = void (*)(QColumnView*, QMouseEvent*);
    using QColumnView_MouseDoubleClickEvent_Callback = void (*)(QColumnView*, QMouseEvent*);
    using QColumnView_DragEnterEvent_Callback = void (*)(QColumnView*, QDragEnterEvent*);
    using QColumnView_DragMoveEvent_Callback = void (*)(QColumnView*, QDragMoveEvent*);
    using QColumnView_DragLeaveEvent_Callback = void (*)(QColumnView*, QDragLeaveEvent*);
    using QColumnView_DropEvent_Callback = void (*)(QColumnView*, QDropEvent*);
    using QColumnView_FocusInEvent_Callback = void (*)(QColumnView*, QFocusEvent*);
    using QColumnView_FocusOutEvent_Callback = void (*)(QColumnView*, QFocusEvent*);
    using QColumnView_KeyPressEvent_Callback = void (*)(QColumnView*, QKeyEvent*);
    using QColumnView_TimerEvent_Callback = void (*)(QColumnView*, QTimerEvent*);
    using QColumnView_InputMethodEvent_Callback = void (*)(QColumnView*, QInputMethodEvent*);
    using QColumnView_EventFilter_Callback = bool (*)(QColumnView*, QObject*, QEvent*);
    using QColumnView_ViewportSizeHint_Callback = QSize* (*)();
    using QColumnView_MinimumSizeHint_Callback = QSize* (*)();
    using QColumnView_SetupViewport_Callback = void (*)(QColumnView*, QWidget*);
    using QColumnView_PaintEvent_Callback = void (*)(QColumnView*, QPaintEvent*);
    using QColumnView_WheelEvent_Callback = void (*)(QColumnView*, QWheelEvent*);
    using QColumnView_ContextMenuEvent_Callback = void (*)(QColumnView*, QContextMenuEvent*);
    using QColumnView_ChangeEvent_Callback = void (*)(QColumnView*, QEvent*);
    using QColumnView_InitStyleOption_Callback = void (*)(const QColumnView*, QStyleOptionFrame*);
    using QColumnView_DevType_Callback = int (*)();
    using QColumnView_SetVisible_Callback = void (*)(QColumnView*, bool);
    using QColumnView_HeightForWidth_Callback = int (*)(const QColumnView*, int);
    using QColumnView_HasHeightForWidth_Callback = bool (*)();
    using QColumnView_PaintEngine_Callback = QPaintEngine* (*)();
    using QColumnView_KeyReleaseEvent_Callback = void (*)(QColumnView*, QKeyEvent*);
    using QColumnView_EnterEvent_Callback = void (*)(QColumnView*, QEnterEvent*);
    using QColumnView_LeaveEvent_Callback = void (*)(QColumnView*, QEvent*);
    using QColumnView_MoveEvent_Callback = void (*)(QColumnView*, QMoveEvent*);
    using QColumnView_CloseEvent_Callback = void (*)(QColumnView*, QCloseEvent*);
    using QColumnView_TabletEvent_Callback = void (*)(QColumnView*, QTabletEvent*);
    using QColumnView_ActionEvent_Callback = void (*)(QColumnView*, QActionEvent*);
    using QColumnView_ShowEvent_Callback = void (*)(QColumnView*, QShowEvent*);
    using QColumnView_HideEvent_Callback = void (*)(QColumnView*, QHideEvent*);
    using QColumnView_NativeEvent_Callback = bool (*)(QColumnView*, libqt_string, void*, intptr_t*);
    using QColumnView_Metric_Callback = int (*)(const QColumnView*, int);
    using QColumnView_InitPainter_Callback = void (*)(const QColumnView*, QPainter*);
    using QColumnView_Redirected_Callback = QPaintDevice* (*)(const QColumnView*, QPoint*);
    using QColumnView_SharedPainter_Callback = QPainter* (*)();
    using QColumnView_ChildEvent_Callback = void (*)(QColumnView*, QChildEvent*);
    using QColumnView_CustomEvent_Callback = void (*)(QColumnView*, QEvent*);
    using QColumnView_ConnectNotify_Callback = void (*)(QColumnView*, QMetaMethod*);
    using QColumnView_DisconnectNotify_Callback = void (*)(QColumnView*, QMetaMethod*);
    using QColumnView_InitializeColumn_Callback = void (*)(const QColumnView*, QAbstractItemView*);
    using QColumnView_State_Callback = int (*)();
    using QColumnView_SetState_Callback = void (*)(QColumnView*, int);
    using QColumnView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QColumnView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QColumnView_SetDirtyRegion_Callback = void (*)(QColumnView*, QRegion*);
    using QColumnView_ScrollDirtyRegion_Callback = void (*)(QColumnView*, int, int);
    using QColumnView_DirtyRegionOffset_Callback = QPoint* (*)();
    using QColumnView_StartAutoScroll_Callback = void (*)();
    using QColumnView_StopAutoScroll_Callback = void (*)();
    using QColumnView_DoAutoScroll_Callback = void (*)();
    using QColumnView_DropIndicatorPosition_Callback = int (*)();
    using QColumnView_SetViewportMargins_Callback = void (*)(QColumnView*, int, int, int, int);
    using QColumnView_ViewportMargins_Callback = QMargins* (*)();
    using QColumnView_DrawFrame_Callback = void (*)(QColumnView*, QPainter*);
    using QColumnView_UpdateMicroFocus_Callback = void (*)();
    using QColumnView_Create_Callback = void (*)();
    using QColumnView_Destroy_Callback = void (*)();
    using QColumnView_FocusNextChild_Callback = bool (*)();
    using QColumnView_FocusPreviousChild_Callback = bool (*)();
    using QColumnView_Sender_Callback = QObject* (*)();
    using QColumnView_SenderSignalIndex_Callback = int (*)();
    using QColumnView_Receivers_Callback = int (*)(const QColumnView*, const char*);
    using QColumnView_IsSignalConnected_Callback = bool (*)(const QColumnView*, QMetaMethod*);

  protected:
    // Instance callback storage
    QColumnView_Metacall_Callback qcolumnview_metacall_callback = nullptr;
    QColumnView_IndexAt_Callback qcolumnview_indexat_callback = nullptr;
    QColumnView_ScrollTo_Callback qcolumnview_scrollto_callback = nullptr;
    QColumnView_SizeHint_Callback qcolumnview_sizehint_callback = nullptr;
    QColumnView_VisualRect_Callback qcolumnview_visualrect_callback = nullptr;
    QColumnView_SetModel_Callback qcolumnview_setmodel_callback = nullptr;
    QColumnView_SetSelectionModel_Callback qcolumnview_setselectionmodel_callback = nullptr;
    QColumnView_SetRootIndex_Callback qcolumnview_setrootindex_callback = nullptr;
    QColumnView_SelectAll_Callback qcolumnview_selectall_callback = nullptr;
    QColumnView_IsIndexHidden_Callback qcolumnview_isindexhidden_callback = nullptr;
    QColumnView_MoveCursor_Callback qcolumnview_movecursor_callback = nullptr;
    QColumnView_ResizeEvent_Callback qcolumnview_resizeevent_callback = nullptr;
    QColumnView_SetSelection_Callback qcolumnview_setselection_callback = nullptr;
    QColumnView_VisualRegionForSelection_Callback qcolumnview_visualregionforselection_callback = nullptr;
    QColumnView_HorizontalOffset_Callback qcolumnview_horizontaloffset_callback = nullptr;
    QColumnView_VerticalOffset_Callback qcolumnview_verticaloffset_callback = nullptr;
    QColumnView_RowsInserted_Callback qcolumnview_rowsinserted_callback = nullptr;
    QColumnView_CurrentChanged_Callback qcolumnview_currentchanged_callback = nullptr;
    QColumnView_ScrollContentsBy_Callback qcolumnview_scrollcontentsby_callback = nullptr;
    QColumnView_CreateColumn_Callback qcolumnview_createcolumn_callback = nullptr;
    QColumnView_KeyboardSearch_Callback qcolumnview_keyboardsearch_callback = nullptr;
    QColumnView_SizeHintForRow_Callback qcolumnview_sizehintforrow_callback = nullptr;
    QColumnView_SizeHintForColumn_Callback qcolumnview_sizehintforcolumn_callback = nullptr;
    QColumnView_ItemDelegateForIndex_Callback qcolumnview_itemdelegateforindex_callback = nullptr;
    QColumnView_InputMethodQuery_Callback qcolumnview_inputmethodquery_callback = nullptr;
    QColumnView_Reset_Callback qcolumnview_reset_callback = nullptr;
    QColumnView_DoItemsLayout_Callback qcolumnview_doitemslayout_callback = nullptr;
    QColumnView_DataChanged_Callback qcolumnview_datachanged_callback = nullptr;
    QColumnView_RowsAboutToBeRemoved_Callback qcolumnview_rowsabouttoberemoved_callback = nullptr;
    QColumnView_SelectionChanged_Callback qcolumnview_selectionchanged_callback = nullptr;
    QColumnView_UpdateEditorData_Callback qcolumnview_updateeditordata_callback = nullptr;
    QColumnView_UpdateEditorGeometries_Callback qcolumnview_updateeditorgeometries_callback = nullptr;
    QColumnView_UpdateGeometries_Callback qcolumnview_updategeometries_callback = nullptr;
    QColumnView_VerticalScrollbarAction_Callback qcolumnview_verticalscrollbaraction_callback = nullptr;
    QColumnView_HorizontalScrollbarAction_Callback qcolumnview_horizontalscrollbaraction_callback = nullptr;
    QColumnView_VerticalScrollbarValueChanged_Callback qcolumnview_verticalscrollbarvaluechanged_callback = nullptr;
    QColumnView_HorizontalScrollbarValueChanged_Callback qcolumnview_horizontalscrollbarvaluechanged_callback = nullptr;
    QColumnView_CloseEditor_Callback qcolumnview_closeeditor_callback = nullptr;
    QColumnView_CommitData_Callback qcolumnview_commitdata_callback = nullptr;
    QColumnView_EditorDestroyed_Callback qcolumnview_editordestroyed_callback = nullptr;
    QColumnView_SelectedIndexes_Callback qcolumnview_selectedindexes_callback = nullptr;
    QColumnView_Edit2_Callback qcolumnview_edit2_callback = nullptr;
    QColumnView_SelectionCommand_Callback qcolumnview_selectioncommand_callback = nullptr;
    QColumnView_StartDrag_Callback qcolumnview_startdrag_callback = nullptr;
    QColumnView_InitViewItemOption_Callback qcolumnview_initviewitemoption_callback = nullptr;
    QColumnView_FocusNextPrevChild_Callback qcolumnview_focusnextprevchild_callback = nullptr;
    QColumnView_Event_Callback qcolumnview_event_callback = nullptr;
    QColumnView_ViewportEvent_Callback qcolumnview_viewportevent_callback = nullptr;
    QColumnView_MousePressEvent_Callback qcolumnview_mousepressevent_callback = nullptr;
    QColumnView_MouseMoveEvent_Callback qcolumnview_mousemoveevent_callback = nullptr;
    QColumnView_MouseReleaseEvent_Callback qcolumnview_mousereleaseevent_callback = nullptr;
    QColumnView_MouseDoubleClickEvent_Callback qcolumnview_mousedoubleclickevent_callback = nullptr;
    QColumnView_DragEnterEvent_Callback qcolumnview_dragenterevent_callback = nullptr;
    QColumnView_DragMoveEvent_Callback qcolumnview_dragmoveevent_callback = nullptr;
    QColumnView_DragLeaveEvent_Callback qcolumnview_dragleaveevent_callback = nullptr;
    QColumnView_DropEvent_Callback qcolumnview_dropevent_callback = nullptr;
    QColumnView_FocusInEvent_Callback qcolumnview_focusinevent_callback = nullptr;
    QColumnView_FocusOutEvent_Callback qcolumnview_focusoutevent_callback = nullptr;
    QColumnView_KeyPressEvent_Callback qcolumnview_keypressevent_callback = nullptr;
    QColumnView_TimerEvent_Callback qcolumnview_timerevent_callback = nullptr;
    QColumnView_InputMethodEvent_Callback qcolumnview_inputmethodevent_callback = nullptr;
    QColumnView_EventFilter_Callback qcolumnview_eventfilter_callback = nullptr;
    QColumnView_ViewportSizeHint_Callback qcolumnview_viewportsizehint_callback = nullptr;
    QColumnView_MinimumSizeHint_Callback qcolumnview_minimumsizehint_callback = nullptr;
    QColumnView_SetupViewport_Callback qcolumnview_setupviewport_callback = nullptr;
    QColumnView_PaintEvent_Callback qcolumnview_paintevent_callback = nullptr;
    QColumnView_WheelEvent_Callback qcolumnview_wheelevent_callback = nullptr;
    QColumnView_ContextMenuEvent_Callback qcolumnview_contextmenuevent_callback = nullptr;
    QColumnView_ChangeEvent_Callback qcolumnview_changeevent_callback = nullptr;
    QColumnView_InitStyleOption_Callback qcolumnview_initstyleoption_callback = nullptr;
    QColumnView_DevType_Callback qcolumnview_devtype_callback = nullptr;
    QColumnView_SetVisible_Callback qcolumnview_setvisible_callback = nullptr;
    QColumnView_HeightForWidth_Callback qcolumnview_heightforwidth_callback = nullptr;
    QColumnView_HasHeightForWidth_Callback qcolumnview_hasheightforwidth_callback = nullptr;
    QColumnView_PaintEngine_Callback qcolumnview_paintengine_callback = nullptr;
    QColumnView_KeyReleaseEvent_Callback qcolumnview_keyreleaseevent_callback = nullptr;
    QColumnView_EnterEvent_Callback qcolumnview_enterevent_callback = nullptr;
    QColumnView_LeaveEvent_Callback qcolumnview_leaveevent_callback = nullptr;
    QColumnView_MoveEvent_Callback qcolumnview_moveevent_callback = nullptr;
    QColumnView_CloseEvent_Callback qcolumnview_closeevent_callback = nullptr;
    QColumnView_TabletEvent_Callback qcolumnview_tabletevent_callback = nullptr;
    QColumnView_ActionEvent_Callback qcolumnview_actionevent_callback = nullptr;
    QColumnView_ShowEvent_Callback qcolumnview_showevent_callback = nullptr;
    QColumnView_HideEvent_Callback qcolumnview_hideevent_callback = nullptr;
    QColumnView_NativeEvent_Callback qcolumnview_nativeevent_callback = nullptr;
    QColumnView_Metric_Callback qcolumnview_metric_callback = nullptr;
    QColumnView_InitPainter_Callback qcolumnview_initpainter_callback = nullptr;
    QColumnView_Redirected_Callback qcolumnview_redirected_callback = nullptr;
    QColumnView_SharedPainter_Callback qcolumnview_sharedpainter_callback = nullptr;
    QColumnView_ChildEvent_Callback qcolumnview_childevent_callback = nullptr;
    QColumnView_CustomEvent_Callback qcolumnview_customevent_callback = nullptr;
    QColumnView_ConnectNotify_Callback qcolumnview_connectnotify_callback = nullptr;
    QColumnView_DisconnectNotify_Callback qcolumnview_disconnectnotify_callback = nullptr;
    QColumnView_InitializeColumn_Callback qcolumnview_initializecolumn_callback = nullptr;
    QColumnView_State_Callback qcolumnview_state_callback = nullptr;
    QColumnView_SetState_Callback qcolumnview_setstate_callback = nullptr;
    QColumnView_ScheduleDelayedItemsLayout_Callback qcolumnview_scheduledelayeditemslayout_callback = nullptr;
    QColumnView_ExecuteDelayedItemsLayout_Callback qcolumnview_executedelayeditemslayout_callback = nullptr;
    QColumnView_SetDirtyRegion_Callback qcolumnview_setdirtyregion_callback = nullptr;
    QColumnView_ScrollDirtyRegion_Callback qcolumnview_scrolldirtyregion_callback = nullptr;
    QColumnView_DirtyRegionOffset_Callback qcolumnview_dirtyregionoffset_callback = nullptr;
    QColumnView_StartAutoScroll_Callback qcolumnview_startautoscroll_callback = nullptr;
    QColumnView_StopAutoScroll_Callback qcolumnview_stopautoscroll_callback = nullptr;
    QColumnView_DoAutoScroll_Callback qcolumnview_doautoscroll_callback = nullptr;
    QColumnView_DropIndicatorPosition_Callback qcolumnview_dropindicatorposition_callback = nullptr;
    QColumnView_SetViewportMargins_Callback qcolumnview_setviewportmargins_callback = nullptr;
    QColumnView_ViewportMargins_Callback qcolumnview_viewportmargins_callback = nullptr;
    QColumnView_DrawFrame_Callback qcolumnview_drawframe_callback = nullptr;
    QColumnView_UpdateMicroFocus_Callback qcolumnview_updatemicrofocus_callback = nullptr;
    QColumnView_Create_Callback qcolumnview_create_callback = nullptr;
    QColumnView_Destroy_Callback qcolumnview_destroy_callback = nullptr;
    QColumnView_FocusNextChild_Callback qcolumnview_focusnextchild_callback = nullptr;
    QColumnView_FocusPreviousChild_Callback qcolumnview_focuspreviouschild_callback = nullptr;
    QColumnView_Sender_Callback qcolumnview_sender_callback = nullptr;
    QColumnView_SenderSignalIndex_Callback qcolumnview_sendersignalindex_callback = nullptr;
    QColumnView_Receivers_Callback qcolumnview_receivers_callback = nullptr;
    QColumnView_IsSignalConnected_Callback qcolumnview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcolumnview_metacall_isbase = false;
    mutable bool qcolumnview_indexat_isbase = false;
    mutable bool qcolumnview_scrollto_isbase = false;
    mutable bool qcolumnview_sizehint_isbase = false;
    mutable bool qcolumnview_visualrect_isbase = false;
    mutable bool qcolumnview_setmodel_isbase = false;
    mutable bool qcolumnview_setselectionmodel_isbase = false;
    mutable bool qcolumnview_setrootindex_isbase = false;
    mutable bool qcolumnview_selectall_isbase = false;
    mutable bool qcolumnview_isindexhidden_isbase = false;
    mutable bool qcolumnview_movecursor_isbase = false;
    mutable bool qcolumnview_resizeevent_isbase = false;
    mutable bool qcolumnview_setselection_isbase = false;
    mutable bool qcolumnview_visualregionforselection_isbase = false;
    mutable bool qcolumnview_horizontaloffset_isbase = false;
    mutable bool qcolumnview_verticaloffset_isbase = false;
    mutable bool qcolumnview_rowsinserted_isbase = false;
    mutable bool qcolumnview_currentchanged_isbase = false;
    mutable bool qcolumnview_scrollcontentsby_isbase = false;
    mutable bool qcolumnview_createcolumn_isbase = false;
    mutable bool qcolumnview_keyboardsearch_isbase = false;
    mutable bool qcolumnview_sizehintforrow_isbase = false;
    mutable bool qcolumnview_sizehintforcolumn_isbase = false;
    mutable bool qcolumnview_itemdelegateforindex_isbase = false;
    mutable bool qcolumnview_inputmethodquery_isbase = false;
    mutable bool qcolumnview_reset_isbase = false;
    mutable bool qcolumnview_doitemslayout_isbase = false;
    mutable bool qcolumnview_datachanged_isbase = false;
    mutable bool qcolumnview_rowsabouttoberemoved_isbase = false;
    mutable bool qcolumnview_selectionchanged_isbase = false;
    mutable bool qcolumnview_updateeditordata_isbase = false;
    mutable bool qcolumnview_updateeditorgeometries_isbase = false;
    mutable bool qcolumnview_updategeometries_isbase = false;
    mutable bool qcolumnview_verticalscrollbaraction_isbase = false;
    mutable bool qcolumnview_horizontalscrollbaraction_isbase = false;
    mutable bool qcolumnview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qcolumnview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qcolumnview_closeeditor_isbase = false;
    mutable bool qcolumnview_commitdata_isbase = false;
    mutable bool qcolumnview_editordestroyed_isbase = false;
    mutable bool qcolumnview_selectedindexes_isbase = false;
    mutable bool qcolumnview_edit2_isbase = false;
    mutable bool qcolumnview_selectioncommand_isbase = false;
    mutable bool qcolumnview_startdrag_isbase = false;
    mutable bool qcolumnview_initviewitemoption_isbase = false;
    mutable bool qcolumnview_focusnextprevchild_isbase = false;
    mutable bool qcolumnview_event_isbase = false;
    mutable bool qcolumnview_viewportevent_isbase = false;
    mutable bool qcolumnview_mousepressevent_isbase = false;
    mutable bool qcolumnview_mousemoveevent_isbase = false;
    mutable bool qcolumnview_mousereleaseevent_isbase = false;
    mutable bool qcolumnview_mousedoubleclickevent_isbase = false;
    mutable bool qcolumnview_dragenterevent_isbase = false;
    mutable bool qcolumnview_dragmoveevent_isbase = false;
    mutable bool qcolumnview_dragleaveevent_isbase = false;
    mutable bool qcolumnview_dropevent_isbase = false;
    mutable bool qcolumnview_focusinevent_isbase = false;
    mutable bool qcolumnview_focusoutevent_isbase = false;
    mutable bool qcolumnview_keypressevent_isbase = false;
    mutable bool qcolumnview_timerevent_isbase = false;
    mutable bool qcolumnview_inputmethodevent_isbase = false;
    mutable bool qcolumnview_eventfilter_isbase = false;
    mutable bool qcolumnview_viewportsizehint_isbase = false;
    mutable bool qcolumnview_minimumsizehint_isbase = false;
    mutable bool qcolumnview_setupviewport_isbase = false;
    mutable bool qcolumnview_paintevent_isbase = false;
    mutable bool qcolumnview_wheelevent_isbase = false;
    mutable bool qcolumnview_contextmenuevent_isbase = false;
    mutable bool qcolumnview_changeevent_isbase = false;
    mutable bool qcolumnview_initstyleoption_isbase = false;
    mutable bool qcolumnview_devtype_isbase = false;
    mutable bool qcolumnview_setvisible_isbase = false;
    mutable bool qcolumnview_heightforwidth_isbase = false;
    mutable bool qcolumnview_hasheightforwidth_isbase = false;
    mutable bool qcolumnview_paintengine_isbase = false;
    mutable bool qcolumnview_keyreleaseevent_isbase = false;
    mutable bool qcolumnview_enterevent_isbase = false;
    mutable bool qcolumnview_leaveevent_isbase = false;
    mutable bool qcolumnview_moveevent_isbase = false;
    mutable bool qcolumnview_closeevent_isbase = false;
    mutable bool qcolumnview_tabletevent_isbase = false;
    mutable bool qcolumnview_actionevent_isbase = false;
    mutable bool qcolumnview_showevent_isbase = false;
    mutable bool qcolumnview_hideevent_isbase = false;
    mutable bool qcolumnview_nativeevent_isbase = false;
    mutable bool qcolumnview_metric_isbase = false;
    mutable bool qcolumnview_initpainter_isbase = false;
    mutable bool qcolumnview_redirected_isbase = false;
    mutable bool qcolumnview_sharedpainter_isbase = false;
    mutable bool qcolumnview_childevent_isbase = false;
    mutable bool qcolumnview_customevent_isbase = false;
    mutable bool qcolumnview_connectnotify_isbase = false;
    mutable bool qcolumnview_disconnectnotify_isbase = false;
    mutable bool qcolumnview_initializecolumn_isbase = false;
    mutable bool qcolumnview_state_isbase = false;
    mutable bool qcolumnview_setstate_isbase = false;
    mutable bool qcolumnview_scheduledelayeditemslayout_isbase = false;
    mutable bool qcolumnview_executedelayeditemslayout_isbase = false;
    mutable bool qcolumnview_setdirtyregion_isbase = false;
    mutable bool qcolumnview_scrolldirtyregion_isbase = false;
    mutable bool qcolumnview_dirtyregionoffset_isbase = false;
    mutable bool qcolumnview_startautoscroll_isbase = false;
    mutable bool qcolumnview_stopautoscroll_isbase = false;
    mutable bool qcolumnview_doautoscroll_isbase = false;
    mutable bool qcolumnview_dropindicatorposition_isbase = false;
    mutable bool qcolumnview_setviewportmargins_isbase = false;
    mutable bool qcolumnview_viewportmargins_isbase = false;
    mutable bool qcolumnview_drawframe_isbase = false;
    mutable bool qcolumnview_updatemicrofocus_isbase = false;
    mutable bool qcolumnview_create_isbase = false;
    mutable bool qcolumnview_destroy_isbase = false;
    mutable bool qcolumnview_focusnextchild_isbase = false;
    mutable bool qcolumnview_focuspreviouschild_isbase = false;
    mutable bool qcolumnview_sender_isbase = false;
    mutable bool qcolumnview_sendersignalindex_isbase = false;
    mutable bool qcolumnview_receivers_isbase = false;
    mutable bool qcolumnview_issignalconnected_isbase = false;

  public:
    VirtualQColumnView(QWidget* parent) : QColumnView(parent){};
    VirtualQColumnView() : QColumnView(){};

    ~VirtualQColumnView() {
        qcolumnview_metacall_callback = nullptr;
        qcolumnview_indexat_callback = nullptr;
        qcolumnview_scrollto_callback = nullptr;
        qcolumnview_sizehint_callback = nullptr;
        qcolumnview_visualrect_callback = nullptr;
        qcolumnview_setmodel_callback = nullptr;
        qcolumnview_setselectionmodel_callback = nullptr;
        qcolumnview_setrootindex_callback = nullptr;
        qcolumnview_selectall_callback = nullptr;
        qcolumnview_isindexhidden_callback = nullptr;
        qcolumnview_movecursor_callback = nullptr;
        qcolumnview_resizeevent_callback = nullptr;
        qcolumnview_setselection_callback = nullptr;
        qcolumnview_visualregionforselection_callback = nullptr;
        qcolumnview_horizontaloffset_callback = nullptr;
        qcolumnview_verticaloffset_callback = nullptr;
        qcolumnview_rowsinserted_callback = nullptr;
        qcolumnview_currentchanged_callback = nullptr;
        qcolumnview_scrollcontentsby_callback = nullptr;
        qcolumnview_createcolumn_callback = nullptr;
        qcolumnview_keyboardsearch_callback = nullptr;
        qcolumnview_sizehintforrow_callback = nullptr;
        qcolumnview_sizehintforcolumn_callback = nullptr;
        qcolumnview_itemdelegateforindex_callback = nullptr;
        qcolumnview_inputmethodquery_callback = nullptr;
        qcolumnview_reset_callback = nullptr;
        qcolumnview_doitemslayout_callback = nullptr;
        qcolumnview_datachanged_callback = nullptr;
        qcolumnview_rowsabouttoberemoved_callback = nullptr;
        qcolumnview_selectionchanged_callback = nullptr;
        qcolumnview_updateeditordata_callback = nullptr;
        qcolumnview_updateeditorgeometries_callback = nullptr;
        qcolumnview_updategeometries_callback = nullptr;
        qcolumnview_verticalscrollbaraction_callback = nullptr;
        qcolumnview_horizontalscrollbaraction_callback = nullptr;
        qcolumnview_verticalscrollbarvaluechanged_callback = nullptr;
        qcolumnview_horizontalscrollbarvaluechanged_callback = nullptr;
        qcolumnview_closeeditor_callback = nullptr;
        qcolumnview_commitdata_callback = nullptr;
        qcolumnview_editordestroyed_callback = nullptr;
        qcolumnview_selectedindexes_callback = nullptr;
        qcolumnview_edit2_callback = nullptr;
        qcolumnview_selectioncommand_callback = nullptr;
        qcolumnview_startdrag_callback = nullptr;
        qcolumnview_initviewitemoption_callback = nullptr;
        qcolumnview_focusnextprevchild_callback = nullptr;
        qcolumnview_event_callback = nullptr;
        qcolumnview_viewportevent_callback = nullptr;
        qcolumnview_mousepressevent_callback = nullptr;
        qcolumnview_mousemoveevent_callback = nullptr;
        qcolumnview_mousereleaseevent_callback = nullptr;
        qcolumnview_mousedoubleclickevent_callback = nullptr;
        qcolumnview_dragenterevent_callback = nullptr;
        qcolumnview_dragmoveevent_callback = nullptr;
        qcolumnview_dragleaveevent_callback = nullptr;
        qcolumnview_dropevent_callback = nullptr;
        qcolumnview_focusinevent_callback = nullptr;
        qcolumnview_focusoutevent_callback = nullptr;
        qcolumnview_keypressevent_callback = nullptr;
        qcolumnview_timerevent_callback = nullptr;
        qcolumnview_inputmethodevent_callback = nullptr;
        qcolumnview_eventfilter_callback = nullptr;
        qcolumnview_viewportsizehint_callback = nullptr;
        qcolumnview_minimumsizehint_callback = nullptr;
        qcolumnview_setupviewport_callback = nullptr;
        qcolumnview_paintevent_callback = nullptr;
        qcolumnview_wheelevent_callback = nullptr;
        qcolumnview_contextmenuevent_callback = nullptr;
        qcolumnview_changeevent_callback = nullptr;
        qcolumnview_initstyleoption_callback = nullptr;
        qcolumnview_devtype_callback = nullptr;
        qcolumnview_setvisible_callback = nullptr;
        qcolumnview_heightforwidth_callback = nullptr;
        qcolumnview_hasheightforwidth_callback = nullptr;
        qcolumnview_paintengine_callback = nullptr;
        qcolumnview_keyreleaseevent_callback = nullptr;
        qcolumnview_enterevent_callback = nullptr;
        qcolumnview_leaveevent_callback = nullptr;
        qcolumnview_moveevent_callback = nullptr;
        qcolumnview_closeevent_callback = nullptr;
        qcolumnview_tabletevent_callback = nullptr;
        qcolumnview_actionevent_callback = nullptr;
        qcolumnview_showevent_callback = nullptr;
        qcolumnview_hideevent_callback = nullptr;
        qcolumnview_nativeevent_callback = nullptr;
        qcolumnview_metric_callback = nullptr;
        qcolumnview_initpainter_callback = nullptr;
        qcolumnview_redirected_callback = nullptr;
        qcolumnview_sharedpainter_callback = nullptr;
        qcolumnview_childevent_callback = nullptr;
        qcolumnview_customevent_callback = nullptr;
        qcolumnview_connectnotify_callback = nullptr;
        qcolumnview_disconnectnotify_callback = nullptr;
        qcolumnview_initializecolumn_callback = nullptr;
        qcolumnview_state_callback = nullptr;
        qcolumnview_setstate_callback = nullptr;
        qcolumnview_scheduledelayeditemslayout_callback = nullptr;
        qcolumnview_executedelayeditemslayout_callback = nullptr;
        qcolumnview_setdirtyregion_callback = nullptr;
        qcolumnview_scrolldirtyregion_callback = nullptr;
        qcolumnview_dirtyregionoffset_callback = nullptr;
        qcolumnview_startautoscroll_callback = nullptr;
        qcolumnview_stopautoscroll_callback = nullptr;
        qcolumnview_doautoscroll_callback = nullptr;
        qcolumnview_dropindicatorposition_callback = nullptr;
        qcolumnview_setviewportmargins_callback = nullptr;
        qcolumnview_viewportmargins_callback = nullptr;
        qcolumnview_drawframe_callback = nullptr;
        qcolumnview_updatemicrofocus_callback = nullptr;
        qcolumnview_create_callback = nullptr;
        qcolumnview_destroy_callback = nullptr;
        qcolumnview_focusnextchild_callback = nullptr;
        qcolumnview_focuspreviouschild_callback = nullptr;
        qcolumnview_sender_callback = nullptr;
        qcolumnview_sendersignalindex_callback = nullptr;
        qcolumnview_receivers_callback = nullptr;
        qcolumnview_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQColumnView_Metacall_Callback(QColumnView_Metacall_Callback cb) { qcolumnview_metacall_callback = cb; }
    inline void setQColumnView_IndexAt_Callback(QColumnView_IndexAt_Callback cb) { qcolumnview_indexat_callback = cb; }
    inline void setQColumnView_ScrollTo_Callback(QColumnView_ScrollTo_Callback cb) { qcolumnview_scrollto_callback = cb; }
    inline void setQColumnView_SizeHint_Callback(QColumnView_SizeHint_Callback cb) { qcolumnview_sizehint_callback = cb; }
    inline void setQColumnView_VisualRect_Callback(QColumnView_VisualRect_Callback cb) { qcolumnview_visualrect_callback = cb; }
    inline void setQColumnView_SetModel_Callback(QColumnView_SetModel_Callback cb) { qcolumnview_setmodel_callback = cb; }
    inline void setQColumnView_SetSelectionModel_Callback(QColumnView_SetSelectionModel_Callback cb) { qcolumnview_setselectionmodel_callback = cb; }
    inline void setQColumnView_SetRootIndex_Callback(QColumnView_SetRootIndex_Callback cb) { qcolumnview_setrootindex_callback = cb; }
    inline void setQColumnView_SelectAll_Callback(QColumnView_SelectAll_Callback cb) { qcolumnview_selectall_callback = cb; }
    inline void setQColumnView_IsIndexHidden_Callback(QColumnView_IsIndexHidden_Callback cb) { qcolumnview_isindexhidden_callback = cb; }
    inline void setQColumnView_MoveCursor_Callback(QColumnView_MoveCursor_Callback cb) { qcolumnview_movecursor_callback = cb; }
    inline void setQColumnView_ResizeEvent_Callback(QColumnView_ResizeEvent_Callback cb) { qcolumnview_resizeevent_callback = cb; }
    inline void setQColumnView_SetSelection_Callback(QColumnView_SetSelection_Callback cb) { qcolumnview_setselection_callback = cb; }
    inline void setQColumnView_VisualRegionForSelection_Callback(QColumnView_VisualRegionForSelection_Callback cb) { qcolumnview_visualregionforselection_callback = cb; }
    inline void setQColumnView_HorizontalOffset_Callback(QColumnView_HorizontalOffset_Callback cb) { qcolumnview_horizontaloffset_callback = cb; }
    inline void setQColumnView_VerticalOffset_Callback(QColumnView_VerticalOffset_Callback cb) { qcolumnview_verticaloffset_callback = cb; }
    inline void setQColumnView_RowsInserted_Callback(QColumnView_RowsInserted_Callback cb) { qcolumnview_rowsinserted_callback = cb; }
    inline void setQColumnView_CurrentChanged_Callback(QColumnView_CurrentChanged_Callback cb) { qcolumnview_currentchanged_callback = cb; }
    inline void setQColumnView_ScrollContentsBy_Callback(QColumnView_ScrollContentsBy_Callback cb) { qcolumnview_scrollcontentsby_callback = cb; }
    inline void setQColumnView_CreateColumn_Callback(QColumnView_CreateColumn_Callback cb) { qcolumnview_createcolumn_callback = cb; }
    inline void setQColumnView_KeyboardSearch_Callback(QColumnView_KeyboardSearch_Callback cb) { qcolumnview_keyboardsearch_callback = cb; }
    inline void setQColumnView_SizeHintForRow_Callback(QColumnView_SizeHintForRow_Callback cb) { qcolumnview_sizehintforrow_callback = cb; }
    inline void setQColumnView_SizeHintForColumn_Callback(QColumnView_SizeHintForColumn_Callback cb) { qcolumnview_sizehintforcolumn_callback = cb; }
    inline void setQColumnView_ItemDelegateForIndex_Callback(QColumnView_ItemDelegateForIndex_Callback cb) { qcolumnview_itemdelegateforindex_callback = cb; }
    inline void setQColumnView_InputMethodQuery_Callback(QColumnView_InputMethodQuery_Callback cb) { qcolumnview_inputmethodquery_callback = cb; }
    inline void setQColumnView_Reset_Callback(QColumnView_Reset_Callback cb) { qcolumnview_reset_callback = cb; }
    inline void setQColumnView_DoItemsLayout_Callback(QColumnView_DoItemsLayout_Callback cb) { qcolumnview_doitemslayout_callback = cb; }
    inline void setQColumnView_DataChanged_Callback(QColumnView_DataChanged_Callback cb) { qcolumnview_datachanged_callback = cb; }
    inline void setQColumnView_RowsAboutToBeRemoved_Callback(QColumnView_RowsAboutToBeRemoved_Callback cb) { qcolumnview_rowsabouttoberemoved_callback = cb; }
    inline void setQColumnView_SelectionChanged_Callback(QColumnView_SelectionChanged_Callback cb) { qcolumnview_selectionchanged_callback = cb; }
    inline void setQColumnView_UpdateEditorData_Callback(QColumnView_UpdateEditorData_Callback cb) { qcolumnview_updateeditordata_callback = cb; }
    inline void setQColumnView_UpdateEditorGeometries_Callback(QColumnView_UpdateEditorGeometries_Callback cb) { qcolumnview_updateeditorgeometries_callback = cb; }
    inline void setQColumnView_UpdateGeometries_Callback(QColumnView_UpdateGeometries_Callback cb) { qcolumnview_updategeometries_callback = cb; }
    inline void setQColumnView_VerticalScrollbarAction_Callback(QColumnView_VerticalScrollbarAction_Callback cb) { qcolumnview_verticalscrollbaraction_callback = cb; }
    inline void setQColumnView_HorizontalScrollbarAction_Callback(QColumnView_HorizontalScrollbarAction_Callback cb) { qcolumnview_horizontalscrollbaraction_callback = cb; }
    inline void setQColumnView_VerticalScrollbarValueChanged_Callback(QColumnView_VerticalScrollbarValueChanged_Callback cb) { qcolumnview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQColumnView_HorizontalScrollbarValueChanged_Callback(QColumnView_HorizontalScrollbarValueChanged_Callback cb) { qcolumnview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQColumnView_CloseEditor_Callback(QColumnView_CloseEditor_Callback cb) { qcolumnview_closeeditor_callback = cb; }
    inline void setQColumnView_CommitData_Callback(QColumnView_CommitData_Callback cb) { qcolumnview_commitdata_callback = cb; }
    inline void setQColumnView_EditorDestroyed_Callback(QColumnView_EditorDestroyed_Callback cb) { qcolumnview_editordestroyed_callback = cb; }
    inline void setQColumnView_SelectedIndexes_Callback(QColumnView_SelectedIndexes_Callback cb) { qcolumnview_selectedindexes_callback = cb; }
    inline void setQColumnView_Edit2_Callback(QColumnView_Edit2_Callback cb) { qcolumnview_edit2_callback = cb; }
    inline void setQColumnView_SelectionCommand_Callback(QColumnView_SelectionCommand_Callback cb) { qcolumnview_selectioncommand_callback = cb; }
    inline void setQColumnView_StartDrag_Callback(QColumnView_StartDrag_Callback cb) { qcolumnview_startdrag_callback = cb; }
    inline void setQColumnView_InitViewItemOption_Callback(QColumnView_InitViewItemOption_Callback cb) { qcolumnview_initviewitemoption_callback = cb; }
    inline void setQColumnView_FocusNextPrevChild_Callback(QColumnView_FocusNextPrevChild_Callback cb) { qcolumnview_focusnextprevchild_callback = cb; }
    inline void setQColumnView_Event_Callback(QColumnView_Event_Callback cb) { qcolumnview_event_callback = cb; }
    inline void setQColumnView_ViewportEvent_Callback(QColumnView_ViewportEvent_Callback cb) { qcolumnview_viewportevent_callback = cb; }
    inline void setQColumnView_MousePressEvent_Callback(QColumnView_MousePressEvent_Callback cb) { qcolumnview_mousepressevent_callback = cb; }
    inline void setQColumnView_MouseMoveEvent_Callback(QColumnView_MouseMoveEvent_Callback cb) { qcolumnview_mousemoveevent_callback = cb; }
    inline void setQColumnView_MouseReleaseEvent_Callback(QColumnView_MouseReleaseEvent_Callback cb) { qcolumnview_mousereleaseevent_callback = cb; }
    inline void setQColumnView_MouseDoubleClickEvent_Callback(QColumnView_MouseDoubleClickEvent_Callback cb) { qcolumnview_mousedoubleclickevent_callback = cb; }
    inline void setQColumnView_DragEnterEvent_Callback(QColumnView_DragEnterEvent_Callback cb) { qcolumnview_dragenterevent_callback = cb; }
    inline void setQColumnView_DragMoveEvent_Callback(QColumnView_DragMoveEvent_Callback cb) { qcolumnview_dragmoveevent_callback = cb; }
    inline void setQColumnView_DragLeaveEvent_Callback(QColumnView_DragLeaveEvent_Callback cb) { qcolumnview_dragleaveevent_callback = cb; }
    inline void setQColumnView_DropEvent_Callback(QColumnView_DropEvent_Callback cb) { qcolumnview_dropevent_callback = cb; }
    inline void setQColumnView_FocusInEvent_Callback(QColumnView_FocusInEvent_Callback cb) { qcolumnview_focusinevent_callback = cb; }
    inline void setQColumnView_FocusOutEvent_Callback(QColumnView_FocusOutEvent_Callback cb) { qcolumnview_focusoutevent_callback = cb; }
    inline void setQColumnView_KeyPressEvent_Callback(QColumnView_KeyPressEvent_Callback cb) { qcolumnview_keypressevent_callback = cb; }
    inline void setQColumnView_TimerEvent_Callback(QColumnView_TimerEvent_Callback cb) { qcolumnview_timerevent_callback = cb; }
    inline void setQColumnView_InputMethodEvent_Callback(QColumnView_InputMethodEvent_Callback cb) { qcolumnview_inputmethodevent_callback = cb; }
    inline void setQColumnView_EventFilter_Callback(QColumnView_EventFilter_Callback cb) { qcolumnview_eventfilter_callback = cb; }
    inline void setQColumnView_ViewportSizeHint_Callback(QColumnView_ViewportSizeHint_Callback cb) { qcolumnview_viewportsizehint_callback = cb; }
    inline void setQColumnView_MinimumSizeHint_Callback(QColumnView_MinimumSizeHint_Callback cb) { qcolumnview_minimumsizehint_callback = cb; }
    inline void setQColumnView_SetupViewport_Callback(QColumnView_SetupViewport_Callback cb) { qcolumnview_setupviewport_callback = cb; }
    inline void setQColumnView_PaintEvent_Callback(QColumnView_PaintEvent_Callback cb) { qcolumnview_paintevent_callback = cb; }
    inline void setQColumnView_WheelEvent_Callback(QColumnView_WheelEvent_Callback cb) { qcolumnview_wheelevent_callback = cb; }
    inline void setQColumnView_ContextMenuEvent_Callback(QColumnView_ContextMenuEvent_Callback cb) { qcolumnview_contextmenuevent_callback = cb; }
    inline void setQColumnView_ChangeEvent_Callback(QColumnView_ChangeEvent_Callback cb) { qcolumnview_changeevent_callback = cb; }
    inline void setQColumnView_InitStyleOption_Callback(QColumnView_InitStyleOption_Callback cb) { qcolumnview_initstyleoption_callback = cb; }
    inline void setQColumnView_DevType_Callback(QColumnView_DevType_Callback cb) { qcolumnview_devtype_callback = cb; }
    inline void setQColumnView_SetVisible_Callback(QColumnView_SetVisible_Callback cb) { qcolumnview_setvisible_callback = cb; }
    inline void setQColumnView_HeightForWidth_Callback(QColumnView_HeightForWidth_Callback cb) { qcolumnview_heightforwidth_callback = cb; }
    inline void setQColumnView_HasHeightForWidth_Callback(QColumnView_HasHeightForWidth_Callback cb) { qcolumnview_hasheightforwidth_callback = cb; }
    inline void setQColumnView_PaintEngine_Callback(QColumnView_PaintEngine_Callback cb) { qcolumnview_paintengine_callback = cb; }
    inline void setQColumnView_KeyReleaseEvent_Callback(QColumnView_KeyReleaseEvent_Callback cb) { qcolumnview_keyreleaseevent_callback = cb; }
    inline void setQColumnView_EnterEvent_Callback(QColumnView_EnterEvent_Callback cb) { qcolumnview_enterevent_callback = cb; }
    inline void setQColumnView_LeaveEvent_Callback(QColumnView_LeaveEvent_Callback cb) { qcolumnview_leaveevent_callback = cb; }
    inline void setQColumnView_MoveEvent_Callback(QColumnView_MoveEvent_Callback cb) { qcolumnview_moveevent_callback = cb; }
    inline void setQColumnView_CloseEvent_Callback(QColumnView_CloseEvent_Callback cb) { qcolumnview_closeevent_callback = cb; }
    inline void setQColumnView_TabletEvent_Callback(QColumnView_TabletEvent_Callback cb) { qcolumnview_tabletevent_callback = cb; }
    inline void setQColumnView_ActionEvent_Callback(QColumnView_ActionEvent_Callback cb) { qcolumnview_actionevent_callback = cb; }
    inline void setQColumnView_ShowEvent_Callback(QColumnView_ShowEvent_Callback cb) { qcolumnview_showevent_callback = cb; }
    inline void setQColumnView_HideEvent_Callback(QColumnView_HideEvent_Callback cb) { qcolumnview_hideevent_callback = cb; }
    inline void setQColumnView_NativeEvent_Callback(QColumnView_NativeEvent_Callback cb) { qcolumnview_nativeevent_callback = cb; }
    inline void setQColumnView_Metric_Callback(QColumnView_Metric_Callback cb) { qcolumnview_metric_callback = cb; }
    inline void setQColumnView_InitPainter_Callback(QColumnView_InitPainter_Callback cb) { qcolumnview_initpainter_callback = cb; }
    inline void setQColumnView_Redirected_Callback(QColumnView_Redirected_Callback cb) { qcolumnview_redirected_callback = cb; }
    inline void setQColumnView_SharedPainter_Callback(QColumnView_SharedPainter_Callback cb) { qcolumnview_sharedpainter_callback = cb; }
    inline void setQColumnView_ChildEvent_Callback(QColumnView_ChildEvent_Callback cb) { qcolumnview_childevent_callback = cb; }
    inline void setQColumnView_CustomEvent_Callback(QColumnView_CustomEvent_Callback cb) { qcolumnview_customevent_callback = cb; }
    inline void setQColumnView_ConnectNotify_Callback(QColumnView_ConnectNotify_Callback cb) { qcolumnview_connectnotify_callback = cb; }
    inline void setQColumnView_DisconnectNotify_Callback(QColumnView_DisconnectNotify_Callback cb) { qcolumnview_disconnectnotify_callback = cb; }
    inline void setQColumnView_InitializeColumn_Callback(QColumnView_InitializeColumn_Callback cb) { qcolumnview_initializecolumn_callback = cb; }
    inline void setQColumnView_State_Callback(QColumnView_State_Callback cb) { qcolumnview_state_callback = cb; }
    inline void setQColumnView_SetState_Callback(QColumnView_SetState_Callback cb) { qcolumnview_setstate_callback = cb; }
    inline void setQColumnView_ScheduleDelayedItemsLayout_Callback(QColumnView_ScheduleDelayedItemsLayout_Callback cb) { qcolumnview_scheduledelayeditemslayout_callback = cb; }
    inline void setQColumnView_ExecuteDelayedItemsLayout_Callback(QColumnView_ExecuteDelayedItemsLayout_Callback cb) { qcolumnview_executedelayeditemslayout_callback = cb; }
    inline void setQColumnView_SetDirtyRegion_Callback(QColumnView_SetDirtyRegion_Callback cb) { qcolumnview_setdirtyregion_callback = cb; }
    inline void setQColumnView_ScrollDirtyRegion_Callback(QColumnView_ScrollDirtyRegion_Callback cb) { qcolumnview_scrolldirtyregion_callback = cb; }
    inline void setQColumnView_DirtyRegionOffset_Callback(QColumnView_DirtyRegionOffset_Callback cb) { qcolumnview_dirtyregionoffset_callback = cb; }
    inline void setQColumnView_StartAutoScroll_Callback(QColumnView_StartAutoScroll_Callback cb) { qcolumnview_startautoscroll_callback = cb; }
    inline void setQColumnView_StopAutoScroll_Callback(QColumnView_StopAutoScroll_Callback cb) { qcolumnview_stopautoscroll_callback = cb; }
    inline void setQColumnView_DoAutoScroll_Callback(QColumnView_DoAutoScroll_Callback cb) { qcolumnview_doautoscroll_callback = cb; }
    inline void setQColumnView_DropIndicatorPosition_Callback(QColumnView_DropIndicatorPosition_Callback cb) { qcolumnview_dropindicatorposition_callback = cb; }
    inline void setQColumnView_SetViewportMargins_Callback(QColumnView_SetViewportMargins_Callback cb) { qcolumnview_setviewportmargins_callback = cb; }
    inline void setQColumnView_ViewportMargins_Callback(QColumnView_ViewportMargins_Callback cb) { qcolumnview_viewportmargins_callback = cb; }
    inline void setQColumnView_DrawFrame_Callback(QColumnView_DrawFrame_Callback cb) { qcolumnview_drawframe_callback = cb; }
    inline void setQColumnView_UpdateMicroFocus_Callback(QColumnView_UpdateMicroFocus_Callback cb) { qcolumnview_updatemicrofocus_callback = cb; }
    inline void setQColumnView_Create_Callback(QColumnView_Create_Callback cb) { qcolumnview_create_callback = cb; }
    inline void setQColumnView_Destroy_Callback(QColumnView_Destroy_Callback cb) { qcolumnview_destroy_callback = cb; }
    inline void setQColumnView_FocusNextChild_Callback(QColumnView_FocusNextChild_Callback cb) { qcolumnview_focusnextchild_callback = cb; }
    inline void setQColumnView_FocusPreviousChild_Callback(QColumnView_FocusPreviousChild_Callback cb) { qcolumnview_focuspreviouschild_callback = cb; }
    inline void setQColumnView_Sender_Callback(QColumnView_Sender_Callback cb) { qcolumnview_sender_callback = cb; }
    inline void setQColumnView_SenderSignalIndex_Callback(QColumnView_SenderSignalIndex_Callback cb) { qcolumnview_sendersignalindex_callback = cb; }
    inline void setQColumnView_Receivers_Callback(QColumnView_Receivers_Callback cb) { qcolumnview_receivers_callback = cb; }
    inline void setQColumnView_IsSignalConnected_Callback(QColumnView_IsSignalConnected_Callback cb) { qcolumnview_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQColumnView_Metacall_IsBase(bool value) const { qcolumnview_metacall_isbase = value; }
    inline void setQColumnView_IndexAt_IsBase(bool value) const { qcolumnview_indexat_isbase = value; }
    inline void setQColumnView_ScrollTo_IsBase(bool value) const { qcolumnview_scrollto_isbase = value; }
    inline void setQColumnView_SizeHint_IsBase(bool value) const { qcolumnview_sizehint_isbase = value; }
    inline void setQColumnView_VisualRect_IsBase(bool value) const { qcolumnview_visualrect_isbase = value; }
    inline void setQColumnView_SetModel_IsBase(bool value) const { qcolumnview_setmodel_isbase = value; }
    inline void setQColumnView_SetSelectionModel_IsBase(bool value) const { qcolumnview_setselectionmodel_isbase = value; }
    inline void setQColumnView_SetRootIndex_IsBase(bool value) const { qcolumnview_setrootindex_isbase = value; }
    inline void setQColumnView_SelectAll_IsBase(bool value) const { qcolumnview_selectall_isbase = value; }
    inline void setQColumnView_IsIndexHidden_IsBase(bool value) const { qcolumnview_isindexhidden_isbase = value; }
    inline void setQColumnView_MoveCursor_IsBase(bool value) const { qcolumnview_movecursor_isbase = value; }
    inline void setQColumnView_ResizeEvent_IsBase(bool value) const { qcolumnview_resizeevent_isbase = value; }
    inline void setQColumnView_SetSelection_IsBase(bool value) const { qcolumnview_setselection_isbase = value; }
    inline void setQColumnView_VisualRegionForSelection_IsBase(bool value) const { qcolumnview_visualregionforselection_isbase = value; }
    inline void setQColumnView_HorizontalOffset_IsBase(bool value) const { qcolumnview_horizontaloffset_isbase = value; }
    inline void setQColumnView_VerticalOffset_IsBase(bool value) const { qcolumnview_verticaloffset_isbase = value; }
    inline void setQColumnView_RowsInserted_IsBase(bool value) const { qcolumnview_rowsinserted_isbase = value; }
    inline void setQColumnView_CurrentChanged_IsBase(bool value) const { qcolumnview_currentchanged_isbase = value; }
    inline void setQColumnView_ScrollContentsBy_IsBase(bool value) const { qcolumnview_scrollcontentsby_isbase = value; }
    inline void setQColumnView_CreateColumn_IsBase(bool value) const { qcolumnview_createcolumn_isbase = value; }
    inline void setQColumnView_KeyboardSearch_IsBase(bool value) const { qcolumnview_keyboardsearch_isbase = value; }
    inline void setQColumnView_SizeHintForRow_IsBase(bool value) const { qcolumnview_sizehintforrow_isbase = value; }
    inline void setQColumnView_SizeHintForColumn_IsBase(bool value) const { qcolumnview_sizehintforcolumn_isbase = value; }
    inline void setQColumnView_ItemDelegateForIndex_IsBase(bool value) const { qcolumnview_itemdelegateforindex_isbase = value; }
    inline void setQColumnView_InputMethodQuery_IsBase(bool value) const { qcolumnview_inputmethodquery_isbase = value; }
    inline void setQColumnView_Reset_IsBase(bool value) const { qcolumnview_reset_isbase = value; }
    inline void setQColumnView_DoItemsLayout_IsBase(bool value) const { qcolumnview_doitemslayout_isbase = value; }
    inline void setQColumnView_DataChanged_IsBase(bool value) const { qcolumnview_datachanged_isbase = value; }
    inline void setQColumnView_RowsAboutToBeRemoved_IsBase(bool value) const { qcolumnview_rowsabouttoberemoved_isbase = value; }
    inline void setQColumnView_SelectionChanged_IsBase(bool value) const { qcolumnview_selectionchanged_isbase = value; }
    inline void setQColumnView_UpdateEditorData_IsBase(bool value) const { qcolumnview_updateeditordata_isbase = value; }
    inline void setQColumnView_UpdateEditorGeometries_IsBase(bool value) const { qcolumnview_updateeditorgeometries_isbase = value; }
    inline void setQColumnView_UpdateGeometries_IsBase(bool value) const { qcolumnview_updategeometries_isbase = value; }
    inline void setQColumnView_VerticalScrollbarAction_IsBase(bool value) const { qcolumnview_verticalscrollbaraction_isbase = value; }
    inline void setQColumnView_HorizontalScrollbarAction_IsBase(bool value) const { qcolumnview_horizontalscrollbaraction_isbase = value; }
    inline void setQColumnView_VerticalScrollbarValueChanged_IsBase(bool value) const { qcolumnview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQColumnView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qcolumnview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQColumnView_CloseEditor_IsBase(bool value) const { qcolumnview_closeeditor_isbase = value; }
    inline void setQColumnView_CommitData_IsBase(bool value) const { qcolumnview_commitdata_isbase = value; }
    inline void setQColumnView_EditorDestroyed_IsBase(bool value) const { qcolumnview_editordestroyed_isbase = value; }
    inline void setQColumnView_SelectedIndexes_IsBase(bool value) const { qcolumnview_selectedindexes_isbase = value; }
    inline void setQColumnView_Edit2_IsBase(bool value) const { qcolumnview_edit2_isbase = value; }
    inline void setQColumnView_SelectionCommand_IsBase(bool value) const { qcolumnview_selectioncommand_isbase = value; }
    inline void setQColumnView_StartDrag_IsBase(bool value) const { qcolumnview_startdrag_isbase = value; }
    inline void setQColumnView_InitViewItemOption_IsBase(bool value) const { qcolumnview_initviewitemoption_isbase = value; }
    inline void setQColumnView_FocusNextPrevChild_IsBase(bool value) const { qcolumnview_focusnextprevchild_isbase = value; }
    inline void setQColumnView_Event_IsBase(bool value) const { qcolumnview_event_isbase = value; }
    inline void setQColumnView_ViewportEvent_IsBase(bool value) const { qcolumnview_viewportevent_isbase = value; }
    inline void setQColumnView_MousePressEvent_IsBase(bool value) const { qcolumnview_mousepressevent_isbase = value; }
    inline void setQColumnView_MouseMoveEvent_IsBase(bool value) const { qcolumnview_mousemoveevent_isbase = value; }
    inline void setQColumnView_MouseReleaseEvent_IsBase(bool value) const { qcolumnview_mousereleaseevent_isbase = value; }
    inline void setQColumnView_MouseDoubleClickEvent_IsBase(bool value) const { qcolumnview_mousedoubleclickevent_isbase = value; }
    inline void setQColumnView_DragEnterEvent_IsBase(bool value) const { qcolumnview_dragenterevent_isbase = value; }
    inline void setQColumnView_DragMoveEvent_IsBase(bool value) const { qcolumnview_dragmoveevent_isbase = value; }
    inline void setQColumnView_DragLeaveEvent_IsBase(bool value) const { qcolumnview_dragleaveevent_isbase = value; }
    inline void setQColumnView_DropEvent_IsBase(bool value) const { qcolumnview_dropevent_isbase = value; }
    inline void setQColumnView_FocusInEvent_IsBase(bool value) const { qcolumnview_focusinevent_isbase = value; }
    inline void setQColumnView_FocusOutEvent_IsBase(bool value) const { qcolumnview_focusoutevent_isbase = value; }
    inline void setQColumnView_KeyPressEvent_IsBase(bool value) const { qcolumnview_keypressevent_isbase = value; }
    inline void setQColumnView_TimerEvent_IsBase(bool value) const { qcolumnview_timerevent_isbase = value; }
    inline void setQColumnView_InputMethodEvent_IsBase(bool value) const { qcolumnview_inputmethodevent_isbase = value; }
    inline void setQColumnView_EventFilter_IsBase(bool value) const { qcolumnview_eventfilter_isbase = value; }
    inline void setQColumnView_ViewportSizeHint_IsBase(bool value) const { qcolumnview_viewportsizehint_isbase = value; }
    inline void setQColumnView_MinimumSizeHint_IsBase(bool value) const { qcolumnview_minimumsizehint_isbase = value; }
    inline void setQColumnView_SetupViewport_IsBase(bool value) const { qcolumnview_setupviewport_isbase = value; }
    inline void setQColumnView_PaintEvent_IsBase(bool value) const { qcolumnview_paintevent_isbase = value; }
    inline void setQColumnView_WheelEvent_IsBase(bool value) const { qcolumnview_wheelevent_isbase = value; }
    inline void setQColumnView_ContextMenuEvent_IsBase(bool value) const { qcolumnview_contextmenuevent_isbase = value; }
    inline void setQColumnView_ChangeEvent_IsBase(bool value) const { qcolumnview_changeevent_isbase = value; }
    inline void setQColumnView_InitStyleOption_IsBase(bool value) const { qcolumnview_initstyleoption_isbase = value; }
    inline void setQColumnView_DevType_IsBase(bool value) const { qcolumnview_devtype_isbase = value; }
    inline void setQColumnView_SetVisible_IsBase(bool value) const { qcolumnview_setvisible_isbase = value; }
    inline void setQColumnView_HeightForWidth_IsBase(bool value) const { qcolumnview_heightforwidth_isbase = value; }
    inline void setQColumnView_HasHeightForWidth_IsBase(bool value) const { qcolumnview_hasheightforwidth_isbase = value; }
    inline void setQColumnView_PaintEngine_IsBase(bool value) const { qcolumnview_paintengine_isbase = value; }
    inline void setQColumnView_KeyReleaseEvent_IsBase(bool value) const { qcolumnview_keyreleaseevent_isbase = value; }
    inline void setQColumnView_EnterEvent_IsBase(bool value) const { qcolumnview_enterevent_isbase = value; }
    inline void setQColumnView_LeaveEvent_IsBase(bool value) const { qcolumnview_leaveevent_isbase = value; }
    inline void setQColumnView_MoveEvent_IsBase(bool value) const { qcolumnview_moveevent_isbase = value; }
    inline void setQColumnView_CloseEvent_IsBase(bool value) const { qcolumnview_closeevent_isbase = value; }
    inline void setQColumnView_TabletEvent_IsBase(bool value) const { qcolumnview_tabletevent_isbase = value; }
    inline void setQColumnView_ActionEvent_IsBase(bool value) const { qcolumnview_actionevent_isbase = value; }
    inline void setQColumnView_ShowEvent_IsBase(bool value) const { qcolumnview_showevent_isbase = value; }
    inline void setQColumnView_HideEvent_IsBase(bool value) const { qcolumnview_hideevent_isbase = value; }
    inline void setQColumnView_NativeEvent_IsBase(bool value) const { qcolumnview_nativeevent_isbase = value; }
    inline void setQColumnView_Metric_IsBase(bool value) const { qcolumnview_metric_isbase = value; }
    inline void setQColumnView_InitPainter_IsBase(bool value) const { qcolumnview_initpainter_isbase = value; }
    inline void setQColumnView_Redirected_IsBase(bool value) const { qcolumnview_redirected_isbase = value; }
    inline void setQColumnView_SharedPainter_IsBase(bool value) const { qcolumnview_sharedpainter_isbase = value; }
    inline void setQColumnView_ChildEvent_IsBase(bool value) const { qcolumnview_childevent_isbase = value; }
    inline void setQColumnView_CustomEvent_IsBase(bool value) const { qcolumnview_customevent_isbase = value; }
    inline void setQColumnView_ConnectNotify_IsBase(bool value) const { qcolumnview_connectnotify_isbase = value; }
    inline void setQColumnView_DisconnectNotify_IsBase(bool value) const { qcolumnview_disconnectnotify_isbase = value; }
    inline void setQColumnView_InitializeColumn_IsBase(bool value) const { qcolumnview_initializecolumn_isbase = value; }
    inline void setQColumnView_State_IsBase(bool value) const { qcolumnview_state_isbase = value; }
    inline void setQColumnView_SetState_IsBase(bool value) const { qcolumnview_setstate_isbase = value; }
    inline void setQColumnView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qcolumnview_scheduledelayeditemslayout_isbase = value; }
    inline void setQColumnView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qcolumnview_executedelayeditemslayout_isbase = value; }
    inline void setQColumnView_SetDirtyRegion_IsBase(bool value) const { qcolumnview_setdirtyregion_isbase = value; }
    inline void setQColumnView_ScrollDirtyRegion_IsBase(bool value) const { qcolumnview_scrolldirtyregion_isbase = value; }
    inline void setQColumnView_DirtyRegionOffset_IsBase(bool value) const { qcolumnview_dirtyregionoffset_isbase = value; }
    inline void setQColumnView_StartAutoScroll_IsBase(bool value) const { qcolumnview_startautoscroll_isbase = value; }
    inline void setQColumnView_StopAutoScroll_IsBase(bool value) const { qcolumnview_stopautoscroll_isbase = value; }
    inline void setQColumnView_DoAutoScroll_IsBase(bool value) const { qcolumnview_doautoscroll_isbase = value; }
    inline void setQColumnView_DropIndicatorPosition_IsBase(bool value) const { qcolumnview_dropindicatorposition_isbase = value; }
    inline void setQColumnView_SetViewportMargins_IsBase(bool value) const { qcolumnview_setviewportmargins_isbase = value; }
    inline void setQColumnView_ViewportMargins_IsBase(bool value) const { qcolumnview_viewportmargins_isbase = value; }
    inline void setQColumnView_DrawFrame_IsBase(bool value) const { qcolumnview_drawframe_isbase = value; }
    inline void setQColumnView_UpdateMicroFocus_IsBase(bool value) const { qcolumnview_updatemicrofocus_isbase = value; }
    inline void setQColumnView_Create_IsBase(bool value) const { qcolumnview_create_isbase = value; }
    inline void setQColumnView_Destroy_IsBase(bool value) const { qcolumnview_destroy_isbase = value; }
    inline void setQColumnView_FocusNextChild_IsBase(bool value) const { qcolumnview_focusnextchild_isbase = value; }
    inline void setQColumnView_FocusPreviousChild_IsBase(bool value) const { qcolumnview_focuspreviouschild_isbase = value; }
    inline void setQColumnView_Sender_IsBase(bool value) const { qcolumnview_sender_isbase = value; }
    inline void setQColumnView_SenderSignalIndex_IsBase(bool value) const { qcolumnview_sendersignalindex_isbase = value; }
    inline void setQColumnView_Receivers_IsBase(bool value) const { qcolumnview_receivers_isbase = value; }
    inline void setQColumnView_IsSignalConnected_IsBase(bool value) const { qcolumnview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcolumnview_metacall_isbase) {
            qcolumnview_metacall_isbase = false;
            return QColumnView::qt_metacall(param1, param2, param3);
        } else if (qcolumnview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcolumnview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& point) const override {
        if (qcolumnview_indexat_isbase) {
            qcolumnview_indexat_isbase = false;
            return QColumnView::indexAt(point);
        } else if (qcolumnview_indexat_callback != nullptr) {
            const QPoint& point_ret = point;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&point_ret);

            QModelIndex* callback_ret = qcolumnview_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QColumnView::indexAt(point);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qcolumnview_scrollto_isbase) {
            qcolumnview_scrollto_isbase = false;
            QColumnView::scrollTo(index, hint);
        } else if (qcolumnview_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            qcolumnview_scrollto_callback(this, cbval1, cbval2);
        } else {
            QColumnView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcolumnview_sizehint_isbase) {
            qcolumnview_sizehint_isbase = false;
            return QColumnView::sizeHint();
        } else if (qcolumnview_sizehint_callback != nullptr) {
            QSize* callback_ret = qcolumnview_sizehint_callback();
            return *callback_ret;
        } else {
            return QColumnView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qcolumnview_visualrect_isbase) {
            qcolumnview_visualrect_isbase = false;
            return QColumnView::visualRect(index);
        } else if (qcolumnview_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qcolumnview_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QColumnView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qcolumnview_setmodel_isbase) {
            qcolumnview_setmodel_isbase = false;
            QColumnView::setModel(model);
        } else if (qcolumnview_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            qcolumnview_setmodel_callback(this, cbval1);
        } else {
            QColumnView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qcolumnview_setselectionmodel_isbase) {
            qcolumnview_setselectionmodel_isbase = false;
            QColumnView::setSelectionModel(selectionModel);
        } else if (qcolumnview_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            qcolumnview_setselectionmodel_callback(this, cbval1);
        } else {
            QColumnView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qcolumnview_setrootindex_isbase) {
            qcolumnview_setrootindex_isbase = false;
            QColumnView::setRootIndex(index);
        } else if (qcolumnview_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            qcolumnview_setrootindex_callback(this, cbval1);
        } else {
            QColumnView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qcolumnview_selectall_isbase) {
            qcolumnview_selectall_isbase = false;
            QColumnView::selectAll();
        } else if (qcolumnview_selectall_callback != nullptr) {
            qcolumnview_selectall_callback();
        } else {
            QColumnView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qcolumnview_isindexhidden_isbase) {
            qcolumnview_isindexhidden_isbase = false;
            return QColumnView::isIndexHidden(index);
        } else if (qcolumnview_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qcolumnview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColumnView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qcolumnview_movecursor_isbase) {
            qcolumnview_movecursor_isbase = false;
            return QColumnView::moveCursor(cursorAction, modifiers);
        } else if (qcolumnview_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = qcolumnview_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QColumnView::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcolumnview_resizeevent_isbase) {
            qcolumnview_resizeevent_isbase = false;
            QColumnView::resizeEvent(event);
        } else if (qcolumnview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qcolumnview_resizeevent_callback(this, cbval1);
        } else {
            QColumnView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qcolumnview_setselection_isbase) {
            qcolumnview_setselection_isbase = false;
            QColumnView::setSelection(rect, command);
        } else if (qcolumnview_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            qcolumnview_setselection_callback(this, cbval1, cbval2);
        } else {
            QColumnView::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qcolumnview_visualregionforselection_isbase) {
            qcolumnview_visualregionforselection_isbase = false;
            return QColumnView::visualRegionForSelection(selection);
        } else if (qcolumnview_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = qcolumnview_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QColumnView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qcolumnview_horizontaloffset_isbase) {
            qcolumnview_horizontaloffset_isbase = false;
            return QColumnView::horizontalOffset();
        } else if (qcolumnview_horizontaloffset_callback != nullptr) {
            int callback_ret = qcolumnview_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qcolumnview_verticaloffset_isbase) {
            qcolumnview_verticaloffset_isbase = false;
            return QColumnView::verticalOffset();
        } else if (qcolumnview_verticaloffset_callback != nullptr) {
            int callback_ret = qcolumnview_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qcolumnview_rowsinserted_isbase) {
            qcolumnview_rowsinserted_isbase = false;
            QColumnView::rowsInserted(parent, start, end);
        } else if (qcolumnview_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qcolumnview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            QColumnView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qcolumnview_currentchanged_isbase) {
            qcolumnview_currentchanged_isbase = false;
            QColumnView::currentChanged(current, previous);
        } else if (qcolumnview_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            qcolumnview_currentchanged_callback(this, cbval1, cbval2);
        } else {
            QColumnView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qcolumnview_scrollcontentsby_isbase) {
            qcolumnview_scrollcontentsby_isbase = false;
            QColumnView::scrollContentsBy(dx, dy);
        } else if (qcolumnview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qcolumnview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QColumnView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createColumn(const QModelIndex& rootIndex) override {
        if (qcolumnview_createcolumn_isbase) {
            qcolumnview_createcolumn_isbase = false;
            return QColumnView::createColumn(rootIndex);
        } else if (qcolumnview_createcolumn_callback != nullptr) {
            const QModelIndex& rootIndex_ret = rootIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&rootIndex_ret);

            QAbstractItemView* callback_ret = qcolumnview_createcolumn_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColumnView::createColumn(rootIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qcolumnview_keyboardsearch_isbase) {
            qcolumnview_keyboardsearch_isbase = false;
            QColumnView::keyboardSearch(search);
        } else if (qcolumnview_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<char*>(malloc((search_str.len + 1) * sizeof(char)));
            memcpy(search_str.data, search_b.data(), search_str.len);
            search_str.data[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            qcolumnview_keyboardsearch_callback(this, cbval1);
        } else {
            QColumnView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qcolumnview_sizehintforrow_isbase) {
            qcolumnview_sizehintforrow_isbase = false;
            return QColumnView::sizeHintForRow(row);
        } else if (qcolumnview_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = qcolumnview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qcolumnview_sizehintforcolumn_isbase) {
            qcolumnview_sizehintforcolumn_isbase = false;
            return QColumnView::sizeHintForColumn(column);
        } else if (qcolumnview_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = qcolumnview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qcolumnview_itemdelegateforindex_isbase) {
            qcolumnview_itemdelegateforindex_isbase = false;
            return QColumnView::itemDelegateForIndex(index);
        } else if (qcolumnview_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = qcolumnview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColumnView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qcolumnview_inputmethodquery_isbase) {
            qcolumnview_inputmethodquery_isbase = false;
            return QColumnView::inputMethodQuery(query);
        } else if (qcolumnview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qcolumnview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QColumnView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qcolumnview_reset_isbase) {
            qcolumnview_reset_isbase = false;
            QColumnView::reset();
        } else if (qcolumnview_reset_callback != nullptr) {
            qcolumnview_reset_callback();
        } else {
            QColumnView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qcolumnview_doitemslayout_isbase) {
            qcolumnview_doitemslayout_isbase = false;
            QColumnView::doItemsLayout();
        } else if (qcolumnview_doitemslayout_callback != nullptr) {
            qcolumnview_doitemslayout_callback();
        } else {
            QColumnView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qcolumnview_datachanged_isbase) {
            qcolumnview_datachanged_isbase = false;
            QColumnView::dataChanged(topLeft, bottomRight, roles);
        } else if (qcolumnview_datachanged_callback != nullptr) {
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

            qcolumnview_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            QColumnView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qcolumnview_rowsabouttoberemoved_isbase) {
            qcolumnview_rowsabouttoberemoved_isbase = false;
            QColumnView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qcolumnview_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qcolumnview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QColumnView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qcolumnview_selectionchanged_isbase) {
            qcolumnview_selectionchanged_isbase = false;
            QColumnView::selectionChanged(selected, deselected);
        } else if (qcolumnview_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            qcolumnview_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            QColumnView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qcolumnview_updateeditordata_isbase) {
            qcolumnview_updateeditordata_isbase = false;
            QColumnView::updateEditorData();
        } else if (qcolumnview_updateeditordata_callback != nullptr) {
            qcolumnview_updateeditordata_callback();
        } else {
            QColumnView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qcolumnview_updateeditorgeometries_isbase) {
            qcolumnview_updateeditorgeometries_isbase = false;
            QColumnView::updateEditorGeometries();
        } else if (qcolumnview_updateeditorgeometries_callback != nullptr) {
            qcolumnview_updateeditorgeometries_callback();
        } else {
            QColumnView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qcolumnview_updategeometries_isbase) {
            qcolumnview_updategeometries_isbase = false;
            QColumnView::updateGeometries();
        } else if (qcolumnview_updategeometries_callback != nullptr) {
            qcolumnview_updategeometries_callback();
        } else {
            QColumnView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qcolumnview_verticalscrollbaraction_isbase) {
            qcolumnview_verticalscrollbaraction_isbase = false;
            QColumnView::verticalScrollbarAction(action);
        } else if (qcolumnview_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qcolumnview_verticalscrollbaraction_callback(this, cbval1);
        } else {
            QColumnView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qcolumnview_horizontalscrollbaraction_isbase) {
            qcolumnview_horizontalscrollbaraction_isbase = false;
            QColumnView::horizontalScrollbarAction(action);
        } else if (qcolumnview_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qcolumnview_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            QColumnView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qcolumnview_verticalscrollbarvaluechanged_isbase) {
            qcolumnview_verticalscrollbarvaluechanged_isbase = false;
            QColumnView::verticalScrollbarValueChanged(value);
        } else if (qcolumnview_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qcolumnview_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QColumnView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qcolumnview_horizontalscrollbarvaluechanged_isbase) {
            qcolumnview_horizontalscrollbarvaluechanged_isbase = false;
            QColumnView::horizontalScrollbarValueChanged(value);
        } else if (qcolumnview_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qcolumnview_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QColumnView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qcolumnview_closeeditor_isbase) {
            qcolumnview_closeeditor_isbase = false;
            QColumnView::closeEditor(editor, hint);
        } else if (qcolumnview_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            qcolumnview_closeeditor_callback(this, cbval1, cbval2);
        } else {
            QColumnView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qcolumnview_commitdata_isbase) {
            qcolumnview_commitdata_isbase = false;
            QColumnView::commitData(editor);
        } else if (qcolumnview_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            qcolumnview_commitdata_callback(this, cbval1);
        } else {
            QColumnView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qcolumnview_editordestroyed_isbase) {
            qcolumnview_editordestroyed_isbase = false;
            QColumnView::editorDestroyed(editor);
        } else if (qcolumnview_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            qcolumnview_editordestroyed_callback(this, cbval1);
        } else {
            QColumnView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qcolumnview_selectedindexes_isbase) {
            qcolumnview_selectedindexes_isbase = false;
            return QColumnView::selectedIndexes();
        } else if (qcolumnview_selectedindexes_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qcolumnview_selectedindexes_callback();
            QModelIndexList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QColumnView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qcolumnview_edit2_isbase) {
            qcolumnview_edit2_isbase = false;
            return QColumnView::edit(index, trigger, event);
        } else if (qcolumnview_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = qcolumnview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QColumnView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qcolumnview_selectioncommand_isbase) {
            qcolumnview_selectioncommand_isbase = false;
            return QColumnView::selectionCommand(index, event);
        } else if (qcolumnview_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = qcolumnview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return QColumnView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qcolumnview_startdrag_isbase) {
            qcolumnview_startdrag_isbase = false;
            QColumnView::startDrag(supportedActions);
        } else if (qcolumnview_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            qcolumnview_startdrag_callback(this, cbval1);
        } else {
            QColumnView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qcolumnview_initviewitemoption_isbase) {
            qcolumnview_initviewitemoption_isbase = false;
            QColumnView::initViewItemOption(option);
        } else if (qcolumnview_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            qcolumnview_initviewitemoption_callback(this, cbval1);
        } else {
            QColumnView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcolumnview_focusnextprevchild_isbase) {
            qcolumnview_focusnextprevchild_isbase = false;
            return QColumnView::focusNextPrevChild(next);
        } else if (qcolumnview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qcolumnview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColumnView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcolumnview_event_isbase) {
            qcolumnview_event_isbase = false;
            return QColumnView::event(event);
        } else if (qcolumnview_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcolumnview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColumnView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qcolumnview_viewportevent_isbase) {
            qcolumnview_viewportevent_isbase = false;
            return QColumnView::viewportEvent(event);
        } else if (qcolumnview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcolumnview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColumnView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qcolumnview_mousepressevent_isbase) {
            qcolumnview_mousepressevent_isbase = false;
            QColumnView::mousePressEvent(event);
        } else if (qcolumnview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcolumnview_mousepressevent_callback(this, cbval1);
        } else {
            QColumnView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcolumnview_mousemoveevent_isbase) {
            qcolumnview_mousemoveevent_isbase = false;
            QColumnView::mouseMoveEvent(event);
        } else if (qcolumnview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcolumnview_mousemoveevent_callback(this, cbval1);
        } else {
            QColumnView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qcolumnview_mousereleaseevent_isbase) {
            qcolumnview_mousereleaseevent_isbase = false;
            QColumnView::mouseReleaseEvent(event);
        } else if (qcolumnview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcolumnview_mousereleaseevent_callback(this, cbval1);
        } else {
            QColumnView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcolumnview_mousedoubleclickevent_isbase) {
            qcolumnview_mousedoubleclickevent_isbase = false;
            QColumnView::mouseDoubleClickEvent(event);
        } else if (qcolumnview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcolumnview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QColumnView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcolumnview_dragenterevent_isbase) {
            qcolumnview_dragenterevent_isbase = false;
            QColumnView::dragEnterEvent(event);
        } else if (qcolumnview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qcolumnview_dragenterevent_callback(this, cbval1);
        } else {
            QColumnView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcolumnview_dragmoveevent_isbase) {
            qcolumnview_dragmoveevent_isbase = false;
            QColumnView::dragMoveEvent(event);
        } else if (qcolumnview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qcolumnview_dragmoveevent_callback(this, cbval1);
        } else {
            QColumnView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcolumnview_dragleaveevent_isbase) {
            qcolumnview_dragleaveevent_isbase = false;
            QColumnView::dragLeaveEvent(event);
        } else if (qcolumnview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qcolumnview_dragleaveevent_callback(this, cbval1);
        } else {
            QColumnView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcolumnview_dropevent_isbase) {
            qcolumnview_dropevent_isbase = false;
            QColumnView::dropEvent(event);
        } else if (qcolumnview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qcolumnview_dropevent_callback(this, cbval1);
        } else {
            QColumnView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qcolumnview_focusinevent_isbase) {
            qcolumnview_focusinevent_isbase = false;
            QColumnView::focusInEvent(event);
        } else if (qcolumnview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qcolumnview_focusinevent_callback(this, cbval1);
        } else {
            QColumnView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qcolumnview_focusoutevent_isbase) {
            qcolumnview_focusoutevent_isbase = false;
            QColumnView::focusOutEvent(event);
        } else if (qcolumnview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qcolumnview_focusoutevent_callback(this, cbval1);
        } else {
            QColumnView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qcolumnview_keypressevent_isbase) {
            qcolumnview_keypressevent_isbase = false;
            QColumnView::keyPressEvent(event);
        } else if (qcolumnview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qcolumnview_keypressevent_callback(this, cbval1);
        } else {
            QColumnView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcolumnview_timerevent_isbase) {
            qcolumnview_timerevent_isbase = false;
            QColumnView::timerEvent(event);
        } else if (qcolumnview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcolumnview_timerevent_callback(this, cbval1);
        } else {
            QColumnView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qcolumnview_inputmethodevent_isbase) {
            qcolumnview_inputmethodevent_isbase = false;
            QColumnView::inputMethodEvent(event);
        } else if (qcolumnview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qcolumnview_inputmethodevent_callback(this, cbval1);
        } else {
            QColumnView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qcolumnview_eventfilter_isbase) {
            qcolumnview_eventfilter_isbase = false;
            return QColumnView::eventFilter(object, event);
        } else if (qcolumnview_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qcolumnview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QColumnView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qcolumnview_viewportsizehint_isbase) {
            qcolumnview_viewportsizehint_isbase = false;
            return QColumnView::viewportSizeHint();
        } else if (qcolumnview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qcolumnview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QColumnView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcolumnview_minimumsizehint_isbase) {
            qcolumnview_minimumsizehint_isbase = false;
            return QColumnView::minimumSizeHint();
        } else if (qcolumnview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qcolumnview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QColumnView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qcolumnview_setupviewport_isbase) {
            qcolumnview_setupviewport_isbase = false;
            QColumnView::setupViewport(viewport);
        } else if (qcolumnview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qcolumnview_setupviewport_callback(this, cbval1);
        } else {
            QColumnView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qcolumnview_paintevent_isbase) {
            qcolumnview_paintevent_isbase = false;
            QColumnView::paintEvent(param1);
        } else if (qcolumnview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qcolumnview_paintevent_callback(this, cbval1);
        } else {
            QColumnView::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qcolumnview_wheelevent_isbase) {
            qcolumnview_wheelevent_isbase = false;
            QColumnView::wheelEvent(param1);
        } else if (qcolumnview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qcolumnview_wheelevent_callback(this, cbval1);
        } else {
            QColumnView::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qcolumnview_contextmenuevent_isbase) {
            qcolumnview_contextmenuevent_isbase = false;
            QColumnView::contextMenuEvent(param1);
        } else if (qcolumnview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qcolumnview_contextmenuevent_callback(this, cbval1);
        } else {
            QColumnView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qcolumnview_changeevent_isbase) {
            qcolumnview_changeevent_isbase = false;
            QColumnView::changeEvent(param1);
        } else if (qcolumnview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qcolumnview_changeevent_callback(this, cbval1);
        } else {
            QColumnView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qcolumnview_initstyleoption_isbase) {
            qcolumnview_initstyleoption_isbase = false;
            QColumnView::initStyleOption(option);
        } else if (qcolumnview_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qcolumnview_initstyleoption_callback(this, cbval1);
        } else {
            QColumnView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcolumnview_devtype_isbase) {
            qcolumnview_devtype_isbase = false;
            return QColumnView::devType();
        } else if (qcolumnview_devtype_callback != nullptr) {
            int callback_ret = qcolumnview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcolumnview_setvisible_isbase) {
            qcolumnview_setvisible_isbase = false;
            QColumnView::setVisible(visible);
        } else if (qcolumnview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qcolumnview_setvisible_callback(this, cbval1);
        } else {
            QColumnView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcolumnview_heightforwidth_isbase) {
            qcolumnview_heightforwidth_isbase = false;
            return QColumnView::heightForWidth(param1);
        } else if (qcolumnview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qcolumnview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcolumnview_hasheightforwidth_isbase) {
            qcolumnview_hasheightforwidth_isbase = false;
            return QColumnView::hasHeightForWidth();
        } else if (qcolumnview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qcolumnview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QColumnView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcolumnview_paintengine_isbase) {
            qcolumnview_paintengine_isbase = false;
            return QColumnView::paintEngine();
        } else if (qcolumnview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qcolumnview_paintengine_callback();
            return callback_ret;
        } else {
            return QColumnView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qcolumnview_keyreleaseevent_isbase) {
            qcolumnview_keyreleaseevent_isbase = false;
            QColumnView::keyReleaseEvent(event);
        } else if (qcolumnview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qcolumnview_keyreleaseevent_callback(this, cbval1);
        } else {
            QColumnView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcolumnview_enterevent_isbase) {
            qcolumnview_enterevent_isbase = false;
            QColumnView::enterEvent(event);
        } else if (qcolumnview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qcolumnview_enterevent_callback(this, cbval1);
        } else {
            QColumnView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcolumnview_leaveevent_isbase) {
            qcolumnview_leaveevent_isbase = false;
            QColumnView::leaveEvent(event);
        } else if (qcolumnview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcolumnview_leaveevent_callback(this, cbval1);
        } else {
            QColumnView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcolumnview_moveevent_isbase) {
            qcolumnview_moveevent_isbase = false;
            QColumnView::moveEvent(event);
        } else if (qcolumnview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qcolumnview_moveevent_callback(this, cbval1);
        } else {
            QColumnView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcolumnview_closeevent_isbase) {
            qcolumnview_closeevent_isbase = false;
            QColumnView::closeEvent(event);
        } else if (qcolumnview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qcolumnview_closeevent_callback(this, cbval1);
        } else {
            QColumnView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcolumnview_tabletevent_isbase) {
            qcolumnview_tabletevent_isbase = false;
            QColumnView::tabletEvent(event);
        } else if (qcolumnview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qcolumnview_tabletevent_callback(this, cbval1);
        } else {
            QColumnView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcolumnview_actionevent_isbase) {
            qcolumnview_actionevent_isbase = false;
            QColumnView::actionEvent(event);
        } else if (qcolumnview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qcolumnview_actionevent_callback(this, cbval1);
        } else {
            QColumnView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcolumnview_showevent_isbase) {
            qcolumnview_showevent_isbase = false;
            QColumnView::showEvent(event);
        } else if (qcolumnview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qcolumnview_showevent_callback(this, cbval1);
        } else {
            QColumnView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcolumnview_hideevent_isbase) {
            qcolumnview_hideevent_isbase = false;
            QColumnView::hideEvent(event);
        } else if (qcolumnview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qcolumnview_hideevent_callback(this, cbval1);
        } else {
            QColumnView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcolumnview_nativeevent_isbase) {
            qcolumnview_nativeevent_isbase = false;
            return QColumnView::nativeEvent(eventType, message, result);
        } else if (qcolumnview_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy(eventType_str.data, eventType_qb.data(), eventType_str.len);
            eventType_str.data[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qcolumnview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QColumnView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcolumnview_metric_isbase) {
            qcolumnview_metric_isbase = false;
            return QColumnView::metric(param1);
        } else if (qcolumnview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qcolumnview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcolumnview_initpainter_isbase) {
            qcolumnview_initpainter_isbase = false;
            QColumnView::initPainter(painter);
        } else if (qcolumnview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qcolumnview_initpainter_callback(this, cbval1);
        } else {
            QColumnView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcolumnview_redirected_isbase) {
            qcolumnview_redirected_isbase = false;
            return QColumnView::redirected(offset);
        } else if (qcolumnview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qcolumnview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColumnView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcolumnview_sharedpainter_isbase) {
            qcolumnview_sharedpainter_isbase = false;
            return QColumnView::sharedPainter();
        } else if (qcolumnview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qcolumnview_sharedpainter_callback();
            return callback_ret;
        } else {
            return QColumnView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcolumnview_childevent_isbase) {
            qcolumnview_childevent_isbase = false;
            QColumnView::childEvent(event);
        } else if (qcolumnview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcolumnview_childevent_callback(this, cbval1);
        } else {
            QColumnView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcolumnview_customevent_isbase) {
            qcolumnview_customevent_isbase = false;
            QColumnView::customEvent(event);
        } else if (qcolumnview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcolumnview_customevent_callback(this, cbval1);
        } else {
            QColumnView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcolumnview_connectnotify_isbase) {
            qcolumnview_connectnotify_isbase = false;
            QColumnView::connectNotify(signal);
        } else if (qcolumnview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcolumnview_connectnotify_callback(this, cbval1);
        } else {
            QColumnView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcolumnview_disconnectnotify_isbase) {
            qcolumnview_disconnectnotify_isbase = false;
            QColumnView::disconnectNotify(signal);
        } else if (qcolumnview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcolumnview_disconnectnotify_callback(this, cbval1);
        } else {
            QColumnView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void initializeColumn(QAbstractItemView* column) const {
        if (qcolumnview_initializecolumn_isbase) {
            qcolumnview_initializecolumn_isbase = false;
            QColumnView::initializeColumn(column);
        } else if (qcolumnview_initializecolumn_callback != nullptr) {
            QAbstractItemView* cbval1 = column;

            qcolumnview_initializecolumn_callback(this, cbval1);
        } else {
            QColumnView::initializeColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qcolumnview_state_isbase) {
            qcolumnview_state_isbase = false;
            return QColumnView::state();
        } else if (qcolumnview_state_callback != nullptr) {
            int callback_ret = qcolumnview_state_callback();
            return static_cast<VirtualQColumnView::State>(callback_ret);
        } else {
            return QColumnView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qcolumnview_setstate_isbase) {
            qcolumnview_setstate_isbase = false;
            QColumnView::setState(state);
        } else if (qcolumnview_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qcolumnview_setstate_callback(this, cbval1);
        } else {
            QColumnView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qcolumnview_scheduledelayeditemslayout_isbase) {
            qcolumnview_scheduledelayeditemslayout_isbase = false;
            QColumnView::scheduleDelayedItemsLayout();
        } else if (qcolumnview_scheduledelayeditemslayout_callback != nullptr) {
            qcolumnview_scheduledelayeditemslayout_callback();
        } else {
            QColumnView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qcolumnview_executedelayeditemslayout_isbase) {
            qcolumnview_executedelayeditemslayout_isbase = false;
            QColumnView::executeDelayedItemsLayout();
        } else if (qcolumnview_executedelayeditemslayout_callback != nullptr) {
            qcolumnview_executedelayeditemslayout_callback();
        } else {
            QColumnView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qcolumnview_setdirtyregion_isbase) {
            qcolumnview_setdirtyregion_isbase = false;
            QColumnView::setDirtyRegion(region);
        } else if (qcolumnview_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            qcolumnview_setdirtyregion_callback(this, cbval1);
        } else {
            QColumnView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qcolumnview_scrolldirtyregion_isbase) {
            qcolumnview_scrolldirtyregion_isbase = false;
            QColumnView::scrollDirtyRegion(dx, dy);
        } else if (qcolumnview_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qcolumnview_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            QColumnView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qcolumnview_dirtyregionoffset_isbase) {
            qcolumnview_dirtyregionoffset_isbase = false;
            return QColumnView::dirtyRegionOffset();
        } else if (qcolumnview_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = qcolumnview_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return QColumnView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qcolumnview_startautoscroll_isbase) {
            qcolumnview_startautoscroll_isbase = false;
            QColumnView::startAutoScroll();
        } else if (qcolumnview_startautoscroll_callback != nullptr) {
            qcolumnview_startautoscroll_callback();
        } else {
            QColumnView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qcolumnview_stopautoscroll_isbase) {
            qcolumnview_stopautoscroll_isbase = false;
            QColumnView::stopAutoScroll();
        } else if (qcolumnview_stopautoscroll_callback != nullptr) {
            qcolumnview_stopautoscroll_callback();
        } else {
            QColumnView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qcolumnview_doautoscroll_isbase) {
            qcolumnview_doautoscroll_isbase = false;
            QColumnView::doAutoScroll();
        } else if (qcolumnview_doautoscroll_callback != nullptr) {
            qcolumnview_doautoscroll_callback();
        } else {
            QColumnView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qcolumnview_dropindicatorposition_isbase) {
            qcolumnview_dropindicatorposition_isbase = false;
            return QColumnView::dropIndicatorPosition();
        } else if (qcolumnview_dropindicatorposition_callback != nullptr) {
            int callback_ret = qcolumnview_dropindicatorposition_callback();
            return static_cast<VirtualQColumnView::DropIndicatorPosition>(callback_ret);
        } else {
            return QColumnView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qcolumnview_setviewportmargins_isbase) {
            qcolumnview_setviewportmargins_isbase = false;
            QColumnView::setViewportMargins(left, top, right, bottom);
        } else if (qcolumnview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qcolumnview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QColumnView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qcolumnview_viewportmargins_isbase) {
            qcolumnview_viewportmargins_isbase = false;
            return QColumnView::viewportMargins();
        } else if (qcolumnview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qcolumnview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QColumnView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qcolumnview_drawframe_isbase) {
            qcolumnview_drawframe_isbase = false;
            QColumnView::drawFrame(param1);
        } else if (qcolumnview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qcolumnview_drawframe_callback(this, cbval1);
        } else {
            QColumnView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcolumnview_updatemicrofocus_isbase) {
            qcolumnview_updatemicrofocus_isbase = false;
            QColumnView::updateMicroFocus();
        } else if (qcolumnview_updatemicrofocus_callback != nullptr) {
            qcolumnview_updatemicrofocus_callback();
        } else {
            QColumnView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcolumnview_create_isbase) {
            qcolumnview_create_isbase = false;
            QColumnView::create();
        } else if (qcolumnview_create_callback != nullptr) {
            qcolumnview_create_callback();
        } else {
            QColumnView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcolumnview_destroy_isbase) {
            qcolumnview_destroy_isbase = false;
            QColumnView::destroy();
        } else if (qcolumnview_destroy_callback != nullptr) {
            qcolumnview_destroy_callback();
        } else {
            QColumnView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcolumnview_focusnextchild_isbase) {
            qcolumnview_focusnextchild_isbase = false;
            return QColumnView::focusNextChild();
        } else if (qcolumnview_focusnextchild_callback != nullptr) {
            bool callback_ret = qcolumnview_focusnextchild_callback();
            return callback_ret;
        } else {
            return QColumnView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcolumnview_focuspreviouschild_isbase) {
            qcolumnview_focuspreviouschild_isbase = false;
            return QColumnView::focusPreviousChild();
        } else if (qcolumnview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qcolumnview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QColumnView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcolumnview_sender_isbase) {
            qcolumnview_sender_isbase = false;
            return QColumnView::sender();
        } else if (qcolumnview_sender_callback != nullptr) {
            QObject* callback_ret = qcolumnview_sender_callback();
            return callback_ret;
        } else {
            return QColumnView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcolumnview_sendersignalindex_isbase) {
            qcolumnview_sendersignalindex_isbase = false;
            return QColumnView::senderSignalIndex();
        } else if (qcolumnview_sendersignalindex_callback != nullptr) {
            int callback_ret = qcolumnview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcolumnview_receivers_isbase) {
            qcolumnview_receivers_isbase = false;
            return QColumnView::receivers(signal);
        } else if (qcolumnview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcolumnview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColumnView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcolumnview_issignalconnected_isbase) {
            qcolumnview_issignalconnected_isbase = false;
            return QColumnView::isSignalConnected(signal);
        } else if (qcolumnview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcolumnview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColumnView::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QColumnView_IsIndexHidden(const QColumnView* self, const QModelIndex* index);
    friend bool QColumnView_QBaseIsIndexHidden(const QColumnView* self, const QModelIndex* index);
    friend QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers);
    friend QModelIndex* QColumnView_QBaseMoveCursor(QColumnView* self, int cursorAction, int modifiers);
    friend void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event);
    friend void QColumnView_QBaseResizeEvent(QColumnView* self, QResizeEvent* event);
    friend void QColumnView_SetSelection(QColumnView* self, const QRect* rect, int command);
    friend void QColumnView_QBaseSetSelection(QColumnView* self, const QRect* rect, int command);
    friend QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
    friend QRegion* QColumnView_QBaseVisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
    friend int QColumnView_HorizontalOffset(const QColumnView* self);
    friend int QColumnView_QBaseHorizontalOffset(const QColumnView* self);
    friend int QColumnView_VerticalOffset(const QColumnView* self);
    friend int QColumnView_QBaseVerticalOffset(const QColumnView* self);
    friend void QColumnView_RowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
    friend void QColumnView_QBaseRowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
    friend void QColumnView_CurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QColumnView_QBaseCurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy);
    friend void QColumnView_QBaseScrollContentsBy(QColumnView* self, int dx, int dy);
    friend QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, const QModelIndex* rootIndex);
    friend QAbstractItemView* QColumnView_QBaseCreateColumn(QColumnView* self, const QModelIndex* rootIndex);
    friend void QColumnView_DataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QColumnView_QBaseDataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QColumnView_RowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end);
    friend void QColumnView_QBaseRowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end);
    friend void QColumnView_SelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QColumnView_QBaseSelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QColumnView_UpdateEditorData(QColumnView* self);
    friend void QColumnView_QBaseUpdateEditorData(QColumnView* self);
    friend void QColumnView_UpdateEditorGeometries(QColumnView* self);
    friend void QColumnView_QBaseUpdateEditorGeometries(QColumnView* self);
    friend void QColumnView_UpdateGeometries(QColumnView* self);
    friend void QColumnView_QBaseUpdateGeometries(QColumnView* self);
    friend void QColumnView_VerticalScrollbarAction(QColumnView* self, int action);
    friend void QColumnView_QBaseVerticalScrollbarAction(QColumnView* self, int action);
    friend void QColumnView_HorizontalScrollbarAction(QColumnView* self, int action);
    friend void QColumnView_QBaseHorizontalScrollbarAction(QColumnView* self, int action);
    friend void QColumnView_VerticalScrollbarValueChanged(QColumnView* self, int value);
    friend void QColumnView_QBaseVerticalScrollbarValueChanged(QColumnView* self, int value);
    friend void QColumnView_HorizontalScrollbarValueChanged(QColumnView* self, int value);
    friend void QColumnView_QBaseHorizontalScrollbarValueChanged(QColumnView* self, int value);
    friend void QColumnView_CloseEditor(QColumnView* self, QWidget* editor, int hint);
    friend void QColumnView_QBaseCloseEditor(QColumnView* self, QWidget* editor, int hint);
    friend void QColumnView_CommitData(QColumnView* self, QWidget* editor);
    friend void QColumnView_QBaseCommitData(QColumnView* self, QWidget* editor);
    friend void QColumnView_EditorDestroyed(QColumnView* self, QObject* editor);
    friend void QColumnView_QBaseEditorDestroyed(QColumnView* self, QObject* editor);
    friend libqt_list /* of QModelIndex* */ QColumnView_SelectedIndexes(const QColumnView* self);
    friend libqt_list /* of QModelIndex* */ QColumnView_QBaseSelectedIndexes(const QColumnView* self);
    friend bool QColumnView_Edit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QColumnView_QBaseEdit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QColumnView_SelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event);
    friend int QColumnView_QBaseSelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event);
    friend void QColumnView_StartDrag(QColumnView* self, int supportedActions);
    friend void QColumnView_QBaseStartDrag(QColumnView* self, int supportedActions);
    friend void QColumnView_InitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option);
    friend void QColumnView_QBaseInitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option);
    friend bool QColumnView_FocusNextPrevChild(QColumnView* self, bool next);
    friend bool QColumnView_QBaseFocusNextPrevChild(QColumnView* self, bool next);
    friend bool QColumnView_Event(QColumnView* self, QEvent* event);
    friend bool QColumnView_QBaseEvent(QColumnView* self, QEvent* event);
    friend bool QColumnView_ViewportEvent(QColumnView* self, QEvent* event);
    friend bool QColumnView_QBaseViewportEvent(QColumnView* self, QEvent* event);
    friend void QColumnView_MousePressEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_QBaseMousePressEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_MouseMoveEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_QBaseMouseMoveEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_MouseReleaseEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_QBaseMouseReleaseEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_MouseDoubleClickEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_QBaseMouseDoubleClickEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_DragEnterEvent(QColumnView* self, QDragEnterEvent* event);
    friend void QColumnView_QBaseDragEnterEvent(QColumnView* self, QDragEnterEvent* event);
    friend void QColumnView_DragMoveEvent(QColumnView* self, QDragMoveEvent* event);
    friend void QColumnView_QBaseDragMoveEvent(QColumnView* self, QDragMoveEvent* event);
    friend void QColumnView_DragLeaveEvent(QColumnView* self, QDragLeaveEvent* event);
    friend void QColumnView_QBaseDragLeaveEvent(QColumnView* self, QDragLeaveEvent* event);
    friend void QColumnView_DropEvent(QColumnView* self, QDropEvent* event);
    friend void QColumnView_QBaseDropEvent(QColumnView* self, QDropEvent* event);
    friend void QColumnView_FocusInEvent(QColumnView* self, QFocusEvent* event);
    friend void QColumnView_QBaseFocusInEvent(QColumnView* self, QFocusEvent* event);
    friend void QColumnView_FocusOutEvent(QColumnView* self, QFocusEvent* event);
    friend void QColumnView_QBaseFocusOutEvent(QColumnView* self, QFocusEvent* event);
    friend void QColumnView_KeyPressEvent(QColumnView* self, QKeyEvent* event);
    friend void QColumnView_QBaseKeyPressEvent(QColumnView* self, QKeyEvent* event);
    friend void QColumnView_TimerEvent(QColumnView* self, QTimerEvent* event);
    friend void QColumnView_QBaseTimerEvent(QColumnView* self, QTimerEvent* event);
    friend void QColumnView_InputMethodEvent(QColumnView* self, QInputMethodEvent* event);
    friend void QColumnView_QBaseInputMethodEvent(QColumnView* self, QInputMethodEvent* event);
    friend bool QColumnView_EventFilter(QColumnView* self, QObject* object, QEvent* event);
    friend bool QColumnView_QBaseEventFilter(QColumnView* self, QObject* object, QEvent* event);
    friend QSize* QColumnView_ViewportSizeHint(const QColumnView* self);
    friend QSize* QColumnView_QBaseViewportSizeHint(const QColumnView* self);
    friend void QColumnView_PaintEvent(QColumnView* self, QPaintEvent* param1);
    friend void QColumnView_QBasePaintEvent(QColumnView* self, QPaintEvent* param1);
    friend void QColumnView_WheelEvent(QColumnView* self, QWheelEvent* param1);
    friend void QColumnView_QBaseWheelEvent(QColumnView* self, QWheelEvent* param1);
    friend void QColumnView_ContextMenuEvent(QColumnView* self, QContextMenuEvent* param1);
    friend void QColumnView_QBaseContextMenuEvent(QColumnView* self, QContextMenuEvent* param1);
    friend void QColumnView_ChangeEvent(QColumnView* self, QEvent* param1);
    friend void QColumnView_QBaseChangeEvent(QColumnView* self, QEvent* param1);
    friend void QColumnView_InitStyleOption(const QColumnView* self, QStyleOptionFrame* option);
    friend void QColumnView_QBaseInitStyleOption(const QColumnView* self, QStyleOptionFrame* option);
    friend void QColumnView_KeyReleaseEvent(QColumnView* self, QKeyEvent* event);
    friend void QColumnView_QBaseKeyReleaseEvent(QColumnView* self, QKeyEvent* event);
    friend void QColumnView_EnterEvent(QColumnView* self, QEnterEvent* event);
    friend void QColumnView_QBaseEnterEvent(QColumnView* self, QEnterEvent* event);
    friend void QColumnView_LeaveEvent(QColumnView* self, QEvent* event);
    friend void QColumnView_QBaseLeaveEvent(QColumnView* self, QEvent* event);
    friend void QColumnView_MoveEvent(QColumnView* self, QMoveEvent* event);
    friend void QColumnView_QBaseMoveEvent(QColumnView* self, QMoveEvent* event);
    friend void QColumnView_CloseEvent(QColumnView* self, QCloseEvent* event);
    friend void QColumnView_QBaseCloseEvent(QColumnView* self, QCloseEvent* event);
    friend void QColumnView_TabletEvent(QColumnView* self, QTabletEvent* event);
    friend void QColumnView_QBaseTabletEvent(QColumnView* self, QTabletEvent* event);
    friend void QColumnView_ActionEvent(QColumnView* self, QActionEvent* event);
    friend void QColumnView_QBaseActionEvent(QColumnView* self, QActionEvent* event);
    friend void QColumnView_ShowEvent(QColumnView* self, QShowEvent* event);
    friend void QColumnView_QBaseShowEvent(QColumnView* self, QShowEvent* event);
    friend void QColumnView_HideEvent(QColumnView* self, QHideEvent* event);
    friend void QColumnView_QBaseHideEvent(QColumnView* self, QHideEvent* event);
    friend bool QColumnView_NativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QColumnView_QBaseNativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QColumnView_Metric(const QColumnView* self, int param1);
    friend int QColumnView_QBaseMetric(const QColumnView* self, int param1);
    friend void QColumnView_InitPainter(const QColumnView* self, QPainter* painter);
    friend void QColumnView_QBaseInitPainter(const QColumnView* self, QPainter* painter);
    friend QPaintDevice* QColumnView_Redirected(const QColumnView* self, QPoint* offset);
    friend QPaintDevice* QColumnView_QBaseRedirected(const QColumnView* self, QPoint* offset);
    friend QPainter* QColumnView_SharedPainter(const QColumnView* self);
    friend QPainter* QColumnView_QBaseSharedPainter(const QColumnView* self);
    friend void QColumnView_ChildEvent(QColumnView* self, QChildEvent* event);
    friend void QColumnView_QBaseChildEvent(QColumnView* self, QChildEvent* event);
    friend void QColumnView_CustomEvent(QColumnView* self, QEvent* event);
    friend void QColumnView_QBaseCustomEvent(QColumnView* self, QEvent* event);
    friend void QColumnView_ConnectNotify(QColumnView* self, const QMetaMethod* signal);
    friend void QColumnView_QBaseConnectNotify(QColumnView* self, const QMetaMethod* signal);
    friend void QColumnView_DisconnectNotify(QColumnView* self, const QMetaMethod* signal);
    friend void QColumnView_QBaseDisconnectNotify(QColumnView* self, const QMetaMethod* signal);
    friend void QColumnView_InitializeColumn(const QColumnView* self, QAbstractItemView* column);
    friend void QColumnView_QBaseInitializeColumn(const QColumnView* self, QAbstractItemView* column);
    friend int QColumnView_State(const QColumnView* self);
    friend int QColumnView_QBaseState(const QColumnView* self);
    friend void QColumnView_SetState(QColumnView* self, int state);
    friend void QColumnView_QBaseSetState(QColumnView* self, int state);
    friend void QColumnView_ScheduleDelayedItemsLayout(QColumnView* self);
    friend void QColumnView_QBaseScheduleDelayedItemsLayout(QColumnView* self);
    friend void QColumnView_ExecuteDelayedItemsLayout(QColumnView* self);
    friend void QColumnView_QBaseExecuteDelayedItemsLayout(QColumnView* self);
    friend void QColumnView_SetDirtyRegion(QColumnView* self, const QRegion* region);
    friend void QColumnView_QBaseSetDirtyRegion(QColumnView* self, const QRegion* region);
    friend void QColumnView_ScrollDirtyRegion(QColumnView* self, int dx, int dy);
    friend void QColumnView_QBaseScrollDirtyRegion(QColumnView* self, int dx, int dy);
    friend QPoint* QColumnView_DirtyRegionOffset(const QColumnView* self);
    friend QPoint* QColumnView_QBaseDirtyRegionOffset(const QColumnView* self);
    friend void QColumnView_StartAutoScroll(QColumnView* self);
    friend void QColumnView_QBaseStartAutoScroll(QColumnView* self);
    friend void QColumnView_StopAutoScroll(QColumnView* self);
    friend void QColumnView_QBaseStopAutoScroll(QColumnView* self);
    friend void QColumnView_DoAutoScroll(QColumnView* self);
    friend void QColumnView_QBaseDoAutoScroll(QColumnView* self);
    friend int QColumnView_DropIndicatorPosition(const QColumnView* self);
    friend int QColumnView_QBaseDropIndicatorPosition(const QColumnView* self);
    friend void QColumnView_SetViewportMargins(QColumnView* self, int left, int top, int right, int bottom);
    friend void QColumnView_QBaseSetViewportMargins(QColumnView* self, int left, int top, int right, int bottom);
    friend QMargins* QColumnView_ViewportMargins(const QColumnView* self);
    friend QMargins* QColumnView_QBaseViewportMargins(const QColumnView* self);
    friend void QColumnView_DrawFrame(QColumnView* self, QPainter* param1);
    friend void QColumnView_QBaseDrawFrame(QColumnView* self, QPainter* param1);
    friend void QColumnView_UpdateMicroFocus(QColumnView* self);
    friend void QColumnView_QBaseUpdateMicroFocus(QColumnView* self);
    friend void QColumnView_Create(QColumnView* self);
    friend void QColumnView_QBaseCreate(QColumnView* self);
    friend void QColumnView_Destroy(QColumnView* self);
    friend void QColumnView_QBaseDestroy(QColumnView* self);
    friend bool QColumnView_FocusNextChild(QColumnView* self);
    friend bool QColumnView_QBaseFocusNextChild(QColumnView* self);
    friend bool QColumnView_FocusPreviousChild(QColumnView* self);
    friend bool QColumnView_QBaseFocusPreviousChild(QColumnView* self);
    friend QObject* QColumnView_Sender(const QColumnView* self);
    friend QObject* QColumnView_QBaseSender(const QColumnView* self);
    friend int QColumnView_SenderSignalIndex(const QColumnView* self);
    friend int QColumnView_QBaseSenderSignalIndex(const QColumnView* self);
    friend int QColumnView_Receivers(const QColumnView* self, const char* signal);
    friend int QColumnView_QBaseReceivers(const QColumnView* self, const char* signal);
    friend bool QColumnView_IsSignalConnected(const QColumnView* self, const QMetaMethod* signal);
    friend bool QColumnView_QBaseIsSignalConnected(const QColumnView* self, const QMetaMethod* signal);
};

#endif
