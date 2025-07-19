#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTITEMVIEW_H
#define SRCC_LIBVIRTUALQABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemView so that we can call protected methods
class VirtualQAbstractItemView final : public QAbstractItemView {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractItemView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QAbstractItemView_Metacall_Callback = int (*)(QAbstractItemView*, int, int, void**);
    using QAbstractItemView_SetModel_Callback = void (*)(QAbstractItemView*, QAbstractItemModel*);
    using QAbstractItemView_SetSelectionModel_Callback = void (*)(QAbstractItemView*, QItemSelectionModel*);
    using QAbstractItemView_KeyboardSearch_Callback = void (*)(QAbstractItemView*, libqt_string);
    using QAbstractItemView_VisualRect_Callback = QRect* (*)(const QAbstractItemView*, QModelIndex*);
    using QAbstractItemView_ScrollTo_Callback = void (*)(QAbstractItemView*, QModelIndex*, int);
    using QAbstractItemView_IndexAt_Callback = QModelIndex* (*)(const QAbstractItemView*, QPoint*);
    using QAbstractItemView_SizeHintForRow_Callback = int (*)(const QAbstractItemView*, int);
    using QAbstractItemView_SizeHintForColumn_Callback = int (*)(const QAbstractItemView*, int);
    using QAbstractItemView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QAbstractItemView*, QModelIndex*);
    using QAbstractItemView_InputMethodQuery_Callback = QVariant* (*)(const QAbstractItemView*, int);
    using QAbstractItemView_Reset_Callback = void (*)();
    using QAbstractItemView_SetRootIndex_Callback = void (*)(QAbstractItemView*, QModelIndex*);
    using QAbstractItemView_DoItemsLayout_Callback = void (*)();
    using QAbstractItemView_SelectAll_Callback = void (*)();
    using QAbstractItemView_DataChanged_Callback = void (*)(QAbstractItemView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QAbstractItemView_RowsInserted_Callback = void (*)(QAbstractItemView*, QModelIndex*, int, int);
    using QAbstractItemView_RowsAboutToBeRemoved_Callback = void (*)(QAbstractItemView*, QModelIndex*, int, int);
    using QAbstractItemView_SelectionChanged_Callback = void (*)(QAbstractItemView*, QItemSelection*, QItemSelection*);
    using QAbstractItemView_CurrentChanged_Callback = void (*)(QAbstractItemView*, QModelIndex*, QModelIndex*);
    using QAbstractItemView_UpdateEditorData_Callback = void (*)();
    using QAbstractItemView_UpdateEditorGeometries_Callback = void (*)();
    using QAbstractItemView_UpdateGeometries_Callback = void (*)();
    using QAbstractItemView_VerticalScrollbarAction_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_HorizontalScrollbarAction_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_VerticalScrollbarValueChanged_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_HorizontalScrollbarValueChanged_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_CloseEditor_Callback = void (*)(QAbstractItemView*, QWidget*, int);
    using QAbstractItemView_CommitData_Callback = void (*)(QAbstractItemView*, QWidget*);
    using QAbstractItemView_EditorDestroyed_Callback = void (*)(QAbstractItemView*, QObject*);
    using QAbstractItemView_MoveCursor_Callback = QModelIndex* (*)(QAbstractItemView*, int, int);
    using QAbstractItemView_HorizontalOffset_Callback = int (*)();
    using QAbstractItemView_VerticalOffset_Callback = int (*)();
    using QAbstractItemView_IsIndexHidden_Callback = bool (*)(const QAbstractItemView*, QModelIndex*);
    using QAbstractItemView_SetSelection_Callback = void (*)(QAbstractItemView*, QRect*, int);
    using QAbstractItemView_VisualRegionForSelection_Callback = QRegion* (*)(const QAbstractItemView*, QItemSelection*);
    using QAbstractItemView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QAbstractItemView_Edit2_Callback = bool (*)(QAbstractItemView*, QModelIndex*, int, QEvent*);
    using QAbstractItemView_SelectionCommand_Callback = int (*)(const QAbstractItemView*, QModelIndex*, QEvent*);
    using QAbstractItemView_StartDrag_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_InitViewItemOption_Callback = void (*)(const QAbstractItemView*, QStyleOptionViewItem*);
    using QAbstractItemView_FocusNextPrevChild_Callback = bool (*)(QAbstractItemView*, bool);
    using QAbstractItemView_Event_Callback = bool (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_ViewportEvent_Callback = bool (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_MousePressEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
    using QAbstractItemView_MouseMoveEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
    using QAbstractItemView_MouseReleaseEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
    using QAbstractItemView_MouseDoubleClickEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
    using QAbstractItemView_DragEnterEvent_Callback = void (*)(QAbstractItemView*, QDragEnterEvent*);
    using QAbstractItemView_DragMoveEvent_Callback = void (*)(QAbstractItemView*, QDragMoveEvent*);
    using QAbstractItemView_DragLeaveEvent_Callback = void (*)(QAbstractItemView*, QDragLeaveEvent*);
    using QAbstractItemView_DropEvent_Callback = void (*)(QAbstractItemView*, QDropEvent*);
    using QAbstractItemView_FocusInEvent_Callback = void (*)(QAbstractItemView*, QFocusEvent*);
    using QAbstractItemView_FocusOutEvent_Callback = void (*)(QAbstractItemView*, QFocusEvent*);
    using QAbstractItemView_KeyPressEvent_Callback = void (*)(QAbstractItemView*, QKeyEvent*);
    using QAbstractItemView_ResizeEvent_Callback = void (*)(QAbstractItemView*, QResizeEvent*);
    using QAbstractItemView_TimerEvent_Callback = void (*)(QAbstractItemView*, QTimerEvent*);
    using QAbstractItemView_InputMethodEvent_Callback = void (*)(QAbstractItemView*, QInputMethodEvent*);
    using QAbstractItemView_EventFilter_Callback = bool (*)(QAbstractItemView*, QObject*, QEvent*);
    using QAbstractItemView_ViewportSizeHint_Callback = QSize* (*)();
    using QAbstractItemView_MinimumSizeHint_Callback = QSize* (*)();
    using QAbstractItemView_SizeHint_Callback = QSize* (*)();
    using QAbstractItemView_SetupViewport_Callback = void (*)(QAbstractItemView*, QWidget*);
    using QAbstractItemView_PaintEvent_Callback = void (*)(QAbstractItemView*, QPaintEvent*);
    using QAbstractItemView_WheelEvent_Callback = void (*)(QAbstractItemView*, QWheelEvent*);
    using QAbstractItemView_ContextMenuEvent_Callback = void (*)(QAbstractItemView*, QContextMenuEvent*);
    using QAbstractItemView_ScrollContentsBy_Callback = void (*)(QAbstractItemView*, int, int);
    using QAbstractItemView_ChangeEvent_Callback = void (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_InitStyleOption_Callback = void (*)(const QAbstractItemView*, QStyleOptionFrame*);
    using QAbstractItemView_DevType_Callback = int (*)();
    using QAbstractItemView_SetVisible_Callback = void (*)(QAbstractItemView*, bool);
    using QAbstractItemView_HeightForWidth_Callback = int (*)(const QAbstractItemView*, int);
    using QAbstractItemView_HasHeightForWidth_Callback = bool (*)();
    using QAbstractItemView_PaintEngine_Callback = QPaintEngine* (*)();
    using QAbstractItemView_KeyReleaseEvent_Callback = void (*)(QAbstractItemView*, QKeyEvent*);
    using QAbstractItemView_EnterEvent_Callback = void (*)(QAbstractItemView*, QEnterEvent*);
    using QAbstractItemView_LeaveEvent_Callback = void (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_MoveEvent_Callback = void (*)(QAbstractItemView*, QMoveEvent*);
    using QAbstractItemView_CloseEvent_Callback = void (*)(QAbstractItemView*, QCloseEvent*);
    using QAbstractItemView_TabletEvent_Callback = void (*)(QAbstractItemView*, QTabletEvent*);
    using QAbstractItemView_ActionEvent_Callback = void (*)(QAbstractItemView*, QActionEvent*);
    using QAbstractItemView_ShowEvent_Callback = void (*)(QAbstractItemView*, QShowEvent*);
    using QAbstractItemView_HideEvent_Callback = void (*)(QAbstractItemView*, QHideEvent*);
    using QAbstractItemView_NativeEvent_Callback = bool (*)(QAbstractItemView*, libqt_string, void*, intptr_t*);
    using QAbstractItemView_Metric_Callback = int (*)(const QAbstractItemView*, int);
    using QAbstractItemView_InitPainter_Callback = void (*)(const QAbstractItemView*, QPainter*);
    using QAbstractItemView_Redirected_Callback = QPaintDevice* (*)(const QAbstractItemView*, QPoint*);
    using QAbstractItemView_SharedPainter_Callback = QPainter* (*)();
    using QAbstractItemView_ChildEvent_Callback = void (*)(QAbstractItemView*, QChildEvent*);
    using QAbstractItemView_CustomEvent_Callback = void (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_ConnectNotify_Callback = void (*)(QAbstractItemView*, QMetaMethod*);
    using QAbstractItemView_DisconnectNotify_Callback = void (*)(QAbstractItemView*, QMetaMethod*);
    using QAbstractItemView_State_Callback = int (*)();
    using QAbstractItemView_SetState_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QAbstractItemView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QAbstractItemView_SetDirtyRegion_Callback = void (*)(QAbstractItemView*, QRegion*);
    using QAbstractItemView_ScrollDirtyRegion_Callback = void (*)(QAbstractItemView*, int, int);
    using QAbstractItemView_DirtyRegionOffset_Callback = QPoint* (*)();
    using QAbstractItemView_StartAutoScroll_Callback = void (*)();
    using QAbstractItemView_StopAutoScroll_Callback = void (*)();
    using QAbstractItemView_DoAutoScroll_Callback = void (*)();
    using QAbstractItemView_DropIndicatorPosition_Callback = int (*)();
    using QAbstractItemView_SetViewportMargins_Callback = void (*)(QAbstractItemView*, int, int, int, int);
    using QAbstractItemView_ViewportMargins_Callback = QMargins* (*)();
    using QAbstractItemView_DrawFrame_Callback = void (*)(QAbstractItemView*, QPainter*);
    using QAbstractItemView_UpdateMicroFocus_Callback = void (*)();
    using QAbstractItemView_Create_Callback = void (*)();
    using QAbstractItemView_Destroy_Callback = void (*)();
    using QAbstractItemView_FocusNextChild_Callback = bool (*)();
    using QAbstractItemView_FocusPreviousChild_Callback = bool (*)();
    using QAbstractItemView_Sender_Callback = QObject* (*)();
    using QAbstractItemView_SenderSignalIndex_Callback = int (*)();
    using QAbstractItemView_Receivers_Callback = int (*)(const QAbstractItemView*, const char*);
    using QAbstractItemView_IsSignalConnected_Callback = bool (*)(const QAbstractItemView*, QMetaMethod*);
    using QAbstractItemView_GetDecodedMetricF_Callback = double (*)(const QAbstractItemView*, int, int);

  protected:
    // Instance callback storage
    QAbstractItemView_Metacall_Callback qabstractitemview_metacall_callback = nullptr;
    QAbstractItemView_SetModel_Callback qabstractitemview_setmodel_callback = nullptr;
    QAbstractItemView_SetSelectionModel_Callback qabstractitemview_setselectionmodel_callback = nullptr;
    QAbstractItemView_KeyboardSearch_Callback qabstractitemview_keyboardsearch_callback = nullptr;
    QAbstractItemView_VisualRect_Callback qabstractitemview_visualrect_callback = nullptr;
    QAbstractItemView_ScrollTo_Callback qabstractitemview_scrollto_callback = nullptr;
    QAbstractItemView_IndexAt_Callback qabstractitemview_indexat_callback = nullptr;
    QAbstractItemView_SizeHintForRow_Callback qabstractitemview_sizehintforrow_callback = nullptr;
    QAbstractItemView_SizeHintForColumn_Callback qabstractitemview_sizehintforcolumn_callback = nullptr;
    QAbstractItemView_ItemDelegateForIndex_Callback qabstractitemview_itemdelegateforindex_callback = nullptr;
    QAbstractItemView_InputMethodQuery_Callback qabstractitemview_inputmethodquery_callback = nullptr;
    QAbstractItemView_Reset_Callback qabstractitemview_reset_callback = nullptr;
    QAbstractItemView_SetRootIndex_Callback qabstractitemview_setrootindex_callback = nullptr;
    QAbstractItemView_DoItemsLayout_Callback qabstractitemview_doitemslayout_callback = nullptr;
    QAbstractItemView_SelectAll_Callback qabstractitemview_selectall_callback = nullptr;
    QAbstractItemView_DataChanged_Callback qabstractitemview_datachanged_callback = nullptr;
    QAbstractItemView_RowsInserted_Callback qabstractitemview_rowsinserted_callback = nullptr;
    QAbstractItemView_RowsAboutToBeRemoved_Callback qabstractitemview_rowsabouttoberemoved_callback = nullptr;
    QAbstractItemView_SelectionChanged_Callback qabstractitemview_selectionchanged_callback = nullptr;
    QAbstractItemView_CurrentChanged_Callback qabstractitemview_currentchanged_callback = nullptr;
    QAbstractItemView_UpdateEditorData_Callback qabstractitemview_updateeditordata_callback = nullptr;
    QAbstractItemView_UpdateEditorGeometries_Callback qabstractitemview_updateeditorgeometries_callback = nullptr;
    QAbstractItemView_UpdateGeometries_Callback qabstractitemview_updategeometries_callback = nullptr;
    QAbstractItemView_VerticalScrollbarAction_Callback qabstractitemview_verticalscrollbaraction_callback = nullptr;
    QAbstractItemView_HorizontalScrollbarAction_Callback qabstractitemview_horizontalscrollbaraction_callback = nullptr;
    QAbstractItemView_VerticalScrollbarValueChanged_Callback qabstractitemview_verticalscrollbarvaluechanged_callback = nullptr;
    QAbstractItemView_HorizontalScrollbarValueChanged_Callback qabstractitemview_horizontalscrollbarvaluechanged_callback = nullptr;
    QAbstractItemView_CloseEditor_Callback qabstractitemview_closeeditor_callback = nullptr;
    QAbstractItemView_CommitData_Callback qabstractitemview_commitdata_callback = nullptr;
    QAbstractItemView_EditorDestroyed_Callback qabstractitemview_editordestroyed_callback = nullptr;
    QAbstractItemView_MoveCursor_Callback qabstractitemview_movecursor_callback = nullptr;
    QAbstractItemView_HorizontalOffset_Callback qabstractitemview_horizontaloffset_callback = nullptr;
    QAbstractItemView_VerticalOffset_Callback qabstractitemview_verticaloffset_callback = nullptr;
    QAbstractItemView_IsIndexHidden_Callback qabstractitemview_isindexhidden_callback = nullptr;
    QAbstractItemView_SetSelection_Callback qabstractitemview_setselection_callback = nullptr;
    QAbstractItemView_VisualRegionForSelection_Callback qabstractitemview_visualregionforselection_callback = nullptr;
    QAbstractItemView_SelectedIndexes_Callback qabstractitemview_selectedindexes_callback = nullptr;
    QAbstractItemView_Edit2_Callback qabstractitemview_edit2_callback = nullptr;
    QAbstractItemView_SelectionCommand_Callback qabstractitemview_selectioncommand_callback = nullptr;
    QAbstractItemView_StartDrag_Callback qabstractitemview_startdrag_callback = nullptr;
    QAbstractItemView_InitViewItemOption_Callback qabstractitemview_initviewitemoption_callback = nullptr;
    QAbstractItemView_FocusNextPrevChild_Callback qabstractitemview_focusnextprevchild_callback = nullptr;
    QAbstractItemView_Event_Callback qabstractitemview_event_callback = nullptr;
    QAbstractItemView_ViewportEvent_Callback qabstractitemview_viewportevent_callback = nullptr;
    QAbstractItemView_MousePressEvent_Callback qabstractitemview_mousepressevent_callback = nullptr;
    QAbstractItemView_MouseMoveEvent_Callback qabstractitemview_mousemoveevent_callback = nullptr;
    QAbstractItemView_MouseReleaseEvent_Callback qabstractitemview_mousereleaseevent_callback = nullptr;
    QAbstractItemView_MouseDoubleClickEvent_Callback qabstractitemview_mousedoubleclickevent_callback = nullptr;
    QAbstractItemView_DragEnterEvent_Callback qabstractitemview_dragenterevent_callback = nullptr;
    QAbstractItemView_DragMoveEvent_Callback qabstractitemview_dragmoveevent_callback = nullptr;
    QAbstractItemView_DragLeaveEvent_Callback qabstractitemview_dragleaveevent_callback = nullptr;
    QAbstractItemView_DropEvent_Callback qabstractitemview_dropevent_callback = nullptr;
    QAbstractItemView_FocusInEvent_Callback qabstractitemview_focusinevent_callback = nullptr;
    QAbstractItemView_FocusOutEvent_Callback qabstractitemview_focusoutevent_callback = nullptr;
    QAbstractItemView_KeyPressEvent_Callback qabstractitemview_keypressevent_callback = nullptr;
    QAbstractItemView_ResizeEvent_Callback qabstractitemview_resizeevent_callback = nullptr;
    QAbstractItemView_TimerEvent_Callback qabstractitemview_timerevent_callback = nullptr;
    QAbstractItemView_InputMethodEvent_Callback qabstractitemview_inputmethodevent_callback = nullptr;
    QAbstractItemView_EventFilter_Callback qabstractitemview_eventfilter_callback = nullptr;
    QAbstractItemView_ViewportSizeHint_Callback qabstractitemview_viewportsizehint_callback = nullptr;
    QAbstractItemView_MinimumSizeHint_Callback qabstractitemview_minimumsizehint_callback = nullptr;
    QAbstractItemView_SizeHint_Callback qabstractitemview_sizehint_callback = nullptr;
    QAbstractItemView_SetupViewport_Callback qabstractitemview_setupviewport_callback = nullptr;
    QAbstractItemView_PaintEvent_Callback qabstractitemview_paintevent_callback = nullptr;
    QAbstractItemView_WheelEvent_Callback qabstractitemview_wheelevent_callback = nullptr;
    QAbstractItemView_ContextMenuEvent_Callback qabstractitemview_contextmenuevent_callback = nullptr;
    QAbstractItemView_ScrollContentsBy_Callback qabstractitemview_scrollcontentsby_callback = nullptr;
    QAbstractItemView_ChangeEvent_Callback qabstractitemview_changeevent_callback = nullptr;
    QAbstractItemView_InitStyleOption_Callback qabstractitemview_initstyleoption_callback = nullptr;
    QAbstractItemView_DevType_Callback qabstractitemview_devtype_callback = nullptr;
    QAbstractItemView_SetVisible_Callback qabstractitemview_setvisible_callback = nullptr;
    QAbstractItemView_HeightForWidth_Callback qabstractitemview_heightforwidth_callback = nullptr;
    QAbstractItemView_HasHeightForWidth_Callback qabstractitemview_hasheightforwidth_callback = nullptr;
    QAbstractItemView_PaintEngine_Callback qabstractitemview_paintengine_callback = nullptr;
    QAbstractItemView_KeyReleaseEvent_Callback qabstractitemview_keyreleaseevent_callback = nullptr;
    QAbstractItemView_EnterEvent_Callback qabstractitemview_enterevent_callback = nullptr;
    QAbstractItemView_LeaveEvent_Callback qabstractitemview_leaveevent_callback = nullptr;
    QAbstractItemView_MoveEvent_Callback qabstractitemview_moveevent_callback = nullptr;
    QAbstractItemView_CloseEvent_Callback qabstractitemview_closeevent_callback = nullptr;
    QAbstractItemView_TabletEvent_Callback qabstractitemview_tabletevent_callback = nullptr;
    QAbstractItemView_ActionEvent_Callback qabstractitemview_actionevent_callback = nullptr;
    QAbstractItemView_ShowEvent_Callback qabstractitemview_showevent_callback = nullptr;
    QAbstractItemView_HideEvent_Callback qabstractitemview_hideevent_callback = nullptr;
    QAbstractItemView_NativeEvent_Callback qabstractitemview_nativeevent_callback = nullptr;
    QAbstractItemView_Metric_Callback qabstractitemview_metric_callback = nullptr;
    QAbstractItemView_InitPainter_Callback qabstractitemview_initpainter_callback = nullptr;
    QAbstractItemView_Redirected_Callback qabstractitemview_redirected_callback = nullptr;
    QAbstractItemView_SharedPainter_Callback qabstractitemview_sharedpainter_callback = nullptr;
    QAbstractItemView_ChildEvent_Callback qabstractitemview_childevent_callback = nullptr;
    QAbstractItemView_CustomEvent_Callback qabstractitemview_customevent_callback = nullptr;
    QAbstractItemView_ConnectNotify_Callback qabstractitemview_connectnotify_callback = nullptr;
    QAbstractItemView_DisconnectNotify_Callback qabstractitemview_disconnectnotify_callback = nullptr;
    QAbstractItemView_State_Callback qabstractitemview_state_callback = nullptr;
    QAbstractItemView_SetState_Callback qabstractitemview_setstate_callback = nullptr;
    QAbstractItemView_ScheduleDelayedItemsLayout_Callback qabstractitemview_scheduledelayeditemslayout_callback = nullptr;
    QAbstractItemView_ExecuteDelayedItemsLayout_Callback qabstractitemview_executedelayeditemslayout_callback = nullptr;
    QAbstractItemView_SetDirtyRegion_Callback qabstractitemview_setdirtyregion_callback = nullptr;
    QAbstractItemView_ScrollDirtyRegion_Callback qabstractitemview_scrolldirtyregion_callback = nullptr;
    QAbstractItemView_DirtyRegionOffset_Callback qabstractitemview_dirtyregionoffset_callback = nullptr;
    QAbstractItemView_StartAutoScroll_Callback qabstractitemview_startautoscroll_callback = nullptr;
    QAbstractItemView_StopAutoScroll_Callback qabstractitemview_stopautoscroll_callback = nullptr;
    QAbstractItemView_DoAutoScroll_Callback qabstractitemview_doautoscroll_callback = nullptr;
    QAbstractItemView_DropIndicatorPosition_Callback qabstractitemview_dropindicatorposition_callback = nullptr;
    QAbstractItemView_SetViewportMargins_Callback qabstractitemview_setviewportmargins_callback = nullptr;
    QAbstractItemView_ViewportMargins_Callback qabstractitemview_viewportmargins_callback = nullptr;
    QAbstractItemView_DrawFrame_Callback qabstractitemview_drawframe_callback = nullptr;
    QAbstractItemView_UpdateMicroFocus_Callback qabstractitemview_updatemicrofocus_callback = nullptr;
    QAbstractItemView_Create_Callback qabstractitemview_create_callback = nullptr;
    QAbstractItemView_Destroy_Callback qabstractitemview_destroy_callback = nullptr;
    QAbstractItemView_FocusNextChild_Callback qabstractitemview_focusnextchild_callback = nullptr;
    QAbstractItemView_FocusPreviousChild_Callback qabstractitemview_focuspreviouschild_callback = nullptr;
    QAbstractItemView_Sender_Callback qabstractitemview_sender_callback = nullptr;
    QAbstractItemView_SenderSignalIndex_Callback qabstractitemview_sendersignalindex_callback = nullptr;
    QAbstractItemView_Receivers_Callback qabstractitemview_receivers_callback = nullptr;
    QAbstractItemView_IsSignalConnected_Callback qabstractitemview_issignalconnected_callback = nullptr;
    QAbstractItemView_GetDecodedMetricF_Callback qabstractitemview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qabstractitemview_metacall_isbase = false;
    mutable bool qabstractitemview_setmodel_isbase = false;
    mutable bool qabstractitemview_setselectionmodel_isbase = false;
    mutable bool qabstractitemview_keyboardsearch_isbase = false;
    mutable bool qabstractitemview_visualrect_isbase = false;
    mutable bool qabstractitemview_scrollto_isbase = false;
    mutable bool qabstractitemview_indexat_isbase = false;
    mutable bool qabstractitemview_sizehintforrow_isbase = false;
    mutable bool qabstractitemview_sizehintforcolumn_isbase = false;
    mutable bool qabstractitemview_itemdelegateforindex_isbase = false;
    mutable bool qabstractitemview_inputmethodquery_isbase = false;
    mutable bool qabstractitemview_reset_isbase = false;
    mutable bool qabstractitemview_setrootindex_isbase = false;
    mutable bool qabstractitemview_doitemslayout_isbase = false;
    mutable bool qabstractitemview_selectall_isbase = false;
    mutable bool qabstractitemview_datachanged_isbase = false;
    mutable bool qabstractitemview_rowsinserted_isbase = false;
    mutable bool qabstractitemview_rowsabouttoberemoved_isbase = false;
    mutable bool qabstractitemview_selectionchanged_isbase = false;
    mutable bool qabstractitemview_currentchanged_isbase = false;
    mutable bool qabstractitemview_updateeditordata_isbase = false;
    mutable bool qabstractitemview_updateeditorgeometries_isbase = false;
    mutable bool qabstractitemview_updategeometries_isbase = false;
    mutable bool qabstractitemview_verticalscrollbaraction_isbase = false;
    mutable bool qabstractitemview_horizontalscrollbaraction_isbase = false;
    mutable bool qabstractitemview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qabstractitemview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qabstractitemview_closeeditor_isbase = false;
    mutable bool qabstractitemview_commitdata_isbase = false;
    mutable bool qabstractitemview_editordestroyed_isbase = false;
    mutable bool qabstractitemview_movecursor_isbase = false;
    mutable bool qabstractitemview_horizontaloffset_isbase = false;
    mutable bool qabstractitemview_verticaloffset_isbase = false;
    mutable bool qabstractitemview_isindexhidden_isbase = false;
    mutable bool qabstractitemview_setselection_isbase = false;
    mutable bool qabstractitemview_visualregionforselection_isbase = false;
    mutable bool qabstractitemview_selectedindexes_isbase = false;
    mutable bool qabstractitemview_edit2_isbase = false;
    mutable bool qabstractitemview_selectioncommand_isbase = false;
    mutable bool qabstractitemview_startdrag_isbase = false;
    mutable bool qabstractitemview_initviewitemoption_isbase = false;
    mutable bool qabstractitemview_focusnextprevchild_isbase = false;
    mutable bool qabstractitemview_event_isbase = false;
    mutable bool qabstractitemview_viewportevent_isbase = false;
    mutable bool qabstractitemview_mousepressevent_isbase = false;
    mutable bool qabstractitemview_mousemoveevent_isbase = false;
    mutable bool qabstractitemview_mousereleaseevent_isbase = false;
    mutable bool qabstractitemview_mousedoubleclickevent_isbase = false;
    mutable bool qabstractitemview_dragenterevent_isbase = false;
    mutable bool qabstractitemview_dragmoveevent_isbase = false;
    mutable bool qabstractitemview_dragleaveevent_isbase = false;
    mutable bool qabstractitemview_dropevent_isbase = false;
    mutable bool qabstractitemview_focusinevent_isbase = false;
    mutable bool qabstractitemview_focusoutevent_isbase = false;
    mutable bool qabstractitemview_keypressevent_isbase = false;
    mutable bool qabstractitemview_resizeevent_isbase = false;
    mutable bool qabstractitemview_timerevent_isbase = false;
    mutable bool qabstractitemview_inputmethodevent_isbase = false;
    mutable bool qabstractitemview_eventfilter_isbase = false;
    mutable bool qabstractitemview_viewportsizehint_isbase = false;
    mutable bool qabstractitemview_minimumsizehint_isbase = false;
    mutable bool qabstractitemview_sizehint_isbase = false;
    mutable bool qabstractitemview_setupviewport_isbase = false;
    mutable bool qabstractitemview_paintevent_isbase = false;
    mutable bool qabstractitemview_wheelevent_isbase = false;
    mutable bool qabstractitemview_contextmenuevent_isbase = false;
    mutable bool qabstractitemview_scrollcontentsby_isbase = false;
    mutable bool qabstractitemview_changeevent_isbase = false;
    mutable bool qabstractitemview_initstyleoption_isbase = false;
    mutable bool qabstractitemview_devtype_isbase = false;
    mutable bool qabstractitemview_setvisible_isbase = false;
    mutable bool qabstractitemview_heightforwidth_isbase = false;
    mutable bool qabstractitemview_hasheightforwidth_isbase = false;
    mutable bool qabstractitemview_paintengine_isbase = false;
    mutable bool qabstractitemview_keyreleaseevent_isbase = false;
    mutable bool qabstractitemview_enterevent_isbase = false;
    mutable bool qabstractitemview_leaveevent_isbase = false;
    mutable bool qabstractitemview_moveevent_isbase = false;
    mutable bool qabstractitemview_closeevent_isbase = false;
    mutable bool qabstractitemview_tabletevent_isbase = false;
    mutable bool qabstractitemview_actionevent_isbase = false;
    mutable bool qabstractitemview_showevent_isbase = false;
    mutable bool qabstractitemview_hideevent_isbase = false;
    mutable bool qabstractitemview_nativeevent_isbase = false;
    mutable bool qabstractitemview_metric_isbase = false;
    mutable bool qabstractitemview_initpainter_isbase = false;
    mutable bool qabstractitemview_redirected_isbase = false;
    mutable bool qabstractitemview_sharedpainter_isbase = false;
    mutable bool qabstractitemview_childevent_isbase = false;
    mutable bool qabstractitemview_customevent_isbase = false;
    mutable bool qabstractitemview_connectnotify_isbase = false;
    mutable bool qabstractitemview_disconnectnotify_isbase = false;
    mutable bool qabstractitemview_state_isbase = false;
    mutable bool qabstractitemview_setstate_isbase = false;
    mutable bool qabstractitemview_scheduledelayeditemslayout_isbase = false;
    mutable bool qabstractitemview_executedelayeditemslayout_isbase = false;
    mutable bool qabstractitemview_setdirtyregion_isbase = false;
    mutable bool qabstractitemview_scrolldirtyregion_isbase = false;
    mutable bool qabstractitemview_dirtyregionoffset_isbase = false;
    mutable bool qabstractitemview_startautoscroll_isbase = false;
    mutable bool qabstractitemview_stopautoscroll_isbase = false;
    mutable bool qabstractitemview_doautoscroll_isbase = false;
    mutable bool qabstractitemview_dropindicatorposition_isbase = false;
    mutable bool qabstractitemview_setviewportmargins_isbase = false;
    mutable bool qabstractitemview_viewportmargins_isbase = false;
    mutable bool qabstractitemview_drawframe_isbase = false;
    mutable bool qabstractitemview_updatemicrofocus_isbase = false;
    mutable bool qabstractitemview_create_isbase = false;
    mutable bool qabstractitemview_destroy_isbase = false;
    mutable bool qabstractitemview_focusnextchild_isbase = false;
    mutable bool qabstractitemview_focuspreviouschild_isbase = false;
    mutable bool qabstractitemview_sender_isbase = false;
    mutable bool qabstractitemview_sendersignalindex_isbase = false;
    mutable bool qabstractitemview_receivers_isbase = false;
    mutable bool qabstractitemview_issignalconnected_isbase = false;
    mutable bool qabstractitemview_getdecodedmetricf_isbase = false;

  public:
    VirtualQAbstractItemView(QWidget* parent) : QAbstractItemView(parent) {};
    VirtualQAbstractItemView() : QAbstractItemView() {};

    ~VirtualQAbstractItemView() {
        qabstractitemview_metacall_callback = nullptr;
        qabstractitemview_setmodel_callback = nullptr;
        qabstractitemview_setselectionmodel_callback = nullptr;
        qabstractitemview_keyboardsearch_callback = nullptr;
        qabstractitemview_visualrect_callback = nullptr;
        qabstractitemview_scrollto_callback = nullptr;
        qabstractitemview_indexat_callback = nullptr;
        qabstractitemview_sizehintforrow_callback = nullptr;
        qabstractitemview_sizehintforcolumn_callback = nullptr;
        qabstractitemview_itemdelegateforindex_callback = nullptr;
        qabstractitemview_inputmethodquery_callback = nullptr;
        qabstractitemview_reset_callback = nullptr;
        qabstractitemview_setrootindex_callback = nullptr;
        qabstractitemview_doitemslayout_callback = nullptr;
        qabstractitemview_selectall_callback = nullptr;
        qabstractitemview_datachanged_callback = nullptr;
        qabstractitemview_rowsinserted_callback = nullptr;
        qabstractitemview_rowsabouttoberemoved_callback = nullptr;
        qabstractitemview_selectionchanged_callback = nullptr;
        qabstractitemview_currentchanged_callback = nullptr;
        qabstractitemview_updateeditordata_callback = nullptr;
        qabstractitemview_updateeditorgeometries_callback = nullptr;
        qabstractitemview_updategeometries_callback = nullptr;
        qabstractitemview_verticalscrollbaraction_callback = nullptr;
        qabstractitemview_horizontalscrollbaraction_callback = nullptr;
        qabstractitemview_verticalscrollbarvaluechanged_callback = nullptr;
        qabstractitemview_horizontalscrollbarvaluechanged_callback = nullptr;
        qabstractitemview_closeeditor_callback = nullptr;
        qabstractitemview_commitdata_callback = nullptr;
        qabstractitemview_editordestroyed_callback = nullptr;
        qabstractitemview_movecursor_callback = nullptr;
        qabstractitemview_horizontaloffset_callback = nullptr;
        qabstractitemview_verticaloffset_callback = nullptr;
        qabstractitemview_isindexhidden_callback = nullptr;
        qabstractitemview_setselection_callback = nullptr;
        qabstractitemview_visualregionforselection_callback = nullptr;
        qabstractitemview_selectedindexes_callback = nullptr;
        qabstractitemview_edit2_callback = nullptr;
        qabstractitemview_selectioncommand_callback = nullptr;
        qabstractitemview_startdrag_callback = nullptr;
        qabstractitemview_initviewitemoption_callback = nullptr;
        qabstractitemview_focusnextprevchild_callback = nullptr;
        qabstractitemview_event_callback = nullptr;
        qabstractitemview_viewportevent_callback = nullptr;
        qabstractitemview_mousepressevent_callback = nullptr;
        qabstractitemview_mousemoveevent_callback = nullptr;
        qabstractitemview_mousereleaseevent_callback = nullptr;
        qabstractitemview_mousedoubleclickevent_callback = nullptr;
        qabstractitemview_dragenterevent_callback = nullptr;
        qabstractitemview_dragmoveevent_callback = nullptr;
        qabstractitemview_dragleaveevent_callback = nullptr;
        qabstractitemview_dropevent_callback = nullptr;
        qabstractitemview_focusinevent_callback = nullptr;
        qabstractitemview_focusoutevent_callback = nullptr;
        qabstractitemview_keypressevent_callback = nullptr;
        qabstractitemview_resizeevent_callback = nullptr;
        qabstractitemview_timerevent_callback = nullptr;
        qabstractitemview_inputmethodevent_callback = nullptr;
        qabstractitemview_eventfilter_callback = nullptr;
        qabstractitemview_viewportsizehint_callback = nullptr;
        qabstractitemview_minimumsizehint_callback = nullptr;
        qabstractitemview_sizehint_callback = nullptr;
        qabstractitemview_setupviewport_callback = nullptr;
        qabstractitemview_paintevent_callback = nullptr;
        qabstractitemview_wheelevent_callback = nullptr;
        qabstractitemview_contextmenuevent_callback = nullptr;
        qabstractitemview_scrollcontentsby_callback = nullptr;
        qabstractitemview_changeevent_callback = nullptr;
        qabstractitemview_initstyleoption_callback = nullptr;
        qabstractitemview_devtype_callback = nullptr;
        qabstractitemview_setvisible_callback = nullptr;
        qabstractitemview_heightforwidth_callback = nullptr;
        qabstractitemview_hasheightforwidth_callback = nullptr;
        qabstractitemview_paintengine_callback = nullptr;
        qabstractitemview_keyreleaseevent_callback = nullptr;
        qabstractitemview_enterevent_callback = nullptr;
        qabstractitemview_leaveevent_callback = nullptr;
        qabstractitemview_moveevent_callback = nullptr;
        qabstractitemview_closeevent_callback = nullptr;
        qabstractitemview_tabletevent_callback = nullptr;
        qabstractitemview_actionevent_callback = nullptr;
        qabstractitemview_showevent_callback = nullptr;
        qabstractitemview_hideevent_callback = nullptr;
        qabstractitemview_nativeevent_callback = nullptr;
        qabstractitemview_metric_callback = nullptr;
        qabstractitemview_initpainter_callback = nullptr;
        qabstractitemview_redirected_callback = nullptr;
        qabstractitemview_sharedpainter_callback = nullptr;
        qabstractitemview_childevent_callback = nullptr;
        qabstractitemview_customevent_callback = nullptr;
        qabstractitemview_connectnotify_callback = nullptr;
        qabstractitemview_disconnectnotify_callback = nullptr;
        qabstractitemview_state_callback = nullptr;
        qabstractitemview_setstate_callback = nullptr;
        qabstractitemview_scheduledelayeditemslayout_callback = nullptr;
        qabstractitemview_executedelayeditemslayout_callback = nullptr;
        qabstractitemview_setdirtyregion_callback = nullptr;
        qabstractitemview_scrolldirtyregion_callback = nullptr;
        qabstractitemview_dirtyregionoffset_callback = nullptr;
        qabstractitemview_startautoscroll_callback = nullptr;
        qabstractitemview_stopautoscroll_callback = nullptr;
        qabstractitemview_doautoscroll_callback = nullptr;
        qabstractitemview_dropindicatorposition_callback = nullptr;
        qabstractitemview_setviewportmargins_callback = nullptr;
        qabstractitemview_viewportmargins_callback = nullptr;
        qabstractitemview_drawframe_callback = nullptr;
        qabstractitemview_updatemicrofocus_callback = nullptr;
        qabstractitemview_create_callback = nullptr;
        qabstractitemview_destroy_callback = nullptr;
        qabstractitemview_focusnextchild_callback = nullptr;
        qabstractitemview_focuspreviouschild_callback = nullptr;
        qabstractitemview_sender_callback = nullptr;
        qabstractitemview_sendersignalindex_callback = nullptr;
        qabstractitemview_receivers_callback = nullptr;
        qabstractitemview_issignalconnected_callback = nullptr;
        qabstractitemview_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractItemView_Metacall_Callback(QAbstractItemView_Metacall_Callback cb) { qabstractitemview_metacall_callback = cb; }
    inline void setQAbstractItemView_SetModel_Callback(QAbstractItemView_SetModel_Callback cb) { qabstractitemview_setmodel_callback = cb; }
    inline void setQAbstractItemView_SetSelectionModel_Callback(QAbstractItemView_SetSelectionModel_Callback cb) { qabstractitemview_setselectionmodel_callback = cb; }
    inline void setQAbstractItemView_KeyboardSearch_Callback(QAbstractItemView_KeyboardSearch_Callback cb) { qabstractitemview_keyboardsearch_callback = cb; }
    inline void setQAbstractItemView_VisualRect_Callback(QAbstractItemView_VisualRect_Callback cb) { qabstractitemview_visualrect_callback = cb; }
    inline void setQAbstractItemView_ScrollTo_Callback(QAbstractItemView_ScrollTo_Callback cb) { qabstractitemview_scrollto_callback = cb; }
    inline void setQAbstractItemView_IndexAt_Callback(QAbstractItemView_IndexAt_Callback cb) { qabstractitemview_indexat_callback = cb; }
    inline void setQAbstractItemView_SizeHintForRow_Callback(QAbstractItemView_SizeHintForRow_Callback cb) { qabstractitemview_sizehintforrow_callback = cb; }
    inline void setQAbstractItemView_SizeHintForColumn_Callback(QAbstractItemView_SizeHintForColumn_Callback cb) { qabstractitemview_sizehintforcolumn_callback = cb; }
    inline void setQAbstractItemView_ItemDelegateForIndex_Callback(QAbstractItemView_ItemDelegateForIndex_Callback cb) { qabstractitemview_itemdelegateforindex_callback = cb; }
    inline void setQAbstractItemView_InputMethodQuery_Callback(QAbstractItemView_InputMethodQuery_Callback cb) { qabstractitemview_inputmethodquery_callback = cb; }
    inline void setQAbstractItemView_Reset_Callback(QAbstractItemView_Reset_Callback cb) { qabstractitemview_reset_callback = cb; }
    inline void setQAbstractItemView_SetRootIndex_Callback(QAbstractItemView_SetRootIndex_Callback cb) { qabstractitemview_setrootindex_callback = cb; }
    inline void setQAbstractItemView_DoItemsLayout_Callback(QAbstractItemView_DoItemsLayout_Callback cb) { qabstractitemview_doitemslayout_callback = cb; }
    inline void setQAbstractItemView_SelectAll_Callback(QAbstractItemView_SelectAll_Callback cb) { qabstractitemview_selectall_callback = cb; }
    inline void setQAbstractItemView_DataChanged_Callback(QAbstractItemView_DataChanged_Callback cb) { qabstractitemview_datachanged_callback = cb; }
    inline void setQAbstractItemView_RowsInserted_Callback(QAbstractItemView_RowsInserted_Callback cb) { qabstractitemview_rowsinserted_callback = cb; }
    inline void setQAbstractItemView_RowsAboutToBeRemoved_Callback(QAbstractItemView_RowsAboutToBeRemoved_Callback cb) { qabstractitemview_rowsabouttoberemoved_callback = cb; }
    inline void setQAbstractItemView_SelectionChanged_Callback(QAbstractItemView_SelectionChanged_Callback cb) { qabstractitemview_selectionchanged_callback = cb; }
    inline void setQAbstractItemView_CurrentChanged_Callback(QAbstractItemView_CurrentChanged_Callback cb) { qabstractitemview_currentchanged_callback = cb; }
    inline void setQAbstractItemView_UpdateEditorData_Callback(QAbstractItemView_UpdateEditorData_Callback cb) { qabstractitemview_updateeditordata_callback = cb; }
    inline void setQAbstractItemView_UpdateEditorGeometries_Callback(QAbstractItemView_UpdateEditorGeometries_Callback cb) { qabstractitemview_updateeditorgeometries_callback = cb; }
    inline void setQAbstractItemView_UpdateGeometries_Callback(QAbstractItemView_UpdateGeometries_Callback cb) { qabstractitemview_updategeometries_callback = cb; }
    inline void setQAbstractItemView_VerticalScrollbarAction_Callback(QAbstractItemView_VerticalScrollbarAction_Callback cb) { qabstractitemview_verticalscrollbaraction_callback = cb; }
    inline void setQAbstractItemView_HorizontalScrollbarAction_Callback(QAbstractItemView_HorizontalScrollbarAction_Callback cb) { qabstractitemview_horizontalscrollbaraction_callback = cb; }
    inline void setQAbstractItemView_VerticalScrollbarValueChanged_Callback(QAbstractItemView_VerticalScrollbarValueChanged_Callback cb) { qabstractitemview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQAbstractItemView_HorizontalScrollbarValueChanged_Callback(QAbstractItemView_HorizontalScrollbarValueChanged_Callback cb) { qabstractitemview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQAbstractItemView_CloseEditor_Callback(QAbstractItemView_CloseEditor_Callback cb) { qabstractitemview_closeeditor_callback = cb; }
    inline void setQAbstractItemView_CommitData_Callback(QAbstractItemView_CommitData_Callback cb) { qabstractitemview_commitdata_callback = cb; }
    inline void setQAbstractItemView_EditorDestroyed_Callback(QAbstractItemView_EditorDestroyed_Callback cb) { qabstractitemview_editordestroyed_callback = cb; }
    inline void setQAbstractItemView_MoveCursor_Callback(QAbstractItemView_MoveCursor_Callback cb) { qabstractitemview_movecursor_callback = cb; }
    inline void setQAbstractItemView_HorizontalOffset_Callback(QAbstractItemView_HorizontalOffset_Callback cb) { qabstractitemview_horizontaloffset_callback = cb; }
    inline void setQAbstractItemView_VerticalOffset_Callback(QAbstractItemView_VerticalOffset_Callback cb) { qabstractitemview_verticaloffset_callback = cb; }
    inline void setQAbstractItemView_IsIndexHidden_Callback(QAbstractItemView_IsIndexHidden_Callback cb) { qabstractitemview_isindexhidden_callback = cb; }
    inline void setQAbstractItemView_SetSelection_Callback(QAbstractItemView_SetSelection_Callback cb) { qabstractitemview_setselection_callback = cb; }
    inline void setQAbstractItemView_VisualRegionForSelection_Callback(QAbstractItemView_VisualRegionForSelection_Callback cb) { qabstractitemview_visualregionforselection_callback = cb; }
    inline void setQAbstractItemView_SelectedIndexes_Callback(QAbstractItemView_SelectedIndexes_Callback cb) { qabstractitemview_selectedindexes_callback = cb; }
    inline void setQAbstractItemView_Edit2_Callback(QAbstractItemView_Edit2_Callback cb) { qabstractitemview_edit2_callback = cb; }
    inline void setQAbstractItemView_SelectionCommand_Callback(QAbstractItemView_SelectionCommand_Callback cb) { qabstractitemview_selectioncommand_callback = cb; }
    inline void setQAbstractItemView_StartDrag_Callback(QAbstractItemView_StartDrag_Callback cb) { qabstractitemview_startdrag_callback = cb; }
    inline void setQAbstractItemView_InitViewItemOption_Callback(QAbstractItemView_InitViewItemOption_Callback cb) { qabstractitemview_initviewitemoption_callback = cb; }
    inline void setQAbstractItemView_FocusNextPrevChild_Callback(QAbstractItemView_FocusNextPrevChild_Callback cb) { qabstractitemview_focusnextprevchild_callback = cb; }
    inline void setQAbstractItemView_Event_Callback(QAbstractItemView_Event_Callback cb) { qabstractitemview_event_callback = cb; }
    inline void setQAbstractItemView_ViewportEvent_Callback(QAbstractItemView_ViewportEvent_Callback cb) { qabstractitemview_viewportevent_callback = cb; }
    inline void setQAbstractItemView_MousePressEvent_Callback(QAbstractItemView_MousePressEvent_Callback cb) { qabstractitemview_mousepressevent_callback = cb; }
    inline void setQAbstractItemView_MouseMoveEvent_Callback(QAbstractItemView_MouseMoveEvent_Callback cb) { qabstractitemview_mousemoveevent_callback = cb; }
    inline void setQAbstractItemView_MouseReleaseEvent_Callback(QAbstractItemView_MouseReleaseEvent_Callback cb) { qabstractitemview_mousereleaseevent_callback = cb; }
    inline void setQAbstractItemView_MouseDoubleClickEvent_Callback(QAbstractItemView_MouseDoubleClickEvent_Callback cb) { qabstractitemview_mousedoubleclickevent_callback = cb; }
    inline void setQAbstractItemView_DragEnterEvent_Callback(QAbstractItemView_DragEnterEvent_Callback cb) { qabstractitemview_dragenterevent_callback = cb; }
    inline void setQAbstractItemView_DragMoveEvent_Callback(QAbstractItemView_DragMoveEvent_Callback cb) { qabstractitemview_dragmoveevent_callback = cb; }
    inline void setQAbstractItemView_DragLeaveEvent_Callback(QAbstractItemView_DragLeaveEvent_Callback cb) { qabstractitemview_dragleaveevent_callback = cb; }
    inline void setQAbstractItemView_DropEvent_Callback(QAbstractItemView_DropEvent_Callback cb) { qabstractitemview_dropevent_callback = cb; }
    inline void setQAbstractItemView_FocusInEvent_Callback(QAbstractItemView_FocusInEvent_Callback cb) { qabstractitemview_focusinevent_callback = cb; }
    inline void setQAbstractItemView_FocusOutEvent_Callback(QAbstractItemView_FocusOutEvent_Callback cb) { qabstractitemview_focusoutevent_callback = cb; }
    inline void setQAbstractItemView_KeyPressEvent_Callback(QAbstractItemView_KeyPressEvent_Callback cb) { qabstractitemview_keypressevent_callback = cb; }
    inline void setQAbstractItemView_ResizeEvent_Callback(QAbstractItemView_ResizeEvent_Callback cb) { qabstractitemview_resizeevent_callback = cb; }
    inline void setQAbstractItemView_TimerEvent_Callback(QAbstractItemView_TimerEvent_Callback cb) { qabstractitemview_timerevent_callback = cb; }
    inline void setQAbstractItemView_InputMethodEvent_Callback(QAbstractItemView_InputMethodEvent_Callback cb) { qabstractitemview_inputmethodevent_callback = cb; }
    inline void setQAbstractItemView_EventFilter_Callback(QAbstractItemView_EventFilter_Callback cb) { qabstractitemview_eventfilter_callback = cb; }
    inline void setQAbstractItemView_ViewportSizeHint_Callback(QAbstractItemView_ViewportSizeHint_Callback cb) { qabstractitemview_viewportsizehint_callback = cb; }
    inline void setQAbstractItemView_MinimumSizeHint_Callback(QAbstractItemView_MinimumSizeHint_Callback cb) { qabstractitemview_minimumsizehint_callback = cb; }
    inline void setQAbstractItemView_SizeHint_Callback(QAbstractItemView_SizeHint_Callback cb) { qabstractitemview_sizehint_callback = cb; }
    inline void setQAbstractItemView_SetupViewport_Callback(QAbstractItemView_SetupViewport_Callback cb) { qabstractitemview_setupviewport_callback = cb; }
    inline void setQAbstractItemView_PaintEvent_Callback(QAbstractItemView_PaintEvent_Callback cb) { qabstractitemview_paintevent_callback = cb; }
    inline void setQAbstractItemView_WheelEvent_Callback(QAbstractItemView_WheelEvent_Callback cb) { qabstractitemview_wheelevent_callback = cb; }
    inline void setQAbstractItemView_ContextMenuEvent_Callback(QAbstractItemView_ContextMenuEvent_Callback cb) { qabstractitemview_contextmenuevent_callback = cb; }
    inline void setQAbstractItemView_ScrollContentsBy_Callback(QAbstractItemView_ScrollContentsBy_Callback cb) { qabstractitemview_scrollcontentsby_callback = cb; }
    inline void setQAbstractItemView_ChangeEvent_Callback(QAbstractItemView_ChangeEvent_Callback cb) { qabstractitemview_changeevent_callback = cb; }
    inline void setQAbstractItemView_InitStyleOption_Callback(QAbstractItemView_InitStyleOption_Callback cb) { qabstractitemview_initstyleoption_callback = cb; }
    inline void setQAbstractItemView_DevType_Callback(QAbstractItemView_DevType_Callback cb) { qabstractitemview_devtype_callback = cb; }
    inline void setQAbstractItemView_SetVisible_Callback(QAbstractItemView_SetVisible_Callback cb) { qabstractitemview_setvisible_callback = cb; }
    inline void setQAbstractItemView_HeightForWidth_Callback(QAbstractItemView_HeightForWidth_Callback cb) { qabstractitemview_heightforwidth_callback = cb; }
    inline void setQAbstractItemView_HasHeightForWidth_Callback(QAbstractItemView_HasHeightForWidth_Callback cb) { qabstractitemview_hasheightforwidth_callback = cb; }
    inline void setQAbstractItemView_PaintEngine_Callback(QAbstractItemView_PaintEngine_Callback cb) { qabstractitemview_paintengine_callback = cb; }
    inline void setQAbstractItemView_KeyReleaseEvent_Callback(QAbstractItemView_KeyReleaseEvent_Callback cb) { qabstractitemview_keyreleaseevent_callback = cb; }
    inline void setQAbstractItemView_EnterEvent_Callback(QAbstractItemView_EnterEvent_Callback cb) { qabstractitemview_enterevent_callback = cb; }
    inline void setQAbstractItemView_LeaveEvent_Callback(QAbstractItemView_LeaveEvent_Callback cb) { qabstractitemview_leaveevent_callback = cb; }
    inline void setQAbstractItemView_MoveEvent_Callback(QAbstractItemView_MoveEvent_Callback cb) { qabstractitemview_moveevent_callback = cb; }
    inline void setQAbstractItemView_CloseEvent_Callback(QAbstractItemView_CloseEvent_Callback cb) { qabstractitemview_closeevent_callback = cb; }
    inline void setQAbstractItemView_TabletEvent_Callback(QAbstractItemView_TabletEvent_Callback cb) { qabstractitemview_tabletevent_callback = cb; }
    inline void setQAbstractItemView_ActionEvent_Callback(QAbstractItemView_ActionEvent_Callback cb) { qabstractitemview_actionevent_callback = cb; }
    inline void setQAbstractItemView_ShowEvent_Callback(QAbstractItemView_ShowEvent_Callback cb) { qabstractitemview_showevent_callback = cb; }
    inline void setQAbstractItemView_HideEvent_Callback(QAbstractItemView_HideEvent_Callback cb) { qabstractitemview_hideevent_callback = cb; }
    inline void setQAbstractItemView_NativeEvent_Callback(QAbstractItemView_NativeEvent_Callback cb) { qabstractitemview_nativeevent_callback = cb; }
    inline void setQAbstractItemView_Metric_Callback(QAbstractItemView_Metric_Callback cb) { qabstractitemview_metric_callback = cb; }
    inline void setQAbstractItemView_InitPainter_Callback(QAbstractItemView_InitPainter_Callback cb) { qabstractitemview_initpainter_callback = cb; }
    inline void setQAbstractItemView_Redirected_Callback(QAbstractItemView_Redirected_Callback cb) { qabstractitemview_redirected_callback = cb; }
    inline void setQAbstractItemView_SharedPainter_Callback(QAbstractItemView_SharedPainter_Callback cb) { qabstractitemview_sharedpainter_callback = cb; }
    inline void setQAbstractItemView_ChildEvent_Callback(QAbstractItemView_ChildEvent_Callback cb) { qabstractitemview_childevent_callback = cb; }
    inline void setQAbstractItemView_CustomEvent_Callback(QAbstractItemView_CustomEvent_Callback cb) { qabstractitemview_customevent_callback = cb; }
    inline void setQAbstractItemView_ConnectNotify_Callback(QAbstractItemView_ConnectNotify_Callback cb) { qabstractitemview_connectnotify_callback = cb; }
    inline void setQAbstractItemView_DisconnectNotify_Callback(QAbstractItemView_DisconnectNotify_Callback cb) { qabstractitemview_disconnectnotify_callback = cb; }
    inline void setQAbstractItemView_State_Callback(QAbstractItemView_State_Callback cb) { qabstractitemview_state_callback = cb; }
    inline void setQAbstractItemView_SetState_Callback(QAbstractItemView_SetState_Callback cb) { qabstractitemview_setstate_callback = cb; }
    inline void setQAbstractItemView_ScheduleDelayedItemsLayout_Callback(QAbstractItemView_ScheduleDelayedItemsLayout_Callback cb) { qabstractitemview_scheduledelayeditemslayout_callback = cb; }
    inline void setQAbstractItemView_ExecuteDelayedItemsLayout_Callback(QAbstractItemView_ExecuteDelayedItemsLayout_Callback cb) { qabstractitemview_executedelayeditemslayout_callback = cb; }
    inline void setQAbstractItemView_SetDirtyRegion_Callback(QAbstractItemView_SetDirtyRegion_Callback cb) { qabstractitemview_setdirtyregion_callback = cb; }
    inline void setQAbstractItemView_ScrollDirtyRegion_Callback(QAbstractItemView_ScrollDirtyRegion_Callback cb) { qabstractitemview_scrolldirtyregion_callback = cb; }
    inline void setQAbstractItemView_DirtyRegionOffset_Callback(QAbstractItemView_DirtyRegionOffset_Callback cb) { qabstractitemview_dirtyregionoffset_callback = cb; }
    inline void setQAbstractItemView_StartAutoScroll_Callback(QAbstractItemView_StartAutoScroll_Callback cb) { qabstractitemview_startautoscroll_callback = cb; }
    inline void setQAbstractItemView_StopAutoScroll_Callback(QAbstractItemView_StopAutoScroll_Callback cb) { qabstractitemview_stopautoscroll_callback = cb; }
    inline void setQAbstractItemView_DoAutoScroll_Callback(QAbstractItemView_DoAutoScroll_Callback cb) { qabstractitemview_doautoscroll_callback = cb; }
    inline void setQAbstractItemView_DropIndicatorPosition_Callback(QAbstractItemView_DropIndicatorPosition_Callback cb) { qabstractitemview_dropindicatorposition_callback = cb; }
    inline void setQAbstractItemView_SetViewportMargins_Callback(QAbstractItemView_SetViewportMargins_Callback cb) { qabstractitemview_setviewportmargins_callback = cb; }
    inline void setQAbstractItemView_ViewportMargins_Callback(QAbstractItemView_ViewportMargins_Callback cb) { qabstractitemview_viewportmargins_callback = cb; }
    inline void setQAbstractItemView_DrawFrame_Callback(QAbstractItemView_DrawFrame_Callback cb) { qabstractitemview_drawframe_callback = cb; }
    inline void setQAbstractItemView_UpdateMicroFocus_Callback(QAbstractItemView_UpdateMicroFocus_Callback cb) { qabstractitemview_updatemicrofocus_callback = cb; }
    inline void setQAbstractItemView_Create_Callback(QAbstractItemView_Create_Callback cb) { qabstractitemview_create_callback = cb; }
    inline void setQAbstractItemView_Destroy_Callback(QAbstractItemView_Destroy_Callback cb) { qabstractitemview_destroy_callback = cb; }
    inline void setQAbstractItemView_FocusNextChild_Callback(QAbstractItemView_FocusNextChild_Callback cb) { qabstractitemview_focusnextchild_callback = cb; }
    inline void setQAbstractItemView_FocusPreviousChild_Callback(QAbstractItemView_FocusPreviousChild_Callback cb) { qabstractitemview_focuspreviouschild_callback = cb; }
    inline void setQAbstractItemView_Sender_Callback(QAbstractItemView_Sender_Callback cb) { qabstractitemview_sender_callback = cb; }
    inline void setQAbstractItemView_SenderSignalIndex_Callback(QAbstractItemView_SenderSignalIndex_Callback cb) { qabstractitemview_sendersignalindex_callback = cb; }
    inline void setQAbstractItemView_Receivers_Callback(QAbstractItemView_Receivers_Callback cb) { qabstractitemview_receivers_callback = cb; }
    inline void setQAbstractItemView_IsSignalConnected_Callback(QAbstractItemView_IsSignalConnected_Callback cb) { qabstractitemview_issignalconnected_callback = cb; }
    inline void setQAbstractItemView_GetDecodedMetricF_Callback(QAbstractItemView_GetDecodedMetricF_Callback cb) { qabstractitemview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQAbstractItemView_Metacall_IsBase(bool value) const { qabstractitemview_metacall_isbase = value; }
    inline void setQAbstractItemView_SetModel_IsBase(bool value) const { qabstractitemview_setmodel_isbase = value; }
    inline void setQAbstractItemView_SetSelectionModel_IsBase(bool value) const { qabstractitemview_setselectionmodel_isbase = value; }
    inline void setQAbstractItemView_KeyboardSearch_IsBase(bool value) const { qabstractitemview_keyboardsearch_isbase = value; }
    inline void setQAbstractItemView_VisualRect_IsBase(bool value) const { qabstractitemview_visualrect_isbase = value; }
    inline void setQAbstractItemView_ScrollTo_IsBase(bool value) const { qabstractitemview_scrollto_isbase = value; }
    inline void setQAbstractItemView_IndexAt_IsBase(bool value) const { qabstractitemview_indexat_isbase = value; }
    inline void setQAbstractItemView_SizeHintForRow_IsBase(bool value) const { qabstractitemview_sizehintforrow_isbase = value; }
    inline void setQAbstractItemView_SizeHintForColumn_IsBase(bool value) const { qabstractitemview_sizehintforcolumn_isbase = value; }
    inline void setQAbstractItemView_ItemDelegateForIndex_IsBase(bool value) const { qabstractitemview_itemdelegateforindex_isbase = value; }
    inline void setQAbstractItemView_InputMethodQuery_IsBase(bool value) const { qabstractitemview_inputmethodquery_isbase = value; }
    inline void setQAbstractItemView_Reset_IsBase(bool value) const { qabstractitemview_reset_isbase = value; }
    inline void setQAbstractItemView_SetRootIndex_IsBase(bool value) const { qabstractitemview_setrootindex_isbase = value; }
    inline void setQAbstractItemView_DoItemsLayout_IsBase(bool value) const { qabstractitemview_doitemslayout_isbase = value; }
    inline void setQAbstractItemView_SelectAll_IsBase(bool value) const { qabstractitemview_selectall_isbase = value; }
    inline void setQAbstractItemView_DataChanged_IsBase(bool value) const { qabstractitemview_datachanged_isbase = value; }
    inline void setQAbstractItemView_RowsInserted_IsBase(bool value) const { qabstractitemview_rowsinserted_isbase = value; }
    inline void setQAbstractItemView_RowsAboutToBeRemoved_IsBase(bool value) const { qabstractitemview_rowsabouttoberemoved_isbase = value; }
    inline void setQAbstractItemView_SelectionChanged_IsBase(bool value) const { qabstractitemview_selectionchanged_isbase = value; }
    inline void setQAbstractItemView_CurrentChanged_IsBase(bool value) const { qabstractitemview_currentchanged_isbase = value; }
    inline void setQAbstractItemView_UpdateEditorData_IsBase(bool value) const { qabstractitemview_updateeditordata_isbase = value; }
    inline void setQAbstractItemView_UpdateEditorGeometries_IsBase(bool value) const { qabstractitemview_updateeditorgeometries_isbase = value; }
    inline void setQAbstractItemView_UpdateGeometries_IsBase(bool value) const { qabstractitemview_updategeometries_isbase = value; }
    inline void setQAbstractItemView_VerticalScrollbarAction_IsBase(bool value) const { qabstractitemview_verticalscrollbaraction_isbase = value; }
    inline void setQAbstractItemView_HorizontalScrollbarAction_IsBase(bool value) const { qabstractitemview_horizontalscrollbaraction_isbase = value; }
    inline void setQAbstractItemView_VerticalScrollbarValueChanged_IsBase(bool value) const { qabstractitemview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQAbstractItemView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qabstractitemview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQAbstractItemView_CloseEditor_IsBase(bool value) const { qabstractitemview_closeeditor_isbase = value; }
    inline void setQAbstractItemView_CommitData_IsBase(bool value) const { qabstractitemview_commitdata_isbase = value; }
    inline void setQAbstractItemView_EditorDestroyed_IsBase(bool value) const { qabstractitemview_editordestroyed_isbase = value; }
    inline void setQAbstractItemView_MoveCursor_IsBase(bool value) const { qabstractitemview_movecursor_isbase = value; }
    inline void setQAbstractItemView_HorizontalOffset_IsBase(bool value) const { qabstractitemview_horizontaloffset_isbase = value; }
    inline void setQAbstractItemView_VerticalOffset_IsBase(bool value) const { qabstractitemview_verticaloffset_isbase = value; }
    inline void setQAbstractItemView_IsIndexHidden_IsBase(bool value) const { qabstractitemview_isindexhidden_isbase = value; }
    inline void setQAbstractItemView_SetSelection_IsBase(bool value) const { qabstractitemview_setselection_isbase = value; }
    inline void setQAbstractItemView_VisualRegionForSelection_IsBase(bool value) const { qabstractitemview_visualregionforselection_isbase = value; }
    inline void setQAbstractItemView_SelectedIndexes_IsBase(bool value) const { qabstractitemview_selectedindexes_isbase = value; }
    inline void setQAbstractItemView_Edit2_IsBase(bool value) const { qabstractitemview_edit2_isbase = value; }
    inline void setQAbstractItemView_SelectionCommand_IsBase(bool value) const { qabstractitemview_selectioncommand_isbase = value; }
    inline void setQAbstractItemView_StartDrag_IsBase(bool value) const { qabstractitemview_startdrag_isbase = value; }
    inline void setQAbstractItemView_InitViewItemOption_IsBase(bool value) const { qabstractitemview_initviewitemoption_isbase = value; }
    inline void setQAbstractItemView_FocusNextPrevChild_IsBase(bool value) const { qabstractitemview_focusnextprevchild_isbase = value; }
    inline void setQAbstractItemView_Event_IsBase(bool value) const { qabstractitemview_event_isbase = value; }
    inline void setQAbstractItemView_ViewportEvent_IsBase(bool value) const { qabstractitemview_viewportevent_isbase = value; }
    inline void setQAbstractItemView_MousePressEvent_IsBase(bool value) const { qabstractitemview_mousepressevent_isbase = value; }
    inline void setQAbstractItemView_MouseMoveEvent_IsBase(bool value) const { qabstractitemview_mousemoveevent_isbase = value; }
    inline void setQAbstractItemView_MouseReleaseEvent_IsBase(bool value) const { qabstractitemview_mousereleaseevent_isbase = value; }
    inline void setQAbstractItemView_MouseDoubleClickEvent_IsBase(bool value) const { qabstractitemview_mousedoubleclickevent_isbase = value; }
    inline void setQAbstractItemView_DragEnterEvent_IsBase(bool value) const { qabstractitemview_dragenterevent_isbase = value; }
    inline void setQAbstractItemView_DragMoveEvent_IsBase(bool value) const { qabstractitemview_dragmoveevent_isbase = value; }
    inline void setQAbstractItemView_DragLeaveEvent_IsBase(bool value) const { qabstractitemview_dragleaveevent_isbase = value; }
    inline void setQAbstractItemView_DropEvent_IsBase(bool value) const { qabstractitemview_dropevent_isbase = value; }
    inline void setQAbstractItemView_FocusInEvent_IsBase(bool value) const { qabstractitemview_focusinevent_isbase = value; }
    inline void setQAbstractItemView_FocusOutEvent_IsBase(bool value) const { qabstractitemview_focusoutevent_isbase = value; }
    inline void setQAbstractItemView_KeyPressEvent_IsBase(bool value) const { qabstractitemview_keypressevent_isbase = value; }
    inline void setQAbstractItemView_ResizeEvent_IsBase(bool value) const { qabstractitemview_resizeevent_isbase = value; }
    inline void setQAbstractItemView_TimerEvent_IsBase(bool value) const { qabstractitemview_timerevent_isbase = value; }
    inline void setQAbstractItemView_InputMethodEvent_IsBase(bool value) const { qabstractitemview_inputmethodevent_isbase = value; }
    inline void setQAbstractItemView_EventFilter_IsBase(bool value) const { qabstractitemview_eventfilter_isbase = value; }
    inline void setQAbstractItemView_ViewportSizeHint_IsBase(bool value) const { qabstractitemview_viewportsizehint_isbase = value; }
    inline void setQAbstractItemView_MinimumSizeHint_IsBase(bool value) const { qabstractitemview_minimumsizehint_isbase = value; }
    inline void setQAbstractItemView_SizeHint_IsBase(bool value) const { qabstractitemview_sizehint_isbase = value; }
    inline void setQAbstractItemView_SetupViewport_IsBase(bool value) const { qabstractitemview_setupviewport_isbase = value; }
    inline void setQAbstractItemView_PaintEvent_IsBase(bool value) const { qabstractitemview_paintevent_isbase = value; }
    inline void setQAbstractItemView_WheelEvent_IsBase(bool value) const { qabstractitemview_wheelevent_isbase = value; }
    inline void setQAbstractItemView_ContextMenuEvent_IsBase(bool value) const { qabstractitemview_contextmenuevent_isbase = value; }
    inline void setQAbstractItemView_ScrollContentsBy_IsBase(bool value) const { qabstractitemview_scrollcontentsby_isbase = value; }
    inline void setQAbstractItemView_ChangeEvent_IsBase(bool value) const { qabstractitemview_changeevent_isbase = value; }
    inline void setQAbstractItemView_InitStyleOption_IsBase(bool value) const { qabstractitemview_initstyleoption_isbase = value; }
    inline void setQAbstractItemView_DevType_IsBase(bool value) const { qabstractitemview_devtype_isbase = value; }
    inline void setQAbstractItemView_SetVisible_IsBase(bool value) const { qabstractitemview_setvisible_isbase = value; }
    inline void setQAbstractItemView_HeightForWidth_IsBase(bool value) const { qabstractitemview_heightforwidth_isbase = value; }
    inline void setQAbstractItemView_HasHeightForWidth_IsBase(bool value) const { qabstractitemview_hasheightforwidth_isbase = value; }
    inline void setQAbstractItemView_PaintEngine_IsBase(bool value) const { qabstractitemview_paintengine_isbase = value; }
    inline void setQAbstractItemView_KeyReleaseEvent_IsBase(bool value) const { qabstractitemview_keyreleaseevent_isbase = value; }
    inline void setQAbstractItemView_EnterEvent_IsBase(bool value) const { qabstractitemview_enterevent_isbase = value; }
    inline void setQAbstractItemView_LeaveEvent_IsBase(bool value) const { qabstractitemview_leaveevent_isbase = value; }
    inline void setQAbstractItemView_MoveEvent_IsBase(bool value) const { qabstractitemview_moveevent_isbase = value; }
    inline void setQAbstractItemView_CloseEvent_IsBase(bool value) const { qabstractitemview_closeevent_isbase = value; }
    inline void setQAbstractItemView_TabletEvent_IsBase(bool value) const { qabstractitemview_tabletevent_isbase = value; }
    inline void setQAbstractItemView_ActionEvent_IsBase(bool value) const { qabstractitemview_actionevent_isbase = value; }
    inline void setQAbstractItemView_ShowEvent_IsBase(bool value) const { qabstractitemview_showevent_isbase = value; }
    inline void setQAbstractItemView_HideEvent_IsBase(bool value) const { qabstractitemview_hideevent_isbase = value; }
    inline void setQAbstractItemView_NativeEvent_IsBase(bool value) const { qabstractitemview_nativeevent_isbase = value; }
    inline void setQAbstractItemView_Metric_IsBase(bool value) const { qabstractitemview_metric_isbase = value; }
    inline void setQAbstractItemView_InitPainter_IsBase(bool value) const { qabstractitemview_initpainter_isbase = value; }
    inline void setQAbstractItemView_Redirected_IsBase(bool value) const { qabstractitemview_redirected_isbase = value; }
    inline void setQAbstractItemView_SharedPainter_IsBase(bool value) const { qabstractitemview_sharedpainter_isbase = value; }
    inline void setQAbstractItemView_ChildEvent_IsBase(bool value) const { qabstractitemview_childevent_isbase = value; }
    inline void setQAbstractItemView_CustomEvent_IsBase(bool value) const { qabstractitemview_customevent_isbase = value; }
    inline void setQAbstractItemView_ConnectNotify_IsBase(bool value) const { qabstractitemview_connectnotify_isbase = value; }
    inline void setQAbstractItemView_DisconnectNotify_IsBase(bool value) const { qabstractitemview_disconnectnotify_isbase = value; }
    inline void setQAbstractItemView_State_IsBase(bool value) const { qabstractitemview_state_isbase = value; }
    inline void setQAbstractItemView_SetState_IsBase(bool value) const { qabstractitemview_setstate_isbase = value; }
    inline void setQAbstractItemView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qabstractitemview_scheduledelayeditemslayout_isbase = value; }
    inline void setQAbstractItemView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qabstractitemview_executedelayeditemslayout_isbase = value; }
    inline void setQAbstractItemView_SetDirtyRegion_IsBase(bool value) const { qabstractitemview_setdirtyregion_isbase = value; }
    inline void setQAbstractItemView_ScrollDirtyRegion_IsBase(bool value) const { qabstractitemview_scrolldirtyregion_isbase = value; }
    inline void setQAbstractItemView_DirtyRegionOffset_IsBase(bool value) const { qabstractitemview_dirtyregionoffset_isbase = value; }
    inline void setQAbstractItemView_StartAutoScroll_IsBase(bool value) const { qabstractitemview_startautoscroll_isbase = value; }
    inline void setQAbstractItemView_StopAutoScroll_IsBase(bool value) const { qabstractitemview_stopautoscroll_isbase = value; }
    inline void setQAbstractItemView_DoAutoScroll_IsBase(bool value) const { qabstractitemview_doautoscroll_isbase = value; }
    inline void setQAbstractItemView_DropIndicatorPosition_IsBase(bool value) const { qabstractitemview_dropindicatorposition_isbase = value; }
    inline void setQAbstractItemView_SetViewportMargins_IsBase(bool value) const { qabstractitemview_setviewportmargins_isbase = value; }
    inline void setQAbstractItemView_ViewportMargins_IsBase(bool value) const { qabstractitemview_viewportmargins_isbase = value; }
    inline void setQAbstractItemView_DrawFrame_IsBase(bool value) const { qabstractitemview_drawframe_isbase = value; }
    inline void setQAbstractItemView_UpdateMicroFocus_IsBase(bool value) const { qabstractitemview_updatemicrofocus_isbase = value; }
    inline void setQAbstractItemView_Create_IsBase(bool value) const { qabstractitemview_create_isbase = value; }
    inline void setQAbstractItemView_Destroy_IsBase(bool value) const { qabstractitemview_destroy_isbase = value; }
    inline void setQAbstractItemView_FocusNextChild_IsBase(bool value) const { qabstractitemview_focusnextchild_isbase = value; }
    inline void setQAbstractItemView_FocusPreviousChild_IsBase(bool value) const { qabstractitemview_focuspreviouschild_isbase = value; }
    inline void setQAbstractItemView_Sender_IsBase(bool value) const { qabstractitemview_sender_isbase = value; }
    inline void setQAbstractItemView_SenderSignalIndex_IsBase(bool value) const { qabstractitemview_sendersignalindex_isbase = value; }
    inline void setQAbstractItemView_Receivers_IsBase(bool value) const { qabstractitemview_receivers_isbase = value; }
    inline void setQAbstractItemView_IsSignalConnected_IsBase(bool value) const { qabstractitemview_issignalconnected_isbase = value; }
    inline void setQAbstractItemView_GetDecodedMetricF_IsBase(bool value) const { qabstractitemview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemview_metacall_isbase) {
            qabstractitemview_metacall_isbase = false;
            return QAbstractItemView::qt_metacall(param1, param2, param3);
        } else if (qabstractitemview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractitemview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractItemView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qabstractitemview_setmodel_isbase) {
            qabstractitemview_setmodel_isbase = false;
            QAbstractItemView::setModel(model);
        } else if (qabstractitemview_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            qabstractitemview_setmodel_callback(this, cbval1);
        } else {
            QAbstractItemView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qabstractitemview_setselectionmodel_isbase) {
            qabstractitemview_setselectionmodel_isbase = false;
            QAbstractItemView::setSelectionModel(selectionModel);
        } else if (qabstractitemview_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            qabstractitemview_setselectionmodel_callback(this, cbval1);
        } else {
            QAbstractItemView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qabstractitemview_keyboardsearch_isbase) {
            qabstractitemview_keyboardsearch_isbase = false;
            QAbstractItemView::keyboardSearch(search);
        } else if (qabstractitemview_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<const char*>(malloc((search_str.len + 1) * sizeof(char)));
            memcpy((void*)search_str.data, search_b.data(), search_str.len);
            ((char*)search_str.data)[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            qabstractitemview_keyboardsearch_callback(this, cbval1);
        } else {
            QAbstractItemView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qabstractitemview_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qabstractitemview_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qabstractitemview_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            qabstractitemview_scrollto_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& point) const override {
        if (qabstractitemview_indexat_callback != nullptr) {
            const QPoint& point_ret = point;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&point_ret);

            QModelIndex* callback_ret = qabstractitemview_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qabstractitemview_sizehintforrow_isbase) {
            qabstractitemview_sizehintforrow_isbase = false;
            return QAbstractItemView::sizeHintForRow(row);
        } else if (qabstractitemview_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = qabstractitemview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractItemView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qabstractitemview_sizehintforcolumn_isbase) {
            qabstractitemview_sizehintforcolumn_isbase = false;
            return QAbstractItemView::sizeHintForColumn(column);
        } else if (qabstractitemview_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = qabstractitemview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractItemView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qabstractitemview_itemdelegateforindex_isbase) {
            qabstractitemview_itemdelegateforindex_isbase = false;
            return QAbstractItemView::itemDelegateForIndex(index);
        } else if (qabstractitemview_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = qabstractitemview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractItemView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qabstractitemview_inputmethodquery_isbase) {
            qabstractitemview_inputmethodquery_isbase = false;
            return QAbstractItemView::inputMethodQuery(query);
        } else if (qabstractitemview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qabstractitemview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractItemView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qabstractitemview_reset_isbase) {
            qabstractitemview_reset_isbase = false;
            QAbstractItemView::reset();
        } else if (qabstractitemview_reset_callback != nullptr) {
            qabstractitemview_reset_callback();
        } else {
            QAbstractItemView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qabstractitemview_setrootindex_isbase) {
            qabstractitemview_setrootindex_isbase = false;
            QAbstractItemView::setRootIndex(index);
        } else if (qabstractitemview_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            qabstractitemview_setrootindex_callback(this, cbval1);
        } else {
            QAbstractItemView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qabstractitemview_doitemslayout_isbase) {
            qabstractitemview_doitemslayout_isbase = false;
            QAbstractItemView::doItemsLayout();
        } else if (qabstractitemview_doitemslayout_callback != nullptr) {
            qabstractitemview_doitemslayout_callback();
        } else {
            QAbstractItemView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qabstractitemview_selectall_isbase) {
            qabstractitemview_selectall_isbase = false;
            QAbstractItemView::selectAll();
        } else if (qabstractitemview_selectall_callback != nullptr) {
            qabstractitemview_selectall_callback();
        } else {
            QAbstractItemView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qabstractitemview_datachanged_isbase) {
            qabstractitemview_datachanged_isbase = false;
            QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
        } else if (qabstractitemview_datachanged_callback != nullptr) {
            const QModelIndex& topLeft_ret = topLeft;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&topLeft_ret);
            const QModelIndex& bottomRight_ret = bottomRight;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&bottomRight_ret);
            const QList<int>& roles_ret = roles;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
            for (size_t i = 0; i < roles_ret.size(); ++i) {
                roles_arr[i] = roles_ret[i];
            }
            libqt_list roles_out;
            roles_out.len = roles_ret.size();
            roles_out.data = static_cast<void*>(roles_arr);
            libqt_list /* of int */ cbval3 = roles_out;

            qabstractitemview_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qabstractitemview_rowsinserted_isbase) {
            qabstractitemview_rowsinserted_isbase = false;
            QAbstractItemView::rowsInserted(parent, start, end);
        } else if (qabstractitemview_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qabstractitemview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            QAbstractItemView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qabstractitemview_rowsabouttoberemoved_isbase) {
            qabstractitemview_rowsabouttoberemoved_isbase = false;
            QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qabstractitemview_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qabstractitemview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qabstractitemview_selectionchanged_isbase) {
            qabstractitemview_selectionchanged_isbase = false;
            QAbstractItemView::selectionChanged(selected, deselected);
        } else if (qabstractitemview_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            qabstractitemview_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            QAbstractItemView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qabstractitemview_currentchanged_isbase) {
            qabstractitemview_currentchanged_isbase = false;
            QAbstractItemView::currentChanged(current, previous);
        } else if (qabstractitemview_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            qabstractitemview_currentchanged_callback(this, cbval1, cbval2);
        } else {
            QAbstractItemView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qabstractitemview_updateeditordata_isbase) {
            qabstractitemview_updateeditordata_isbase = false;
            QAbstractItemView::updateEditorData();
        } else if (qabstractitemview_updateeditordata_callback != nullptr) {
            qabstractitemview_updateeditordata_callback();
        } else {
            QAbstractItemView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qabstractitemview_updateeditorgeometries_isbase) {
            qabstractitemview_updateeditorgeometries_isbase = false;
            QAbstractItemView::updateEditorGeometries();
        } else if (qabstractitemview_updateeditorgeometries_callback != nullptr) {
            qabstractitemview_updateeditorgeometries_callback();
        } else {
            QAbstractItemView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qabstractitemview_updategeometries_isbase) {
            qabstractitemview_updategeometries_isbase = false;
            QAbstractItemView::updateGeometries();
        } else if (qabstractitemview_updategeometries_callback != nullptr) {
            qabstractitemview_updategeometries_callback();
        } else {
            QAbstractItemView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qabstractitemview_verticalscrollbaraction_isbase) {
            qabstractitemview_verticalscrollbaraction_isbase = false;
            QAbstractItemView::verticalScrollbarAction(action);
        } else if (qabstractitemview_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qabstractitemview_verticalscrollbaraction_callback(this, cbval1);
        } else {
            QAbstractItemView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qabstractitemview_horizontalscrollbaraction_isbase) {
            qabstractitemview_horizontalscrollbaraction_isbase = false;
            QAbstractItemView::horizontalScrollbarAction(action);
        } else if (qabstractitemview_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qabstractitemview_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            QAbstractItemView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qabstractitemview_verticalscrollbarvaluechanged_isbase) {
            qabstractitemview_verticalscrollbarvaluechanged_isbase = false;
            QAbstractItemView::verticalScrollbarValueChanged(value);
        } else if (qabstractitemview_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qabstractitemview_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QAbstractItemView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qabstractitemview_horizontalscrollbarvaluechanged_isbase) {
            qabstractitemview_horizontalscrollbarvaluechanged_isbase = false;
            QAbstractItemView::horizontalScrollbarValueChanged(value);
        } else if (qabstractitemview_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qabstractitemview_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QAbstractItemView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qabstractitemview_closeeditor_isbase) {
            qabstractitemview_closeeditor_isbase = false;
            QAbstractItemView::closeEditor(editor, hint);
        } else if (qabstractitemview_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            qabstractitemview_closeeditor_callback(this, cbval1, cbval2);
        } else {
            QAbstractItemView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qabstractitemview_commitdata_isbase) {
            qabstractitemview_commitdata_isbase = false;
            QAbstractItemView::commitData(editor);
        } else if (qabstractitemview_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            qabstractitemview_commitdata_callback(this, cbval1);
        } else {
            QAbstractItemView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qabstractitemview_editordestroyed_isbase) {
            qabstractitemview_editordestroyed_isbase = false;
            QAbstractItemView::editorDestroyed(editor);
        } else if (qabstractitemview_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            qabstractitemview_editordestroyed_callback(this, cbval1);
        } else {
            QAbstractItemView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qabstractitemview_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = qabstractitemview_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qabstractitemview_horizontaloffset_callback != nullptr) {
            int callback_ret = qabstractitemview_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qabstractitemview_verticaloffset_callback != nullptr) {
            int callback_ret = qabstractitemview_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qabstractitemview_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qabstractitemview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qabstractitemview_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            qabstractitemview_setselection_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qabstractitemview_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = qabstractitemview_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qabstractitemview_selectedindexes_isbase) {
            qabstractitemview_selectedindexes_isbase = false;
            return QAbstractItemView::selectedIndexes();
        } else if (qabstractitemview_selectedindexes_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qabstractitemview_selectedindexes_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QAbstractItemView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qabstractitemview_edit2_isbase) {
            qabstractitemview_edit2_isbase = false;
            return QAbstractItemView::edit(index, trigger, event);
        } else if (qabstractitemview_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = qabstractitemview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractItemView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qabstractitemview_selectioncommand_isbase) {
            qabstractitemview_selectioncommand_isbase = false;
            return QAbstractItemView::selectionCommand(index, event);
        } else if (qabstractitemview_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = qabstractitemview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return QAbstractItemView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qabstractitemview_startdrag_isbase) {
            qabstractitemview_startdrag_isbase = false;
            QAbstractItemView::startDrag(supportedActions);
        } else if (qabstractitemview_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            qabstractitemview_startdrag_callback(this, cbval1);
        } else {
            QAbstractItemView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qabstractitemview_initviewitemoption_isbase) {
            qabstractitemview_initviewitemoption_isbase = false;
            QAbstractItemView::initViewItemOption(option);
        } else if (qabstractitemview_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            qabstractitemview_initviewitemoption_callback(this, cbval1);
        } else {
            QAbstractItemView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractitemview_focusnextprevchild_isbase) {
            qabstractitemview_focusnextprevchild_isbase = false;
            return QAbstractItemView::focusNextPrevChild(next);
        } else if (qabstractitemview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qabstractitemview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractItemView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemview_event_isbase) {
            qabstractitemview_event_isbase = false;
            return QAbstractItemView::event(event);
        } else if (qabstractitemview_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qabstractitemview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractItemView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qabstractitemview_viewportevent_isbase) {
            qabstractitemview_viewportevent_isbase = false;
            return QAbstractItemView::viewportEvent(event);
        } else if (qabstractitemview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qabstractitemview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractItemView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousepressevent_isbase) {
            qabstractitemview_mousepressevent_isbase = false;
            QAbstractItemView::mousePressEvent(event);
        } else if (qabstractitemview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractitemview_mousepressevent_callback(this, cbval1);
        } else {
            QAbstractItemView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousemoveevent_isbase) {
            qabstractitemview_mousemoveevent_isbase = false;
            QAbstractItemView::mouseMoveEvent(event);
        } else if (qabstractitemview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractitemview_mousemoveevent_callback(this, cbval1);
        } else {
            QAbstractItemView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousereleaseevent_isbase) {
            qabstractitemview_mousereleaseevent_isbase = false;
            QAbstractItemView::mouseReleaseEvent(event);
        } else if (qabstractitemview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractitemview_mousereleaseevent_callback(this, cbval1);
        } else {
            QAbstractItemView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousedoubleclickevent_isbase) {
            qabstractitemview_mousedoubleclickevent_isbase = false;
            QAbstractItemView::mouseDoubleClickEvent(event);
        } else if (qabstractitemview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractitemview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QAbstractItemView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractitemview_dragenterevent_isbase) {
            qabstractitemview_dragenterevent_isbase = false;
            QAbstractItemView::dragEnterEvent(event);
        } else if (qabstractitemview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qabstractitemview_dragenterevent_callback(this, cbval1);
        } else {
            QAbstractItemView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractitemview_dragmoveevent_isbase) {
            qabstractitemview_dragmoveevent_isbase = false;
            QAbstractItemView::dragMoveEvent(event);
        } else if (qabstractitemview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qabstractitemview_dragmoveevent_callback(this, cbval1);
        } else {
            QAbstractItemView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractitemview_dragleaveevent_isbase) {
            qabstractitemview_dragleaveevent_isbase = false;
            QAbstractItemView::dragLeaveEvent(event);
        } else if (qabstractitemview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qabstractitemview_dragleaveevent_callback(this, cbval1);
        } else {
            QAbstractItemView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractitemview_dropevent_isbase) {
            qabstractitemview_dropevent_isbase = false;
            QAbstractItemView::dropEvent(event);
        } else if (qabstractitemview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qabstractitemview_dropevent_callback(this, cbval1);
        } else {
            QAbstractItemView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractitemview_focusinevent_isbase) {
            qabstractitemview_focusinevent_isbase = false;
            QAbstractItemView::focusInEvent(event);
        } else if (qabstractitemview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractitemview_focusinevent_callback(this, cbval1);
        } else {
            QAbstractItemView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractitemview_focusoutevent_isbase) {
            qabstractitemview_focusoutevent_isbase = false;
            QAbstractItemView::focusOutEvent(event);
        } else if (qabstractitemview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractitemview_focusoutevent_callback(this, cbval1);
        } else {
            QAbstractItemView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractitemview_keypressevent_isbase) {
            qabstractitemview_keypressevent_isbase = false;
            QAbstractItemView::keyPressEvent(event);
        } else if (qabstractitemview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qabstractitemview_keypressevent_callback(this, cbval1);
        } else {
            QAbstractItemView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractitemview_resizeevent_isbase) {
            qabstractitemview_resizeevent_isbase = false;
            QAbstractItemView::resizeEvent(event);
        } else if (qabstractitemview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qabstractitemview_resizeevent_callback(this, cbval1);
        } else {
            QAbstractItemView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemview_timerevent_isbase) {
            qabstractitemview_timerevent_isbase = false;
            QAbstractItemView::timerEvent(event);
        } else if (qabstractitemview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qabstractitemview_timerevent_callback(this, cbval1);
        } else {
            QAbstractItemView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qabstractitemview_inputmethodevent_isbase) {
            qabstractitemview_inputmethodevent_isbase = false;
            QAbstractItemView::inputMethodEvent(event);
        } else if (qabstractitemview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qabstractitemview_inputmethodevent_callback(this, cbval1);
        } else {
            QAbstractItemView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qabstractitemview_eventfilter_isbase) {
            qabstractitemview_eventfilter_isbase = false;
            return QAbstractItemView::eventFilter(object, event);
        } else if (qabstractitemview_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qabstractitemview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractItemView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qabstractitemview_viewportsizehint_isbase) {
            qabstractitemview_viewportsizehint_isbase = false;
            return QAbstractItemView::viewportSizeHint();
        } else if (qabstractitemview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qabstractitemview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractItemView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractitemview_minimumsizehint_isbase) {
            qabstractitemview_minimumsizehint_isbase = false;
            return QAbstractItemView::minimumSizeHint();
        } else if (qabstractitemview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qabstractitemview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractItemView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractitemview_sizehint_isbase) {
            qabstractitemview_sizehint_isbase = false;
            return QAbstractItemView::sizeHint();
        } else if (qabstractitemview_sizehint_callback != nullptr) {
            QSize* callback_ret = qabstractitemview_sizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractItemView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qabstractitemview_setupviewport_isbase) {
            qabstractitemview_setupviewport_isbase = false;
            QAbstractItemView::setupViewport(viewport);
        } else if (qabstractitemview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qabstractitemview_setupviewport_callback(this, cbval1);
        } else {
            QAbstractItemView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qabstractitemview_paintevent_isbase) {
            qabstractitemview_paintevent_isbase = false;
            QAbstractItemView::paintEvent(param1);
        } else if (qabstractitemview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qabstractitemview_paintevent_callback(this, cbval1);
        } else {
            QAbstractItemView::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qabstractitemview_wheelevent_isbase) {
            qabstractitemview_wheelevent_isbase = false;
            QAbstractItemView::wheelEvent(param1);
        } else if (qabstractitemview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qabstractitemview_wheelevent_callback(this, cbval1);
        } else {
            QAbstractItemView::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractitemview_contextmenuevent_isbase) {
            qabstractitemview_contextmenuevent_isbase = false;
            QAbstractItemView::contextMenuEvent(param1);
        } else if (qabstractitemview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qabstractitemview_contextmenuevent_callback(this, cbval1);
        } else {
            QAbstractItemView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qabstractitemview_scrollcontentsby_isbase) {
            qabstractitemview_scrollcontentsby_isbase = false;
            QAbstractItemView::scrollContentsBy(dx, dy);
        } else if (qabstractitemview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qabstractitemview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QAbstractItemView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractitemview_changeevent_isbase) {
            qabstractitemview_changeevent_isbase = false;
            QAbstractItemView::changeEvent(param1);
        } else if (qabstractitemview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qabstractitemview_changeevent_callback(this, cbval1);
        } else {
            QAbstractItemView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qabstractitemview_initstyleoption_isbase) {
            qabstractitemview_initstyleoption_isbase = false;
            QAbstractItemView::initStyleOption(option);
        } else if (qabstractitemview_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qabstractitemview_initstyleoption_callback(this, cbval1);
        } else {
            QAbstractItemView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractitemview_devtype_isbase) {
            qabstractitemview_devtype_isbase = false;
            return QAbstractItemView::devType();
        } else if (qabstractitemview_devtype_callback != nullptr) {
            int callback_ret = qabstractitemview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractItemView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractitemview_setvisible_isbase) {
            qabstractitemview_setvisible_isbase = false;
            QAbstractItemView::setVisible(visible);
        } else if (qabstractitemview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qabstractitemview_setvisible_callback(this, cbval1);
        } else {
            QAbstractItemView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractitemview_heightforwidth_isbase) {
            qabstractitemview_heightforwidth_isbase = false;
            return QAbstractItemView::heightForWidth(param1);
        } else if (qabstractitemview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qabstractitemview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractItemView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractitemview_hasheightforwidth_isbase) {
            qabstractitemview_hasheightforwidth_isbase = false;
            return QAbstractItemView::hasHeightForWidth();
        } else if (qabstractitemview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qabstractitemview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QAbstractItemView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractitemview_paintengine_isbase) {
            qabstractitemview_paintengine_isbase = false;
            return QAbstractItemView::paintEngine();
        } else if (qabstractitemview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qabstractitemview_paintengine_callback();
            return callback_ret;
        } else {
            return QAbstractItemView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractitemview_keyreleaseevent_isbase) {
            qabstractitemview_keyreleaseevent_isbase = false;
            QAbstractItemView::keyReleaseEvent(event);
        } else if (qabstractitemview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qabstractitemview_keyreleaseevent_callback(this, cbval1);
        } else {
            QAbstractItemView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractitemview_enterevent_isbase) {
            qabstractitemview_enterevent_isbase = false;
            QAbstractItemView::enterEvent(event);
        } else if (qabstractitemview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qabstractitemview_enterevent_callback(this, cbval1);
        } else {
            QAbstractItemView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractitemview_leaveevent_isbase) {
            qabstractitemview_leaveevent_isbase = false;
            QAbstractItemView::leaveEvent(event);
        } else if (qabstractitemview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractitemview_leaveevent_callback(this, cbval1);
        } else {
            QAbstractItemView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractitemview_moveevent_isbase) {
            qabstractitemview_moveevent_isbase = false;
            QAbstractItemView::moveEvent(event);
        } else if (qabstractitemview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qabstractitemview_moveevent_callback(this, cbval1);
        } else {
            QAbstractItemView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractitemview_closeevent_isbase) {
            qabstractitemview_closeevent_isbase = false;
            QAbstractItemView::closeEvent(event);
        } else if (qabstractitemview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qabstractitemview_closeevent_callback(this, cbval1);
        } else {
            QAbstractItemView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractitemview_tabletevent_isbase) {
            qabstractitemview_tabletevent_isbase = false;
            QAbstractItemView::tabletEvent(event);
        } else if (qabstractitemview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qabstractitemview_tabletevent_callback(this, cbval1);
        } else {
            QAbstractItemView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractitemview_actionevent_isbase) {
            qabstractitemview_actionevent_isbase = false;
            QAbstractItemView::actionEvent(event);
        } else if (qabstractitemview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qabstractitemview_actionevent_callback(this, cbval1);
        } else {
            QAbstractItemView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractitemview_showevent_isbase) {
            qabstractitemview_showevent_isbase = false;
            QAbstractItemView::showEvent(event);
        } else if (qabstractitemview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qabstractitemview_showevent_callback(this, cbval1);
        } else {
            QAbstractItemView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractitemview_hideevent_isbase) {
            qabstractitemview_hideevent_isbase = false;
            QAbstractItemView::hideEvent(event);
        } else if (qabstractitemview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qabstractitemview_hideevent_callback(this, cbval1);
        } else {
            QAbstractItemView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractitemview_nativeevent_isbase) {
            qabstractitemview_nativeevent_isbase = false;
            return QAbstractItemView::nativeEvent(eventType, message, result);
        } else if (qabstractitemview_nativeevent_callback != nullptr) {
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

            bool callback_ret = qabstractitemview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractItemView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractitemview_metric_isbase) {
            qabstractitemview_metric_isbase = false;
            return QAbstractItemView::metric(param1);
        } else if (qabstractitemview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qabstractitemview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractItemView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractitemview_initpainter_isbase) {
            qabstractitemview_initpainter_isbase = false;
            QAbstractItemView::initPainter(painter);
        } else if (qabstractitemview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qabstractitemview_initpainter_callback(this, cbval1);
        } else {
            QAbstractItemView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractitemview_redirected_isbase) {
            qabstractitemview_redirected_isbase = false;
            return QAbstractItemView::redirected(offset);
        } else if (qabstractitemview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qabstractitemview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractItemView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractitemview_sharedpainter_isbase) {
            qabstractitemview_sharedpainter_isbase = false;
            return QAbstractItemView::sharedPainter();
        } else if (qabstractitemview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qabstractitemview_sharedpainter_callback();
            return callback_ret;
        } else {
            return QAbstractItemView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemview_childevent_isbase) {
            qabstractitemview_childevent_isbase = false;
            QAbstractItemView::childEvent(event);
        } else if (qabstractitemview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractitemview_childevent_callback(this, cbval1);
        } else {
            QAbstractItemView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemview_customevent_isbase) {
            qabstractitemview_customevent_isbase = false;
            QAbstractItemView::customEvent(event);
        } else if (qabstractitemview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractitemview_customevent_callback(this, cbval1);
        } else {
            QAbstractItemView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemview_connectnotify_isbase) {
            qabstractitemview_connectnotify_isbase = false;
            QAbstractItemView::connectNotify(signal);
        } else if (qabstractitemview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractitemview_connectnotify_callback(this, cbval1);
        } else {
            QAbstractItemView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemview_disconnectnotify_isbase) {
            qabstractitemview_disconnectnotify_isbase = false;
            QAbstractItemView::disconnectNotify(signal);
        } else if (qabstractitemview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractitemview_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractItemView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qabstractitemview_state_isbase) {
            qabstractitemview_state_isbase = false;
            return QAbstractItemView::state();
        } else if (qabstractitemview_state_callback != nullptr) {
            int callback_ret = qabstractitemview_state_callback();
            return static_cast<VirtualQAbstractItemView::State>(callback_ret);
        } else {
            return QAbstractItemView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qabstractitemview_setstate_isbase) {
            qabstractitemview_setstate_isbase = false;
            QAbstractItemView::setState(state);
        } else if (qabstractitemview_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qabstractitemview_setstate_callback(this, cbval1);
        } else {
            QAbstractItemView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qabstractitemview_scheduledelayeditemslayout_isbase) {
            qabstractitemview_scheduledelayeditemslayout_isbase = false;
            QAbstractItemView::scheduleDelayedItemsLayout();
        } else if (qabstractitemview_scheduledelayeditemslayout_callback != nullptr) {
            qabstractitemview_scheduledelayeditemslayout_callback();
        } else {
            QAbstractItemView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qabstractitemview_executedelayeditemslayout_isbase) {
            qabstractitemview_executedelayeditemslayout_isbase = false;
            QAbstractItemView::executeDelayedItemsLayout();
        } else if (qabstractitemview_executedelayeditemslayout_callback != nullptr) {
            qabstractitemview_executedelayeditemslayout_callback();
        } else {
            QAbstractItemView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qabstractitemview_setdirtyregion_isbase) {
            qabstractitemview_setdirtyregion_isbase = false;
            QAbstractItemView::setDirtyRegion(region);
        } else if (qabstractitemview_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            qabstractitemview_setdirtyregion_callback(this, cbval1);
        } else {
            QAbstractItemView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qabstractitemview_scrolldirtyregion_isbase) {
            qabstractitemview_scrolldirtyregion_isbase = false;
            QAbstractItemView::scrollDirtyRegion(dx, dy);
        } else if (qabstractitemview_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qabstractitemview_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            QAbstractItemView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qabstractitemview_dirtyregionoffset_isbase) {
            qabstractitemview_dirtyregionoffset_isbase = false;
            return QAbstractItemView::dirtyRegionOffset();
        } else if (qabstractitemview_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = qabstractitemview_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return QAbstractItemView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qabstractitemview_startautoscroll_isbase) {
            qabstractitemview_startautoscroll_isbase = false;
            QAbstractItemView::startAutoScroll();
        } else if (qabstractitemview_startautoscroll_callback != nullptr) {
            qabstractitemview_startautoscroll_callback();
        } else {
            QAbstractItemView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qabstractitemview_stopautoscroll_isbase) {
            qabstractitemview_stopautoscroll_isbase = false;
            QAbstractItemView::stopAutoScroll();
        } else if (qabstractitemview_stopautoscroll_callback != nullptr) {
            qabstractitemview_stopautoscroll_callback();
        } else {
            QAbstractItemView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qabstractitemview_doautoscroll_isbase) {
            qabstractitemview_doautoscroll_isbase = false;
            QAbstractItemView::doAutoScroll();
        } else if (qabstractitemview_doautoscroll_callback != nullptr) {
            qabstractitemview_doautoscroll_callback();
        } else {
            QAbstractItemView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qabstractitemview_dropindicatorposition_isbase) {
            qabstractitemview_dropindicatorposition_isbase = false;
            return QAbstractItemView::dropIndicatorPosition();
        } else if (qabstractitemview_dropindicatorposition_callback != nullptr) {
            int callback_ret = qabstractitemview_dropindicatorposition_callback();
            return static_cast<VirtualQAbstractItemView::DropIndicatorPosition>(callback_ret);
        } else {
            return QAbstractItemView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qabstractitemview_setviewportmargins_isbase) {
            qabstractitemview_setviewportmargins_isbase = false;
            QAbstractItemView::setViewportMargins(left, top, right, bottom);
        } else if (qabstractitemview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qabstractitemview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QAbstractItemView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qabstractitemview_viewportmargins_isbase) {
            qabstractitemview_viewportmargins_isbase = false;
            return QAbstractItemView::viewportMargins();
        } else if (qabstractitemview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qabstractitemview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QAbstractItemView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qabstractitemview_drawframe_isbase) {
            qabstractitemview_drawframe_isbase = false;
            QAbstractItemView::drawFrame(param1);
        } else if (qabstractitemview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qabstractitemview_drawframe_callback(this, cbval1);
        } else {
            QAbstractItemView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractitemview_updatemicrofocus_isbase) {
            qabstractitemview_updatemicrofocus_isbase = false;
            QAbstractItemView::updateMicroFocus();
        } else if (qabstractitemview_updatemicrofocus_callback != nullptr) {
            qabstractitemview_updatemicrofocus_callback();
        } else {
            QAbstractItemView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractitemview_create_isbase) {
            qabstractitemview_create_isbase = false;
            QAbstractItemView::create();
        } else if (qabstractitemview_create_callback != nullptr) {
            qabstractitemview_create_callback();
        } else {
            QAbstractItemView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractitemview_destroy_isbase) {
            qabstractitemview_destroy_isbase = false;
            QAbstractItemView::destroy();
        } else if (qabstractitemview_destroy_callback != nullptr) {
            qabstractitemview_destroy_callback();
        } else {
            QAbstractItemView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractitemview_focusnextchild_isbase) {
            qabstractitemview_focusnextchild_isbase = false;
            return QAbstractItemView::focusNextChild();
        } else if (qabstractitemview_focusnextchild_callback != nullptr) {
            bool callback_ret = qabstractitemview_focusnextchild_callback();
            return callback_ret;
        } else {
            return QAbstractItemView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractitemview_focuspreviouschild_isbase) {
            qabstractitemview_focuspreviouschild_isbase = false;
            return QAbstractItemView::focusPreviousChild();
        } else if (qabstractitemview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qabstractitemview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QAbstractItemView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractitemview_sender_isbase) {
            qabstractitemview_sender_isbase = false;
            return QAbstractItemView::sender();
        } else if (qabstractitemview_sender_callback != nullptr) {
            QObject* callback_ret = qabstractitemview_sender_callback();
            return callback_ret;
        } else {
            return QAbstractItemView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractitemview_sendersignalindex_isbase) {
            qabstractitemview_sendersignalindex_isbase = false;
            return QAbstractItemView::senderSignalIndex();
        } else if (qabstractitemview_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractitemview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractItemView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractitemview_receivers_isbase) {
            qabstractitemview_receivers_isbase = false;
            return QAbstractItemView::receivers(signal);
        } else if (qabstractitemview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractitemview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractItemView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractitemview_issignalconnected_isbase) {
            qabstractitemview_issignalconnected_isbase = false;
            return QAbstractItemView::isSignalConnected(signal);
        } else if (qabstractitemview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractitemview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractItemView::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qabstractitemview_getdecodedmetricf_isbase) {
            qabstractitemview_getdecodedmetricf_isbase = false;
            return QAbstractItemView::getDecodedMetricF(metricA, metricB);
        } else if (qabstractitemview_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qabstractitemview_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QAbstractItemView::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QAbstractItemView_DataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QAbstractItemView_QBaseDataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QAbstractItemView_RowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_QBaseRowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_RowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_QBaseRowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_SelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QAbstractItemView_QBaseSelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QAbstractItemView_CurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QAbstractItemView_QBaseCurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QAbstractItemView_UpdateEditorData(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseUpdateEditorData(QAbstractItemView* self);
    friend void QAbstractItemView_UpdateEditorGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseUpdateEditorGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_UpdateGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseUpdateGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_VerticalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_QBaseVerticalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_HorizontalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_QBaseHorizontalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_VerticalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_QBaseVerticalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_HorizontalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_QBaseHorizontalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_CloseEditor(QAbstractItemView* self, QWidget* editor, int hint);
    friend void QAbstractItemView_QBaseCloseEditor(QAbstractItemView* self, QWidget* editor, int hint);
    friend void QAbstractItemView_CommitData(QAbstractItemView* self, QWidget* editor);
    friend void QAbstractItemView_QBaseCommitData(QAbstractItemView* self, QWidget* editor);
    friend void QAbstractItemView_EditorDestroyed(QAbstractItemView* self, QObject* editor);
    friend void QAbstractItemView_QBaseEditorDestroyed(QAbstractItemView* self, QObject* editor);
    friend QModelIndex* QAbstractItemView_MoveCursor(QAbstractItemView* self, int cursorAction, int modifiers);
    friend QModelIndex* QAbstractItemView_QBaseMoveCursor(QAbstractItemView* self, int cursorAction, int modifiers);
    friend int QAbstractItemView_HorizontalOffset(const QAbstractItemView* self);
    friend int QAbstractItemView_QBaseHorizontalOffset(const QAbstractItemView* self);
    friend int QAbstractItemView_VerticalOffset(const QAbstractItemView* self);
    friend int QAbstractItemView_QBaseVerticalOffset(const QAbstractItemView* self);
    friend bool QAbstractItemView_IsIndexHidden(const QAbstractItemView* self, const QModelIndex* index);
    friend bool QAbstractItemView_QBaseIsIndexHidden(const QAbstractItemView* self, const QModelIndex* index);
    friend void QAbstractItemView_SetSelection(QAbstractItemView* self, const QRect* rect, int command);
    friend void QAbstractItemView_QBaseSetSelection(QAbstractItemView* self, const QRect* rect, int command);
    friend QRegion* QAbstractItemView_VisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection);
    friend QRegion* QAbstractItemView_QBaseVisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QAbstractItemView_SelectedIndexes(const QAbstractItemView* self);
    friend libqt_list /* of QModelIndex* */ QAbstractItemView_QBaseSelectedIndexes(const QAbstractItemView* self);
    friend bool QAbstractItemView_Edit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QAbstractItemView_QBaseEdit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QAbstractItemView_SelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event);
    friend int QAbstractItemView_QBaseSelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event);
    friend void QAbstractItemView_StartDrag(QAbstractItemView* self, int supportedActions);
    friend void QAbstractItemView_QBaseStartDrag(QAbstractItemView* self, int supportedActions);
    friend void QAbstractItemView_InitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option);
    friend void QAbstractItemView_QBaseInitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option);
    friend bool QAbstractItemView_FocusNextPrevChild(QAbstractItemView* self, bool next);
    friend bool QAbstractItemView_QBaseFocusNextPrevChild(QAbstractItemView* self, bool next);
    friend bool QAbstractItemView_Event(QAbstractItemView* self, QEvent* event);
    friend bool QAbstractItemView_QBaseEvent(QAbstractItemView* self, QEvent* event);
    friend bool QAbstractItemView_ViewportEvent(QAbstractItemView* self, QEvent* event);
    friend bool QAbstractItemView_QBaseViewportEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_MousePressEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_QBaseMousePressEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_MouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_QBaseMouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_MouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_QBaseMouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_MouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_QBaseMouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_DragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
    friend void QAbstractItemView_QBaseDragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
    friend void QAbstractItemView_DragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
    friend void QAbstractItemView_QBaseDragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
    friend void QAbstractItemView_DragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
    friend void QAbstractItemView_QBaseDragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
    friend void QAbstractItemView_DropEvent(QAbstractItemView* self, QDropEvent* event);
    friend void QAbstractItemView_QBaseDropEvent(QAbstractItemView* self, QDropEvent* event);
    friend void QAbstractItemView_FocusInEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_QBaseFocusInEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_FocusOutEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_QBaseFocusOutEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_KeyPressEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_QBaseKeyPressEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_ResizeEvent(QAbstractItemView* self, QResizeEvent* event);
    friend void QAbstractItemView_QBaseResizeEvent(QAbstractItemView* self, QResizeEvent* event);
    friend void QAbstractItemView_TimerEvent(QAbstractItemView* self, QTimerEvent* event);
    friend void QAbstractItemView_QBaseTimerEvent(QAbstractItemView* self, QTimerEvent* event);
    friend void QAbstractItemView_InputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
    friend void QAbstractItemView_QBaseInputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
    friend bool QAbstractItemView_EventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
    friend bool QAbstractItemView_QBaseEventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
    friend QSize* QAbstractItemView_ViewportSizeHint(const QAbstractItemView* self);
    friend QSize* QAbstractItemView_QBaseViewportSizeHint(const QAbstractItemView* self);
    friend void QAbstractItemView_PaintEvent(QAbstractItemView* self, QPaintEvent* param1);
    friend void QAbstractItemView_QBasePaintEvent(QAbstractItemView* self, QPaintEvent* param1);
    friend void QAbstractItemView_WheelEvent(QAbstractItemView* self, QWheelEvent* param1);
    friend void QAbstractItemView_QBaseWheelEvent(QAbstractItemView* self, QWheelEvent* param1);
    friend void QAbstractItemView_ContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1);
    friend void QAbstractItemView_QBaseContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1);
    friend void QAbstractItemView_ScrollContentsBy(QAbstractItemView* self, int dx, int dy);
    friend void QAbstractItemView_QBaseScrollContentsBy(QAbstractItemView* self, int dx, int dy);
    friend void QAbstractItemView_ChangeEvent(QAbstractItemView* self, QEvent* param1);
    friend void QAbstractItemView_QBaseChangeEvent(QAbstractItemView* self, QEvent* param1);
    friend void QAbstractItemView_InitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option);
    friend void QAbstractItemView_QBaseInitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option);
    friend void QAbstractItemView_KeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_QBaseKeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_EnterEvent(QAbstractItemView* self, QEnterEvent* event);
    friend void QAbstractItemView_QBaseEnterEvent(QAbstractItemView* self, QEnterEvent* event);
    friend void QAbstractItemView_LeaveEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_QBaseLeaveEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_MoveEvent(QAbstractItemView* self, QMoveEvent* event);
    friend void QAbstractItemView_QBaseMoveEvent(QAbstractItemView* self, QMoveEvent* event);
    friend void QAbstractItemView_CloseEvent(QAbstractItemView* self, QCloseEvent* event);
    friend void QAbstractItemView_QBaseCloseEvent(QAbstractItemView* self, QCloseEvent* event);
    friend void QAbstractItemView_TabletEvent(QAbstractItemView* self, QTabletEvent* event);
    friend void QAbstractItemView_QBaseTabletEvent(QAbstractItemView* self, QTabletEvent* event);
    friend void QAbstractItemView_ActionEvent(QAbstractItemView* self, QActionEvent* event);
    friend void QAbstractItemView_QBaseActionEvent(QAbstractItemView* self, QActionEvent* event);
    friend void QAbstractItemView_ShowEvent(QAbstractItemView* self, QShowEvent* event);
    friend void QAbstractItemView_QBaseShowEvent(QAbstractItemView* self, QShowEvent* event);
    friend void QAbstractItemView_HideEvent(QAbstractItemView* self, QHideEvent* event);
    friend void QAbstractItemView_QBaseHideEvent(QAbstractItemView* self, QHideEvent* event);
    friend bool QAbstractItemView_NativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QAbstractItemView_QBaseNativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractItemView_Metric(const QAbstractItemView* self, int param1);
    friend int QAbstractItemView_QBaseMetric(const QAbstractItemView* self, int param1);
    friend void QAbstractItemView_InitPainter(const QAbstractItemView* self, QPainter* painter);
    friend void QAbstractItemView_QBaseInitPainter(const QAbstractItemView* self, QPainter* painter);
    friend QPaintDevice* QAbstractItemView_Redirected(const QAbstractItemView* self, QPoint* offset);
    friend QPaintDevice* QAbstractItemView_QBaseRedirected(const QAbstractItemView* self, QPoint* offset);
    friend QPainter* QAbstractItemView_SharedPainter(const QAbstractItemView* self);
    friend QPainter* QAbstractItemView_QBaseSharedPainter(const QAbstractItemView* self);
    friend void QAbstractItemView_ChildEvent(QAbstractItemView* self, QChildEvent* event);
    friend void QAbstractItemView_QBaseChildEvent(QAbstractItemView* self, QChildEvent* event);
    friend void QAbstractItemView_CustomEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_QBaseCustomEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_ConnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend void QAbstractItemView_QBaseConnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend void QAbstractItemView_DisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend void QAbstractItemView_QBaseDisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend int QAbstractItemView_State(const QAbstractItemView* self);
    friend int QAbstractItemView_QBaseState(const QAbstractItemView* self);
    friend void QAbstractItemView_SetState(QAbstractItemView* self, int state);
    friend void QAbstractItemView_QBaseSetState(QAbstractItemView* self, int state);
    friend void QAbstractItemView_ScheduleDelayedItemsLayout(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseScheduleDelayedItemsLayout(QAbstractItemView* self);
    friend void QAbstractItemView_ExecuteDelayedItemsLayout(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseExecuteDelayedItemsLayout(QAbstractItemView* self);
    friend void QAbstractItemView_SetDirtyRegion(QAbstractItemView* self, const QRegion* region);
    friend void QAbstractItemView_QBaseSetDirtyRegion(QAbstractItemView* self, const QRegion* region);
    friend void QAbstractItemView_ScrollDirtyRegion(QAbstractItemView* self, int dx, int dy);
    friend void QAbstractItemView_QBaseScrollDirtyRegion(QAbstractItemView* self, int dx, int dy);
    friend QPoint* QAbstractItemView_DirtyRegionOffset(const QAbstractItemView* self);
    friend QPoint* QAbstractItemView_QBaseDirtyRegionOffset(const QAbstractItemView* self);
    friend void QAbstractItemView_StartAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseStartAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_StopAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseStopAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_DoAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseDoAutoScroll(QAbstractItemView* self);
    friend int QAbstractItemView_DropIndicatorPosition(const QAbstractItemView* self);
    friend int QAbstractItemView_QBaseDropIndicatorPosition(const QAbstractItemView* self);
    friend void QAbstractItemView_SetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom);
    friend void QAbstractItemView_QBaseSetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom);
    friend QMargins* QAbstractItemView_ViewportMargins(const QAbstractItemView* self);
    friend QMargins* QAbstractItemView_QBaseViewportMargins(const QAbstractItemView* self);
    friend void QAbstractItemView_DrawFrame(QAbstractItemView* self, QPainter* param1);
    friend void QAbstractItemView_QBaseDrawFrame(QAbstractItemView* self, QPainter* param1);
    friend void QAbstractItemView_UpdateMicroFocus(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseUpdateMicroFocus(QAbstractItemView* self);
    friend void QAbstractItemView_Create(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseCreate(QAbstractItemView* self);
    friend void QAbstractItemView_Destroy(QAbstractItemView* self);
    friend void QAbstractItemView_QBaseDestroy(QAbstractItemView* self);
    friend bool QAbstractItemView_FocusNextChild(QAbstractItemView* self);
    friend bool QAbstractItemView_QBaseFocusNextChild(QAbstractItemView* self);
    friend bool QAbstractItemView_FocusPreviousChild(QAbstractItemView* self);
    friend bool QAbstractItemView_QBaseFocusPreviousChild(QAbstractItemView* self);
    friend QObject* QAbstractItemView_Sender(const QAbstractItemView* self);
    friend QObject* QAbstractItemView_QBaseSender(const QAbstractItemView* self);
    friend int QAbstractItemView_SenderSignalIndex(const QAbstractItemView* self);
    friend int QAbstractItemView_QBaseSenderSignalIndex(const QAbstractItemView* self);
    friend int QAbstractItemView_Receivers(const QAbstractItemView* self, const char* signal);
    friend int QAbstractItemView_QBaseReceivers(const QAbstractItemView* self, const char* signal);
    friend bool QAbstractItemView_IsSignalConnected(const QAbstractItemView* self, const QMetaMethod* signal);
    friend bool QAbstractItemView_QBaseIsSignalConnected(const QAbstractItemView* self, const QMetaMethod* signal);
    friend double QAbstractItemView_GetDecodedMetricF(const QAbstractItemView* self, int metricA, int metricB);
    friend double QAbstractItemView_QBaseGetDecodedMetricF(const QAbstractItemView* self, int metricA, int metricB);
};

#endif
