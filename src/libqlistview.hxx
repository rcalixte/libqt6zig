#pragma once
#ifndef LIBQLISTVIEW_HXX
#define LIBQLISTVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QListView
class VirtualQListView final : public QListView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QListView_MetaObject_Callback = QMetaObject* (*)(const QListView*);
    using QListView_Metacast_Callback = void* (*)(QListView*, const char*);
    using QListView_Metacall_Callback = int (*)(QListView*, int, int, void**);
    using QListView_VisualRect_Callback = QRect* (*)(const QListView*, QModelIndex*);
    using QListView_ScrollTo_Callback = void (*)(QListView*, QModelIndex*, int);
    using QListView_IndexAt_Callback = QModelIndex* (*)(const QListView*, QPoint*);
    using QListView_DoItemsLayout_Callback = void (*)(QListView*);
    using QListView_Reset_Callback = void (*)(QListView*);
    using QListView_SetRootIndex_Callback = void (*)(QListView*, QModelIndex*);
    using QListView_Event_Callback = bool (*)(QListView*, QEvent*);
    using QListView_ScrollContentsBy_Callback = void (*)(QListView*, int, int);
    using QListView_DataChanged_Callback = void (*)(QListView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QListView_RowsInserted_Callback = void (*)(QListView*, QModelIndex*, int, int);
    using QListView_RowsAboutToBeRemoved_Callback = void (*)(QListView*, QModelIndex*, int, int);
    using QListView_MouseMoveEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_MouseReleaseEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_WheelEvent_Callback = void (*)(QListView*, QWheelEvent*);
    using QListView_TimerEvent_Callback = void (*)(QListView*, QTimerEvent*);
    using QListView_ResizeEvent_Callback = void (*)(QListView*, QResizeEvent*);
    using QListView_DragMoveEvent_Callback = void (*)(QListView*, QDragMoveEvent*);
    using QListView_DragLeaveEvent_Callback = void (*)(QListView*, QDragLeaveEvent*);
    using QListView_DropEvent_Callback = void (*)(QListView*, QDropEvent*);
    using QListView_StartDrag_Callback = void (*)(QListView*, int);
    using QListView_InitViewItemOption_Callback = void (*)(const QListView*, QStyleOptionViewItem*);
    using QListView_PaintEvent_Callback = void (*)(QListView*, QPaintEvent*);
    using QListView_HorizontalOffset_Callback = int (*)(const QListView*);
    using QListView_VerticalOffset_Callback = int (*)(const QListView*);
    using QListView_MoveCursor_Callback = QModelIndex* (*)(QListView*, int, int);
    using QListView_SetSelection_Callback = void (*)(QListView*, QRect*, int);
    using QListView_VisualRegionForSelection_Callback = QRegion* (*)(const QListView*, QItemSelection*);
    using QListView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QListView*);
    using QListView_UpdateGeometries_Callback = void (*)(QListView*);
    using QListView_IsIndexHidden_Callback = bool (*)(const QListView*, QModelIndex*);
    using QListView_SelectionChanged_Callback = void (*)(QListView*, QItemSelection*, QItemSelection*);
    using QListView_CurrentChanged_Callback = void (*)(QListView*, QModelIndex*, QModelIndex*);
    using QListView_ViewportSizeHint_Callback = QSize* (*)(const QListView*);
    using QListView_SetModel_Callback = void (*)(QListView*, QAbstractItemModel*);
    using QListView_SetSelectionModel_Callback = void (*)(QListView*, QItemSelectionModel*);
    using QListView_KeyboardSearch_Callback = void (*)(QListView*, const char*);
    using QListView_SizeHintForRow_Callback = int (*)(const QListView*, int);
    using QListView_SizeHintForColumn_Callback = int (*)(const QListView*, int);
    using QListView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QListView*, QModelIndex*);
    using QListView_InputMethodQuery_Callback = QVariant* (*)(const QListView*, int);
    using QListView_SelectAll_Callback = void (*)(QListView*);
    using QListView_UpdateEditorData_Callback = void (*)(QListView*);
    using QListView_UpdateEditorGeometries_Callback = void (*)(QListView*);
    using QListView_VerticalScrollbarAction_Callback = void (*)(QListView*, int);
    using QListView_HorizontalScrollbarAction_Callback = void (*)(QListView*, int);
    using QListView_VerticalScrollbarValueChanged_Callback = void (*)(QListView*, int);
    using QListView_HorizontalScrollbarValueChanged_Callback = void (*)(QListView*, int);
    using QListView_CloseEditor_Callback = void (*)(QListView*, QWidget*, int);
    using QListView_CommitData_Callback = void (*)(QListView*, QWidget*);
    using QListView_EditorDestroyed_Callback = void (*)(QListView*, QObject*);
    using QListView_Edit2_Callback = bool (*)(QListView*, QModelIndex*, int, QEvent*);
    using QListView_SelectionCommand_Callback = int (*)(const QListView*, QModelIndex*, QEvent*);
    using QListView_FocusNextPrevChild_Callback = bool (*)(QListView*, bool);
    using QListView_ViewportEvent_Callback = bool (*)(QListView*, QEvent*);
    using QListView_MousePressEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_MouseDoubleClickEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_DragEnterEvent_Callback = void (*)(QListView*, QDragEnterEvent*);
    using QListView_FocusInEvent_Callback = void (*)(QListView*, QFocusEvent*);
    using QListView_FocusOutEvent_Callback = void (*)(QListView*, QFocusEvent*);
    using QListView_KeyPressEvent_Callback = void (*)(QListView*, QKeyEvent*);
    using QListView_InputMethodEvent_Callback = void (*)(QListView*, QInputMethodEvent*);
    using QListView_EventFilter_Callback = bool (*)(QListView*, QObject*, QEvent*);
    using QListView_MinimumSizeHint_Callback = QSize* (*)(const QListView*);
    using QListView_SizeHint_Callback = QSize* (*)(const QListView*);
    using QListView_SetupViewport_Callback = void (*)(QListView*, QWidget*);
    using QListView_ContextMenuEvent_Callback = void (*)(QListView*, QContextMenuEvent*);
    using QListView_ChangeEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_InitStyleOption_Callback = void (*)(const QListView*, QStyleOptionFrame*);
    using QListView_DevType_Callback = int (*)(const QListView*);
    using QListView_SetVisible_Callback = void (*)(QListView*, bool);
    using QListView_HeightForWidth_Callback = int (*)(const QListView*, int);
    using QListView_HasHeightForWidth_Callback = bool (*)(const QListView*);
    using QListView_PaintEngine_Callback = QPaintEngine* (*)(const QListView*);
    using QListView_KeyReleaseEvent_Callback = void (*)(QListView*, QKeyEvent*);
    using QListView_EnterEvent_Callback = void (*)(QListView*, QEnterEvent*);
    using QListView_LeaveEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_MoveEvent_Callback = void (*)(QListView*, QMoveEvent*);
    using QListView_CloseEvent_Callback = void (*)(QListView*, QCloseEvent*);
    using QListView_TabletEvent_Callback = void (*)(QListView*, QTabletEvent*);
    using QListView_ActionEvent_Callback = void (*)(QListView*, QActionEvent*);
    using QListView_ShowEvent_Callback = void (*)(QListView*, QShowEvent*);
    using QListView_HideEvent_Callback = void (*)(QListView*, QHideEvent*);
    using QListView_NativeEvent_Callback = bool (*)(QListView*, libqt_string, void*, intptr_t*);
    using QListView_Metric_Callback = int (*)(const QListView*, int);
    using QListView_InitPainter_Callback = void (*)(const QListView*, QPainter*);
    using QListView_Redirected_Callback = QPaintDevice* (*)(const QListView*, QPoint*);
    using QListView_SharedPainter_Callback = QPainter* (*)(const QListView*);
    using QListView_ChildEvent_Callback = void (*)(QListView*, QChildEvent*);
    using QListView_CustomEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_ConnectNotify_Callback = void (*)(QListView*, QMetaMethod*);
    using QListView_DisconnectNotify_Callback = void (*)(QListView*, QMetaMethod*);
    using QListView::contentsSize;
    using QListView::create;
    using QListView::destroy;
    using QListView::dirtyRegionOffset;
    using QListView::doAutoScroll;
    using QListView::drawFrame;
    using QListView::dropIndicatorPosition;
    using QListView::executeDelayedItemsLayout;
    using QListView::focusNextChild;
    using QListView::focusPreviousChild;
    using QListView::getDecodedMetricF;
    using QListView::isSignalConnected;
    using QListView::receivers;
    using QListView::rectForIndex;
    using QListView::resizeContents;
    using QListView::scheduleDelayedItemsLayout;
    using QListView::scrollDirtyRegion;
    using QListView::sender;
    using QListView::senderSignalIndex;
    using QListView::setDirtyRegion;
    using QListView::setPositionForIndex;
    using QListView::setState;
    using QListView::setViewportMargins;
    using QListView::startAutoScroll;
    using QListView::state;
    using QListView::stopAutoScroll;
    using QListView::updateMicroFocus;
    using QListView::viewportMargins;

    // Instance callback storage
    QListView_MetaObject_Callback qlistview_metaobject_callback = nullptr;
    QListView_Metacast_Callback qlistview_metacast_callback = nullptr;
    QListView_Metacall_Callback qlistview_metacall_callback = nullptr;
    QListView_VisualRect_Callback qlistview_visualrect_callback = nullptr;
    QListView_ScrollTo_Callback qlistview_scrollto_callback = nullptr;
    QListView_IndexAt_Callback qlistview_indexat_callback = nullptr;
    QListView_DoItemsLayout_Callback qlistview_doitemslayout_callback = nullptr;
    QListView_Reset_Callback qlistview_reset_callback = nullptr;
    QListView_SetRootIndex_Callback qlistview_setrootindex_callback = nullptr;
    QListView_Event_Callback qlistview_event_callback = nullptr;
    QListView_ScrollContentsBy_Callback qlistview_scrollcontentsby_callback = nullptr;
    QListView_DataChanged_Callback qlistview_datachanged_callback = nullptr;
    QListView_RowsInserted_Callback qlistview_rowsinserted_callback = nullptr;
    QListView_RowsAboutToBeRemoved_Callback qlistview_rowsabouttoberemoved_callback = nullptr;
    QListView_MouseMoveEvent_Callback qlistview_mousemoveevent_callback = nullptr;
    QListView_MouseReleaseEvent_Callback qlistview_mousereleaseevent_callback = nullptr;
    QListView_WheelEvent_Callback qlistview_wheelevent_callback = nullptr;
    QListView_TimerEvent_Callback qlistview_timerevent_callback = nullptr;
    QListView_ResizeEvent_Callback qlistview_resizeevent_callback = nullptr;
    QListView_DragMoveEvent_Callback qlistview_dragmoveevent_callback = nullptr;
    QListView_DragLeaveEvent_Callback qlistview_dragleaveevent_callback = nullptr;
    QListView_DropEvent_Callback qlistview_dropevent_callback = nullptr;
    QListView_StartDrag_Callback qlistview_startdrag_callback = nullptr;
    QListView_InitViewItemOption_Callback qlistview_initviewitemoption_callback = nullptr;
    QListView_PaintEvent_Callback qlistview_paintevent_callback = nullptr;
    QListView_HorizontalOffset_Callback qlistview_horizontaloffset_callback = nullptr;
    QListView_VerticalOffset_Callback qlistview_verticaloffset_callback = nullptr;
    QListView_MoveCursor_Callback qlistview_movecursor_callback = nullptr;
    QListView_SetSelection_Callback qlistview_setselection_callback = nullptr;
    QListView_VisualRegionForSelection_Callback qlistview_visualregionforselection_callback = nullptr;
    QListView_SelectedIndexes_Callback qlistview_selectedindexes_callback = nullptr;
    QListView_UpdateGeometries_Callback qlistview_updategeometries_callback = nullptr;
    QListView_IsIndexHidden_Callback qlistview_isindexhidden_callback = nullptr;
    QListView_SelectionChanged_Callback qlistview_selectionchanged_callback = nullptr;
    QListView_CurrentChanged_Callback qlistview_currentchanged_callback = nullptr;
    QListView_ViewportSizeHint_Callback qlistview_viewportsizehint_callback = nullptr;
    QListView_SetModel_Callback qlistview_setmodel_callback = nullptr;
    QListView_SetSelectionModel_Callback qlistview_setselectionmodel_callback = nullptr;
    QListView_KeyboardSearch_Callback qlistview_keyboardsearch_callback = nullptr;
    QListView_SizeHintForRow_Callback qlistview_sizehintforrow_callback = nullptr;
    QListView_SizeHintForColumn_Callback qlistview_sizehintforcolumn_callback = nullptr;
    QListView_ItemDelegateForIndex_Callback qlistview_itemdelegateforindex_callback = nullptr;
    QListView_InputMethodQuery_Callback qlistview_inputmethodquery_callback = nullptr;
    QListView_SelectAll_Callback qlistview_selectall_callback = nullptr;
    QListView_UpdateEditorData_Callback qlistview_updateeditordata_callback = nullptr;
    QListView_UpdateEditorGeometries_Callback qlistview_updateeditorgeometries_callback = nullptr;
    QListView_VerticalScrollbarAction_Callback qlistview_verticalscrollbaraction_callback = nullptr;
    QListView_HorizontalScrollbarAction_Callback qlistview_horizontalscrollbaraction_callback = nullptr;
    QListView_VerticalScrollbarValueChanged_Callback qlistview_verticalscrollbarvaluechanged_callback = nullptr;
    QListView_HorizontalScrollbarValueChanged_Callback qlistview_horizontalscrollbarvaluechanged_callback = nullptr;
    QListView_CloseEditor_Callback qlistview_closeeditor_callback = nullptr;
    QListView_CommitData_Callback qlistview_commitdata_callback = nullptr;
    QListView_EditorDestroyed_Callback qlistview_editordestroyed_callback = nullptr;
    QListView_Edit2_Callback qlistview_edit2_callback = nullptr;
    QListView_SelectionCommand_Callback qlistview_selectioncommand_callback = nullptr;
    QListView_FocusNextPrevChild_Callback qlistview_focusnextprevchild_callback = nullptr;
    QListView_ViewportEvent_Callback qlistview_viewportevent_callback = nullptr;
    QListView_MousePressEvent_Callback qlistview_mousepressevent_callback = nullptr;
    QListView_MouseDoubleClickEvent_Callback qlistview_mousedoubleclickevent_callback = nullptr;
    QListView_DragEnterEvent_Callback qlistview_dragenterevent_callback = nullptr;
    QListView_FocusInEvent_Callback qlistview_focusinevent_callback = nullptr;
    QListView_FocusOutEvent_Callback qlistview_focusoutevent_callback = nullptr;
    QListView_KeyPressEvent_Callback qlistview_keypressevent_callback = nullptr;
    QListView_InputMethodEvent_Callback qlistview_inputmethodevent_callback = nullptr;
    QListView_EventFilter_Callback qlistview_eventfilter_callback = nullptr;
    QListView_MinimumSizeHint_Callback qlistview_minimumsizehint_callback = nullptr;
    QListView_SizeHint_Callback qlistview_sizehint_callback = nullptr;
    QListView_SetupViewport_Callback qlistview_setupviewport_callback = nullptr;
    QListView_ContextMenuEvent_Callback qlistview_contextmenuevent_callback = nullptr;
    QListView_ChangeEvent_Callback qlistview_changeevent_callback = nullptr;
    QListView_InitStyleOption_Callback qlistview_initstyleoption_callback = nullptr;
    QListView_DevType_Callback qlistview_devtype_callback = nullptr;
    QListView_SetVisible_Callback qlistview_setvisible_callback = nullptr;
    QListView_HeightForWidth_Callback qlistview_heightforwidth_callback = nullptr;
    QListView_HasHeightForWidth_Callback qlistview_hasheightforwidth_callback = nullptr;
    QListView_PaintEngine_Callback qlistview_paintengine_callback = nullptr;
    QListView_KeyReleaseEvent_Callback qlistview_keyreleaseevent_callback = nullptr;
    QListView_EnterEvent_Callback qlistview_enterevent_callback = nullptr;
    QListView_LeaveEvent_Callback qlistview_leaveevent_callback = nullptr;
    QListView_MoveEvent_Callback qlistview_moveevent_callback = nullptr;
    QListView_CloseEvent_Callback qlistview_closeevent_callback = nullptr;
    QListView_TabletEvent_Callback qlistview_tabletevent_callback = nullptr;
    QListView_ActionEvent_Callback qlistview_actionevent_callback = nullptr;
    QListView_ShowEvent_Callback qlistview_showevent_callback = nullptr;
    QListView_HideEvent_Callback qlistview_hideevent_callback = nullptr;
    QListView_NativeEvent_Callback qlistview_nativeevent_callback = nullptr;
    QListView_Metric_Callback qlistview_metric_callback = nullptr;
    QListView_InitPainter_Callback qlistview_initpainter_callback = nullptr;
    QListView_Redirected_Callback qlistview_redirected_callback = nullptr;
    QListView_SharedPainter_Callback qlistview_sharedpainter_callback = nullptr;
    QListView_ChildEvent_Callback qlistview_childevent_callback = nullptr;
    QListView_CustomEvent_Callback qlistview_customevent_callback = nullptr;
    QListView_ConnectNotify_Callback qlistview_connectnotify_callback = nullptr;
    QListView_DisconnectNotify_Callback qlistview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QListView {
        using QListView::actionEvent;
        using QListView::changeEvent;
        using QListView::childEvent;
        using QListView::closeEditor;
        using QListView::closeEvent;
        using QListView::commitData;
        using QListView::connectNotify;
        using QListView::contextMenuEvent;
        using QListView::currentChanged;
        using QListView::customEvent;
        using QListView::dataChanged;
        using QListView::disconnectNotify;
        using QListView::dragEnterEvent;
        using QListView::dragLeaveEvent;
        using QListView::dragMoveEvent;
        using QListView::dropEvent;
        using QListView::edit;
        using QListView::editorDestroyed;
        using QListView::enterEvent;
        using QListView::event;
        using QListView::eventFilter;
        using QListView::focusInEvent;
        using QListView::focusNextPrevChild;
        using QListView::focusOutEvent;
        using QListView::hideEvent;
        using QListView::horizontalOffset;
        using QListView::horizontalScrollbarAction;
        using QListView::horizontalScrollbarValueChanged;
        using QListView::initPainter;
        using QListView::initStyleOption;
        using QListView::initViewItemOption;
        using QListView::inputMethodEvent;
        using QListView::isIndexHidden;
        using QListView::keyPressEvent;
        using QListView::keyReleaseEvent;
        using QListView::leaveEvent;
        using QListView::metric;
        using QListView::mouseDoubleClickEvent;
        using QListView::mouseMoveEvent;
        using QListView::mousePressEvent;
        using QListView::mouseReleaseEvent;
        using QListView::moveCursor;
        using QListView::moveEvent;
        using QListView::nativeEvent;
        using QListView::paintEvent;
        using QListView::redirected;
        using QListView::resizeEvent;
        using QListView::rowsAboutToBeRemoved;
        using QListView::rowsInserted;
        using QListView::scrollContentsBy;
        using QListView::selectedIndexes;
        using QListView::selectionChanged;
        using QListView::selectionCommand;
        using QListView::setSelection;
        using QListView::sharedPainter;
        using QListView::showEvent;
        using QListView::startDrag;
        using QListView::tabletEvent;
        using QListView::timerEvent;
        using QListView::updateEditorData;
        using QListView::updateEditorGeometries;
        using QListView::updateGeometries;
        using QListView::verticalOffset;
        using QListView::verticalScrollbarAction;
        using QListView::verticalScrollbarValueChanged;
        using QListView::viewportEvent;
        using QListView::viewportSizeHint;
        using QListView::visualRegionForSelection;
        using QListView::wheelEvent;
    };

    VirtualQListView(QWidget* parent) : QListView(parent) {};
    VirtualQListView() : QListView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlistview_metaobject_callback) {
            QMetaObject* callback_ret = qlistview_metaobject_callback(this);
            return callback_ret;
        }
        return QListView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlistview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlistview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QListView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlistview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlistview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QListView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qlistview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qlistview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qlistview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qlistview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QListView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qlistview_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = qlistview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qlistview_doitemslayout_callback) {
            qlistview_doitemslayout_callback(this);
            return;
        }
        QListView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qlistview_reset_callback) {
            qlistview_reset_callback(this);
            return;
        }
        QListView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qlistview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qlistview_setrootindex_callback(this, cbval1);
            return;
        }
        QListView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlistview_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qlistview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QListView::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qlistview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qlistview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QListView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qlistview_datachanged_callback) {
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
            qlistview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QListView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qlistview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qlistview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QListView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qlistview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qlistview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QListView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qlistview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qlistview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QListView::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qlistview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qlistview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QListView::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qlistview_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qlistview_wheelevent_callback(this, cbval1);
            return;
        }
        QListView::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qlistview_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qlistview_timerevent_callback(this, cbval1);
            return;
        }
        QListView::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qlistview_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qlistview_resizeevent_callback(this, cbval1);
            return;
        }
        QListView::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlistview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qlistview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QListView::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlistview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qlistview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QListView::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qlistview_dropevent_callback) {
            QDropEvent* cbval1 = e;
            qlistview_dropevent_callback(this, cbval1);
            return;
        }
        QListView::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qlistview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qlistview_startdrag_callback(this, cbval1);
            return;
        }
        QListView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qlistview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qlistview_initviewitemoption_callback(this, cbval1);
            return;
        }
        QListView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qlistview_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qlistview_paintevent_callback(this, cbval1);
            return;
        }
        QListView::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qlistview_horizontaloffset_callback) {
            int callback_ret = qlistview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QListView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qlistview_verticaloffset_callback) {
            int callback_ret = qlistview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QListView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qlistview_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qlistview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qlistview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qlistview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QListView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qlistview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qlistview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qlistview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qlistview_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QListView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qlistview_updategeometries_callback) {
            qlistview_updategeometries_callback(this);
            return;
        }
        QListView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qlistview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qlistview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QListView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qlistview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qlistview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QListView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qlistview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qlistview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QListView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qlistview_viewportsizehint_callback) {
            QSize* callback_ret = qlistview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qlistview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qlistview_setmodel_callback(this, cbval1);
            return;
        }
        QListView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qlistview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qlistview_setselectionmodel_callback(this, cbval1);
            return;
        }
        QListView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qlistview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qlistview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QListView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qlistview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qlistview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qlistview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qlistview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qlistview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qlistview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QListView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qlistview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qlistview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qlistview_selectall_callback) {
            qlistview_selectall_callback(this);
            return;
        }
        QListView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qlistview_updateeditordata_callback) {
            qlistview_updateeditordata_callback(this);
            return;
        }
        QListView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qlistview_updateeditorgeometries_callback) {
            qlistview_updateeditorgeometries_callback(this);
            return;
        }
        QListView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qlistview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qlistview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QListView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qlistview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qlistview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QListView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qlistview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qlistview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QListView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qlistview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qlistview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QListView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qlistview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qlistview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QListView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qlistview_commitdata_callback) {
            QWidget* cbval1 = editor;
            qlistview_commitdata_callback(this, cbval1);
            return;
        }
        QListView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qlistview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qlistview_editordestroyed_callback(this, cbval1);
            return;
        }
        QListView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qlistview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qlistview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QListView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qlistview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qlistview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QListView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlistview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qlistview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QListView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qlistview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlistview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QListView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlistview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qlistview_mousepressevent_callback(this, cbval1);
            return;
        }
        QListView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlistview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qlistview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QListView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlistview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qlistview_dragenterevent_callback(this, cbval1);
            return;
        }
        QListView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlistview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qlistview_focusinevent_callback(this, cbval1);
            return;
        }
        QListView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlistview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qlistview_focusoutevent_callback(this, cbval1);
            return;
        }
        QListView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlistview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qlistview_keypressevent_callback(this, cbval1);
            return;
        }
        QListView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qlistview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qlistview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QListView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qlistview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qlistview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QListView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlistview_minimumsizehint_callback) {
            QSize* callback_ret = qlistview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlistview_sizehint_callback) {
            QSize* callback_ret = qlistview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qlistview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qlistview_setupviewport_callback(this, cbval1);
            return;
        }
        QListView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlistview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qlistview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QListView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlistview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qlistview_changeevent_callback(this, cbval1);
            return;
        }
        QListView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlistview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qlistview_initstyleoption_callback(this, cbval1);
            return;
        }
        QListView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlistview_devtype_callback) {
            int callback_ret = qlistview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QListView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlistview_setvisible_callback) {
            bool cbval1 = visible;
            qlistview_setvisible_callback(this, cbval1);
            return;
        }
        QListView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlistview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlistview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlistview_hasheightforwidth_callback) {
            bool callback_ret = qlistview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QListView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlistview_paintengine_callback) {
            QPaintEngine* callback_ret = qlistview_paintengine_callback(this);
            return callback_ret;
        }
        return QListView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlistview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qlistview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QListView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlistview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qlistview_enterevent_callback(this, cbval1);
            return;
        }
        QListView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlistview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qlistview_leaveevent_callback(this, cbval1);
            return;
        }
        QListView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlistview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qlistview_moveevent_callback(this, cbval1);
            return;
        }
        QListView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlistview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qlistview_closeevent_callback(this, cbval1);
            return;
        }
        QListView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlistview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qlistview_tabletevent_callback(this, cbval1);
            return;
        }
        QListView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlistview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qlistview_actionevent_callback(this, cbval1);
            return;
        }
        QListView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlistview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qlistview_showevent_callback(this, cbval1);
            return;
        }
        QListView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlistview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qlistview_hideevent_callback(this, cbval1);
            return;
        }
        QListView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlistview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qlistview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QListView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlistview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qlistview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlistview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qlistview_initpainter_callback(this, cbval1);
            return;
        }
        QListView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlistview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qlistview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QListView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlistview_sharedpainter_callback) {
            QPainter* callback_ret = qlistview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QListView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlistview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlistview_childevent_callback(this, cbval1);
            return;
        }
        QListView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlistview_customevent_callback) {
            QEvent* cbval1 = event;
            qlistview_customevent_callback(this, cbval1);
            return;
        }
        QListView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlistview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlistview_connectnotify_callback(this, cbval1);
            return;
        }
        QListView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlistview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlistview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QListView::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QListView_SuperEvent(QListView* self, QEvent* e);
    friend void QListView_SuperScrollContentsBy(QListView* self, int dx, int dy);
    friend void QListView_SuperDataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QListView_SuperRowsInserted(QListView* self, const QModelIndex* parent, int start, int end);
    friend void QListView_SuperRowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end);
    friend void QListView_SuperMouseMoveEvent(QListView* self, QMouseEvent* e);
    friend void QListView_SuperMouseReleaseEvent(QListView* self, QMouseEvent* e);
    friend void QListView_SuperWheelEvent(QListView* self, QWheelEvent* e);
    friend void QListView_SuperTimerEvent(QListView* self, QTimerEvent* e);
    friend void QListView_SuperResizeEvent(QListView* self, QResizeEvent* e);
    friend void QListView_SuperDragMoveEvent(QListView* self, QDragMoveEvent* e);
    friend void QListView_SuperDragLeaveEvent(QListView* self, QDragLeaveEvent* e);
    friend void QListView_SuperDropEvent(QListView* self, QDropEvent* e);
    friend void QListView_SuperStartDrag(QListView* self, int supportedActions);
    friend void QListView_SuperInitViewItemOption(const QListView* self, QStyleOptionViewItem* option);
    friend void QListView_SuperPaintEvent(QListView* self, QPaintEvent* e);
    friend int QListView_SuperHorizontalOffset(const QListView* self);
    friend int QListView_SuperVerticalOffset(const QListView* self);
    friend QModelIndex* QListView_SuperMoveCursor(QListView* self, int cursorAction, int modifiers);
    friend void QListView_SuperSetSelection(QListView* self, const QRect* rect, int command);
    friend QRegion* QListView_SuperVisualRegionForSelection(const QListView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QListView_SuperSelectedIndexes(const QListView* self);
    friend void QListView_SuperUpdateGeometries(QListView* self);
    friend bool QListView_SuperIsIndexHidden(const QListView* self, const QModelIndex* index);
    friend void QListView_SuperSelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QListView_SuperCurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* QListView_SuperViewportSizeHint(const QListView* self);
    friend void QListView_SuperUpdateEditorData(QListView* self);
    friend void QListView_SuperUpdateEditorGeometries(QListView* self);
    friend void QListView_SuperVerticalScrollbarAction(QListView* self, int action);
    friend void QListView_SuperHorizontalScrollbarAction(QListView* self, int action);
    friend void QListView_SuperVerticalScrollbarValueChanged(QListView* self, int value);
    friend void QListView_SuperHorizontalScrollbarValueChanged(QListView* self, int value);
    friend void QListView_SuperCloseEditor(QListView* self, QWidget* editor, int hint);
    friend void QListView_SuperCommitData(QListView* self, QWidget* editor);
    friend void QListView_SuperEditorDestroyed(QListView* self, QObject* editor);
    friend bool QListView_SuperEdit2(QListView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QListView_SuperSelectionCommand(const QListView* self, const QModelIndex* index, const QEvent* event);
    friend bool QListView_SuperFocusNextPrevChild(QListView* self, bool next);
    friend bool QListView_SuperViewportEvent(QListView* self, QEvent* event);
    friend void QListView_SuperMousePressEvent(QListView* self, QMouseEvent* event);
    friend void QListView_SuperMouseDoubleClickEvent(QListView* self, QMouseEvent* event);
    friend void QListView_SuperDragEnterEvent(QListView* self, QDragEnterEvent* event);
    friend void QListView_SuperFocusInEvent(QListView* self, QFocusEvent* event);
    friend void QListView_SuperFocusOutEvent(QListView* self, QFocusEvent* event);
    friend void QListView_SuperKeyPressEvent(QListView* self, QKeyEvent* event);
    friend void QListView_SuperInputMethodEvent(QListView* self, QInputMethodEvent* event);
    friend bool QListView_SuperEventFilter(QListView* self, QObject* object, QEvent* event);
    friend void QListView_SuperContextMenuEvent(QListView* self, QContextMenuEvent* param1);
    friend void QListView_SuperChangeEvent(QListView* self, QEvent* param1);
    friend void QListView_SuperInitStyleOption(const QListView* self, QStyleOptionFrame* option);
    friend void QListView_SuperKeyReleaseEvent(QListView* self, QKeyEvent* event);
    friend void QListView_SuperEnterEvent(QListView* self, QEnterEvent* event);
    friend void QListView_SuperLeaveEvent(QListView* self, QEvent* event);
    friend void QListView_SuperMoveEvent(QListView* self, QMoveEvent* event);
    friend void QListView_SuperCloseEvent(QListView* self, QCloseEvent* event);
    friend void QListView_SuperTabletEvent(QListView* self, QTabletEvent* event);
    friend void QListView_SuperActionEvent(QListView* self, QActionEvent* event);
    friend void QListView_SuperShowEvent(QListView* self, QShowEvent* event);
    friend void QListView_SuperHideEvent(QListView* self, QHideEvent* event);
    friend bool QListView_SuperNativeEvent(QListView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QListView_SuperMetric(const QListView* self, int param1);
    friend void QListView_SuperInitPainter(const QListView* self, QPainter* painter);
    friend QPaintDevice* QListView_SuperRedirected(const QListView* self, QPoint* offset);
    friend QPainter* QListView_SuperSharedPainter(const QListView* self);
    friend void QListView_SuperChildEvent(QListView* self, QChildEvent* event);
    friend void QListView_SuperCustomEvent(QListView* self, QEvent* event);
    friend void QListView_SuperConnectNotify(QListView* self, const QMetaMethod* signal);
    friend void QListView_SuperDisconnectNotify(QListView* self, const QMetaMethod* signal);
};

#endif
