#pragma once
#ifndef LIBQTABLEVIEW_HXX
#define LIBQTABLEVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTableView
class VirtualQTableView final : public QTableView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTableView_MetaObject_Callback = QMetaObject* (*)(const QTableView*);
    using QTableView_Metacast_Callback = void* (*)(QTableView*, const char*);
    using QTableView_Metacall_Callback = int (*)(QTableView*, int, int, void**);
    using QTableView_SetModel_Callback = void (*)(QTableView*, QAbstractItemModel*);
    using QTableView_SetRootIndex_Callback = void (*)(QTableView*, QModelIndex*);
    using QTableView_SetSelectionModel_Callback = void (*)(QTableView*, QItemSelectionModel*);
    using QTableView_DoItemsLayout_Callback = void (*)(QTableView*);
    using QTableView_VisualRect_Callback = QRect* (*)(const QTableView*, QModelIndex*);
    using QTableView_ScrollTo_Callback = void (*)(QTableView*, QModelIndex*, int);
    using QTableView_IndexAt_Callback = QModelIndex* (*)(const QTableView*, QPoint*);
    using QTableView_ScrollContentsBy_Callback = void (*)(QTableView*, int, int);
    using QTableView_InitViewItemOption_Callback = void (*)(const QTableView*, QStyleOptionViewItem*);
    using QTableView_PaintEvent_Callback = void (*)(QTableView*, QPaintEvent*);
    using QTableView_TimerEvent_Callback = void (*)(QTableView*, QTimerEvent*);
    using QTableView_DropEvent_Callback = void (*)(QTableView*, QDropEvent*);
    using QTableView_HorizontalOffset_Callback = int (*)(const QTableView*);
    using QTableView_VerticalOffset_Callback = int (*)(const QTableView*);
    using QTableView_MoveCursor_Callback = QModelIndex* (*)(QTableView*, int, int);
    using QTableView_SetSelection_Callback = void (*)(QTableView*, QRect*, int);
    using QTableView_VisualRegionForSelection_Callback = QRegion* (*)(const QTableView*, QItemSelection*);
    using QTableView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QTableView*);
    using QTableView_UpdateGeometries_Callback = void (*)(QTableView*);
    using QTableView_ViewportSizeHint_Callback = QSize* (*)(const QTableView*);
    using QTableView_SizeHintForRow_Callback = int (*)(const QTableView*, int);
    using QTableView_SizeHintForColumn_Callback = int (*)(const QTableView*, int);
    using QTableView_VerticalScrollbarAction_Callback = void (*)(QTableView*, int);
    using QTableView_HorizontalScrollbarAction_Callback = void (*)(QTableView*, int);
    using QTableView_IsIndexHidden_Callback = bool (*)(const QTableView*, QModelIndex*);
    using QTableView_SelectionChanged_Callback = void (*)(QTableView*, QItemSelection*, QItemSelection*);
    using QTableView_CurrentChanged_Callback = void (*)(QTableView*, QModelIndex*, QModelIndex*);
    using QTableView_KeyboardSearch_Callback = void (*)(QTableView*, const char*);
    using QTableView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTableView*, QModelIndex*);
    using QTableView_InputMethodQuery_Callback = QVariant* (*)(const QTableView*, int);
    using QTableView_Reset_Callback = void (*)(QTableView*);
    using QTableView_SelectAll_Callback = void (*)(QTableView*);
    using QTableView_DataChanged_Callback = void (*)(QTableView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QTableView_RowsInserted_Callback = void (*)(QTableView*, QModelIndex*, int, int);
    using QTableView_RowsAboutToBeRemoved_Callback = void (*)(QTableView*, QModelIndex*, int, int);
    using QTableView_UpdateEditorData_Callback = void (*)(QTableView*);
    using QTableView_UpdateEditorGeometries_Callback = void (*)(QTableView*);
    using QTableView_VerticalScrollbarValueChanged_Callback = void (*)(QTableView*, int);
    using QTableView_HorizontalScrollbarValueChanged_Callback = void (*)(QTableView*, int);
    using QTableView_CloseEditor_Callback = void (*)(QTableView*, QWidget*, int);
    using QTableView_CommitData_Callback = void (*)(QTableView*, QWidget*);
    using QTableView_EditorDestroyed_Callback = void (*)(QTableView*, QObject*);
    using QTableView_Edit2_Callback = bool (*)(QTableView*, QModelIndex*, int, QEvent*);
    using QTableView_SelectionCommand_Callback = int (*)(const QTableView*, QModelIndex*, QEvent*);
    using QTableView_StartDrag_Callback = void (*)(QTableView*, int);
    using QTableView_FocusNextPrevChild_Callback = bool (*)(QTableView*, bool);
    using QTableView_Event_Callback = bool (*)(QTableView*, QEvent*);
    using QTableView_ViewportEvent_Callback = bool (*)(QTableView*, QEvent*);
    using QTableView_MousePressEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseMoveEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseReleaseEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseDoubleClickEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_DragEnterEvent_Callback = void (*)(QTableView*, QDragEnterEvent*);
    using QTableView_DragMoveEvent_Callback = void (*)(QTableView*, QDragMoveEvent*);
    using QTableView_DragLeaveEvent_Callback = void (*)(QTableView*, QDragLeaveEvent*);
    using QTableView_FocusInEvent_Callback = void (*)(QTableView*, QFocusEvent*);
    using QTableView_FocusOutEvent_Callback = void (*)(QTableView*, QFocusEvent*);
    using QTableView_KeyPressEvent_Callback = void (*)(QTableView*, QKeyEvent*);
    using QTableView_ResizeEvent_Callback = void (*)(QTableView*, QResizeEvent*);
    using QTableView_InputMethodEvent_Callback = void (*)(QTableView*, QInputMethodEvent*);
    using QTableView_EventFilter_Callback = bool (*)(QTableView*, QObject*, QEvent*);
    using QTableView_MinimumSizeHint_Callback = QSize* (*)(const QTableView*);
    using QTableView_SizeHint_Callback = QSize* (*)(const QTableView*);
    using QTableView_SetupViewport_Callback = void (*)(QTableView*, QWidget*);
    using QTableView_WheelEvent_Callback = void (*)(QTableView*, QWheelEvent*);
    using QTableView_ContextMenuEvent_Callback = void (*)(QTableView*, QContextMenuEvent*);
    using QTableView_ChangeEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_InitStyleOption_Callback = void (*)(const QTableView*, QStyleOptionFrame*);
    using QTableView_DevType_Callback = int (*)(const QTableView*);
    using QTableView_SetVisible_Callback = void (*)(QTableView*, bool);
    using QTableView_HeightForWidth_Callback = int (*)(const QTableView*, int);
    using QTableView_HasHeightForWidth_Callback = bool (*)(const QTableView*);
    using QTableView_PaintEngine_Callback = QPaintEngine* (*)(const QTableView*);
    using QTableView_KeyReleaseEvent_Callback = void (*)(QTableView*, QKeyEvent*);
    using QTableView_EnterEvent_Callback = void (*)(QTableView*, QEnterEvent*);
    using QTableView_LeaveEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_MoveEvent_Callback = void (*)(QTableView*, QMoveEvent*);
    using QTableView_CloseEvent_Callback = void (*)(QTableView*, QCloseEvent*);
    using QTableView_TabletEvent_Callback = void (*)(QTableView*, QTabletEvent*);
    using QTableView_ActionEvent_Callback = void (*)(QTableView*, QActionEvent*);
    using QTableView_ShowEvent_Callback = void (*)(QTableView*, QShowEvent*);
    using QTableView_HideEvent_Callback = void (*)(QTableView*, QHideEvent*);
    using QTableView_NativeEvent_Callback = bool (*)(QTableView*, libqt_string, void*, intptr_t*);
    using QTableView_Metric_Callback = int (*)(const QTableView*, int);
    using QTableView_InitPainter_Callback = void (*)(const QTableView*, QPainter*);
    using QTableView_Redirected_Callback = QPaintDevice* (*)(const QTableView*, QPoint*);
    using QTableView_SharedPainter_Callback = QPainter* (*)(const QTableView*);
    using QTableView_ChildEvent_Callback = void (*)(QTableView*, QChildEvent*);
    using QTableView_CustomEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_ConnectNotify_Callback = void (*)(QTableView*, QMetaMethod*);
    using QTableView_DisconnectNotify_Callback = void (*)(QTableView*, QMetaMethod*);
    using QTableView::columnCountChanged;
    using QTableView::columnMoved;
    using QTableView::columnResized;
    using QTableView::create;
    using QTableView::destroy;
    using QTableView::dirtyRegionOffset;
    using QTableView::doAutoScroll;
    using QTableView::drawFrame;
    using QTableView::dropIndicatorPosition;
    using QTableView::executeDelayedItemsLayout;
    using QTableView::focusNextChild;
    using QTableView::focusPreviousChild;
    using QTableView::getDecodedMetricF;
    using QTableView::isSignalConnected;
    using QTableView::receivers;
    using QTableView::rowCountChanged;
    using QTableView::rowMoved;
    using QTableView::rowResized;
    using QTableView::scheduleDelayedItemsLayout;
    using QTableView::scrollDirtyRegion;
    using QTableView::sender;
    using QTableView::senderSignalIndex;
    using QTableView::setDirtyRegion;
    using QTableView::setState;
    using QTableView::setViewportMargins;
    using QTableView::startAutoScroll;
    using QTableView::state;
    using QTableView::stopAutoScroll;
    using QTableView::updateMicroFocus;
    using QTableView::viewportMargins;

    // Instance callback storage
    QTableView_MetaObject_Callback qtableview_metaobject_callback = nullptr;
    QTableView_Metacast_Callback qtableview_metacast_callback = nullptr;
    QTableView_Metacall_Callback qtableview_metacall_callback = nullptr;
    QTableView_SetModel_Callback qtableview_setmodel_callback = nullptr;
    QTableView_SetRootIndex_Callback qtableview_setrootindex_callback = nullptr;
    QTableView_SetSelectionModel_Callback qtableview_setselectionmodel_callback = nullptr;
    QTableView_DoItemsLayout_Callback qtableview_doitemslayout_callback = nullptr;
    QTableView_VisualRect_Callback qtableview_visualrect_callback = nullptr;
    QTableView_ScrollTo_Callback qtableview_scrollto_callback = nullptr;
    QTableView_IndexAt_Callback qtableview_indexat_callback = nullptr;
    QTableView_ScrollContentsBy_Callback qtableview_scrollcontentsby_callback = nullptr;
    QTableView_InitViewItemOption_Callback qtableview_initviewitemoption_callback = nullptr;
    QTableView_PaintEvent_Callback qtableview_paintevent_callback = nullptr;
    QTableView_TimerEvent_Callback qtableview_timerevent_callback = nullptr;
    QTableView_DropEvent_Callback qtableview_dropevent_callback = nullptr;
    QTableView_HorizontalOffset_Callback qtableview_horizontaloffset_callback = nullptr;
    QTableView_VerticalOffset_Callback qtableview_verticaloffset_callback = nullptr;
    QTableView_MoveCursor_Callback qtableview_movecursor_callback = nullptr;
    QTableView_SetSelection_Callback qtableview_setselection_callback = nullptr;
    QTableView_VisualRegionForSelection_Callback qtableview_visualregionforselection_callback = nullptr;
    QTableView_SelectedIndexes_Callback qtableview_selectedindexes_callback = nullptr;
    QTableView_UpdateGeometries_Callback qtableview_updategeometries_callback = nullptr;
    QTableView_ViewportSizeHint_Callback qtableview_viewportsizehint_callback = nullptr;
    QTableView_SizeHintForRow_Callback qtableview_sizehintforrow_callback = nullptr;
    QTableView_SizeHintForColumn_Callback qtableview_sizehintforcolumn_callback = nullptr;
    QTableView_VerticalScrollbarAction_Callback qtableview_verticalscrollbaraction_callback = nullptr;
    QTableView_HorizontalScrollbarAction_Callback qtableview_horizontalscrollbaraction_callback = nullptr;
    QTableView_IsIndexHidden_Callback qtableview_isindexhidden_callback = nullptr;
    QTableView_SelectionChanged_Callback qtableview_selectionchanged_callback = nullptr;
    QTableView_CurrentChanged_Callback qtableview_currentchanged_callback = nullptr;
    QTableView_KeyboardSearch_Callback qtableview_keyboardsearch_callback = nullptr;
    QTableView_ItemDelegateForIndex_Callback qtableview_itemdelegateforindex_callback = nullptr;
    QTableView_InputMethodQuery_Callback qtableview_inputmethodquery_callback = nullptr;
    QTableView_Reset_Callback qtableview_reset_callback = nullptr;
    QTableView_SelectAll_Callback qtableview_selectall_callback = nullptr;
    QTableView_DataChanged_Callback qtableview_datachanged_callback = nullptr;
    QTableView_RowsInserted_Callback qtableview_rowsinserted_callback = nullptr;
    QTableView_RowsAboutToBeRemoved_Callback qtableview_rowsabouttoberemoved_callback = nullptr;
    QTableView_UpdateEditorData_Callback qtableview_updateeditordata_callback = nullptr;
    QTableView_UpdateEditorGeometries_Callback qtableview_updateeditorgeometries_callback = nullptr;
    QTableView_VerticalScrollbarValueChanged_Callback qtableview_verticalscrollbarvaluechanged_callback = nullptr;
    QTableView_HorizontalScrollbarValueChanged_Callback qtableview_horizontalscrollbarvaluechanged_callback = nullptr;
    QTableView_CloseEditor_Callback qtableview_closeeditor_callback = nullptr;
    QTableView_CommitData_Callback qtableview_commitdata_callback = nullptr;
    QTableView_EditorDestroyed_Callback qtableview_editordestroyed_callback = nullptr;
    QTableView_Edit2_Callback qtableview_edit2_callback = nullptr;
    QTableView_SelectionCommand_Callback qtableview_selectioncommand_callback = nullptr;
    QTableView_StartDrag_Callback qtableview_startdrag_callback = nullptr;
    QTableView_FocusNextPrevChild_Callback qtableview_focusnextprevchild_callback = nullptr;
    QTableView_Event_Callback qtableview_event_callback = nullptr;
    QTableView_ViewportEvent_Callback qtableview_viewportevent_callback = nullptr;
    QTableView_MousePressEvent_Callback qtableview_mousepressevent_callback = nullptr;
    QTableView_MouseMoveEvent_Callback qtableview_mousemoveevent_callback = nullptr;
    QTableView_MouseReleaseEvent_Callback qtableview_mousereleaseevent_callback = nullptr;
    QTableView_MouseDoubleClickEvent_Callback qtableview_mousedoubleclickevent_callback = nullptr;
    QTableView_DragEnterEvent_Callback qtableview_dragenterevent_callback = nullptr;
    QTableView_DragMoveEvent_Callback qtableview_dragmoveevent_callback = nullptr;
    QTableView_DragLeaveEvent_Callback qtableview_dragleaveevent_callback = nullptr;
    QTableView_FocusInEvent_Callback qtableview_focusinevent_callback = nullptr;
    QTableView_FocusOutEvent_Callback qtableview_focusoutevent_callback = nullptr;
    QTableView_KeyPressEvent_Callback qtableview_keypressevent_callback = nullptr;
    QTableView_ResizeEvent_Callback qtableview_resizeevent_callback = nullptr;
    QTableView_InputMethodEvent_Callback qtableview_inputmethodevent_callback = nullptr;
    QTableView_EventFilter_Callback qtableview_eventfilter_callback = nullptr;
    QTableView_MinimumSizeHint_Callback qtableview_minimumsizehint_callback = nullptr;
    QTableView_SizeHint_Callback qtableview_sizehint_callback = nullptr;
    QTableView_SetupViewport_Callback qtableview_setupviewport_callback = nullptr;
    QTableView_WheelEvent_Callback qtableview_wheelevent_callback = nullptr;
    QTableView_ContextMenuEvent_Callback qtableview_contextmenuevent_callback = nullptr;
    QTableView_ChangeEvent_Callback qtableview_changeevent_callback = nullptr;
    QTableView_InitStyleOption_Callback qtableview_initstyleoption_callback = nullptr;
    QTableView_DevType_Callback qtableview_devtype_callback = nullptr;
    QTableView_SetVisible_Callback qtableview_setvisible_callback = nullptr;
    QTableView_HeightForWidth_Callback qtableview_heightforwidth_callback = nullptr;
    QTableView_HasHeightForWidth_Callback qtableview_hasheightforwidth_callback = nullptr;
    QTableView_PaintEngine_Callback qtableview_paintengine_callback = nullptr;
    QTableView_KeyReleaseEvent_Callback qtableview_keyreleaseevent_callback = nullptr;
    QTableView_EnterEvent_Callback qtableview_enterevent_callback = nullptr;
    QTableView_LeaveEvent_Callback qtableview_leaveevent_callback = nullptr;
    QTableView_MoveEvent_Callback qtableview_moveevent_callback = nullptr;
    QTableView_CloseEvent_Callback qtableview_closeevent_callback = nullptr;
    QTableView_TabletEvent_Callback qtableview_tabletevent_callback = nullptr;
    QTableView_ActionEvent_Callback qtableview_actionevent_callback = nullptr;
    QTableView_ShowEvent_Callback qtableview_showevent_callback = nullptr;
    QTableView_HideEvent_Callback qtableview_hideevent_callback = nullptr;
    QTableView_NativeEvent_Callback qtableview_nativeevent_callback = nullptr;
    QTableView_Metric_Callback qtableview_metric_callback = nullptr;
    QTableView_InitPainter_Callback qtableview_initpainter_callback = nullptr;
    QTableView_Redirected_Callback qtableview_redirected_callback = nullptr;
    QTableView_SharedPainter_Callback qtableview_sharedpainter_callback = nullptr;
    QTableView_ChildEvent_Callback qtableview_childevent_callback = nullptr;
    QTableView_CustomEvent_Callback qtableview_customevent_callback = nullptr;
    QTableView_ConnectNotify_Callback qtableview_connectnotify_callback = nullptr;
    QTableView_DisconnectNotify_Callback qtableview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTableView {
        using QTableView::actionEvent;
        using QTableView::changeEvent;
        using QTableView::childEvent;
        using QTableView::closeEditor;
        using QTableView::closeEvent;
        using QTableView::commitData;
        using QTableView::connectNotify;
        using QTableView::contextMenuEvent;
        using QTableView::currentChanged;
        using QTableView::customEvent;
        using QTableView::dataChanged;
        using QTableView::disconnectNotify;
        using QTableView::dragEnterEvent;
        using QTableView::dragLeaveEvent;
        using QTableView::dragMoveEvent;
        using QTableView::dropEvent;
        using QTableView::edit;
        using QTableView::editorDestroyed;
        using QTableView::enterEvent;
        using QTableView::event;
        using QTableView::eventFilter;
        using QTableView::focusInEvent;
        using QTableView::focusNextPrevChild;
        using QTableView::focusOutEvent;
        using QTableView::hideEvent;
        using QTableView::horizontalOffset;
        using QTableView::horizontalScrollbarAction;
        using QTableView::horizontalScrollbarValueChanged;
        using QTableView::initPainter;
        using QTableView::initStyleOption;
        using QTableView::initViewItemOption;
        using QTableView::inputMethodEvent;
        using QTableView::isIndexHidden;
        using QTableView::keyPressEvent;
        using QTableView::keyReleaseEvent;
        using QTableView::leaveEvent;
        using QTableView::metric;
        using QTableView::mouseDoubleClickEvent;
        using QTableView::mouseMoveEvent;
        using QTableView::mousePressEvent;
        using QTableView::mouseReleaseEvent;
        using QTableView::moveCursor;
        using QTableView::moveEvent;
        using QTableView::nativeEvent;
        using QTableView::paintEvent;
        using QTableView::redirected;
        using QTableView::resizeEvent;
        using QTableView::rowsAboutToBeRemoved;
        using QTableView::rowsInserted;
        using QTableView::scrollContentsBy;
        using QTableView::selectedIndexes;
        using QTableView::selectionChanged;
        using QTableView::selectionCommand;
        using QTableView::setSelection;
        using QTableView::sharedPainter;
        using QTableView::showEvent;
        using QTableView::sizeHintForColumn;
        using QTableView::sizeHintForRow;
        using QTableView::startDrag;
        using QTableView::tabletEvent;
        using QTableView::timerEvent;
        using QTableView::updateEditorData;
        using QTableView::updateEditorGeometries;
        using QTableView::updateGeometries;
        using QTableView::verticalOffset;
        using QTableView::verticalScrollbarAction;
        using QTableView::verticalScrollbarValueChanged;
        using QTableView::viewportEvent;
        using QTableView::viewportSizeHint;
        using QTableView::visualRegionForSelection;
        using QTableView::wheelEvent;
    };

    VirtualQTableView(QWidget* parent) : QTableView(parent) {};
    VirtualQTableView() : QTableView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtableview_metaobject_callback) {
            QMetaObject* callback_ret = qtableview_metaobject_callback(this);
            return callback_ret;
        }
        return QTableView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtableview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtableview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTableView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtableview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtableview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTableView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qtableview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qtableview_setmodel_callback(this, cbval1);
            return;
        }
        QTableView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtableview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qtableview_setrootindex_callback(this, cbval1);
            return;
        }
        QTableView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtableview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qtableview_setselectionmodel_callback(this, cbval1);
            return;
        }
        QTableView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtableview_doitemslayout_callback) {
            qtableview_doitemslayout_callback(this);
            return;
        }
        QTableView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtableview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qtableview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtableview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qtableview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QTableView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtableview_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = qtableview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtableview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qtableview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QTableView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtableview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qtableview_initviewitemoption_callback(this, cbval1);
            return;
        }
        QTableView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtableview_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qtableview_paintevent_callback(this, cbval1);
            return;
        }
        QTableView::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtableview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtableview_timerevent_callback(this, cbval1);
            return;
        }
        QTableView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtableview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtableview_dropevent_callback(this, cbval1);
            return;
        }
        QTableView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtableview_horizontaloffset_callback) {
            int callback_ret = qtableview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTableView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtableview_verticaloffset_callback) {
            int callback_ret = qtableview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTableView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtableview_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qtableview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtableview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qtableview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QTableView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtableview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qtableview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qtableview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qtableview_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QTableView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtableview_updategeometries_callback) {
            qtableview_updategeometries_callback(this);
            return;
        }
        QTableView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtableview_viewportsizehint_callback) {
            QSize* callback_ret = qtableview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtableview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qtableview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTableView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtableview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qtableview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTableView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtableview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qtableview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QTableView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtableview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qtableview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QTableView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtableview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qtableview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QTableView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtableview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qtableview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QTableView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtableview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qtableview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QTableView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtableview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qtableview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QTableView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtableview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qtableview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QTableView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtableview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qtableview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtableview_reset_callback) {
            qtableview_reset_callback(this);
            return;
        }
        QTableView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtableview_selectall_callback) {
            qtableview_selectall_callback(this);
            return;
        }
        QTableView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtableview_datachanged_callback) {
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
            qtableview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QTableView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtableview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qtableview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTableView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtableview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qtableview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTableView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtableview_updateeditordata_callback) {
            qtableview_updateeditordata_callback(this);
            return;
        }
        QTableView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtableview_updateeditorgeometries_callback) {
            qtableview_updateeditorgeometries_callback(this);
            return;
        }
        QTableView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtableview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qtableview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QTableView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtableview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qtableview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QTableView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtableview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qtableview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QTableView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtableview_commitdata_callback) {
            QWidget* cbval1 = editor;
            qtableview_commitdata_callback(this, cbval1);
            return;
        }
        QTableView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtableview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qtableview_editordestroyed_callback(this, cbval1);
            return;
        }
        QTableView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtableview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qtableview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTableView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtableview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qtableview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QTableView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtableview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qtableview_startdrag_callback(this, cbval1);
            return;
        }
        QTableView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtableview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtableview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTableView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtableview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtableview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTableView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtableview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtableview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QTableView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtableview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtableview_mousepressevent_callback(this, cbval1);
            return;
        }
        QTableView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtableview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtableview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTableView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtableview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtableview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTableView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtableview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtableview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTableView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtableview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtableview_dragenterevent_callback(this, cbval1);
            return;
        }
        QTableView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtableview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtableview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTableView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtableview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtableview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTableView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtableview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtableview_focusinevent_callback(this, cbval1);
            return;
        }
        QTableView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtableview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtableview_focusoutevent_callback(this, cbval1);
            return;
        }
        QTableView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtableview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qtableview_keypressevent_callback(this, cbval1);
            return;
        }
        QTableView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtableview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qtableview_resizeevent_callback(this, cbval1);
            return;
        }
        QTableView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtableview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qtableview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTableView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtableview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qtableview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTableView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtableview_minimumsizehint_callback) {
            QSize* callback_ret = qtableview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtableview_sizehint_callback) {
            QSize* callback_ret = qtableview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtableview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qtableview_setupviewport_callback(this, cbval1);
            return;
        }
        QTableView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtableview_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qtableview_wheelevent_callback(this, cbval1);
            return;
        }
        QTableView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtableview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qtableview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTableView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtableview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qtableview_changeevent_callback(this, cbval1);
            return;
        }
        QTableView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtableview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qtableview_initstyleoption_callback(this, cbval1);
            return;
        }
        QTableView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtableview_devtype_callback) {
            int callback_ret = qtableview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTableView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtableview_setvisible_callback) {
            bool cbval1 = visible;
            qtableview_setvisible_callback(this, cbval1);
            return;
        }
        QTableView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtableview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtableview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTableView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtableview_hasheightforwidth_callback) {
            bool callback_ret = qtableview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTableView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtableview_paintengine_callback) {
            QPaintEngine* callback_ret = qtableview_paintengine_callback(this);
            return callback_ret;
        }
        return QTableView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtableview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtableview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTableView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtableview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtableview_enterevent_callback(this, cbval1);
            return;
        }
        QTableView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtableview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtableview_leaveevent_callback(this, cbval1);
            return;
        }
        QTableView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtableview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtableview_moveevent_callback(this, cbval1);
            return;
        }
        QTableView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtableview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtableview_closeevent_callback(this, cbval1);
            return;
        }
        QTableView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtableview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtableview_tabletevent_callback(this, cbval1);
            return;
        }
        QTableView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtableview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtableview_actionevent_callback(this, cbval1);
            return;
        }
        QTableView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtableview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qtableview_showevent_callback(this, cbval1);
            return;
        }
        QTableView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtableview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtableview_hideevent_callback(this, cbval1);
            return;
        }
        QTableView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtableview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtableview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTableView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtableview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtableview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTableView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtableview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtableview_initpainter_callback(this, cbval1);
            return;
        }
        QTableView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtableview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtableview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTableView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtableview_sharedpainter_callback) {
            QPainter* callback_ret = qtableview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTableView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtableview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtableview_childevent_callback(this, cbval1);
            return;
        }
        QTableView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtableview_customevent_callback) {
            QEvent* cbval1 = event;
            qtableview_customevent_callback(this, cbval1);
            return;
        }
        QTableView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtableview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtableview_connectnotify_callback(this, cbval1);
            return;
        }
        QTableView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtableview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtableview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTableView::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTableView_SuperScrollContentsBy(QTableView* self, int dx, int dy);
    friend void QTableView_SuperInitViewItemOption(const QTableView* self, QStyleOptionViewItem* option);
    friend void QTableView_SuperPaintEvent(QTableView* self, QPaintEvent* e);
    friend void QTableView_SuperTimerEvent(QTableView* self, QTimerEvent* event);
    friend void QTableView_SuperDropEvent(QTableView* self, QDropEvent* event);
    friend int QTableView_SuperHorizontalOffset(const QTableView* self);
    friend int QTableView_SuperVerticalOffset(const QTableView* self);
    friend QModelIndex* QTableView_SuperMoveCursor(QTableView* self, int cursorAction, int modifiers);
    friend void QTableView_SuperSetSelection(QTableView* self, const QRect* rect, int command);
    friend QRegion* QTableView_SuperVisualRegionForSelection(const QTableView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QTableView_SuperSelectedIndexes(const QTableView* self);
    friend void QTableView_SuperUpdateGeometries(QTableView* self);
    friend QSize* QTableView_SuperViewportSizeHint(const QTableView* self);
    friend int QTableView_SuperSizeHintForRow(const QTableView* self, int row);
    friend int QTableView_SuperSizeHintForColumn(const QTableView* self, int column);
    friend void QTableView_SuperVerticalScrollbarAction(QTableView* self, int action);
    friend void QTableView_SuperHorizontalScrollbarAction(QTableView* self, int action);
    friend bool QTableView_SuperIsIndexHidden(const QTableView* self, const QModelIndex* index);
    friend void QTableView_SuperSelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTableView_SuperCurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTableView_SuperDataChanged(QTableView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QTableView_SuperRowsInserted(QTableView* self, const QModelIndex* parent, int start, int end);
    friend void QTableView_SuperRowsAboutToBeRemoved(QTableView* self, const QModelIndex* parent, int start, int end);
    friend void QTableView_SuperUpdateEditorData(QTableView* self);
    friend void QTableView_SuperUpdateEditorGeometries(QTableView* self);
    friend void QTableView_SuperVerticalScrollbarValueChanged(QTableView* self, int value);
    friend void QTableView_SuperHorizontalScrollbarValueChanged(QTableView* self, int value);
    friend void QTableView_SuperCloseEditor(QTableView* self, QWidget* editor, int hint);
    friend void QTableView_SuperCommitData(QTableView* self, QWidget* editor);
    friend void QTableView_SuperEditorDestroyed(QTableView* self, QObject* editor);
    friend bool QTableView_SuperEdit2(QTableView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QTableView_SuperSelectionCommand(const QTableView* self, const QModelIndex* index, const QEvent* event);
    friend void QTableView_SuperStartDrag(QTableView* self, int supportedActions);
    friend bool QTableView_SuperFocusNextPrevChild(QTableView* self, bool next);
    friend bool QTableView_SuperEvent(QTableView* self, QEvent* event);
    friend bool QTableView_SuperViewportEvent(QTableView* self, QEvent* event);
    friend void QTableView_SuperMousePressEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_SuperMouseMoveEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_SuperMouseReleaseEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_SuperMouseDoubleClickEvent(QTableView* self, QMouseEvent* event);
    friend void QTableView_SuperDragEnterEvent(QTableView* self, QDragEnterEvent* event);
    friend void QTableView_SuperDragMoveEvent(QTableView* self, QDragMoveEvent* event);
    friend void QTableView_SuperDragLeaveEvent(QTableView* self, QDragLeaveEvent* event);
    friend void QTableView_SuperFocusInEvent(QTableView* self, QFocusEvent* event);
    friend void QTableView_SuperFocusOutEvent(QTableView* self, QFocusEvent* event);
    friend void QTableView_SuperKeyPressEvent(QTableView* self, QKeyEvent* event);
    friend void QTableView_SuperResizeEvent(QTableView* self, QResizeEvent* event);
    friend void QTableView_SuperInputMethodEvent(QTableView* self, QInputMethodEvent* event);
    friend bool QTableView_SuperEventFilter(QTableView* self, QObject* object, QEvent* event);
    friend void QTableView_SuperWheelEvent(QTableView* self, QWheelEvent* param1);
    friend void QTableView_SuperContextMenuEvent(QTableView* self, QContextMenuEvent* param1);
    friend void QTableView_SuperChangeEvent(QTableView* self, QEvent* param1);
    friend void QTableView_SuperInitStyleOption(const QTableView* self, QStyleOptionFrame* option);
    friend void QTableView_SuperKeyReleaseEvent(QTableView* self, QKeyEvent* event);
    friend void QTableView_SuperEnterEvent(QTableView* self, QEnterEvent* event);
    friend void QTableView_SuperLeaveEvent(QTableView* self, QEvent* event);
    friend void QTableView_SuperMoveEvent(QTableView* self, QMoveEvent* event);
    friend void QTableView_SuperCloseEvent(QTableView* self, QCloseEvent* event);
    friend void QTableView_SuperTabletEvent(QTableView* self, QTabletEvent* event);
    friend void QTableView_SuperActionEvent(QTableView* self, QActionEvent* event);
    friend void QTableView_SuperShowEvent(QTableView* self, QShowEvent* event);
    friend void QTableView_SuperHideEvent(QTableView* self, QHideEvent* event);
    friend bool QTableView_SuperNativeEvent(QTableView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTableView_SuperMetric(const QTableView* self, int param1);
    friend void QTableView_SuperInitPainter(const QTableView* self, QPainter* painter);
    friend QPaintDevice* QTableView_SuperRedirected(const QTableView* self, QPoint* offset);
    friend QPainter* QTableView_SuperSharedPainter(const QTableView* self);
    friend void QTableView_SuperChildEvent(QTableView* self, QChildEvent* event);
    friend void QTableView_SuperCustomEvent(QTableView* self, QEvent* event);
    friend void QTableView_SuperConnectNotify(QTableView* self, const QMetaMethod* signal);
    friend void QTableView_SuperDisconnectNotify(QTableView* self, const QMetaMethod* signal);
};

#endif
