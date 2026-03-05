#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTITEMVIEW_H
#define SRCC_LIBVIRTUALQABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemView so that we can call protected methods
class VirtualQAbstractItemView : public QAbstractItemView {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractItemView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QAbstractItemView_MetaObject_Callback = QMetaObject* (*)();
    using QAbstractItemView_Metacast_Callback = void* (*)(QAbstractItemView*, const char*);
    using QAbstractItemView_Metacall_Callback = int (*)(QAbstractItemView*, int, int, void**);
    using QAbstractItemView_SetModel_Callback = void (*)(QAbstractItemView*, QAbstractItemModel*);
    using QAbstractItemView_SetSelectionModel_Callback = void (*)(QAbstractItemView*, QItemSelectionModel*);
    using QAbstractItemView_KeyboardSearch_Callback = void (*)(QAbstractItemView*, const char*);
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
    QAbstractItemView_MetaObject_Callback qabstractitemview_metaobject_callback = nullptr;
    QAbstractItemView_Metacast_Callback qabstractitemview_metacast_callback = nullptr;
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
    mutable bool qabstractitemview_metaobject_isbase = false;
    mutable bool qabstractitemview_metacast_isbase = false;
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

    // Callback setters
    inline void setQAbstractItemView_MetaObject_Callback(QAbstractItemView_MetaObject_Callback cb) { qabstractitemview_metaobject_callback = cb; }
    inline void setQAbstractItemView_Metacast_Callback(QAbstractItemView_Metacast_Callback cb) { qabstractitemview_metacast_callback = cb; }
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
    inline void setQAbstractItemView_MetaObject_IsBase(bool value) const { qabstractitemview_metaobject_isbase = value; }
    inline void setQAbstractItemView_Metacast_IsBase(bool value) const { qabstractitemview_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qabstractitemview_metaobject_isbase) {
            qabstractitemview_metaobject_isbase = false;
            return QAbstractItemView::metaObject();
        }
        auto metaobject_cb = qabstractitemview_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAbstractItemView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractitemview_metacast_isbase) {
            qabstractitemview_metacast_isbase = false;
            return QAbstractItemView::qt_metacast(param1);
        }
        auto metacast_cb = qabstractitemview_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemview_metacall_isbase) {
            qabstractitemview_metacall_isbase = false;
            return QAbstractItemView::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qabstractitemview_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qabstractitemview_setmodel_isbase) {
            qabstractitemview_setmodel_isbase = false;
            QAbstractItemView::setModel(model);
            return;
        }
        auto setmodel_cb = qabstractitemview_setmodel_callback;
        if (setmodel_cb) {
            QAbstractItemModel* cbval1 = model;

            setmodel_cb(this, cbval1);
            return;
        }
        QAbstractItemView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qabstractitemview_setselectionmodel_isbase) {
            qabstractitemview_setselectionmodel_isbase = false;
            QAbstractItemView::setSelectionModel(selectionModel);
            return;
        }
        auto setselectionmodel_cb = qabstractitemview_setselectionmodel_callback;
        if (setselectionmodel_cb) {
            QItemSelectionModel* cbval1 = selectionModel;

            setselectionmodel_cb(this, cbval1);
            return;
        }
        QAbstractItemView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qabstractitemview_keyboardsearch_isbase) {
            qabstractitemview_keyboardsearch_isbase = false;
            QAbstractItemView::keyboardSearch(search);
            return;
        }
        auto keyboardsearch_cb = qabstractitemview_keyboardsearch_callback;
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
        QAbstractItemView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        auto visualrect_cb = qabstractitemview_visualrect_callback;
        if (visualrect_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = visualrect_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        auto scrollto_cb = qabstractitemview_scrollto_callback;
        if (scrollto_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            scrollto_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& point) const override {
        auto indexat_cb = qabstractitemview_indexat_callback;
        if (indexat_cb) {
            const QPoint& point_ret = point;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&point_ret);

            QModelIndex* callback_ret = indexat_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qabstractitemview_sizehintforrow_isbase) {
            qabstractitemview_sizehintforrow_isbase = false;
            return QAbstractItemView::sizeHintForRow(row);
        }
        auto sizehintforrow_cb = qabstractitemview_sizehintforrow_callback;
        if (sizehintforrow_cb) {
            int cbval1 = row;

            int callback_ret = sizehintforrow_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qabstractitemview_sizehintforcolumn_isbase) {
            qabstractitemview_sizehintforcolumn_isbase = false;
            return QAbstractItemView::sizeHintForColumn(column);
        }
        auto sizehintforcolumn_cb = qabstractitemview_sizehintforcolumn_callback;
        if (sizehintforcolumn_cb) {
            int cbval1 = column;

            int callback_ret = sizehintforcolumn_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qabstractitemview_itemdelegateforindex_isbase) {
            qabstractitemview_itemdelegateforindex_isbase = false;
            return QAbstractItemView::itemDelegateForIndex(index);
        }
        auto itemdelegateforindex_cb = qabstractitemview_itemdelegateforindex_callback;
        if (itemdelegateforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = itemdelegateforindex_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qabstractitemview_inputmethodquery_isbase) {
            qabstractitemview_inputmethodquery_isbase = false;
            return QAbstractItemView::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qabstractitemview_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractItemView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qabstractitemview_reset_isbase) {
            qabstractitemview_reset_isbase = false;
            QAbstractItemView::reset();
            return;
        }
        auto reset_cb = qabstractitemview_reset_callback;
        if (reset_cb) {
            reset_cb();
            return;
        }
        QAbstractItemView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qabstractitemview_setrootindex_isbase) {
            qabstractitemview_setrootindex_isbase = false;
            QAbstractItemView::setRootIndex(index);
            return;
        }
        auto setrootindex_cb = qabstractitemview_setrootindex_callback;
        if (setrootindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            setrootindex_cb(this, cbval1);
            return;
        }
        QAbstractItemView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qabstractitemview_doitemslayout_isbase) {
            qabstractitemview_doitemslayout_isbase = false;
            QAbstractItemView::doItemsLayout();
            return;
        }
        auto doitemslayout_cb = qabstractitemview_doitemslayout_callback;
        if (doitemslayout_cb) {
            doitemslayout_cb();
            return;
        }
        QAbstractItemView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qabstractitemview_selectall_isbase) {
            qabstractitemview_selectall_isbase = false;
            QAbstractItemView::selectAll();
            return;
        }
        auto selectall_cb = qabstractitemview_selectall_callback;
        if (selectall_cb) {
            selectall_cb();
            return;
        }
        QAbstractItemView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qabstractitemview_datachanged_isbase) {
            qabstractitemview_datachanged_isbase = false;
            QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
            return;
        }
        auto datachanged_cb = qabstractitemview_datachanged_callback;
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
        QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qabstractitemview_rowsinserted_isbase) {
            qabstractitemview_rowsinserted_isbase = false;
            QAbstractItemView::rowsInserted(parent, start, end);
            return;
        }
        auto rowsinserted_cb = qabstractitemview_rowsinserted_callback;
        if (rowsinserted_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsinserted_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qabstractitemview_rowsabouttoberemoved_isbase) {
            qabstractitemview_rowsabouttoberemoved_isbase = false;
            QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
            return;
        }
        auto rowsabouttoberemoved_cb = qabstractitemview_rowsabouttoberemoved_callback;
        if (rowsabouttoberemoved_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsabouttoberemoved_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qabstractitemview_selectionchanged_isbase) {
            qabstractitemview_selectionchanged_isbase = false;
            QAbstractItemView::selectionChanged(selected, deselected);
            return;
        }
        auto selectionchanged_cb = qabstractitemview_selectionchanged_callback;
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
        QAbstractItemView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qabstractitemview_currentchanged_isbase) {
            qabstractitemview_currentchanged_isbase = false;
            QAbstractItemView::currentChanged(current, previous);
            return;
        }
        auto currentchanged_cb = qabstractitemview_currentchanged_callback;
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
        QAbstractItemView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qabstractitemview_updateeditordata_isbase) {
            qabstractitemview_updateeditordata_isbase = false;
            QAbstractItemView::updateEditorData();
            return;
        }
        auto updateeditordata_cb = qabstractitemview_updateeditordata_callback;
        if (updateeditordata_cb) {
            updateeditordata_cb();
            return;
        }
        QAbstractItemView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qabstractitemview_updateeditorgeometries_isbase) {
            qabstractitemview_updateeditorgeometries_isbase = false;
            QAbstractItemView::updateEditorGeometries();
            return;
        }
        auto updateeditorgeometries_cb = qabstractitemview_updateeditorgeometries_callback;
        if (updateeditorgeometries_cb) {
            updateeditorgeometries_cb();
            return;
        }
        QAbstractItemView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qabstractitemview_updategeometries_isbase) {
            qabstractitemview_updategeometries_isbase = false;
            QAbstractItemView::updateGeometries();
            return;
        }
        auto updategeometries_cb = qabstractitemview_updategeometries_callback;
        if (updategeometries_cb) {
            updategeometries_cb();
            return;
        }
        QAbstractItemView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qabstractitemview_verticalscrollbaraction_isbase) {
            qabstractitemview_verticalscrollbaraction_isbase = false;
            QAbstractItemView::verticalScrollbarAction(action);
            return;
        }
        auto verticalscrollbaraction_cb = qabstractitemview_verticalscrollbaraction_callback;
        if (verticalscrollbaraction_cb) {
            int cbval1 = action;

            verticalscrollbaraction_cb(this, cbval1);
            return;
        }
        QAbstractItemView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qabstractitemview_horizontalscrollbaraction_isbase) {
            qabstractitemview_horizontalscrollbaraction_isbase = false;
            QAbstractItemView::horizontalScrollbarAction(action);
            return;
        }
        auto horizontalscrollbaraction_cb = qabstractitemview_horizontalscrollbaraction_callback;
        if (horizontalscrollbaraction_cb) {
            int cbval1 = action;

            horizontalscrollbaraction_cb(this, cbval1);
            return;
        }
        QAbstractItemView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qabstractitemview_verticalscrollbarvaluechanged_isbase) {
            qabstractitemview_verticalscrollbarvaluechanged_isbase = false;
            QAbstractItemView::verticalScrollbarValueChanged(value);
            return;
        }
        auto verticalscrollbarvaluechanged_cb = qabstractitemview_verticalscrollbarvaluechanged_callback;
        if (verticalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            verticalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QAbstractItemView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qabstractitemview_horizontalscrollbarvaluechanged_isbase) {
            qabstractitemview_horizontalscrollbarvaluechanged_isbase = false;
            QAbstractItemView::horizontalScrollbarValueChanged(value);
            return;
        }
        auto horizontalscrollbarvaluechanged_cb = qabstractitemview_horizontalscrollbarvaluechanged_callback;
        if (horizontalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            horizontalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QAbstractItemView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qabstractitemview_closeeditor_isbase) {
            qabstractitemview_closeeditor_isbase = false;
            QAbstractItemView::closeEditor(editor, hint);
            return;
        }
        auto closeeditor_cb = qabstractitemview_closeeditor_callback;
        if (closeeditor_cb) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            closeeditor_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractItemView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qabstractitemview_commitdata_isbase) {
            qabstractitemview_commitdata_isbase = false;
            QAbstractItemView::commitData(editor);
            return;
        }
        auto commitdata_cb = qabstractitemview_commitdata_callback;
        if (commitdata_cb) {
            QWidget* cbval1 = editor;

            commitdata_cb(this, cbval1);
            return;
        }
        QAbstractItemView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qabstractitemview_editordestroyed_isbase) {
            qabstractitemview_editordestroyed_isbase = false;
            QAbstractItemView::editorDestroyed(editor);
            return;
        }
        auto editordestroyed_cb = qabstractitemview_editordestroyed_callback;
        if (editordestroyed_cb) {
            QObject* cbval1 = editor;

            editordestroyed_cb(this, cbval1);
            return;
        }
        QAbstractItemView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        auto movecursor_cb = qabstractitemview_movecursor_callback;
        if (movecursor_cb) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = movecursor_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        auto horizontaloffset_cb = qabstractitemview_horizontaloffset_callback;
        if (horizontaloffset_cb) {
            int callback_ret = horizontaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        auto verticaloffset_cb = qabstractitemview_verticaloffset_callback;
        if (verticaloffset_cb) {
            int callback_ret = verticaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        auto isindexhidden_cb = qabstractitemview_isindexhidden_callback;
        if (isindexhidden_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = isindexhidden_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        auto setselection_cb = qabstractitemview_setselection_callback;
        if (setselection_cb) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            setselection_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        auto visualregionforselection_cb = qabstractitemview_visualregionforselection_callback;
        if (visualregionforselection_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = visualregionforselection_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qabstractitemview_selectedindexes_isbase) {
            qabstractitemview_selectedindexes_isbase = false;
            return QAbstractItemView::selectedIndexes();
        }
        auto selectedindexes_cb = qabstractitemview_selectedindexes_callback;
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
        return QAbstractItemView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qabstractitemview_edit2_isbase) {
            qabstractitemview_edit2_isbase = false;
            return QAbstractItemView::edit(index, trigger, event);
        }
        auto edit2_cb = qabstractitemview_edit2_callback;
        if (edit2_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = edit2_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qabstractitemview_selectioncommand_isbase) {
            qabstractitemview_selectioncommand_isbase = false;
            return QAbstractItemView::selectionCommand(index, event);
        }
        auto selectioncommand_cb = qabstractitemview_selectioncommand_callback;
        if (selectioncommand_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = selectioncommand_cb(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QAbstractItemView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qabstractitemview_startdrag_isbase) {
            qabstractitemview_startdrag_isbase = false;
            QAbstractItemView::startDrag(supportedActions);
            return;
        }
        auto startdrag_cb = qabstractitemview_startdrag_callback;
        if (startdrag_cb) {
            int cbval1 = static_cast<int>(supportedActions);

            startdrag_cb(this, cbval1);
            return;
        }
        QAbstractItemView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qabstractitemview_initviewitemoption_isbase) {
            qabstractitemview_initviewitemoption_isbase = false;
            QAbstractItemView::initViewItemOption(option);
            return;
        }
        auto initviewitemoption_cb = qabstractitemview_initviewitemoption_callback;
        if (initviewitemoption_cb) {
            QStyleOptionViewItem* cbval1 = option;

            initviewitemoption_cb(this, cbval1);
            return;
        }
        QAbstractItemView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractitemview_focusnextprevchild_isbase) {
            qabstractitemview_focusnextprevchild_isbase = false;
            return QAbstractItemView::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qabstractitemview_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemview_event_isbase) {
            qabstractitemview_event_isbase = false;
            return QAbstractItemView::event(event);
        }
        auto event_cb = qabstractitemview_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qabstractitemview_viewportevent_isbase) {
            qabstractitemview_viewportevent_isbase = false;
            return QAbstractItemView::viewportEvent(event);
        }
        auto viewportevent_cb = qabstractitemview_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousepressevent_isbase) {
            qabstractitemview_mousepressevent_isbase = false;
            QAbstractItemView::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qabstractitemview_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousemoveevent_isbase) {
            qabstractitemview_mousemoveevent_isbase = false;
            QAbstractItemView::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qabstractitemview_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousereleaseevent_isbase) {
            qabstractitemview_mousereleaseevent_isbase = false;
            QAbstractItemView::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qabstractitemview_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousedoubleclickevent_isbase) {
            qabstractitemview_mousedoubleclickevent_isbase = false;
            QAbstractItemView::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qabstractitemview_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractitemview_dragenterevent_isbase) {
            qabstractitemview_dragenterevent_isbase = false;
            QAbstractItemView::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qabstractitemview_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractitemview_dragmoveevent_isbase) {
            qabstractitemview_dragmoveevent_isbase = false;
            QAbstractItemView::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qabstractitemview_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractitemview_dragleaveevent_isbase) {
            qabstractitemview_dragleaveevent_isbase = false;
            QAbstractItemView::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qabstractitemview_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractitemview_dropevent_isbase) {
            qabstractitemview_dropevent_isbase = false;
            QAbstractItemView::dropEvent(event);
            return;
        }
        auto dropevent_cb = qabstractitemview_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractitemview_focusinevent_isbase) {
            qabstractitemview_focusinevent_isbase = false;
            QAbstractItemView::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qabstractitemview_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractitemview_focusoutevent_isbase) {
            qabstractitemview_focusoutevent_isbase = false;
            QAbstractItemView::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qabstractitemview_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractitemview_keypressevent_isbase) {
            qabstractitemview_keypressevent_isbase = false;
            QAbstractItemView::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qabstractitemview_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractitemview_resizeevent_isbase) {
            qabstractitemview_resizeevent_isbase = false;
            QAbstractItemView::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qabstractitemview_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemview_timerevent_isbase) {
            qabstractitemview_timerevent_isbase = false;
            QAbstractItemView::timerEvent(event);
            return;
        }
        auto timerevent_cb = qabstractitemview_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qabstractitemview_inputmethodevent_isbase) {
            qabstractitemview_inputmethodevent_isbase = false;
            QAbstractItemView::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qabstractitemview_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qabstractitemview_eventfilter_isbase) {
            qabstractitemview_eventfilter_isbase = false;
            return QAbstractItemView::eventFilter(object, event);
        }
        auto eventfilter_cb = qabstractitemview_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractItemView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qabstractitemview_viewportsizehint_isbase) {
            qabstractitemview_viewportsizehint_isbase = false;
            return QAbstractItemView::viewportSizeHint();
        }
        auto viewportsizehint_cb = qabstractitemview_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QAbstractItemView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractitemview_minimumsizehint_isbase) {
            qabstractitemview_minimumsizehint_isbase = false;
            return QAbstractItemView::minimumSizeHint();
        }
        auto minimumsizehint_cb = qabstractitemview_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QAbstractItemView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractitemview_sizehint_isbase) {
            qabstractitemview_sizehint_isbase = false;
            return QAbstractItemView::sizeHint();
        }
        auto sizehint_cb = qabstractitemview_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QAbstractItemView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qabstractitemview_setupviewport_isbase) {
            qabstractitemview_setupviewport_isbase = false;
            QAbstractItemView::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qabstractitemview_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QAbstractItemView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qabstractitemview_paintevent_isbase) {
            qabstractitemview_paintevent_isbase = false;
            QAbstractItemView::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qabstractitemview_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qabstractitemview_wheelevent_isbase) {
            qabstractitemview_wheelevent_isbase = false;
            QAbstractItemView::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = qabstractitemview_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;

            wheelevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractitemview_contextmenuevent_isbase) {
            qabstractitemview_contextmenuevent_isbase = false;
            QAbstractItemView::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qabstractitemview_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qabstractitemview_scrollcontentsby_isbase) {
            qabstractitemview_scrollcontentsby_isbase = false;
            QAbstractItemView::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qabstractitemview_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractItemView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractitemview_changeevent_isbase) {
            qabstractitemview_changeevent_isbase = false;
            QAbstractItemView::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qabstractitemview_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qabstractitemview_initstyleoption_isbase) {
            qabstractitemview_initstyleoption_isbase = false;
            QAbstractItemView::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qabstractitemview_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QAbstractItemView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractitemview_devtype_isbase) {
            qabstractitemview_devtype_isbase = false;
            return QAbstractItemView::devType();
        }
        auto devtype_cb = qabstractitemview_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractitemview_setvisible_isbase) {
            qabstractitemview_setvisible_isbase = false;
            QAbstractItemView::setVisible(visible);
            return;
        }
        auto setvisible_cb = qabstractitemview_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QAbstractItemView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractitemview_heightforwidth_isbase) {
            qabstractitemview_heightforwidth_isbase = false;
            return QAbstractItemView::heightForWidth(param1);
        }
        auto heightforwidth_cb = qabstractitemview_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractitemview_hasheightforwidth_isbase) {
            qabstractitemview_hasheightforwidth_isbase = false;
            return QAbstractItemView::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qabstractitemview_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QAbstractItemView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractitemview_paintengine_isbase) {
            qabstractitemview_paintengine_isbase = false;
            return QAbstractItemView::paintEngine();
        }
        auto paintengine_cb = qabstractitemview_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QAbstractItemView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractitemview_keyreleaseevent_isbase) {
            qabstractitemview_keyreleaseevent_isbase = false;
            QAbstractItemView::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qabstractitemview_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractitemview_enterevent_isbase) {
            qabstractitemview_enterevent_isbase = false;
            QAbstractItemView::enterEvent(event);
            return;
        }
        auto enterevent_cb = qabstractitemview_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractitemview_leaveevent_isbase) {
            qabstractitemview_leaveevent_isbase = false;
            QAbstractItemView::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qabstractitemview_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractitemview_moveevent_isbase) {
            qabstractitemview_moveevent_isbase = false;
            QAbstractItemView::moveEvent(event);
            return;
        }
        auto moveevent_cb = qabstractitemview_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractitemview_closeevent_isbase) {
            qabstractitemview_closeevent_isbase = false;
            QAbstractItemView::closeEvent(event);
            return;
        }
        auto closeevent_cb = qabstractitemview_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractitemview_tabletevent_isbase) {
            qabstractitemview_tabletevent_isbase = false;
            QAbstractItemView::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qabstractitemview_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractitemview_actionevent_isbase) {
            qabstractitemview_actionevent_isbase = false;
            QAbstractItemView::actionEvent(event);
            return;
        }
        auto actionevent_cb = qabstractitemview_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractitemview_showevent_isbase) {
            qabstractitemview_showevent_isbase = false;
            QAbstractItemView::showEvent(event);
            return;
        }
        auto showevent_cb = qabstractitemview_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractitemview_hideevent_isbase) {
            qabstractitemview_hideevent_isbase = false;
            QAbstractItemView::hideEvent(event);
            return;
        }
        auto hideevent_cb = qabstractitemview_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractitemview_nativeevent_isbase) {
            qabstractitemview_nativeevent_isbase = false;
            return QAbstractItemView::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qabstractitemview_nativeevent_callback;
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
        return QAbstractItemView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractitemview_metric_isbase) {
            qabstractitemview_metric_isbase = false;
            return QAbstractItemView::metric(param1);
        }
        auto metric_cb = qabstractitemview_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractitemview_initpainter_isbase) {
            qabstractitemview_initpainter_isbase = false;
            QAbstractItemView::initPainter(painter);
            return;
        }
        auto initpainter_cb = qabstractitemview_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QAbstractItemView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractitemview_redirected_isbase) {
            qabstractitemview_redirected_isbase = false;
            return QAbstractItemView::redirected(offset);
        }
        auto redirected_cb = qabstractitemview_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractitemview_sharedpainter_isbase) {
            qabstractitemview_sharedpainter_isbase = false;
            return QAbstractItemView::sharedPainter();
        }
        auto sharedpainter_cb = qabstractitemview_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QAbstractItemView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemview_childevent_isbase) {
            qabstractitemview_childevent_isbase = false;
            QAbstractItemView::childEvent(event);
            return;
        }
        auto childevent_cb = qabstractitemview_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemview_customevent_isbase) {
            qabstractitemview_customevent_isbase = false;
            QAbstractItemView::customEvent(event);
            return;
        }
        auto customevent_cb = qabstractitemview_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAbstractItemView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemview_connectnotify_isbase) {
            qabstractitemview_connectnotify_isbase = false;
            QAbstractItemView::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qabstractitemview_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAbstractItemView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemview_disconnectnotify_isbase) {
            qabstractitemview_disconnectnotify_isbase = false;
            QAbstractItemView::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qabstractitemview_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAbstractItemView::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qabstractitemview_state_isbase) {
            qabstractitemview_state_isbase = false;
            return QAbstractItemView::state();
        }
        auto state_cb = qabstractitemview_state_callback;
        if (state_cb) {
            int callback_ret = state_cb();
            return static_cast<VirtualQAbstractItemView::State>(callback_ret);
        }
        return QAbstractItemView::state();
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qabstractitemview_setstate_isbase) {
            qabstractitemview_setstate_isbase = false;
            QAbstractItemView::setState(state);
            return;
        }
        auto setstate_cb = qabstractitemview_setstate_callback;
        if (setstate_cb) {
            int cbval1 = static_cast<int>(state);

            setstate_cb(this, cbval1);
            return;
        }
        QAbstractItemView::setState(state);
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qabstractitemview_scheduledelayeditemslayout_isbase) {
            qabstractitemview_scheduledelayeditemslayout_isbase = false;
            QAbstractItemView::scheduleDelayedItemsLayout();
            return;
        }
        auto scheduledelayeditemslayout_cb = qabstractitemview_scheduledelayeditemslayout_callback;
        if (scheduledelayeditemslayout_cb) {
            scheduledelayeditemslayout_cb();
            return;
        }
        QAbstractItemView::scheduleDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qabstractitemview_executedelayeditemslayout_isbase) {
            qabstractitemview_executedelayeditemslayout_isbase = false;
            QAbstractItemView::executeDelayedItemsLayout();
            return;
        }
        auto executedelayeditemslayout_cb = qabstractitemview_executedelayeditemslayout_callback;
        if (executedelayeditemslayout_cb) {
            executedelayeditemslayout_cb();
            return;
        }
        QAbstractItemView::executeDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qabstractitemview_setdirtyregion_isbase) {
            qabstractitemview_setdirtyregion_isbase = false;
            QAbstractItemView::setDirtyRegion(region);
            return;
        }
        auto setdirtyregion_cb = qabstractitemview_setdirtyregion_callback;
        if (setdirtyregion_cb) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            setdirtyregion_cb(this, cbval1);
            return;
        }
        QAbstractItemView::setDirtyRegion(region);
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qabstractitemview_scrolldirtyregion_isbase) {
            qabstractitemview_scrolldirtyregion_isbase = false;
            QAbstractItemView::scrollDirtyRegion(dx, dy);
            return;
        }
        auto scrolldirtyregion_cb = qabstractitemview_scrolldirtyregion_callback;
        if (scrolldirtyregion_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrolldirtyregion_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractItemView::scrollDirtyRegion(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qabstractitemview_dirtyregionoffset_isbase) {
            qabstractitemview_dirtyregionoffset_isbase = false;
            return QAbstractItemView::dirtyRegionOffset();
        }
        auto dirtyregionoffset_cb = qabstractitemview_dirtyregionoffset_callback;
        if (dirtyregionoffset_cb) {
            QPoint* callback_ret = dirtyregionoffset_cb();
            return *callback_ret;
        }
        return QAbstractItemView::dirtyRegionOffset();
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qabstractitemview_startautoscroll_isbase) {
            qabstractitemview_startautoscroll_isbase = false;
            QAbstractItemView::startAutoScroll();
            return;
        }
        auto startautoscroll_cb = qabstractitemview_startautoscroll_callback;
        if (startautoscroll_cb) {
            startautoscroll_cb();
            return;
        }
        QAbstractItemView::startAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qabstractitemview_stopautoscroll_isbase) {
            qabstractitemview_stopautoscroll_isbase = false;
            QAbstractItemView::stopAutoScroll();
            return;
        }
        auto stopautoscroll_cb = qabstractitemview_stopautoscroll_callback;
        if (stopautoscroll_cb) {
            stopautoscroll_cb();
            return;
        }
        QAbstractItemView::stopAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qabstractitemview_doautoscroll_isbase) {
            qabstractitemview_doautoscroll_isbase = false;
            QAbstractItemView::doAutoScroll();
            return;
        }
        auto doautoscroll_cb = qabstractitemview_doautoscroll_callback;
        if (doautoscroll_cb) {
            doautoscroll_cb();
            return;
        }
        QAbstractItemView::doAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qabstractitemview_dropindicatorposition_isbase) {
            qabstractitemview_dropindicatorposition_isbase = false;
            return QAbstractItemView::dropIndicatorPosition();
        }
        auto dropindicatorposition_cb = qabstractitemview_dropindicatorposition_callback;
        if (dropindicatorposition_cb) {
            int callback_ret = dropindicatorposition_cb();
            return static_cast<VirtualQAbstractItemView::DropIndicatorPosition>(callback_ret);
        }
        return QAbstractItemView::dropIndicatorPosition();
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qabstractitemview_setviewportmargins_isbase) {
            qabstractitemview_setviewportmargins_isbase = false;
            QAbstractItemView::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qabstractitemview_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QAbstractItemView::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qabstractitemview_viewportmargins_isbase) {
            qabstractitemview_viewportmargins_isbase = false;
            return QAbstractItemView::viewportMargins();
        }
        auto viewportmargins_cb = qabstractitemview_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QAbstractItemView::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qabstractitemview_drawframe_isbase) {
            qabstractitemview_drawframe_isbase = false;
            QAbstractItemView::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qabstractitemview_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QAbstractItemView::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractitemview_updatemicrofocus_isbase) {
            qabstractitemview_updatemicrofocus_isbase = false;
            QAbstractItemView::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qabstractitemview_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QAbstractItemView::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractitemview_create_isbase) {
            qabstractitemview_create_isbase = false;
            QAbstractItemView::create();
            return;
        }
        auto create_cb = qabstractitemview_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QAbstractItemView::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractitemview_destroy_isbase) {
            qabstractitemview_destroy_isbase = false;
            QAbstractItemView::destroy();
            return;
        }
        auto destroy_cb = qabstractitemview_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QAbstractItemView::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractitemview_focusnextchild_isbase) {
            qabstractitemview_focusnextchild_isbase = false;
            return QAbstractItemView::focusNextChild();
        }
        auto focusnextchild_cb = qabstractitemview_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QAbstractItemView::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractitemview_focuspreviouschild_isbase) {
            qabstractitemview_focuspreviouschild_isbase = false;
            return QAbstractItemView::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qabstractitemview_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QAbstractItemView::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractitemview_sender_isbase) {
            qabstractitemview_sender_isbase = false;
            return QAbstractItemView::sender();
        }
        auto sender_cb = qabstractitemview_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAbstractItemView::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractitemview_sendersignalindex_isbase) {
            qabstractitemview_sendersignalindex_isbase = false;
            return QAbstractItemView::senderSignalIndex();
        }
        auto sendersignalindex_cb = qabstractitemview_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractitemview_receivers_isbase) {
            qabstractitemview_receivers_isbase = false;
            return QAbstractItemView::receivers(signal);
        }
        auto receivers_cb = qabstractitemview_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractitemview_issignalconnected_isbase) {
            qabstractitemview_issignalconnected_isbase = false;
            return QAbstractItemView::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qabstractitemview_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qabstractitemview_getdecodedmetricf_isbase) {
            qabstractitemview_getdecodedmetricf_isbase = false;
            return QAbstractItemView::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qabstractitemview_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QAbstractItemView::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QAbstractItemView_DataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QAbstractItemView_SuperDataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QAbstractItemView_RowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_SuperRowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_RowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_SuperRowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_SelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QAbstractItemView_SuperSelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QAbstractItemView_CurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QAbstractItemView_SuperCurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QAbstractItemView_UpdateEditorData(QAbstractItemView* self);
    friend void QAbstractItemView_SuperUpdateEditorData(QAbstractItemView* self);
    friend void QAbstractItemView_UpdateEditorGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_SuperUpdateEditorGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_UpdateGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_SuperUpdateGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_VerticalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_SuperVerticalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_HorizontalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_SuperHorizontalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_VerticalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_SuperVerticalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_HorizontalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_SuperHorizontalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_CloseEditor(QAbstractItemView* self, QWidget* editor, int hint);
    friend void QAbstractItemView_SuperCloseEditor(QAbstractItemView* self, QWidget* editor, int hint);
    friend void QAbstractItemView_CommitData(QAbstractItemView* self, QWidget* editor);
    friend void QAbstractItemView_SuperCommitData(QAbstractItemView* self, QWidget* editor);
    friend void QAbstractItemView_EditorDestroyed(QAbstractItemView* self, QObject* editor);
    friend void QAbstractItemView_SuperEditorDestroyed(QAbstractItemView* self, QObject* editor);
    friend QModelIndex* QAbstractItemView_MoveCursor(QAbstractItemView* self, int cursorAction, int modifiers);
    friend QModelIndex* QAbstractItemView_SuperMoveCursor(QAbstractItemView* self, int cursorAction, int modifiers);
    friend int QAbstractItemView_HorizontalOffset(const QAbstractItemView* self);
    friend int QAbstractItemView_SuperHorizontalOffset(const QAbstractItemView* self);
    friend int QAbstractItemView_VerticalOffset(const QAbstractItemView* self);
    friend int QAbstractItemView_SuperVerticalOffset(const QAbstractItemView* self);
    friend bool QAbstractItemView_IsIndexHidden(const QAbstractItemView* self, const QModelIndex* index);
    friend bool QAbstractItemView_SuperIsIndexHidden(const QAbstractItemView* self, const QModelIndex* index);
    friend void QAbstractItemView_SetSelection(QAbstractItemView* self, const QRect* rect, int command);
    friend void QAbstractItemView_SuperSetSelection(QAbstractItemView* self, const QRect* rect, int command);
    friend QRegion* QAbstractItemView_VisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection);
    friend QRegion* QAbstractItemView_SuperVisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QAbstractItemView_SelectedIndexes(const QAbstractItemView* self);
    friend libqt_list /* of QModelIndex* */ QAbstractItemView_SuperSelectedIndexes(const QAbstractItemView* self);
    friend bool QAbstractItemView_Edit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QAbstractItemView_SuperEdit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QAbstractItemView_SelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event);
    friend int QAbstractItemView_SuperSelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event);
    friend void QAbstractItemView_StartDrag(QAbstractItemView* self, int supportedActions);
    friend void QAbstractItemView_SuperStartDrag(QAbstractItemView* self, int supportedActions);
    friend void QAbstractItemView_InitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option);
    friend void QAbstractItemView_SuperInitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option);
    friend bool QAbstractItemView_FocusNextPrevChild(QAbstractItemView* self, bool next);
    friend bool QAbstractItemView_SuperFocusNextPrevChild(QAbstractItemView* self, bool next);
    friend bool QAbstractItemView_Event(QAbstractItemView* self, QEvent* event);
    friend bool QAbstractItemView_SuperEvent(QAbstractItemView* self, QEvent* event);
    friend bool QAbstractItemView_ViewportEvent(QAbstractItemView* self, QEvent* event);
    friend bool QAbstractItemView_SuperViewportEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_MousePressEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_SuperMousePressEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_MouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_SuperMouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_MouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_SuperMouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_MouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_SuperMouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_DragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
    friend void QAbstractItemView_SuperDragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
    friend void QAbstractItemView_DragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
    friend void QAbstractItemView_SuperDragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
    friend void QAbstractItemView_DragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
    friend void QAbstractItemView_SuperDragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
    friend void QAbstractItemView_DropEvent(QAbstractItemView* self, QDropEvent* event);
    friend void QAbstractItemView_SuperDropEvent(QAbstractItemView* self, QDropEvent* event);
    friend void QAbstractItemView_FocusInEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_SuperFocusInEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_FocusOutEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_SuperFocusOutEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_KeyPressEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_SuperKeyPressEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_ResizeEvent(QAbstractItemView* self, QResizeEvent* event);
    friend void QAbstractItemView_SuperResizeEvent(QAbstractItemView* self, QResizeEvent* event);
    friend void QAbstractItemView_TimerEvent(QAbstractItemView* self, QTimerEvent* event);
    friend void QAbstractItemView_SuperTimerEvent(QAbstractItemView* self, QTimerEvent* event);
    friend void QAbstractItemView_InputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
    friend void QAbstractItemView_SuperInputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
    friend bool QAbstractItemView_EventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
    friend bool QAbstractItemView_SuperEventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
    friend QSize* QAbstractItemView_ViewportSizeHint(const QAbstractItemView* self);
    friend QSize* QAbstractItemView_SuperViewportSizeHint(const QAbstractItemView* self);
    friend void QAbstractItemView_PaintEvent(QAbstractItemView* self, QPaintEvent* param1);
    friend void QAbstractItemView_SuperPaintEvent(QAbstractItemView* self, QPaintEvent* param1);
    friend void QAbstractItemView_WheelEvent(QAbstractItemView* self, QWheelEvent* param1);
    friend void QAbstractItemView_SuperWheelEvent(QAbstractItemView* self, QWheelEvent* param1);
    friend void QAbstractItemView_ContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1);
    friend void QAbstractItemView_SuperContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1);
    friend void QAbstractItemView_ScrollContentsBy(QAbstractItemView* self, int dx, int dy);
    friend void QAbstractItemView_SuperScrollContentsBy(QAbstractItemView* self, int dx, int dy);
    friend void QAbstractItemView_ChangeEvent(QAbstractItemView* self, QEvent* param1);
    friend void QAbstractItemView_SuperChangeEvent(QAbstractItemView* self, QEvent* param1);
    friend void QAbstractItemView_InitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option);
    friend void QAbstractItemView_SuperInitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option);
    friend void QAbstractItemView_KeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_SuperKeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_EnterEvent(QAbstractItemView* self, QEnterEvent* event);
    friend void QAbstractItemView_SuperEnterEvent(QAbstractItemView* self, QEnterEvent* event);
    friend void QAbstractItemView_LeaveEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_SuperLeaveEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_MoveEvent(QAbstractItemView* self, QMoveEvent* event);
    friend void QAbstractItemView_SuperMoveEvent(QAbstractItemView* self, QMoveEvent* event);
    friend void QAbstractItemView_CloseEvent(QAbstractItemView* self, QCloseEvent* event);
    friend void QAbstractItemView_SuperCloseEvent(QAbstractItemView* self, QCloseEvent* event);
    friend void QAbstractItemView_TabletEvent(QAbstractItemView* self, QTabletEvent* event);
    friend void QAbstractItemView_SuperTabletEvent(QAbstractItemView* self, QTabletEvent* event);
    friend void QAbstractItemView_ActionEvent(QAbstractItemView* self, QActionEvent* event);
    friend void QAbstractItemView_SuperActionEvent(QAbstractItemView* self, QActionEvent* event);
    friend void QAbstractItemView_ShowEvent(QAbstractItemView* self, QShowEvent* event);
    friend void QAbstractItemView_SuperShowEvent(QAbstractItemView* self, QShowEvent* event);
    friend void QAbstractItemView_HideEvent(QAbstractItemView* self, QHideEvent* event);
    friend void QAbstractItemView_SuperHideEvent(QAbstractItemView* self, QHideEvent* event);
    friend bool QAbstractItemView_NativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QAbstractItemView_SuperNativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractItemView_Metric(const QAbstractItemView* self, int param1);
    friend int QAbstractItemView_SuperMetric(const QAbstractItemView* self, int param1);
    friend void QAbstractItemView_InitPainter(const QAbstractItemView* self, QPainter* painter);
    friend void QAbstractItemView_SuperInitPainter(const QAbstractItemView* self, QPainter* painter);
    friend QPaintDevice* QAbstractItemView_Redirected(const QAbstractItemView* self, QPoint* offset);
    friend QPaintDevice* QAbstractItemView_SuperRedirected(const QAbstractItemView* self, QPoint* offset);
    friend QPainter* QAbstractItemView_SharedPainter(const QAbstractItemView* self);
    friend QPainter* QAbstractItemView_SuperSharedPainter(const QAbstractItemView* self);
    friend void QAbstractItemView_ChildEvent(QAbstractItemView* self, QChildEvent* event);
    friend void QAbstractItemView_SuperChildEvent(QAbstractItemView* self, QChildEvent* event);
    friend void QAbstractItemView_CustomEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_SuperCustomEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_ConnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend void QAbstractItemView_SuperConnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend void QAbstractItemView_DisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend void QAbstractItemView_SuperDisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend int QAbstractItemView_State(const QAbstractItemView* self);
    friend int QAbstractItemView_SuperState(const QAbstractItemView* self);
    friend void QAbstractItemView_SetState(QAbstractItemView* self, int state);
    friend void QAbstractItemView_SuperSetState(QAbstractItemView* self, int state);
    friend void QAbstractItemView_ScheduleDelayedItemsLayout(QAbstractItemView* self);
    friend void QAbstractItemView_SuperScheduleDelayedItemsLayout(QAbstractItemView* self);
    friend void QAbstractItemView_ExecuteDelayedItemsLayout(QAbstractItemView* self);
    friend void QAbstractItemView_SuperExecuteDelayedItemsLayout(QAbstractItemView* self);
    friend void QAbstractItemView_SetDirtyRegion(QAbstractItemView* self, const QRegion* region);
    friend void QAbstractItemView_SuperSetDirtyRegion(QAbstractItemView* self, const QRegion* region);
    friend void QAbstractItemView_ScrollDirtyRegion(QAbstractItemView* self, int dx, int dy);
    friend void QAbstractItemView_SuperScrollDirtyRegion(QAbstractItemView* self, int dx, int dy);
    friend QPoint* QAbstractItemView_DirtyRegionOffset(const QAbstractItemView* self);
    friend QPoint* QAbstractItemView_SuperDirtyRegionOffset(const QAbstractItemView* self);
    friend void QAbstractItemView_StartAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_SuperStartAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_StopAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_SuperStopAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_DoAutoScroll(QAbstractItemView* self);
    friend void QAbstractItemView_SuperDoAutoScroll(QAbstractItemView* self);
    friend int QAbstractItemView_DropIndicatorPosition(const QAbstractItemView* self);
    friend int QAbstractItemView_SuperDropIndicatorPosition(const QAbstractItemView* self);
    friend void QAbstractItemView_SetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom);
    friend void QAbstractItemView_SuperSetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom);
    friend QMargins* QAbstractItemView_ViewportMargins(const QAbstractItemView* self);
    friend QMargins* QAbstractItemView_SuperViewportMargins(const QAbstractItemView* self);
    friend void QAbstractItemView_DrawFrame(QAbstractItemView* self, QPainter* param1);
    friend void QAbstractItemView_SuperDrawFrame(QAbstractItemView* self, QPainter* param1);
    friend void QAbstractItemView_UpdateMicroFocus(QAbstractItemView* self);
    friend void QAbstractItemView_SuperUpdateMicroFocus(QAbstractItemView* self);
    friend void QAbstractItemView_Create(QAbstractItemView* self);
    friend void QAbstractItemView_SuperCreate(QAbstractItemView* self);
    friend void QAbstractItemView_Destroy(QAbstractItemView* self);
    friend void QAbstractItemView_SuperDestroy(QAbstractItemView* self);
    friend bool QAbstractItemView_FocusNextChild(QAbstractItemView* self);
    friend bool QAbstractItemView_SuperFocusNextChild(QAbstractItemView* self);
    friend bool QAbstractItemView_FocusPreviousChild(QAbstractItemView* self);
    friend bool QAbstractItemView_SuperFocusPreviousChild(QAbstractItemView* self);
    friend QObject* QAbstractItemView_Sender(const QAbstractItemView* self);
    friend QObject* QAbstractItemView_SuperSender(const QAbstractItemView* self);
    friend int QAbstractItemView_SenderSignalIndex(const QAbstractItemView* self);
    friend int QAbstractItemView_SuperSenderSignalIndex(const QAbstractItemView* self);
    friend int QAbstractItemView_Receivers(const QAbstractItemView* self, const char* signal);
    friend int QAbstractItemView_SuperReceivers(const QAbstractItemView* self, const char* signal);
    friend bool QAbstractItemView_IsSignalConnected(const QAbstractItemView* self, const QMetaMethod* signal);
    friend bool QAbstractItemView_SuperIsSignalConnected(const QAbstractItemView* self, const QMetaMethod* signal);
    friend double QAbstractItemView_GetDecodedMetricF(const QAbstractItemView* self, int metricA, int metricB);
    friend double QAbstractItemView_SuperGetDecodedMetricF(const QAbstractItemView* self, int metricA, int metricB);
};

#endif
