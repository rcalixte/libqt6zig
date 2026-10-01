#pragma once
#ifndef LIBQCOLUMNVIEW_HXX
#define LIBQCOLUMNVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QColumnView
class VirtualQColumnView final : public QColumnView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QColumnView_MetaObject_Callback = QMetaObject* (*)(const QColumnView*);
    using QColumnView_Metacast_Callback = void* (*)(QColumnView*, const char*);
    using QColumnView_Metacall_Callback = int (*)(QColumnView*, int, int, void**);
    using QColumnView_IndexAt_Callback = QModelIndex* (*)(const QColumnView*, QPoint*);
    using QColumnView_ScrollTo_Callback = void (*)(QColumnView*, QModelIndex*, int);
    using QColumnView_SizeHint_Callback = QSize* (*)(const QColumnView*);
    using QColumnView_VisualRect_Callback = QRect* (*)(const QColumnView*, QModelIndex*);
    using QColumnView_SetModel_Callback = void (*)(QColumnView*, QAbstractItemModel*);
    using QColumnView_SetSelectionModel_Callback = void (*)(QColumnView*, QItemSelectionModel*);
    using QColumnView_SetRootIndex_Callback = void (*)(QColumnView*, QModelIndex*);
    using QColumnView_SelectAll_Callback = void (*)(QColumnView*);
    using QColumnView_IsIndexHidden_Callback = bool (*)(const QColumnView*, QModelIndex*);
    using QColumnView_MoveCursor_Callback = QModelIndex* (*)(QColumnView*, int, int);
    using QColumnView_ResizeEvent_Callback = void (*)(QColumnView*, QResizeEvent*);
    using QColumnView_SetSelection_Callback = void (*)(QColumnView*, QRect*, int);
    using QColumnView_VisualRegionForSelection_Callback = QRegion* (*)(const QColumnView*, QItemSelection*);
    using QColumnView_HorizontalOffset_Callback = int (*)(const QColumnView*);
    using QColumnView_VerticalOffset_Callback = int (*)(const QColumnView*);
    using QColumnView_RowsInserted_Callback = void (*)(QColumnView*, QModelIndex*, int, int);
    using QColumnView_CurrentChanged_Callback = void (*)(QColumnView*, QModelIndex*, QModelIndex*);
    using QColumnView_ScrollContentsBy_Callback = void (*)(QColumnView*, int, int);
    using QColumnView_CreateColumn_Callback = QAbstractItemView* (*)(QColumnView*, QModelIndex*);
    using QColumnView_KeyboardSearch_Callback = void (*)(QColumnView*, const char*);
    using QColumnView_SizeHintForRow_Callback = int (*)(const QColumnView*, int);
    using QColumnView_SizeHintForColumn_Callback = int (*)(const QColumnView*, int);
    using QColumnView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QColumnView*, QModelIndex*);
    using QColumnView_InputMethodQuery_Callback = QVariant* (*)(const QColumnView*, int);
    using QColumnView_Reset_Callback = void (*)(QColumnView*);
    using QColumnView_DoItemsLayout_Callback = void (*)(QColumnView*);
    using QColumnView_DataChanged_Callback = void (*)(QColumnView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QColumnView_RowsAboutToBeRemoved_Callback = void (*)(QColumnView*, QModelIndex*, int, int);
    using QColumnView_SelectionChanged_Callback = void (*)(QColumnView*, QItemSelection*, QItemSelection*);
    using QColumnView_UpdateEditorData_Callback = void (*)(QColumnView*);
    using QColumnView_UpdateEditorGeometries_Callback = void (*)(QColumnView*);
    using QColumnView_UpdateGeometries_Callback = void (*)(QColumnView*);
    using QColumnView_VerticalScrollbarAction_Callback = void (*)(QColumnView*, int);
    using QColumnView_HorizontalScrollbarAction_Callback = void (*)(QColumnView*, int);
    using QColumnView_VerticalScrollbarValueChanged_Callback = void (*)(QColumnView*, int);
    using QColumnView_HorizontalScrollbarValueChanged_Callback = void (*)(QColumnView*, int);
    using QColumnView_CloseEditor_Callback = void (*)(QColumnView*, QWidget*, int);
    using QColumnView_CommitData_Callback = void (*)(QColumnView*, QWidget*);
    using QColumnView_EditorDestroyed_Callback = void (*)(QColumnView*, QObject*);
    using QColumnView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QColumnView*);
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
    using QColumnView_ViewportSizeHint_Callback = QSize* (*)(const QColumnView*);
    using QColumnView_MinimumSizeHint_Callback = QSize* (*)(const QColumnView*);
    using QColumnView_SetupViewport_Callback = void (*)(QColumnView*, QWidget*);
    using QColumnView_PaintEvent_Callback = void (*)(QColumnView*, QPaintEvent*);
    using QColumnView_WheelEvent_Callback = void (*)(QColumnView*, QWheelEvent*);
    using QColumnView_ContextMenuEvent_Callback = void (*)(QColumnView*, QContextMenuEvent*);
    using QColumnView_ChangeEvent_Callback = void (*)(QColumnView*, QEvent*);
    using QColumnView_InitStyleOption_Callback = void (*)(const QColumnView*, QStyleOptionFrame*);
    using QColumnView_DevType_Callback = int (*)(const QColumnView*);
    using QColumnView_SetVisible_Callback = void (*)(QColumnView*, bool);
    using QColumnView_HeightForWidth_Callback = int (*)(const QColumnView*, int);
    using QColumnView_HasHeightForWidth_Callback = bool (*)(const QColumnView*);
    using QColumnView_PaintEngine_Callback = QPaintEngine* (*)(const QColumnView*);
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
    using QColumnView_SharedPainter_Callback = QPainter* (*)(const QColumnView*);
    using QColumnView_ChildEvent_Callback = void (*)(QColumnView*, QChildEvent*);
    using QColumnView_CustomEvent_Callback = void (*)(QColumnView*, QEvent*);
    using QColumnView_ConnectNotify_Callback = void (*)(QColumnView*, QMetaMethod*);
    using QColumnView_DisconnectNotify_Callback = void (*)(QColumnView*, QMetaMethod*);
    using QColumnView::create;
    using QColumnView::destroy;
    using QColumnView::dirtyRegionOffset;
    using QColumnView::doAutoScroll;
    using QColumnView::drawFrame;
    using QColumnView::dropIndicatorPosition;
    using QColumnView::executeDelayedItemsLayout;
    using QColumnView::focusNextChild;
    using QColumnView::focusPreviousChild;
    using QColumnView::getDecodedMetricF;
    using QColumnView::initializeColumn;
    using QColumnView::isSignalConnected;
    using QColumnView::receivers;
    using QColumnView::scheduleDelayedItemsLayout;
    using QColumnView::scrollDirtyRegion;
    using QColumnView::sender;
    using QColumnView::senderSignalIndex;
    using QColumnView::setDirtyRegion;
    using QColumnView::setState;
    using QColumnView::setViewportMargins;
    using QColumnView::startAutoScroll;
    using QColumnView::state;
    using QColumnView::stopAutoScroll;
    using QColumnView::updateMicroFocus;
    using QColumnView::viewportMargins;

    // Instance callback storage
    QColumnView_MetaObject_Callback qcolumnview_metaobject_callback = nullptr;
    QColumnView_Metacast_Callback qcolumnview_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QColumnView {
        using QColumnView::actionEvent;
        using QColumnView::changeEvent;
        using QColumnView::childEvent;
        using QColumnView::closeEditor;
        using QColumnView::closeEvent;
        using QColumnView::commitData;
        using QColumnView::connectNotify;
        using QColumnView::contextMenuEvent;
        using QColumnView::createColumn;
        using QColumnView::currentChanged;
        using QColumnView::customEvent;
        using QColumnView::dataChanged;
        using QColumnView::disconnectNotify;
        using QColumnView::dragEnterEvent;
        using QColumnView::dragLeaveEvent;
        using QColumnView::dragMoveEvent;
        using QColumnView::dropEvent;
        using QColumnView::edit;
        using QColumnView::editorDestroyed;
        using QColumnView::enterEvent;
        using QColumnView::event;
        using QColumnView::eventFilter;
        using QColumnView::focusInEvent;
        using QColumnView::focusNextPrevChild;
        using QColumnView::focusOutEvent;
        using QColumnView::hideEvent;
        using QColumnView::horizontalOffset;
        using QColumnView::horizontalScrollbarAction;
        using QColumnView::horizontalScrollbarValueChanged;
        using QColumnView::initPainter;
        using QColumnView::initStyleOption;
        using QColumnView::initViewItemOption;
        using QColumnView::inputMethodEvent;
        using QColumnView::isIndexHidden;
        using QColumnView::keyPressEvent;
        using QColumnView::keyReleaseEvent;
        using QColumnView::leaveEvent;
        using QColumnView::metric;
        using QColumnView::mouseDoubleClickEvent;
        using QColumnView::mouseMoveEvent;
        using QColumnView::mousePressEvent;
        using QColumnView::mouseReleaseEvent;
        using QColumnView::moveCursor;
        using QColumnView::moveEvent;
        using QColumnView::nativeEvent;
        using QColumnView::paintEvent;
        using QColumnView::redirected;
        using QColumnView::resizeEvent;
        using QColumnView::rowsAboutToBeRemoved;
        using QColumnView::rowsInserted;
        using QColumnView::scrollContentsBy;
        using QColumnView::selectedIndexes;
        using QColumnView::selectionChanged;
        using QColumnView::selectionCommand;
        using QColumnView::setSelection;
        using QColumnView::sharedPainter;
        using QColumnView::showEvent;
        using QColumnView::startDrag;
        using QColumnView::tabletEvent;
        using QColumnView::timerEvent;
        using QColumnView::updateEditorData;
        using QColumnView::updateEditorGeometries;
        using QColumnView::updateGeometries;
        using QColumnView::verticalOffset;
        using QColumnView::verticalScrollbarAction;
        using QColumnView::verticalScrollbarValueChanged;
        using QColumnView::viewportEvent;
        using QColumnView::viewportSizeHint;
        using QColumnView::visualRegionForSelection;
        using QColumnView::wheelEvent;
    };

    VirtualQColumnView(QWidget* parent) : QColumnView(parent) {};
    VirtualQColumnView() : QColumnView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcolumnview_metaobject_callback) {
            QMetaObject* callback_ret = qcolumnview_metaobject_callback(this);
            return callback_ret;
        }
        return QColumnView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcolumnview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcolumnview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QColumnView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcolumnview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcolumnview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QColumnView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& point) const override {
        if (qcolumnview_indexat_callback) {
            const QPoint& point_ret = point;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&point_ret);
            QModelIndex* callback_ret = qcolumnview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColumnView::indexAt(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qcolumnview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qcolumnview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QColumnView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcolumnview_sizehint_callback) {
            QSize* callback_ret = qcolumnview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColumnView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qcolumnview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qcolumnview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColumnView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qcolumnview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qcolumnview_setmodel_callback(this, cbval1);
            return;
        }
        QColumnView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qcolumnview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qcolumnview_setselectionmodel_callback(this, cbval1);
            return;
        }
        QColumnView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qcolumnview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qcolumnview_setrootindex_callback(this, cbval1);
            return;
        }
        QColumnView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qcolumnview_selectall_callback) {
            qcolumnview_selectall_callback(this);
            return;
        }
        QColumnView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qcolumnview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qcolumnview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QColumnView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qcolumnview_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qcolumnview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColumnView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcolumnview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qcolumnview_resizeevent_callback(this, cbval1);
            return;
        }
        QColumnView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qcolumnview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qcolumnview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QColumnView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qcolumnview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qcolumnview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColumnView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qcolumnview_horizontaloffset_callback) {
            int callback_ret = qcolumnview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QColumnView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qcolumnview_verticaloffset_callback) {
            int callback_ret = qcolumnview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QColumnView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qcolumnview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qcolumnview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QColumnView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qcolumnview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qcolumnview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QColumnView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qcolumnview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qcolumnview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QColumnView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createColumn(const QModelIndex& rootIndex) override {
        if (qcolumnview_createcolumn_callback) {
            const QModelIndex& rootIndex_ret = rootIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&rootIndex_ret);
            QAbstractItemView* callback_ret = qcolumnview_createcolumn_callback(this, cbval1);
            return callback_ret;
        }
        return QColumnView::createColumn(rootIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qcolumnview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qcolumnview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QColumnView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qcolumnview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qcolumnview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QColumnView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qcolumnview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qcolumnview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QColumnView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qcolumnview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qcolumnview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QColumnView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qcolumnview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qcolumnview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColumnView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qcolumnview_reset_callback) {
            qcolumnview_reset_callback(this);
            return;
        }
        QColumnView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qcolumnview_doitemslayout_callback) {
            qcolumnview_doitemslayout_callback(this);
            return;
        }
        QColumnView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qcolumnview_datachanged_callback) {
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
            qcolumnview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QColumnView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qcolumnview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qcolumnview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QColumnView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qcolumnview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qcolumnview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QColumnView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qcolumnview_updateeditordata_callback) {
            qcolumnview_updateeditordata_callback(this);
            return;
        }
        QColumnView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qcolumnview_updateeditorgeometries_callback) {
            qcolumnview_updateeditorgeometries_callback(this);
            return;
        }
        QColumnView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qcolumnview_updategeometries_callback) {
            qcolumnview_updategeometries_callback(this);
            return;
        }
        QColumnView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qcolumnview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qcolumnview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QColumnView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qcolumnview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qcolumnview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QColumnView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qcolumnview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qcolumnview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QColumnView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qcolumnview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qcolumnview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QColumnView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qcolumnview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qcolumnview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QColumnView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qcolumnview_commitdata_callback) {
            QWidget* cbval1 = editor;
            qcolumnview_commitdata_callback(this, cbval1);
            return;
        }
        QColumnView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qcolumnview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qcolumnview_editordestroyed_callback(this, cbval1);
            return;
        }
        QColumnView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qcolumnview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qcolumnview_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QColumnView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qcolumnview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qcolumnview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QColumnView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qcolumnview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qcolumnview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QColumnView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qcolumnview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qcolumnview_startdrag_callback(this, cbval1);
            return;
        }
        QColumnView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qcolumnview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qcolumnview_initviewitemoption_callback(this, cbval1);
            return;
        }
        QColumnView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcolumnview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qcolumnview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QColumnView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcolumnview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcolumnview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QColumnView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qcolumnview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcolumnview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QColumnView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qcolumnview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qcolumnview_mousepressevent_callback(this, cbval1);
            return;
        }
        QColumnView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcolumnview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qcolumnview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QColumnView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qcolumnview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qcolumnview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QColumnView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcolumnview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qcolumnview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QColumnView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcolumnview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qcolumnview_dragenterevent_callback(this, cbval1);
            return;
        }
        QColumnView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcolumnview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qcolumnview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QColumnView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcolumnview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qcolumnview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QColumnView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcolumnview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qcolumnview_dropevent_callback(this, cbval1);
            return;
        }
        QColumnView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qcolumnview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qcolumnview_focusinevent_callback(this, cbval1);
            return;
        }
        QColumnView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qcolumnview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qcolumnview_focusoutevent_callback(this, cbval1);
            return;
        }
        QColumnView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qcolumnview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qcolumnview_keypressevent_callback(this, cbval1);
            return;
        }
        QColumnView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcolumnview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcolumnview_timerevent_callback(this, cbval1);
            return;
        }
        QColumnView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qcolumnview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qcolumnview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QColumnView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qcolumnview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qcolumnview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QColumnView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qcolumnview_viewportsizehint_callback) {
            QSize* callback_ret = qcolumnview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColumnView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcolumnview_minimumsizehint_callback) {
            QSize* callback_ret = qcolumnview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QColumnView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qcolumnview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qcolumnview_setupviewport_callback(this, cbval1);
            return;
        }
        QColumnView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qcolumnview_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qcolumnview_paintevent_callback(this, cbval1);
            return;
        }
        QColumnView::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qcolumnview_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qcolumnview_wheelevent_callback(this, cbval1);
            return;
        }
        QColumnView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qcolumnview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qcolumnview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QColumnView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qcolumnview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qcolumnview_changeevent_callback(this, cbval1);
            return;
        }
        QColumnView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qcolumnview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qcolumnview_initstyleoption_callback(this, cbval1);
            return;
        }
        QColumnView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcolumnview_devtype_callback) {
            int callback_ret = qcolumnview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QColumnView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcolumnview_setvisible_callback) {
            bool cbval1 = visible;
            qcolumnview_setvisible_callback(this, cbval1);
            return;
        }
        QColumnView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcolumnview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qcolumnview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QColumnView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcolumnview_hasheightforwidth_callback) {
            bool callback_ret = qcolumnview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QColumnView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcolumnview_paintengine_callback) {
            QPaintEngine* callback_ret = qcolumnview_paintengine_callback(this);
            return callback_ret;
        }
        return QColumnView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qcolumnview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qcolumnview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QColumnView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcolumnview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qcolumnview_enterevent_callback(this, cbval1);
            return;
        }
        QColumnView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcolumnview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qcolumnview_leaveevent_callback(this, cbval1);
            return;
        }
        QColumnView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcolumnview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qcolumnview_moveevent_callback(this, cbval1);
            return;
        }
        QColumnView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcolumnview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qcolumnview_closeevent_callback(this, cbval1);
            return;
        }
        QColumnView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcolumnview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qcolumnview_tabletevent_callback(this, cbval1);
            return;
        }
        QColumnView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcolumnview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qcolumnview_actionevent_callback(this, cbval1);
            return;
        }
        QColumnView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcolumnview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qcolumnview_showevent_callback(this, cbval1);
            return;
        }
        QColumnView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcolumnview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qcolumnview_hideevent_callback(this, cbval1);
            return;
        }
        QColumnView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcolumnview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qcolumnview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QColumnView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcolumnview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qcolumnview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QColumnView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcolumnview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qcolumnview_initpainter_callback(this, cbval1);
            return;
        }
        QColumnView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcolumnview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qcolumnview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QColumnView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcolumnview_sharedpainter_callback) {
            QPainter* callback_ret = qcolumnview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QColumnView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcolumnview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcolumnview_childevent_callback(this, cbval1);
            return;
        }
        QColumnView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcolumnview_customevent_callback) {
            QEvent* cbval1 = event;
            qcolumnview_customevent_callback(this, cbval1);
            return;
        }
        QColumnView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcolumnview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcolumnview_connectnotify_callback(this, cbval1);
            return;
        }
        QColumnView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcolumnview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcolumnview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QColumnView::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QColumnView_SuperIsIndexHidden(const QColumnView* self, const QModelIndex* index);
    friend QModelIndex* QColumnView_SuperMoveCursor(QColumnView* self, int cursorAction, int modifiers);
    friend void QColumnView_SuperResizeEvent(QColumnView* self, QResizeEvent* event);
    friend void QColumnView_SuperSetSelection(QColumnView* self, const QRect* rect, int command);
    friend QRegion* QColumnView_SuperVisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
    friend int QColumnView_SuperHorizontalOffset(const QColumnView* self);
    friend int QColumnView_SuperVerticalOffset(const QColumnView* self);
    friend void QColumnView_SuperRowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
    friend void QColumnView_SuperCurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QColumnView_SuperScrollContentsBy(QColumnView* self, int dx, int dy);
    friend QAbstractItemView* QColumnView_SuperCreateColumn(QColumnView* self, const QModelIndex* rootIndex);
    friend void QColumnView_SuperDataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QColumnView_SuperRowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end);
    friend void QColumnView_SuperSelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QColumnView_SuperUpdateEditorData(QColumnView* self);
    friend void QColumnView_SuperUpdateEditorGeometries(QColumnView* self);
    friend void QColumnView_SuperUpdateGeometries(QColumnView* self);
    friend void QColumnView_SuperVerticalScrollbarAction(QColumnView* self, int action);
    friend void QColumnView_SuperHorizontalScrollbarAction(QColumnView* self, int action);
    friend void QColumnView_SuperVerticalScrollbarValueChanged(QColumnView* self, int value);
    friend void QColumnView_SuperHorizontalScrollbarValueChanged(QColumnView* self, int value);
    friend void QColumnView_SuperCloseEditor(QColumnView* self, QWidget* editor, int hint);
    friend void QColumnView_SuperCommitData(QColumnView* self, QWidget* editor);
    friend void QColumnView_SuperEditorDestroyed(QColumnView* self, QObject* editor);
    friend libqt_list /* of QModelIndex* */ QColumnView_SuperSelectedIndexes(const QColumnView* self);
    friend bool QColumnView_SuperEdit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QColumnView_SuperSelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event);
    friend void QColumnView_SuperStartDrag(QColumnView* self, int supportedActions);
    friend void QColumnView_SuperInitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option);
    friend bool QColumnView_SuperFocusNextPrevChild(QColumnView* self, bool next);
    friend bool QColumnView_SuperEvent(QColumnView* self, QEvent* event);
    friend bool QColumnView_SuperViewportEvent(QColumnView* self, QEvent* event);
    friend void QColumnView_SuperMousePressEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_SuperMouseMoveEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_SuperMouseReleaseEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_SuperMouseDoubleClickEvent(QColumnView* self, QMouseEvent* event);
    friend void QColumnView_SuperDragEnterEvent(QColumnView* self, QDragEnterEvent* event);
    friend void QColumnView_SuperDragMoveEvent(QColumnView* self, QDragMoveEvent* event);
    friend void QColumnView_SuperDragLeaveEvent(QColumnView* self, QDragLeaveEvent* event);
    friend void QColumnView_SuperDropEvent(QColumnView* self, QDropEvent* event);
    friend void QColumnView_SuperFocusInEvent(QColumnView* self, QFocusEvent* event);
    friend void QColumnView_SuperFocusOutEvent(QColumnView* self, QFocusEvent* event);
    friend void QColumnView_SuperKeyPressEvent(QColumnView* self, QKeyEvent* event);
    friend void QColumnView_SuperTimerEvent(QColumnView* self, QTimerEvent* event);
    friend void QColumnView_SuperInputMethodEvent(QColumnView* self, QInputMethodEvent* event);
    friend bool QColumnView_SuperEventFilter(QColumnView* self, QObject* object, QEvent* event);
    friend QSize* QColumnView_SuperViewportSizeHint(const QColumnView* self);
    friend void QColumnView_SuperPaintEvent(QColumnView* self, QPaintEvent* param1);
    friend void QColumnView_SuperWheelEvent(QColumnView* self, QWheelEvent* param1);
    friend void QColumnView_SuperContextMenuEvent(QColumnView* self, QContextMenuEvent* param1);
    friend void QColumnView_SuperChangeEvent(QColumnView* self, QEvent* param1);
    friend void QColumnView_SuperInitStyleOption(const QColumnView* self, QStyleOptionFrame* option);
    friend void QColumnView_SuperKeyReleaseEvent(QColumnView* self, QKeyEvent* event);
    friend void QColumnView_SuperEnterEvent(QColumnView* self, QEnterEvent* event);
    friend void QColumnView_SuperLeaveEvent(QColumnView* self, QEvent* event);
    friend void QColumnView_SuperMoveEvent(QColumnView* self, QMoveEvent* event);
    friend void QColumnView_SuperCloseEvent(QColumnView* self, QCloseEvent* event);
    friend void QColumnView_SuperTabletEvent(QColumnView* self, QTabletEvent* event);
    friend void QColumnView_SuperActionEvent(QColumnView* self, QActionEvent* event);
    friend void QColumnView_SuperShowEvent(QColumnView* self, QShowEvent* event);
    friend void QColumnView_SuperHideEvent(QColumnView* self, QHideEvent* event);
    friend bool QColumnView_SuperNativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QColumnView_SuperMetric(const QColumnView* self, int param1);
    friend void QColumnView_SuperInitPainter(const QColumnView* self, QPainter* painter);
    friend QPaintDevice* QColumnView_SuperRedirected(const QColumnView* self, QPoint* offset);
    friend QPainter* QColumnView_SuperSharedPainter(const QColumnView* self);
    friend void QColumnView_SuperChildEvent(QColumnView* self, QChildEvent* event);
    friend void QColumnView_SuperCustomEvent(QColumnView* self, QEvent* event);
    friend void QColumnView_SuperConnectNotify(QColumnView* self, const QMetaMethod* signal);
    friend void QColumnView_SuperDisconnectNotify(QColumnView* self, const QMetaMethod* signal);
};

#endif
