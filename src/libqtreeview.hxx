#pragma once
#ifndef LIBQTREEVIEW_HXX
#define LIBQTREEVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTreeView
class VirtualQTreeView final : public QTreeView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTreeView_MetaObject_Callback = QMetaObject* (*)(const QTreeView*);
    using QTreeView_Metacast_Callback = void* (*)(QTreeView*, const char*);
    using QTreeView_Metacall_Callback = int (*)(QTreeView*, int, int, void**);
    using QTreeView_SetModel_Callback = void (*)(QTreeView*, QAbstractItemModel*);
    using QTreeView_SetRootIndex_Callback = void (*)(QTreeView*, QModelIndex*);
    using QTreeView_SetSelectionModel_Callback = void (*)(QTreeView*, QItemSelectionModel*);
    using QTreeView_KeyboardSearch_Callback = void (*)(QTreeView*, const char*);
    using QTreeView_VisualRect_Callback = QRect* (*)(const QTreeView*, QModelIndex*);
    using QTreeView_ScrollTo_Callback = void (*)(QTreeView*, QModelIndex*, int);
    using QTreeView_IndexAt_Callback = QModelIndex* (*)(const QTreeView*, QPoint*);
    using QTreeView_DoItemsLayout_Callback = void (*)(QTreeView*);
    using QTreeView_Reset_Callback = void (*)(QTreeView*);
    using QTreeView_DataChanged_Callback = void (*)(QTreeView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QTreeView_SelectAll_Callback = void (*)(QTreeView*);
    using QTreeView_VerticalScrollbarValueChanged_Callback = void (*)(QTreeView*, int);
    using QTreeView_ScrollContentsBy_Callback = void (*)(QTreeView*, int, int);
    using QTreeView_RowsInserted_Callback = void (*)(QTreeView*, QModelIndex*, int, int);
    using QTreeView_RowsAboutToBeRemoved_Callback = void (*)(QTreeView*, QModelIndex*, int, int);
    using QTreeView_MoveCursor_Callback = QModelIndex* (*)(QTreeView*, int, int);
    using QTreeView_HorizontalOffset_Callback = int (*)(const QTreeView*);
    using QTreeView_VerticalOffset_Callback = int (*)(const QTreeView*);
    using QTreeView_SetSelection_Callback = void (*)(QTreeView*, QRect*, int);
    using QTreeView_VisualRegionForSelection_Callback = QRegion* (*)(const QTreeView*, QItemSelection*);
    using QTreeView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QTreeView*);
    using QTreeView_ChangeEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_TimerEvent_Callback = void (*)(QTreeView*, QTimerEvent*);
    using QTreeView_PaintEvent_Callback = void (*)(QTreeView*, QPaintEvent*);
    using QTreeView_DrawRow_Callback = void (*)(const QTreeView*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using QTreeView_DrawBranches_Callback = void (*)(const QTreeView*, QPainter*, QRect*, QModelIndex*);
    using QTreeView_MousePressEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseReleaseEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseDoubleClickEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseMoveEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_KeyPressEvent_Callback = void (*)(QTreeView*, QKeyEvent*);
    using QTreeView_DragMoveEvent_Callback = void (*)(QTreeView*, QDragMoveEvent*);
    using QTreeView_ViewportEvent_Callback = bool (*)(QTreeView*, QEvent*);
    using QTreeView_UpdateGeometries_Callback = void (*)(QTreeView*);
    using QTreeView_ViewportSizeHint_Callback = QSize* (*)(const QTreeView*);
    using QTreeView_SizeHintForColumn_Callback = int (*)(const QTreeView*, int);
    using QTreeView_HorizontalScrollbarAction_Callback = void (*)(QTreeView*, int);
    using QTreeView_IsIndexHidden_Callback = bool (*)(const QTreeView*, QModelIndex*);
    using QTreeView_SelectionChanged_Callback = void (*)(QTreeView*, QItemSelection*, QItemSelection*);
    using QTreeView_CurrentChanged_Callback = void (*)(QTreeView*, QModelIndex*, QModelIndex*);
    using QTreeView_SizeHintForRow_Callback = int (*)(const QTreeView*, int);
    using QTreeView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTreeView*, QModelIndex*);
    using QTreeView_InputMethodQuery_Callback = QVariant* (*)(const QTreeView*, int);
    using QTreeView_UpdateEditorData_Callback = void (*)(QTreeView*);
    using QTreeView_UpdateEditorGeometries_Callback = void (*)(QTreeView*);
    using QTreeView_VerticalScrollbarAction_Callback = void (*)(QTreeView*, int);
    using QTreeView_HorizontalScrollbarValueChanged_Callback = void (*)(QTreeView*, int);
    using QTreeView_CloseEditor_Callback = void (*)(QTreeView*, QWidget*, int);
    using QTreeView_CommitData_Callback = void (*)(QTreeView*, QWidget*);
    using QTreeView_EditorDestroyed_Callback = void (*)(QTreeView*, QObject*);
    using QTreeView_Edit2_Callback = bool (*)(QTreeView*, QModelIndex*, int, QEvent*);
    using QTreeView_SelectionCommand_Callback = int (*)(const QTreeView*, QModelIndex*, QEvent*);
    using QTreeView_StartDrag_Callback = void (*)(QTreeView*, int);
    using QTreeView_InitViewItemOption_Callback = void (*)(const QTreeView*, QStyleOptionViewItem*);
    using QTreeView_FocusNextPrevChild_Callback = bool (*)(QTreeView*, bool);
    using QTreeView_Event_Callback = bool (*)(QTreeView*, QEvent*);
    using QTreeView_DragEnterEvent_Callback = void (*)(QTreeView*, QDragEnterEvent*);
    using QTreeView_DragLeaveEvent_Callback = void (*)(QTreeView*, QDragLeaveEvent*);
    using QTreeView_DropEvent_Callback = void (*)(QTreeView*, QDropEvent*);
    using QTreeView_FocusInEvent_Callback = void (*)(QTreeView*, QFocusEvent*);
    using QTreeView_FocusOutEvent_Callback = void (*)(QTreeView*, QFocusEvent*);
    using QTreeView_ResizeEvent_Callback = void (*)(QTreeView*, QResizeEvent*);
    using QTreeView_InputMethodEvent_Callback = void (*)(QTreeView*, QInputMethodEvent*);
    using QTreeView_EventFilter_Callback = bool (*)(QTreeView*, QObject*, QEvent*);
    using QTreeView_MinimumSizeHint_Callback = QSize* (*)(const QTreeView*);
    using QTreeView_SizeHint_Callback = QSize* (*)(const QTreeView*);
    using QTreeView_SetupViewport_Callback = void (*)(QTreeView*, QWidget*);
    using QTreeView_WheelEvent_Callback = void (*)(QTreeView*, QWheelEvent*);
    using QTreeView_ContextMenuEvent_Callback = void (*)(QTreeView*, QContextMenuEvent*);
    using QTreeView_InitStyleOption_Callback = void (*)(const QTreeView*, QStyleOptionFrame*);
    using QTreeView_DevType_Callback = int (*)(const QTreeView*);
    using QTreeView_SetVisible_Callback = void (*)(QTreeView*, bool);
    using QTreeView_HeightForWidth_Callback = int (*)(const QTreeView*, int);
    using QTreeView_HasHeightForWidth_Callback = bool (*)(const QTreeView*);
    using QTreeView_PaintEngine_Callback = QPaintEngine* (*)(const QTreeView*);
    using QTreeView_KeyReleaseEvent_Callback = void (*)(QTreeView*, QKeyEvent*);
    using QTreeView_EnterEvent_Callback = void (*)(QTreeView*, QEnterEvent*);
    using QTreeView_LeaveEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_MoveEvent_Callback = void (*)(QTreeView*, QMoveEvent*);
    using QTreeView_CloseEvent_Callback = void (*)(QTreeView*, QCloseEvent*);
    using QTreeView_TabletEvent_Callback = void (*)(QTreeView*, QTabletEvent*);
    using QTreeView_ActionEvent_Callback = void (*)(QTreeView*, QActionEvent*);
    using QTreeView_ShowEvent_Callback = void (*)(QTreeView*, QShowEvent*);
    using QTreeView_HideEvent_Callback = void (*)(QTreeView*, QHideEvent*);
    using QTreeView_NativeEvent_Callback = bool (*)(QTreeView*, libqt_string, void*, intptr_t*);
    using QTreeView_Metric_Callback = int (*)(const QTreeView*, int);
    using QTreeView_InitPainter_Callback = void (*)(const QTreeView*, QPainter*);
    using QTreeView_Redirected_Callback = QPaintDevice* (*)(const QTreeView*, QPoint*);
    using QTreeView_SharedPainter_Callback = QPainter* (*)(const QTreeView*);
    using QTreeView_ChildEvent_Callback = void (*)(QTreeView*, QChildEvent*);
    using QTreeView_CustomEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_ConnectNotify_Callback = void (*)(QTreeView*, QMetaMethod*);
    using QTreeView_DisconnectNotify_Callback = void (*)(QTreeView*, QMetaMethod*);
    using QTreeView::columnCountChanged;
    using QTreeView::columnMoved;
    using QTreeView::columnResized;
    using QTreeView::create;
    using QTreeView::destroy;
    using QTreeView::dirtyRegionOffset;
    using QTreeView::doAutoScroll;
    using QTreeView::drawFrame;
    using QTreeView::drawTree;
    using QTreeView::dropIndicatorPosition;
    using QTreeView::executeDelayedItemsLayout;
    using QTreeView::focusNextChild;
    using QTreeView::focusPreviousChild;
    using QTreeView::getDecodedMetricF;
    using QTreeView::indexRowSizeHint;
    using QTreeView::isSignalConnected;
    using QTreeView::receivers;
    using QTreeView::reexpand;
    using QTreeView::rowHeight;
    using QTreeView::rowsRemoved;
    using QTreeView::scheduleDelayedItemsLayout;
    using QTreeView::scrollDirtyRegion;
    using QTreeView::sender;
    using QTreeView::senderSignalIndex;
    using QTreeView::setDirtyRegion;
    using QTreeView::setState;
    using QTreeView::setViewportMargins;
    using QTreeView::startAutoScroll;
    using QTreeView::state;
    using QTreeView::stopAutoScroll;
    using QTreeView::updateMicroFocus;
    using QTreeView::viewportMargins;

    // Instance callback storage
    QTreeView_MetaObject_Callback qtreeview_metaobject_callback = nullptr;
    QTreeView_Metacast_Callback qtreeview_metacast_callback = nullptr;
    QTreeView_Metacall_Callback qtreeview_metacall_callback = nullptr;
    QTreeView_SetModel_Callback qtreeview_setmodel_callback = nullptr;
    QTreeView_SetRootIndex_Callback qtreeview_setrootindex_callback = nullptr;
    QTreeView_SetSelectionModel_Callback qtreeview_setselectionmodel_callback = nullptr;
    QTreeView_KeyboardSearch_Callback qtreeview_keyboardsearch_callback = nullptr;
    QTreeView_VisualRect_Callback qtreeview_visualrect_callback = nullptr;
    QTreeView_ScrollTo_Callback qtreeview_scrollto_callback = nullptr;
    QTreeView_IndexAt_Callback qtreeview_indexat_callback = nullptr;
    QTreeView_DoItemsLayout_Callback qtreeview_doitemslayout_callback = nullptr;
    QTreeView_Reset_Callback qtreeview_reset_callback = nullptr;
    QTreeView_DataChanged_Callback qtreeview_datachanged_callback = nullptr;
    QTreeView_SelectAll_Callback qtreeview_selectall_callback = nullptr;
    QTreeView_VerticalScrollbarValueChanged_Callback qtreeview_verticalscrollbarvaluechanged_callback = nullptr;
    QTreeView_ScrollContentsBy_Callback qtreeview_scrollcontentsby_callback = nullptr;
    QTreeView_RowsInserted_Callback qtreeview_rowsinserted_callback = nullptr;
    QTreeView_RowsAboutToBeRemoved_Callback qtreeview_rowsabouttoberemoved_callback = nullptr;
    QTreeView_MoveCursor_Callback qtreeview_movecursor_callback = nullptr;
    QTreeView_HorizontalOffset_Callback qtreeview_horizontaloffset_callback = nullptr;
    QTreeView_VerticalOffset_Callback qtreeview_verticaloffset_callback = nullptr;
    QTreeView_SetSelection_Callback qtreeview_setselection_callback = nullptr;
    QTreeView_VisualRegionForSelection_Callback qtreeview_visualregionforselection_callback = nullptr;
    QTreeView_SelectedIndexes_Callback qtreeview_selectedindexes_callback = nullptr;
    QTreeView_ChangeEvent_Callback qtreeview_changeevent_callback = nullptr;
    QTreeView_TimerEvent_Callback qtreeview_timerevent_callback = nullptr;
    QTreeView_PaintEvent_Callback qtreeview_paintevent_callback = nullptr;
    QTreeView_DrawRow_Callback qtreeview_drawrow_callback = nullptr;
    QTreeView_DrawBranches_Callback qtreeview_drawbranches_callback = nullptr;
    QTreeView_MousePressEvent_Callback qtreeview_mousepressevent_callback = nullptr;
    QTreeView_MouseReleaseEvent_Callback qtreeview_mousereleaseevent_callback = nullptr;
    QTreeView_MouseDoubleClickEvent_Callback qtreeview_mousedoubleclickevent_callback = nullptr;
    QTreeView_MouseMoveEvent_Callback qtreeview_mousemoveevent_callback = nullptr;
    QTreeView_KeyPressEvent_Callback qtreeview_keypressevent_callback = nullptr;
    QTreeView_DragMoveEvent_Callback qtreeview_dragmoveevent_callback = nullptr;
    QTreeView_ViewportEvent_Callback qtreeview_viewportevent_callback = nullptr;
    QTreeView_UpdateGeometries_Callback qtreeview_updategeometries_callback = nullptr;
    QTreeView_ViewportSizeHint_Callback qtreeview_viewportsizehint_callback = nullptr;
    QTreeView_SizeHintForColumn_Callback qtreeview_sizehintforcolumn_callback = nullptr;
    QTreeView_HorizontalScrollbarAction_Callback qtreeview_horizontalscrollbaraction_callback = nullptr;
    QTreeView_IsIndexHidden_Callback qtreeview_isindexhidden_callback = nullptr;
    QTreeView_SelectionChanged_Callback qtreeview_selectionchanged_callback = nullptr;
    QTreeView_CurrentChanged_Callback qtreeview_currentchanged_callback = nullptr;
    QTreeView_SizeHintForRow_Callback qtreeview_sizehintforrow_callback = nullptr;
    QTreeView_ItemDelegateForIndex_Callback qtreeview_itemdelegateforindex_callback = nullptr;
    QTreeView_InputMethodQuery_Callback qtreeview_inputmethodquery_callback = nullptr;
    QTreeView_UpdateEditorData_Callback qtreeview_updateeditordata_callback = nullptr;
    QTreeView_UpdateEditorGeometries_Callback qtreeview_updateeditorgeometries_callback = nullptr;
    QTreeView_VerticalScrollbarAction_Callback qtreeview_verticalscrollbaraction_callback = nullptr;
    QTreeView_HorizontalScrollbarValueChanged_Callback qtreeview_horizontalscrollbarvaluechanged_callback = nullptr;
    QTreeView_CloseEditor_Callback qtreeview_closeeditor_callback = nullptr;
    QTreeView_CommitData_Callback qtreeview_commitdata_callback = nullptr;
    QTreeView_EditorDestroyed_Callback qtreeview_editordestroyed_callback = nullptr;
    QTreeView_Edit2_Callback qtreeview_edit2_callback = nullptr;
    QTreeView_SelectionCommand_Callback qtreeview_selectioncommand_callback = nullptr;
    QTreeView_StartDrag_Callback qtreeview_startdrag_callback = nullptr;
    QTreeView_InitViewItemOption_Callback qtreeview_initviewitemoption_callback = nullptr;
    QTreeView_FocusNextPrevChild_Callback qtreeview_focusnextprevchild_callback = nullptr;
    QTreeView_Event_Callback qtreeview_event_callback = nullptr;
    QTreeView_DragEnterEvent_Callback qtreeview_dragenterevent_callback = nullptr;
    QTreeView_DragLeaveEvent_Callback qtreeview_dragleaveevent_callback = nullptr;
    QTreeView_DropEvent_Callback qtreeview_dropevent_callback = nullptr;
    QTreeView_FocusInEvent_Callback qtreeview_focusinevent_callback = nullptr;
    QTreeView_FocusOutEvent_Callback qtreeview_focusoutevent_callback = nullptr;
    QTreeView_ResizeEvent_Callback qtreeview_resizeevent_callback = nullptr;
    QTreeView_InputMethodEvent_Callback qtreeview_inputmethodevent_callback = nullptr;
    QTreeView_EventFilter_Callback qtreeview_eventfilter_callback = nullptr;
    QTreeView_MinimumSizeHint_Callback qtreeview_minimumsizehint_callback = nullptr;
    QTreeView_SizeHint_Callback qtreeview_sizehint_callback = nullptr;
    QTreeView_SetupViewport_Callback qtreeview_setupviewport_callback = nullptr;
    QTreeView_WheelEvent_Callback qtreeview_wheelevent_callback = nullptr;
    QTreeView_ContextMenuEvent_Callback qtreeview_contextmenuevent_callback = nullptr;
    QTreeView_InitStyleOption_Callback qtreeview_initstyleoption_callback = nullptr;
    QTreeView_DevType_Callback qtreeview_devtype_callback = nullptr;
    QTreeView_SetVisible_Callback qtreeview_setvisible_callback = nullptr;
    QTreeView_HeightForWidth_Callback qtreeview_heightforwidth_callback = nullptr;
    QTreeView_HasHeightForWidth_Callback qtreeview_hasheightforwidth_callback = nullptr;
    QTreeView_PaintEngine_Callback qtreeview_paintengine_callback = nullptr;
    QTreeView_KeyReleaseEvent_Callback qtreeview_keyreleaseevent_callback = nullptr;
    QTreeView_EnterEvent_Callback qtreeview_enterevent_callback = nullptr;
    QTreeView_LeaveEvent_Callback qtreeview_leaveevent_callback = nullptr;
    QTreeView_MoveEvent_Callback qtreeview_moveevent_callback = nullptr;
    QTreeView_CloseEvent_Callback qtreeview_closeevent_callback = nullptr;
    QTreeView_TabletEvent_Callback qtreeview_tabletevent_callback = nullptr;
    QTreeView_ActionEvent_Callback qtreeview_actionevent_callback = nullptr;
    QTreeView_ShowEvent_Callback qtreeview_showevent_callback = nullptr;
    QTreeView_HideEvent_Callback qtreeview_hideevent_callback = nullptr;
    QTreeView_NativeEvent_Callback qtreeview_nativeevent_callback = nullptr;
    QTreeView_Metric_Callback qtreeview_metric_callback = nullptr;
    QTreeView_InitPainter_Callback qtreeview_initpainter_callback = nullptr;
    QTreeView_Redirected_Callback qtreeview_redirected_callback = nullptr;
    QTreeView_SharedPainter_Callback qtreeview_sharedpainter_callback = nullptr;
    QTreeView_ChildEvent_Callback qtreeview_childevent_callback = nullptr;
    QTreeView_CustomEvent_Callback qtreeview_customevent_callback = nullptr;
    QTreeView_ConnectNotify_Callback qtreeview_connectnotify_callback = nullptr;
    QTreeView_DisconnectNotify_Callback qtreeview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTreeView {
        using QTreeView::actionEvent;
        using QTreeView::changeEvent;
        using QTreeView::childEvent;
        using QTreeView::closeEditor;
        using QTreeView::closeEvent;
        using QTreeView::commitData;
        using QTreeView::connectNotify;
        using QTreeView::contextMenuEvent;
        using QTreeView::currentChanged;
        using QTreeView::customEvent;
        using QTreeView::disconnectNotify;
        using QTreeView::dragEnterEvent;
        using QTreeView::dragLeaveEvent;
        using QTreeView::dragMoveEvent;
        using QTreeView::drawBranches;
        using QTreeView::drawRow;
        using QTreeView::dropEvent;
        using QTreeView::edit;
        using QTreeView::editorDestroyed;
        using QTreeView::enterEvent;
        using QTreeView::event;
        using QTreeView::eventFilter;
        using QTreeView::focusInEvent;
        using QTreeView::focusNextPrevChild;
        using QTreeView::focusOutEvent;
        using QTreeView::hideEvent;
        using QTreeView::horizontalOffset;
        using QTreeView::horizontalScrollbarAction;
        using QTreeView::horizontalScrollbarValueChanged;
        using QTreeView::initPainter;
        using QTreeView::initStyleOption;
        using QTreeView::initViewItemOption;
        using QTreeView::inputMethodEvent;
        using QTreeView::isIndexHidden;
        using QTreeView::keyPressEvent;
        using QTreeView::keyReleaseEvent;
        using QTreeView::leaveEvent;
        using QTreeView::metric;
        using QTreeView::mouseDoubleClickEvent;
        using QTreeView::mouseMoveEvent;
        using QTreeView::mousePressEvent;
        using QTreeView::mouseReleaseEvent;
        using QTreeView::moveCursor;
        using QTreeView::moveEvent;
        using QTreeView::nativeEvent;
        using QTreeView::paintEvent;
        using QTreeView::redirected;
        using QTreeView::resizeEvent;
        using QTreeView::rowsAboutToBeRemoved;
        using QTreeView::rowsInserted;
        using QTreeView::scrollContentsBy;
        using QTreeView::selectedIndexes;
        using QTreeView::selectionChanged;
        using QTreeView::selectionCommand;
        using QTreeView::setSelection;
        using QTreeView::sharedPainter;
        using QTreeView::showEvent;
        using QTreeView::sizeHintForColumn;
        using QTreeView::startDrag;
        using QTreeView::tabletEvent;
        using QTreeView::timerEvent;
        using QTreeView::updateEditorData;
        using QTreeView::updateEditorGeometries;
        using QTreeView::updateGeometries;
        using QTreeView::verticalOffset;
        using QTreeView::verticalScrollbarAction;
        using QTreeView::verticalScrollbarValueChanged;
        using QTreeView::viewportEvent;
        using QTreeView::viewportSizeHint;
        using QTreeView::visualRegionForSelection;
        using QTreeView::wheelEvent;
    };

    VirtualQTreeView(QWidget* parent) : QTreeView(parent) {};
    VirtualQTreeView() : QTreeView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtreeview_metaobject_callback) {
            QMetaObject* callback_ret = qtreeview_metaobject_callback(this);
            return callback_ret;
        }
        return QTreeView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtreeview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtreeview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtreeview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtreeview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qtreeview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qtreeview_setmodel_callback(this, cbval1);
            return;
        }
        QTreeView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtreeview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qtreeview_setrootindex_callback(this, cbval1);
            return;
        }
        QTreeView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtreeview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qtreeview_setselectionmodel_callback(this, cbval1);
            return;
        }
        QTreeView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtreeview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qtreeview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QTreeView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtreeview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qtreeview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtreeview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qtreeview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QTreeView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtreeview_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = qtreeview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtreeview_doitemslayout_callback) {
            qtreeview_doitemslayout_callback(this);
            return;
        }
        QTreeView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtreeview_reset_callback) {
            qtreeview_reset_callback(this);
            return;
        }
        QTreeView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtreeview_datachanged_callback) {
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
            qtreeview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QTreeView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtreeview_selectall_callback) {
            qtreeview_selectall_callback(this);
            return;
        }
        QTreeView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtreeview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qtreeview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QTreeView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtreeview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qtreeview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QTreeView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtreeview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qtreeview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtreeview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qtreeview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtreeview_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qtreeview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtreeview_horizontaloffset_callback) {
            int callback_ret = qtreeview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtreeview_verticaloffset_callback) {
            int callback_ret = qtreeview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtreeview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qtreeview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QTreeView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtreeview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qtreeview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qtreeview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qtreeview_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QTreeView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtreeview_changeevent_callback) {
            QEvent* cbval1 = event;
            qtreeview_changeevent_callback(this, cbval1);
            return;
        }
        QTreeView::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtreeview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtreeview_timerevent_callback(this, cbval1);
            return;
        }
        QTreeView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtreeview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qtreeview_paintevent_callback(this, cbval1);
            return;
        }
        QTreeView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
        if (qtreeview_drawrow_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& options_ret = options;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&options_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qtreeview_drawrow_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::drawRow(painter, options, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
        if (qtreeview_drawbranches_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qtreeview_drawbranches_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeView::drawBranches(painter, rect, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtreeview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtreeview_mousepressevent_callback(this, cbval1);
            return;
        }
        QTreeView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtreeview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtreeview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTreeView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtreeview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtreeview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTreeView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtreeview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtreeview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTreeView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtreeview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qtreeview_keypressevent_callback(this, cbval1);
            return;
        }
        QTreeView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtreeview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtreeview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTreeView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtreeview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtreeview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtreeview_updategeometries_callback) {
            qtreeview_updategeometries_callback(this);
            return;
        }
        QTreeView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtreeview_viewportsizehint_callback) {
            QSize* callback_ret = qtreeview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtreeview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qtreeview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtreeview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qtreeview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QTreeView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtreeview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qtreeview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtreeview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qtreeview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QTreeView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtreeview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qtreeview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QTreeView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtreeview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qtreeview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtreeview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qtreeview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtreeview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qtreeview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtreeview_updateeditordata_callback) {
            qtreeview_updateeditordata_callback(this);
            return;
        }
        QTreeView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtreeview_updateeditorgeometries_callback) {
            qtreeview_updateeditorgeometries_callback(this);
            return;
        }
        QTreeView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtreeview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qtreeview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QTreeView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtreeview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qtreeview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QTreeView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtreeview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qtreeview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QTreeView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtreeview_commitdata_callback) {
            QWidget* cbval1 = editor;
            qtreeview_commitdata_callback(this, cbval1);
            return;
        }
        QTreeView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtreeview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qtreeview_editordestroyed_callback(this, cbval1);
            return;
        }
        QTreeView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtreeview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qtreeview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTreeView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtreeview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qtreeview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QTreeView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtreeview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qtreeview_startdrag_callback(this, cbval1);
            return;
        }
        QTreeView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtreeview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qtreeview_initviewitemoption_callback(this, cbval1);
            return;
        }
        QTreeView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtreeview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtreeview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtreeview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtreeview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtreeview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtreeview_dragenterevent_callback(this, cbval1);
            return;
        }
        QTreeView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtreeview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtreeview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTreeView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtreeview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtreeview_dropevent_callback(this, cbval1);
            return;
        }
        QTreeView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtreeview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtreeview_focusinevent_callback(this, cbval1);
            return;
        }
        QTreeView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtreeview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtreeview_focusoutevent_callback(this, cbval1);
            return;
        }
        QTreeView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtreeview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qtreeview_resizeevent_callback(this, cbval1);
            return;
        }
        QTreeView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtreeview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qtreeview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTreeView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtreeview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qtreeview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTreeView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtreeview_minimumsizehint_callback) {
            QSize* callback_ret = qtreeview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtreeview_sizehint_callback) {
            QSize* callback_ret = qtreeview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtreeview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qtreeview_setupviewport_callback(this, cbval1);
            return;
        }
        QTreeView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtreeview_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qtreeview_wheelevent_callback(this, cbval1);
            return;
        }
        QTreeView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtreeview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qtreeview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTreeView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtreeview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qtreeview_initstyleoption_callback(this, cbval1);
            return;
        }
        QTreeView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtreeview_devtype_callback) {
            int callback_ret = qtreeview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtreeview_setvisible_callback) {
            bool cbval1 = visible;
            qtreeview_setvisible_callback(this, cbval1);
            return;
        }
        QTreeView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtreeview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtreeview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtreeview_hasheightforwidth_callback) {
            bool callback_ret = qtreeview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTreeView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtreeview_paintengine_callback) {
            QPaintEngine* callback_ret = qtreeview_paintengine_callback(this);
            return callback_ret;
        }
        return QTreeView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtreeview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtreeview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTreeView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtreeview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtreeview_enterevent_callback(this, cbval1);
            return;
        }
        QTreeView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtreeview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtreeview_leaveevent_callback(this, cbval1);
            return;
        }
        QTreeView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtreeview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtreeview_moveevent_callback(this, cbval1);
            return;
        }
        QTreeView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtreeview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtreeview_closeevent_callback(this, cbval1);
            return;
        }
        QTreeView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtreeview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtreeview_tabletevent_callback(this, cbval1);
            return;
        }
        QTreeView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtreeview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtreeview_actionevent_callback(this, cbval1);
            return;
        }
        QTreeView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtreeview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qtreeview_showevent_callback(this, cbval1);
            return;
        }
        QTreeView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtreeview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtreeview_hideevent_callback(this, cbval1);
            return;
        }
        QTreeView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtreeview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtreeview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTreeView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtreeview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtreeview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtreeview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtreeview_initpainter_callback(this, cbval1);
            return;
        }
        QTreeView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtreeview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtreeview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtreeview_sharedpainter_callback) {
            QPainter* callback_ret = qtreeview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTreeView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtreeview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtreeview_childevent_callback(this, cbval1);
            return;
        }
        QTreeView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtreeview_customevent_callback) {
            QEvent* cbval1 = event;
            qtreeview_customevent_callback(this, cbval1);
            return;
        }
        QTreeView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtreeview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtreeview_connectnotify_callback(this, cbval1);
            return;
        }
        QTreeView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtreeview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtreeview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTreeView::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTreeView_SuperVerticalScrollbarValueChanged(QTreeView* self, int value);
    friend void QTreeView_SuperScrollContentsBy(QTreeView* self, int dx, int dy);
    friend void QTreeView_SuperRowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end);
    friend void QTreeView_SuperRowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end);
    friend QModelIndex* QTreeView_SuperMoveCursor(QTreeView* self, int cursorAction, int modifiers);
    friend int QTreeView_SuperHorizontalOffset(const QTreeView* self);
    friend int QTreeView_SuperVerticalOffset(const QTreeView* self);
    friend void QTreeView_SuperSetSelection(QTreeView* self, const QRect* rect, int command);
    friend QRegion* QTreeView_SuperVisualRegionForSelection(const QTreeView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QTreeView_SuperSelectedIndexes(const QTreeView* self);
    friend void QTreeView_SuperChangeEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_SuperTimerEvent(QTreeView* self, QTimerEvent* event);
    friend void QTreeView_SuperPaintEvent(QTreeView* self, QPaintEvent* event);
    friend void QTreeView_SuperDrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index);
    friend void QTreeView_SuperDrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index);
    friend void QTreeView_SuperMousePressEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_SuperMouseReleaseEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_SuperMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_SuperMouseMoveEvent(QTreeView* self, QMouseEvent* event);
    friend void QTreeView_SuperKeyPressEvent(QTreeView* self, QKeyEvent* event);
    friend void QTreeView_SuperDragMoveEvent(QTreeView* self, QDragMoveEvent* event);
    friend bool QTreeView_SuperViewportEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_SuperUpdateGeometries(QTreeView* self);
    friend QSize* QTreeView_SuperViewportSizeHint(const QTreeView* self);
    friend int QTreeView_SuperSizeHintForColumn(const QTreeView* self, int column);
    friend void QTreeView_SuperHorizontalScrollbarAction(QTreeView* self, int action);
    friend bool QTreeView_SuperIsIndexHidden(const QTreeView* self, const QModelIndex* index);
    friend void QTreeView_SuperSelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTreeView_SuperCurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTreeView_SuperUpdateEditorData(QTreeView* self);
    friend void QTreeView_SuperUpdateEditorGeometries(QTreeView* self);
    friend void QTreeView_SuperVerticalScrollbarAction(QTreeView* self, int action);
    friend void QTreeView_SuperHorizontalScrollbarValueChanged(QTreeView* self, int value);
    friend void QTreeView_SuperCloseEditor(QTreeView* self, QWidget* editor, int hint);
    friend void QTreeView_SuperCommitData(QTreeView* self, QWidget* editor);
    friend void QTreeView_SuperEditorDestroyed(QTreeView* self, QObject* editor);
    friend bool QTreeView_SuperEdit2(QTreeView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QTreeView_SuperSelectionCommand(const QTreeView* self, const QModelIndex* index, const QEvent* event);
    friend void QTreeView_SuperStartDrag(QTreeView* self, int supportedActions);
    friend void QTreeView_SuperInitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option);
    friend bool QTreeView_SuperFocusNextPrevChild(QTreeView* self, bool next);
    friend bool QTreeView_SuperEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_SuperDragEnterEvent(QTreeView* self, QDragEnterEvent* event);
    friend void QTreeView_SuperDragLeaveEvent(QTreeView* self, QDragLeaveEvent* event);
    friend void QTreeView_SuperDropEvent(QTreeView* self, QDropEvent* event);
    friend void QTreeView_SuperFocusInEvent(QTreeView* self, QFocusEvent* event);
    friend void QTreeView_SuperFocusOutEvent(QTreeView* self, QFocusEvent* event);
    friend void QTreeView_SuperResizeEvent(QTreeView* self, QResizeEvent* event);
    friend void QTreeView_SuperInputMethodEvent(QTreeView* self, QInputMethodEvent* event);
    friend bool QTreeView_SuperEventFilter(QTreeView* self, QObject* object, QEvent* event);
    friend void QTreeView_SuperWheelEvent(QTreeView* self, QWheelEvent* param1);
    friend void QTreeView_SuperContextMenuEvent(QTreeView* self, QContextMenuEvent* param1);
    friend void QTreeView_SuperInitStyleOption(const QTreeView* self, QStyleOptionFrame* option);
    friend void QTreeView_SuperKeyReleaseEvent(QTreeView* self, QKeyEvent* event);
    friend void QTreeView_SuperEnterEvent(QTreeView* self, QEnterEvent* event);
    friend void QTreeView_SuperLeaveEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_SuperMoveEvent(QTreeView* self, QMoveEvent* event);
    friend void QTreeView_SuperCloseEvent(QTreeView* self, QCloseEvent* event);
    friend void QTreeView_SuperTabletEvent(QTreeView* self, QTabletEvent* event);
    friend void QTreeView_SuperActionEvent(QTreeView* self, QActionEvent* event);
    friend void QTreeView_SuperShowEvent(QTreeView* self, QShowEvent* event);
    friend void QTreeView_SuperHideEvent(QTreeView* self, QHideEvent* event);
    friend bool QTreeView_SuperNativeEvent(QTreeView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTreeView_SuperMetric(const QTreeView* self, int param1);
    friend void QTreeView_SuperInitPainter(const QTreeView* self, QPainter* painter);
    friend QPaintDevice* QTreeView_SuperRedirected(const QTreeView* self, QPoint* offset);
    friend QPainter* QTreeView_SuperSharedPainter(const QTreeView* self);
    friend void QTreeView_SuperChildEvent(QTreeView* self, QChildEvent* event);
    friend void QTreeView_SuperCustomEvent(QTreeView* self, QEvent* event);
    friend void QTreeView_SuperConnectNotify(QTreeView* self, const QMetaMethod* signal);
    friend void QTreeView_SuperDisconnectNotify(QTreeView* self, const QMetaMethod* signal);
};

#endif
