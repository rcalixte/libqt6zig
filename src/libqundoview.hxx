#pragma once
#ifndef LIBQUNDOVIEW_HXX
#define LIBQUNDOVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QUndoView
class VirtualQUndoView final : public QUndoView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QUndoView_MetaObject_Callback = QMetaObject* (*)(const QUndoView*);
    using QUndoView_Metacast_Callback = void* (*)(QUndoView*, const char*);
    using QUndoView_Metacall_Callback = int (*)(QUndoView*, int, int, void**);
    using QUndoView_VisualRect_Callback = QRect* (*)(const QUndoView*, QModelIndex*);
    using QUndoView_ScrollTo_Callback = void (*)(QUndoView*, QModelIndex*, int);
    using QUndoView_IndexAt_Callback = QModelIndex* (*)(const QUndoView*, QPoint*);
    using QUndoView_DoItemsLayout_Callback = void (*)(QUndoView*);
    using QUndoView_Reset_Callback = void (*)(QUndoView*);
    using QUndoView_SetRootIndex_Callback = void (*)(QUndoView*, QModelIndex*);
    using QUndoView_Event_Callback = bool (*)(QUndoView*, QEvent*);
    using QUndoView_ScrollContentsBy_Callback = void (*)(QUndoView*, int, int);
    using QUndoView_DataChanged_Callback = void (*)(QUndoView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QUndoView_RowsInserted_Callback = void (*)(QUndoView*, QModelIndex*, int, int);
    using QUndoView_RowsAboutToBeRemoved_Callback = void (*)(QUndoView*, QModelIndex*, int, int);
    using QUndoView_MouseMoveEvent_Callback = void (*)(QUndoView*, QMouseEvent*);
    using QUndoView_MouseReleaseEvent_Callback = void (*)(QUndoView*, QMouseEvent*);
    using QUndoView_WheelEvent_Callback = void (*)(QUndoView*, QWheelEvent*);
    using QUndoView_TimerEvent_Callback = void (*)(QUndoView*, QTimerEvent*);
    using QUndoView_ResizeEvent_Callback = void (*)(QUndoView*, QResizeEvent*);
    using QUndoView_DragMoveEvent_Callback = void (*)(QUndoView*, QDragMoveEvent*);
    using QUndoView_DragLeaveEvent_Callback = void (*)(QUndoView*, QDragLeaveEvent*);
    using QUndoView_DropEvent_Callback = void (*)(QUndoView*, QDropEvent*);
    using QUndoView_StartDrag_Callback = void (*)(QUndoView*, int);
    using QUndoView_InitViewItemOption_Callback = void (*)(const QUndoView*, QStyleOptionViewItem*);
    using QUndoView_PaintEvent_Callback = void (*)(QUndoView*, QPaintEvent*);
    using QUndoView_HorizontalOffset_Callback = int (*)(const QUndoView*);
    using QUndoView_VerticalOffset_Callback = int (*)(const QUndoView*);
    using QUndoView_MoveCursor_Callback = QModelIndex* (*)(QUndoView*, int, int);
    using QUndoView_SetSelection_Callback = void (*)(QUndoView*, QRect*, int);
    using QUndoView_VisualRegionForSelection_Callback = QRegion* (*)(const QUndoView*, QItemSelection*);
    using QUndoView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QUndoView*);
    using QUndoView_UpdateGeometries_Callback = void (*)(QUndoView*);
    using QUndoView_IsIndexHidden_Callback = bool (*)(const QUndoView*, QModelIndex*);
    using QUndoView_SelectionChanged_Callback = void (*)(QUndoView*, QItemSelection*, QItemSelection*);
    using QUndoView_CurrentChanged_Callback = void (*)(QUndoView*, QModelIndex*, QModelIndex*);
    using QUndoView_ViewportSizeHint_Callback = QSize* (*)(const QUndoView*);
    using QUndoView_SetModel_Callback = void (*)(QUndoView*, QAbstractItemModel*);
    using QUndoView_SetSelectionModel_Callback = void (*)(QUndoView*, QItemSelectionModel*);
    using QUndoView_KeyboardSearch_Callback = void (*)(QUndoView*, const char*);
    using QUndoView_SizeHintForRow_Callback = int (*)(const QUndoView*, int);
    using QUndoView_SizeHintForColumn_Callback = int (*)(const QUndoView*, int);
    using QUndoView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QUndoView*, QModelIndex*);
    using QUndoView_InputMethodQuery_Callback = QVariant* (*)(const QUndoView*, int);
    using QUndoView_SelectAll_Callback = void (*)(QUndoView*);
    using QUndoView_UpdateEditorData_Callback = void (*)(QUndoView*);
    using QUndoView_UpdateEditorGeometries_Callback = void (*)(QUndoView*);
    using QUndoView_VerticalScrollbarAction_Callback = void (*)(QUndoView*, int);
    using QUndoView_HorizontalScrollbarAction_Callback = void (*)(QUndoView*, int);
    using QUndoView_VerticalScrollbarValueChanged_Callback = void (*)(QUndoView*, int);
    using QUndoView_HorizontalScrollbarValueChanged_Callback = void (*)(QUndoView*, int);
    using QUndoView_CloseEditor_Callback = void (*)(QUndoView*, QWidget*, int);
    using QUndoView_CommitData_Callback = void (*)(QUndoView*, QWidget*);
    using QUndoView_EditorDestroyed_Callback = void (*)(QUndoView*, QObject*);
    using QUndoView_Edit2_Callback = bool (*)(QUndoView*, QModelIndex*, int, QEvent*);
    using QUndoView_SelectionCommand_Callback = int (*)(const QUndoView*, QModelIndex*, QEvent*);
    using QUndoView_FocusNextPrevChild_Callback = bool (*)(QUndoView*, bool);
    using QUndoView_ViewportEvent_Callback = bool (*)(QUndoView*, QEvent*);
    using QUndoView_MousePressEvent_Callback = void (*)(QUndoView*, QMouseEvent*);
    using QUndoView_MouseDoubleClickEvent_Callback = void (*)(QUndoView*, QMouseEvent*);
    using QUndoView_DragEnterEvent_Callback = void (*)(QUndoView*, QDragEnterEvent*);
    using QUndoView_FocusInEvent_Callback = void (*)(QUndoView*, QFocusEvent*);
    using QUndoView_FocusOutEvent_Callback = void (*)(QUndoView*, QFocusEvent*);
    using QUndoView_KeyPressEvent_Callback = void (*)(QUndoView*, QKeyEvent*);
    using QUndoView_InputMethodEvent_Callback = void (*)(QUndoView*, QInputMethodEvent*);
    using QUndoView_EventFilter_Callback = bool (*)(QUndoView*, QObject*, QEvent*);
    using QUndoView_MinimumSizeHint_Callback = QSize* (*)(const QUndoView*);
    using QUndoView_SizeHint_Callback = QSize* (*)(const QUndoView*);
    using QUndoView_SetupViewport_Callback = void (*)(QUndoView*, QWidget*);
    using QUndoView_ContextMenuEvent_Callback = void (*)(QUndoView*, QContextMenuEvent*);
    using QUndoView_ChangeEvent_Callback = void (*)(QUndoView*, QEvent*);
    using QUndoView_InitStyleOption_Callback = void (*)(const QUndoView*, QStyleOptionFrame*);
    using QUndoView_DevType_Callback = int (*)(const QUndoView*);
    using QUndoView_SetVisible_Callback = void (*)(QUndoView*, bool);
    using QUndoView_HeightForWidth_Callback = int (*)(const QUndoView*, int);
    using QUndoView_HasHeightForWidth_Callback = bool (*)(const QUndoView*);
    using QUndoView_PaintEngine_Callback = QPaintEngine* (*)(const QUndoView*);
    using QUndoView_KeyReleaseEvent_Callback = void (*)(QUndoView*, QKeyEvent*);
    using QUndoView_EnterEvent_Callback = void (*)(QUndoView*, QEnterEvent*);
    using QUndoView_LeaveEvent_Callback = void (*)(QUndoView*, QEvent*);
    using QUndoView_MoveEvent_Callback = void (*)(QUndoView*, QMoveEvent*);
    using QUndoView_CloseEvent_Callback = void (*)(QUndoView*, QCloseEvent*);
    using QUndoView_TabletEvent_Callback = void (*)(QUndoView*, QTabletEvent*);
    using QUndoView_ActionEvent_Callback = void (*)(QUndoView*, QActionEvent*);
    using QUndoView_ShowEvent_Callback = void (*)(QUndoView*, QShowEvent*);
    using QUndoView_HideEvent_Callback = void (*)(QUndoView*, QHideEvent*);
    using QUndoView_NativeEvent_Callback = bool (*)(QUndoView*, libqt_string, void*, intptr_t*);
    using QUndoView_Metric_Callback = int (*)(const QUndoView*, int);
    using QUndoView_InitPainter_Callback = void (*)(const QUndoView*, QPainter*);
    using QUndoView_Redirected_Callback = QPaintDevice* (*)(const QUndoView*, QPoint*);
    using QUndoView_SharedPainter_Callback = QPainter* (*)(const QUndoView*);
    using QUndoView_ChildEvent_Callback = void (*)(QUndoView*, QChildEvent*);
    using QUndoView_CustomEvent_Callback = void (*)(QUndoView*, QEvent*);
    using QUndoView_ConnectNotify_Callback = void (*)(QUndoView*, QMetaMethod*);
    using QUndoView_DisconnectNotify_Callback = void (*)(QUndoView*, QMetaMethod*);
    using QUndoView::contentsSize;
    using QUndoView::create;
    using QUndoView::destroy;
    using QUndoView::dirtyRegionOffset;
    using QUndoView::doAutoScroll;
    using QUndoView::drawFrame;
    using QUndoView::dropIndicatorPosition;
    using QUndoView::executeDelayedItemsLayout;
    using QUndoView::focusNextChild;
    using QUndoView::focusPreviousChild;
    using QUndoView::getDecodedMetricF;
    using QUndoView::isSignalConnected;
    using QUndoView::receivers;
    using QUndoView::rectForIndex;
    using QUndoView::resizeContents;
    using QUndoView::scheduleDelayedItemsLayout;
    using QUndoView::scrollDirtyRegion;
    using QUndoView::sender;
    using QUndoView::senderSignalIndex;
    using QUndoView::setDirtyRegion;
    using QUndoView::setPositionForIndex;
    using QUndoView::setState;
    using QUndoView::setViewportMargins;
    using QUndoView::startAutoScroll;
    using QUndoView::state;
    using QUndoView::stopAutoScroll;
    using QUndoView::updateMicroFocus;
    using QUndoView::viewportMargins;

    // Instance callback storage
    QUndoView_MetaObject_Callback qundoview_metaobject_callback = nullptr;
    QUndoView_Metacast_Callback qundoview_metacast_callback = nullptr;
    QUndoView_Metacall_Callback qundoview_metacall_callback = nullptr;
    QUndoView_VisualRect_Callback qundoview_visualrect_callback = nullptr;
    QUndoView_ScrollTo_Callback qundoview_scrollto_callback = nullptr;
    QUndoView_IndexAt_Callback qundoview_indexat_callback = nullptr;
    QUndoView_DoItemsLayout_Callback qundoview_doitemslayout_callback = nullptr;
    QUndoView_Reset_Callback qundoview_reset_callback = nullptr;
    QUndoView_SetRootIndex_Callback qundoview_setrootindex_callback = nullptr;
    QUndoView_Event_Callback qundoview_event_callback = nullptr;
    QUndoView_ScrollContentsBy_Callback qundoview_scrollcontentsby_callback = nullptr;
    QUndoView_DataChanged_Callback qundoview_datachanged_callback = nullptr;
    QUndoView_RowsInserted_Callback qundoview_rowsinserted_callback = nullptr;
    QUndoView_RowsAboutToBeRemoved_Callback qundoview_rowsabouttoberemoved_callback = nullptr;
    QUndoView_MouseMoveEvent_Callback qundoview_mousemoveevent_callback = nullptr;
    QUndoView_MouseReleaseEvent_Callback qundoview_mousereleaseevent_callback = nullptr;
    QUndoView_WheelEvent_Callback qundoview_wheelevent_callback = nullptr;
    QUndoView_TimerEvent_Callback qundoview_timerevent_callback = nullptr;
    QUndoView_ResizeEvent_Callback qundoview_resizeevent_callback = nullptr;
    QUndoView_DragMoveEvent_Callback qundoview_dragmoveevent_callback = nullptr;
    QUndoView_DragLeaveEvent_Callback qundoview_dragleaveevent_callback = nullptr;
    QUndoView_DropEvent_Callback qundoview_dropevent_callback = nullptr;
    QUndoView_StartDrag_Callback qundoview_startdrag_callback = nullptr;
    QUndoView_InitViewItemOption_Callback qundoview_initviewitemoption_callback = nullptr;
    QUndoView_PaintEvent_Callback qundoview_paintevent_callback = nullptr;
    QUndoView_HorizontalOffset_Callback qundoview_horizontaloffset_callback = nullptr;
    QUndoView_VerticalOffset_Callback qundoview_verticaloffset_callback = nullptr;
    QUndoView_MoveCursor_Callback qundoview_movecursor_callback = nullptr;
    QUndoView_SetSelection_Callback qundoview_setselection_callback = nullptr;
    QUndoView_VisualRegionForSelection_Callback qundoview_visualregionforselection_callback = nullptr;
    QUndoView_SelectedIndexes_Callback qundoview_selectedindexes_callback = nullptr;
    QUndoView_UpdateGeometries_Callback qundoview_updategeometries_callback = nullptr;
    QUndoView_IsIndexHidden_Callback qundoview_isindexhidden_callback = nullptr;
    QUndoView_SelectionChanged_Callback qundoview_selectionchanged_callback = nullptr;
    QUndoView_CurrentChanged_Callback qundoview_currentchanged_callback = nullptr;
    QUndoView_ViewportSizeHint_Callback qundoview_viewportsizehint_callback = nullptr;
    QUndoView_SetModel_Callback qundoview_setmodel_callback = nullptr;
    QUndoView_SetSelectionModel_Callback qundoview_setselectionmodel_callback = nullptr;
    QUndoView_KeyboardSearch_Callback qundoview_keyboardsearch_callback = nullptr;
    QUndoView_SizeHintForRow_Callback qundoview_sizehintforrow_callback = nullptr;
    QUndoView_SizeHintForColumn_Callback qundoview_sizehintforcolumn_callback = nullptr;
    QUndoView_ItemDelegateForIndex_Callback qundoview_itemdelegateforindex_callback = nullptr;
    QUndoView_InputMethodQuery_Callback qundoview_inputmethodquery_callback = nullptr;
    QUndoView_SelectAll_Callback qundoview_selectall_callback = nullptr;
    QUndoView_UpdateEditorData_Callback qundoview_updateeditordata_callback = nullptr;
    QUndoView_UpdateEditorGeometries_Callback qundoview_updateeditorgeometries_callback = nullptr;
    QUndoView_VerticalScrollbarAction_Callback qundoview_verticalscrollbaraction_callback = nullptr;
    QUndoView_HorizontalScrollbarAction_Callback qundoview_horizontalscrollbaraction_callback = nullptr;
    QUndoView_VerticalScrollbarValueChanged_Callback qundoview_verticalscrollbarvaluechanged_callback = nullptr;
    QUndoView_HorizontalScrollbarValueChanged_Callback qundoview_horizontalscrollbarvaluechanged_callback = nullptr;
    QUndoView_CloseEditor_Callback qundoview_closeeditor_callback = nullptr;
    QUndoView_CommitData_Callback qundoview_commitdata_callback = nullptr;
    QUndoView_EditorDestroyed_Callback qundoview_editordestroyed_callback = nullptr;
    QUndoView_Edit2_Callback qundoview_edit2_callback = nullptr;
    QUndoView_SelectionCommand_Callback qundoview_selectioncommand_callback = nullptr;
    QUndoView_FocusNextPrevChild_Callback qundoview_focusnextprevchild_callback = nullptr;
    QUndoView_ViewportEvent_Callback qundoview_viewportevent_callback = nullptr;
    QUndoView_MousePressEvent_Callback qundoview_mousepressevent_callback = nullptr;
    QUndoView_MouseDoubleClickEvent_Callback qundoview_mousedoubleclickevent_callback = nullptr;
    QUndoView_DragEnterEvent_Callback qundoview_dragenterevent_callback = nullptr;
    QUndoView_FocusInEvent_Callback qundoview_focusinevent_callback = nullptr;
    QUndoView_FocusOutEvent_Callback qundoview_focusoutevent_callback = nullptr;
    QUndoView_KeyPressEvent_Callback qundoview_keypressevent_callback = nullptr;
    QUndoView_InputMethodEvent_Callback qundoview_inputmethodevent_callback = nullptr;
    QUndoView_EventFilter_Callback qundoview_eventfilter_callback = nullptr;
    QUndoView_MinimumSizeHint_Callback qundoview_minimumsizehint_callback = nullptr;
    QUndoView_SizeHint_Callback qundoview_sizehint_callback = nullptr;
    QUndoView_SetupViewport_Callback qundoview_setupviewport_callback = nullptr;
    QUndoView_ContextMenuEvent_Callback qundoview_contextmenuevent_callback = nullptr;
    QUndoView_ChangeEvent_Callback qundoview_changeevent_callback = nullptr;
    QUndoView_InitStyleOption_Callback qundoview_initstyleoption_callback = nullptr;
    QUndoView_DevType_Callback qundoview_devtype_callback = nullptr;
    QUndoView_SetVisible_Callback qundoview_setvisible_callback = nullptr;
    QUndoView_HeightForWidth_Callback qundoview_heightforwidth_callback = nullptr;
    QUndoView_HasHeightForWidth_Callback qundoview_hasheightforwidth_callback = nullptr;
    QUndoView_PaintEngine_Callback qundoview_paintengine_callback = nullptr;
    QUndoView_KeyReleaseEvent_Callback qundoview_keyreleaseevent_callback = nullptr;
    QUndoView_EnterEvent_Callback qundoview_enterevent_callback = nullptr;
    QUndoView_LeaveEvent_Callback qundoview_leaveevent_callback = nullptr;
    QUndoView_MoveEvent_Callback qundoview_moveevent_callback = nullptr;
    QUndoView_CloseEvent_Callback qundoview_closeevent_callback = nullptr;
    QUndoView_TabletEvent_Callback qundoview_tabletevent_callback = nullptr;
    QUndoView_ActionEvent_Callback qundoview_actionevent_callback = nullptr;
    QUndoView_ShowEvent_Callback qundoview_showevent_callback = nullptr;
    QUndoView_HideEvent_Callback qundoview_hideevent_callback = nullptr;
    QUndoView_NativeEvent_Callback qundoview_nativeevent_callback = nullptr;
    QUndoView_Metric_Callback qundoview_metric_callback = nullptr;
    QUndoView_InitPainter_Callback qundoview_initpainter_callback = nullptr;
    QUndoView_Redirected_Callback qundoview_redirected_callback = nullptr;
    QUndoView_SharedPainter_Callback qundoview_sharedpainter_callback = nullptr;
    QUndoView_ChildEvent_Callback qundoview_childevent_callback = nullptr;
    QUndoView_CustomEvent_Callback qundoview_customevent_callback = nullptr;
    QUndoView_ConnectNotify_Callback qundoview_connectnotify_callback = nullptr;
    QUndoView_DisconnectNotify_Callback qundoview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QUndoView {
        using QUndoView::actionEvent;
        using QUndoView::changeEvent;
        using QUndoView::childEvent;
        using QUndoView::closeEditor;
        using QUndoView::closeEvent;
        using QUndoView::commitData;
        using QUndoView::connectNotify;
        using QUndoView::contextMenuEvent;
        using QUndoView::currentChanged;
        using QUndoView::customEvent;
        using QUndoView::dataChanged;
        using QUndoView::disconnectNotify;
        using QUndoView::dragEnterEvent;
        using QUndoView::dragLeaveEvent;
        using QUndoView::dragMoveEvent;
        using QUndoView::dropEvent;
        using QUndoView::edit;
        using QUndoView::editorDestroyed;
        using QUndoView::enterEvent;
        using QUndoView::event;
        using QUndoView::eventFilter;
        using QUndoView::focusInEvent;
        using QUndoView::focusNextPrevChild;
        using QUndoView::focusOutEvent;
        using QUndoView::hideEvent;
        using QUndoView::horizontalOffset;
        using QUndoView::horizontalScrollbarAction;
        using QUndoView::horizontalScrollbarValueChanged;
        using QUndoView::initPainter;
        using QUndoView::initStyleOption;
        using QUndoView::initViewItemOption;
        using QUndoView::inputMethodEvent;
        using QUndoView::isIndexHidden;
        using QUndoView::keyPressEvent;
        using QUndoView::keyReleaseEvent;
        using QUndoView::leaveEvent;
        using QUndoView::metric;
        using QUndoView::mouseDoubleClickEvent;
        using QUndoView::mouseMoveEvent;
        using QUndoView::mousePressEvent;
        using QUndoView::mouseReleaseEvent;
        using QUndoView::moveCursor;
        using QUndoView::moveEvent;
        using QUndoView::nativeEvent;
        using QUndoView::paintEvent;
        using QUndoView::redirected;
        using QUndoView::resizeEvent;
        using QUndoView::rowsAboutToBeRemoved;
        using QUndoView::rowsInserted;
        using QUndoView::scrollContentsBy;
        using QUndoView::selectedIndexes;
        using QUndoView::selectionChanged;
        using QUndoView::selectionCommand;
        using QUndoView::setSelection;
        using QUndoView::sharedPainter;
        using QUndoView::showEvent;
        using QUndoView::startDrag;
        using QUndoView::tabletEvent;
        using QUndoView::timerEvent;
        using QUndoView::updateEditorData;
        using QUndoView::updateEditorGeometries;
        using QUndoView::updateGeometries;
        using QUndoView::verticalOffset;
        using QUndoView::verticalScrollbarAction;
        using QUndoView::verticalScrollbarValueChanged;
        using QUndoView::viewportEvent;
        using QUndoView::viewportSizeHint;
        using QUndoView::visualRegionForSelection;
        using QUndoView::wheelEvent;
    };

    VirtualQUndoView(QWidget* parent) : QUndoView(parent) {};
    VirtualQUndoView() : QUndoView() {};
    VirtualQUndoView(QUndoStack* stack) : QUndoView(stack) {};
    VirtualQUndoView(QUndoGroup* group) : QUndoView(group) {};
    VirtualQUndoView(QUndoStack* stack, QWidget* parent) : QUndoView(stack, parent) {};
    VirtualQUndoView(QUndoGroup* group, QWidget* parent) : QUndoView(group, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qundoview_metaobject_callback) {
            QMetaObject* callback_ret = qundoview_metaobject_callback(this);
            return callback_ret;
        }
        return QUndoView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qundoview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qundoview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundoview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qundoview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qundoview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qundoview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QUndoView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qundoview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qundoview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QUndoView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qundoview_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = qundoview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QUndoView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qundoview_doitemslayout_callback) {
            qundoview_doitemslayout_callback(this);
            return;
        }
        QUndoView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qundoview_reset_callback) {
            qundoview_reset_callback(this);
            return;
        }
        QUndoView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qundoview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qundoview_setrootindex_callback(this, cbval1);
            return;
        }
        QUndoView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qundoview_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qundoview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoView::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qundoview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qundoview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QUndoView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qundoview_datachanged_callback) {
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
            qundoview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QUndoView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qundoview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qundoview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QUndoView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qundoview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qundoview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QUndoView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qundoview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qundoview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QUndoView::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qundoview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qundoview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QUndoView::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qundoview_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qundoview_wheelevent_callback(this, cbval1);
            return;
        }
        QUndoView::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qundoview_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qundoview_timerevent_callback(this, cbval1);
            return;
        }
        QUndoView::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qundoview_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qundoview_resizeevent_callback(this, cbval1);
            return;
        }
        QUndoView::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qundoview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qundoview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QUndoView::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qundoview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qundoview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QUndoView::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qundoview_dropevent_callback) {
            QDropEvent* cbval1 = e;
            qundoview_dropevent_callback(this, cbval1);
            return;
        }
        QUndoView::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qundoview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qundoview_startdrag_callback(this, cbval1);
            return;
        }
        QUndoView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qundoview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qundoview_initviewitemoption_callback(this, cbval1);
            return;
        }
        QUndoView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qundoview_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qundoview_paintevent_callback(this, cbval1);
            return;
        }
        QUndoView::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qundoview_horizontaloffset_callback) {
            int callback_ret = qundoview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qundoview_verticaloffset_callback) {
            int callback_ret = qundoview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qundoview_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qundoview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QUndoView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qundoview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qundoview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QUndoView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qundoview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qundoview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QUndoView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qundoview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qundoview_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QUndoView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qundoview_updategeometries_callback) {
            qundoview_updategeometries_callback(this);
            return;
        }
        QUndoView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qundoview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qundoview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qundoview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qundoview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QUndoView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qundoview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qundoview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QUndoView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qundoview_viewportsizehint_callback) {
            QSize* callback_ret = qundoview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QUndoView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qundoview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qundoview_setmodel_callback(this, cbval1);
            return;
        }
        QUndoView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qundoview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qundoview_setselectionmodel_callback(this, cbval1);
            return;
        }
        QUndoView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qundoview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qundoview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QUndoView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qundoview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qundoview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qundoview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qundoview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qundoview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qundoview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qundoview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qundoview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QUndoView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qundoview_selectall_callback) {
            qundoview_selectall_callback(this);
            return;
        }
        QUndoView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qundoview_updateeditordata_callback) {
            qundoview_updateeditordata_callback(this);
            return;
        }
        QUndoView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qundoview_updateeditorgeometries_callback) {
            qundoview_updateeditorgeometries_callback(this);
            return;
        }
        QUndoView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qundoview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qundoview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QUndoView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qundoview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qundoview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QUndoView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qundoview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qundoview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QUndoView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qundoview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qundoview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QUndoView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qundoview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qundoview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QUndoView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qundoview_commitdata_callback) {
            QWidget* cbval1 = editor;
            qundoview_commitdata_callback(this, cbval1);
            return;
        }
        QUndoView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qundoview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qundoview_editordestroyed_callback(this, cbval1);
            return;
        }
        QUndoView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qundoview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qundoview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QUndoView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qundoview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qundoview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QUndoView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qundoview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qundoview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qundoview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qundoview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qundoview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qundoview_mousepressevent_callback(this, cbval1);
            return;
        }
        QUndoView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qundoview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qundoview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QUndoView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qundoview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qundoview_dragenterevent_callback(this, cbval1);
            return;
        }
        QUndoView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qundoview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qundoview_focusinevent_callback(this, cbval1);
            return;
        }
        QUndoView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qundoview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qundoview_focusoutevent_callback(this, cbval1);
            return;
        }
        QUndoView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qundoview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qundoview_keypressevent_callback(this, cbval1);
            return;
        }
        QUndoView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qundoview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qundoview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QUndoView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qundoview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qundoview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QUndoView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qundoview_minimumsizehint_callback) {
            QSize* callback_ret = qundoview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QUndoView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qundoview_sizehint_callback) {
            QSize* callback_ret = qundoview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QUndoView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qundoview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qundoview_setupviewport_callback(this, cbval1);
            return;
        }
        QUndoView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qundoview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qundoview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QUndoView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qundoview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qundoview_changeevent_callback(this, cbval1);
            return;
        }
        QUndoView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qundoview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qundoview_initstyleoption_callback(this, cbval1);
            return;
        }
        QUndoView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qundoview_devtype_callback) {
            int callback_ret = qundoview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qundoview_setvisible_callback) {
            bool cbval1 = visible;
            qundoview_setvisible_callback(this, cbval1);
            return;
        }
        QUndoView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qundoview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qundoview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qundoview_hasheightforwidth_callback) {
            bool callback_ret = qundoview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QUndoView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qundoview_paintengine_callback) {
            QPaintEngine* callback_ret = qundoview_paintengine_callback(this);
            return callback_ret;
        }
        return QUndoView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qundoview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qundoview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QUndoView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qundoview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qundoview_enterevent_callback(this, cbval1);
            return;
        }
        QUndoView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qundoview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qundoview_leaveevent_callback(this, cbval1);
            return;
        }
        QUndoView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qundoview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qundoview_moveevent_callback(this, cbval1);
            return;
        }
        QUndoView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qundoview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qundoview_closeevent_callback(this, cbval1);
            return;
        }
        QUndoView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qundoview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qundoview_tabletevent_callback(this, cbval1);
            return;
        }
        QUndoView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qundoview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qundoview_actionevent_callback(this, cbval1);
            return;
        }
        QUndoView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qundoview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qundoview_showevent_callback(this, cbval1);
            return;
        }
        QUndoView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qundoview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qundoview_hideevent_callback(this, cbval1);
            return;
        }
        QUndoView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qundoview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qundoview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QUndoView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qundoview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qundoview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qundoview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qundoview_initpainter_callback(this, cbval1);
            return;
        }
        QUndoView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qundoview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qundoview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qundoview_sharedpainter_callback) {
            QPainter* callback_ret = qundoview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QUndoView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundoview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qundoview_childevent_callback(this, cbval1);
            return;
        }
        QUndoView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundoview_customevent_callback) {
            QEvent* cbval1 = event;
            qundoview_customevent_callback(this, cbval1);
            return;
        }
        QUndoView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundoview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qundoview_connectnotify_callback(this, cbval1);
            return;
        }
        QUndoView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundoview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qundoview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QUndoView::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QUndoView_SuperEvent(QUndoView* self, QEvent* e);
    friend void QUndoView_SuperScrollContentsBy(QUndoView* self, int dx, int dy);
    friend void QUndoView_SuperDataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QUndoView_SuperRowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_SuperRowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end);
    friend void QUndoView_SuperMouseMoveEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_SuperMouseReleaseEvent(QUndoView* self, QMouseEvent* e);
    friend void QUndoView_SuperWheelEvent(QUndoView* self, QWheelEvent* e);
    friend void QUndoView_SuperTimerEvent(QUndoView* self, QTimerEvent* e);
    friend void QUndoView_SuperResizeEvent(QUndoView* self, QResizeEvent* e);
    friend void QUndoView_SuperDragMoveEvent(QUndoView* self, QDragMoveEvent* e);
    friend void QUndoView_SuperDragLeaveEvent(QUndoView* self, QDragLeaveEvent* e);
    friend void QUndoView_SuperDropEvent(QUndoView* self, QDropEvent* e);
    friend void QUndoView_SuperStartDrag(QUndoView* self, int supportedActions);
    friend void QUndoView_SuperInitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option);
    friend void QUndoView_SuperPaintEvent(QUndoView* self, QPaintEvent* e);
    friend int QUndoView_SuperHorizontalOffset(const QUndoView* self);
    friend int QUndoView_SuperVerticalOffset(const QUndoView* self);
    friend QModelIndex* QUndoView_SuperMoveCursor(QUndoView* self, int cursorAction, int modifiers);
    friend void QUndoView_SuperSetSelection(QUndoView* self, const QRect* rect, int command);
    friend QRegion* QUndoView_SuperVisualRegionForSelection(const QUndoView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QUndoView_SuperSelectedIndexes(const QUndoView* self);
    friend void QUndoView_SuperUpdateGeometries(QUndoView* self);
    friend bool QUndoView_SuperIsIndexHidden(const QUndoView* self, const QModelIndex* index);
    friend void QUndoView_SuperSelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QUndoView_SuperCurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* QUndoView_SuperViewportSizeHint(const QUndoView* self);
    friend void QUndoView_SuperUpdateEditorData(QUndoView* self);
    friend void QUndoView_SuperUpdateEditorGeometries(QUndoView* self);
    friend void QUndoView_SuperVerticalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_SuperHorizontalScrollbarAction(QUndoView* self, int action);
    friend void QUndoView_SuperVerticalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_SuperHorizontalScrollbarValueChanged(QUndoView* self, int value);
    friend void QUndoView_SuperCloseEditor(QUndoView* self, QWidget* editor, int hint);
    friend void QUndoView_SuperCommitData(QUndoView* self, QWidget* editor);
    friend void QUndoView_SuperEditorDestroyed(QUndoView* self, QObject* editor);
    friend bool QUndoView_SuperEdit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QUndoView_SuperSelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event);
    friend bool QUndoView_SuperFocusNextPrevChild(QUndoView* self, bool next);
    friend bool QUndoView_SuperViewportEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_SuperMousePressEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_SuperMouseDoubleClickEvent(QUndoView* self, QMouseEvent* event);
    friend void QUndoView_SuperDragEnterEvent(QUndoView* self, QDragEnterEvent* event);
    friend void QUndoView_SuperFocusInEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_SuperFocusOutEvent(QUndoView* self, QFocusEvent* event);
    friend void QUndoView_SuperKeyPressEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_SuperInputMethodEvent(QUndoView* self, QInputMethodEvent* event);
    friend bool QUndoView_SuperEventFilter(QUndoView* self, QObject* object, QEvent* event);
    friend void QUndoView_SuperContextMenuEvent(QUndoView* self, QContextMenuEvent* param1);
    friend void QUndoView_SuperChangeEvent(QUndoView* self, QEvent* param1);
    friend void QUndoView_SuperInitStyleOption(const QUndoView* self, QStyleOptionFrame* option);
    friend void QUndoView_SuperKeyReleaseEvent(QUndoView* self, QKeyEvent* event);
    friend void QUndoView_SuperEnterEvent(QUndoView* self, QEnterEvent* event);
    friend void QUndoView_SuperLeaveEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_SuperMoveEvent(QUndoView* self, QMoveEvent* event);
    friend void QUndoView_SuperCloseEvent(QUndoView* self, QCloseEvent* event);
    friend void QUndoView_SuperTabletEvent(QUndoView* self, QTabletEvent* event);
    friend void QUndoView_SuperActionEvent(QUndoView* self, QActionEvent* event);
    friend void QUndoView_SuperShowEvent(QUndoView* self, QShowEvent* event);
    friend void QUndoView_SuperHideEvent(QUndoView* self, QHideEvent* event);
    friend bool QUndoView_SuperNativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QUndoView_SuperMetric(const QUndoView* self, int param1);
    friend void QUndoView_SuperInitPainter(const QUndoView* self, QPainter* painter);
    friend QPaintDevice* QUndoView_SuperRedirected(const QUndoView* self, QPoint* offset);
    friend QPainter* QUndoView_SuperSharedPainter(const QUndoView* self);
    friend void QUndoView_SuperChildEvent(QUndoView* self, QChildEvent* event);
    friend void QUndoView_SuperCustomEvent(QUndoView* self, QEvent* event);
    friend void QUndoView_SuperConnectNotify(QUndoView* self, const QMetaMethod* signal);
    friend void QUndoView_SuperDisconnectNotify(QUndoView* self, const QMetaMethod* signal);
};

#endif
