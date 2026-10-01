#pragma once
#ifndef EXTRAS_KCOMPLETION_LIBKCOMPLETIONBOX_HXX
#define EXTRAS_KCOMPLETION_LIBKCOMPLETIONBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompletionBox
class VirtualKCompletionBox final : public KCompletionBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using KCompletionBox_MetaObject_Callback = QMetaObject* (*)(const KCompletionBox*);
    using KCompletionBox_Metacast_Callback = void* (*)(KCompletionBox*, const char*);
    using KCompletionBox_Metacall_Callback = int (*)(KCompletionBox*, int, int, void**);
    using KCompletionBox_SizeHint_Callback = QSize* (*)(const KCompletionBox*);
    using KCompletionBox_Popup_Callback = void (*)(KCompletionBox*);
    using KCompletionBox_SetVisible_Callback = void (*)(KCompletionBox*, bool);
    using KCompletionBox_EventFilter_Callback = bool (*)(KCompletionBox*, QObject*, QEvent*);
    using KCompletionBox_GlobalPositionHint_Callback = QPoint* (*)(const KCompletionBox*);
    using KCompletionBox_SlotActivated_Callback = void (*)(KCompletionBox*, QListWidgetItem*);
    using KCompletionBox_SetSelectionModel_Callback = void (*)(KCompletionBox*, QItemSelectionModel*);
    using KCompletionBox_DropEvent_Callback = void (*)(KCompletionBox*, QDropEvent*);
    using KCompletionBox_Event_Callback = bool (*)(KCompletionBox*, QEvent*);
    using KCompletionBox_MimeTypes_Callback = const char** (*)(const KCompletionBox*);
    using KCompletionBox_MimeData_Callback = QMimeData* (*)(const KCompletionBox*, libqt_list /* of QListWidgetItem* */);
    using KCompletionBox_DropMimeData_Callback = bool (*)(KCompletionBox*, int, QMimeData*, int);
    using KCompletionBox_SupportedDropActions_Callback = int (*)(const KCompletionBox*);
    using KCompletionBox_VisualRect_Callback = QRect* (*)(const KCompletionBox*, QModelIndex*);
    using KCompletionBox_ScrollTo_Callback = void (*)(KCompletionBox*, QModelIndex*, int);
    using KCompletionBox_IndexAt_Callback = QModelIndex* (*)(const KCompletionBox*, QPoint*);
    using KCompletionBox_DoItemsLayout_Callback = void (*)(KCompletionBox*);
    using KCompletionBox_Reset_Callback = void (*)(KCompletionBox*);
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
    using KCompletionBox_HorizontalOffset_Callback = int (*)(const KCompletionBox*);
    using KCompletionBox_VerticalOffset_Callback = int (*)(const KCompletionBox*);
    using KCompletionBox_MoveCursor_Callback = QModelIndex* (*)(KCompletionBox*, int, int);
    using KCompletionBox_SetSelection_Callback = void (*)(KCompletionBox*, QRect*, int);
    using KCompletionBox_VisualRegionForSelection_Callback = QRegion* (*)(const KCompletionBox*, QItemSelection*);
    using KCompletionBox_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const KCompletionBox*);
    using KCompletionBox_UpdateGeometries_Callback = void (*)(KCompletionBox*);
    using KCompletionBox_IsIndexHidden_Callback = bool (*)(const KCompletionBox*, QModelIndex*);
    using KCompletionBox_SelectionChanged_Callback = void (*)(KCompletionBox*, QItemSelection*, QItemSelection*);
    using KCompletionBox_CurrentChanged_Callback = void (*)(KCompletionBox*, QModelIndex*, QModelIndex*);
    using KCompletionBox_ViewportSizeHint_Callback = QSize* (*)(const KCompletionBox*);
    using KCompletionBox_KeyboardSearch_Callback = void (*)(KCompletionBox*, const char*);
    using KCompletionBox_SizeHintForRow_Callback = int (*)(const KCompletionBox*, int);
    using KCompletionBox_SizeHintForColumn_Callback = int (*)(const KCompletionBox*, int);
    using KCompletionBox_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const KCompletionBox*, QModelIndex*);
    using KCompletionBox_InputMethodQuery_Callback = QVariant* (*)(const KCompletionBox*, int);
    using KCompletionBox_SelectAll_Callback = void (*)(KCompletionBox*);
    using KCompletionBox_UpdateEditorData_Callback = void (*)(KCompletionBox*);
    using KCompletionBox_UpdateEditorGeometries_Callback = void (*)(KCompletionBox*);
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
    using KCompletionBox_MinimumSizeHint_Callback = QSize* (*)(const KCompletionBox*);
    using KCompletionBox_SetupViewport_Callback = void (*)(KCompletionBox*, QWidget*);
    using KCompletionBox_ContextMenuEvent_Callback = void (*)(KCompletionBox*, QContextMenuEvent*);
    using KCompletionBox_ChangeEvent_Callback = void (*)(KCompletionBox*, QEvent*);
    using KCompletionBox_InitStyleOption_Callback = void (*)(const KCompletionBox*, QStyleOptionFrame*);
    using KCompletionBox_DevType_Callback = int (*)(const KCompletionBox*);
    using KCompletionBox_HeightForWidth_Callback = int (*)(const KCompletionBox*, int);
    using KCompletionBox_HasHeightForWidth_Callback = bool (*)(const KCompletionBox*);
    using KCompletionBox_PaintEngine_Callback = QPaintEngine* (*)(const KCompletionBox*);
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
    using KCompletionBox_SharedPainter_Callback = QPainter* (*)(const KCompletionBox*);
    using KCompletionBox_ChildEvent_Callback = void (*)(KCompletionBox*, QChildEvent*);
    using KCompletionBox_CustomEvent_Callback = void (*)(KCompletionBox*, QEvent*);
    using KCompletionBox_ConnectNotify_Callback = void (*)(KCompletionBox*, QMetaMethod*);
    using KCompletionBox_DisconnectNotify_Callback = void (*)(KCompletionBox*, QMetaMethod*);
    using KCompletionBox::calculateGeometry;
    using KCompletionBox::contentsSize;
    using KCompletionBox::create;
    using KCompletionBox::destroy;
    using KCompletionBox::dirtyRegionOffset;
    using KCompletionBox::doAutoScroll;
    using KCompletionBox::drawFrame;
    using KCompletionBox::dropIndicatorPosition;
    using KCompletionBox::executeDelayedItemsLayout;
    using KCompletionBox::focusNextChild;
    using KCompletionBox::focusPreviousChild;
    using KCompletionBox::getDecodedMetricF;
    using KCompletionBox::isSignalConnected;
    using KCompletionBox::receivers;
    using KCompletionBox::rectForIndex;
    using KCompletionBox::resizeAndReposition;
    using KCompletionBox::resizeContents;
    using KCompletionBox::scheduleDelayedItemsLayout;
    using KCompletionBox::scrollDirtyRegion;
    using KCompletionBox::sender;
    using KCompletionBox::senderSignalIndex;
    using KCompletionBox::setDirtyRegion;
    using KCompletionBox::setPositionForIndex;
    using KCompletionBox::setState;
    using KCompletionBox::setViewportMargins;
    using KCompletionBox::startAutoScroll;
    using KCompletionBox::state;
    using KCompletionBox::stopAutoScroll;
    using KCompletionBox::updateMicroFocus;
    using KCompletionBox::viewportMargins;

    // Instance callback storage
    KCompletionBox_MetaObject_Callback kcompletionbox_metaobject_callback = nullptr;
    KCompletionBox_Metacast_Callback kcompletionbox_metacast_callback = nullptr;
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

    // Access struct
    struct Base : KCompletionBox {
        using KCompletionBox::actionEvent;
        using KCompletionBox::changeEvent;
        using KCompletionBox::childEvent;
        using KCompletionBox::closeEditor;
        using KCompletionBox::closeEvent;
        using KCompletionBox::commitData;
        using KCompletionBox::connectNotify;
        using KCompletionBox::contextMenuEvent;
        using KCompletionBox::currentChanged;
        using KCompletionBox::customEvent;
        using KCompletionBox::dataChanged;
        using KCompletionBox::disconnectNotify;
        using KCompletionBox::dragEnterEvent;
        using KCompletionBox::dragLeaveEvent;
        using KCompletionBox::dragMoveEvent;
        using KCompletionBox::dropEvent;
        using KCompletionBox::dropMimeData;
        using KCompletionBox::edit;
        using KCompletionBox::editorDestroyed;
        using KCompletionBox::enterEvent;
        using KCompletionBox::event;
        using KCompletionBox::eventFilter;
        using KCompletionBox::focusInEvent;
        using KCompletionBox::focusNextPrevChild;
        using KCompletionBox::focusOutEvent;
        using KCompletionBox::globalPositionHint;
        using KCompletionBox::hideEvent;
        using KCompletionBox::horizontalOffset;
        using KCompletionBox::horizontalScrollbarAction;
        using KCompletionBox::horizontalScrollbarValueChanged;
        using KCompletionBox::initPainter;
        using KCompletionBox::initStyleOption;
        using KCompletionBox::initViewItemOption;
        using KCompletionBox::inputMethodEvent;
        using KCompletionBox::isIndexHidden;
        using KCompletionBox::keyPressEvent;
        using KCompletionBox::keyReleaseEvent;
        using KCompletionBox::leaveEvent;
        using KCompletionBox::metric;
        using KCompletionBox::mimeData;
        using KCompletionBox::mimeTypes;
        using KCompletionBox::mouseDoubleClickEvent;
        using KCompletionBox::mouseMoveEvent;
        using KCompletionBox::mousePressEvent;
        using KCompletionBox::mouseReleaseEvent;
        using KCompletionBox::moveCursor;
        using KCompletionBox::moveEvent;
        using KCompletionBox::nativeEvent;
        using KCompletionBox::paintEvent;
        using KCompletionBox::redirected;
        using KCompletionBox::resizeEvent;
        using KCompletionBox::rowsAboutToBeRemoved;
        using KCompletionBox::rowsInserted;
        using KCompletionBox::scrollContentsBy;
        using KCompletionBox::selectedIndexes;
        using KCompletionBox::selectionChanged;
        using KCompletionBox::selectionCommand;
        using KCompletionBox::setSelection;
        using KCompletionBox::sharedPainter;
        using KCompletionBox::showEvent;
        using KCompletionBox::slotActivated;
        using KCompletionBox::startDrag;
        using KCompletionBox::supportedDropActions;
        using KCompletionBox::tabletEvent;
        using KCompletionBox::timerEvent;
        using KCompletionBox::updateEditorData;
        using KCompletionBox::updateEditorGeometries;
        using KCompletionBox::updateGeometries;
        using KCompletionBox::verticalOffset;
        using KCompletionBox::verticalScrollbarAction;
        using KCompletionBox::verticalScrollbarValueChanged;
        using KCompletionBox::viewportEvent;
        using KCompletionBox::viewportSizeHint;
        using KCompletionBox::visualRegionForSelection;
        using KCompletionBox::wheelEvent;
    };

    VirtualKCompletionBox(QWidget* parent) : KCompletionBox(parent) {};
    VirtualKCompletionBox() : KCompletionBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcompletionbox_metaobject_callback) {
            QMetaObject* callback_ret = kcompletionbox_metaobject_callback(this);
            return callback_ret;
        }
        return KCompletionBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcompletionbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcompletionbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletionBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcompletionbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcompletionbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCompletionBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcompletionbox_sizehint_callback) {
            QSize* callback_ret = kcompletionbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void popup() override {
        if (kcompletionbox_popup_callback) {
            kcompletionbox_popup_callback(this);
            return;
        }
        KCompletionBox::popup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcompletionbox_setvisible_callback) {
            bool cbval1 = visible;
            kcompletionbox_setvisible_callback(this, cbval1);
            return;
        }
        KCompletionBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kcompletionbox_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kcompletionbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCompletionBox::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPoint globalPositionHint() const override {
        if (kcompletionbox_globalpositionhint_callback) {
            QPoint* callback_ret = kcompletionbox_globalpositionhint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::globalPositionHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActivated(QListWidgetItem* param1) override {
        if (kcompletionbox_slotactivated_callback) {
            QListWidgetItem* cbval1 = param1;
            kcompletionbox_slotactivated_callback(this, cbval1);
            return;
        }
        KCompletionBox::slotActivated(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (kcompletionbox_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            kcompletionbox_setselectionmodel_callback(this, cbval1);
            return;
        }
        KCompletionBox::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcompletionbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcompletionbox_dropevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcompletionbox_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kcompletionbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletionBox::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcompletionbox_mimetypes_callback) {
            const char** callback_ret = kcompletionbox_mimetypes_callback(this);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return KCompletionBox::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QListWidgetItem*>& items) const override {
        if (kcompletionbox_mimedata_callback) {
            const QList<QListWidgetItem*>& items_ret = items;
            // Convert QList<> from C++ memory to manually-managed C memory
            QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * (items_ret.size())));
            for (qsizetype i = 0; i < items_ret.size(); ++i) {
                items_arr[i] = items_ret[i];
            }
            libqt_list items_out;
            items_out.len = items_ret.size();
            items_out.data = static_cast<void*>(items_arr);
            libqt_list /* of QListWidgetItem* */ cbval1 = items_out;
            QMimeData* callback_ret = kcompletionbox_mimedata_callback(this, cbval1);
            free(items_arr);
            return callback_ret;
        }
        return KCompletionBox::mimeData(items);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
        if (kcompletionbox_dropmimedata_callback) {
            int cbval1 = index;
            QMimeData* cbval2 = (QMimeData*)data;
            int cbval3 = static_cast<int>(action);
            bool callback_ret = kcompletionbox_dropmimedata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCompletionBox::dropMimeData(index, data, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcompletionbox_supporteddropactions_callback) {
            int callback_ret = kcompletionbox_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KCompletionBox::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kcompletionbox_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = kcompletionbox_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (kcompletionbox_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            kcompletionbox_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        KCompletionBox::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (kcompletionbox_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = kcompletionbox_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (kcompletionbox_doitemslayout_callback) {
            kcompletionbox_doitemslayout_callback(this);
            return;
        }
        KCompletionBox::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kcompletionbox_reset_callback) {
            kcompletionbox_reset_callback(this);
            return;
        }
        KCompletionBox::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (kcompletionbox_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            kcompletionbox_setrootindex_callback(this, cbval1);
            return;
        }
        KCompletionBox::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kcompletionbox_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            kcompletionbox_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        KCompletionBox::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (kcompletionbox_datachanged_callback) {
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
            kcompletionbox_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        KCompletionBox::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (kcompletionbox_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            kcompletionbox_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCompletionBox::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (kcompletionbox_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            kcompletionbox_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCompletionBox::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kcompletionbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kcompletionbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcompletionbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kcompletionbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcompletionbox_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            kcompletionbox_wheelevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kcompletionbox_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            kcompletionbox_timerevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kcompletionbox_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            kcompletionbox_resizeevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (kcompletionbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            kcompletionbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (kcompletionbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            kcompletionbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (kcompletionbox_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            kcompletionbox_startdrag_callback(this, cbval1);
            return;
        }
        KCompletionBox::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (kcompletionbox_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            kcompletionbox_initviewitemoption_callback(this, cbval1);
            return;
        }
        KCompletionBox::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kcompletionbox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            kcompletionbox_paintevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (kcompletionbox_horizontaloffset_callback) {
            int callback_ret = kcompletionbox_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCompletionBox::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (kcompletionbox_verticaloffset_callback) {
            int callback_ret = kcompletionbox_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCompletionBox::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (kcompletionbox_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = kcompletionbox_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (kcompletionbox_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            kcompletionbox_setselection_callback(this, cbval1, cbval2);
            return;
        }
        KCompletionBox::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (kcompletionbox_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = kcompletionbox_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (kcompletionbox_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = kcompletionbox_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KCompletionBox::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (kcompletionbox_updategeometries_callback) {
            kcompletionbox_updategeometries_callback(this);
            return;
        }
        KCompletionBox::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (kcompletionbox_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kcompletionbox_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletionBox::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (kcompletionbox_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            kcompletionbox_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        KCompletionBox::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (kcompletionbox_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            kcompletionbox_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        KCompletionBox::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kcompletionbox_viewportsizehint_callback) {
            QSize* callback_ret = kcompletionbox_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (kcompletionbox_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            kcompletionbox_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        KCompletionBox::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (kcompletionbox_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = kcompletionbox_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCompletionBox::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (kcompletionbox_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = kcompletionbox_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCompletionBox::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (kcompletionbox_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = kcompletionbox_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletionBox::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (kcompletionbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = kcompletionbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (kcompletionbox_selectall_callback) {
            kcompletionbox_selectall_callback(this);
            return;
        }
        KCompletionBox::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (kcompletionbox_updateeditordata_callback) {
            kcompletionbox_updateeditordata_callback(this);
            return;
        }
        KCompletionBox::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (kcompletionbox_updateeditorgeometries_callback) {
            kcompletionbox_updateeditorgeometries_callback(this);
            return;
        }
        KCompletionBox::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (kcompletionbox_verticalscrollbaraction_callback) {
            int cbval1 = action;
            kcompletionbox_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        KCompletionBox::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (kcompletionbox_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            kcompletionbox_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        KCompletionBox::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (kcompletionbox_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            kcompletionbox_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        KCompletionBox::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (kcompletionbox_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            kcompletionbox_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        KCompletionBox::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (kcompletionbox_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            kcompletionbox_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        KCompletionBox::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (kcompletionbox_commitdata_callback) {
            QWidget* cbval1 = editor;
            kcompletionbox_commitdata_callback(this, cbval1);
            return;
        }
        KCompletionBox::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (kcompletionbox_editordestroyed_callback) {
            QObject* cbval1 = editor;
            kcompletionbox_editordestroyed_callback(this, cbval1);
            return;
        }
        KCompletionBox::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (kcompletionbox_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = kcompletionbox_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCompletionBox::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (kcompletionbox_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = kcompletionbox_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return KCompletionBox::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcompletionbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcompletionbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletionBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (kcompletionbox_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcompletionbox_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletionBox::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcompletionbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kcompletionbox_mousepressevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcompletionbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcompletionbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcompletionbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcompletionbox_dragenterevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcompletionbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kcompletionbox_focusinevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcompletionbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kcompletionbox_focusoutevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcompletionbox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kcompletionbox_keypressevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (kcompletionbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            kcompletionbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcompletionbox_minimumsizehint_callback) {
            QSize* callback_ret = kcompletionbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCompletionBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kcompletionbox_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            kcompletionbox_setupviewport_callback(this, cbval1);
            return;
        }
        KCompletionBox::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kcompletionbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kcompletionbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcompletionbox_changeevent_callback) {
            QEvent* cbval1 = param1;
            kcompletionbox_changeevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kcompletionbox_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kcompletionbox_initstyleoption_callback(this, cbval1);
            return;
        }
        KCompletionBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcompletionbox_devtype_callback) {
            int callback_ret = kcompletionbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCompletionBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcompletionbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcompletionbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCompletionBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcompletionbox_hasheightforwidth_callback) {
            bool callback_ret = kcompletionbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KCompletionBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcompletionbox_paintengine_callback) {
            QPaintEngine* callback_ret = kcompletionbox_paintengine_callback(this);
            return callback_ret;
        }
        return KCompletionBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcompletionbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kcompletionbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcompletionbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcompletionbox_enterevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcompletionbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            kcompletionbox_leaveevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcompletionbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcompletionbox_moveevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcompletionbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcompletionbox_closeevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcompletionbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcompletionbox_tabletevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcompletionbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcompletionbox_actionevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcompletionbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcompletionbox_showevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcompletionbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcompletionbox_hideevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcompletionbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcompletionbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KCompletionBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcompletionbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcompletionbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCompletionBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcompletionbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcompletionbox_initpainter_callback(this, cbval1);
            return;
        }
        KCompletionBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcompletionbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcompletionbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletionBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcompletionbox_sharedpainter_callback) {
            QPainter* callback_ret = kcompletionbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KCompletionBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcompletionbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcompletionbox_childevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcompletionbox_customevent_callback) {
            QEvent* cbval1 = event;
            kcompletionbox_customevent_callback(this, cbval1);
            return;
        }
        KCompletionBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcompletionbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcompletionbox_connectnotify_callback(this, cbval1);
            return;
        }
        KCompletionBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcompletionbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcompletionbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCompletionBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KCompletionBox_SuperEventFilter(KCompletionBox* self, QObject* param1, QEvent* param2);
    friend QPoint* KCompletionBox_SuperGlobalPositionHint(const KCompletionBox* self);
    friend void KCompletionBox_SuperSlotActivated(KCompletionBox* self, QListWidgetItem* param1);
    friend void KCompletionBox_SuperDropEvent(KCompletionBox* self, QDropEvent* event);
    friend bool KCompletionBox_SuperEvent(KCompletionBox* self, QEvent* e);
    friend libqt_list /* of libqt_string */ KCompletionBox_SuperMimeTypes(const KCompletionBox* self);
    friend QMimeData* KCompletionBox_SuperMimeData(const KCompletionBox* self, const libqt_list /* of QListWidgetItem* */ items);
    friend bool KCompletionBox_SuperDropMimeData(KCompletionBox* self, int index, const QMimeData* data, int action);
    friend int KCompletionBox_SuperSupportedDropActions(const KCompletionBox* self);
    friend void KCompletionBox_SuperScrollContentsBy(KCompletionBox* self, int dx, int dy);
    friend void KCompletionBox_SuperDataChanged(KCompletionBox* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void KCompletionBox_SuperRowsInserted(KCompletionBox* self, const QModelIndex* parent, int start, int end);
    friend void KCompletionBox_SuperRowsAboutToBeRemoved(KCompletionBox* self, const QModelIndex* parent, int start, int end);
    friend void KCompletionBox_SuperMouseMoveEvent(KCompletionBox* self, QMouseEvent* e);
    friend void KCompletionBox_SuperMouseReleaseEvent(KCompletionBox* self, QMouseEvent* e);
    friend void KCompletionBox_SuperWheelEvent(KCompletionBox* self, QWheelEvent* e);
    friend void KCompletionBox_SuperTimerEvent(KCompletionBox* self, QTimerEvent* e);
    friend void KCompletionBox_SuperResizeEvent(KCompletionBox* self, QResizeEvent* e);
    friend void KCompletionBox_SuperDragMoveEvent(KCompletionBox* self, QDragMoveEvent* e);
    friend void KCompletionBox_SuperDragLeaveEvent(KCompletionBox* self, QDragLeaveEvent* e);
    friend void KCompletionBox_SuperStartDrag(KCompletionBox* self, int supportedActions);
    friend void KCompletionBox_SuperInitViewItemOption(const KCompletionBox* self, QStyleOptionViewItem* option);
    friend void KCompletionBox_SuperPaintEvent(KCompletionBox* self, QPaintEvent* e);
    friend int KCompletionBox_SuperHorizontalOffset(const KCompletionBox* self);
    friend int KCompletionBox_SuperVerticalOffset(const KCompletionBox* self);
    friend QModelIndex* KCompletionBox_SuperMoveCursor(KCompletionBox* self, int cursorAction, int modifiers);
    friend void KCompletionBox_SuperSetSelection(KCompletionBox* self, const QRect* rect, int command);
    friend QRegion* KCompletionBox_SuperVisualRegionForSelection(const KCompletionBox* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ KCompletionBox_SuperSelectedIndexes(const KCompletionBox* self);
    friend void KCompletionBox_SuperUpdateGeometries(KCompletionBox* self);
    friend bool KCompletionBox_SuperIsIndexHidden(const KCompletionBox* self, const QModelIndex* index);
    friend void KCompletionBox_SuperSelectionChanged(KCompletionBox* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KCompletionBox_SuperCurrentChanged(KCompletionBox* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* KCompletionBox_SuperViewportSizeHint(const KCompletionBox* self);
    friend void KCompletionBox_SuperUpdateEditorData(KCompletionBox* self);
    friend void KCompletionBox_SuperUpdateEditorGeometries(KCompletionBox* self);
    friend void KCompletionBox_SuperVerticalScrollbarAction(KCompletionBox* self, int action);
    friend void KCompletionBox_SuperHorizontalScrollbarAction(KCompletionBox* self, int action);
    friend void KCompletionBox_SuperVerticalScrollbarValueChanged(KCompletionBox* self, int value);
    friend void KCompletionBox_SuperHorizontalScrollbarValueChanged(KCompletionBox* self, int value);
    friend void KCompletionBox_SuperCloseEditor(KCompletionBox* self, QWidget* editor, int hint);
    friend void KCompletionBox_SuperCommitData(KCompletionBox* self, QWidget* editor);
    friend void KCompletionBox_SuperEditorDestroyed(KCompletionBox* self, QObject* editor);
    friend bool KCompletionBox_SuperEdit2(KCompletionBox* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int KCompletionBox_SuperSelectionCommand(const KCompletionBox* self, const QModelIndex* index, const QEvent* event);
    friend bool KCompletionBox_SuperFocusNextPrevChild(KCompletionBox* self, bool next);
    friend bool KCompletionBox_SuperViewportEvent(KCompletionBox* self, QEvent* event);
    friend void KCompletionBox_SuperMousePressEvent(KCompletionBox* self, QMouseEvent* event);
    friend void KCompletionBox_SuperMouseDoubleClickEvent(KCompletionBox* self, QMouseEvent* event);
    friend void KCompletionBox_SuperDragEnterEvent(KCompletionBox* self, QDragEnterEvent* event);
    friend void KCompletionBox_SuperFocusInEvent(KCompletionBox* self, QFocusEvent* event);
    friend void KCompletionBox_SuperFocusOutEvent(KCompletionBox* self, QFocusEvent* event);
    friend void KCompletionBox_SuperKeyPressEvent(KCompletionBox* self, QKeyEvent* event);
    friend void KCompletionBox_SuperInputMethodEvent(KCompletionBox* self, QInputMethodEvent* event);
    friend void KCompletionBox_SuperContextMenuEvent(KCompletionBox* self, QContextMenuEvent* param1);
    friend void KCompletionBox_SuperChangeEvent(KCompletionBox* self, QEvent* param1);
    friend void KCompletionBox_SuperInitStyleOption(const KCompletionBox* self, QStyleOptionFrame* option);
    friend void KCompletionBox_SuperKeyReleaseEvent(KCompletionBox* self, QKeyEvent* event);
    friend void KCompletionBox_SuperEnterEvent(KCompletionBox* self, QEnterEvent* event);
    friend void KCompletionBox_SuperLeaveEvent(KCompletionBox* self, QEvent* event);
    friend void KCompletionBox_SuperMoveEvent(KCompletionBox* self, QMoveEvent* event);
    friend void KCompletionBox_SuperCloseEvent(KCompletionBox* self, QCloseEvent* event);
    friend void KCompletionBox_SuperTabletEvent(KCompletionBox* self, QTabletEvent* event);
    friend void KCompletionBox_SuperActionEvent(KCompletionBox* self, QActionEvent* event);
    friend void KCompletionBox_SuperShowEvent(KCompletionBox* self, QShowEvent* event);
    friend void KCompletionBox_SuperHideEvent(KCompletionBox* self, QHideEvent* event);
    friend bool KCompletionBox_SuperNativeEvent(KCompletionBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KCompletionBox_SuperMetric(const KCompletionBox* self, int param1);
    friend void KCompletionBox_SuperInitPainter(const KCompletionBox* self, QPainter* painter);
    friend QPaintDevice* KCompletionBox_SuperRedirected(const KCompletionBox* self, QPoint* offset);
    friend QPainter* KCompletionBox_SuperSharedPainter(const KCompletionBox* self);
    friend void KCompletionBox_SuperChildEvent(KCompletionBox* self, QChildEvent* event);
    friend void KCompletionBox_SuperCustomEvent(KCompletionBox* self, QEvent* event);
    friend void KCompletionBox_SuperConnectNotify(KCompletionBox* self, const QMetaMethod* signal);
    friend void KCompletionBox_SuperDisconnectNotify(KCompletionBox* self, const QMetaMethod* signal);
};

#endif
