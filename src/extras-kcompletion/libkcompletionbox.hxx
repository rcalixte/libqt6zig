#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKCOMPLETIONBOX_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKCOMPLETIONBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompletionBox so that we can call protected methods
class VirtualKCompletionBox final : public KCompletionBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKCompletionBox = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using KCompletionBox_Metacall_Callback = int (*)(KCompletionBox*, int, int, void**);
    using KCompletionBox_SizeHint_Callback = QSize* (*)();
    using KCompletionBox_Popup_Callback = void (*)();
    using KCompletionBox_SetVisible_Callback = void (*)(KCompletionBox*, bool);
    using KCompletionBox_EventFilter_Callback = bool (*)(KCompletionBox*, QObject*, QEvent*);
    using KCompletionBox_GlobalPositionHint_Callback = QPoint* (*)();
    using KCompletionBox_SlotActivated_Callback = void (*)(KCompletionBox*, QListWidgetItem*);
    using KCompletionBox_SetSelectionModel_Callback = void (*)(KCompletionBox*, QItemSelectionModel*);
    using KCompletionBox_DropEvent_Callback = void (*)(KCompletionBox*, QDropEvent*);
    using KCompletionBox_Event_Callback = bool (*)(KCompletionBox*, QEvent*);
    using KCompletionBox_MimeTypes_Callback = const char** (*)();
    using KCompletionBox_MimeData_Callback = QMimeData* (*)(const KCompletionBox*, libqt_list /* of QListWidgetItem* */);
    using KCompletionBox_DropMimeData_Callback = bool (*)(KCompletionBox*, int, QMimeData*, int);
    using KCompletionBox_SupportedDropActions_Callback = int (*)();
    using KCompletionBox_VisualRect_Callback = QRect* (*)(const KCompletionBox*, QModelIndex*);
    using KCompletionBox_ScrollTo_Callback = void (*)(KCompletionBox*, QModelIndex*, int);
    using KCompletionBox_IndexAt_Callback = QModelIndex* (*)(const KCompletionBox*, QPoint*);
    using KCompletionBox_DoItemsLayout_Callback = void (*)();
    using KCompletionBox_Reset_Callback = void (*)();
    using KCompletionBox_SetRootIndex_Callback = void (*)(KCompletionBox*, QModelIndex*);
    using KCompletionBox_ScrollContentsBy_Callback = void (*)(KCompletionBox*, int, int);
    using KCompletionBox_DataChanged_Callback = void (*)(KCompletionBox*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using KCompletionBox_RowsInserted_Callback = void (*)(KCompletionBox*, QModelIndex*, int, int);
    using KCompletionBox_RowsAboutToBeRemoved_Callback = void (*)(KCompletionBox*, QModelIndex*, int, int);
    using KCompletionBox_MouseMoveEvent_Callback = void (*)(KCompletionBox*, QMouseEvent*);
    using KCompletionBox_MouseReleaseEvent_Callback = void (*)(KCompletionBox*, QMouseEvent*);
    using KCompletionBox_WheelEvent_Callback = void (*)(KCompletionBox*, QWheelEvent*);
    using KCompletionBox_TimerEvent_Callback = void (*)(KCompletionBox*, QTimerEvent*);
    using KCompletionBox_ResizeEvent_Callback = void (*)(KCompletionBox*, QResizeEvent*);
    using KCompletionBox_DragMoveEvent_Callback = void (*)(KCompletionBox*, QDragMoveEvent*);
    using KCompletionBox_DragLeaveEvent_Callback = void (*)(KCompletionBox*, QDragLeaveEvent*);
    using KCompletionBox_StartDrag_Callback = void (*)(KCompletionBox*, int);
    using KCompletionBox_InitViewItemOption_Callback = void (*)(const KCompletionBox*, QStyleOptionViewItem*);
    using KCompletionBox_PaintEvent_Callback = void (*)(KCompletionBox*, QPaintEvent*);
    using KCompletionBox_HorizontalOffset_Callback = int (*)();
    using KCompletionBox_VerticalOffset_Callback = int (*)();
    using KCompletionBox_MoveCursor_Callback = QModelIndex* (*)(KCompletionBox*, int, int);
    using KCompletionBox_SetSelection_Callback = void (*)(KCompletionBox*, QRect*, int);
    using KCompletionBox_VisualRegionForSelection_Callback = QRegion* (*)(const KCompletionBox*, QItemSelection*);
    using KCompletionBox_SelectedIndexes_Callback = QModelIndex** (*)();
    using KCompletionBox_UpdateGeometries_Callback = void (*)();
    using KCompletionBox_IsIndexHidden_Callback = bool (*)(const KCompletionBox*, QModelIndex*);
    using KCompletionBox_SelectionChanged_Callback = void (*)(KCompletionBox*, QItemSelection*, QItemSelection*);
    using KCompletionBox_CurrentChanged_Callback = void (*)(KCompletionBox*, QModelIndex*, QModelIndex*);
    using KCompletionBox_ViewportSizeHint_Callback = QSize* (*)();
    using KCompletionBox_KeyboardSearch_Callback = void (*)(KCompletionBox*, libqt_string);
    using KCompletionBox_SizeHintForRow_Callback = int (*)(const KCompletionBox*, int);
    using KCompletionBox_SizeHintForColumn_Callback = int (*)(const KCompletionBox*, int);
    using KCompletionBox_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const KCompletionBox*, QModelIndex*);
    using KCompletionBox_InputMethodQuery_Callback = QVariant* (*)(const KCompletionBox*, int);
    using KCompletionBox_SelectAll_Callback = void (*)();
    using KCompletionBox_UpdateEditorData_Callback = void (*)();
    using KCompletionBox_UpdateEditorGeometries_Callback = void (*)();
    using KCompletionBox_VerticalScrollbarAction_Callback = void (*)(KCompletionBox*, int);
    using KCompletionBox_HorizontalScrollbarAction_Callback = void (*)(KCompletionBox*, int);
    using KCompletionBox_VerticalScrollbarValueChanged_Callback = void (*)(KCompletionBox*, int);
    using KCompletionBox_HorizontalScrollbarValueChanged_Callback = void (*)(KCompletionBox*, int);
    using KCompletionBox_CloseEditor_Callback = void (*)(KCompletionBox*, QWidget*, int);
    using KCompletionBox_CommitData_Callback = void (*)(KCompletionBox*, QWidget*);
    using KCompletionBox_EditorDestroyed_Callback = void (*)(KCompletionBox*, QObject*);
    using KCompletionBox_Edit2_Callback = bool (*)(KCompletionBox*, QModelIndex*, int, QEvent*);
    using KCompletionBox_SelectionCommand_Callback = int (*)(const KCompletionBox*, QModelIndex*, QEvent*);
    using KCompletionBox_FocusNextPrevChild_Callback = bool (*)(KCompletionBox*, bool);
    using KCompletionBox_ViewportEvent_Callback = bool (*)(KCompletionBox*, QEvent*);
    using KCompletionBox_MousePressEvent_Callback = void (*)(KCompletionBox*, QMouseEvent*);
    using KCompletionBox_MouseDoubleClickEvent_Callback = void (*)(KCompletionBox*, QMouseEvent*);
    using KCompletionBox_DragEnterEvent_Callback = void (*)(KCompletionBox*, QDragEnterEvent*);
    using KCompletionBox_FocusInEvent_Callback = void (*)(KCompletionBox*, QFocusEvent*);
    using KCompletionBox_FocusOutEvent_Callback = void (*)(KCompletionBox*, QFocusEvent*);
    using KCompletionBox_KeyPressEvent_Callback = void (*)(KCompletionBox*, QKeyEvent*);
    using KCompletionBox_InputMethodEvent_Callback = void (*)(KCompletionBox*, QInputMethodEvent*);
    using KCompletionBox_MinimumSizeHint_Callback = QSize* (*)();
    using KCompletionBox_SetupViewport_Callback = void (*)(KCompletionBox*, QWidget*);
    using KCompletionBox_ContextMenuEvent_Callback = void (*)(KCompletionBox*, QContextMenuEvent*);
    using KCompletionBox_ChangeEvent_Callback = void (*)(KCompletionBox*, QEvent*);
    using KCompletionBox_InitStyleOption_Callback = void (*)(const KCompletionBox*, QStyleOptionFrame*);
    using KCompletionBox_DevType_Callback = int (*)();
    using KCompletionBox_HeightForWidth_Callback = int (*)(const KCompletionBox*, int);
    using KCompletionBox_HasHeightForWidth_Callback = bool (*)();
    using KCompletionBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KCompletionBox_KeyReleaseEvent_Callback = void (*)(KCompletionBox*, QKeyEvent*);
    using KCompletionBox_EnterEvent_Callback = void (*)(KCompletionBox*, QEnterEvent*);
    using KCompletionBox_LeaveEvent_Callback = void (*)(KCompletionBox*, QEvent*);
    using KCompletionBox_MoveEvent_Callback = void (*)(KCompletionBox*, QMoveEvent*);
    using KCompletionBox_CloseEvent_Callback = void (*)(KCompletionBox*, QCloseEvent*);
    using KCompletionBox_TabletEvent_Callback = void (*)(KCompletionBox*, QTabletEvent*);
    using KCompletionBox_ActionEvent_Callback = void (*)(KCompletionBox*, QActionEvent*);
    using KCompletionBox_ShowEvent_Callback = void (*)(KCompletionBox*, QShowEvent*);
    using KCompletionBox_HideEvent_Callback = void (*)(KCompletionBox*, QHideEvent*);
    using KCompletionBox_NativeEvent_Callback = bool (*)(KCompletionBox*, libqt_string, void*, intptr_t*);
    using KCompletionBox_Metric_Callback = int (*)(const KCompletionBox*, int);
    using KCompletionBox_InitPainter_Callback = void (*)(const KCompletionBox*, QPainter*);
    using KCompletionBox_Redirected_Callback = QPaintDevice* (*)(const KCompletionBox*, QPoint*);
    using KCompletionBox_SharedPainter_Callback = QPainter* (*)();
    using KCompletionBox_ChildEvent_Callback = void (*)(KCompletionBox*, QChildEvent*);
    using KCompletionBox_CustomEvent_Callback = void (*)(KCompletionBox*, QEvent*);
    using KCompletionBox_ConnectNotify_Callback = void (*)(KCompletionBox*, QMetaMethod*);
    using KCompletionBox_DisconnectNotify_Callback = void (*)(KCompletionBox*, QMetaMethod*);
    using KCompletionBox_CalculateGeometry_Callback = QRect* (*)();
    using KCompletionBox_ResizeAndReposition_Callback = void (*)();
    using KCompletionBox_ResizeContents_Callback = void (*)(KCompletionBox*, int, int);
    using KCompletionBox_ContentsSize_Callback = QSize* (*)();
    using KCompletionBox_RectForIndex_Callback = QRect* (*)(const KCompletionBox*, QModelIndex*);
    using KCompletionBox_SetPositionForIndex_Callback = void (*)(KCompletionBox*, QPoint*, QModelIndex*);
    using KCompletionBox_State_Callback = int (*)();
    using KCompletionBox_SetState_Callback = void (*)(KCompletionBox*, int);
    using KCompletionBox_ScheduleDelayedItemsLayout_Callback = void (*)();
    using KCompletionBox_ExecuteDelayedItemsLayout_Callback = void (*)();
    using KCompletionBox_SetDirtyRegion_Callback = void (*)(KCompletionBox*, QRegion*);
    using KCompletionBox_ScrollDirtyRegion_Callback = void (*)(KCompletionBox*, int, int);
    using KCompletionBox_DirtyRegionOffset_Callback = QPoint* (*)();
    using KCompletionBox_StartAutoScroll_Callback = void (*)();
    using KCompletionBox_StopAutoScroll_Callback = void (*)();
    using KCompletionBox_DoAutoScroll_Callback = void (*)();
    using KCompletionBox_DropIndicatorPosition_Callback = int (*)();
    using KCompletionBox_SetViewportMargins_Callback = void (*)(KCompletionBox*, int, int, int, int);
    using KCompletionBox_ViewportMargins_Callback = QMargins* (*)();
    using KCompletionBox_DrawFrame_Callback = void (*)(KCompletionBox*, QPainter*);
    using KCompletionBox_UpdateMicroFocus_Callback = void (*)();
    using KCompletionBox_Create_Callback = void (*)();
    using KCompletionBox_Destroy_Callback = void (*)();
    using KCompletionBox_FocusNextChild_Callback = bool (*)();
    using KCompletionBox_FocusPreviousChild_Callback = bool (*)();
    using KCompletionBox_Sender_Callback = QObject* (*)();
    using KCompletionBox_SenderSignalIndex_Callback = int (*)();
    using KCompletionBox_Receivers_Callback = int (*)(const KCompletionBox*, const char*);
    using KCompletionBox_IsSignalConnected_Callback = bool (*)(const KCompletionBox*, QMetaMethod*);
    using KCompletionBox_GetDecodedMetricF_Callback = double (*)(const KCompletionBox*, int, int);

  protected:
    // Instance callback storage
    KCompletionBox_Metacall_Callback kcompletionbox_metacall_callback = nullptr;
    KCompletionBox_SizeHint_Callback kcompletionbox_sizehint_callback = nullptr;
    KCompletionBox_Popup_Callback kcompletionbox_popup_callback = nullptr;
    KCompletionBox_SetVisible_Callback kcompletionbox_setvisible_callback = nullptr;
    KCompletionBox_EventFilter_Callback kcompletionbox_eventfilter_callback = nullptr;
    KCompletionBox_GlobalPositionHint_Callback kcompletionbox_globalpositionhint_callback = nullptr;
    KCompletionBox_SlotActivated_Callback kcompletionbox_slotactivated_callback = nullptr;
    KCompletionBox_SetSelectionModel_Callback kcompletionbox_setselectionmodel_callback = nullptr;
    KCompletionBox_DropEvent_Callback kcompletionbox_dropevent_callback = nullptr;
    KCompletionBox_Event_Callback kcompletionbox_event_callback = nullptr;
    KCompletionBox_MimeTypes_Callback kcompletionbox_mimetypes_callback = nullptr;
    KCompletionBox_MimeData_Callback kcompletionbox_mimedata_callback = nullptr;
    KCompletionBox_DropMimeData_Callback kcompletionbox_dropmimedata_callback = nullptr;
    KCompletionBox_SupportedDropActions_Callback kcompletionbox_supporteddropactions_callback = nullptr;
    KCompletionBox_VisualRect_Callback kcompletionbox_visualrect_callback = nullptr;
    KCompletionBox_ScrollTo_Callback kcompletionbox_scrollto_callback = nullptr;
    KCompletionBox_IndexAt_Callback kcompletionbox_indexat_callback = nullptr;
    KCompletionBox_DoItemsLayout_Callback kcompletionbox_doitemslayout_callback = nullptr;
    KCompletionBox_Reset_Callback kcompletionbox_reset_callback = nullptr;
    KCompletionBox_SetRootIndex_Callback kcompletionbox_setrootindex_callback = nullptr;
    KCompletionBox_ScrollContentsBy_Callback kcompletionbox_scrollcontentsby_callback = nullptr;
    KCompletionBox_DataChanged_Callback kcompletionbox_datachanged_callback = nullptr;
    KCompletionBox_RowsInserted_Callback kcompletionbox_rowsinserted_callback = nullptr;
    KCompletionBox_RowsAboutToBeRemoved_Callback kcompletionbox_rowsabouttoberemoved_callback = nullptr;
    KCompletionBox_MouseMoveEvent_Callback kcompletionbox_mousemoveevent_callback = nullptr;
    KCompletionBox_MouseReleaseEvent_Callback kcompletionbox_mousereleaseevent_callback = nullptr;
    KCompletionBox_WheelEvent_Callback kcompletionbox_wheelevent_callback = nullptr;
    KCompletionBox_TimerEvent_Callback kcompletionbox_timerevent_callback = nullptr;
    KCompletionBox_ResizeEvent_Callback kcompletionbox_resizeevent_callback = nullptr;
    KCompletionBox_DragMoveEvent_Callback kcompletionbox_dragmoveevent_callback = nullptr;
    KCompletionBox_DragLeaveEvent_Callback kcompletionbox_dragleaveevent_callback = nullptr;
    KCompletionBox_StartDrag_Callback kcompletionbox_startdrag_callback = nullptr;
    KCompletionBox_InitViewItemOption_Callback kcompletionbox_initviewitemoption_callback = nullptr;
    KCompletionBox_PaintEvent_Callback kcompletionbox_paintevent_callback = nullptr;
    KCompletionBox_HorizontalOffset_Callback kcompletionbox_horizontaloffset_callback = nullptr;
    KCompletionBox_VerticalOffset_Callback kcompletionbox_verticaloffset_callback = nullptr;
    KCompletionBox_MoveCursor_Callback kcompletionbox_movecursor_callback = nullptr;
    KCompletionBox_SetSelection_Callback kcompletionbox_setselection_callback = nullptr;
    KCompletionBox_VisualRegionForSelection_Callback kcompletionbox_visualregionforselection_callback = nullptr;
    KCompletionBox_SelectedIndexes_Callback kcompletionbox_selectedindexes_callback = nullptr;
    KCompletionBox_UpdateGeometries_Callback kcompletionbox_updategeometries_callback = nullptr;
    KCompletionBox_IsIndexHidden_Callback kcompletionbox_isindexhidden_callback = nullptr;
    KCompletionBox_SelectionChanged_Callback kcompletionbox_selectionchanged_callback = nullptr;
    KCompletionBox_CurrentChanged_Callback kcompletionbox_currentchanged_callback = nullptr;
    KCompletionBox_ViewportSizeHint_Callback kcompletionbox_viewportsizehint_callback = nullptr;
    KCompletionBox_KeyboardSearch_Callback kcompletionbox_keyboardsearch_callback = nullptr;
    KCompletionBox_SizeHintForRow_Callback kcompletionbox_sizehintforrow_callback = nullptr;
    KCompletionBox_SizeHintForColumn_Callback kcompletionbox_sizehintforcolumn_callback = nullptr;
    KCompletionBox_ItemDelegateForIndex_Callback kcompletionbox_itemdelegateforindex_callback = nullptr;
    KCompletionBox_InputMethodQuery_Callback kcompletionbox_inputmethodquery_callback = nullptr;
    KCompletionBox_SelectAll_Callback kcompletionbox_selectall_callback = nullptr;
    KCompletionBox_UpdateEditorData_Callback kcompletionbox_updateeditordata_callback = nullptr;
    KCompletionBox_UpdateEditorGeometries_Callback kcompletionbox_updateeditorgeometries_callback = nullptr;
    KCompletionBox_VerticalScrollbarAction_Callback kcompletionbox_verticalscrollbaraction_callback = nullptr;
    KCompletionBox_HorizontalScrollbarAction_Callback kcompletionbox_horizontalscrollbaraction_callback = nullptr;
    KCompletionBox_VerticalScrollbarValueChanged_Callback kcompletionbox_verticalscrollbarvaluechanged_callback = nullptr;
    KCompletionBox_HorizontalScrollbarValueChanged_Callback kcompletionbox_horizontalscrollbarvaluechanged_callback = nullptr;
    KCompletionBox_CloseEditor_Callback kcompletionbox_closeeditor_callback = nullptr;
    KCompletionBox_CommitData_Callback kcompletionbox_commitdata_callback = nullptr;
    KCompletionBox_EditorDestroyed_Callback kcompletionbox_editordestroyed_callback = nullptr;
    KCompletionBox_Edit2_Callback kcompletionbox_edit2_callback = nullptr;
    KCompletionBox_SelectionCommand_Callback kcompletionbox_selectioncommand_callback = nullptr;
    KCompletionBox_FocusNextPrevChild_Callback kcompletionbox_focusnextprevchild_callback = nullptr;
    KCompletionBox_ViewportEvent_Callback kcompletionbox_viewportevent_callback = nullptr;
    KCompletionBox_MousePressEvent_Callback kcompletionbox_mousepressevent_callback = nullptr;
    KCompletionBox_MouseDoubleClickEvent_Callback kcompletionbox_mousedoubleclickevent_callback = nullptr;
    KCompletionBox_DragEnterEvent_Callback kcompletionbox_dragenterevent_callback = nullptr;
    KCompletionBox_FocusInEvent_Callback kcompletionbox_focusinevent_callback = nullptr;
    KCompletionBox_FocusOutEvent_Callback kcompletionbox_focusoutevent_callback = nullptr;
    KCompletionBox_KeyPressEvent_Callback kcompletionbox_keypressevent_callback = nullptr;
    KCompletionBox_InputMethodEvent_Callback kcompletionbox_inputmethodevent_callback = nullptr;
    KCompletionBox_MinimumSizeHint_Callback kcompletionbox_minimumsizehint_callback = nullptr;
    KCompletionBox_SetupViewport_Callback kcompletionbox_setupviewport_callback = nullptr;
    KCompletionBox_ContextMenuEvent_Callback kcompletionbox_contextmenuevent_callback = nullptr;
    KCompletionBox_ChangeEvent_Callback kcompletionbox_changeevent_callback = nullptr;
    KCompletionBox_InitStyleOption_Callback kcompletionbox_initstyleoption_callback = nullptr;
    KCompletionBox_DevType_Callback kcompletionbox_devtype_callback = nullptr;
    KCompletionBox_HeightForWidth_Callback kcompletionbox_heightforwidth_callback = nullptr;
    KCompletionBox_HasHeightForWidth_Callback kcompletionbox_hasheightforwidth_callback = nullptr;
    KCompletionBox_PaintEngine_Callback kcompletionbox_paintengine_callback = nullptr;
    KCompletionBox_KeyReleaseEvent_Callback kcompletionbox_keyreleaseevent_callback = nullptr;
    KCompletionBox_EnterEvent_Callback kcompletionbox_enterevent_callback = nullptr;
    KCompletionBox_LeaveEvent_Callback kcompletionbox_leaveevent_callback = nullptr;
    KCompletionBox_MoveEvent_Callback kcompletionbox_moveevent_callback = nullptr;
    KCompletionBox_CloseEvent_Callback kcompletionbox_closeevent_callback = nullptr;
    KCompletionBox_TabletEvent_Callback kcompletionbox_tabletevent_callback = nullptr;
    KCompletionBox_ActionEvent_Callback kcompletionbox_actionevent_callback = nullptr;
    KCompletionBox_ShowEvent_Callback kcompletionbox_showevent_callback = nullptr;
    KCompletionBox_HideEvent_Callback kcompletionbox_hideevent_callback = nullptr;
    KCompletionBox_NativeEvent_Callback kcompletionbox_nativeevent_callback = nullptr;
    KCompletionBox_Metric_Callback kcompletionbox_metric_callback = nullptr;
    KCompletionBox_InitPainter_Callback kcompletionbox_initpainter_callback = nullptr;
    KCompletionBox_Redirected_Callback kcompletionbox_redirected_callback = nullptr;
    KCompletionBox_SharedPainter_Callback kcompletionbox_sharedpainter_callback = nullptr;
    KCompletionBox_ChildEvent_Callback kcompletionbox_childevent_callback = nullptr;
    KCompletionBox_CustomEvent_Callback kcompletionbox_customevent_callback = nullptr;
    KCompletionBox_ConnectNotify_Callback kcompletionbox_connectnotify_callback = nullptr;
    KCompletionBox_DisconnectNotify_Callback kcompletionbox_disconnectnotify_callback = nullptr;
    KCompletionBox_CalculateGeometry_Callback kcompletionbox_calculategeometry_callback = nullptr;
    KCompletionBox_ResizeAndReposition_Callback kcompletionbox_resizeandreposition_callback = nullptr;
    KCompletionBox_ResizeContents_Callback kcompletionbox_resizecontents_callback = nullptr;
    KCompletionBox_ContentsSize_Callback kcompletionbox_contentssize_callback = nullptr;
    KCompletionBox_RectForIndex_Callback kcompletionbox_rectforindex_callback = nullptr;
    KCompletionBox_SetPositionForIndex_Callback kcompletionbox_setpositionforindex_callback = nullptr;
    KCompletionBox_State_Callback kcompletionbox_state_callback = nullptr;
    KCompletionBox_SetState_Callback kcompletionbox_setstate_callback = nullptr;
    KCompletionBox_ScheduleDelayedItemsLayout_Callback kcompletionbox_scheduledelayeditemslayout_callback = nullptr;
    KCompletionBox_ExecuteDelayedItemsLayout_Callback kcompletionbox_executedelayeditemslayout_callback = nullptr;
    KCompletionBox_SetDirtyRegion_Callback kcompletionbox_setdirtyregion_callback = nullptr;
    KCompletionBox_ScrollDirtyRegion_Callback kcompletionbox_scrolldirtyregion_callback = nullptr;
    KCompletionBox_DirtyRegionOffset_Callback kcompletionbox_dirtyregionoffset_callback = nullptr;
    KCompletionBox_StartAutoScroll_Callback kcompletionbox_startautoscroll_callback = nullptr;
    KCompletionBox_StopAutoScroll_Callback kcompletionbox_stopautoscroll_callback = nullptr;
    KCompletionBox_DoAutoScroll_Callback kcompletionbox_doautoscroll_callback = nullptr;
    KCompletionBox_DropIndicatorPosition_Callback kcompletionbox_dropindicatorposition_callback = nullptr;
    KCompletionBox_SetViewportMargins_Callback kcompletionbox_setviewportmargins_callback = nullptr;
    KCompletionBox_ViewportMargins_Callback kcompletionbox_viewportmargins_callback = nullptr;
    KCompletionBox_DrawFrame_Callback kcompletionbox_drawframe_callback = nullptr;
    KCompletionBox_UpdateMicroFocus_Callback kcompletionbox_updatemicrofocus_callback = nullptr;
    KCompletionBox_Create_Callback kcompletionbox_create_callback = nullptr;
    KCompletionBox_Destroy_Callback kcompletionbox_destroy_callback = nullptr;
    KCompletionBox_FocusNextChild_Callback kcompletionbox_focusnextchild_callback = nullptr;
    KCompletionBox_FocusPreviousChild_Callback kcompletionbox_focuspreviouschild_callback = nullptr;
    KCompletionBox_Sender_Callback kcompletionbox_sender_callback = nullptr;
    KCompletionBox_SenderSignalIndex_Callback kcompletionbox_sendersignalindex_callback = nullptr;
    KCompletionBox_Receivers_Callback kcompletionbox_receivers_callback = nullptr;
    KCompletionBox_IsSignalConnected_Callback kcompletionbox_issignalconnected_callback = nullptr;
    KCompletionBox_GetDecodedMetricF_Callback kcompletionbox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcompletionbox_metacall_isbase = false;
    mutable bool kcompletionbox_sizehint_isbase = false;
    mutable bool kcompletionbox_popup_isbase = false;
    mutable bool kcompletionbox_setvisible_isbase = false;
    mutable bool kcompletionbox_eventfilter_isbase = false;
    mutable bool kcompletionbox_globalpositionhint_isbase = false;
    mutable bool kcompletionbox_slotactivated_isbase = false;
    mutable bool kcompletionbox_setselectionmodel_isbase = false;
    mutable bool kcompletionbox_dropevent_isbase = false;
    mutable bool kcompletionbox_event_isbase = false;
    mutable bool kcompletionbox_mimetypes_isbase = false;
    mutable bool kcompletionbox_mimedata_isbase = false;
    mutable bool kcompletionbox_dropmimedata_isbase = false;
    mutable bool kcompletionbox_supporteddropactions_isbase = false;
    mutable bool kcompletionbox_visualrect_isbase = false;
    mutable bool kcompletionbox_scrollto_isbase = false;
    mutable bool kcompletionbox_indexat_isbase = false;
    mutable bool kcompletionbox_doitemslayout_isbase = false;
    mutable bool kcompletionbox_reset_isbase = false;
    mutable bool kcompletionbox_setrootindex_isbase = false;
    mutable bool kcompletionbox_scrollcontentsby_isbase = false;
    mutable bool kcompletionbox_datachanged_isbase = false;
    mutable bool kcompletionbox_rowsinserted_isbase = false;
    mutable bool kcompletionbox_rowsabouttoberemoved_isbase = false;
    mutable bool kcompletionbox_mousemoveevent_isbase = false;
    mutable bool kcompletionbox_mousereleaseevent_isbase = false;
    mutable bool kcompletionbox_wheelevent_isbase = false;
    mutable bool kcompletionbox_timerevent_isbase = false;
    mutable bool kcompletionbox_resizeevent_isbase = false;
    mutable bool kcompletionbox_dragmoveevent_isbase = false;
    mutable bool kcompletionbox_dragleaveevent_isbase = false;
    mutable bool kcompletionbox_startdrag_isbase = false;
    mutable bool kcompletionbox_initviewitemoption_isbase = false;
    mutable bool kcompletionbox_paintevent_isbase = false;
    mutable bool kcompletionbox_horizontaloffset_isbase = false;
    mutable bool kcompletionbox_verticaloffset_isbase = false;
    mutable bool kcompletionbox_movecursor_isbase = false;
    mutable bool kcompletionbox_setselection_isbase = false;
    mutable bool kcompletionbox_visualregionforselection_isbase = false;
    mutable bool kcompletionbox_selectedindexes_isbase = false;
    mutable bool kcompletionbox_updategeometries_isbase = false;
    mutable bool kcompletionbox_isindexhidden_isbase = false;
    mutable bool kcompletionbox_selectionchanged_isbase = false;
    mutable bool kcompletionbox_currentchanged_isbase = false;
    mutable bool kcompletionbox_viewportsizehint_isbase = false;
    mutable bool kcompletionbox_keyboardsearch_isbase = false;
    mutable bool kcompletionbox_sizehintforrow_isbase = false;
    mutable bool kcompletionbox_sizehintforcolumn_isbase = false;
    mutable bool kcompletionbox_itemdelegateforindex_isbase = false;
    mutable bool kcompletionbox_inputmethodquery_isbase = false;
    mutable bool kcompletionbox_selectall_isbase = false;
    mutable bool kcompletionbox_updateeditordata_isbase = false;
    mutable bool kcompletionbox_updateeditorgeometries_isbase = false;
    mutable bool kcompletionbox_verticalscrollbaraction_isbase = false;
    mutable bool kcompletionbox_horizontalscrollbaraction_isbase = false;
    mutable bool kcompletionbox_verticalscrollbarvaluechanged_isbase = false;
    mutable bool kcompletionbox_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool kcompletionbox_closeeditor_isbase = false;
    mutable bool kcompletionbox_commitdata_isbase = false;
    mutable bool kcompletionbox_editordestroyed_isbase = false;
    mutable bool kcompletionbox_edit2_isbase = false;
    mutable bool kcompletionbox_selectioncommand_isbase = false;
    mutable bool kcompletionbox_focusnextprevchild_isbase = false;
    mutable bool kcompletionbox_viewportevent_isbase = false;
    mutable bool kcompletionbox_mousepressevent_isbase = false;
    mutable bool kcompletionbox_mousedoubleclickevent_isbase = false;
    mutable bool kcompletionbox_dragenterevent_isbase = false;
    mutable bool kcompletionbox_focusinevent_isbase = false;
    mutable bool kcompletionbox_focusoutevent_isbase = false;
    mutable bool kcompletionbox_keypressevent_isbase = false;
    mutable bool kcompletionbox_inputmethodevent_isbase = false;
    mutable bool kcompletionbox_minimumsizehint_isbase = false;
    mutable bool kcompletionbox_setupviewport_isbase = false;
    mutable bool kcompletionbox_contextmenuevent_isbase = false;
    mutable bool kcompletionbox_changeevent_isbase = false;
    mutable bool kcompletionbox_initstyleoption_isbase = false;
    mutable bool kcompletionbox_devtype_isbase = false;
    mutable bool kcompletionbox_heightforwidth_isbase = false;
    mutable bool kcompletionbox_hasheightforwidth_isbase = false;
    mutable bool kcompletionbox_paintengine_isbase = false;
    mutable bool kcompletionbox_keyreleaseevent_isbase = false;
    mutable bool kcompletionbox_enterevent_isbase = false;
    mutable bool kcompletionbox_leaveevent_isbase = false;
    mutable bool kcompletionbox_moveevent_isbase = false;
    mutable bool kcompletionbox_closeevent_isbase = false;
    mutable bool kcompletionbox_tabletevent_isbase = false;
    mutable bool kcompletionbox_actionevent_isbase = false;
    mutable bool kcompletionbox_showevent_isbase = false;
    mutable bool kcompletionbox_hideevent_isbase = false;
    mutable bool kcompletionbox_nativeevent_isbase = false;
    mutable bool kcompletionbox_metric_isbase = false;
    mutable bool kcompletionbox_initpainter_isbase = false;
    mutable bool kcompletionbox_redirected_isbase = false;
    mutable bool kcompletionbox_sharedpainter_isbase = false;
    mutable bool kcompletionbox_childevent_isbase = false;
    mutable bool kcompletionbox_customevent_isbase = false;
    mutable bool kcompletionbox_connectnotify_isbase = false;
    mutable bool kcompletionbox_disconnectnotify_isbase = false;
    mutable bool kcompletionbox_calculategeometry_isbase = false;
    mutable bool kcompletionbox_resizeandreposition_isbase = false;
    mutable bool kcompletionbox_resizecontents_isbase = false;
    mutable bool kcompletionbox_contentssize_isbase = false;
    mutable bool kcompletionbox_rectforindex_isbase = false;
    mutable bool kcompletionbox_setpositionforindex_isbase = false;
    mutable bool kcompletionbox_state_isbase = false;
    mutable bool kcompletionbox_setstate_isbase = false;
    mutable bool kcompletionbox_scheduledelayeditemslayout_isbase = false;
    mutable bool kcompletionbox_executedelayeditemslayout_isbase = false;
    mutable bool kcompletionbox_setdirtyregion_isbase = false;
    mutable bool kcompletionbox_scrolldirtyregion_isbase = false;
    mutable bool kcompletionbox_dirtyregionoffset_isbase = false;
    mutable bool kcompletionbox_startautoscroll_isbase = false;
    mutable bool kcompletionbox_stopautoscroll_isbase = false;
    mutable bool kcompletionbox_doautoscroll_isbase = false;
    mutable bool kcompletionbox_dropindicatorposition_isbase = false;
    mutable bool kcompletionbox_setviewportmargins_isbase = false;
    mutable bool kcompletionbox_viewportmargins_isbase = false;
    mutable bool kcompletionbox_drawframe_isbase = false;
    mutable bool kcompletionbox_updatemicrofocus_isbase = false;
    mutable bool kcompletionbox_create_isbase = false;
    mutable bool kcompletionbox_destroy_isbase = false;
    mutable bool kcompletionbox_focusnextchild_isbase = false;
    mutable bool kcompletionbox_focuspreviouschild_isbase = false;
    mutable bool kcompletionbox_sender_isbase = false;
    mutable bool kcompletionbox_sendersignalindex_isbase = false;
    mutable bool kcompletionbox_receivers_isbase = false;
    mutable bool kcompletionbox_issignalconnected_isbase = false;
    mutable bool kcompletionbox_getdecodedmetricf_isbase = false;

  public:
    VirtualKCompletionBox(QWidget* parent) : KCompletionBox(parent) {};
    VirtualKCompletionBox() : KCompletionBox() {};

    ~VirtualKCompletionBox() {
        kcompletionbox_metacall_callback = nullptr;
        kcompletionbox_sizehint_callback = nullptr;
        kcompletionbox_popup_callback = nullptr;
        kcompletionbox_setvisible_callback = nullptr;
        kcompletionbox_eventfilter_callback = nullptr;
        kcompletionbox_globalpositionhint_callback = nullptr;
        kcompletionbox_slotactivated_callback = nullptr;
        kcompletionbox_setselectionmodel_callback = nullptr;
        kcompletionbox_dropevent_callback = nullptr;
        kcompletionbox_event_callback = nullptr;
        kcompletionbox_mimetypes_callback = nullptr;
        kcompletionbox_mimedata_callback = nullptr;
        kcompletionbox_dropmimedata_callback = nullptr;
        kcompletionbox_supporteddropactions_callback = nullptr;
        kcompletionbox_visualrect_callback = nullptr;
        kcompletionbox_scrollto_callback = nullptr;
        kcompletionbox_indexat_callback = nullptr;
        kcompletionbox_doitemslayout_callback = nullptr;
        kcompletionbox_reset_callback = nullptr;
        kcompletionbox_setrootindex_callback = nullptr;
        kcompletionbox_scrollcontentsby_callback = nullptr;
        kcompletionbox_datachanged_callback = nullptr;
        kcompletionbox_rowsinserted_callback = nullptr;
        kcompletionbox_rowsabouttoberemoved_callback = nullptr;
        kcompletionbox_mousemoveevent_callback = nullptr;
        kcompletionbox_mousereleaseevent_callback = nullptr;
        kcompletionbox_wheelevent_callback = nullptr;
        kcompletionbox_timerevent_callback = nullptr;
        kcompletionbox_resizeevent_callback = nullptr;
        kcompletionbox_dragmoveevent_callback = nullptr;
        kcompletionbox_dragleaveevent_callback = nullptr;
        kcompletionbox_startdrag_callback = nullptr;
        kcompletionbox_initviewitemoption_callback = nullptr;
        kcompletionbox_paintevent_callback = nullptr;
        kcompletionbox_horizontaloffset_callback = nullptr;
        kcompletionbox_verticaloffset_callback = nullptr;
        kcompletionbox_movecursor_callback = nullptr;
        kcompletionbox_setselection_callback = nullptr;
        kcompletionbox_visualregionforselection_callback = nullptr;
        kcompletionbox_selectedindexes_callback = nullptr;
        kcompletionbox_updategeometries_callback = nullptr;
        kcompletionbox_isindexhidden_callback = nullptr;
        kcompletionbox_selectionchanged_callback = nullptr;
        kcompletionbox_currentchanged_callback = nullptr;
        kcompletionbox_viewportsizehint_callback = nullptr;
        kcompletionbox_keyboardsearch_callback = nullptr;
        kcompletionbox_sizehintforrow_callback = nullptr;
        kcompletionbox_sizehintforcolumn_callback = nullptr;
        kcompletionbox_itemdelegateforindex_callback = nullptr;
        kcompletionbox_inputmethodquery_callback = nullptr;
        kcompletionbox_selectall_callback = nullptr;
        kcompletionbox_updateeditordata_callback = nullptr;
        kcompletionbox_updateeditorgeometries_callback = nullptr;
        kcompletionbox_verticalscrollbaraction_callback = nullptr;
        kcompletionbox_horizontalscrollbaraction_callback = nullptr;
        kcompletionbox_verticalscrollbarvaluechanged_callback = nullptr;
        kcompletionbox_horizontalscrollbarvaluechanged_callback = nullptr;
        kcompletionbox_closeeditor_callback = nullptr;
        kcompletionbox_commitdata_callback = nullptr;
        kcompletionbox_editordestroyed_callback = nullptr;
        kcompletionbox_edit2_callback = nullptr;
        kcompletionbox_selectioncommand_callback = nullptr;
        kcompletionbox_focusnextprevchild_callback = nullptr;
        kcompletionbox_viewportevent_callback = nullptr;
        kcompletionbox_mousepressevent_callback = nullptr;
        kcompletionbox_mousedoubleclickevent_callback = nullptr;
        kcompletionbox_dragenterevent_callback = nullptr;
        kcompletionbox_focusinevent_callback = nullptr;
        kcompletionbox_focusoutevent_callback = nullptr;
        kcompletionbox_keypressevent_callback = nullptr;
        kcompletionbox_inputmethodevent_callback = nullptr;
        kcompletionbox_minimumsizehint_callback = nullptr;
        kcompletionbox_setupviewport_callback = nullptr;
        kcompletionbox_contextmenuevent_callback = nullptr;
        kcompletionbox_changeevent_callback = nullptr;
        kcompletionbox_initstyleoption_callback = nullptr;
        kcompletionbox_devtype_callback = nullptr;
        kcompletionbox_heightforwidth_callback = nullptr;
        kcompletionbox_hasheightforwidth_callback = nullptr;
        kcompletionbox_paintengine_callback = nullptr;
        kcompletionbox_keyreleaseevent_callback = nullptr;
        kcompletionbox_enterevent_callback = nullptr;
        kcompletionbox_leaveevent_callback = nullptr;
        kcompletionbox_moveevent_callback = nullptr;
        kcompletionbox_closeevent_callback = nullptr;
        kcompletionbox_tabletevent_callback = nullptr;
        kcompletionbox_actionevent_callback = nullptr;
        kcompletionbox_showevent_callback = nullptr;
        kcompletionbox_hideevent_callback = nullptr;
        kcompletionbox_nativeevent_callback = nullptr;
        kcompletionbox_metric_callback = nullptr;
        kcompletionbox_initpainter_callback = nullptr;
        kcompletionbox_redirected_callback = nullptr;
        kcompletionbox_sharedpainter_callback = nullptr;
        kcompletionbox_childevent_callback = nullptr;
        kcompletionbox_customevent_callback = nullptr;
        kcompletionbox_connectnotify_callback = nullptr;
        kcompletionbox_disconnectnotify_callback = nullptr;
        kcompletionbox_calculategeometry_callback = nullptr;
        kcompletionbox_resizeandreposition_callback = nullptr;
        kcompletionbox_resizecontents_callback = nullptr;
        kcompletionbox_contentssize_callback = nullptr;
        kcompletionbox_rectforindex_callback = nullptr;
        kcompletionbox_setpositionforindex_callback = nullptr;
        kcompletionbox_state_callback = nullptr;
        kcompletionbox_setstate_callback = nullptr;
        kcompletionbox_scheduledelayeditemslayout_callback = nullptr;
        kcompletionbox_executedelayeditemslayout_callback = nullptr;
        kcompletionbox_setdirtyregion_callback = nullptr;
        kcompletionbox_scrolldirtyregion_callback = nullptr;
        kcompletionbox_dirtyregionoffset_callback = nullptr;
        kcompletionbox_startautoscroll_callback = nullptr;
        kcompletionbox_stopautoscroll_callback = nullptr;
        kcompletionbox_doautoscroll_callback = nullptr;
        kcompletionbox_dropindicatorposition_callback = nullptr;
        kcompletionbox_setviewportmargins_callback = nullptr;
        kcompletionbox_viewportmargins_callback = nullptr;
        kcompletionbox_drawframe_callback = nullptr;
        kcompletionbox_updatemicrofocus_callback = nullptr;
        kcompletionbox_create_callback = nullptr;
        kcompletionbox_destroy_callback = nullptr;
        kcompletionbox_focusnextchild_callback = nullptr;
        kcompletionbox_focuspreviouschild_callback = nullptr;
        kcompletionbox_sender_callback = nullptr;
        kcompletionbox_sendersignalindex_callback = nullptr;
        kcompletionbox_receivers_callback = nullptr;
        kcompletionbox_issignalconnected_callback = nullptr;
        kcompletionbox_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKCompletionBox_Metacall_Callback(KCompletionBox_Metacall_Callback cb) { kcompletionbox_metacall_callback = cb; }
    inline void setKCompletionBox_SizeHint_Callback(KCompletionBox_SizeHint_Callback cb) { kcompletionbox_sizehint_callback = cb; }
    inline void setKCompletionBox_Popup_Callback(KCompletionBox_Popup_Callback cb) { kcompletionbox_popup_callback = cb; }
    inline void setKCompletionBox_SetVisible_Callback(KCompletionBox_SetVisible_Callback cb) { kcompletionbox_setvisible_callback = cb; }
    inline void setKCompletionBox_EventFilter_Callback(KCompletionBox_EventFilter_Callback cb) { kcompletionbox_eventfilter_callback = cb; }
    inline void setKCompletionBox_GlobalPositionHint_Callback(KCompletionBox_GlobalPositionHint_Callback cb) { kcompletionbox_globalpositionhint_callback = cb; }
    inline void setKCompletionBox_SlotActivated_Callback(KCompletionBox_SlotActivated_Callback cb) { kcompletionbox_slotactivated_callback = cb; }
    inline void setKCompletionBox_SetSelectionModel_Callback(KCompletionBox_SetSelectionModel_Callback cb) { kcompletionbox_setselectionmodel_callback = cb; }
    inline void setKCompletionBox_DropEvent_Callback(KCompletionBox_DropEvent_Callback cb) { kcompletionbox_dropevent_callback = cb; }
    inline void setKCompletionBox_Event_Callback(KCompletionBox_Event_Callback cb) { kcompletionbox_event_callback = cb; }
    inline void setKCompletionBox_MimeTypes_Callback(KCompletionBox_MimeTypes_Callback cb) { kcompletionbox_mimetypes_callback = cb; }
    inline void setKCompletionBox_MimeData_Callback(KCompletionBox_MimeData_Callback cb) { kcompletionbox_mimedata_callback = cb; }
    inline void setKCompletionBox_DropMimeData_Callback(KCompletionBox_DropMimeData_Callback cb) { kcompletionbox_dropmimedata_callback = cb; }
    inline void setKCompletionBox_SupportedDropActions_Callback(KCompletionBox_SupportedDropActions_Callback cb) { kcompletionbox_supporteddropactions_callback = cb; }
    inline void setKCompletionBox_VisualRect_Callback(KCompletionBox_VisualRect_Callback cb) { kcompletionbox_visualrect_callback = cb; }
    inline void setKCompletionBox_ScrollTo_Callback(KCompletionBox_ScrollTo_Callback cb) { kcompletionbox_scrollto_callback = cb; }
    inline void setKCompletionBox_IndexAt_Callback(KCompletionBox_IndexAt_Callback cb) { kcompletionbox_indexat_callback = cb; }
    inline void setKCompletionBox_DoItemsLayout_Callback(KCompletionBox_DoItemsLayout_Callback cb) { kcompletionbox_doitemslayout_callback = cb; }
    inline void setKCompletionBox_Reset_Callback(KCompletionBox_Reset_Callback cb) { kcompletionbox_reset_callback = cb; }
    inline void setKCompletionBox_SetRootIndex_Callback(KCompletionBox_SetRootIndex_Callback cb) { kcompletionbox_setrootindex_callback = cb; }
    inline void setKCompletionBox_ScrollContentsBy_Callback(KCompletionBox_ScrollContentsBy_Callback cb) { kcompletionbox_scrollcontentsby_callback = cb; }
    inline void setKCompletionBox_DataChanged_Callback(KCompletionBox_DataChanged_Callback cb) { kcompletionbox_datachanged_callback = cb; }
    inline void setKCompletionBox_RowsInserted_Callback(KCompletionBox_RowsInserted_Callback cb) { kcompletionbox_rowsinserted_callback = cb; }
    inline void setKCompletionBox_RowsAboutToBeRemoved_Callback(KCompletionBox_RowsAboutToBeRemoved_Callback cb) { kcompletionbox_rowsabouttoberemoved_callback = cb; }
    inline void setKCompletionBox_MouseMoveEvent_Callback(KCompletionBox_MouseMoveEvent_Callback cb) { kcompletionbox_mousemoveevent_callback = cb; }
    inline void setKCompletionBox_MouseReleaseEvent_Callback(KCompletionBox_MouseReleaseEvent_Callback cb) { kcompletionbox_mousereleaseevent_callback = cb; }
    inline void setKCompletionBox_WheelEvent_Callback(KCompletionBox_WheelEvent_Callback cb) { kcompletionbox_wheelevent_callback = cb; }
    inline void setKCompletionBox_TimerEvent_Callback(KCompletionBox_TimerEvent_Callback cb) { kcompletionbox_timerevent_callback = cb; }
    inline void setKCompletionBox_ResizeEvent_Callback(KCompletionBox_ResizeEvent_Callback cb) { kcompletionbox_resizeevent_callback = cb; }
    inline void setKCompletionBox_DragMoveEvent_Callback(KCompletionBox_DragMoveEvent_Callback cb) { kcompletionbox_dragmoveevent_callback = cb; }
    inline void setKCompletionBox_DragLeaveEvent_Callback(KCompletionBox_DragLeaveEvent_Callback cb) { kcompletionbox_dragleaveevent_callback = cb; }
    inline void setKCompletionBox_StartDrag_Callback(KCompletionBox_StartDrag_Callback cb) { kcompletionbox_startdrag_callback = cb; }
    inline void setKCompletionBox_InitViewItemOption_Callback(KCompletionBox_InitViewItemOption_Callback cb) { kcompletionbox_initviewitemoption_callback = cb; }
    inline void setKCompletionBox_PaintEvent_Callback(KCompletionBox_PaintEvent_Callback cb) { kcompletionbox_paintevent_callback = cb; }
    inline void setKCompletionBox_HorizontalOffset_Callback(KCompletionBox_HorizontalOffset_Callback cb) { kcompletionbox_horizontaloffset_callback = cb; }
    inline void setKCompletionBox_VerticalOffset_Callback(KCompletionBox_VerticalOffset_Callback cb) { kcompletionbox_verticaloffset_callback = cb; }
    inline void setKCompletionBox_MoveCursor_Callback(KCompletionBox_MoveCursor_Callback cb) { kcompletionbox_movecursor_callback = cb; }
    inline void setKCompletionBox_SetSelection_Callback(KCompletionBox_SetSelection_Callback cb) { kcompletionbox_setselection_callback = cb; }
    inline void setKCompletionBox_VisualRegionForSelection_Callback(KCompletionBox_VisualRegionForSelection_Callback cb) { kcompletionbox_visualregionforselection_callback = cb; }
    inline void setKCompletionBox_SelectedIndexes_Callback(KCompletionBox_SelectedIndexes_Callback cb) { kcompletionbox_selectedindexes_callback = cb; }
    inline void setKCompletionBox_UpdateGeometries_Callback(KCompletionBox_UpdateGeometries_Callback cb) { kcompletionbox_updategeometries_callback = cb; }
    inline void setKCompletionBox_IsIndexHidden_Callback(KCompletionBox_IsIndexHidden_Callback cb) { kcompletionbox_isindexhidden_callback = cb; }
    inline void setKCompletionBox_SelectionChanged_Callback(KCompletionBox_SelectionChanged_Callback cb) { kcompletionbox_selectionchanged_callback = cb; }
    inline void setKCompletionBox_CurrentChanged_Callback(KCompletionBox_CurrentChanged_Callback cb) { kcompletionbox_currentchanged_callback = cb; }
    inline void setKCompletionBox_ViewportSizeHint_Callback(KCompletionBox_ViewportSizeHint_Callback cb) { kcompletionbox_viewportsizehint_callback = cb; }
    inline void setKCompletionBox_KeyboardSearch_Callback(KCompletionBox_KeyboardSearch_Callback cb) { kcompletionbox_keyboardsearch_callback = cb; }
    inline void setKCompletionBox_SizeHintForRow_Callback(KCompletionBox_SizeHintForRow_Callback cb) { kcompletionbox_sizehintforrow_callback = cb; }
    inline void setKCompletionBox_SizeHintForColumn_Callback(KCompletionBox_SizeHintForColumn_Callback cb) { kcompletionbox_sizehintforcolumn_callback = cb; }
    inline void setKCompletionBox_ItemDelegateForIndex_Callback(KCompletionBox_ItemDelegateForIndex_Callback cb) { kcompletionbox_itemdelegateforindex_callback = cb; }
    inline void setKCompletionBox_InputMethodQuery_Callback(KCompletionBox_InputMethodQuery_Callback cb) { kcompletionbox_inputmethodquery_callback = cb; }
    inline void setKCompletionBox_SelectAll_Callback(KCompletionBox_SelectAll_Callback cb) { kcompletionbox_selectall_callback = cb; }
    inline void setKCompletionBox_UpdateEditorData_Callback(KCompletionBox_UpdateEditorData_Callback cb) { kcompletionbox_updateeditordata_callback = cb; }
    inline void setKCompletionBox_UpdateEditorGeometries_Callback(KCompletionBox_UpdateEditorGeometries_Callback cb) { kcompletionbox_updateeditorgeometries_callback = cb; }
    inline void setKCompletionBox_VerticalScrollbarAction_Callback(KCompletionBox_VerticalScrollbarAction_Callback cb) { kcompletionbox_verticalscrollbaraction_callback = cb; }
    inline void setKCompletionBox_HorizontalScrollbarAction_Callback(KCompletionBox_HorizontalScrollbarAction_Callback cb) { kcompletionbox_horizontalscrollbaraction_callback = cb; }
    inline void setKCompletionBox_VerticalScrollbarValueChanged_Callback(KCompletionBox_VerticalScrollbarValueChanged_Callback cb) { kcompletionbox_verticalscrollbarvaluechanged_callback = cb; }
    inline void setKCompletionBox_HorizontalScrollbarValueChanged_Callback(KCompletionBox_HorizontalScrollbarValueChanged_Callback cb) { kcompletionbox_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setKCompletionBox_CloseEditor_Callback(KCompletionBox_CloseEditor_Callback cb) { kcompletionbox_closeeditor_callback = cb; }
    inline void setKCompletionBox_CommitData_Callback(KCompletionBox_CommitData_Callback cb) { kcompletionbox_commitdata_callback = cb; }
    inline void setKCompletionBox_EditorDestroyed_Callback(KCompletionBox_EditorDestroyed_Callback cb) { kcompletionbox_editordestroyed_callback = cb; }
    inline void setKCompletionBox_Edit2_Callback(KCompletionBox_Edit2_Callback cb) { kcompletionbox_edit2_callback = cb; }
    inline void setKCompletionBox_SelectionCommand_Callback(KCompletionBox_SelectionCommand_Callback cb) { kcompletionbox_selectioncommand_callback = cb; }
    inline void setKCompletionBox_FocusNextPrevChild_Callback(KCompletionBox_FocusNextPrevChild_Callback cb) { kcompletionbox_focusnextprevchild_callback = cb; }
    inline void setKCompletionBox_ViewportEvent_Callback(KCompletionBox_ViewportEvent_Callback cb) { kcompletionbox_viewportevent_callback = cb; }
    inline void setKCompletionBox_MousePressEvent_Callback(KCompletionBox_MousePressEvent_Callback cb) { kcompletionbox_mousepressevent_callback = cb; }
    inline void setKCompletionBox_MouseDoubleClickEvent_Callback(KCompletionBox_MouseDoubleClickEvent_Callback cb) { kcompletionbox_mousedoubleclickevent_callback = cb; }
    inline void setKCompletionBox_DragEnterEvent_Callback(KCompletionBox_DragEnterEvent_Callback cb) { kcompletionbox_dragenterevent_callback = cb; }
    inline void setKCompletionBox_FocusInEvent_Callback(KCompletionBox_FocusInEvent_Callback cb) { kcompletionbox_focusinevent_callback = cb; }
    inline void setKCompletionBox_FocusOutEvent_Callback(KCompletionBox_FocusOutEvent_Callback cb) { kcompletionbox_focusoutevent_callback = cb; }
    inline void setKCompletionBox_KeyPressEvent_Callback(KCompletionBox_KeyPressEvent_Callback cb) { kcompletionbox_keypressevent_callback = cb; }
    inline void setKCompletionBox_InputMethodEvent_Callback(KCompletionBox_InputMethodEvent_Callback cb) { kcompletionbox_inputmethodevent_callback = cb; }
    inline void setKCompletionBox_MinimumSizeHint_Callback(KCompletionBox_MinimumSizeHint_Callback cb) { kcompletionbox_minimumsizehint_callback = cb; }
    inline void setKCompletionBox_SetupViewport_Callback(KCompletionBox_SetupViewport_Callback cb) { kcompletionbox_setupviewport_callback = cb; }
    inline void setKCompletionBox_ContextMenuEvent_Callback(KCompletionBox_ContextMenuEvent_Callback cb) { kcompletionbox_contextmenuevent_callback = cb; }
    inline void setKCompletionBox_ChangeEvent_Callback(KCompletionBox_ChangeEvent_Callback cb) { kcompletionbox_changeevent_callback = cb; }
    inline void setKCompletionBox_InitStyleOption_Callback(KCompletionBox_InitStyleOption_Callback cb) { kcompletionbox_initstyleoption_callback = cb; }
    inline void setKCompletionBox_DevType_Callback(KCompletionBox_DevType_Callback cb) { kcompletionbox_devtype_callback = cb; }
    inline void setKCompletionBox_HeightForWidth_Callback(KCompletionBox_HeightForWidth_Callback cb) { kcompletionbox_heightforwidth_callback = cb; }
    inline void setKCompletionBox_HasHeightForWidth_Callback(KCompletionBox_HasHeightForWidth_Callback cb) { kcompletionbox_hasheightforwidth_callback = cb; }
    inline void setKCompletionBox_PaintEngine_Callback(KCompletionBox_PaintEngine_Callback cb) { kcompletionbox_paintengine_callback = cb; }
    inline void setKCompletionBox_KeyReleaseEvent_Callback(KCompletionBox_KeyReleaseEvent_Callback cb) { kcompletionbox_keyreleaseevent_callback = cb; }
    inline void setKCompletionBox_EnterEvent_Callback(KCompletionBox_EnterEvent_Callback cb) { kcompletionbox_enterevent_callback = cb; }
    inline void setKCompletionBox_LeaveEvent_Callback(KCompletionBox_LeaveEvent_Callback cb) { kcompletionbox_leaveevent_callback = cb; }
    inline void setKCompletionBox_MoveEvent_Callback(KCompletionBox_MoveEvent_Callback cb) { kcompletionbox_moveevent_callback = cb; }
    inline void setKCompletionBox_CloseEvent_Callback(KCompletionBox_CloseEvent_Callback cb) { kcompletionbox_closeevent_callback = cb; }
    inline void setKCompletionBox_TabletEvent_Callback(KCompletionBox_TabletEvent_Callback cb) { kcompletionbox_tabletevent_callback = cb; }
    inline void setKCompletionBox_ActionEvent_Callback(KCompletionBox_ActionEvent_Callback cb) { kcompletionbox_actionevent_callback = cb; }
    inline void setKCompletionBox_ShowEvent_Callback(KCompletionBox_ShowEvent_Callback cb) { kcompletionbox_showevent_callback = cb; }
    inline void setKCompletionBox_HideEvent_Callback(KCompletionBox_HideEvent_Callback cb) { kcompletionbox_hideevent_callback = cb; }
    inline void setKCompletionBox_NativeEvent_Callback(KCompletionBox_NativeEvent_Callback cb) { kcompletionbox_nativeevent_callback = cb; }
    inline void setKCompletionBox_Metric_Callback(KCompletionBox_Metric_Callback cb) { kcompletionbox_metric_callback = cb; }
    inline void setKCompletionBox_InitPainter_Callback(KCompletionBox_InitPainter_Callback cb) { kcompletionbox_initpainter_callback = cb; }
    inline void setKCompletionBox_Redirected_Callback(KCompletionBox_Redirected_Callback cb) { kcompletionbox_redirected_callback = cb; }
    inline void setKCompletionBox_SharedPainter_Callback(KCompletionBox_SharedPainter_Callback cb) { kcompletionbox_sharedpainter_callback = cb; }
    inline void setKCompletionBox_ChildEvent_Callback(KCompletionBox_ChildEvent_Callback cb) { kcompletionbox_childevent_callback = cb; }
    inline void setKCompletionBox_CustomEvent_Callback(KCompletionBox_CustomEvent_Callback cb) { kcompletionbox_customevent_callback = cb; }
    inline void setKCompletionBox_ConnectNotify_Callback(KCompletionBox_ConnectNotify_Callback cb) { kcompletionbox_connectnotify_callback = cb; }
    inline void setKCompletionBox_DisconnectNotify_Callback(KCompletionBox_DisconnectNotify_Callback cb) { kcompletionbox_disconnectnotify_callback = cb; }
    inline void setKCompletionBox_CalculateGeometry_Callback(KCompletionBox_CalculateGeometry_Callback cb) { kcompletionbox_calculategeometry_callback = cb; }
    inline void setKCompletionBox_ResizeAndReposition_Callback(KCompletionBox_ResizeAndReposition_Callback cb) { kcompletionbox_resizeandreposition_callback = cb; }
    inline void setKCompletionBox_ResizeContents_Callback(KCompletionBox_ResizeContents_Callback cb) { kcompletionbox_resizecontents_callback = cb; }
    inline void setKCompletionBox_ContentsSize_Callback(KCompletionBox_ContentsSize_Callback cb) { kcompletionbox_contentssize_callback = cb; }
    inline void setKCompletionBox_RectForIndex_Callback(KCompletionBox_RectForIndex_Callback cb) { kcompletionbox_rectforindex_callback = cb; }
    inline void setKCompletionBox_SetPositionForIndex_Callback(KCompletionBox_SetPositionForIndex_Callback cb) { kcompletionbox_setpositionforindex_callback = cb; }
    inline void setKCompletionBox_State_Callback(KCompletionBox_State_Callback cb) { kcompletionbox_state_callback = cb; }
    inline void setKCompletionBox_SetState_Callback(KCompletionBox_SetState_Callback cb) { kcompletionbox_setstate_callback = cb; }
    inline void setKCompletionBox_ScheduleDelayedItemsLayout_Callback(KCompletionBox_ScheduleDelayedItemsLayout_Callback cb) { kcompletionbox_scheduledelayeditemslayout_callback = cb; }
    inline void setKCompletionBox_ExecuteDelayedItemsLayout_Callback(KCompletionBox_ExecuteDelayedItemsLayout_Callback cb) { kcompletionbox_executedelayeditemslayout_callback = cb; }
    inline void setKCompletionBox_SetDirtyRegion_Callback(KCompletionBox_SetDirtyRegion_Callback cb) { kcompletionbox_setdirtyregion_callback = cb; }
    inline void setKCompletionBox_ScrollDirtyRegion_Callback(KCompletionBox_ScrollDirtyRegion_Callback cb) { kcompletionbox_scrolldirtyregion_callback = cb; }
    inline void setKCompletionBox_DirtyRegionOffset_Callback(KCompletionBox_DirtyRegionOffset_Callback cb) { kcompletionbox_dirtyregionoffset_callback = cb; }
    inline void setKCompletionBox_StartAutoScroll_Callback(KCompletionBox_StartAutoScroll_Callback cb) { kcompletionbox_startautoscroll_callback = cb; }
    inline void setKCompletionBox_StopAutoScroll_Callback(KCompletionBox_StopAutoScroll_Callback cb) { kcompletionbox_stopautoscroll_callback = cb; }
    inline void setKCompletionBox_DoAutoScroll_Callback(KCompletionBox_DoAutoScroll_Callback cb) { kcompletionbox_doautoscroll_callback = cb; }
    inline void setKCompletionBox_DropIndicatorPosition_Callback(KCompletionBox_DropIndicatorPosition_Callback cb) { kcompletionbox_dropindicatorposition_callback = cb; }
    inline void setKCompletionBox_SetViewportMargins_Callback(KCompletionBox_SetViewportMargins_Callback cb) { kcompletionbox_setviewportmargins_callback = cb; }
    inline void setKCompletionBox_ViewportMargins_Callback(KCompletionBox_ViewportMargins_Callback cb) { kcompletionbox_viewportmargins_callback = cb; }
    inline void setKCompletionBox_DrawFrame_Callback(KCompletionBox_DrawFrame_Callback cb) { kcompletionbox_drawframe_callback = cb; }
    inline void setKCompletionBox_UpdateMicroFocus_Callback(KCompletionBox_UpdateMicroFocus_Callback cb) { kcompletionbox_updatemicrofocus_callback = cb; }
    inline void setKCompletionBox_Create_Callback(KCompletionBox_Create_Callback cb) { kcompletionbox_create_callback = cb; }
    inline void setKCompletionBox_Destroy_Callback(KCompletionBox_Destroy_Callback cb) { kcompletionbox_destroy_callback = cb; }
    inline void setKCompletionBox_FocusNextChild_Callback(KCompletionBox_FocusNextChild_Callback cb) { kcompletionbox_focusnextchild_callback = cb; }
    inline void setKCompletionBox_FocusPreviousChild_Callback(KCompletionBox_FocusPreviousChild_Callback cb) { kcompletionbox_focuspreviouschild_callback = cb; }
    inline void setKCompletionBox_Sender_Callback(KCompletionBox_Sender_Callback cb) { kcompletionbox_sender_callback = cb; }
    inline void setKCompletionBox_SenderSignalIndex_Callback(KCompletionBox_SenderSignalIndex_Callback cb) { kcompletionbox_sendersignalindex_callback = cb; }
    inline void setKCompletionBox_Receivers_Callback(KCompletionBox_Receivers_Callback cb) { kcompletionbox_receivers_callback = cb; }
    inline void setKCompletionBox_IsSignalConnected_Callback(KCompletionBox_IsSignalConnected_Callback cb) { kcompletionbox_issignalconnected_callback = cb; }
    inline void setKCompletionBox_GetDecodedMetricF_Callback(KCompletionBox_GetDecodedMetricF_Callback cb) { kcompletionbox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKCompletionBox_Metacall_IsBase(bool value) const { kcompletionbox_metacall_isbase = value; }
    inline void setKCompletionBox_SizeHint_IsBase(bool value) const { kcompletionbox_sizehint_isbase = value; }
    inline void setKCompletionBox_Popup_IsBase(bool value) const { kcompletionbox_popup_isbase = value; }
    inline void setKCompletionBox_SetVisible_IsBase(bool value) const { kcompletionbox_setvisible_isbase = value; }
    inline void setKCompletionBox_EventFilter_IsBase(bool value) const { kcompletionbox_eventfilter_isbase = value; }
    inline void setKCompletionBox_GlobalPositionHint_IsBase(bool value) const { kcompletionbox_globalpositionhint_isbase = value; }
    inline void setKCompletionBox_SlotActivated_IsBase(bool value) const { kcompletionbox_slotactivated_isbase = value; }
    inline void setKCompletionBox_SetSelectionModel_IsBase(bool value) const { kcompletionbox_setselectionmodel_isbase = value; }
    inline void setKCompletionBox_DropEvent_IsBase(bool value) const { kcompletionbox_dropevent_isbase = value; }
    inline void setKCompletionBox_Event_IsBase(bool value) const { kcompletionbox_event_isbase = value; }
    inline void setKCompletionBox_MimeTypes_IsBase(bool value) const { kcompletionbox_mimetypes_isbase = value; }
    inline void setKCompletionBox_MimeData_IsBase(bool value) const { kcompletionbox_mimedata_isbase = value; }
    inline void setKCompletionBox_DropMimeData_IsBase(bool value) const { kcompletionbox_dropmimedata_isbase = value; }
    inline void setKCompletionBox_SupportedDropActions_IsBase(bool value) const { kcompletionbox_supporteddropactions_isbase = value; }
    inline void setKCompletionBox_VisualRect_IsBase(bool value) const { kcompletionbox_visualrect_isbase = value; }
    inline void setKCompletionBox_ScrollTo_IsBase(bool value) const { kcompletionbox_scrollto_isbase = value; }
    inline void setKCompletionBox_IndexAt_IsBase(bool value) const { kcompletionbox_indexat_isbase = value; }
    inline void setKCompletionBox_DoItemsLayout_IsBase(bool value) const { kcompletionbox_doitemslayout_isbase = value; }
    inline void setKCompletionBox_Reset_IsBase(bool value) const { kcompletionbox_reset_isbase = value; }
    inline void setKCompletionBox_SetRootIndex_IsBase(bool value) const { kcompletionbox_setrootindex_isbase = value; }
    inline void setKCompletionBox_ScrollContentsBy_IsBase(bool value) const { kcompletionbox_scrollcontentsby_isbase = value; }
    inline void setKCompletionBox_DataChanged_IsBase(bool value) const { kcompletionbox_datachanged_isbase = value; }
    inline void setKCompletionBox_RowsInserted_IsBase(bool value) const { kcompletionbox_rowsinserted_isbase = value; }
    inline void setKCompletionBox_RowsAboutToBeRemoved_IsBase(bool value) const { kcompletionbox_rowsabouttoberemoved_isbase = value; }
    inline void setKCompletionBox_MouseMoveEvent_IsBase(bool value) const { kcompletionbox_mousemoveevent_isbase = value; }
    inline void setKCompletionBox_MouseReleaseEvent_IsBase(bool value) const { kcompletionbox_mousereleaseevent_isbase = value; }
    inline void setKCompletionBox_WheelEvent_IsBase(bool value) const { kcompletionbox_wheelevent_isbase = value; }
    inline void setKCompletionBox_TimerEvent_IsBase(bool value) const { kcompletionbox_timerevent_isbase = value; }
    inline void setKCompletionBox_ResizeEvent_IsBase(bool value) const { kcompletionbox_resizeevent_isbase = value; }
    inline void setKCompletionBox_DragMoveEvent_IsBase(bool value) const { kcompletionbox_dragmoveevent_isbase = value; }
    inline void setKCompletionBox_DragLeaveEvent_IsBase(bool value) const { kcompletionbox_dragleaveevent_isbase = value; }
    inline void setKCompletionBox_StartDrag_IsBase(bool value) const { kcompletionbox_startdrag_isbase = value; }
    inline void setKCompletionBox_InitViewItemOption_IsBase(bool value) const { kcompletionbox_initviewitemoption_isbase = value; }
    inline void setKCompletionBox_PaintEvent_IsBase(bool value) const { kcompletionbox_paintevent_isbase = value; }
    inline void setKCompletionBox_HorizontalOffset_IsBase(bool value) const { kcompletionbox_horizontaloffset_isbase = value; }
    inline void setKCompletionBox_VerticalOffset_IsBase(bool value) const { kcompletionbox_verticaloffset_isbase = value; }
    inline void setKCompletionBox_MoveCursor_IsBase(bool value) const { kcompletionbox_movecursor_isbase = value; }
    inline void setKCompletionBox_SetSelection_IsBase(bool value) const { kcompletionbox_setselection_isbase = value; }
    inline void setKCompletionBox_VisualRegionForSelection_IsBase(bool value) const { kcompletionbox_visualregionforselection_isbase = value; }
    inline void setKCompletionBox_SelectedIndexes_IsBase(bool value) const { kcompletionbox_selectedindexes_isbase = value; }
    inline void setKCompletionBox_UpdateGeometries_IsBase(bool value) const { kcompletionbox_updategeometries_isbase = value; }
    inline void setKCompletionBox_IsIndexHidden_IsBase(bool value) const { kcompletionbox_isindexhidden_isbase = value; }
    inline void setKCompletionBox_SelectionChanged_IsBase(bool value) const { kcompletionbox_selectionchanged_isbase = value; }
    inline void setKCompletionBox_CurrentChanged_IsBase(bool value) const { kcompletionbox_currentchanged_isbase = value; }
    inline void setKCompletionBox_ViewportSizeHint_IsBase(bool value) const { kcompletionbox_viewportsizehint_isbase = value; }
    inline void setKCompletionBox_KeyboardSearch_IsBase(bool value) const { kcompletionbox_keyboardsearch_isbase = value; }
    inline void setKCompletionBox_SizeHintForRow_IsBase(bool value) const { kcompletionbox_sizehintforrow_isbase = value; }
    inline void setKCompletionBox_SizeHintForColumn_IsBase(bool value) const { kcompletionbox_sizehintforcolumn_isbase = value; }
    inline void setKCompletionBox_ItemDelegateForIndex_IsBase(bool value) const { kcompletionbox_itemdelegateforindex_isbase = value; }
    inline void setKCompletionBox_InputMethodQuery_IsBase(bool value) const { kcompletionbox_inputmethodquery_isbase = value; }
    inline void setKCompletionBox_SelectAll_IsBase(bool value) const { kcompletionbox_selectall_isbase = value; }
    inline void setKCompletionBox_UpdateEditorData_IsBase(bool value) const { kcompletionbox_updateeditordata_isbase = value; }
    inline void setKCompletionBox_UpdateEditorGeometries_IsBase(bool value) const { kcompletionbox_updateeditorgeometries_isbase = value; }
    inline void setKCompletionBox_VerticalScrollbarAction_IsBase(bool value) const { kcompletionbox_verticalscrollbaraction_isbase = value; }
    inline void setKCompletionBox_HorizontalScrollbarAction_IsBase(bool value) const { kcompletionbox_horizontalscrollbaraction_isbase = value; }
    inline void setKCompletionBox_VerticalScrollbarValueChanged_IsBase(bool value) const { kcompletionbox_verticalscrollbarvaluechanged_isbase = value; }
    inline void setKCompletionBox_HorizontalScrollbarValueChanged_IsBase(bool value) const { kcompletionbox_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setKCompletionBox_CloseEditor_IsBase(bool value) const { kcompletionbox_closeeditor_isbase = value; }
    inline void setKCompletionBox_CommitData_IsBase(bool value) const { kcompletionbox_commitdata_isbase = value; }
    inline void setKCompletionBox_EditorDestroyed_IsBase(bool value) const { kcompletionbox_editordestroyed_isbase = value; }
    inline void setKCompletionBox_Edit2_IsBase(bool value) const { kcompletionbox_edit2_isbase = value; }
    inline void setKCompletionBox_SelectionCommand_IsBase(bool value) const { kcompletionbox_selectioncommand_isbase = value; }
    inline void setKCompletionBox_FocusNextPrevChild_IsBase(bool value) const { kcompletionbox_focusnextprevchild_isbase = value; }
    inline void setKCompletionBox_ViewportEvent_IsBase(bool value) const { kcompletionbox_viewportevent_isbase = value; }
    inline void setKCompletionBox_MousePressEvent_IsBase(bool value) const { kcompletionbox_mousepressevent_isbase = value; }
    inline void setKCompletionBox_MouseDoubleClickEvent_IsBase(bool value) const { kcompletionbox_mousedoubleclickevent_isbase = value; }
    inline void setKCompletionBox_DragEnterEvent_IsBase(bool value) const { kcompletionbox_dragenterevent_isbase = value; }
    inline void setKCompletionBox_FocusInEvent_IsBase(bool value) const { kcompletionbox_focusinevent_isbase = value; }
    inline void setKCompletionBox_FocusOutEvent_IsBase(bool value) const { kcompletionbox_focusoutevent_isbase = value; }
    inline void setKCompletionBox_KeyPressEvent_IsBase(bool value) const { kcompletionbox_keypressevent_isbase = value; }
    inline void setKCompletionBox_InputMethodEvent_IsBase(bool value) const { kcompletionbox_inputmethodevent_isbase = value; }
    inline void setKCompletionBox_MinimumSizeHint_IsBase(bool value) const { kcompletionbox_minimumsizehint_isbase = value; }
    inline void setKCompletionBox_SetupViewport_IsBase(bool value) const { kcompletionbox_setupviewport_isbase = value; }
    inline void setKCompletionBox_ContextMenuEvent_IsBase(bool value) const { kcompletionbox_contextmenuevent_isbase = value; }
    inline void setKCompletionBox_ChangeEvent_IsBase(bool value) const { kcompletionbox_changeevent_isbase = value; }
    inline void setKCompletionBox_InitStyleOption_IsBase(bool value) const { kcompletionbox_initstyleoption_isbase = value; }
    inline void setKCompletionBox_DevType_IsBase(bool value) const { kcompletionbox_devtype_isbase = value; }
    inline void setKCompletionBox_HeightForWidth_IsBase(bool value) const { kcompletionbox_heightforwidth_isbase = value; }
    inline void setKCompletionBox_HasHeightForWidth_IsBase(bool value) const { kcompletionbox_hasheightforwidth_isbase = value; }
    inline void setKCompletionBox_PaintEngine_IsBase(bool value) const { kcompletionbox_paintengine_isbase = value; }
    inline void setKCompletionBox_KeyReleaseEvent_IsBase(bool value) const { kcompletionbox_keyreleaseevent_isbase = value; }
    inline void setKCompletionBox_EnterEvent_IsBase(bool value) const { kcompletionbox_enterevent_isbase = value; }
    inline void setKCompletionBox_LeaveEvent_IsBase(bool value) const { kcompletionbox_leaveevent_isbase = value; }
    inline void setKCompletionBox_MoveEvent_IsBase(bool value) const { kcompletionbox_moveevent_isbase = value; }
    inline void setKCompletionBox_CloseEvent_IsBase(bool value) const { kcompletionbox_closeevent_isbase = value; }
    inline void setKCompletionBox_TabletEvent_IsBase(bool value) const { kcompletionbox_tabletevent_isbase = value; }
    inline void setKCompletionBox_ActionEvent_IsBase(bool value) const { kcompletionbox_actionevent_isbase = value; }
    inline void setKCompletionBox_ShowEvent_IsBase(bool value) const { kcompletionbox_showevent_isbase = value; }
    inline void setKCompletionBox_HideEvent_IsBase(bool value) const { kcompletionbox_hideevent_isbase = value; }
    inline void setKCompletionBox_NativeEvent_IsBase(bool value) const { kcompletionbox_nativeevent_isbase = value; }
    inline void setKCompletionBox_Metric_IsBase(bool value) const { kcompletionbox_metric_isbase = value; }
    inline void setKCompletionBox_InitPainter_IsBase(bool value) const { kcompletionbox_initpainter_isbase = value; }
    inline void setKCompletionBox_Redirected_IsBase(bool value) const { kcompletionbox_redirected_isbase = value; }
    inline void setKCompletionBox_SharedPainter_IsBase(bool value) const { kcompletionbox_sharedpainter_isbase = value; }
    inline void setKCompletionBox_ChildEvent_IsBase(bool value) const { kcompletionbox_childevent_isbase = value; }
    inline void setKCompletionBox_CustomEvent_IsBase(bool value) const { kcompletionbox_customevent_isbase = value; }
    inline void setKCompletionBox_ConnectNotify_IsBase(bool value) const { kcompletionbox_connectnotify_isbase = value; }
    inline void setKCompletionBox_DisconnectNotify_IsBase(bool value) const { kcompletionbox_disconnectnotify_isbase = value; }
    inline void setKCompletionBox_CalculateGeometry_IsBase(bool value) const { kcompletionbox_calculategeometry_isbase = value; }
    inline void setKCompletionBox_ResizeAndReposition_IsBase(bool value) const { kcompletionbox_resizeandreposition_isbase = value; }
    inline void setKCompletionBox_ResizeContents_IsBase(bool value) const { kcompletionbox_resizecontents_isbase = value; }
    inline void setKCompletionBox_ContentsSize_IsBase(bool value) const { kcompletionbox_contentssize_isbase = value; }
    inline void setKCompletionBox_RectForIndex_IsBase(bool value) const { kcompletionbox_rectforindex_isbase = value; }
    inline void setKCompletionBox_SetPositionForIndex_IsBase(bool value) const { kcompletionbox_setpositionforindex_isbase = value; }
    inline void setKCompletionBox_State_IsBase(bool value) const { kcompletionbox_state_isbase = value; }
    inline void setKCompletionBox_SetState_IsBase(bool value) const { kcompletionbox_setstate_isbase = value; }
    inline void setKCompletionBox_ScheduleDelayedItemsLayout_IsBase(bool value) const { kcompletionbox_scheduledelayeditemslayout_isbase = value; }
    inline void setKCompletionBox_ExecuteDelayedItemsLayout_IsBase(bool value) const { kcompletionbox_executedelayeditemslayout_isbase = value; }
    inline void setKCompletionBox_SetDirtyRegion_IsBase(bool value) const { kcompletionbox_setdirtyregion_isbase = value; }
    inline void setKCompletionBox_ScrollDirtyRegion_IsBase(bool value) const { kcompletionbox_scrolldirtyregion_isbase = value; }
    inline void setKCompletionBox_DirtyRegionOffset_IsBase(bool value) const { kcompletionbox_dirtyregionoffset_isbase = value; }
    inline void setKCompletionBox_StartAutoScroll_IsBase(bool value) const { kcompletionbox_startautoscroll_isbase = value; }
    inline void setKCompletionBox_StopAutoScroll_IsBase(bool value) const { kcompletionbox_stopautoscroll_isbase = value; }
    inline void setKCompletionBox_DoAutoScroll_IsBase(bool value) const { kcompletionbox_doautoscroll_isbase = value; }
    inline void setKCompletionBox_DropIndicatorPosition_IsBase(bool value) const { kcompletionbox_dropindicatorposition_isbase = value; }
    inline void setKCompletionBox_SetViewportMargins_IsBase(bool value) const { kcompletionbox_setviewportmargins_isbase = value; }
    inline void setKCompletionBox_ViewportMargins_IsBase(bool value) const { kcompletionbox_viewportmargins_isbase = value; }
    inline void setKCompletionBox_DrawFrame_IsBase(bool value) const { kcompletionbox_drawframe_isbase = value; }
    inline void setKCompletionBox_UpdateMicroFocus_IsBase(bool value) const { kcompletionbox_updatemicrofocus_isbase = value; }
    inline void setKCompletionBox_Create_IsBase(bool value) const { kcompletionbox_create_isbase = value; }
    inline void setKCompletionBox_Destroy_IsBase(bool value) const { kcompletionbox_destroy_isbase = value; }
    inline void setKCompletionBox_FocusNextChild_IsBase(bool value) const { kcompletionbox_focusnextchild_isbase = value; }
    inline void setKCompletionBox_FocusPreviousChild_IsBase(bool value) const { kcompletionbox_focuspreviouschild_isbase = value; }
    inline void setKCompletionBox_Sender_IsBase(bool value) const { kcompletionbox_sender_isbase = value; }
    inline void setKCompletionBox_SenderSignalIndex_IsBase(bool value) const { kcompletionbox_sendersignalindex_isbase = value; }
    inline void setKCompletionBox_Receivers_IsBase(bool value) const { kcompletionbox_receivers_isbase = value; }
    inline void setKCompletionBox_IsSignalConnected_IsBase(bool value) const { kcompletionbox_issignalconnected_isbase = value; }
    inline void setKCompletionBox_GetDecodedMetricF_IsBase(bool value) const { kcompletionbox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcompletionbox_metacall_isbase) {
            kcompletionbox_metacall_isbase = false;
            return KCompletionBox::qt_metacall(param1, param2, param3);
        } else if (kcompletionbox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcompletionbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcompletionbox_sizehint_isbase) {
            kcompletionbox_sizehint_isbase = false;
            return KCompletionBox::sizeHint();
        } else if (kcompletionbox_sizehint_callback != nullptr) {
            QSize* callback_ret = kcompletionbox_sizehint_callback();
            return *callback_ret;
        } else {
            return KCompletionBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void popup() override {
        if (kcompletionbox_popup_isbase) {
            kcompletionbox_popup_isbase = false;
            KCompletionBox::popup();
        } else if (kcompletionbox_popup_callback != nullptr) {
            kcompletionbox_popup_callback();
        } else {
            KCompletionBox::popup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcompletionbox_setvisible_isbase) {
            kcompletionbox_setvisible_isbase = false;
            KCompletionBox::setVisible(visible);
        } else if (kcompletionbox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcompletionbox_setvisible_callback(this, cbval1);
        } else {
            KCompletionBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kcompletionbox_eventfilter_isbase) {
            kcompletionbox_eventfilter_isbase = false;
            return KCompletionBox::eventFilter(param1, param2);
        } else if (kcompletionbox_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kcompletionbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCompletionBox::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPoint globalPositionHint() const override {
        if (kcompletionbox_globalpositionhint_isbase) {
            kcompletionbox_globalpositionhint_isbase = false;
            return KCompletionBox::globalPositionHint();
        } else if (kcompletionbox_globalpositionhint_callback != nullptr) {
            QPoint* callback_ret = kcompletionbox_globalpositionhint_callback();
            return *callback_ret;
        } else {
            return KCompletionBox::globalPositionHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActivated(QListWidgetItem* param1) override {
        if (kcompletionbox_slotactivated_isbase) {
            kcompletionbox_slotactivated_isbase = false;
            KCompletionBox::slotActivated(param1);
        } else if (kcompletionbox_slotactivated_callback != nullptr) {
            QListWidgetItem* cbval1 = param1;

            kcompletionbox_slotactivated_callback(this, cbval1);
        } else {
            KCompletionBox::slotActivated(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (kcompletionbox_setselectionmodel_isbase) {
            kcompletionbox_setselectionmodel_isbase = false;
            KCompletionBox::setSelectionModel(selectionModel);
        } else if (kcompletionbox_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            kcompletionbox_setselectionmodel_callback(this, cbval1);
        } else {
            KCompletionBox::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcompletionbox_dropevent_isbase) {
            kcompletionbox_dropevent_isbase = false;
            KCompletionBox::dropEvent(event);
        } else if (kcompletionbox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcompletionbox_dropevent_callback(this, cbval1);
        } else {
            KCompletionBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcompletionbox_event_isbase) {
            kcompletionbox_event_isbase = false;
            return KCompletionBox::event(e);
        } else if (kcompletionbox_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kcompletionbox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletionBox::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcompletionbox_mimetypes_isbase) {
            kcompletionbox_mimetypes_isbase = false;
            return KCompletionBox::mimeTypes();
        } else if (kcompletionbox_mimetypes_callback != nullptr) {
            const char** callback_ret = kcompletionbox_mimetypes_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return KCompletionBox::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QListWidgetItem*>& items) const override {
        if (kcompletionbox_mimedata_isbase) {
            kcompletionbox_mimedata_isbase = false;
            return KCompletionBox::mimeData(items);
        } else if (kcompletionbox_mimedata_callback != nullptr) {
            const QList<QListWidgetItem*>& items_ret = items;
            // Convert QList<> from C++ memory to manually-managed C memory
            QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * (items_ret.size() + 1)));
            for (qsizetype i = 0; i < items_ret.size(); ++i) {
                items_arr[i] = items_ret[i];
            }
            libqt_list items_out;
            items_out.len = items_ret.size();
            items_out.data = static_cast<void*>(items_arr);
            libqt_list /* of QListWidgetItem* */ cbval1 = items_out;

            QMimeData* callback_ret = kcompletionbox_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletionBox::mimeData(items);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
        if (kcompletionbox_dropmimedata_isbase) {
            kcompletionbox_dropmimedata_isbase = false;
            return KCompletionBox::dropMimeData(index, data, action);
        } else if (kcompletionbox_dropmimedata_callback != nullptr) {
            int cbval1 = index;
            QMimeData* cbval2 = (QMimeData*)data;
            int cbval3 = static_cast<int>(action);

            bool callback_ret = kcompletionbox_dropmimedata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCompletionBox::dropMimeData(index, data, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcompletionbox_supporteddropactions_isbase) {
            kcompletionbox_supporteddropactions_isbase = false;
            return KCompletionBox::supportedDropActions();
        } else if (kcompletionbox_supporteddropactions_callback != nullptr) {
            int callback_ret = kcompletionbox_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KCompletionBox::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kcompletionbox_visualrect_isbase) {
            kcompletionbox_visualrect_isbase = false;
            return KCompletionBox::visualRect(index);
        } else if (kcompletionbox_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = kcompletionbox_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCompletionBox::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (kcompletionbox_scrollto_isbase) {
            kcompletionbox_scrollto_isbase = false;
            KCompletionBox::scrollTo(index, hint);
        } else if (kcompletionbox_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            kcompletionbox_scrollto_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (kcompletionbox_indexat_isbase) {
            kcompletionbox_indexat_isbase = false;
            return KCompletionBox::indexAt(p);
        } else if (kcompletionbox_indexat_callback != nullptr) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = kcompletionbox_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCompletionBox::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (kcompletionbox_doitemslayout_isbase) {
            kcompletionbox_doitemslayout_isbase = false;
            KCompletionBox::doItemsLayout();
        } else if (kcompletionbox_doitemslayout_callback != nullptr) {
            kcompletionbox_doitemslayout_callback();
        } else {
            KCompletionBox::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kcompletionbox_reset_isbase) {
            kcompletionbox_reset_isbase = false;
            KCompletionBox::reset();
        } else if (kcompletionbox_reset_callback != nullptr) {
            kcompletionbox_reset_callback();
        } else {
            KCompletionBox::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (kcompletionbox_setrootindex_isbase) {
            kcompletionbox_setrootindex_isbase = false;
            KCompletionBox::setRootIndex(index);
        } else if (kcompletionbox_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            kcompletionbox_setrootindex_callback(this, cbval1);
        } else {
            KCompletionBox::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kcompletionbox_scrollcontentsby_isbase) {
            kcompletionbox_scrollcontentsby_isbase = false;
            KCompletionBox::scrollContentsBy(dx, dy);
        } else if (kcompletionbox_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            kcompletionbox_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (kcompletionbox_datachanged_isbase) {
            kcompletionbox_datachanged_isbase = false;
            KCompletionBox::dataChanged(topLeft, bottomRight, roles);
        } else if (kcompletionbox_datachanged_callback != nullptr) {
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

            kcompletionbox_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCompletionBox::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (kcompletionbox_rowsinserted_isbase) {
            kcompletionbox_rowsinserted_isbase = false;
            KCompletionBox::rowsInserted(parent, start, end);
        } else if (kcompletionbox_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            kcompletionbox_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCompletionBox::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (kcompletionbox_rowsabouttoberemoved_isbase) {
            kcompletionbox_rowsabouttoberemoved_isbase = false;
            KCompletionBox::rowsAboutToBeRemoved(parent, start, end);
        } else if (kcompletionbox_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            kcompletionbox_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCompletionBox::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kcompletionbox_mousemoveevent_isbase) {
            kcompletionbox_mousemoveevent_isbase = false;
            KCompletionBox::mouseMoveEvent(e);
        } else if (kcompletionbox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcompletionbox_mousemoveevent_callback(this, cbval1);
        } else {
            KCompletionBox::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcompletionbox_mousereleaseevent_isbase) {
            kcompletionbox_mousereleaseevent_isbase = false;
            KCompletionBox::mouseReleaseEvent(e);
        } else if (kcompletionbox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcompletionbox_mousereleaseevent_callback(this, cbval1);
        } else {
            KCompletionBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcompletionbox_wheelevent_isbase) {
            kcompletionbox_wheelevent_isbase = false;
            KCompletionBox::wheelEvent(e);
        } else if (kcompletionbox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            kcompletionbox_wheelevent_callback(this, cbval1);
        } else {
            KCompletionBox::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kcompletionbox_timerevent_isbase) {
            kcompletionbox_timerevent_isbase = false;
            KCompletionBox::timerEvent(e);
        } else if (kcompletionbox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            kcompletionbox_timerevent_callback(this, cbval1);
        } else {
            KCompletionBox::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kcompletionbox_resizeevent_isbase) {
            kcompletionbox_resizeevent_isbase = false;
            KCompletionBox::resizeEvent(e);
        } else if (kcompletionbox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            kcompletionbox_resizeevent_callback(this, cbval1);
        } else {
            KCompletionBox::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (kcompletionbox_dragmoveevent_isbase) {
            kcompletionbox_dragmoveevent_isbase = false;
            KCompletionBox::dragMoveEvent(e);
        } else if (kcompletionbox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            kcompletionbox_dragmoveevent_callback(this, cbval1);
        } else {
            KCompletionBox::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (kcompletionbox_dragleaveevent_isbase) {
            kcompletionbox_dragleaveevent_isbase = false;
            KCompletionBox::dragLeaveEvent(e);
        } else if (kcompletionbox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            kcompletionbox_dragleaveevent_callback(this, cbval1);
        } else {
            KCompletionBox::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (kcompletionbox_startdrag_isbase) {
            kcompletionbox_startdrag_isbase = false;
            KCompletionBox::startDrag(supportedActions);
        } else if (kcompletionbox_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            kcompletionbox_startdrag_callback(this, cbval1);
        } else {
            KCompletionBox::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (kcompletionbox_initviewitemoption_isbase) {
            kcompletionbox_initviewitemoption_isbase = false;
            KCompletionBox::initViewItemOption(option);
        } else if (kcompletionbox_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            kcompletionbox_initviewitemoption_callback(this, cbval1);
        } else {
            KCompletionBox::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kcompletionbox_paintevent_isbase) {
            kcompletionbox_paintevent_isbase = false;
            KCompletionBox::paintEvent(e);
        } else if (kcompletionbox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            kcompletionbox_paintevent_callback(this, cbval1);
        } else {
            KCompletionBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (kcompletionbox_horizontaloffset_isbase) {
            kcompletionbox_horizontaloffset_isbase = false;
            return KCompletionBox::horizontalOffset();
        } else if (kcompletionbox_horizontaloffset_callback != nullptr) {
            int callback_ret = kcompletionbox_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (kcompletionbox_verticaloffset_isbase) {
            kcompletionbox_verticaloffset_isbase = false;
            return KCompletionBox::verticalOffset();
        } else if (kcompletionbox_verticaloffset_callback != nullptr) {
            int callback_ret = kcompletionbox_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (kcompletionbox_movecursor_isbase) {
            kcompletionbox_movecursor_isbase = false;
            return KCompletionBox::moveCursor(cursorAction, modifiers);
        } else if (kcompletionbox_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = kcompletionbox_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KCompletionBox::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (kcompletionbox_setselection_isbase) {
            kcompletionbox_setselection_isbase = false;
            KCompletionBox::setSelection(rect, command);
        } else if (kcompletionbox_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            kcompletionbox_setselection_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (kcompletionbox_visualregionforselection_isbase) {
            kcompletionbox_visualregionforselection_isbase = false;
            return KCompletionBox::visualRegionForSelection(selection);
        } else if (kcompletionbox_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = kcompletionbox_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCompletionBox::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (kcompletionbox_selectedindexes_isbase) {
            kcompletionbox_selectedindexes_isbase = false;
            return KCompletionBox::selectedIndexes();
        } else if (kcompletionbox_selectedindexes_callback != nullptr) {
            QModelIndex** callback_ret = kcompletionbox_selectedindexes_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KCompletionBox::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (kcompletionbox_updategeometries_isbase) {
            kcompletionbox_updategeometries_isbase = false;
            KCompletionBox::updateGeometries();
        } else if (kcompletionbox_updategeometries_callback != nullptr) {
            kcompletionbox_updategeometries_callback();
        } else {
            KCompletionBox::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (kcompletionbox_isindexhidden_isbase) {
            kcompletionbox_isindexhidden_isbase = false;
            return KCompletionBox::isIndexHidden(index);
        } else if (kcompletionbox_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kcompletionbox_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletionBox::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (kcompletionbox_selectionchanged_isbase) {
            kcompletionbox_selectionchanged_isbase = false;
            KCompletionBox::selectionChanged(selected, deselected);
        } else if (kcompletionbox_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            kcompletionbox_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (kcompletionbox_currentchanged_isbase) {
            kcompletionbox_currentchanged_isbase = false;
            KCompletionBox::currentChanged(current, previous);
        } else if (kcompletionbox_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            kcompletionbox_currentchanged_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kcompletionbox_viewportsizehint_isbase) {
            kcompletionbox_viewportsizehint_isbase = false;
            return KCompletionBox::viewportSizeHint();
        } else if (kcompletionbox_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = kcompletionbox_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return KCompletionBox::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (kcompletionbox_keyboardsearch_isbase) {
            kcompletionbox_keyboardsearch_isbase = false;
            KCompletionBox::keyboardSearch(search);
        } else if (kcompletionbox_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<const char*>(malloc(search_str.len + 1));
            memcpy((void*)search_str.data, search_b.data(), search_str.len);
            ((char*)search_str.data)[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            kcompletionbox_keyboardsearch_callback(this, cbval1);
        } else {
            KCompletionBox::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (kcompletionbox_sizehintforrow_isbase) {
            kcompletionbox_sizehintforrow_isbase = false;
            return KCompletionBox::sizeHintForRow(row);
        } else if (kcompletionbox_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = kcompletionbox_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (kcompletionbox_sizehintforcolumn_isbase) {
            kcompletionbox_sizehintforcolumn_isbase = false;
            return KCompletionBox::sizeHintForColumn(column);
        } else if (kcompletionbox_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = kcompletionbox_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (kcompletionbox_itemdelegateforindex_isbase) {
            kcompletionbox_itemdelegateforindex_isbase = false;
            return KCompletionBox::itemDelegateForIndex(index);
        } else if (kcompletionbox_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = kcompletionbox_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletionBox::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (kcompletionbox_inputmethodquery_isbase) {
            kcompletionbox_inputmethodquery_isbase = false;
            return KCompletionBox::inputMethodQuery(query);
        } else if (kcompletionbox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = kcompletionbox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCompletionBox::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (kcompletionbox_selectall_isbase) {
            kcompletionbox_selectall_isbase = false;
            KCompletionBox::selectAll();
        } else if (kcompletionbox_selectall_callback != nullptr) {
            kcompletionbox_selectall_callback();
        } else {
            KCompletionBox::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (kcompletionbox_updateeditordata_isbase) {
            kcompletionbox_updateeditordata_isbase = false;
            KCompletionBox::updateEditorData();
        } else if (kcompletionbox_updateeditordata_callback != nullptr) {
            kcompletionbox_updateeditordata_callback();
        } else {
            KCompletionBox::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (kcompletionbox_updateeditorgeometries_isbase) {
            kcompletionbox_updateeditorgeometries_isbase = false;
            KCompletionBox::updateEditorGeometries();
        } else if (kcompletionbox_updateeditorgeometries_callback != nullptr) {
            kcompletionbox_updateeditorgeometries_callback();
        } else {
            KCompletionBox::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (kcompletionbox_verticalscrollbaraction_isbase) {
            kcompletionbox_verticalscrollbaraction_isbase = false;
            KCompletionBox::verticalScrollbarAction(action);
        } else if (kcompletionbox_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            kcompletionbox_verticalscrollbaraction_callback(this, cbval1);
        } else {
            KCompletionBox::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (kcompletionbox_horizontalscrollbaraction_isbase) {
            kcompletionbox_horizontalscrollbaraction_isbase = false;
            KCompletionBox::horizontalScrollbarAction(action);
        } else if (kcompletionbox_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            kcompletionbox_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            KCompletionBox::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (kcompletionbox_verticalscrollbarvaluechanged_isbase) {
            kcompletionbox_verticalscrollbarvaluechanged_isbase = false;
            KCompletionBox::verticalScrollbarValueChanged(value);
        } else if (kcompletionbox_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            kcompletionbox_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            KCompletionBox::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (kcompletionbox_horizontalscrollbarvaluechanged_isbase) {
            kcompletionbox_horizontalscrollbarvaluechanged_isbase = false;
            KCompletionBox::horizontalScrollbarValueChanged(value);
        } else if (kcompletionbox_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            kcompletionbox_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            KCompletionBox::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (kcompletionbox_closeeditor_isbase) {
            kcompletionbox_closeeditor_isbase = false;
            KCompletionBox::closeEditor(editor, hint);
        } else if (kcompletionbox_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            kcompletionbox_closeeditor_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (kcompletionbox_commitdata_isbase) {
            kcompletionbox_commitdata_isbase = false;
            KCompletionBox::commitData(editor);
        } else if (kcompletionbox_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            kcompletionbox_commitdata_callback(this, cbval1);
        } else {
            KCompletionBox::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (kcompletionbox_editordestroyed_isbase) {
            kcompletionbox_editordestroyed_isbase = false;
            KCompletionBox::editorDestroyed(editor);
        } else if (kcompletionbox_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            kcompletionbox_editordestroyed_callback(this, cbval1);
        } else {
            KCompletionBox::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (kcompletionbox_edit2_isbase) {
            kcompletionbox_edit2_isbase = false;
            return KCompletionBox::edit(index, trigger, event);
        } else if (kcompletionbox_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = kcompletionbox_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCompletionBox::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (kcompletionbox_selectioncommand_isbase) {
            kcompletionbox_selectioncommand_isbase = false;
            return KCompletionBox::selectionCommand(index, event);
        } else if (kcompletionbox_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = kcompletionbox_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return KCompletionBox::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcompletionbox_focusnextprevchild_isbase) {
            kcompletionbox_focusnextprevchild_isbase = false;
            return KCompletionBox::focusNextPrevChild(next);
        } else if (kcompletionbox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcompletionbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletionBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (kcompletionbox_viewportevent_isbase) {
            kcompletionbox_viewportevent_isbase = false;
            return KCompletionBox::viewportEvent(event);
        } else if (kcompletionbox_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcompletionbox_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletionBox::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcompletionbox_mousepressevent_isbase) {
            kcompletionbox_mousepressevent_isbase = false;
            KCompletionBox::mousePressEvent(event);
        } else if (kcompletionbox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcompletionbox_mousepressevent_callback(this, cbval1);
        } else {
            KCompletionBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcompletionbox_mousedoubleclickevent_isbase) {
            kcompletionbox_mousedoubleclickevent_isbase = false;
            KCompletionBox::mouseDoubleClickEvent(event);
        } else if (kcompletionbox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcompletionbox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KCompletionBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcompletionbox_dragenterevent_isbase) {
            kcompletionbox_dragenterevent_isbase = false;
            KCompletionBox::dragEnterEvent(event);
        } else if (kcompletionbox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcompletionbox_dragenterevent_callback(this, cbval1);
        } else {
            KCompletionBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcompletionbox_focusinevent_isbase) {
            kcompletionbox_focusinevent_isbase = false;
            KCompletionBox::focusInEvent(event);
        } else if (kcompletionbox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcompletionbox_focusinevent_callback(this, cbval1);
        } else {
            KCompletionBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcompletionbox_focusoutevent_isbase) {
            kcompletionbox_focusoutevent_isbase = false;
            KCompletionBox::focusOutEvent(event);
        } else if (kcompletionbox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcompletionbox_focusoutevent_callback(this, cbval1);
        } else {
            KCompletionBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcompletionbox_keypressevent_isbase) {
            kcompletionbox_keypressevent_isbase = false;
            KCompletionBox::keyPressEvent(event);
        } else if (kcompletionbox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcompletionbox_keypressevent_callback(this, cbval1);
        } else {
            KCompletionBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (kcompletionbox_inputmethodevent_isbase) {
            kcompletionbox_inputmethodevent_isbase = false;
            KCompletionBox::inputMethodEvent(event);
        } else if (kcompletionbox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            kcompletionbox_inputmethodevent_callback(this, cbval1);
        } else {
            KCompletionBox::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcompletionbox_minimumsizehint_isbase) {
            kcompletionbox_minimumsizehint_isbase = false;
            return KCompletionBox::minimumSizeHint();
        } else if (kcompletionbox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcompletionbox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KCompletionBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kcompletionbox_setupviewport_isbase) {
            kcompletionbox_setupviewport_isbase = false;
            KCompletionBox::setupViewport(viewport);
        } else if (kcompletionbox_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            kcompletionbox_setupviewport_callback(this, cbval1);
        } else {
            KCompletionBox::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kcompletionbox_contextmenuevent_isbase) {
            kcompletionbox_contextmenuevent_isbase = false;
            KCompletionBox::contextMenuEvent(param1);
        } else if (kcompletionbox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kcompletionbox_contextmenuevent_callback(this, cbval1);
        } else {
            KCompletionBox::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcompletionbox_changeevent_isbase) {
            kcompletionbox_changeevent_isbase = false;
            KCompletionBox::changeEvent(param1);
        } else if (kcompletionbox_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kcompletionbox_changeevent_callback(this, cbval1);
        } else {
            KCompletionBox::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kcompletionbox_initstyleoption_isbase) {
            kcompletionbox_initstyleoption_isbase = false;
            KCompletionBox::initStyleOption(option);
        } else if (kcompletionbox_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kcompletionbox_initstyleoption_callback(this, cbval1);
        } else {
            KCompletionBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcompletionbox_devtype_isbase) {
            kcompletionbox_devtype_isbase = false;
            return KCompletionBox::devType();
        } else if (kcompletionbox_devtype_callback != nullptr) {
            int callback_ret = kcompletionbox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcompletionbox_heightforwidth_isbase) {
            kcompletionbox_heightforwidth_isbase = false;
            return KCompletionBox::heightForWidth(param1);
        } else if (kcompletionbox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcompletionbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcompletionbox_hasheightforwidth_isbase) {
            kcompletionbox_hasheightforwidth_isbase = false;
            return KCompletionBox::hasHeightForWidth();
        } else if (kcompletionbox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcompletionbox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KCompletionBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcompletionbox_paintengine_isbase) {
            kcompletionbox_paintengine_isbase = false;
            return KCompletionBox::paintEngine();
        } else if (kcompletionbox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcompletionbox_paintengine_callback();
            return callback_ret;
        } else {
            return KCompletionBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcompletionbox_keyreleaseevent_isbase) {
            kcompletionbox_keyreleaseevent_isbase = false;
            KCompletionBox::keyReleaseEvent(event);
        } else if (kcompletionbox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcompletionbox_keyreleaseevent_callback(this, cbval1);
        } else {
            KCompletionBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcompletionbox_enterevent_isbase) {
            kcompletionbox_enterevent_isbase = false;
            KCompletionBox::enterEvent(event);
        } else if (kcompletionbox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcompletionbox_enterevent_callback(this, cbval1);
        } else {
            KCompletionBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcompletionbox_leaveevent_isbase) {
            kcompletionbox_leaveevent_isbase = false;
            KCompletionBox::leaveEvent(event);
        } else if (kcompletionbox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcompletionbox_leaveevent_callback(this, cbval1);
        } else {
            KCompletionBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcompletionbox_moveevent_isbase) {
            kcompletionbox_moveevent_isbase = false;
            KCompletionBox::moveEvent(event);
        } else if (kcompletionbox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcompletionbox_moveevent_callback(this, cbval1);
        } else {
            KCompletionBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcompletionbox_closeevent_isbase) {
            kcompletionbox_closeevent_isbase = false;
            KCompletionBox::closeEvent(event);
        } else if (kcompletionbox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcompletionbox_closeevent_callback(this, cbval1);
        } else {
            KCompletionBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcompletionbox_tabletevent_isbase) {
            kcompletionbox_tabletevent_isbase = false;
            KCompletionBox::tabletEvent(event);
        } else if (kcompletionbox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcompletionbox_tabletevent_callback(this, cbval1);
        } else {
            KCompletionBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcompletionbox_actionevent_isbase) {
            kcompletionbox_actionevent_isbase = false;
            KCompletionBox::actionEvent(event);
        } else if (kcompletionbox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcompletionbox_actionevent_callback(this, cbval1);
        } else {
            KCompletionBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcompletionbox_showevent_isbase) {
            kcompletionbox_showevent_isbase = false;
            KCompletionBox::showEvent(event);
        } else if (kcompletionbox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kcompletionbox_showevent_callback(this, cbval1);
        } else {
            KCompletionBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcompletionbox_hideevent_isbase) {
            kcompletionbox_hideevent_isbase = false;
            KCompletionBox::hideEvent(event);
        } else if (kcompletionbox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kcompletionbox_hideevent_callback(this, cbval1);
        } else {
            KCompletionBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcompletionbox_nativeevent_isbase) {
            kcompletionbox_nativeevent_isbase = false;
            return KCompletionBox::nativeEvent(eventType, message, result);
        } else if (kcompletionbox_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcompletionbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCompletionBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcompletionbox_metric_isbase) {
            kcompletionbox_metric_isbase = false;
            return KCompletionBox::metric(param1);
        } else if (kcompletionbox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcompletionbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcompletionbox_initpainter_isbase) {
            kcompletionbox_initpainter_isbase = false;
            KCompletionBox::initPainter(painter);
        } else if (kcompletionbox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcompletionbox_initpainter_callback(this, cbval1);
        } else {
            KCompletionBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcompletionbox_redirected_isbase) {
            kcompletionbox_redirected_isbase = false;
            return KCompletionBox::redirected(offset);
        } else if (kcompletionbox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcompletionbox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletionBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcompletionbox_sharedpainter_isbase) {
            kcompletionbox_sharedpainter_isbase = false;
            return KCompletionBox::sharedPainter();
        } else if (kcompletionbox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcompletionbox_sharedpainter_callback();
            return callback_ret;
        } else {
            return KCompletionBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcompletionbox_childevent_isbase) {
            kcompletionbox_childevent_isbase = false;
            KCompletionBox::childEvent(event);
        } else if (kcompletionbox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcompletionbox_childevent_callback(this, cbval1);
        } else {
            KCompletionBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcompletionbox_customevent_isbase) {
            kcompletionbox_customevent_isbase = false;
            KCompletionBox::customEvent(event);
        } else if (kcompletionbox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcompletionbox_customevent_callback(this, cbval1);
        } else {
            KCompletionBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcompletionbox_connectnotify_isbase) {
            kcompletionbox_connectnotify_isbase = false;
            KCompletionBox::connectNotify(signal);
        } else if (kcompletionbox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcompletionbox_connectnotify_callback(this, cbval1);
        } else {
            KCompletionBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcompletionbox_disconnectnotify_isbase) {
            kcompletionbox_disconnectnotify_isbase = false;
            KCompletionBox::disconnectNotify(signal);
        } else if (kcompletionbox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcompletionbox_disconnectnotify_callback(this, cbval1);
        } else {
            KCompletionBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect calculateGeometry() const {
        if (kcompletionbox_calculategeometry_isbase) {
            kcompletionbox_calculategeometry_isbase = false;
            return KCompletionBox::calculateGeometry();
        } else if (kcompletionbox_calculategeometry_callback != nullptr) {
            QRect* callback_ret = kcompletionbox_calculategeometry_callback();
            return *callback_ret;
        } else {
            return KCompletionBox::calculateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    void resizeAndReposition() {
        if (kcompletionbox_resizeandreposition_isbase) {
            kcompletionbox_resizeandreposition_isbase = false;
            KCompletionBox::resizeAndReposition();
        } else if (kcompletionbox_resizeandreposition_callback != nullptr) {
            kcompletionbox_resizeandreposition_callback();
        } else {
            KCompletionBox::resizeAndReposition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (kcompletionbox_resizecontents_isbase) {
            kcompletionbox_resizecontents_isbase = false;
            KCompletionBox::resizeContents(width, height);
        } else if (kcompletionbox_resizecontents_callback != nullptr) {
            int cbval1 = width;
            int cbval2 = height;

            kcompletionbox_resizecontents_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::resizeContents(width, height);
        }
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (kcompletionbox_contentssize_isbase) {
            kcompletionbox_contentssize_isbase = false;
            return KCompletionBox::contentsSize();
        } else if (kcompletionbox_contentssize_callback != nullptr) {
            QSize* callback_ret = kcompletionbox_contentssize_callback();
            return *callback_ret;
        } else {
            return KCompletionBox::contentsSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (kcompletionbox_rectforindex_isbase) {
            kcompletionbox_rectforindex_isbase = false;
            return KCompletionBox::rectForIndex(index);
        } else if (kcompletionbox_rectforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = kcompletionbox_rectforindex_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCompletionBox::rectForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (kcompletionbox_setpositionforindex_isbase) {
            kcompletionbox_setpositionforindex_isbase = false;
            KCompletionBox::setPositionForIndex(position, index);
        } else if (kcompletionbox_setpositionforindex_callback != nullptr) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            kcompletionbox_setpositionforindex_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::setPositionForIndex(position, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (kcompletionbox_state_isbase) {
            kcompletionbox_state_isbase = false;
            return KCompletionBox::state();
        } else if (kcompletionbox_state_callback != nullptr) {
            int callback_ret = kcompletionbox_state_callback();
            return static_cast<VirtualKCompletionBox::State>(callback_ret);
        } else {
            return KCompletionBox::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (kcompletionbox_setstate_isbase) {
            kcompletionbox_setstate_isbase = false;
            KCompletionBox::setState(state);
        } else if (kcompletionbox_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            kcompletionbox_setstate_callback(this, cbval1);
        } else {
            KCompletionBox::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (kcompletionbox_scheduledelayeditemslayout_isbase) {
            kcompletionbox_scheduledelayeditemslayout_isbase = false;
            KCompletionBox::scheduleDelayedItemsLayout();
        } else if (kcompletionbox_scheduledelayeditemslayout_callback != nullptr) {
            kcompletionbox_scheduledelayeditemslayout_callback();
        } else {
            KCompletionBox::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (kcompletionbox_executedelayeditemslayout_isbase) {
            kcompletionbox_executedelayeditemslayout_isbase = false;
            KCompletionBox::executeDelayedItemsLayout();
        } else if (kcompletionbox_executedelayeditemslayout_callback != nullptr) {
            kcompletionbox_executedelayeditemslayout_callback();
        } else {
            KCompletionBox::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (kcompletionbox_setdirtyregion_isbase) {
            kcompletionbox_setdirtyregion_isbase = false;
            KCompletionBox::setDirtyRegion(region);
        } else if (kcompletionbox_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            kcompletionbox_setdirtyregion_callback(this, cbval1);
        } else {
            KCompletionBox::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (kcompletionbox_scrolldirtyregion_isbase) {
            kcompletionbox_scrolldirtyregion_isbase = false;
            KCompletionBox::scrollDirtyRegion(dx, dy);
        } else if (kcompletionbox_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            kcompletionbox_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            KCompletionBox::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (kcompletionbox_dirtyregionoffset_isbase) {
            kcompletionbox_dirtyregionoffset_isbase = false;
            return KCompletionBox::dirtyRegionOffset();
        } else if (kcompletionbox_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = kcompletionbox_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return KCompletionBox::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (kcompletionbox_startautoscroll_isbase) {
            kcompletionbox_startautoscroll_isbase = false;
            KCompletionBox::startAutoScroll();
        } else if (kcompletionbox_startautoscroll_callback != nullptr) {
            kcompletionbox_startautoscroll_callback();
        } else {
            KCompletionBox::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (kcompletionbox_stopautoscroll_isbase) {
            kcompletionbox_stopautoscroll_isbase = false;
            KCompletionBox::stopAutoScroll();
        } else if (kcompletionbox_stopautoscroll_callback != nullptr) {
            kcompletionbox_stopautoscroll_callback();
        } else {
            KCompletionBox::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (kcompletionbox_doautoscroll_isbase) {
            kcompletionbox_doautoscroll_isbase = false;
            KCompletionBox::doAutoScroll();
        } else if (kcompletionbox_doautoscroll_callback != nullptr) {
            kcompletionbox_doautoscroll_callback();
        } else {
            KCompletionBox::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (kcompletionbox_dropindicatorposition_isbase) {
            kcompletionbox_dropindicatorposition_isbase = false;
            return KCompletionBox::dropIndicatorPosition();
        } else if (kcompletionbox_dropindicatorposition_callback != nullptr) {
            int callback_ret = kcompletionbox_dropindicatorposition_callback();
            return static_cast<VirtualKCompletionBox::DropIndicatorPosition>(callback_ret);
        } else {
            return KCompletionBox::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (kcompletionbox_setviewportmargins_isbase) {
            kcompletionbox_setviewportmargins_isbase = false;
            KCompletionBox::setViewportMargins(left, top, right, bottom);
        } else if (kcompletionbox_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            kcompletionbox_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KCompletionBox::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (kcompletionbox_viewportmargins_isbase) {
            kcompletionbox_viewportmargins_isbase = false;
            return KCompletionBox::viewportMargins();
        } else if (kcompletionbox_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = kcompletionbox_viewportmargins_callback();
            return *callback_ret;
        } else {
            return KCompletionBox::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kcompletionbox_drawframe_isbase) {
            kcompletionbox_drawframe_isbase = false;
            KCompletionBox::drawFrame(param1);
        } else if (kcompletionbox_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kcompletionbox_drawframe_callback(this, cbval1);
        } else {
            KCompletionBox::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcompletionbox_updatemicrofocus_isbase) {
            kcompletionbox_updatemicrofocus_isbase = false;
            KCompletionBox::updateMicroFocus();
        } else if (kcompletionbox_updatemicrofocus_callback != nullptr) {
            kcompletionbox_updatemicrofocus_callback();
        } else {
            KCompletionBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcompletionbox_create_isbase) {
            kcompletionbox_create_isbase = false;
            KCompletionBox::create();
        } else if (kcompletionbox_create_callback != nullptr) {
            kcompletionbox_create_callback();
        } else {
            KCompletionBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcompletionbox_destroy_isbase) {
            kcompletionbox_destroy_isbase = false;
            KCompletionBox::destroy();
        } else if (kcompletionbox_destroy_callback != nullptr) {
            kcompletionbox_destroy_callback();
        } else {
            KCompletionBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcompletionbox_focusnextchild_isbase) {
            kcompletionbox_focusnextchild_isbase = false;
            return KCompletionBox::focusNextChild();
        } else if (kcompletionbox_focusnextchild_callback != nullptr) {
            bool callback_ret = kcompletionbox_focusnextchild_callback();
            return callback_ret;
        } else {
            return KCompletionBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcompletionbox_focuspreviouschild_isbase) {
            kcompletionbox_focuspreviouschild_isbase = false;
            return KCompletionBox::focusPreviousChild();
        } else if (kcompletionbox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcompletionbox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KCompletionBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcompletionbox_sender_isbase) {
            kcompletionbox_sender_isbase = false;
            return KCompletionBox::sender();
        } else if (kcompletionbox_sender_callback != nullptr) {
            QObject* callback_ret = kcompletionbox_sender_callback();
            return callback_ret;
        } else {
            return KCompletionBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcompletionbox_sendersignalindex_isbase) {
            kcompletionbox_sendersignalindex_isbase = false;
            return KCompletionBox::senderSignalIndex();
        } else if (kcompletionbox_sendersignalindex_callback != nullptr) {
            int callback_ret = kcompletionbox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcompletionbox_receivers_isbase) {
            kcompletionbox_receivers_isbase = false;
            return KCompletionBox::receivers(signal);
        } else if (kcompletionbox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcompletionbox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCompletionBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcompletionbox_issignalconnected_isbase) {
            kcompletionbox_issignalconnected_isbase = false;
            return KCompletionBox::isSignalConnected(signal);
        } else if (kcompletionbox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcompletionbox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletionBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcompletionbox_getdecodedmetricf_isbase) {
            kcompletionbox_getdecodedmetricf_isbase = false;
            return KCompletionBox::getDecodedMetricF(metricA, metricB);
        } else if (kcompletionbox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcompletionbox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KCompletionBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KCompletionBox_EventFilter(KCompletionBox* self, QObject* param1, QEvent* param2);
    friend bool KCompletionBox_QBaseEventFilter(KCompletionBox* self, QObject* param1, QEvent* param2);
    friend QPoint* KCompletionBox_GlobalPositionHint(const KCompletionBox* self);
    friend QPoint* KCompletionBox_QBaseGlobalPositionHint(const KCompletionBox* self);
    friend void KCompletionBox_SlotActivated(KCompletionBox* self, QListWidgetItem* param1);
    friend void KCompletionBox_QBaseSlotActivated(KCompletionBox* self, QListWidgetItem* param1);
    friend void KCompletionBox_DropEvent(KCompletionBox* self, QDropEvent* event);
    friend void KCompletionBox_QBaseDropEvent(KCompletionBox* self, QDropEvent* event);
    friend bool KCompletionBox_Event(KCompletionBox* self, QEvent* e);
    friend bool KCompletionBox_QBaseEvent(KCompletionBox* self, QEvent* e);
    friend libqt_list /* of libqt_string */ KCompletionBox_MimeTypes(const KCompletionBox* self);
    friend libqt_list /* of libqt_string */ KCompletionBox_QBaseMimeTypes(const KCompletionBox* self);
    friend QMimeData* KCompletionBox_MimeData(const KCompletionBox* self, const libqt_list /* of QListWidgetItem* */ items);
    friend QMimeData* KCompletionBox_QBaseMimeData(const KCompletionBox* self, const libqt_list /* of QListWidgetItem* */ items);
    friend bool KCompletionBox_DropMimeData(KCompletionBox* self, int index, const QMimeData* data, int action);
    friend bool KCompletionBox_QBaseDropMimeData(KCompletionBox* self, int index, const QMimeData* data, int action);
    friend int KCompletionBox_SupportedDropActions(const KCompletionBox* self);
    friend int KCompletionBox_QBaseSupportedDropActions(const KCompletionBox* self);
    friend void KCompletionBox_ScrollContentsBy(KCompletionBox* self, int dx, int dy);
    friend void KCompletionBox_QBaseScrollContentsBy(KCompletionBox* self, int dx, int dy);
    friend void KCompletionBox_DataChanged(KCompletionBox* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void KCompletionBox_QBaseDataChanged(KCompletionBox* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void KCompletionBox_RowsInserted(KCompletionBox* self, const QModelIndex* parent, int start, int end);
    friend void KCompletionBox_QBaseRowsInserted(KCompletionBox* self, const QModelIndex* parent, int start, int end);
    friend void KCompletionBox_RowsAboutToBeRemoved(KCompletionBox* self, const QModelIndex* parent, int start, int end);
    friend void KCompletionBox_QBaseRowsAboutToBeRemoved(KCompletionBox* self, const QModelIndex* parent, int start, int end);
    friend void KCompletionBox_MouseMoveEvent(KCompletionBox* self, QMouseEvent* e);
    friend void KCompletionBox_QBaseMouseMoveEvent(KCompletionBox* self, QMouseEvent* e);
    friend void KCompletionBox_MouseReleaseEvent(KCompletionBox* self, QMouseEvent* e);
    friend void KCompletionBox_QBaseMouseReleaseEvent(KCompletionBox* self, QMouseEvent* e);
    friend void KCompletionBox_WheelEvent(KCompletionBox* self, QWheelEvent* e);
    friend void KCompletionBox_QBaseWheelEvent(KCompletionBox* self, QWheelEvent* e);
    friend void KCompletionBox_TimerEvent(KCompletionBox* self, QTimerEvent* e);
    friend void KCompletionBox_QBaseTimerEvent(KCompletionBox* self, QTimerEvent* e);
    friend void KCompletionBox_ResizeEvent(KCompletionBox* self, QResizeEvent* e);
    friend void KCompletionBox_QBaseResizeEvent(KCompletionBox* self, QResizeEvent* e);
    friend void KCompletionBox_DragMoveEvent(KCompletionBox* self, QDragMoveEvent* e);
    friend void KCompletionBox_QBaseDragMoveEvent(KCompletionBox* self, QDragMoveEvent* e);
    friend void KCompletionBox_DragLeaveEvent(KCompletionBox* self, QDragLeaveEvent* e);
    friend void KCompletionBox_QBaseDragLeaveEvent(KCompletionBox* self, QDragLeaveEvent* e);
    friend void KCompletionBox_StartDrag(KCompletionBox* self, int supportedActions);
    friend void KCompletionBox_QBaseStartDrag(KCompletionBox* self, int supportedActions);
    friend void KCompletionBox_InitViewItemOption(const KCompletionBox* self, QStyleOptionViewItem* option);
    friend void KCompletionBox_QBaseInitViewItemOption(const KCompletionBox* self, QStyleOptionViewItem* option);
    friend void KCompletionBox_PaintEvent(KCompletionBox* self, QPaintEvent* e);
    friend void KCompletionBox_QBasePaintEvent(KCompletionBox* self, QPaintEvent* e);
    friend int KCompletionBox_HorizontalOffset(const KCompletionBox* self);
    friend int KCompletionBox_QBaseHorizontalOffset(const KCompletionBox* self);
    friend int KCompletionBox_VerticalOffset(const KCompletionBox* self);
    friend int KCompletionBox_QBaseVerticalOffset(const KCompletionBox* self);
    friend QModelIndex* KCompletionBox_MoveCursor(KCompletionBox* self, int cursorAction, int modifiers);
    friend QModelIndex* KCompletionBox_QBaseMoveCursor(KCompletionBox* self, int cursorAction, int modifiers);
    friend void KCompletionBox_SetSelection(KCompletionBox* self, const QRect* rect, int command);
    friend void KCompletionBox_QBaseSetSelection(KCompletionBox* self, const QRect* rect, int command);
    friend QRegion* KCompletionBox_VisualRegionForSelection(const KCompletionBox* self, const QItemSelection* selection);
    friend QRegion* KCompletionBox_QBaseVisualRegionForSelection(const KCompletionBox* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ KCompletionBox_SelectedIndexes(const KCompletionBox* self);
    friend libqt_list /* of QModelIndex* */ KCompletionBox_QBaseSelectedIndexes(const KCompletionBox* self);
    friend void KCompletionBox_UpdateGeometries(KCompletionBox* self);
    friend void KCompletionBox_QBaseUpdateGeometries(KCompletionBox* self);
    friend bool KCompletionBox_IsIndexHidden(const KCompletionBox* self, const QModelIndex* index);
    friend bool KCompletionBox_QBaseIsIndexHidden(const KCompletionBox* self, const QModelIndex* index);
    friend void KCompletionBox_SelectionChanged(KCompletionBox* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KCompletionBox_QBaseSelectionChanged(KCompletionBox* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KCompletionBox_CurrentChanged(KCompletionBox* self, const QModelIndex* current, const QModelIndex* previous);
    friend void KCompletionBox_QBaseCurrentChanged(KCompletionBox* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* KCompletionBox_ViewportSizeHint(const KCompletionBox* self);
    friend QSize* KCompletionBox_QBaseViewportSizeHint(const KCompletionBox* self);
    friend void KCompletionBox_UpdateEditorData(KCompletionBox* self);
    friend void KCompletionBox_QBaseUpdateEditorData(KCompletionBox* self);
    friend void KCompletionBox_UpdateEditorGeometries(KCompletionBox* self);
    friend void KCompletionBox_QBaseUpdateEditorGeometries(KCompletionBox* self);
    friend void KCompletionBox_VerticalScrollbarAction(KCompletionBox* self, int action);
    friend void KCompletionBox_QBaseVerticalScrollbarAction(KCompletionBox* self, int action);
    friend void KCompletionBox_HorizontalScrollbarAction(KCompletionBox* self, int action);
    friend void KCompletionBox_QBaseHorizontalScrollbarAction(KCompletionBox* self, int action);
    friend void KCompletionBox_VerticalScrollbarValueChanged(KCompletionBox* self, int value);
    friend void KCompletionBox_QBaseVerticalScrollbarValueChanged(KCompletionBox* self, int value);
    friend void KCompletionBox_HorizontalScrollbarValueChanged(KCompletionBox* self, int value);
    friend void KCompletionBox_QBaseHorizontalScrollbarValueChanged(KCompletionBox* self, int value);
    friend void KCompletionBox_CloseEditor(KCompletionBox* self, QWidget* editor, int hint);
    friend void KCompletionBox_QBaseCloseEditor(KCompletionBox* self, QWidget* editor, int hint);
    friend void KCompletionBox_CommitData(KCompletionBox* self, QWidget* editor);
    friend void KCompletionBox_QBaseCommitData(KCompletionBox* self, QWidget* editor);
    friend void KCompletionBox_EditorDestroyed(KCompletionBox* self, QObject* editor);
    friend void KCompletionBox_QBaseEditorDestroyed(KCompletionBox* self, QObject* editor);
    friend bool KCompletionBox_Edit2(KCompletionBox* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool KCompletionBox_QBaseEdit2(KCompletionBox* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int KCompletionBox_SelectionCommand(const KCompletionBox* self, const QModelIndex* index, const QEvent* event);
    friend int KCompletionBox_QBaseSelectionCommand(const KCompletionBox* self, const QModelIndex* index, const QEvent* event);
    friend bool KCompletionBox_FocusNextPrevChild(KCompletionBox* self, bool next);
    friend bool KCompletionBox_QBaseFocusNextPrevChild(KCompletionBox* self, bool next);
    friend bool KCompletionBox_ViewportEvent(KCompletionBox* self, QEvent* event);
    friend bool KCompletionBox_QBaseViewportEvent(KCompletionBox* self, QEvent* event);
    friend void KCompletionBox_MousePressEvent(KCompletionBox* self, QMouseEvent* event);
    friend void KCompletionBox_QBaseMousePressEvent(KCompletionBox* self, QMouseEvent* event);
    friend void KCompletionBox_MouseDoubleClickEvent(KCompletionBox* self, QMouseEvent* event);
    friend void KCompletionBox_QBaseMouseDoubleClickEvent(KCompletionBox* self, QMouseEvent* event);
    friend void KCompletionBox_DragEnterEvent(KCompletionBox* self, QDragEnterEvent* event);
    friend void KCompletionBox_QBaseDragEnterEvent(KCompletionBox* self, QDragEnterEvent* event);
    friend void KCompletionBox_FocusInEvent(KCompletionBox* self, QFocusEvent* event);
    friend void KCompletionBox_QBaseFocusInEvent(KCompletionBox* self, QFocusEvent* event);
    friend void KCompletionBox_FocusOutEvent(KCompletionBox* self, QFocusEvent* event);
    friend void KCompletionBox_QBaseFocusOutEvent(KCompletionBox* self, QFocusEvent* event);
    friend void KCompletionBox_KeyPressEvent(KCompletionBox* self, QKeyEvent* event);
    friend void KCompletionBox_QBaseKeyPressEvent(KCompletionBox* self, QKeyEvent* event);
    friend void KCompletionBox_InputMethodEvent(KCompletionBox* self, QInputMethodEvent* event);
    friend void KCompletionBox_QBaseInputMethodEvent(KCompletionBox* self, QInputMethodEvent* event);
    friend void KCompletionBox_ContextMenuEvent(KCompletionBox* self, QContextMenuEvent* param1);
    friend void KCompletionBox_QBaseContextMenuEvent(KCompletionBox* self, QContextMenuEvent* param1);
    friend void KCompletionBox_ChangeEvent(KCompletionBox* self, QEvent* param1);
    friend void KCompletionBox_QBaseChangeEvent(KCompletionBox* self, QEvent* param1);
    friend void KCompletionBox_InitStyleOption(const KCompletionBox* self, QStyleOptionFrame* option);
    friend void KCompletionBox_QBaseInitStyleOption(const KCompletionBox* self, QStyleOptionFrame* option);
    friend void KCompletionBox_KeyReleaseEvent(KCompletionBox* self, QKeyEvent* event);
    friend void KCompletionBox_QBaseKeyReleaseEvent(KCompletionBox* self, QKeyEvent* event);
    friend void KCompletionBox_EnterEvent(KCompletionBox* self, QEnterEvent* event);
    friend void KCompletionBox_QBaseEnterEvent(KCompletionBox* self, QEnterEvent* event);
    friend void KCompletionBox_LeaveEvent(KCompletionBox* self, QEvent* event);
    friend void KCompletionBox_QBaseLeaveEvent(KCompletionBox* self, QEvent* event);
    friend void KCompletionBox_MoveEvent(KCompletionBox* self, QMoveEvent* event);
    friend void KCompletionBox_QBaseMoveEvent(KCompletionBox* self, QMoveEvent* event);
    friend void KCompletionBox_CloseEvent(KCompletionBox* self, QCloseEvent* event);
    friend void KCompletionBox_QBaseCloseEvent(KCompletionBox* self, QCloseEvent* event);
    friend void KCompletionBox_TabletEvent(KCompletionBox* self, QTabletEvent* event);
    friend void KCompletionBox_QBaseTabletEvent(KCompletionBox* self, QTabletEvent* event);
    friend void KCompletionBox_ActionEvent(KCompletionBox* self, QActionEvent* event);
    friend void KCompletionBox_QBaseActionEvent(KCompletionBox* self, QActionEvent* event);
    friend void KCompletionBox_ShowEvent(KCompletionBox* self, QShowEvent* event);
    friend void KCompletionBox_QBaseShowEvent(KCompletionBox* self, QShowEvent* event);
    friend void KCompletionBox_HideEvent(KCompletionBox* self, QHideEvent* event);
    friend void KCompletionBox_QBaseHideEvent(KCompletionBox* self, QHideEvent* event);
    friend bool KCompletionBox_NativeEvent(KCompletionBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KCompletionBox_QBaseNativeEvent(KCompletionBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KCompletionBox_Metric(const KCompletionBox* self, int param1);
    friend int KCompletionBox_QBaseMetric(const KCompletionBox* self, int param1);
    friend void KCompletionBox_InitPainter(const KCompletionBox* self, QPainter* painter);
    friend void KCompletionBox_QBaseInitPainter(const KCompletionBox* self, QPainter* painter);
    friend QPaintDevice* KCompletionBox_Redirected(const KCompletionBox* self, QPoint* offset);
    friend QPaintDevice* KCompletionBox_QBaseRedirected(const KCompletionBox* self, QPoint* offset);
    friend QPainter* KCompletionBox_SharedPainter(const KCompletionBox* self);
    friend QPainter* KCompletionBox_QBaseSharedPainter(const KCompletionBox* self);
    friend void KCompletionBox_ChildEvent(KCompletionBox* self, QChildEvent* event);
    friend void KCompletionBox_QBaseChildEvent(KCompletionBox* self, QChildEvent* event);
    friend void KCompletionBox_CustomEvent(KCompletionBox* self, QEvent* event);
    friend void KCompletionBox_QBaseCustomEvent(KCompletionBox* self, QEvent* event);
    friend void KCompletionBox_ConnectNotify(KCompletionBox* self, const QMetaMethod* signal);
    friend void KCompletionBox_QBaseConnectNotify(KCompletionBox* self, const QMetaMethod* signal);
    friend void KCompletionBox_DisconnectNotify(KCompletionBox* self, const QMetaMethod* signal);
    friend void KCompletionBox_QBaseDisconnectNotify(KCompletionBox* self, const QMetaMethod* signal);
    friend QRect* KCompletionBox_CalculateGeometry(const KCompletionBox* self);
    friend QRect* KCompletionBox_QBaseCalculateGeometry(const KCompletionBox* self);
    friend void KCompletionBox_ResizeAndReposition(KCompletionBox* self);
    friend void KCompletionBox_QBaseResizeAndReposition(KCompletionBox* self);
    friend void KCompletionBox_ResizeContents(KCompletionBox* self, int width, int height);
    friend void KCompletionBox_QBaseResizeContents(KCompletionBox* self, int width, int height);
    friend QSize* KCompletionBox_ContentsSize(const KCompletionBox* self);
    friend QSize* KCompletionBox_QBaseContentsSize(const KCompletionBox* self);
    friend QRect* KCompletionBox_RectForIndex(const KCompletionBox* self, const QModelIndex* index);
    friend QRect* KCompletionBox_QBaseRectForIndex(const KCompletionBox* self, const QModelIndex* index);
    friend void KCompletionBox_SetPositionForIndex(KCompletionBox* self, const QPoint* position, const QModelIndex* index);
    friend void KCompletionBox_QBaseSetPositionForIndex(KCompletionBox* self, const QPoint* position, const QModelIndex* index);
    friend int KCompletionBox_State(const KCompletionBox* self);
    friend int KCompletionBox_QBaseState(const KCompletionBox* self);
    friend void KCompletionBox_SetState(KCompletionBox* self, int state);
    friend void KCompletionBox_QBaseSetState(KCompletionBox* self, int state);
    friend void KCompletionBox_ScheduleDelayedItemsLayout(KCompletionBox* self);
    friend void KCompletionBox_QBaseScheduleDelayedItemsLayout(KCompletionBox* self);
    friend void KCompletionBox_ExecuteDelayedItemsLayout(KCompletionBox* self);
    friend void KCompletionBox_QBaseExecuteDelayedItemsLayout(KCompletionBox* self);
    friend void KCompletionBox_SetDirtyRegion(KCompletionBox* self, const QRegion* region);
    friend void KCompletionBox_QBaseSetDirtyRegion(KCompletionBox* self, const QRegion* region);
    friend void KCompletionBox_ScrollDirtyRegion(KCompletionBox* self, int dx, int dy);
    friend void KCompletionBox_QBaseScrollDirtyRegion(KCompletionBox* self, int dx, int dy);
    friend QPoint* KCompletionBox_DirtyRegionOffset(const KCompletionBox* self);
    friend QPoint* KCompletionBox_QBaseDirtyRegionOffset(const KCompletionBox* self);
    friend void KCompletionBox_StartAutoScroll(KCompletionBox* self);
    friend void KCompletionBox_QBaseStartAutoScroll(KCompletionBox* self);
    friend void KCompletionBox_StopAutoScroll(KCompletionBox* self);
    friend void KCompletionBox_QBaseStopAutoScroll(KCompletionBox* self);
    friend void KCompletionBox_DoAutoScroll(KCompletionBox* self);
    friend void KCompletionBox_QBaseDoAutoScroll(KCompletionBox* self);
    friend int KCompletionBox_DropIndicatorPosition(const KCompletionBox* self);
    friend int KCompletionBox_QBaseDropIndicatorPosition(const KCompletionBox* self);
    friend void KCompletionBox_SetViewportMargins(KCompletionBox* self, int left, int top, int right, int bottom);
    friend void KCompletionBox_QBaseSetViewportMargins(KCompletionBox* self, int left, int top, int right, int bottom);
    friend QMargins* KCompletionBox_ViewportMargins(const KCompletionBox* self);
    friend QMargins* KCompletionBox_QBaseViewportMargins(const KCompletionBox* self);
    friend void KCompletionBox_DrawFrame(KCompletionBox* self, QPainter* param1);
    friend void KCompletionBox_QBaseDrawFrame(KCompletionBox* self, QPainter* param1);
    friend void KCompletionBox_UpdateMicroFocus(KCompletionBox* self);
    friend void KCompletionBox_QBaseUpdateMicroFocus(KCompletionBox* self);
    friend void KCompletionBox_Create(KCompletionBox* self);
    friend void KCompletionBox_QBaseCreate(KCompletionBox* self);
    friend void KCompletionBox_Destroy(KCompletionBox* self);
    friend void KCompletionBox_QBaseDestroy(KCompletionBox* self);
    friend bool KCompletionBox_FocusNextChild(KCompletionBox* self);
    friend bool KCompletionBox_QBaseFocusNextChild(KCompletionBox* self);
    friend bool KCompletionBox_FocusPreviousChild(KCompletionBox* self);
    friend bool KCompletionBox_QBaseFocusPreviousChild(KCompletionBox* self);
    friend QObject* KCompletionBox_Sender(const KCompletionBox* self);
    friend QObject* KCompletionBox_QBaseSender(const KCompletionBox* self);
    friend int KCompletionBox_SenderSignalIndex(const KCompletionBox* self);
    friend int KCompletionBox_QBaseSenderSignalIndex(const KCompletionBox* self);
    friend int KCompletionBox_Receivers(const KCompletionBox* self, const char* signal);
    friend int KCompletionBox_QBaseReceivers(const KCompletionBox* self, const char* signal);
    friend bool KCompletionBox_IsSignalConnected(const KCompletionBox* self, const QMetaMethod* signal);
    friend bool KCompletionBox_QBaseIsSignalConnected(const KCompletionBox* self, const QMetaMethod* signal);
    friend double KCompletionBox_GetDecodedMetricF(const KCompletionBox* self, int metricA, int metricB);
    friend double KCompletionBox_QBaseGetDecodedMetricF(const KCompletionBox* self, int metricA, int metricB);
};

#endif
