#pragma once
#ifndef SRCC_LIBVIRTUALQHEADERVIEW_H
#define SRCC_LIBVIRTUALQHEADERVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QHeaderView so that we can call protected methods
class VirtualQHeaderView final : public QHeaderView {

  public:
    // Virtual class boolean flag
    bool isVirtualQHeaderView = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QHeaderView_Metacall_Callback = int (*)(QHeaderView*, int, int, void**);
    using QHeaderView_SetModel_Callback = void (*)(QHeaderView*, QAbstractItemModel*);
    using QHeaderView_SizeHint_Callback = QSize* (*)();
    using QHeaderView_SetVisible_Callback = void (*)(QHeaderView*, bool);
    using QHeaderView_DoItemsLayout_Callback = void (*)();
    using QHeaderView_Reset_Callback = void (*)();
    using QHeaderView_CurrentChanged_Callback = void (*)(QHeaderView*, QModelIndex*, QModelIndex*);
    using QHeaderView_Event_Callback = bool (*)(QHeaderView*, QEvent*);
    using QHeaderView_PaintEvent_Callback = void (*)(QHeaderView*, QPaintEvent*);
    using QHeaderView_MousePressEvent_Callback = void (*)(QHeaderView*, QMouseEvent*);
    using QHeaderView_MouseMoveEvent_Callback = void (*)(QHeaderView*, QMouseEvent*);
    using QHeaderView_MouseReleaseEvent_Callback = void (*)(QHeaderView*, QMouseEvent*);
    using QHeaderView_MouseDoubleClickEvent_Callback = void (*)(QHeaderView*, QMouseEvent*);
    using QHeaderView_ViewportEvent_Callback = bool (*)(QHeaderView*, QEvent*);
    using QHeaderView_PaintSection_Callback = void (*)(const QHeaderView*, QPainter*, QRect*, int);
    using QHeaderView_SectionSizeFromContents_Callback = QSize* (*)(const QHeaderView*, int);
    using QHeaderView_HorizontalOffset_Callback = int (*)();
    using QHeaderView_VerticalOffset_Callback = int (*)();
    using QHeaderView_UpdateGeometries_Callback = void (*)();
    using QHeaderView_ScrollContentsBy_Callback = void (*)(QHeaderView*, int, int);
    using QHeaderView_DataChanged_Callback = void (*)(QHeaderView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QHeaderView_RowsInserted_Callback = void (*)(QHeaderView*, QModelIndex*, int, int);
    using QHeaderView_VisualRect_Callback = QRect* (*)(const QHeaderView*, QModelIndex*);
    using QHeaderView_ScrollTo_Callback = void (*)(QHeaderView*, QModelIndex*, int);
    using QHeaderView_IndexAt_Callback = QModelIndex* (*)(const QHeaderView*, QPoint*);
    using QHeaderView_IsIndexHidden_Callback = bool (*)(const QHeaderView*, QModelIndex*);
    using QHeaderView_MoveCursor_Callback = QModelIndex* (*)(QHeaderView*, int, int);
    using QHeaderView_SetSelection_Callback = void (*)(QHeaderView*, QRect*, int);
    using QHeaderView_VisualRegionForSelection_Callback = QRegion* (*)(const QHeaderView*, QItemSelection*);
    using QHeaderView_InitStyleOptionForIndex_Callback = void (*)(const QHeaderView*, QStyleOptionHeader*, int);
    using QHeaderView_InitStyleOption_Callback = void (*)(const QHeaderView*, QStyleOptionHeader*);
    using QHeaderView_SetSelectionModel_Callback = void (*)(QHeaderView*, QItemSelectionModel*);
    using QHeaderView_KeyboardSearch_Callback = void (*)(QHeaderView*, libqt_string);
    using QHeaderView_SizeHintForRow_Callback = int (*)(const QHeaderView*, int);
    using QHeaderView_SizeHintForColumn_Callback = int (*)(const QHeaderView*, int);
    using QHeaderView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QHeaderView*, QModelIndex*);
    using QHeaderView_InputMethodQuery_Callback = QVariant* (*)(const QHeaderView*, int);
    using QHeaderView_SetRootIndex_Callback = void (*)(QHeaderView*, QModelIndex*);
    using QHeaderView_SelectAll_Callback = void (*)();
    using QHeaderView_RowsAboutToBeRemoved_Callback = void (*)(QHeaderView*, QModelIndex*, int, int);
    using QHeaderView_SelectionChanged_Callback = void (*)(QHeaderView*, QItemSelection*, QItemSelection*);
    using QHeaderView_UpdateEditorData_Callback = void (*)();
    using QHeaderView_UpdateEditorGeometries_Callback = void (*)();
    using QHeaderView_VerticalScrollbarAction_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_HorizontalScrollbarAction_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_VerticalScrollbarValueChanged_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_HorizontalScrollbarValueChanged_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_CloseEditor_Callback = void (*)(QHeaderView*, QWidget*, int);
    using QHeaderView_CommitData_Callback = void (*)(QHeaderView*, QWidget*);
    using QHeaderView_EditorDestroyed_Callback = void (*)(QHeaderView*, QObject*);
    using QHeaderView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QHeaderView_Edit2_Callback = bool (*)(QHeaderView*, QModelIndex*, int, QEvent*);
    using QHeaderView_SelectionCommand_Callback = int (*)(const QHeaderView*, QModelIndex*, QEvent*);
    using QHeaderView_StartDrag_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_InitViewItemOption_Callback = void (*)(const QHeaderView*, QStyleOptionViewItem*);
    using QHeaderView_FocusNextPrevChild_Callback = bool (*)(QHeaderView*, bool);
    using QHeaderView_DragEnterEvent_Callback = void (*)(QHeaderView*, QDragEnterEvent*);
    using QHeaderView_DragMoveEvent_Callback = void (*)(QHeaderView*, QDragMoveEvent*);
    using QHeaderView_DragLeaveEvent_Callback = void (*)(QHeaderView*, QDragLeaveEvent*);
    using QHeaderView_DropEvent_Callback = void (*)(QHeaderView*, QDropEvent*);
    using QHeaderView_FocusInEvent_Callback = void (*)(QHeaderView*, QFocusEvent*);
    using QHeaderView_FocusOutEvent_Callback = void (*)(QHeaderView*, QFocusEvent*);
    using QHeaderView_KeyPressEvent_Callback = void (*)(QHeaderView*, QKeyEvent*);
    using QHeaderView_ResizeEvent_Callback = void (*)(QHeaderView*, QResizeEvent*);
    using QHeaderView_TimerEvent_Callback = void (*)(QHeaderView*, QTimerEvent*);
    using QHeaderView_InputMethodEvent_Callback = void (*)(QHeaderView*, QInputMethodEvent*);
    using QHeaderView_EventFilter_Callback = bool (*)(QHeaderView*, QObject*, QEvent*);
    using QHeaderView_ViewportSizeHint_Callback = QSize* (*)();
    using QHeaderView_MinimumSizeHint_Callback = QSize* (*)();
    using QHeaderView_SetupViewport_Callback = void (*)(QHeaderView*, QWidget*);
    using QHeaderView_WheelEvent_Callback = void (*)(QHeaderView*, QWheelEvent*);
    using QHeaderView_ContextMenuEvent_Callback = void (*)(QHeaderView*, QContextMenuEvent*);
    using QHeaderView_ChangeEvent_Callback = void (*)(QHeaderView*, QEvent*);
    using QHeaderView_DevType_Callback = int (*)();
    using QHeaderView_HeightForWidth_Callback = int (*)(const QHeaderView*, int);
    using QHeaderView_HasHeightForWidth_Callback = bool (*)();
    using QHeaderView_PaintEngine_Callback = QPaintEngine* (*)();
    using QHeaderView_KeyReleaseEvent_Callback = void (*)(QHeaderView*, QKeyEvent*);
    using QHeaderView_EnterEvent_Callback = void (*)(QHeaderView*, QEnterEvent*);
    using QHeaderView_LeaveEvent_Callback = void (*)(QHeaderView*, QEvent*);
    using QHeaderView_MoveEvent_Callback = void (*)(QHeaderView*, QMoveEvent*);
    using QHeaderView_CloseEvent_Callback = void (*)(QHeaderView*, QCloseEvent*);
    using QHeaderView_TabletEvent_Callback = void (*)(QHeaderView*, QTabletEvent*);
    using QHeaderView_ActionEvent_Callback = void (*)(QHeaderView*, QActionEvent*);
    using QHeaderView_ShowEvent_Callback = void (*)(QHeaderView*, QShowEvent*);
    using QHeaderView_HideEvent_Callback = void (*)(QHeaderView*, QHideEvent*);
    using QHeaderView_NativeEvent_Callback = bool (*)(QHeaderView*, libqt_string, void*, intptr_t*);
    using QHeaderView_Metric_Callback = int (*)(const QHeaderView*, int);
    using QHeaderView_InitPainter_Callback = void (*)(const QHeaderView*, QPainter*);
    using QHeaderView_Redirected_Callback = QPaintDevice* (*)(const QHeaderView*, QPoint*);
    using QHeaderView_SharedPainter_Callback = QPainter* (*)();
    using QHeaderView_ChildEvent_Callback = void (*)(QHeaderView*, QChildEvent*);
    using QHeaderView_CustomEvent_Callback = void (*)(QHeaderView*, QEvent*);
    using QHeaderView_ConnectNotify_Callback = void (*)(QHeaderView*, QMetaMethod*);
    using QHeaderView_DisconnectNotify_Callback = void (*)(QHeaderView*, QMetaMethod*);
    using QHeaderView_UpdateSection_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_ResizeSections2_Callback = void (*)();
    using QHeaderView_SectionsInserted_Callback = void (*)(QHeaderView*, QModelIndex*, int, int);
    using QHeaderView_SectionsAboutToBeRemoved_Callback = void (*)(QHeaderView*, QModelIndex*, int, int);
    using QHeaderView_Initialize_Callback = void (*)();
    using QHeaderView_InitializeSections_Callback = void (*)();
    using QHeaderView_InitializeSections2_Callback = void (*)(QHeaderView*, int, int);
    using QHeaderView_State_Callback = int (*)();
    using QHeaderView_SetState_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QHeaderView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QHeaderView_SetDirtyRegion_Callback = void (*)(QHeaderView*, QRegion*);
    using QHeaderView_ScrollDirtyRegion_Callback = void (*)(QHeaderView*, int, int);
    using QHeaderView_DirtyRegionOffset_Callback = QPoint* (*)();
    using QHeaderView_StartAutoScroll_Callback = void (*)();
    using QHeaderView_StopAutoScroll_Callback = void (*)();
    using QHeaderView_DoAutoScroll_Callback = void (*)();
    using QHeaderView_DropIndicatorPosition_Callback = int (*)();
    using QHeaderView_SetViewportMargins_Callback = void (*)(QHeaderView*, int, int, int, int);
    using QHeaderView_ViewportMargins_Callback = QMargins* (*)();
    using QHeaderView_DrawFrame_Callback = void (*)(QHeaderView*, QPainter*);
    using QHeaderView_UpdateMicroFocus_Callback = void (*)();
    using QHeaderView_Create_Callback = void (*)();
    using QHeaderView_Destroy_Callback = void (*)();
    using QHeaderView_FocusNextChild_Callback = bool (*)();
    using QHeaderView_FocusPreviousChild_Callback = bool (*)();
    using QHeaderView_Sender_Callback = QObject* (*)();
    using QHeaderView_SenderSignalIndex_Callback = int (*)();
    using QHeaderView_Receivers_Callback = int (*)(const QHeaderView*, const char*);
    using QHeaderView_IsSignalConnected_Callback = bool (*)(const QHeaderView*, QMetaMethod*);
    using QHeaderView_GetDecodedMetricF_Callback = double (*)(const QHeaderView*, int, int);

  protected:
    // Instance callback storage
    QHeaderView_Metacall_Callback qheaderview_metacall_callback = nullptr;
    QHeaderView_SetModel_Callback qheaderview_setmodel_callback = nullptr;
    QHeaderView_SizeHint_Callback qheaderview_sizehint_callback = nullptr;
    QHeaderView_SetVisible_Callback qheaderview_setvisible_callback = nullptr;
    QHeaderView_DoItemsLayout_Callback qheaderview_doitemslayout_callback = nullptr;
    QHeaderView_Reset_Callback qheaderview_reset_callback = nullptr;
    QHeaderView_CurrentChanged_Callback qheaderview_currentchanged_callback = nullptr;
    QHeaderView_Event_Callback qheaderview_event_callback = nullptr;
    QHeaderView_PaintEvent_Callback qheaderview_paintevent_callback = nullptr;
    QHeaderView_MousePressEvent_Callback qheaderview_mousepressevent_callback = nullptr;
    QHeaderView_MouseMoveEvent_Callback qheaderview_mousemoveevent_callback = nullptr;
    QHeaderView_MouseReleaseEvent_Callback qheaderview_mousereleaseevent_callback = nullptr;
    QHeaderView_MouseDoubleClickEvent_Callback qheaderview_mousedoubleclickevent_callback = nullptr;
    QHeaderView_ViewportEvent_Callback qheaderview_viewportevent_callback = nullptr;
    QHeaderView_PaintSection_Callback qheaderview_paintsection_callback = nullptr;
    QHeaderView_SectionSizeFromContents_Callback qheaderview_sectionsizefromcontents_callback = nullptr;
    QHeaderView_HorizontalOffset_Callback qheaderview_horizontaloffset_callback = nullptr;
    QHeaderView_VerticalOffset_Callback qheaderview_verticaloffset_callback = nullptr;
    QHeaderView_UpdateGeometries_Callback qheaderview_updategeometries_callback = nullptr;
    QHeaderView_ScrollContentsBy_Callback qheaderview_scrollcontentsby_callback = nullptr;
    QHeaderView_DataChanged_Callback qheaderview_datachanged_callback = nullptr;
    QHeaderView_RowsInserted_Callback qheaderview_rowsinserted_callback = nullptr;
    QHeaderView_VisualRect_Callback qheaderview_visualrect_callback = nullptr;
    QHeaderView_ScrollTo_Callback qheaderview_scrollto_callback = nullptr;
    QHeaderView_IndexAt_Callback qheaderview_indexat_callback = nullptr;
    QHeaderView_IsIndexHidden_Callback qheaderview_isindexhidden_callback = nullptr;
    QHeaderView_MoveCursor_Callback qheaderview_movecursor_callback = nullptr;
    QHeaderView_SetSelection_Callback qheaderview_setselection_callback = nullptr;
    QHeaderView_VisualRegionForSelection_Callback qheaderview_visualregionforselection_callback = nullptr;
    QHeaderView_InitStyleOptionForIndex_Callback qheaderview_initstyleoptionforindex_callback = nullptr;
    QHeaderView_InitStyleOption_Callback qheaderview_initstyleoption_callback = nullptr;
    QHeaderView_SetSelectionModel_Callback qheaderview_setselectionmodel_callback = nullptr;
    QHeaderView_KeyboardSearch_Callback qheaderview_keyboardsearch_callback = nullptr;
    QHeaderView_SizeHintForRow_Callback qheaderview_sizehintforrow_callback = nullptr;
    QHeaderView_SizeHintForColumn_Callback qheaderview_sizehintforcolumn_callback = nullptr;
    QHeaderView_ItemDelegateForIndex_Callback qheaderview_itemdelegateforindex_callback = nullptr;
    QHeaderView_InputMethodQuery_Callback qheaderview_inputmethodquery_callback = nullptr;
    QHeaderView_SetRootIndex_Callback qheaderview_setrootindex_callback = nullptr;
    QHeaderView_SelectAll_Callback qheaderview_selectall_callback = nullptr;
    QHeaderView_RowsAboutToBeRemoved_Callback qheaderview_rowsabouttoberemoved_callback = nullptr;
    QHeaderView_SelectionChanged_Callback qheaderview_selectionchanged_callback = nullptr;
    QHeaderView_UpdateEditorData_Callback qheaderview_updateeditordata_callback = nullptr;
    QHeaderView_UpdateEditorGeometries_Callback qheaderview_updateeditorgeometries_callback = nullptr;
    QHeaderView_VerticalScrollbarAction_Callback qheaderview_verticalscrollbaraction_callback = nullptr;
    QHeaderView_HorizontalScrollbarAction_Callback qheaderview_horizontalscrollbaraction_callback = nullptr;
    QHeaderView_VerticalScrollbarValueChanged_Callback qheaderview_verticalscrollbarvaluechanged_callback = nullptr;
    QHeaderView_HorizontalScrollbarValueChanged_Callback qheaderview_horizontalscrollbarvaluechanged_callback = nullptr;
    QHeaderView_CloseEditor_Callback qheaderview_closeeditor_callback = nullptr;
    QHeaderView_CommitData_Callback qheaderview_commitdata_callback = nullptr;
    QHeaderView_EditorDestroyed_Callback qheaderview_editordestroyed_callback = nullptr;
    QHeaderView_SelectedIndexes_Callback qheaderview_selectedindexes_callback = nullptr;
    QHeaderView_Edit2_Callback qheaderview_edit2_callback = nullptr;
    QHeaderView_SelectionCommand_Callback qheaderview_selectioncommand_callback = nullptr;
    QHeaderView_StartDrag_Callback qheaderview_startdrag_callback = nullptr;
    QHeaderView_InitViewItemOption_Callback qheaderview_initviewitemoption_callback = nullptr;
    QHeaderView_FocusNextPrevChild_Callback qheaderview_focusnextprevchild_callback = nullptr;
    QHeaderView_DragEnterEvent_Callback qheaderview_dragenterevent_callback = nullptr;
    QHeaderView_DragMoveEvent_Callback qheaderview_dragmoveevent_callback = nullptr;
    QHeaderView_DragLeaveEvent_Callback qheaderview_dragleaveevent_callback = nullptr;
    QHeaderView_DropEvent_Callback qheaderview_dropevent_callback = nullptr;
    QHeaderView_FocusInEvent_Callback qheaderview_focusinevent_callback = nullptr;
    QHeaderView_FocusOutEvent_Callback qheaderview_focusoutevent_callback = nullptr;
    QHeaderView_KeyPressEvent_Callback qheaderview_keypressevent_callback = nullptr;
    QHeaderView_ResizeEvent_Callback qheaderview_resizeevent_callback = nullptr;
    QHeaderView_TimerEvent_Callback qheaderview_timerevent_callback = nullptr;
    QHeaderView_InputMethodEvent_Callback qheaderview_inputmethodevent_callback = nullptr;
    QHeaderView_EventFilter_Callback qheaderview_eventfilter_callback = nullptr;
    QHeaderView_ViewportSizeHint_Callback qheaderview_viewportsizehint_callback = nullptr;
    QHeaderView_MinimumSizeHint_Callback qheaderview_minimumsizehint_callback = nullptr;
    QHeaderView_SetupViewport_Callback qheaderview_setupviewport_callback = nullptr;
    QHeaderView_WheelEvent_Callback qheaderview_wheelevent_callback = nullptr;
    QHeaderView_ContextMenuEvent_Callback qheaderview_contextmenuevent_callback = nullptr;
    QHeaderView_ChangeEvent_Callback qheaderview_changeevent_callback = nullptr;
    QHeaderView_DevType_Callback qheaderview_devtype_callback = nullptr;
    QHeaderView_HeightForWidth_Callback qheaderview_heightforwidth_callback = nullptr;
    QHeaderView_HasHeightForWidth_Callback qheaderview_hasheightforwidth_callback = nullptr;
    QHeaderView_PaintEngine_Callback qheaderview_paintengine_callback = nullptr;
    QHeaderView_KeyReleaseEvent_Callback qheaderview_keyreleaseevent_callback = nullptr;
    QHeaderView_EnterEvent_Callback qheaderview_enterevent_callback = nullptr;
    QHeaderView_LeaveEvent_Callback qheaderview_leaveevent_callback = nullptr;
    QHeaderView_MoveEvent_Callback qheaderview_moveevent_callback = nullptr;
    QHeaderView_CloseEvent_Callback qheaderview_closeevent_callback = nullptr;
    QHeaderView_TabletEvent_Callback qheaderview_tabletevent_callback = nullptr;
    QHeaderView_ActionEvent_Callback qheaderview_actionevent_callback = nullptr;
    QHeaderView_ShowEvent_Callback qheaderview_showevent_callback = nullptr;
    QHeaderView_HideEvent_Callback qheaderview_hideevent_callback = nullptr;
    QHeaderView_NativeEvent_Callback qheaderview_nativeevent_callback = nullptr;
    QHeaderView_Metric_Callback qheaderview_metric_callback = nullptr;
    QHeaderView_InitPainter_Callback qheaderview_initpainter_callback = nullptr;
    QHeaderView_Redirected_Callback qheaderview_redirected_callback = nullptr;
    QHeaderView_SharedPainter_Callback qheaderview_sharedpainter_callback = nullptr;
    QHeaderView_ChildEvent_Callback qheaderview_childevent_callback = nullptr;
    QHeaderView_CustomEvent_Callback qheaderview_customevent_callback = nullptr;
    QHeaderView_ConnectNotify_Callback qheaderview_connectnotify_callback = nullptr;
    QHeaderView_DisconnectNotify_Callback qheaderview_disconnectnotify_callback = nullptr;
    QHeaderView_UpdateSection_Callback qheaderview_updatesection_callback = nullptr;
    QHeaderView_ResizeSections2_Callback qheaderview_resizesections2_callback = nullptr;
    QHeaderView_SectionsInserted_Callback qheaderview_sectionsinserted_callback = nullptr;
    QHeaderView_SectionsAboutToBeRemoved_Callback qheaderview_sectionsabouttoberemoved_callback = nullptr;
    QHeaderView_Initialize_Callback qheaderview_initialize_callback = nullptr;
    QHeaderView_InitializeSections_Callback qheaderview_initializesections_callback = nullptr;
    QHeaderView_InitializeSections2_Callback qheaderview_initializesections2_callback = nullptr;
    QHeaderView_State_Callback qheaderview_state_callback = nullptr;
    QHeaderView_SetState_Callback qheaderview_setstate_callback = nullptr;
    QHeaderView_ScheduleDelayedItemsLayout_Callback qheaderview_scheduledelayeditemslayout_callback = nullptr;
    QHeaderView_ExecuteDelayedItemsLayout_Callback qheaderview_executedelayeditemslayout_callback = nullptr;
    QHeaderView_SetDirtyRegion_Callback qheaderview_setdirtyregion_callback = nullptr;
    QHeaderView_ScrollDirtyRegion_Callback qheaderview_scrolldirtyregion_callback = nullptr;
    QHeaderView_DirtyRegionOffset_Callback qheaderview_dirtyregionoffset_callback = nullptr;
    QHeaderView_StartAutoScroll_Callback qheaderview_startautoscroll_callback = nullptr;
    QHeaderView_StopAutoScroll_Callback qheaderview_stopautoscroll_callback = nullptr;
    QHeaderView_DoAutoScroll_Callback qheaderview_doautoscroll_callback = nullptr;
    QHeaderView_DropIndicatorPosition_Callback qheaderview_dropindicatorposition_callback = nullptr;
    QHeaderView_SetViewportMargins_Callback qheaderview_setviewportmargins_callback = nullptr;
    QHeaderView_ViewportMargins_Callback qheaderview_viewportmargins_callback = nullptr;
    QHeaderView_DrawFrame_Callback qheaderview_drawframe_callback = nullptr;
    QHeaderView_UpdateMicroFocus_Callback qheaderview_updatemicrofocus_callback = nullptr;
    QHeaderView_Create_Callback qheaderview_create_callback = nullptr;
    QHeaderView_Destroy_Callback qheaderview_destroy_callback = nullptr;
    QHeaderView_FocusNextChild_Callback qheaderview_focusnextchild_callback = nullptr;
    QHeaderView_FocusPreviousChild_Callback qheaderview_focuspreviouschild_callback = nullptr;
    QHeaderView_Sender_Callback qheaderview_sender_callback = nullptr;
    QHeaderView_SenderSignalIndex_Callback qheaderview_sendersignalindex_callback = nullptr;
    QHeaderView_Receivers_Callback qheaderview_receivers_callback = nullptr;
    QHeaderView_IsSignalConnected_Callback qheaderview_issignalconnected_callback = nullptr;
    QHeaderView_GetDecodedMetricF_Callback qheaderview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qheaderview_metacall_isbase = false;
    mutable bool qheaderview_setmodel_isbase = false;
    mutable bool qheaderview_sizehint_isbase = false;
    mutable bool qheaderview_setvisible_isbase = false;
    mutable bool qheaderview_doitemslayout_isbase = false;
    mutable bool qheaderview_reset_isbase = false;
    mutable bool qheaderview_currentchanged_isbase = false;
    mutable bool qheaderview_event_isbase = false;
    mutable bool qheaderview_paintevent_isbase = false;
    mutable bool qheaderview_mousepressevent_isbase = false;
    mutable bool qheaderview_mousemoveevent_isbase = false;
    mutable bool qheaderview_mousereleaseevent_isbase = false;
    mutable bool qheaderview_mousedoubleclickevent_isbase = false;
    mutable bool qheaderview_viewportevent_isbase = false;
    mutable bool qheaderview_paintsection_isbase = false;
    mutable bool qheaderview_sectionsizefromcontents_isbase = false;
    mutable bool qheaderview_horizontaloffset_isbase = false;
    mutable bool qheaderview_verticaloffset_isbase = false;
    mutable bool qheaderview_updategeometries_isbase = false;
    mutable bool qheaderview_scrollcontentsby_isbase = false;
    mutable bool qheaderview_datachanged_isbase = false;
    mutable bool qheaderview_rowsinserted_isbase = false;
    mutable bool qheaderview_visualrect_isbase = false;
    mutable bool qheaderview_scrollto_isbase = false;
    mutable bool qheaderview_indexat_isbase = false;
    mutable bool qheaderview_isindexhidden_isbase = false;
    mutable bool qheaderview_movecursor_isbase = false;
    mutable bool qheaderview_setselection_isbase = false;
    mutable bool qheaderview_visualregionforselection_isbase = false;
    mutable bool qheaderview_initstyleoptionforindex_isbase = false;
    mutable bool qheaderview_initstyleoption_isbase = false;
    mutable bool qheaderview_setselectionmodel_isbase = false;
    mutable bool qheaderview_keyboardsearch_isbase = false;
    mutable bool qheaderview_sizehintforrow_isbase = false;
    mutable bool qheaderview_sizehintforcolumn_isbase = false;
    mutable bool qheaderview_itemdelegateforindex_isbase = false;
    mutable bool qheaderview_inputmethodquery_isbase = false;
    mutable bool qheaderview_setrootindex_isbase = false;
    mutable bool qheaderview_selectall_isbase = false;
    mutable bool qheaderview_rowsabouttoberemoved_isbase = false;
    mutable bool qheaderview_selectionchanged_isbase = false;
    mutable bool qheaderview_updateeditordata_isbase = false;
    mutable bool qheaderview_updateeditorgeometries_isbase = false;
    mutable bool qheaderview_verticalscrollbaraction_isbase = false;
    mutable bool qheaderview_horizontalscrollbaraction_isbase = false;
    mutable bool qheaderview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qheaderview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qheaderview_closeeditor_isbase = false;
    mutable bool qheaderview_commitdata_isbase = false;
    mutable bool qheaderview_editordestroyed_isbase = false;
    mutable bool qheaderview_selectedindexes_isbase = false;
    mutable bool qheaderview_edit2_isbase = false;
    mutable bool qheaderview_selectioncommand_isbase = false;
    mutable bool qheaderview_startdrag_isbase = false;
    mutable bool qheaderview_initviewitemoption_isbase = false;
    mutable bool qheaderview_focusnextprevchild_isbase = false;
    mutable bool qheaderview_dragenterevent_isbase = false;
    mutable bool qheaderview_dragmoveevent_isbase = false;
    mutable bool qheaderview_dragleaveevent_isbase = false;
    mutable bool qheaderview_dropevent_isbase = false;
    mutable bool qheaderview_focusinevent_isbase = false;
    mutable bool qheaderview_focusoutevent_isbase = false;
    mutable bool qheaderview_keypressevent_isbase = false;
    mutable bool qheaderview_resizeevent_isbase = false;
    mutable bool qheaderview_timerevent_isbase = false;
    mutable bool qheaderview_inputmethodevent_isbase = false;
    mutable bool qheaderview_eventfilter_isbase = false;
    mutable bool qheaderview_viewportsizehint_isbase = false;
    mutable bool qheaderview_minimumsizehint_isbase = false;
    mutable bool qheaderview_setupviewport_isbase = false;
    mutable bool qheaderview_wheelevent_isbase = false;
    mutable bool qheaderview_contextmenuevent_isbase = false;
    mutable bool qheaderview_changeevent_isbase = false;
    mutable bool qheaderview_devtype_isbase = false;
    mutable bool qheaderview_heightforwidth_isbase = false;
    mutable bool qheaderview_hasheightforwidth_isbase = false;
    mutable bool qheaderview_paintengine_isbase = false;
    mutable bool qheaderview_keyreleaseevent_isbase = false;
    mutable bool qheaderview_enterevent_isbase = false;
    mutable bool qheaderview_leaveevent_isbase = false;
    mutable bool qheaderview_moveevent_isbase = false;
    mutable bool qheaderview_closeevent_isbase = false;
    mutable bool qheaderview_tabletevent_isbase = false;
    mutable bool qheaderview_actionevent_isbase = false;
    mutable bool qheaderview_showevent_isbase = false;
    mutable bool qheaderview_hideevent_isbase = false;
    mutable bool qheaderview_nativeevent_isbase = false;
    mutable bool qheaderview_metric_isbase = false;
    mutable bool qheaderview_initpainter_isbase = false;
    mutable bool qheaderview_redirected_isbase = false;
    mutable bool qheaderview_sharedpainter_isbase = false;
    mutable bool qheaderview_childevent_isbase = false;
    mutable bool qheaderview_customevent_isbase = false;
    mutable bool qheaderview_connectnotify_isbase = false;
    mutable bool qheaderview_disconnectnotify_isbase = false;
    mutable bool qheaderview_updatesection_isbase = false;
    mutable bool qheaderview_resizesections2_isbase = false;
    mutable bool qheaderview_sectionsinserted_isbase = false;
    mutable bool qheaderview_sectionsabouttoberemoved_isbase = false;
    mutable bool qheaderview_initialize_isbase = false;
    mutable bool qheaderview_initializesections_isbase = false;
    mutable bool qheaderview_initializesections2_isbase = false;
    mutable bool qheaderview_state_isbase = false;
    mutable bool qheaderview_setstate_isbase = false;
    mutable bool qheaderview_scheduledelayeditemslayout_isbase = false;
    mutable bool qheaderview_executedelayeditemslayout_isbase = false;
    mutable bool qheaderview_setdirtyregion_isbase = false;
    mutable bool qheaderview_scrolldirtyregion_isbase = false;
    mutable bool qheaderview_dirtyregionoffset_isbase = false;
    mutable bool qheaderview_startautoscroll_isbase = false;
    mutable bool qheaderview_stopautoscroll_isbase = false;
    mutable bool qheaderview_doautoscroll_isbase = false;
    mutable bool qheaderview_dropindicatorposition_isbase = false;
    mutable bool qheaderview_setviewportmargins_isbase = false;
    mutable bool qheaderview_viewportmargins_isbase = false;
    mutable bool qheaderview_drawframe_isbase = false;
    mutable bool qheaderview_updatemicrofocus_isbase = false;
    mutable bool qheaderview_create_isbase = false;
    mutable bool qheaderview_destroy_isbase = false;
    mutable bool qheaderview_focusnextchild_isbase = false;
    mutable bool qheaderview_focuspreviouschild_isbase = false;
    mutable bool qheaderview_sender_isbase = false;
    mutable bool qheaderview_sendersignalindex_isbase = false;
    mutable bool qheaderview_receivers_isbase = false;
    mutable bool qheaderview_issignalconnected_isbase = false;
    mutable bool qheaderview_getdecodedmetricf_isbase = false;

  public:
    VirtualQHeaderView(Qt::Orientation orientation) : QHeaderView(orientation) {};
    VirtualQHeaderView(Qt::Orientation orientation, QWidget* parent) : QHeaderView(orientation, parent) {};

    ~VirtualQHeaderView() {
        qheaderview_metacall_callback = nullptr;
        qheaderview_setmodel_callback = nullptr;
        qheaderview_sizehint_callback = nullptr;
        qheaderview_setvisible_callback = nullptr;
        qheaderview_doitemslayout_callback = nullptr;
        qheaderview_reset_callback = nullptr;
        qheaderview_currentchanged_callback = nullptr;
        qheaderview_event_callback = nullptr;
        qheaderview_paintevent_callback = nullptr;
        qheaderview_mousepressevent_callback = nullptr;
        qheaderview_mousemoveevent_callback = nullptr;
        qheaderview_mousereleaseevent_callback = nullptr;
        qheaderview_mousedoubleclickevent_callback = nullptr;
        qheaderview_viewportevent_callback = nullptr;
        qheaderview_paintsection_callback = nullptr;
        qheaderview_sectionsizefromcontents_callback = nullptr;
        qheaderview_horizontaloffset_callback = nullptr;
        qheaderview_verticaloffset_callback = nullptr;
        qheaderview_updategeometries_callback = nullptr;
        qheaderview_scrollcontentsby_callback = nullptr;
        qheaderview_datachanged_callback = nullptr;
        qheaderview_rowsinserted_callback = nullptr;
        qheaderview_visualrect_callback = nullptr;
        qheaderview_scrollto_callback = nullptr;
        qheaderview_indexat_callback = nullptr;
        qheaderview_isindexhidden_callback = nullptr;
        qheaderview_movecursor_callback = nullptr;
        qheaderview_setselection_callback = nullptr;
        qheaderview_visualregionforselection_callback = nullptr;
        qheaderview_initstyleoptionforindex_callback = nullptr;
        qheaderview_initstyleoption_callback = nullptr;
        qheaderview_setselectionmodel_callback = nullptr;
        qheaderview_keyboardsearch_callback = nullptr;
        qheaderview_sizehintforrow_callback = nullptr;
        qheaderview_sizehintforcolumn_callback = nullptr;
        qheaderview_itemdelegateforindex_callback = nullptr;
        qheaderview_inputmethodquery_callback = nullptr;
        qheaderview_setrootindex_callback = nullptr;
        qheaderview_selectall_callback = nullptr;
        qheaderview_rowsabouttoberemoved_callback = nullptr;
        qheaderview_selectionchanged_callback = nullptr;
        qheaderview_updateeditordata_callback = nullptr;
        qheaderview_updateeditorgeometries_callback = nullptr;
        qheaderview_verticalscrollbaraction_callback = nullptr;
        qheaderview_horizontalscrollbaraction_callback = nullptr;
        qheaderview_verticalscrollbarvaluechanged_callback = nullptr;
        qheaderview_horizontalscrollbarvaluechanged_callback = nullptr;
        qheaderview_closeeditor_callback = nullptr;
        qheaderview_commitdata_callback = nullptr;
        qheaderview_editordestroyed_callback = nullptr;
        qheaderview_selectedindexes_callback = nullptr;
        qheaderview_edit2_callback = nullptr;
        qheaderview_selectioncommand_callback = nullptr;
        qheaderview_startdrag_callback = nullptr;
        qheaderview_initviewitemoption_callback = nullptr;
        qheaderview_focusnextprevchild_callback = nullptr;
        qheaderview_dragenterevent_callback = nullptr;
        qheaderview_dragmoveevent_callback = nullptr;
        qheaderview_dragleaveevent_callback = nullptr;
        qheaderview_dropevent_callback = nullptr;
        qheaderview_focusinevent_callback = nullptr;
        qheaderview_focusoutevent_callback = nullptr;
        qheaderview_keypressevent_callback = nullptr;
        qheaderview_resizeevent_callback = nullptr;
        qheaderview_timerevent_callback = nullptr;
        qheaderview_inputmethodevent_callback = nullptr;
        qheaderview_eventfilter_callback = nullptr;
        qheaderview_viewportsizehint_callback = nullptr;
        qheaderview_minimumsizehint_callback = nullptr;
        qheaderview_setupviewport_callback = nullptr;
        qheaderview_wheelevent_callback = nullptr;
        qheaderview_contextmenuevent_callback = nullptr;
        qheaderview_changeevent_callback = nullptr;
        qheaderview_devtype_callback = nullptr;
        qheaderview_heightforwidth_callback = nullptr;
        qheaderview_hasheightforwidth_callback = nullptr;
        qheaderview_paintengine_callback = nullptr;
        qheaderview_keyreleaseevent_callback = nullptr;
        qheaderview_enterevent_callback = nullptr;
        qheaderview_leaveevent_callback = nullptr;
        qheaderview_moveevent_callback = nullptr;
        qheaderview_closeevent_callback = nullptr;
        qheaderview_tabletevent_callback = nullptr;
        qheaderview_actionevent_callback = nullptr;
        qheaderview_showevent_callback = nullptr;
        qheaderview_hideevent_callback = nullptr;
        qheaderview_nativeevent_callback = nullptr;
        qheaderview_metric_callback = nullptr;
        qheaderview_initpainter_callback = nullptr;
        qheaderview_redirected_callback = nullptr;
        qheaderview_sharedpainter_callback = nullptr;
        qheaderview_childevent_callback = nullptr;
        qheaderview_customevent_callback = nullptr;
        qheaderview_connectnotify_callback = nullptr;
        qheaderview_disconnectnotify_callback = nullptr;
        qheaderview_updatesection_callback = nullptr;
        qheaderview_resizesections2_callback = nullptr;
        qheaderview_sectionsinserted_callback = nullptr;
        qheaderview_sectionsabouttoberemoved_callback = nullptr;
        qheaderview_initialize_callback = nullptr;
        qheaderview_initializesections_callback = nullptr;
        qheaderview_initializesections2_callback = nullptr;
        qheaderview_state_callback = nullptr;
        qheaderview_setstate_callback = nullptr;
        qheaderview_scheduledelayeditemslayout_callback = nullptr;
        qheaderview_executedelayeditemslayout_callback = nullptr;
        qheaderview_setdirtyregion_callback = nullptr;
        qheaderview_scrolldirtyregion_callback = nullptr;
        qheaderview_dirtyregionoffset_callback = nullptr;
        qheaderview_startautoscroll_callback = nullptr;
        qheaderview_stopautoscroll_callback = nullptr;
        qheaderview_doautoscroll_callback = nullptr;
        qheaderview_dropindicatorposition_callback = nullptr;
        qheaderview_setviewportmargins_callback = nullptr;
        qheaderview_viewportmargins_callback = nullptr;
        qheaderview_drawframe_callback = nullptr;
        qheaderview_updatemicrofocus_callback = nullptr;
        qheaderview_create_callback = nullptr;
        qheaderview_destroy_callback = nullptr;
        qheaderview_focusnextchild_callback = nullptr;
        qheaderview_focuspreviouschild_callback = nullptr;
        qheaderview_sender_callback = nullptr;
        qheaderview_sendersignalindex_callback = nullptr;
        qheaderview_receivers_callback = nullptr;
        qheaderview_issignalconnected_callback = nullptr;
        qheaderview_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQHeaderView_Metacall_Callback(QHeaderView_Metacall_Callback cb) { qheaderview_metacall_callback = cb; }
    inline void setQHeaderView_SetModel_Callback(QHeaderView_SetModel_Callback cb) { qheaderview_setmodel_callback = cb; }
    inline void setQHeaderView_SizeHint_Callback(QHeaderView_SizeHint_Callback cb) { qheaderview_sizehint_callback = cb; }
    inline void setQHeaderView_SetVisible_Callback(QHeaderView_SetVisible_Callback cb) { qheaderview_setvisible_callback = cb; }
    inline void setQHeaderView_DoItemsLayout_Callback(QHeaderView_DoItemsLayout_Callback cb) { qheaderview_doitemslayout_callback = cb; }
    inline void setQHeaderView_Reset_Callback(QHeaderView_Reset_Callback cb) { qheaderview_reset_callback = cb; }
    inline void setQHeaderView_CurrentChanged_Callback(QHeaderView_CurrentChanged_Callback cb) { qheaderview_currentchanged_callback = cb; }
    inline void setQHeaderView_Event_Callback(QHeaderView_Event_Callback cb) { qheaderview_event_callback = cb; }
    inline void setQHeaderView_PaintEvent_Callback(QHeaderView_PaintEvent_Callback cb) { qheaderview_paintevent_callback = cb; }
    inline void setQHeaderView_MousePressEvent_Callback(QHeaderView_MousePressEvent_Callback cb) { qheaderview_mousepressevent_callback = cb; }
    inline void setQHeaderView_MouseMoveEvent_Callback(QHeaderView_MouseMoveEvent_Callback cb) { qheaderview_mousemoveevent_callback = cb; }
    inline void setQHeaderView_MouseReleaseEvent_Callback(QHeaderView_MouseReleaseEvent_Callback cb) { qheaderview_mousereleaseevent_callback = cb; }
    inline void setQHeaderView_MouseDoubleClickEvent_Callback(QHeaderView_MouseDoubleClickEvent_Callback cb) { qheaderview_mousedoubleclickevent_callback = cb; }
    inline void setQHeaderView_ViewportEvent_Callback(QHeaderView_ViewportEvent_Callback cb) { qheaderview_viewportevent_callback = cb; }
    inline void setQHeaderView_PaintSection_Callback(QHeaderView_PaintSection_Callback cb) { qheaderview_paintsection_callback = cb; }
    inline void setQHeaderView_SectionSizeFromContents_Callback(QHeaderView_SectionSizeFromContents_Callback cb) { qheaderview_sectionsizefromcontents_callback = cb; }
    inline void setQHeaderView_HorizontalOffset_Callback(QHeaderView_HorizontalOffset_Callback cb) { qheaderview_horizontaloffset_callback = cb; }
    inline void setQHeaderView_VerticalOffset_Callback(QHeaderView_VerticalOffset_Callback cb) { qheaderview_verticaloffset_callback = cb; }
    inline void setQHeaderView_UpdateGeometries_Callback(QHeaderView_UpdateGeometries_Callback cb) { qheaderview_updategeometries_callback = cb; }
    inline void setQHeaderView_ScrollContentsBy_Callback(QHeaderView_ScrollContentsBy_Callback cb) { qheaderview_scrollcontentsby_callback = cb; }
    inline void setQHeaderView_DataChanged_Callback(QHeaderView_DataChanged_Callback cb) { qheaderview_datachanged_callback = cb; }
    inline void setQHeaderView_RowsInserted_Callback(QHeaderView_RowsInserted_Callback cb) { qheaderview_rowsinserted_callback = cb; }
    inline void setQHeaderView_VisualRect_Callback(QHeaderView_VisualRect_Callback cb) { qheaderview_visualrect_callback = cb; }
    inline void setQHeaderView_ScrollTo_Callback(QHeaderView_ScrollTo_Callback cb) { qheaderview_scrollto_callback = cb; }
    inline void setQHeaderView_IndexAt_Callback(QHeaderView_IndexAt_Callback cb) { qheaderview_indexat_callback = cb; }
    inline void setQHeaderView_IsIndexHidden_Callback(QHeaderView_IsIndexHidden_Callback cb) { qheaderview_isindexhidden_callback = cb; }
    inline void setQHeaderView_MoveCursor_Callback(QHeaderView_MoveCursor_Callback cb) { qheaderview_movecursor_callback = cb; }
    inline void setQHeaderView_SetSelection_Callback(QHeaderView_SetSelection_Callback cb) { qheaderview_setselection_callback = cb; }
    inline void setQHeaderView_VisualRegionForSelection_Callback(QHeaderView_VisualRegionForSelection_Callback cb) { qheaderview_visualregionforselection_callback = cb; }
    inline void setQHeaderView_InitStyleOptionForIndex_Callback(QHeaderView_InitStyleOptionForIndex_Callback cb) { qheaderview_initstyleoptionforindex_callback = cb; }
    inline void setQHeaderView_InitStyleOption_Callback(QHeaderView_InitStyleOption_Callback cb) { qheaderview_initstyleoption_callback = cb; }
    inline void setQHeaderView_SetSelectionModel_Callback(QHeaderView_SetSelectionModel_Callback cb) { qheaderview_setselectionmodel_callback = cb; }
    inline void setQHeaderView_KeyboardSearch_Callback(QHeaderView_KeyboardSearch_Callback cb) { qheaderview_keyboardsearch_callback = cb; }
    inline void setQHeaderView_SizeHintForRow_Callback(QHeaderView_SizeHintForRow_Callback cb) { qheaderview_sizehintforrow_callback = cb; }
    inline void setQHeaderView_SizeHintForColumn_Callback(QHeaderView_SizeHintForColumn_Callback cb) { qheaderview_sizehintforcolumn_callback = cb; }
    inline void setQHeaderView_ItemDelegateForIndex_Callback(QHeaderView_ItemDelegateForIndex_Callback cb) { qheaderview_itemdelegateforindex_callback = cb; }
    inline void setQHeaderView_InputMethodQuery_Callback(QHeaderView_InputMethodQuery_Callback cb) { qheaderview_inputmethodquery_callback = cb; }
    inline void setQHeaderView_SetRootIndex_Callback(QHeaderView_SetRootIndex_Callback cb) { qheaderview_setrootindex_callback = cb; }
    inline void setQHeaderView_SelectAll_Callback(QHeaderView_SelectAll_Callback cb) { qheaderview_selectall_callback = cb; }
    inline void setQHeaderView_RowsAboutToBeRemoved_Callback(QHeaderView_RowsAboutToBeRemoved_Callback cb) { qheaderview_rowsabouttoberemoved_callback = cb; }
    inline void setQHeaderView_SelectionChanged_Callback(QHeaderView_SelectionChanged_Callback cb) { qheaderview_selectionchanged_callback = cb; }
    inline void setQHeaderView_UpdateEditorData_Callback(QHeaderView_UpdateEditorData_Callback cb) { qheaderview_updateeditordata_callback = cb; }
    inline void setQHeaderView_UpdateEditorGeometries_Callback(QHeaderView_UpdateEditorGeometries_Callback cb) { qheaderview_updateeditorgeometries_callback = cb; }
    inline void setQHeaderView_VerticalScrollbarAction_Callback(QHeaderView_VerticalScrollbarAction_Callback cb) { qheaderview_verticalscrollbaraction_callback = cb; }
    inline void setQHeaderView_HorizontalScrollbarAction_Callback(QHeaderView_HorizontalScrollbarAction_Callback cb) { qheaderview_horizontalscrollbaraction_callback = cb; }
    inline void setQHeaderView_VerticalScrollbarValueChanged_Callback(QHeaderView_VerticalScrollbarValueChanged_Callback cb) { qheaderview_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQHeaderView_HorizontalScrollbarValueChanged_Callback(QHeaderView_HorizontalScrollbarValueChanged_Callback cb) { qheaderview_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQHeaderView_CloseEditor_Callback(QHeaderView_CloseEditor_Callback cb) { qheaderview_closeeditor_callback = cb; }
    inline void setQHeaderView_CommitData_Callback(QHeaderView_CommitData_Callback cb) { qheaderview_commitdata_callback = cb; }
    inline void setQHeaderView_EditorDestroyed_Callback(QHeaderView_EditorDestroyed_Callback cb) { qheaderview_editordestroyed_callback = cb; }
    inline void setQHeaderView_SelectedIndexes_Callback(QHeaderView_SelectedIndexes_Callback cb) { qheaderview_selectedindexes_callback = cb; }
    inline void setQHeaderView_Edit2_Callback(QHeaderView_Edit2_Callback cb) { qheaderview_edit2_callback = cb; }
    inline void setQHeaderView_SelectionCommand_Callback(QHeaderView_SelectionCommand_Callback cb) { qheaderview_selectioncommand_callback = cb; }
    inline void setQHeaderView_StartDrag_Callback(QHeaderView_StartDrag_Callback cb) { qheaderview_startdrag_callback = cb; }
    inline void setQHeaderView_InitViewItemOption_Callback(QHeaderView_InitViewItemOption_Callback cb) { qheaderview_initviewitemoption_callback = cb; }
    inline void setQHeaderView_FocusNextPrevChild_Callback(QHeaderView_FocusNextPrevChild_Callback cb) { qheaderview_focusnextprevchild_callback = cb; }
    inline void setQHeaderView_DragEnterEvent_Callback(QHeaderView_DragEnterEvent_Callback cb) { qheaderview_dragenterevent_callback = cb; }
    inline void setQHeaderView_DragMoveEvent_Callback(QHeaderView_DragMoveEvent_Callback cb) { qheaderview_dragmoveevent_callback = cb; }
    inline void setQHeaderView_DragLeaveEvent_Callback(QHeaderView_DragLeaveEvent_Callback cb) { qheaderview_dragleaveevent_callback = cb; }
    inline void setQHeaderView_DropEvent_Callback(QHeaderView_DropEvent_Callback cb) { qheaderview_dropevent_callback = cb; }
    inline void setQHeaderView_FocusInEvent_Callback(QHeaderView_FocusInEvent_Callback cb) { qheaderview_focusinevent_callback = cb; }
    inline void setQHeaderView_FocusOutEvent_Callback(QHeaderView_FocusOutEvent_Callback cb) { qheaderview_focusoutevent_callback = cb; }
    inline void setQHeaderView_KeyPressEvent_Callback(QHeaderView_KeyPressEvent_Callback cb) { qheaderview_keypressevent_callback = cb; }
    inline void setQHeaderView_ResizeEvent_Callback(QHeaderView_ResizeEvent_Callback cb) { qheaderview_resizeevent_callback = cb; }
    inline void setQHeaderView_TimerEvent_Callback(QHeaderView_TimerEvent_Callback cb) { qheaderview_timerevent_callback = cb; }
    inline void setQHeaderView_InputMethodEvent_Callback(QHeaderView_InputMethodEvent_Callback cb) { qheaderview_inputmethodevent_callback = cb; }
    inline void setQHeaderView_EventFilter_Callback(QHeaderView_EventFilter_Callback cb) { qheaderview_eventfilter_callback = cb; }
    inline void setQHeaderView_ViewportSizeHint_Callback(QHeaderView_ViewportSizeHint_Callback cb) { qheaderview_viewportsizehint_callback = cb; }
    inline void setQHeaderView_MinimumSizeHint_Callback(QHeaderView_MinimumSizeHint_Callback cb) { qheaderview_minimumsizehint_callback = cb; }
    inline void setQHeaderView_SetupViewport_Callback(QHeaderView_SetupViewport_Callback cb) { qheaderview_setupviewport_callback = cb; }
    inline void setQHeaderView_WheelEvent_Callback(QHeaderView_WheelEvent_Callback cb) { qheaderview_wheelevent_callback = cb; }
    inline void setQHeaderView_ContextMenuEvent_Callback(QHeaderView_ContextMenuEvent_Callback cb) { qheaderview_contextmenuevent_callback = cb; }
    inline void setQHeaderView_ChangeEvent_Callback(QHeaderView_ChangeEvent_Callback cb) { qheaderview_changeevent_callback = cb; }
    inline void setQHeaderView_DevType_Callback(QHeaderView_DevType_Callback cb) { qheaderview_devtype_callback = cb; }
    inline void setQHeaderView_HeightForWidth_Callback(QHeaderView_HeightForWidth_Callback cb) { qheaderview_heightforwidth_callback = cb; }
    inline void setQHeaderView_HasHeightForWidth_Callback(QHeaderView_HasHeightForWidth_Callback cb) { qheaderview_hasheightforwidth_callback = cb; }
    inline void setQHeaderView_PaintEngine_Callback(QHeaderView_PaintEngine_Callback cb) { qheaderview_paintengine_callback = cb; }
    inline void setQHeaderView_KeyReleaseEvent_Callback(QHeaderView_KeyReleaseEvent_Callback cb) { qheaderview_keyreleaseevent_callback = cb; }
    inline void setQHeaderView_EnterEvent_Callback(QHeaderView_EnterEvent_Callback cb) { qheaderview_enterevent_callback = cb; }
    inline void setQHeaderView_LeaveEvent_Callback(QHeaderView_LeaveEvent_Callback cb) { qheaderview_leaveevent_callback = cb; }
    inline void setQHeaderView_MoveEvent_Callback(QHeaderView_MoveEvent_Callback cb) { qheaderview_moveevent_callback = cb; }
    inline void setQHeaderView_CloseEvent_Callback(QHeaderView_CloseEvent_Callback cb) { qheaderview_closeevent_callback = cb; }
    inline void setQHeaderView_TabletEvent_Callback(QHeaderView_TabletEvent_Callback cb) { qheaderview_tabletevent_callback = cb; }
    inline void setQHeaderView_ActionEvent_Callback(QHeaderView_ActionEvent_Callback cb) { qheaderview_actionevent_callback = cb; }
    inline void setQHeaderView_ShowEvent_Callback(QHeaderView_ShowEvent_Callback cb) { qheaderview_showevent_callback = cb; }
    inline void setQHeaderView_HideEvent_Callback(QHeaderView_HideEvent_Callback cb) { qheaderview_hideevent_callback = cb; }
    inline void setQHeaderView_NativeEvent_Callback(QHeaderView_NativeEvent_Callback cb) { qheaderview_nativeevent_callback = cb; }
    inline void setQHeaderView_Metric_Callback(QHeaderView_Metric_Callback cb) { qheaderview_metric_callback = cb; }
    inline void setQHeaderView_InitPainter_Callback(QHeaderView_InitPainter_Callback cb) { qheaderview_initpainter_callback = cb; }
    inline void setQHeaderView_Redirected_Callback(QHeaderView_Redirected_Callback cb) { qheaderview_redirected_callback = cb; }
    inline void setQHeaderView_SharedPainter_Callback(QHeaderView_SharedPainter_Callback cb) { qheaderview_sharedpainter_callback = cb; }
    inline void setQHeaderView_ChildEvent_Callback(QHeaderView_ChildEvent_Callback cb) { qheaderview_childevent_callback = cb; }
    inline void setQHeaderView_CustomEvent_Callback(QHeaderView_CustomEvent_Callback cb) { qheaderview_customevent_callback = cb; }
    inline void setQHeaderView_ConnectNotify_Callback(QHeaderView_ConnectNotify_Callback cb) { qheaderview_connectnotify_callback = cb; }
    inline void setQHeaderView_DisconnectNotify_Callback(QHeaderView_DisconnectNotify_Callback cb) { qheaderview_disconnectnotify_callback = cb; }
    inline void setQHeaderView_UpdateSection_Callback(QHeaderView_UpdateSection_Callback cb) { qheaderview_updatesection_callback = cb; }
    inline void setQHeaderView_ResizeSections2_Callback(QHeaderView_ResizeSections2_Callback cb) { qheaderview_resizesections2_callback = cb; }
    inline void setQHeaderView_SectionsInserted_Callback(QHeaderView_SectionsInserted_Callback cb) { qheaderview_sectionsinserted_callback = cb; }
    inline void setQHeaderView_SectionsAboutToBeRemoved_Callback(QHeaderView_SectionsAboutToBeRemoved_Callback cb) { qheaderview_sectionsabouttoberemoved_callback = cb; }
    inline void setQHeaderView_Initialize_Callback(QHeaderView_Initialize_Callback cb) { qheaderview_initialize_callback = cb; }
    inline void setQHeaderView_InitializeSections_Callback(QHeaderView_InitializeSections_Callback cb) { qheaderview_initializesections_callback = cb; }
    inline void setQHeaderView_InitializeSections2_Callback(QHeaderView_InitializeSections2_Callback cb) { qheaderview_initializesections2_callback = cb; }
    inline void setQHeaderView_State_Callback(QHeaderView_State_Callback cb) { qheaderview_state_callback = cb; }
    inline void setQHeaderView_SetState_Callback(QHeaderView_SetState_Callback cb) { qheaderview_setstate_callback = cb; }
    inline void setQHeaderView_ScheduleDelayedItemsLayout_Callback(QHeaderView_ScheduleDelayedItemsLayout_Callback cb) { qheaderview_scheduledelayeditemslayout_callback = cb; }
    inline void setQHeaderView_ExecuteDelayedItemsLayout_Callback(QHeaderView_ExecuteDelayedItemsLayout_Callback cb) { qheaderview_executedelayeditemslayout_callback = cb; }
    inline void setQHeaderView_SetDirtyRegion_Callback(QHeaderView_SetDirtyRegion_Callback cb) { qheaderview_setdirtyregion_callback = cb; }
    inline void setQHeaderView_ScrollDirtyRegion_Callback(QHeaderView_ScrollDirtyRegion_Callback cb) { qheaderview_scrolldirtyregion_callback = cb; }
    inline void setQHeaderView_DirtyRegionOffset_Callback(QHeaderView_DirtyRegionOffset_Callback cb) { qheaderview_dirtyregionoffset_callback = cb; }
    inline void setQHeaderView_StartAutoScroll_Callback(QHeaderView_StartAutoScroll_Callback cb) { qheaderview_startautoscroll_callback = cb; }
    inline void setQHeaderView_StopAutoScroll_Callback(QHeaderView_StopAutoScroll_Callback cb) { qheaderview_stopautoscroll_callback = cb; }
    inline void setQHeaderView_DoAutoScroll_Callback(QHeaderView_DoAutoScroll_Callback cb) { qheaderview_doautoscroll_callback = cb; }
    inline void setQHeaderView_DropIndicatorPosition_Callback(QHeaderView_DropIndicatorPosition_Callback cb) { qheaderview_dropindicatorposition_callback = cb; }
    inline void setQHeaderView_SetViewportMargins_Callback(QHeaderView_SetViewportMargins_Callback cb) { qheaderview_setviewportmargins_callback = cb; }
    inline void setQHeaderView_ViewportMargins_Callback(QHeaderView_ViewportMargins_Callback cb) { qheaderview_viewportmargins_callback = cb; }
    inline void setQHeaderView_DrawFrame_Callback(QHeaderView_DrawFrame_Callback cb) { qheaderview_drawframe_callback = cb; }
    inline void setQHeaderView_UpdateMicroFocus_Callback(QHeaderView_UpdateMicroFocus_Callback cb) { qheaderview_updatemicrofocus_callback = cb; }
    inline void setQHeaderView_Create_Callback(QHeaderView_Create_Callback cb) { qheaderview_create_callback = cb; }
    inline void setQHeaderView_Destroy_Callback(QHeaderView_Destroy_Callback cb) { qheaderview_destroy_callback = cb; }
    inline void setQHeaderView_FocusNextChild_Callback(QHeaderView_FocusNextChild_Callback cb) { qheaderview_focusnextchild_callback = cb; }
    inline void setQHeaderView_FocusPreviousChild_Callback(QHeaderView_FocusPreviousChild_Callback cb) { qheaderview_focuspreviouschild_callback = cb; }
    inline void setQHeaderView_Sender_Callback(QHeaderView_Sender_Callback cb) { qheaderview_sender_callback = cb; }
    inline void setQHeaderView_SenderSignalIndex_Callback(QHeaderView_SenderSignalIndex_Callback cb) { qheaderview_sendersignalindex_callback = cb; }
    inline void setQHeaderView_Receivers_Callback(QHeaderView_Receivers_Callback cb) { qheaderview_receivers_callback = cb; }
    inline void setQHeaderView_IsSignalConnected_Callback(QHeaderView_IsSignalConnected_Callback cb) { qheaderview_issignalconnected_callback = cb; }
    inline void setQHeaderView_GetDecodedMetricF_Callback(QHeaderView_GetDecodedMetricF_Callback cb) { qheaderview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQHeaderView_Metacall_IsBase(bool value) const { qheaderview_metacall_isbase = value; }
    inline void setQHeaderView_SetModel_IsBase(bool value) const { qheaderview_setmodel_isbase = value; }
    inline void setQHeaderView_SizeHint_IsBase(bool value) const { qheaderview_sizehint_isbase = value; }
    inline void setQHeaderView_SetVisible_IsBase(bool value) const { qheaderview_setvisible_isbase = value; }
    inline void setQHeaderView_DoItemsLayout_IsBase(bool value) const { qheaderview_doitemslayout_isbase = value; }
    inline void setQHeaderView_Reset_IsBase(bool value) const { qheaderview_reset_isbase = value; }
    inline void setQHeaderView_CurrentChanged_IsBase(bool value) const { qheaderview_currentchanged_isbase = value; }
    inline void setQHeaderView_Event_IsBase(bool value) const { qheaderview_event_isbase = value; }
    inline void setQHeaderView_PaintEvent_IsBase(bool value) const { qheaderview_paintevent_isbase = value; }
    inline void setQHeaderView_MousePressEvent_IsBase(bool value) const { qheaderview_mousepressevent_isbase = value; }
    inline void setQHeaderView_MouseMoveEvent_IsBase(bool value) const { qheaderview_mousemoveevent_isbase = value; }
    inline void setQHeaderView_MouseReleaseEvent_IsBase(bool value) const { qheaderview_mousereleaseevent_isbase = value; }
    inline void setQHeaderView_MouseDoubleClickEvent_IsBase(bool value) const { qheaderview_mousedoubleclickevent_isbase = value; }
    inline void setQHeaderView_ViewportEvent_IsBase(bool value) const { qheaderview_viewportevent_isbase = value; }
    inline void setQHeaderView_PaintSection_IsBase(bool value) const { qheaderview_paintsection_isbase = value; }
    inline void setQHeaderView_SectionSizeFromContents_IsBase(bool value) const { qheaderview_sectionsizefromcontents_isbase = value; }
    inline void setQHeaderView_HorizontalOffset_IsBase(bool value) const { qheaderview_horizontaloffset_isbase = value; }
    inline void setQHeaderView_VerticalOffset_IsBase(bool value) const { qheaderview_verticaloffset_isbase = value; }
    inline void setQHeaderView_UpdateGeometries_IsBase(bool value) const { qheaderview_updategeometries_isbase = value; }
    inline void setQHeaderView_ScrollContentsBy_IsBase(bool value) const { qheaderview_scrollcontentsby_isbase = value; }
    inline void setQHeaderView_DataChanged_IsBase(bool value) const { qheaderview_datachanged_isbase = value; }
    inline void setQHeaderView_RowsInserted_IsBase(bool value) const { qheaderview_rowsinserted_isbase = value; }
    inline void setQHeaderView_VisualRect_IsBase(bool value) const { qheaderview_visualrect_isbase = value; }
    inline void setQHeaderView_ScrollTo_IsBase(bool value) const { qheaderview_scrollto_isbase = value; }
    inline void setQHeaderView_IndexAt_IsBase(bool value) const { qheaderview_indexat_isbase = value; }
    inline void setQHeaderView_IsIndexHidden_IsBase(bool value) const { qheaderview_isindexhidden_isbase = value; }
    inline void setQHeaderView_MoveCursor_IsBase(bool value) const { qheaderview_movecursor_isbase = value; }
    inline void setQHeaderView_SetSelection_IsBase(bool value) const { qheaderview_setselection_isbase = value; }
    inline void setQHeaderView_VisualRegionForSelection_IsBase(bool value) const { qheaderview_visualregionforselection_isbase = value; }
    inline void setQHeaderView_InitStyleOptionForIndex_IsBase(bool value) const { qheaderview_initstyleoptionforindex_isbase = value; }
    inline void setQHeaderView_InitStyleOption_IsBase(bool value) const { qheaderview_initstyleoption_isbase = value; }
    inline void setQHeaderView_SetSelectionModel_IsBase(bool value) const { qheaderview_setselectionmodel_isbase = value; }
    inline void setQHeaderView_KeyboardSearch_IsBase(bool value) const { qheaderview_keyboardsearch_isbase = value; }
    inline void setQHeaderView_SizeHintForRow_IsBase(bool value) const { qheaderview_sizehintforrow_isbase = value; }
    inline void setQHeaderView_SizeHintForColumn_IsBase(bool value) const { qheaderview_sizehintforcolumn_isbase = value; }
    inline void setQHeaderView_ItemDelegateForIndex_IsBase(bool value) const { qheaderview_itemdelegateforindex_isbase = value; }
    inline void setQHeaderView_InputMethodQuery_IsBase(bool value) const { qheaderview_inputmethodquery_isbase = value; }
    inline void setQHeaderView_SetRootIndex_IsBase(bool value) const { qheaderview_setrootindex_isbase = value; }
    inline void setQHeaderView_SelectAll_IsBase(bool value) const { qheaderview_selectall_isbase = value; }
    inline void setQHeaderView_RowsAboutToBeRemoved_IsBase(bool value) const { qheaderview_rowsabouttoberemoved_isbase = value; }
    inline void setQHeaderView_SelectionChanged_IsBase(bool value) const { qheaderview_selectionchanged_isbase = value; }
    inline void setQHeaderView_UpdateEditorData_IsBase(bool value) const { qheaderview_updateeditordata_isbase = value; }
    inline void setQHeaderView_UpdateEditorGeometries_IsBase(bool value) const { qheaderview_updateeditorgeometries_isbase = value; }
    inline void setQHeaderView_VerticalScrollbarAction_IsBase(bool value) const { qheaderview_verticalscrollbaraction_isbase = value; }
    inline void setQHeaderView_HorizontalScrollbarAction_IsBase(bool value) const { qheaderview_horizontalscrollbaraction_isbase = value; }
    inline void setQHeaderView_VerticalScrollbarValueChanged_IsBase(bool value) const { qheaderview_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQHeaderView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qheaderview_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQHeaderView_CloseEditor_IsBase(bool value) const { qheaderview_closeeditor_isbase = value; }
    inline void setQHeaderView_CommitData_IsBase(bool value) const { qheaderview_commitdata_isbase = value; }
    inline void setQHeaderView_EditorDestroyed_IsBase(bool value) const { qheaderview_editordestroyed_isbase = value; }
    inline void setQHeaderView_SelectedIndexes_IsBase(bool value) const { qheaderview_selectedindexes_isbase = value; }
    inline void setQHeaderView_Edit2_IsBase(bool value) const { qheaderview_edit2_isbase = value; }
    inline void setQHeaderView_SelectionCommand_IsBase(bool value) const { qheaderview_selectioncommand_isbase = value; }
    inline void setQHeaderView_StartDrag_IsBase(bool value) const { qheaderview_startdrag_isbase = value; }
    inline void setQHeaderView_InitViewItemOption_IsBase(bool value) const { qheaderview_initviewitemoption_isbase = value; }
    inline void setQHeaderView_FocusNextPrevChild_IsBase(bool value) const { qheaderview_focusnextprevchild_isbase = value; }
    inline void setQHeaderView_DragEnterEvent_IsBase(bool value) const { qheaderview_dragenterevent_isbase = value; }
    inline void setQHeaderView_DragMoveEvent_IsBase(bool value) const { qheaderview_dragmoveevent_isbase = value; }
    inline void setQHeaderView_DragLeaveEvent_IsBase(bool value) const { qheaderview_dragleaveevent_isbase = value; }
    inline void setQHeaderView_DropEvent_IsBase(bool value) const { qheaderview_dropevent_isbase = value; }
    inline void setQHeaderView_FocusInEvent_IsBase(bool value) const { qheaderview_focusinevent_isbase = value; }
    inline void setQHeaderView_FocusOutEvent_IsBase(bool value) const { qheaderview_focusoutevent_isbase = value; }
    inline void setQHeaderView_KeyPressEvent_IsBase(bool value) const { qheaderview_keypressevent_isbase = value; }
    inline void setQHeaderView_ResizeEvent_IsBase(bool value) const { qheaderview_resizeevent_isbase = value; }
    inline void setQHeaderView_TimerEvent_IsBase(bool value) const { qheaderview_timerevent_isbase = value; }
    inline void setQHeaderView_InputMethodEvent_IsBase(bool value) const { qheaderview_inputmethodevent_isbase = value; }
    inline void setQHeaderView_EventFilter_IsBase(bool value) const { qheaderview_eventfilter_isbase = value; }
    inline void setQHeaderView_ViewportSizeHint_IsBase(bool value) const { qheaderview_viewportsizehint_isbase = value; }
    inline void setQHeaderView_MinimumSizeHint_IsBase(bool value) const { qheaderview_minimumsizehint_isbase = value; }
    inline void setQHeaderView_SetupViewport_IsBase(bool value) const { qheaderview_setupviewport_isbase = value; }
    inline void setQHeaderView_WheelEvent_IsBase(bool value) const { qheaderview_wheelevent_isbase = value; }
    inline void setQHeaderView_ContextMenuEvent_IsBase(bool value) const { qheaderview_contextmenuevent_isbase = value; }
    inline void setQHeaderView_ChangeEvent_IsBase(bool value) const { qheaderview_changeevent_isbase = value; }
    inline void setQHeaderView_DevType_IsBase(bool value) const { qheaderview_devtype_isbase = value; }
    inline void setQHeaderView_HeightForWidth_IsBase(bool value) const { qheaderview_heightforwidth_isbase = value; }
    inline void setQHeaderView_HasHeightForWidth_IsBase(bool value) const { qheaderview_hasheightforwidth_isbase = value; }
    inline void setQHeaderView_PaintEngine_IsBase(bool value) const { qheaderview_paintengine_isbase = value; }
    inline void setQHeaderView_KeyReleaseEvent_IsBase(bool value) const { qheaderview_keyreleaseevent_isbase = value; }
    inline void setQHeaderView_EnterEvent_IsBase(bool value) const { qheaderview_enterevent_isbase = value; }
    inline void setQHeaderView_LeaveEvent_IsBase(bool value) const { qheaderview_leaveevent_isbase = value; }
    inline void setQHeaderView_MoveEvent_IsBase(bool value) const { qheaderview_moveevent_isbase = value; }
    inline void setQHeaderView_CloseEvent_IsBase(bool value) const { qheaderview_closeevent_isbase = value; }
    inline void setQHeaderView_TabletEvent_IsBase(bool value) const { qheaderview_tabletevent_isbase = value; }
    inline void setQHeaderView_ActionEvent_IsBase(bool value) const { qheaderview_actionevent_isbase = value; }
    inline void setQHeaderView_ShowEvent_IsBase(bool value) const { qheaderview_showevent_isbase = value; }
    inline void setQHeaderView_HideEvent_IsBase(bool value) const { qheaderview_hideevent_isbase = value; }
    inline void setQHeaderView_NativeEvent_IsBase(bool value) const { qheaderview_nativeevent_isbase = value; }
    inline void setQHeaderView_Metric_IsBase(bool value) const { qheaderview_metric_isbase = value; }
    inline void setQHeaderView_InitPainter_IsBase(bool value) const { qheaderview_initpainter_isbase = value; }
    inline void setQHeaderView_Redirected_IsBase(bool value) const { qheaderview_redirected_isbase = value; }
    inline void setQHeaderView_SharedPainter_IsBase(bool value) const { qheaderview_sharedpainter_isbase = value; }
    inline void setQHeaderView_ChildEvent_IsBase(bool value) const { qheaderview_childevent_isbase = value; }
    inline void setQHeaderView_CustomEvent_IsBase(bool value) const { qheaderview_customevent_isbase = value; }
    inline void setQHeaderView_ConnectNotify_IsBase(bool value) const { qheaderview_connectnotify_isbase = value; }
    inline void setQHeaderView_DisconnectNotify_IsBase(bool value) const { qheaderview_disconnectnotify_isbase = value; }
    inline void setQHeaderView_UpdateSection_IsBase(bool value) const { qheaderview_updatesection_isbase = value; }
    inline void setQHeaderView_ResizeSections2_IsBase(bool value) const { qheaderview_resizesections2_isbase = value; }
    inline void setQHeaderView_SectionsInserted_IsBase(bool value) const { qheaderview_sectionsinserted_isbase = value; }
    inline void setQHeaderView_SectionsAboutToBeRemoved_IsBase(bool value) const { qheaderview_sectionsabouttoberemoved_isbase = value; }
    inline void setQHeaderView_Initialize_IsBase(bool value) const { qheaderview_initialize_isbase = value; }
    inline void setQHeaderView_InitializeSections_IsBase(bool value) const { qheaderview_initializesections_isbase = value; }
    inline void setQHeaderView_InitializeSections2_IsBase(bool value) const { qheaderview_initializesections2_isbase = value; }
    inline void setQHeaderView_State_IsBase(bool value) const { qheaderview_state_isbase = value; }
    inline void setQHeaderView_SetState_IsBase(bool value) const { qheaderview_setstate_isbase = value; }
    inline void setQHeaderView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qheaderview_scheduledelayeditemslayout_isbase = value; }
    inline void setQHeaderView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qheaderview_executedelayeditemslayout_isbase = value; }
    inline void setQHeaderView_SetDirtyRegion_IsBase(bool value) const { qheaderview_setdirtyregion_isbase = value; }
    inline void setQHeaderView_ScrollDirtyRegion_IsBase(bool value) const { qheaderview_scrolldirtyregion_isbase = value; }
    inline void setQHeaderView_DirtyRegionOffset_IsBase(bool value) const { qheaderview_dirtyregionoffset_isbase = value; }
    inline void setQHeaderView_StartAutoScroll_IsBase(bool value) const { qheaderview_startautoscroll_isbase = value; }
    inline void setQHeaderView_StopAutoScroll_IsBase(bool value) const { qheaderview_stopautoscroll_isbase = value; }
    inline void setQHeaderView_DoAutoScroll_IsBase(bool value) const { qheaderview_doautoscroll_isbase = value; }
    inline void setQHeaderView_DropIndicatorPosition_IsBase(bool value) const { qheaderview_dropindicatorposition_isbase = value; }
    inline void setQHeaderView_SetViewportMargins_IsBase(bool value) const { qheaderview_setviewportmargins_isbase = value; }
    inline void setQHeaderView_ViewportMargins_IsBase(bool value) const { qheaderview_viewportmargins_isbase = value; }
    inline void setQHeaderView_DrawFrame_IsBase(bool value) const { qheaderview_drawframe_isbase = value; }
    inline void setQHeaderView_UpdateMicroFocus_IsBase(bool value) const { qheaderview_updatemicrofocus_isbase = value; }
    inline void setQHeaderView_Create_IsBase(bool value) const { qheaderview_create_isbase = value; }
    inline void setQHeaderView_Destroy_IsBase(bool value) const { qheaderview_destroy_isbase = value; }
    inline void setQHeaderView_FocusNextChild_IsBase(bool value) const { qheaderview_focusnextchild_isbase = value; }
    inline void setQHeaderView_FocusPreviousChild_IsBase(bool value) const { qheaderview_focuspreviouschild_isbase = value; }
    inline void setQHeaderView_Sender_IsBase(bool value) const { qheaderview_sender_isbase = value; }
    inline void setQHeaderView_SenderSignalIndex_IsBase(bool value) const { qheaderview_sendersignalindex_isbase = value; }
    inline void setQHeaderView_Receivers_IsBase(bool value) const { qheaderview_receivers_isbase = value; }
    inline void setQHeaderView_IsSignalConnected_IsBase(bool value) const { qheaderview_issignalconnected_isbase = value; }
    inline void setQHeaderView_GetDecodedMetricF_IsBase(bool value) const { qheaderview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qheaderview_metacall_isbase) {
            qheaderview_metacall_isbase = false;
            return QHeaderView::qt_metacall(param1, param2, param3);
        } else if (qheaderview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qheaderview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qheaderview_setmodel_isbase) {
            qheaderview_setmodel_isbase = false;
            QHeaderView::setModel(model);
        } else if (qheaderview_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            qheaderview_setmodel_callback(this, cbval1);
        } else {
            QHeaderView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qheaderview_sizehint_isbase) {
            qheaderview_sizehint_isbase = false;
            return QHeaderView::sizeHint();
        } else if (qheaderview_sizehint_callback != nullptr) {
            QSize* callback_ret = qheaderview_sizehint_callback();
            return *callback_ret;
        } else {
            return QHeaderView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool v) override {
        if (qheaderview_setvisible_isbase) {
            qheaderview_setvisible_isbase = false;
            QHeaderView::setVisible(v);
        } else if (qheaderview_setvisible_callback != nullptr) {
            bool cbval1 = v;

            qheaderview_setvisible_callback(this, cbval1);
        } else {
            QHeaderView::setVisible(v);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qheaderview_doitemslayout_isbase) {
            qheaderview_doitemslayout_isbase = false;
            QHeaderView::doItemsLayout();
        } else if (qheaderview_doitemslayout_callback != nullptr) {
            qheaderview_doitemslayout_callback();
        } else {
            QHeaderView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qheaderview_reset_isbase) {
            qheaderview_reset_isbase = false;
            QHeaderView::reset();
        } else if (qheaderview_reset_callback != nullptr) {
            qheaderview_reset_callback();
        } else {
            QHeaderView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& old) override {
        if (qheaderview_currentchanged_isbase) {
            qheaderview_currentchanged_isbase = false;
            QHeaderView::currentChanged(current, old);
        } else if (qheaderview_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& old_ret = old;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&old_ret);

            qheaderview_currentchanged_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::currentChanged(current, old);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qheaderview_event_isbase) {
            qheaderview_event_isbase = false;
            return QHeaderView::event(e);
        } else if (qheaderview_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qheaderview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHeaderView::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qheaderview_paintevent_isbase) {
            qheaderview_paintevent_isbase = false;
            QHeaderView::paintEvent(e);
        } else if (qheaderview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            qheaderview_paintevent_callback(this, cbval1);
        } else {
            QHeaderView::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qheaderview_mousepressevent_isbase) {
            qheaderview_mousepressevent_isbase = false;
            QHeaderView::mousePressEvent(e);
        } else if (qheaderview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qheaderview_mousepressevent_callback(this, cbval1);
        } else {
            QHeaderView::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qheaderview_mousemoveevent_isbase) {
            qheaderview_mousemoveevent_isbase = false;
            QHeaderView::mouseMoveEvent(e);
        } else if (qheaderview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qheaderview_mousemoveevent_callback(this, cbval1);
        } else {
            QHeaderView::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qheaderview_mousereleaseevent_isbase) {
            qheaderview_mousereleaseevent_isbase = false;
            QHeaderView::mouseReleaseEvent(e);
        } else if (qheaderview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qheaderview_mousereleaseevent_callback(this, cbval1);
        } else {
            QHeaderView::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qheaderview_mousedoubleclickevent_isbase) {
            qheaderview_mousedoubleclickevent_isbase = false;
            QHeaderView::mouseDoubleClickEvent(e);
        } else if (qheaderview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qheaderview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QHeaderView::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* e) override {
        if (qheaderview_viewportevent_isbase) {
            qheaderview_viewportevent_isbase = false;
            return QHeaderView::viewportEvent(e);
        } else if (qheaderview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qheaderview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHeaderView::viewportEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintSection(QPainter* painter, const QRect& rect, int logicalIndex) const override {
        if (qheaderview_paintsection_isbase) {
            qheaderview_paintsection_isbase = false;
            QHeaderView::paintSection(painter, rect, logicalIndex);
        } else if (qheaderview_paintsection_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = logicalIndex;

            qheaderview_paintsection_callback(this, cbval1, cbval2, cbval3);
        } else {
            QHeaderView::paintSection(painter, rect, logicalIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sectionSizeFromContents(int logicalIndex) const override {
        if (qheaderview_sectionsizefromcontents_isbase) {
            qheaderview_sectionsizefromcontents_isbase = false;
            return QHeaderView::sectionSizeFromContents(logicalIndex);
        } else if (qheaderview_sectionsizefromcontents_callback != nullptr) {
            int cbval1 = logicalIndex;

            QSize* callback_ret = qheaderview_sectionsizefromcontents_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QHeaderView::sectionSizeFromContents(logicalIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qheaderview_horizontaloffset_isbase) {
            qheaderview_horizontaloffset_isbase = false;
            return QHeaderView::horizontalOffset();
        } else if (qheaderview_horizontaloffset_callback != nullptr) {
            int callback_ret = qheaderview_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qheaderview_verticaloffset_isbase) {
            qheaderview_verticaloffset_isbase = false;
            return QHeaderView::verticalOffset();
        } else if (qheaderview_verticaloffset_callback != nullptr) {
            int callback_ret = qheaderview_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qheaderview_updategeometries_isbase) {
            qheaderview_updategeometries_isbase = false;
            QHeaderView::updateGeometries();
        } else if (qheaderview_updategeometries_callback != nullptr) {
            qheaderview_updategeometries_callback();
        } else {
            QHeaderView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qheaderview_scrollcontentsby_isbase) {
            qheaderview_scrollcontentsby_isbase = false;
            QHeaderView::scrollContentsBy(dx, dy);
        } else if (qheaderview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qheaderview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qheaderview_datachanged_isbase) {
            qheaderview_datachanged_isbase = false;
            QHeaderView::dataChanged(topLeft, bottomRight, roles);
        } else if (qheaderview_datachanged_callback != nullptr) {
            const QModelIndex& topLeft_ret = topLeft;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&topLeft_ret);
            const QModelIndex& bottomRight_ret = bottomRight;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&bottomRight_ret);
            const QList<int>& roles_ret = roles;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
            for (qsizetype i = 0; i < roles_ret.size(); ++i) {
                roles_arr[i] = roles_ret[i];
            }
            libqt_list roles_out;
            roles_out.len = roles_ret.size();
            roles_out.data = static_cast<void*>(roles_arr);
            libqt_list /* of int */ cbval3 = roles_out;

            qheaderview_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            QHeaderView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qheaderview_rowsinserted_isbase) {
            qheaderview_rowsinserted_isbase = false;
            QHeaderView::rowsInserted(parent, start, end);
        } else if (qheaderview_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qheaderview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            QHeaderView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qheaderview_visualrect_isbase) {
            qheaderview_visualrect_isbase = false;
            return QHeaderView::visualRect(index);
        } else if (qheaderview_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qheaderview_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QHeaderView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qheaderview_scrollto_isbase) {
            qheaderview_scrollto_isbase = false;
            QHeaderView::scrollTo(index, hint);
        } else if (qheaderview_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            qheaderview_scrollto_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qheaderview_indexat_isbase) {
            qheaderview_indexat_isbase = false;
            return QHeaderView::indexAt(p);
        } else if (qheaderview_indexat_callback != nullptr) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = qheaderview_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QHeaderView::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qheaderview_isindexhidden_isbase) {
            qheaderview_isindexhidden_isbase = false;
            return QHeaderView::isIndexHidden(index);
        } else if (qheaderview_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qheaderview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHeaderView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction param1, QFlags<Qt::KeyboardModifier> param2) override {
        if (qheaderview_movecursor_isbase) {
            qheaderview_movecursor_isbase = false;
            return QHeaderView::moveCursor(param1, param2);
        } else if (qheaderview_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = static_cast<int>(param2);

            QModelIndex* callback_ret = qheaderview_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QHeaderView::moveCursor(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags flags) override {
        if (qheaderview_setselection_isbase) {
            qheaderview_setselection_isbase = false;
            QHeaderView::setSelection(rect, flags);
        } else if (qheaderview_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(flags);

            qheaderview_setselection_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::setSelection(rect, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qheaderview_visualregionforselection_isbase) {
            qheaderview_visualregionforselection_isbase = false;
            return QHeaderView::visualRegionForSelection(selection);
        } else if (qheaderview_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = qheaderview_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QHeaderView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOptionForIndex(QStyleOptionHeader* option, int logicalIndex) const override {
        if (qheaderview_initstyleoptionforindex_isbase) {
            qheaderview_initstyleoptionforindex_isbase = false;
            QHeaderView::initStyleOptionForIndex(option, logicalIndex);
        } else if (qheaderview_initstyleoptionforindex_callback != nullptr) {
            QStyleOptionHeader* cbval1 = option;
            int cbval2 = logicalIndex;

            qheaderview_initstyleoptionforindex_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::initStyleOptionForIndex(option, logicalIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionHeader* option) const override {
        if (qheaderview_initstyleoption_isbase) {
            qheaderview_initstyleoption_isbase = false;
            QHeaderView::initStyleOption(option);
        } else if (qheaderview_initstyleoption_callback != nullptr) {
            QStyleOptionHeader* cbval1 = option;

            qheaderview_initstyleoption_callback(this, cbval1);
        } else {
            QHeaderView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qheaderview_setselectionmodel_isbase) {
            qheaderview_setselectionmodel_isbase = false;
            QHeaderView::setSelectionModel(selectionModel);
        } else if (qheaderview_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            qheaderview_setselectionmodel_callback(this, cbval1);
        } else {
            QHeaderView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qheaderview_keyboardsearch_isbase) {
            qheaderview_keyboardsearch_isbase = false;
            QHeaderView::keyboardSearch(search);
        } else if (qheaderview_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<const char*>(malloc(search_str.len + 1));
            memcpy((void*)search_str.data, search_b.data(), search_str.len);
            ((char*)search_str.data)[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            qheaderview_keyboardsearch_callback(this, cbval1);
        } else {
            QHeaderView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qheaderview_sizehintforrow_isbase) {
            qheaderview_sizehintforrow_isbase = false;
            return QHeaderView::sizeHintForRow(row);
        } else if (qheaderview_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = qheaderview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qheaderview_sizehintforcolumn_isbase) {
            qheaderview_sizehintforcolumn_isbase = false;
            return QHeaderView::sizeHintForColumn(column);
        } else if (qheaderview_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = qheaderview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qheaderview_itemdelegateforindex_isbase) {
            qheaderview_itemdelegateforindex_isbase = false;
            return QHeaderView::itemDelegateForIndex(index);
        } else if (qheaderview_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = qheaderview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHeaderView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qheaderview_inputmethodquery_isbase) {
            qheaderview_inputmethodquery_isbase = false;
            return QHeaderView::inputMethodQuery(query);
        } else if (qheaderview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qheaderview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QHeaderView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qheaderview_setrootindex_isbase) {
            qheaderview_setrootindex_isbase = false;
            QHeaderView::setRootIndex(index);
        } else if (qheaderview_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            qheaderview_setrootindex_callback(this, cbval1);
        } else {
            QHeaderView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qheaderview_selectall_isbase) {
            qheaderview_selectall_isbase = false;
            QHeaderView::selectAll();
        } else if (qheaderview_selectall_callback != nullptr) {
            qheaderview_selectall_callback();
        } else {
            QHeaderView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qheaderview_rowsabouttoberemoved_isbase) {
            qheaderview_rowsabouttoberemoved_isbase = false;
            QHeaderView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qheaderview_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qheaderview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QHeaderView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qheaderview_selectionchanged_isbase) {
            qheaderview_selectionchanged_isbase = false;
            QHeaderView::selectionChanged(selected, deselected);
        } else if (qheaderview_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            qheaderview_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qheaderview_updateeditordata_isbase) {
            qheaderview_updateeditordata_isbase = false;
            QHeaderView::updateEditorData();
        } else if (qheaderview_updateeditordata_callback != nullptr) {
            qheaderview_updateeditordata_callback();
        } else {
            QHeaderView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qheaderview_updateeditorgeometries_isbase) {
            qheaderview_updateeditorgeometries_isbase = false;
            QHeaderView::updateEditorGeometries();
        } else if (qheaderview_updateeditorgeometries_callback != nullptr) {
            qheaderview_updateeditorgeometries_callback();
        } else {
            QHeaderView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qheaderview_verticalscrollbaraction_isbase) {
            qheaderview_verticalscrollbaraction_isbase = false;
            QHeaderView::verticalScrollbarAction(action);
        } else if (qheaderview_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qheaderview_verticalscrollbaraction_callback(this, cbval1);
        } else {
            QHeaderView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qheaderview_horizontalscrollbaraction_isbase) {
            qheaderview_horizontalscrollbaraction_isbase = false;
            QHeaderView::horizontalScrollbarAction(action);
        } else if (qheaderview_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qheaderview_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            QHeaderView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qheaderview_verticalscrollbarvaluechanged_isbase) {
            qheaderview_verticalscrollbarvaluechanged_isbase = false;
            QHeaderView::verticalScrollbarValueChanged(value);
        } else if (qheaderview_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qheaderview_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QHeaderView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qheaderview_horizontalscrollbarvaluechanged_isbase) {
            qheaderview_horizontalscrollbarvaluechanged_isbase = false;
            QHeaderView::horizontalScrollbarValueChanged(value);
        } else if (qheaderview_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qheaderview_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QHeaderView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qheaderview_closeeditor_isbase) {
            qheaderview_closeeditor_isbase = false;
            QHeaderView::closeEditor(editor, hint);
        } else if (qheaderview_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            qheaderview_closeeditor_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qheaderview_commitdata_isbase) {
            qheaderview_commitdata_isbase = false;
            QHeaderView::commitData(editor);
        } else if (qheaderview_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            qheaderview_commitdata_callback(this, cbval1);
        } else {
            QHeaderView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qheaderview_editordestroyed_isbase) {
            qheaderview_editordestroyed_isbase = false;
            QHeaderView::editorDestroyed(editor);
        } else if (qheaderview_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            qheaderview_editordestroyed_callback(this, cbval1);
        } else {
            QHeaderView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qheaderview_selectedindexes_isbase) {
            qheaderview_selectedindexes_isbase = false;
            return QHeaderView::selectedIndexes();
        } else if (qheaderview_selectedindexes_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qheaderview_selectedindexes_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QHeaderView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qheaderview_edit2_isbase) {
            qheaderview_edit2_isbase = false;
            return QHeaderView::edit(index, trigger, event);
        } else if (qheaderview_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = qheaderview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QHeaderView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qheaderview_selectioncommand_isbase) {
            qheaderview_selectioncommand_isbase = false;
            return QHeaderView::selectionCommand(index, event);
        } else if (qheaderview_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = qheaderview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return QHeaderView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qheaderview_startdrag_isbase) {
            qheaderview_startdrag_isbase = false;
            QHeaderView::startDrag(supportedActions);
        } else if (qheaderview_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            qheaderview_startdrag_callback(this, cbval1);
        } else {
            QHeaderView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qheaderview_initviewitemoption_isbase) {
            qheaderview_initviewitemoption_isbase = false;
            QHeaderView::initViewItemOption(option);
        } else if (qheaderview_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            qheaderview_initviewitemoption_callback(this, cbval1);
        } else {
            QHeaderView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qheaderview_focusnextprevchild_isbase) {
            qheaderview_focusnextprevchild_isbase = false;
            return QHeaderView::focusNextPrevChild(next);
        } else if (qheaderview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qheaderview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHeaderView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qheaderview_dragenterevent_isbase) {
            qheaderview_dragenterevent_isbase = false;
            QHeaderView::dragEnterEvent(event);
        } else if (qheaderview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qheaderview_dragenterevent_callback(this, cbval1);
        } else {
            QHeaderView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qheaderview_dragmoveevent_isbase) {
            qheaderview_dragmoveevent_isbase = false;
            QHeaderView::dragMoveEvent(event);
        } else if (qheaderview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qheaderview_dragmoveevent_callback(this, cbval1);
        } else {
            QHeaderView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qheaderview_dragleaveevent_isbase) {
            qheaderview_dragleaveevent_isbase = false;
            QHeaderView::dragLeaveEvent(event);
        } else if (qheaderview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qheaderview_dragleaveevent_callback(this, cbval1);
        } else {
            QHeaderView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qheaderview_dropevent_isbase) {
            qheaderview_dropevent_isbase = false;
            QHeaderView::dropEvent(event);
        } else if (qheaderview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qheaderview_dropevent_callback(this, cbval1);
        } else {
            QHeaderView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qheaderview_focusinevent_isbase) {
            qheaderview_focusinevent_isbase = false;
            QHeaderView::focusInEvent(event);
        } else if (qheaderview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qheaderview_focusinevent_callback(this, cbval1);
        } else {
            QHeaderView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qheaderview_focusoutevent_isbase) {
            qheaderview_focusoutevent_isbase = false;
            QHeaderView::focusOutEvent(event);
        } else if (qheaderview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qheaderview_focusoutevent_callback(this, cbval1);
        } else {
            QHeaderView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qheaderview_keypressevent_isbase) {
            qheaderview_keypressevent_isbase = false;
            QHeaderView::keyPressEvent(event);
        } else if (qheaderview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qheaderview_keypressevent_callback(this, cbval1);
        } else {
            QHeaderView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qheaderview_resizeevent_isbase) {
            qheaderview_resizeevent_isbase = false;
            QHeaderView::resizeEvent(event);
        } else if (qheaderview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qheaderview_resizeevent_callback(this, cbval1);
        } else {
            QHeaderView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qheaderview_timerevent_isbase) {
            qheaderview_timerevent_isbase = false;
            QHeaderView::timerEvent(event);
        } else if (qheaderview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qheaderview_timerevent_callback(this, cbval1);
        } else {
            QHeaderView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qheaderview_inputmethodevent_isbase) {
            qheaderview_inputmethodevent_isbase = false;
            QHeaderView::inputMethodEvent(event);
        } else if (qheaderview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qheaderview_inputmethodevent_callback(this, cbval1);
        } else {
            QHeaderView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qheaderview_eventfilter_isbase) {
            qheaderview_eventfilter_isbase = false;
            return QHeaderView::eventFilter(object, event);
        } else if (qheaderview_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qheaderview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QHeaderView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qheaderview_viewportsizehint_isbase) {
            qheaderview_viewportsizehint_isbase = false;
            return QHeaderView::viewportSizeHint();
        } else if (qheaderview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qheaderview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QHeaderView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qheaderview_minimumsizehint_isbase) {
            qheaderview_minimumsizehint_isbase = false;
            return QHeaderView::minimumSizeHint();
        } else if (qheaderview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qheaderview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QHeaderView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qheaderview_setupviewport_isbase) {
            qheaderview_setupviewport_isbase = false;
            QHeaderView::setupViewport(viewport);
        } else if (qheaderview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qheaderview_setupviewport_callback(this, cbval1);
        } else {
            QHeaderView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qheaderview_wheelevent_isbase) {
            qheaderview_wheelevent_isbase = false;
            QHeaderView::wheelEvent(param1);
        } else if (qheaderview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qheaderview_wheelevent_callback(this, cbval1);
        } else {
            QHeaderView::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qheaderview_contextmenuevent_isbase) {
            qheaderview_contextmenuevent_isbase = false;
            QHeaderView::contextMenuEvent(param1);
        } else if (qheaderview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qheaderview_contextmenuevent_callback(this, cbval1);
        } else {
            QHeaderView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qheaderview_changeevent_isbase) {
            qheaderview_changeevent_isbase = false;
            QHeaderView::changeEvent(param1);
        } else if (qheaderview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qheaderview_changeevent_callback(this, cbval1);
        } else {
            QHeaderView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qheaderview_devtype_isbase) {
            qheaderview_devtype_isbase = false;
            return QHeaderView::devType();
        } else if (qheaderview_devtype_callback != nullptr) {
            int callback_ret = qheaderview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qheaderview_heightforwidth_isbase) {
            qheaderview_heightforwidth_isbase = false;
            return QHeaderView::heightForWidth(param1);
        } else if (qheaderview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qheaderview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qheaderview_hasheightforwidth_isbase) {
            qheaderview_hasheightforwidth_isbase = false;
            return QHeaderView::hasHeightForWidth();
        } else if (qheaderview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qheaderview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QHeaderView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qheaderview_paintengine_isbase) {
            qheaderview_paintengine_isbase = false;
            return QHeaderView::paintEngine();
        } else if (qheaderview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qheaderview_paintengine_callback();
            return callback_ret;
        } else {
            return QHeaderView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qheaderview_keyreleaseevent_isbase) {
            qheaderview_keyreleaseevent_isbase = false;
            QHeaderView::keyReleaseEvent(event);
        } else if (qheaderview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qheaderview_keyreleaseevent_callback(this, cbval1);
        } else {
            QHeaderView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qheaderview_enterevent_isbase) {
            qheaderview_enterevent_isbase = false;
            QHeaderView::enterEvent(event);
        } else if (qheaderview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qheaderview_enterevent_callback(this, cbval1);
        } else {
            QHeaderView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qheaderview_leaveevent_isbase) {
            qheaderview_leaveevent_isbase = false;
            QHeaderView::leaveEvent(event);
        } else if (qheaderview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qheaderview_leaveevent_callback(this, cbval1);
        } else {
            QHeaderView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qheaderview_moveevent_isbase) {
            qheaderview_moveevent_isbase = false;
            QHeaderView::moveEvent(event);
        } else if (qheaderview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qheaderview_moveevent_callback(this, cbval1);
        } else {
            QHeaderView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qheaderview_closeevent_isbase) {
            qheaderview_closeevent_isbase = false;
            QHeaderView::closeEvent(event);
        } else if (qheaderview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qheaderview_closeevent_callback(this, cbval1);
        } else {
            QHeaderView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qheaderview_tabletevent_isbase) {
            qheaderview_tabletevent_isbase = false;
            QHeaderView::tabletEvent(event);
        } else if (qheaderview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qheaderview_tabletevent_callback(this, cbval1);
        } else {
            QHeaderView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qheaderview_actionevent_isbase) {
            qheaderview_actionevent_isbase = false;
            QHeaderView::actionEvent(event);
        } else if (qheaderview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qheaderview_actionevent_callback(this, cbval1);
        } else {
            QHeaderView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qheaderview_showevent_isbase) {
            qheaderview_showevent_isbase = false;
            QHeaderView::showEvent(event);
        } else if (qheaderview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qheaderview_showevent_callback(this, cbval1);
        } else {
            QHeaderView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qheaderview_hideevent_isbase) {
            qheaderview_hideevent_isbase = false;
            QHeaderView::hideEvent(event);
        } else if (qheaderview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qheaderview_hideevent_callback(this, cbval1);
        } else {
            QHeaderView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qheaderview_nativeevent_isbase) {
            qheaderview_nativeevent_isbase = false;
            return QHeaderView::nativeEvent(eventType, message, result);
        } else if (qheaderview_nativeevent_callback != nullptr) {
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

            bool callback_ret = qheaderview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QHeaderView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qheaderview_metric_isbase) {
            qheaderview_metric_isbase = false;
            return QHeaderView::metric(param1);
        } else if (qheaderview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qheaderview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qheaderview_initpainter_isbase) {
            qheaderview_initpainter_isbase = false;
            QHeaderView::initPainter(painter);
        } else if (qheaderview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qheaderview_initpainter_callback(this, cbval1);
        } else {
            QHeaderView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qheaderview_redirected_isbase) {
            qheaderview_redirected_isbase = false;
            return QHeaderView::redirected(offset);
        } else if (qheaderview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qheaderview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHeaderView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qheaderview_sharedpainter_isbase) {
            qheaderview_sharedpainter_isbase = false;
            return QHeaderView::sharedPainter();
        } else if (qheaderview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qheaderview_sharedpainter_callback();
            return callback_ret;
        } else {
            return QHeaderView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qheaderview_childevent_isbase) {
            qheaderview_childevent_isbase = false;
            QHeaderView::childEvent(event);
        } else if (qheaderview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qheaderview_childevent_callback(this, cbval1);
        } else {
            QHeaderView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qheaderview_customevent_isbase) {
            qheaderview_customevent_isbase = false;
            QHeaderView::customEvent(event);
        } else if (qheaderview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qheaderview_customevent_callback(this, cbval1);
        } else {
            QHeaderView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qheaderview_connectnotify_isbase) {
            qheaderview_connectnotify_isbase = false;
            QHeaderView::connectNotify(signal);
        } else if (qheaderview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qheaderview_connectnotify_callback(this, cbval1);
        } else {
            QHeaderView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qheaderview_disconnectnotify_isbase) {
            qheaderview_disconnectnotify_isbase = false;
            QHeaderView::disconnectNotify(signal);
        } else if (qheaderview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qheaderview_disconnectnotify_callback(this, cbval1);
        } else {
            QHeaderView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateSection(int logicalIndex) {
        if (qheaderview_updatesection_isbase) {
            qheaderview_updatesection_isbase = false;
            QHeaderView::updateSection(logicalIndex);
        } else if (qheaderview_updatesection_callback != nullptr) {
            int cbval1 = logicalIndex;

            qheaderview_updatesection_callback(this, cbval1);
        } else {
            QHeaderView::updateSection(logicalIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void resizeSections() {
        if (qheaderview_resizesections2_isbase) {
            qheaderview_resizesections2_isbase = false;
            QHeaderView::resizeSections();
        } else if (qheaderview_resizesections2_callback != nullptr) {
            qheaderview_resizesections2_callback();
        } else {
            QHeaderView::resizeSections();
        }
    }

    // Virtual method for C ABI access and custom callback
    void sectionsInserted(const QModelIndex& parent, int logicalFirst, int logicalLast) {
        if (qheaderview_sectionsinserted_isbase) {
            qheaderview_sectionsinserted_isbase = false;
            QHeaderView::sectionsInserted(parent, logicalFirst, logicalLast);
        } else if (qheaderview_sectionsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = logicalFirst;
            int cbval3 = logicalLast;

            qheaderview_sectionsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            QHeaderView::sectionsInserted(parent, logicalFirst, logicalLast);
        }
    }

    // Virtual method for C ABI access and custom callback
    void sectionsAboutToBeRemoved(const QModelIndex& parent, int logicalFirst, int logicalLast) {
        if (qheaderview_sectionsabouttoberemoved_isbase) {
            qheaderview_sectionsabouttoberemoved_isbase = false;
            QHeaderView::sectionsAboutToBeRemoved(parent, logicalFirst, logicalLast);
        } else if (qheaderview_sectionsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = logicalFirst;
            int cbval3 = logicalLast;

            qheaderview_sectionsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QHeaderView::sectionsAboutToBeRemoved(parent, logicalFirst, logicalLast);
        }
    }

    // Virtual method for C ABI access and custom callback
    void initialize() {
        if (qheaderview_initialize_isbase) {
            qheaderview_initialize_isbase = false;
            QHeaderView::initialize();
        } else if (qheaderview_initialize_callback != nullptr) {
            qheaderview_initialize_callback();
        } else {
            QHeaderView::initialize();
        }
    }

    // Virtual method for C ABI access and custom callback
    void initializeSections() {
        if (qheaderview_initializesections_isbase) {
            qheaderview_initializesections_isbase = false;
            QHeaderView::initializeSections();
        } else if (qheaderview_initializesections_callback != nullptr) {
            qheaderview_initializesections_callback();
        } else {
            QHeaderView::initializeSections();
        }
    }

    // Virtual method for C ABI access and custom callback
    void initializeSections(int start, int end) {
        if (qheaderview_initializesections2_isbase) {
            qheaderview_initializesections2_isbase = false;
            QHeaderView::initializeSections(start, end);
        } else if (qheaderview_initializesections2_callback != nullptr) {
            int cbval1 = start;
            int cbval2 = end;

            qheaderview_initializesections2_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::initializeSections(start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qheaderview_state_isbase) {
            qheaderview_state_isbase = false;
            return QHeaderView::state();
        } else if (qheaderview_state_callback != nullptr) {
            int callback_ret = qheaderview_state_callback();
            return static_cast<VirtualQHeaderView::State>(callback_ret);
        } else {
            return QHeaderView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qheaderview_setstate_isbase) {
            qheaderview_setstate_isbase = false;
            QHeaderView::setState(state);
        } else if (qheaderview_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qheaderview_setstate_callback(this, cbval1);
        } else {
            QHeaderView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qheaderview_scheduledelayeditemslayout_isbase) {
            qheaderview_scheduledelayeditemslayout_isbase = false;
            QHeaderView::scheduleDelayedItemsLayout();
        } else if (qheaderview_scheduledelayeditemslayout_callback != nullptr) {
            qheaderview_scheduledelayeditemslayout_callback();
        } else {
            QHeaderView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qheaderview_executedelayeditemslayout_isbase) {
            qheaderview_executedelayeditemslayout_isbase = false;
            QHeaderView::executeDelayedItemsLayout();
        } else if (qheaderview_executedelayeditemslayout_callback != nullptr) {
            qheaderview_executedelayeditemslayout_callback();
        } else {
            QHeaderView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qheaderview_setdirtyregion_isbase) {
            qheaderview_setdirtyregion_isbase = false;
            QHeaderView::setDirtyRegion(region);
        } else if (qheaderview_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            qheaderview_setdirtyregion_callback(this, cbval1);
        } else {
            QHeaderView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qheaderview_scrolldirtyregion_isbase) {
            qheaderview_scrolldirtyregion_isbase = false;
            QHeaderView::scrollDirtyRegion(dx, dy);
        } else if (qheaderview_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qheaderview_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            QHeaderView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qheaderview_dirtyregionoffset_isbase) {
            qheaderview_dirtyregionoffset_isbase = false;
            return QHeaderView::dirtyRegionOffset();
        } else if (qheaderview_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = qheaderview_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return QHeaderView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qheaderview_startautoscroll_isbase) {
            qheaderview_startautoscroll_isbase = false;
            QHeaderView::startAutoScroll();
        } else if (qheaderview_startautoscroll_callback != nullptr) {
            qheaderview_startautoscroll_callback();
        } else {
            QHeaderView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qheaderview_stopautoscroll_isbase) {
            qheaderview_stopautoscroll_isbase = false;
            QHeaderView::stopAutoScroll();
        } else if (qheaderview_stopautoscroll_callback != nullptr) {
            qheaderview_stopautoscroll_callback();
        } else {
            QHeaderView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qheaderview_doautoscroll_isbase) {
            qheaderview_doautoscroll_isbase = false;
            QHeaderView::doAutoScroll();
        } else if (qheaderview_doautoscroll_callback != nullptr) {
            qheaderview_doautoscroll_callback();
        } else {
            QHeaderView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qheaderview_dropindicatorposition_isbase) {
            qheaderview_dropindicatorposition_isbase = false;
            return QHeaderView::dropIndicatorPosition();
        } else if (qheaderview_dropindicatorposition_callback != nullptr) {
            int callback_ret = qheaderview_dropindicatorposition_callback();
            return static_cast<VirtualQHeaderView::DropIndicatorPosition>(callback_ret);
        } else {
            return QHeaderView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qheaderview_setviewportmargins_isbase) {
            qheaderview_setviewportmargins_isbase = false;
            QHeaderView::setViewportMargins(left, top, right, bottom);
        } else if (qheaderview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qheaderview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QHeaderView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qheaderview_viewportmargins_isbase) {
            qheaderview_viewportmargins_isbase = false;
            return QHeaderView::viewportMargins();
        } else if (qheaderview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qheaderview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QHeaderView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qheaderview_drawframe_isbase) {
            qheaderview_drawframe_isbase = false;
            QHeaderView::drawFrame(param1);
        } else if (qheaderview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qheaderview_drawframe_callback(this, cbval1);
        } else {
            QHeaderView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qheaderview_updatemicrofocus_isbase) {
            qheaderview_updatemicrofocus_isbase = false;
            QHeaderView::updateMicroFocus();
        } else if (qheaderview_updatemicrofocus_callback != nullptr) {
            qheaderview_updatemicrofocus_callback();
        } else {
            QHeaderView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qheaderview_create_isbase) {
            qheaderview_create_isbase = false;
            QHeaderView::create();
        } else if (qheaderview_create_callback != nullptr) {
            qheaderview_create_callback();
        } else {
            QHeaderView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qheaderview_destroy_isbase) {
            qheaderview_destroy_isbase = false;
            QHeaderView::destroy();
        } else if (qheaderview_destroy_callback != nullptr) {
            qheaderview_destroy_callback();
        } else {
            QHeaderView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qheaderview_focusnextchild_isbase) {
            qheaderview_focusnextchild_isbase = false;
            return QHeaderView::focusNextChild();
        } else if (qheaderview_focusnextchild_callback != nullptr) {
            bool callback_ret = qheaderview_focusnextchild_callback();
            return callback_ret;
        } else {
            return QHeaderView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qheaderview_focuspreviouschild_isbase) {
            qheaderview_focuspreviouschild_isbase = false;
            return QHeaderView::focusPreviousChild();
        } else if (qheaderview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qheaderview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QHeaderView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qheaderview_sender_isbase) {
            qheaderview_sender_isbase = false;
            return QHeaderView::sender();
        } else if (qheaderview_sender_callback != nullptr) {
            QObject* callback_ret = qheaderview_sender_callback();
            return callback_ret;
        } else {
            return QHeaderView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qheaderview_sendersignalindex_isbase) {
            qheaderview_sendersignalindex_isbase = false;
            return QHeaderView::senderSignalIndex();
        } else if (qheaderview_sendersignalindex_callback != nullptr) {
            int callback_ret = qheaderview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qheaderview_receivers_isbase) {
            qheaderview_receivers_isbase = false;
            return QHeaderView::receivers(signal);
        } else if (qheaderview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qheaderview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHeaderView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qheaderview_issignalconnected_isbase) {
            qheaderview_issignalconnected_isbase = false;
            return QHeaderView::isSignalConnected(signal);
        } else if (qheaderview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qheaderview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHeaderView::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qheaderview_getdecodedmetricf_isbase) {
            qheaderview_getdecodedmetricf_isbase = false;
            return QHeaderView::getDecodedMetricF(metricA, metricB);
        } else if (qheaderview_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qheaderview_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QHeaderView::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QHeaderView_CurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old);
    friend void QHeaderView_QBaseCurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old);
    friend bool QHeaderView_Event(QHeaderView* self, QEvent* e);
    friend bool QHeaderView_QBaseEvent(QHeaderView* self, QEvent* e);
    friend void QHeaderView_PaintEvent(QHeaderView* self, QPaintEvent* e);
    friend void QHeaderView_QBasePaintEvent(QHeaderView* self, QPaintEvent* e);
    friend void QHeaderView_MousePressEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_QBaseMousePressEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_MouseMoveEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_QBaseMouseMoveEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_MouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_QBaseMouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_MouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_QBaseMouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
    friend bool QHeaderView_ViewportEvent(QHeaderView* self, QEvent* e);
    friend bool QHeaderView_QBaseViewportEvent(QHeaderView* self, QEvent* e);
    friend void QHeaderView_PaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex);
    friend void QHeaderView_QBasePaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex);
    friend QSize* QHeaderView_SectionSizeFromContents(const QHeaderView* self, int logicalIndex);
    friend QSize* QHeaderView_QBaseSectionSizeFromContents(const QHeaderView* self, int logicalIndex);
    friend int QHeaderView_HorizontalOffset(const QHeaderView* self);
    friend int QHeaderView_QBaseHorizontalOffset(const QHeaderView* self);
    friend int QHeaderView_VerticalOffset(const QHeaderView* self);
    friend int QHeaderView_QBaseVerticalOffset(const QHeaderView* self);
    friend void QHeaderView_UpdateGeometries(QHeaderView* self);
    friend void QHeaderView_QBaseUpdateGeometries(QHeaderView* self);
    friend void QHeaderView_ScrollContentsBy(QHeaderView* self, int dx, int dy);
    friend void QHeaderView_QBaseScrollContentsBy(QHeaderView* self, int dx, int dy);
    friend void QHeaderView_DataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QHeaderView_QBaseDataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QHeaderView_RowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end);
    friend void QHeaderView_QBaseRowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end);
    friend QRect* QHeaderView_VisualRect(const QHeaderView* self, const QModelIndex* index);
    friend QRect* QHeaderView_QBaseVisualRect(const QHeaderView* self, const QModelIndex* index);
    friend void QHeaderView_ScrollTo(QHeaderView* self, const QModelIndex* index, int hint);
    friend void QHeaderView_QBaseScrollTo(QHeaderView* self, const QModelIndex* index, int hint);
    friend QModelIndex* QHeaderView_IndexAt(const QHeaderView* self, const QPoint* p);
    friend QModelIndex* QHeaderView_QBaseIndexAt(const QHeaderView* self, const QPoint* p);
    friend bool QHeaderView_IsIndexHidden(const QHeaderView* self, const QModelIndex* index);
    friend bool QHeaderView_QBaseIsIndexHidden(const QHeaderView* self, const QModelIndex* index);
    friend QModelIndex* QHeaderView_MoveCursor(QHeaderView* self, int param1, int param2);
    friend QModelIndex* QHeaderView_QBaseMoveCursor(QHeaderView* self, int param1, int param2);
    friend void QHeaderView_SetSelection(QHeaderView* self, const QRect* rect, int flags);
    friend void QHeaderView_QBaseSetSelection(QHeaderView* self, const QRect* rect, int flags);
    friend QRegion* QHeaderView_VisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection);
    friend QRegion* QHeaderView_QBaseVisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection);
    friend void QHeaderView_InitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
    friend void QHeaderView_QBaseInitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
    friend void QHeaderView_InitStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
    friend void QHeaderView_QBaseInitStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
    friend void QHeaderView_RowsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int start, int end);
    friend void QHeaderView_QBaseRowsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int start, int end);
    friend void QHeaderView_SelectionChanged(QHeaderView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QHeaderView_QBaseSelectionChanged(QHeaderView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QHeaderView_UpdateEditorData(QHeaderView* self);
    friend void QHeaderView_QBaseUpdateEditorData(QHeaderView* self);
    friend void QHeaderView_UpdateEditorGeometries(QHeaderView* self);
    friend void QHeaderView_QBaseUpdateEditorGeometries(QHeaderView* self);
    friend void QHeaderView_VerticalScrollbarAction(QHeaderView* self, int action);
    friend void QHeaderView_QBaseVerticalScrollbarAction(QHeaderView* self, int action);
    friend void QHeaderView_HorizontalScrollbarAction(QHeaderView* self, int action);
    friend void QHeaderView_QBaseHorizontalScrollbarAction(QHeaderView* self, int action);
    friend void QHeaderView_VerticalScrollbarValueChanged(QHeaderView* self, int value);
    friend void QHeaderView_QBaseVerticalScrollbarValueChanged(QHeaderView* self, int value);
    friend void QHeaderView_HorizontalScrollbarValueChanged(QHeaderView* self, int value);
    friend void QHeaderView_QBaseHorizontalScrollbarValueChanged(QHeaderView* self, int value);
    friend void QHeaderView_CloseEditor(QHeaderView* self, QWidget* editor, int hint);
    friend void QHeaderView_QBaseCloseEditor(QHeaderView* self, QWidget* editor, int hint);
    friend void QHeaderView_CommitData(QHeaderView* self, QWidget* editor);
    friend void QHeaderView_QBaseCommitData(QHeaderView* self, QWidget* editor);
    friend void QHeaderView_EditorDestroyed(QHeaderView* self, QObject* editor);
    friend void QHeaderView_QBaseEditorDestroyed(QHeaderView* self, QObject* editor);
    friend libqt_list /* of QModelIndex* */ QHeaderView_SelectedIndexes(const QHeaderView* self);
    friend libqt_list /* of QModelIndex* */ QHeaderView_QBaseSelectedIndexes(const QHeaderView* self);
    friend bool QHeaderView_Edit2(QHeaderView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QHeaderView_QBaseEdit2(QHeaderView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QHeaderView_SelectionCommand(const QHeaderView* self, const QModelIndex* index, const QEvent* event);
    friend int QHeaderView_QBaseSelectionCommand(const QHeaderView* self, const QModelIndex* index, const QEvent* event);
    friend void QHeaderView_StartDrag(QHeaderView* self, int supportedActions);
    friend void QHeaderView_QBaseStartDrag(QHeaderView* self, int supportedActions);
    friend void QHeaderView_InitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option);
    friend void QHeaderView_QBaseInitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option);
    friend bool QHeaderView_FocusNextPrevChild(QHeaderView* self, bool next);
    friend bool QHeaderView_QBaseFocusNextPrevChild(QHeaderView* self, bool next);
    friend void QHeaderView_DragEnterEvent(QHeaderView* self, QDragEnterEvent* event);
    friend void QHeaderView_QBaseDragEnterEvent(QHeaderView* self, QDragEnterEvent* event);
    friend void QHeaderView_DragMoveEvent(QHeaderView* self, QDragMoveEvent* event);
    friend void QHeaderView_QBaseDragMoveEvent(QHeaderView* self, QDragMoveEvent* event);
    friend void QHeaderView_DragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event);
    friend void QHeaderView_QBaseDragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event);
    friend void QHeaderView_DropEvent(QHeaderView* self, QDropEvent* event);
    friend void QHeaderView_QBaseDropEvent(QHeaderView* self, QDropEvent* event);
    friend void QHeaderView_FocusInEvent(QHeaderView* self, QFocusEvent* event);
    friend void QHeaderView_QBaseFocusInEvent(QHeaderView* self, QFocusEvent* event);
    friend void QHeaderView_FocusOutEvent(QHeaderView* self, QFocusEvent* event);
    friend void QHeaderView_QBaseFocusOutEvent(QHeaderView* self, QFocusEvent* event);
    friend void QHeaderView_KeyPressEvent(QHeaderView* self, QKeyEvent* event);
    friend void QHeaderView_QBaseKeyPressEvent(QHeaderView* self, QKeyEvent* event);
    friend void QHeaderView_ResizeEvent(QHeaderView* self, QResizeEvent* event);
    friend void QHeaderView_QBaseResizeEvent(QHeaderView* self, QResizeEvent* event);
    friend void QHeaderView_TimerEvent(QHeaderView* self, QTimerEvent* event);
    friend void QHeaderView_QBaseTimerEvent(QHeaderView* self, QTimerEvent* event);
    friend void QHeaderView_InputMethodEvent(QHeaderView* self, QInputMethodEvent* event);
    friend void QHeaderView_QBaseInputMethodEvent(QHeaderView* self, QInputMethodEvent* event);
    friend bool QHeaderView_EventFilter(QHeaderView* self, QObject* object, QEvent* event);
    friend bool QHeaderView_QBaseEventFilter(QHeaderView* self, QObject* object, QEvent* event);
    friend QSize* QHeaderView_ViewportSizeHint(const QHeaderView* self);
    friend QSize* QHeaderView_QBaseViewportSizeHint(const QHeaderView* self);
    friend void QHeaderView_WheelEvent(QHeaderView* self, QWheelEvent* param1);
    friend void QHeaderView_QBaseWheelEvent(QHeaderView* self, QWheelEvent* param1);
    friend void QHeaderView_ContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1);
    friend void QHeaderView_QBaseContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1);
    friend void QHeaderView_ChangeEvent(QHeaderView* self, QEvent* param1);
    friend void QHeaderView_QBaseChangeEvent(QHeaderView* self, QEvent* param1);
    friend void QHeaderView_KeyReleaseEvent(QHeaderView* self, QKeyEvent* event);
    friend void QHeaderView_QBaseKeyReleaseEvent(QHeaderView* self, QKeyEvent* event);
    friend void QHeaderView_EnterEvent(QHeaderView* self, QEnterEvent* event);
    friend void QHeaderView_QBaseEnterEvent(QHeaderView* self, QEnterEvent* event);
    friend void QHeaderView_LeaveEvent(QHeaderView* self, QEvent* event);
    friend void QHeaderView_QBaseLeaveEvent(QHeaderView* self, QEvent* event);
    friend void QHeaderView_MoveEvent(QHeaderView* self, QMoveEvent* event);
    friend void QHeaderView_QBaseMoveEvent(QHeaderView* self, QMoveEvent* event);
    friend void QHeaderView_CloseEvent(QHeaderView* self, QCloseEvent* event);
    friend void QHeaderView_QBaseCloseEvent(QHeaderView* self, QCloseEvent* event);
    friend void QHeaderView_TabletEvent(QHeaderView* self, QTabletEvent* event);
    friend void QHeaderView_QBaseTabletEvent(QHeaderView* self, QTabletEvent* event);
    friend void QHeaderView_ActionEvent(QHeaderView* self, QActionEvent* event);
    friend void QHeaderView_QBaseActionEvent(QHeaderView* self, QActionEvent* event);
    friend void QHeaderView_ShowEvent(QHeaderView* self, QShowEvent* event);
    friend void QHeaderView_QBaseShowEvent(QHeaderView* self, QShowEvent* event);
    friend void QHeaderView_HideEvent(QHeaderView* self, QHideEvent* event);
    friend void QHeaderView_QBaseHideEvent(QHeaderView* self, QHideEvent* event);
    friend bool QHeaderView_NativeEvent(QHeaderView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QHeaderView_QBaseNativeEvent(QHeaderView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QHeaderView_Metric(const QHeaderView* self, int param1);
    friend int QHeaderView_QBaseMetric(const QHeaderView* self, int param1);
    friend void QHeaderView_InitPainter(const QHeaderView* self, QPainter* painter);
    friend void QHeaderView_QBaseInitPainter(const QHeaderView* self, QPainter* painter);
    friend QPaintDevice* QHeaderView_Redirected(const QHeaderView* self, QPoint* offset);
    friend QPaintDevice* QHeaderView_QBaseRedirected(const QHeaderView* self, QPoint* offset);
    friend QPainter* QHeaderView_SharedPainter(const QHeaderView* self);
    friend QPainter* QHeaderView_QBaseSharedPainter(const QHeaderView* self);
    friend void QHeaderView_ChildEvent(QHeaderView* self, QChildEvent* event);
    friend void QHeaderView_QBaseChildEvent(QHeaderView* self, QChildEvent* event);
    friend void QHeaderView_CustomEvent(QHeaderView* self, QEvent* event);
    friend void QHeaderView_QBaseCustomEvent(QHeaderView* self, QEvent* event);
    friend void QHeaderView_ConnectNotify(QHeaderView* self, const QMetaMethod* signal);
    friend void QHeaderView_QBaseConnectNotify(QHeaderView* self, const QMetaMethod* signal);
    friend void QHeaderView_DisconnectNotify(QHeaderView* self, const QMetaMethod* signal);
    friend void QHeaderView_QBaseDisconnectNotify(QHeaderView* self, const QMetaMethod* signal);
    friend void QHeaderView_UpdateSection(QHeaderView* self, int logicalIndex);
    friend void QHeaderView_QBaseUpdateSection(QHeaderView* self, int logicalIndex);
    friend void QHeaderView_ResizeSections2(QHeaderView* self);
    friend void QHeaderView_QBaseResizeSections2(QHeaderView* self);
    friend void QHeaderView_SectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
    friend void QHeaderView_QBaseSectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
    friend void QHeaderView_SectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
    friend void QHeaderView_QBaseSectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
    friend void QHeaderView_Initialize(QHeaderView* self);
    friend void QHeaderView_QBaseInitialize(QHeaderView* self);
    friend void QHeaderView_InitializeSections(QHeaderView* self);
    friend void QHeaderView_QBaseInitializeSections(QHeaderView* self);
    friend void QHeaderView_InitializeSections2(QHeaderView* self, int start, int end);
    friend void QHeaderView_QBaseInitializeSections2(QHeaderView* self, int start, int end);
    friend int QHeaderView_State(const QHeaderView* self);
    friend int QHeaderView_QBaseState(const QHeaderView* self);
    friend void QHeaderView_SetState(QHeaderView* self, int state);
    friend void QHeaderView_QBaseSetState(QHeaderView* self, int state);
    friend void QHeaderView_ScheduleDelayedItemsLayout(QHeaderView* self);
    friend void QHeaderView_QBaseScheduleDelayedItemsLayout(QHeaderView* self);
    friend void QHeaderView_ExecuteDelayedItemsLayout(QHeaderView* self);
    friend void QHeaderView_QBaseExecuteDelayedItemsLayout(QHeaderView* self);
    friend void QHeaderView_SetDirtyRegion(QHeaderView* self, const QRegion* region);
    friend void QHeaderView_QBaseSetDirtyRegion(QHeaderView* self, const QRegion* region);
    friend void QHeaderView_ScrollDirtyRegion(QHeaderView* self, int dx, int dy);
    friend void QHeaderView_QBaseScrollDirtyRegion(QHeaderView* self, int dx, int dy);
    friend QPoint* QHeaderView_DirtyRegionOffset(const QHeaderView* self);
    friend QPoint* QHeaderView_QBaseDirtyRegionOffset(const QHeaderView* self);
    friend void QHeaderView_StartAutoScroll(QHeaderView* self);
    friend void QHeaderView_QBaseStartAutoScroll(QHeaderView* self);
    friend void QHeaderView_StopAutoScroll(QHeaderView* self);
    friend void QHeaderView_QBaseStopAutoScroll(QHeaderView* self);
    friend void QHeaderView_DoAutoScroll(QHeaderView* self);
    friend void QHeaderView_QBaseDoAutoScroll(QHeaderView* self);
    friend int QHeaderView_DropIndicatorPosition(const QHeaderView* self);
    friend int QHeaderView_QBaseDropIndicatorPosition(const QHeaderView* self);
    friend void QHeaderView_SetViewportMargins(QHeaderView* self, int left, int top, int right, int bottom);
    friend void QHeaderView_QBaseSetViewportMargins(QHeaderView* self, int left, int top, int right, int bottom);
    friend QMargins* QHeaderView_ViewportMargins(const QHeaderView* self);
    friend QMargins* QHeaderView_QBaseViewportMargins(const QHeaderView* self);
    friend void QHeaderView_DrawFrame(QHeaderView* self, QPainter* param1);
    friend void QHeaderView_QBaseDrawFrame(QHeaderView* self, QPainter* param1);
    friend void QHeaderView_UpdateMicroFocus(QHeaderView* self);
    friend void QHeaderView_QBaseUpdateMicroFocus(QHeaderView* self);
    friend void QHeaderView_Create(QHeaderView* self);
    friend void QHeaderView_QBaseCreate(QHeaderView* self);
    friend void QHeaderView_Destroy(QHeaderView* self);
    friend void QHeaderView_QBaseDestroy(QHeaderView* self);
    friend bool QHeaderView_FocusNextChild(QHeaderView* self);
    friend bool QHeaderView_QBaseFocusNextChild(QHeaderView* self);
    friend bool QHeaderView_FocusPreviousChild(QHeaderView* self);
    friend bool QHeaderView_QBaseFocusPreviousChild(QHeaderView* self);
    friend QObject* QHeaderView_Sender(const QHeaderView* self);
    friend QObject* QHeaderView_QBaseSender(const QHeaderView* self);
    friend int QHeaderView_SenderSignalIndex(const QHeaderView* self);
    friend int QHeaderView_QBaseSenderSignalIndex(const QHeaderView* self);
    friend int QHeaderView_Receivers(const QHeaderView* self, const char* signal);
    friend int QHeaderView_QBaseReceivers(const QHeaderView* self, const char* signal);
    friend bool QHeaderView_IsSignalConnected(const QHeaderView* self, const QMetaMethod* signal);
    friend bool QHeaderView_QBaseIsSignalConnected(const QHeaderView* self, const QMetaMethod* signal);
    friend double QHeaderView_GetDecodedMetricF(const QHeaderView* self, int metricA, int metricB);
    friend double QHeaderView_QBaseGetDecodedMetricF(const QHeaderView* self, int metricA, int metricB);
};

#endif
