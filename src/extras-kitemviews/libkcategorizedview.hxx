#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKCATEGORIZEDVIEW_HXX
#define EXTRAS_KITEMVIEWS_LIBKCATEGORIZEDVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCategorizedView
class VirtualKCategorizedView final : public KCategorizedView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using KCategorizedView_MetaObject_Callback = QMetaObject* (*)(const KCategorizedView*);
    using KCategorizedView_Metacast_Callback = void* (*)(KCategorizedView*, const char*);
    using KCategorizedView_Metacall_Callback = int (*)(KCategorizedView*, int, int, void**);
    using KCategorizedView_SetModel_Callback = void (*)(KCategorizedView*, QAbstractItemModel*);
    using KCategorizedView_VisualRect_Callback = QRect* (*)(const KCategorizedView*, QModelIndex*);
    using KCategorizedView_IndexAt_Callback = QModelIndex* (*)(const KCategorizedView*, QPoint*);
    using KCategorizedView_Reset_Callback = void (*)(KCategorizedView*);
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
    using KCategorizedView_UpdateGeometries_Callback = void (*)(KCategorizedView*);
    using KCategorizedView_CurrentChanged_Callback = void (*)(KCategorizedView*, QModelIndex*, QModelIndex*);
    using KCategorizedView_DataChanged_Callback = void (*)(KCategorizedView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using KCategorizedView_RowsInserted_Callback = void (*)(KCategorizedView*, QModelIndex*, int, int);
    using KCategorizedView_SlotLayoutChanged_Callback = void (*)(KCategorizedView*);
    using KCategorizedView_ScrollTo_Callback = void (*)(KCategorizedView*, QModelIndex*, int);
    using KCategorizedView_DoItemsLayout_Callback = void (*)(KCategorizedView*);
    using KCategorizedView_SetRootIndex_Callback = void (*)(KCategorizedView*, QModelIndex*);
    using KCategorizedView_Event_Callback = bool (*)(KCategorizedView*, QEvent*);
    using KCategorizedView_ScrollContentsBy_Callback = void (*)(KCategorizedView*, int, int);
    using KCategorizedView_WheelEvent_Callback = void (*)(KCategorizedView*, QWheelEvent*);
    using KCategorizedView_TimerEvent_Callback = void (*)(KCategorizedView*, QTimerEvent*);
    using KCategorizedView_InitViewItemOption_Callback = void (*)(const KCategorizedView*, QStyleOptionViewItem*);
    using KCategorizedView_HorizontalOffset_Callback = int (*)(const KCategorizedView*);
    using KCategorizedView_VerticalOffset_Callback = int (*)(const KCategorizedView*);
    using KCategorizedView_VisualRegionForSelection_Callback = QRegion* (*)(const KCategorizedView*, QItemSelection*);
    using KCategorizedView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const KCategorizedView*);
    using KCategorizedView_IsIndexHidden_Callback = bool (*)(const KCategorizedView*, QModelIndex*);
    using KCategorizedView_SelectionChanged_Callback = void (*)(KCategorizedView*, QItemSelection*, QItemSelection*);
    using KCategorizedView_ViewportSizeHint_Callback = QSize* (*)(const KCategorizedView*);
    using KCategorizedView_SetSelectionModel_Callback = void (*)(KCategorizedView*, QItemSelectionModel*);
    using KCategorizedView_KeyboardSearch_Callback = void (*)(KCategorizedView*, const char*);
    using KCategorizedView_SizeHintForRow_Callback = int (*)(const KCategorizedView*, int);
    using KCategorizedView_SizeHintForColumn_Callback = int (*)(const KCategorizedView*, int);
    using KCategorizedView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const KCategorizedView*, QModelIndex*);
    using KCategorizedView_InputMethodQuery_Callback = QVariant* (*)(const KCategorizedView*, int);
    using KCategorizedView_SelectAll_Callback = void (*)(KCategorizedView*);
    using KCategorizedView_UpdateEditorData_Callback = void (*)(KCategorizedView*);
    using KCategorizedView_UpdateEditorGeometries_Callback = void (*)(KCategorizedView*);
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
    using KCategorizedView_MinimumSizeHint_Callback = QSize* (*)(const KCategorizedView*);
    using KCategorizedView_SizeHint_Callback = QSize* (*)(const KCategorizedView*);
    using KCategorizedView_SetupViewport_Callback = void (*)(KCategorizedView*, QWidget*);
    using KCategorizedView_ContextMenuEvent_Callback = void (*)(KCategorizedView*, QContextMenuEvent*);
    using KCategorizedView_ChangeEvent_Callback = void (*)(KCategorizedView*, QEvent*);
    using KCategorizedView_InitStyleOption_Callback = void (*)(const KCategorizedView*, QStyleOptionFrame*);
    using KCategorizedView_DevType_Callback = int (*)(const KCategorizedView*);
    using KCategorizedView_SetVisible_Callback = void (*)(KCategorizedView*, bool);
    using KCategorizedView_HeightForWidth_Callback = int (*)(const KCategorizedView*, int);
    using KCategorizedView_HasHeightForWidth_Callback = bool (*)(const KCategorizedView*);
    using KCategorizedView_PaintEngine_Callback = QPaintEngine* (*)(const KCategorizedView*);
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
    using KCategorizedView_SharedPainter_Callback = QPainter* (*)(const KCategorizedView*);
    using KCategorizedView_ChildEvent_Callback = void (*)(KCategorizedView*, QChildEvent*);
    using KCategorizedView_CustomEvent_Callback = void (*)(KCategorizedView*, QEvent*);
    using KCategorizedView_ConnectNotify_Callback = void (*)(KCategorizedView*, QMetaMethod*);
    using KCategorizedView_DisconnectNotify_Callback = void (*)(KCategorizedView*, QMetaMethod*);
    using KCategorizedView::contentsSize;
    using KCategorizedView::create;
    using KCategorizedView::destroy;
    using KCategorizedView::dirtyRegionOffset;
    using KCategorizedView::doAutoScroll;
    using KCategorizedView::drawFrame;
    using KCategorizedView::dropIndicatorPosition;
    using KCategorizedView::executeDelayedItemsLayout;
    using KCategorizedView::focusNextChild;
    using KCategorizedView::focusPreviousChild;
    using KCategorizedView::getDecodedMetricF;
    using KCategorizedView::isSignalConnected;
    using KCategorizedView::receivers;
    using KCategorizedView::rectForIndex;
    using KCategorizedView::resizeContents;
    using KCategorizedView::scheduleDelayedItemsLayout;
    using KCategorizedView::scrollDirtyRegion;
    using KCategorizedView::sender;
    using KCategorizedView::senderSignalIndex;
    using KCategorizedView::setDirtyRegion;
    using KCategorizedView::setPositionForIndex;
    using KCategorizedView::setState;
    using KCategorizedView::setViewportMargins;
    using KCategorizedView::startAutoScroll;
    using KCategorizedView::state;
    using KCategorizedView::stopAutoScroll;
    using KCategorizedView::updateMicroFocus;
    using KCategorizedView::viewportMargins;

    // Instance callback storage
    KCategorizedView_MetaObject_Callback kcategorizedview_metaobject_callback = nullptr;
    KCategorizedView_Metacast_Callback kcategorizedview_metacast_callback = nullptr;
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

    // Access struct
    struct Base : KCategorizedView {
        using KCategorizedView::actionEvent;
        using KCategorizedView::changeEvent;
        using KCategorizedView::childEvent;
        using KCategorizedView::closeEditor;
        using KCategorizedView::closeEvent;
        using KCategorizedView::commitData;
        using KCategorizedView::connectNotify;
        using KCategorizedView::contextMenuEvent;
        using KCategorizedView::currentChanged;
        using KCategorizedView::customEvent;
        using KCategorizedView::dataChanged;
        using KCategorizedView::disconnectNotify;
        using KCategorizedView::dragEnterEvent;
        using KCategorizedView::dragLeaveEvent;
        using KCategorizedView::dragMoveEvent;
        using KCategorizedView::dropEvent;
        using KCategorizedView::edit;
        using KCategorizedView::editorDestroyed;
        using KCategorizedView::enterEvent;
        using KCategorizedView::event;
        using KCategorizedView::eventFilter;
        using KCategorizedView::focusInEvent;
        using KCategorizedView::focusNextPrevChild;
        using KCategorizedView::focusOutEvent;
        using KCategorizedView::hideEvent;
        using KCategorizedView::horizontalOffset;
        using KCategorizedView::horizontalScrollbarAction;
        using KCategorizedView::horizontalScrollbarValueChanged;
        using KCategorizedView::initPainter;
        using KCategorizedView::initStyleOption;
        using KCategorizedView::initViewItemOption;
        using KCategorizedView::inputMethodEvent;
        using KCategorizedView::isIndexHidden;
        using KCategorizedView::keyPressEvent;
        using KCategorizedView::keyReleaseEvent;
        using KCategorizedView::leaveEvent;
        using KCategorizedView::metric;
        using KCategorizedView::mouseDoubleClickEvent;
        using KCategorizedView::mouseMoveEvent;
        using KCategorizedView::mousePressEvent;
        using KCategorizedView::mouseReleaseEvent;
        using KCategorizedView::moveCursor;
        using KCategorizedView::moveEvent;
        using KCategorizedView::nativeEvent;
        using KCategorizedView::paintEvent;
        using KCategorizedView::redirected;
        using KCategorizedView::resizeEvent;
        using KCategorizedView::rowsAboutToBeRemoved;
        using KCategorizedView::rowsInserted;
        using KCategorizedView::scrollContentsBy;
        using KCategorizedView::selectedIndexes;
        using KCategorizedView::selectionChanged;
        using KCategorizedView::selectionCommand;
        using KCategorizedView::setSelection;
        using KCategorizedView::sharedPainter;
        using KCategorizedView::showEvent;
        using KCategorizedView::slotLayoutChanged;
        using KCategorizedView::startDrag;
        using KCategorizedView::tabletEvent;
        using KCategorizedView::timerEvent;
        using KCategorizedView::updateEditorData;
        using KCategorizedView::updateEditorGeometries;
        using KCategorizedView::updateGeometries;
        using KCategorizedView::verticalOffset;
        using KCategorizedView::verticalScrollbarAction;
        using KCategorizedView::verticalScrollbarValueChanged;
        using KCategorizedView::viewportEvent;
        using KCategorizedView::viewportSizeHint;
        using KCategorizedView::visualRegionForSelection;
        using KCategorizedView::wheelEvent;
    };

    VirtualKCategorizedView(QWidget* parent) : KCategorizedView(parent) {};
    VirtualKCategorizedView() : KCategorizedView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcategorizedview_metaobject_callback) {
            QMetaObject* callback_ret = kcategorizedview_metaobject_callback(this);
            return callback_ret;
        }
        return KCategorizedView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcategorizedview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcategorizedview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcategorizedview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcategorizedview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kcategorizedview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kcategorizedview_setmodel_callback(this, cbval1);
            return;
        }
        KCategorizedView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kcategorizedview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = kcategorizedview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& point) const override {
        if (kcategorizedview_indexat_callback) {
            const QPoint& point_ret = point;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&point_ret);
            QModelIndex* callback_ret = kcategorizedview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedView::indexAt(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kcategorizedview_reset_callback) {
            kcategorizedview_reset_callback(this);
            return;
        }
        KCategorizedView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcategorizedview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kcategorizedview_paintevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcategorizedview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kcategorizedview_resizeevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags flags) override {
        if (kcategorizedview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(flags);
            kcategorizedview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        KCategorizedView::setSelection(rect, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcategorizedview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kcategorizedview_mousemoveevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcategorizedview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kcategorizedview_mousepressevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcategorizedview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kcategorizedview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcategorizedview_leaveevent_callback) {
            QEvent* cbval1 = event;
            kcategorizedview_leaveevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (kcategorizedview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            kcategorizedview_startdrag_callback(this, cbval1);
            return;
        }
        KCategorizedView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcategorizedview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcategorizedview_dragmoveevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcategorizedview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcategorizedview_dragenterevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcategorizedview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcategorizedview_dragleaveevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcategorizedview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcategorizedview_dropevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (kcategorizedview_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = kcategorizedview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (kcategorizedview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            kcategorizedview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategorizedView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (kcategorizedview_updategeometries_callback) {
            kcategorizedview_updategeometries_callback(this);
            return;
        }
        KCategorizedView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (kcategorizedview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            kcategorizedview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        KCategorizedView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (kcategorizedview_datachanged_callback) {
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
            kcategorizedview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        KCategorizedView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (kcategorizedview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            kcategorizedview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategorizedView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotLayoutChanged() override {
        if (kcategorizedview_slotlayoutchanged_callback) {
            kcategorizedview_slotlayoutchanged_callback(this);
            return;
        }
        KCategorizedView::slotLayoutChanged();
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (kcategorizedview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            kcategorizedview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        KCategorizedView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (kcategorizedview_doitemslayout_callback) {
            kcategorizedview_doitemslayout_callback(this);
            return;
        }
        KCategorizedView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (kcategorizedview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            kcategorizedview_setrootindex_callback(this, cbval1);
            return;
        }
        KCategorizedView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcategorizedview_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kcategorizedview_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedView::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kcategorizedview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            kcategorizedview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        KCategorizedView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcategorizedview_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            kcategorizedview_wheelevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kcategorizedview_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            kcategorizedview_timerevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (kcategorizedview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            kcategorizedview_initviewitemoption_callback(this, cbval1);
            return;
        }
        KCategorizedView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (kcategorizedview_horizontaloffset_callback) {
            int callback_ret = kcategorizedview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (kcategorizedview_verticaloffset_callback) {
            int callback_ret = kcategorizedview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (kcategorizedview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = kcategorizedview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (kcategorizedview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = kcategorizedview_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KCategorizedView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (kcategorizedview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kcategorizedview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (kcategorizedview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            kcategorizedview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        KCategorizedView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kcategorizedview_viewportsizehint_callback) {
            QSize* callback_ret = kcategorizedview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (kcategorizedview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            kcategorizedview_setselectionmodel_callback(this, cbval1);
            return;
        }
        KCategorizedView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (kcategorizedview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            kcategorizedview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        KCategorizedView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (kcategorizedview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = kcategorizedview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (kcategorizedview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = kcategorizedview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (kcategorizedview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = kcategorizedview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (kcategorizedview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = kcategorizedview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (kcategorizedview_selectall_callback) {
            kcategorizedview_selectall_callback(this);
            return;
        }
        KCategorizedView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (kcategorizedview_updateeditordata_callback) {
            kcategorizedview_updateeditordata_callback(this);
            return;
        }
        KCategorizedView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (kcategorizedview_updateeditorgeometries_callback) {
            kcategorizedview_updateeditorgeometries_callback(this);
            return;
        }
        KCategorizedView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (kcategorizedview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            kcategorizedview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        KCategorizedView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (kcategorizedview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            kcategorizedview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        KCategorizedView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (kcategorizedview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            kcategorizedview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        KCategorizedView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (kcategorizedview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            kcategorizedview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        KCategorizedView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (kcategorizedview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            kcategorizedview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        KCategorizedView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (kcategorizedview_commitdata_callback) {
            QWidget* cbval1 = editor;
            kcategorizedview_commitdata_callback(this, cbval1);
            return;
        }
        KCategorizedView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (kcategorizedview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            kcategorizedview_editordestroyed_callback(this, cbval1);
            return;
        }
        KCategorizedView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (kcategorizedview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = kcategorizedview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (kcategorizedview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = kcategorizedview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return KCategorizedView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcategorizedview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcategorizedview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (kcategorizedview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcategorizedview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcategorizedview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcategorizedview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcategorizedview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kcategorizedview_focusinevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcategorizedview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kcategorizedview_focusoutevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcategorizedview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kcategorizedview_keypressevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (kcategorizedview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            kcategorizedview_inputmethodevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kcategorizedview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = kcategorizedview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcategorizedview_minimumsizehint_callback) {
            QSize* callback_ret = kcategorizedview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcategorizedview_sizehint_callback) {
            QSize* callback_ret = kcategorizedview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kcategorizedview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            kcategorizedview_setupviewport_callback(this, cbval1);
            return;
        }
        KCategorizedView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kcategorizedview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kcategorizedview_contextmenuevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcategorizedview_changeevent_callback) {
            QEvent* cbval1 = param1;
            kcategorizedview_changeevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kcategorizedview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kcategorizedview_initstyleoption_callback(this, cbval1);
            return;
        }
        KCategorizedView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcategorizedview_devtype_callback) {
            int callback_ret = kcategorizedview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcategorizedview_setvisible_callback) {
            bool cbval1 = visible;
            kcategorizedview_setvisible_callback(this, cbval1);
            return;
        }
        KCategorizedView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcategorizedview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcategorizedview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcategorizedview_hasheightforwidth_callback) {
            bool callback_ret = kcategorizedview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KCategorizedView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcategorizedview_paintengine_callback) {
            QPaintEngine* callback_ret = kcategorizedview_paintengine_callback(this);
            return callback_ret;
        }
        return KCategorizedView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcategorizedview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kcategorizedview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcategorizedview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcategorizedview_enterevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcategorizedview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcategorizedview_moveevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcategorizedview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcategorizedview_closeevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcategorizedview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcategorizedview_tabletevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcategorizedview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcategorizedview_actionevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcategorizedview_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcategorizedview_showevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcategorizedview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcategorizedview_hideevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcategorizedview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcategorizedview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KCategorizedView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcategorizedview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcategorizedview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcategorizedview_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcategorizedview_initpainter_callback(this, cbval1);
            return;
        }
        KCategorizedView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcategorizedview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcategorizedview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcategorizedview_sharedpainter_callback) {
            QPainter* callback_ret = kcategorizedview_sharedpainter_callback(this);
            return callback_ret;
        }
        return KCategorizedView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcategorizedview_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcategorizedview_childevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcategorizedview_customevent_callback) {
            QEvent* cbval1 = event;
            kcategorizedview_customevent_callback(this, cbval1);
            return;
        }
        KCategorizedView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcategorizedview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcategorizedview_connectnotify_callback(this, cbval1);
            return;
        }
        KCategorizedView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcategorizedview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcategorizedview_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCategorizedView::disconnectNotify(signal);
    }

    // Friend functions
    friend void KCategorizedView_SuperPaintEvent(KCategorizedView* self, QPaintEvent* event);
    friend void KCategorizedView_SuperResizeEvent(KCategorizedView* self, QResizeEvent* event);
    friend void KCategorizedView_SuperSetSelection(KCategorizedView* self, const QRect* rect, int flags);
    friend void KCategorizedView_SuperMouseMoveEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_SuperMousePressEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_SuperMouseReleaseEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_SuperLeaveEvent(KCategorizedView* self, QEvent* event);
    friend void KCategorizedView_SuperStartDrag(KCategorizedView* self, int supportedActions);
    friend void KCategorizedView_SuperDragMoveEvent(KCategorizedView* self, QDragMoveEvent* event);
    friend void KCategorizedView_SuperDragEnterEvent(KCategorizedView* self, QDragEnterEvent* event);
    friend void KCategorizedView_SuperDragLeaveEvent(KCategorizedView* self, QDragLeaveEvent* event);
    friend void KCategorizedView_SuperDropEvent(KCategorizedView* self, QDropEvent* event);
    friend QModelIndex* KCategorizedView_SuperMoveCursor(KCategorizedView* self, int cursorAction, int modifiers);
    friend void KCategorizedView_SuperRowsAboutToBeRemoved(KCategorizedView* self, const QModelIndex* parent, int start, int end);
    friend void KCategorizedView_SuperUpdateGeometries(KCategorizedView* self);
    friend void KCategorizedView_SuperCurrentChanged(KCategorizedView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void KCategorizedView_SuperDataChanged(KCategorizedView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void KCategorizedView_SuperRowsInserted(KCategorizedView* self, const QModelIndex* parent, int start, int end);
    friend void KCategorizedView_SuperSlotLayoutChanged(KCategorizedView* self);
    friend bool KCategorizedView_SuperEvent(KCategorizedView* self, QEvent* e);
    friend void KCategorizedView_SuperScrollContentsBy(KCategorizedView* self, int dx, int dy);
    friend void KCategorizedView_SuperWheelEvent(KCategorizedView* self, QWheelEvent* e);
    friend void KCategorizedView_SuperTimerEvent(KCategorizedView* self, QTimerEvent* e);
    friend void KCategorizedView_SuperInitViewItemOption(const KCategorizedView* self, QStyleOptionViewItem* option);
    friend int KCategorizedView_SuperHorizontalOffset(const KCategorizedView* self);
    friend int KCategorizedView_SuperVerticalOffset(const KCategorizedView* self);
    friend QRegion* KCategorizedView_SuperVisualRegionForSelection(const KCategorizedView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ KCategorizedView_SuperSelectedIndexes(const KCategorizedView* self);
    friend bool KCategorizedView_SuperIsIndexHidden(const KCategorizedView* self, const QModelIndex* index);
    friend void KCategorizedView_SuperSelectionChanged(KCategorizedView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend QSize* KCategorizedView_SuperViewportSizeHint(const KCategorizedView* self);
    friend void KCategorizedView_SuperUpdateEditorData(KCategorizedView* self);
    friend void KCategorizedView_SuperUpdateEditorGeometries(KCategorizedView* self);
    friend void KCategorizedView_SuperVerticalScrollbarAction(KCategorizedView* self, int action);
    friend void KCategorizedView_SuperHorizontalScrollbarAction(KCategorizedView* self, int action);
    friend void KCategorizedView_SuperVerticalScrollbarValueChanged(KCategorizedView* self, int value);
    friend void KCategorizedView_SuperHorizontalScrollbarValueChanged(KCategorizedView* self, int value);
    friend void KCategorizedView_SuperCloseEditor(KCategorizedView* self, QWidget* editor, int hint);
    friend void KCategorizedView_SuperCommitData(KCategorizedView* self, QWidget* editor);
    friend void KCategorizedView_SuperEditorDestroyed(KCategorizedView* self, QObject* editor);
    friend bool KCategorizedView_SuperEdit2(KCategorizedView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int KCategorizedView_SuperSelectionCommand(const KCategorizedView* self, const QModelIndex* index, const QEvent* event);
    friend bool KCategorizedView_SuperFocusNextPrevChild(KCategorizedView* self, bool next);
    friend bool KCategorizedView_SuperViewportEvent(KCategorizedView* self, QEvent* event);
    friend void KCategorizedView_SuperMouseDoubleClickEvent(KCategorizedView* self, QMouseEvent* event);
    friend void KCategorizedView_SuperFocusInEvent(KCategorizedView* self, QFocusEvent* event);
    friend void KCategorizedView_SuperFocusOutEvent(KCategorizedView* self, QFocusEvent* event);
    friend void KCategorizedView_SuperKeyPressEvent(KCategorizedView* self, QKeyEvent* event);
    friend void KCategorizedView_SuperInputMethodEvent(KCategorizedView* self, QInputMethodEvent* event);
    friend bool KCategorizedView_SuperEventFilter(KCategorizedView* self, QObject* object, QEvent* event);
    friend void KCategorizedView_SuperContextMenuEvent(KCategorizedView* self, QContextMenuEvent* param1);
    friend void KCategorizedView_SuperChangeEvent(KCategorizedView* self, QEvent* param1);
    friend void KCategorizedView_SuperInitStyleOption(const KCategorizedView* self, QStyleOptionFrame* option);
    friend void KCategorizedView_SuperKeyReleaseEvent(KCategorizedView* self, QKeyEvent* event);
    friend void KCategorizedView_SuperEnterEvent(KCategorizedView* self, QEnterEvent* event);
    friend void KCategorizedView_SuperMoveEvent(KCategorizedView* self, QMoveEvent* event);
    friend void KCategorizedView_SuperCloseEvent(KCategorizedView* self, QCloseEvent* event);
    friend void KCategorizedView_SuperTabletEvent(KCategorizedView* self, QTabletEvent* event);
    friend void KCategorizedView_SuperActionEvent(KCategorizedView* self, QActionEvent* event);
    friend void KCategorizedView_SuperShowEvent(KCategorizedView* self, QShowEvent* event);
    friend void KCategorizedView_SuperHideEvent(KCategorizedView* self, QHideEvent* event);
    friend bool KCategorizedView_SuperNativeEvent(KCategorizedView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KCategorizedView_SuperMetric(const KCategorizedView* self, int param1);
    friend void KCategorizedView_SuperInitPainter(const KCategorizedView* self, QPainter* painter);
    friend QPaintDevice* KCategorizedView_SuperRedirected(const KCategorizedView* self, QPoint* offset);
    friend QPainter* KCategorizedView_SuperSharedPainter(const KCategorizedView* self);
    friend void KCategorizedView_SuperChildEvent(KCategorizedView* self, QChildEvent* event);
    friend void KCategorizedView_SuperCustomEvent(KCategorizedView* self, QEvent* event);
    friend void KCategorizedView_SuperConnectNotify(KCategorizedView* self, const QMetaMethod* signal);
    friend void KCategorizedView_SuperDisconnectNotify(KCategorizedView* self, const QMetaMethod* signal);
};

#endif
