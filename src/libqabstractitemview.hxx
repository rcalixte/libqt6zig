#pragma once
#ifndef LIBQABSTRACTITEMVIEW_HXX
#define LIBQABSTRACTITEMVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemView
class VirtualQAbstractItemView : public QAbstractItemView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QAbstractItemView_MetaObject_Callback = QMetaObject* (*)(const QAbstractItemView*);
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
    using QAbstractItemView_Reset_Callback = void (*)(QAbstractItemView*);
    using QAbstractItemView_SetRootIndex_Callback = void (*)(QAbstractItemView*, QModelIndex*);
    using QAbstractItemView_DoItemsLayout_Callback = void (*)(QAbstractItemView*);
    using QAbstractItemView_SelectAll_Callback = void (*)(QAbstractItemView*);
    using QAbstractItemView_DataChanged_Callback = void (*)(QAbstractItemView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QAbstractItemView_RowsInserted_Callback = void (*)(QAbstractItemView*, QModelIndex*, int, int);
    using QAbstractItemView_RowsAboutToBeRemoved_Callback = void (*)(QAbstractItemView*, QModelIndex*, int, int);
    using QAbstractItemView_SelectionChanged_Callback = void (*)(QAbstractItemView*, QItemSelection*, QItemSelection*);
    using QAbstractItemView_CurrentChanged_Callback = void (*)(QAbstractItemView*, QModelIndex*, QModelIndex*);
    using QAbstractItemView_UpdateEditorData_Callback = void (*)(QAbstractItemView*);
    using QAbstractItemView_UpdateEditorGeometries_Callback = void (*)(QAbstractItemView*);
    using QAbstractItemView_UpdateGeometries_Callback = void (*)(QAbstractItemView*);
    using QAbstractItemView_VerticalScrollbarAction_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_HorizontalScrollbarAction_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_VerticalScrollbarValueChanged_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_HorizontalScrollbarValueChanged_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_CloseEditor_Callback = void (*)(QAbstractItemView*, QWidget*, int);
    using QAbstractItemView_CommitData_Callback = void (*)(QAbstractItemView*, QWidget*);
    using QAbstractItemView_EditorDestroyed_Callback = void (*)(QAbstractItemView*, QObject*);
    using QAbstractItemView_MoveCursor_Callback = QModelIndex* (*)(QAbstractItemView*, int, int);
    using QAbstractItemView_HorizontalOffset_Callback = int (*)(const QAbstractItemView*);
    using QAbstractItemView_VerticalOffset_Callback = int (*)(const QAbstractItemView*);
    using QAbstractItemView_IsIndexHidden_Callback = bool (*)(const QAbstractItemView*, QModelIndex*);
    using QAbstractItemView_SetSelection_Callback = void (*)(QAbstractItemView*, QRect*, int);
    using QAbstractItemView_VisualRegionForSelection_Callback = QRegion* (*)(const QAbstractItemView*, QItemSelection*);
    using QAbstractItemView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QAbstractItemView*);
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
    using QAbstractItemView_ViewportSizeHint_Callback = QSize* (*)(const QAbstractItemView*);
    using QAbstractItemView_MinimumSizeHint_Callback = QSize* (*)(const QAbstractItemView*);
    using QAbstractItemView_SizeHint_Callback = QSize* (*)(const QAbstractItemView*);
    using QAbstractItemView_SetupViewport_Callback = void (*)(QAbstractItemView*, QWidget*);
    using QAbstractItemView_PaintEvent_Callback = void (*)(QAbstractItemView*, QPaintEvent*);
    using QAbstractItemView_WheelEvent_Callback = void (*)(QAbstractItemView*, QWheelEvent*);
    using QAbstractItemView_ContextMenuEvent_Callback = void (*)(QAbstractItemView*, QContextMenuEvent*);
    using QAbstractItemView_ScrollContentsBy_Callback = void (*)(QAbstractItemView*, int, int);
    using QAbstractItemView_ChangeEvent_Callback = void (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_InitStyleOption_Callback = void (*)(const QAbstractItemView*, QStyleOptionFrame*);
    using QAbstractItemView_DevType_Callback = int (*)(const QAbstractItemView*);
    using QAbstractItemView_SetVisible_Callback = void (*)(QAbstractItemView*, bool);
    using QAbstractItemView_HeightForWidth_Callback = int (*)(const QAbstractItemView*, int);
    using QAbstractItemView_HasHeightForWidth_Callback = bool (*)(const QAbstractItemView*);
    using QAbstractItemView_PaintEngine_Callback = QPaintEngine* (*)(const QAbstractItemView*);
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
    using QAbstractItemView_SharedPainter_Callback = QPainter* (*)(const QAbstractItemView*);
    using QAbstractItemView_ChildEvent_Callback = void (*)(QAbstractItemView*, QChildEvent*);
    using QAbstractItemView_CustomEvent_Callback = void (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_ConnectNotify_Callback = void (*)(QAbstractItemView*, QMetaMethod*);
    using QAbstractItemView_DisconnectNotify_Callback = void (*)(QAbstractItemView*, QMetaMethod*);
    using QAbstractItemView::create;
    using QAbstractItemView::destroy;
    using QAbstractItemView::dirtyRegionOffset;
    using QAbstractItemView::doAutoScroll;
    using QAbstractItemView::drawFrame;
    using QAbstractItemView::dropIndicatorPosition;
    using QAbstractItemView::executeDelayedItemsLayout;
    using QAbstractItemView::focusNextChild;
    using QAbstractItemView::focusPreviousChild;
    using QAbstractItemView::getDecodedMetricF;
    using QAbstractItemView::isSignalConnected;
    using QAbstractItemView::receivers;
    using QAbstractItemView::scheduleDelayedItemsLayout;
    using QAbstractItemView::scrollDirtyRegion;
    using QAbstractItemView::sender;
    using QAbstractItemView::senderSignalIndex;
    using QAbstractItemView::setDirtyRegion;
    using QAbstractItemView::setState;
    using QAbstractItemView::setViewportMargins;
    using QAbstractItemView::startAutoScroll;
    using QAbstractItemView::state;
    using QAbstractItemView::stopAutoScroll;
    using QAbstractItemView::updateMicroFocus;
    using QAbstractItemView::viewportMargins;

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

    // Access struct
    struct Base : QAbstractItemView {
        using QAbstractItemView::actionEvent;
        using QAbstractItemView::changeEvent;
        using QAbstractItemView::childEvent;
        using QAbstractItemView::closeEditor;
        using QAbstractItemView::closeEvent;
        using QAbstractItemView::commitData;
        using QAbstractItemView::connectNotify;
        using QAbstractItemView::contextMenuEvent;
        using QAbstractItemView::currentChanged;
        using QAbstractItemView::customEvent;
        using QAbstractItemView::dataChanged;
        using QAbstractItemView::disconnectNotify;
        using QAbstractItemView::dragEnterEvent;
        using QAbstractItemView::dragLeaveEvent;
        using QAbstractItemView::dragMoveEvent;
        using QAbstractItemView::dropEvent;
        using QAbstractItemView::edit;
        using QAbstractItemView::editorDestroyed;
        using QAbstractItemView::enterEvent;
        using QAbstractItemView::event;
        using QAbstractItemView::eventFilter;
        using QAbstractItemView::focusInEvent;
        using QAbstractItemView::focusNextPrevChild;
        using QAbstractItemView::focusOutEvent;
        using QAbstractItemView::hideEvent;
        using QAbstractItemView::horizontalOffset;
        using QAbstractItemView::horizontalScrollbarAction;
        using QAbstractItemView::horizontalScrollbarValueChanged;
        using QAbstractItemView::initPainter;
        using QAbstractItemView::initStyleOption;
        using QAbstractItemView::initViewItemOption;
        using QAbstractItemView::inputMethodEvent;
        using QAbstractItemView::isIndexHidden;
        using QAbstractItemView::keyPressEvent;
        using QAbstractItemView::keyReleaseEvent;
        using QAbstractItemView::leaveEvent;
        using QAbstractItemView::metric;
        using QAbstractItemView::mouseDoubleClickEvent;
        using QAbstractItemView::mouseMoveEvent;
        using QAbstractItemView::mousePressEvent;
        using QAbstractItemView::mouseReleaseEvent;
        using QAbstractItemView::moveCursor;
        using QAbstractItemView::moveEvent;
        using QAbstractItemView::nativeEvent;
        using QAbstractItemView::paintEvent;
        using QAbstractItemView::redirected;
        using QAbstractItemView::resizeEvent;
        using QAbstractItemView::rowsAboutToBeRemoved;
        using QAbstractItemView::rowsInserted;
        using QAbstractItemView::scrollContentsBy;
        using QAbstractItemView::selectedIndexes;
        using QAbstractItemView::selectionChanged;
        using QAbstractItemView::selectionCommand;
        using QAbstractItemView::setSelection;
        using QAbstractItemView::sharedPainter;
        using QAbstractItemView::showEvent;
        using QAbstractItemView::startDrag;
        using QAbstractItemView::tabletEvent;
        using QAbstractItemView::timerEvent;
        using QAbstractItemView::updateEditorData;
        using QAbstractItemView::updateEditorGeometries;
        using QAbstractItemView::updateGeometries;
        using QAbstractItemView::verticalOffset;
        using QAbstractItemView::verticalScrollbarAction;
        using QAbstractItemView::verticalScrollbarValueChanged;
        using QAbstractItemView::viewportEvent;
        using QAbstractItemView::viewportSizeHint;
        using QAbstractItemView::visualRegionForSelection;
        using QAbstractItemView::wheelEvent;
    };

    VirtualQAbstractItemView(QWidget* parent) : QAbstractItemView(parent) {};
    VirtualQAbstractItemView() : QAbstractItemView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractitemview_metaobject_callback) {
            QMetaObject* callback_ret = qabstractitemview_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractItemView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractitemview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractitemview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractitemview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qabstractitemview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qabstractitemview_setmodel_callback(this, cbval1);
            return;
        }
        QAbstractItemView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qabstractitemview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qabstractitemview_setselectionmodel_callback(this, cbval1);
            return;
        }
        QAbstractItemView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qabstractitemview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qabstractitemview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QAbstractItemView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qabstractitemview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qabstractitemview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::visualRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qabstractitemview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qabstractitemview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::scrollTo called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& point) const override {
        if (qabstractitemview_indexat_callback) {
            const QPoint& point_ret = point;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&point_ret);
            QModelIndex* callback_ret = qabstractitemview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::indexAt called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qabstractitemview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qabstractitemview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qabstractitemview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qabstractitemview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qabstractitemview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qabstractitemview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qabstractitemview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qabstractitemview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractItemView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qabstractitemview_reset_callback) {
            qabstractitemview_reset_callback(this);
            return;
        }
        QAbstractItemView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qabstractitemview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qabstractitemview_setrootindex_callback(this, cbval1);
            return;
        }
        QAbstractItemView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qabstractitemview_doitemslayout_callback) {
            qabstractitemview_doitemslayout_callback(this);
            return;
        }
        QAbstractItemView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qabstractitemview_selectall_callback) {
            qabstractitemview_selectall_callback(this);
            return;
        }
        QAbstractItemView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qabstractitemview_datachanged_callback) {
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
            qabstractitemview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qabstractitemview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qabstractitemview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qabstractitemview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qabstractitemview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qabstractitemview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qabstractitemview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractItemView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qabstractitemview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qabstractitemview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractItemView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qabstractitemview_updateeditordata_callback) {
            qabstractitemview_updateeditordata_callback(this);
            return;
        }
        QAbstractItemView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qabstractitemview_updateeditorgeometries_callback) {
            qabstractitemview_updateeditorgeometries_callback(this);
            return;
        }
        QAbstractItemView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qabstractitemview_updategeometries_callback) {
            qabstractitemview_updategeometries_callback(this);
            return;
        }
        QAbstractItemView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qabstractitemview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qabstractitemview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QAbstractItemView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qabstractitemview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qabstractitemview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QAbstractItemView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qabstractitemview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qabstractitemview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QAbstractItemView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qabstractitemview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qabstractitemview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QAbstractItemView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qabstractitemview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qabstractitemview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractItemView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qabstractitemview_commitdata_callback) {
            QWidget* cbval1 = editor;
            qabstractitemview_commitdata_callback(this, cbval1);
            return;
        }
        QAbstractItemView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qabstractitemview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qabstractitemview_editordestroyed_callback(this, cbval1);
            return;
        }
        QAbstractItemView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qabstractitemview_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qabstractitemview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::moveCursor called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qabstractitemview_horizontaloffset_callback) {
            int callback_ret = qabstractitemview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::horizontalOffset called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qabstractitemview_verticaloffset_callback) {
            int callback_ret = qabstractitemview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::verticalOffset called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qabstractitemview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qabstractitemview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::isIndexHidden called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qabstractitemview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qabstractitemview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::setSelection called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qabstractitemview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qabstractitemview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemView::visualRegionForSelection called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qabstractitemview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qabstractitemview_selectedindexes_callback(this);
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
        if (qabstractitemview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qabstractitemview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qabstractitemview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qabstractitemview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QAbstractItemView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qabstractitemview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qabstractitemview_startdrag_callback(this, cbval1);
            return;
        }
        QAbstractItemView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qabstractitemview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qabstractitemview_initviewitemoption_callback(this, cbval1);
            return;
        }
        QAbstractItemView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractitemview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qabstractitemview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractitemview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qabstractitemview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractitemview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractitemview_mousepressevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractitemview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractitemview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractitemview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractitemview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qabstractitemview_dragenterevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractitemview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qabstractitemview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractitemview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qabstractitemview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractitemview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qabstractitemview_dropevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractitemview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractitemview_focusinevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractitemview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractitemview_focusoutevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractitemview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractitemview_keypressevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractitemview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qabstractitemview_resizeevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractitemview_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qabstractitemview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qabstractitemview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qabstractitemview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractitemview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractItemView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qabstractitemview_viewportsizehint_callback) {
            QSize* callback_ret = qabstractitemview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractItemView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractitemview_minimumsizehint_callback) {
            QSize* callback_ret = qabstractitemview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractItemView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractitemview_sizehint_callback) {
            QSize* callback_ret = qabstractitemview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractItemView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qabstractitemview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qabstractitemview_setupviewport_callback(this, cbval1);
            return;
        }
        QAbstractItemView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qabstractitemview_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qabstractitemview_paintevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qabstractitemview_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qabstractitemview_wheelevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractitemview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qabstractitemview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qabstractitemview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qabstractitemview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractItemView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractitemview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qabstractitemview_changeevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qabstractitemview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qabstractitemview_initstyleoption_callback(this, cbval1);
            return;
        }
        QAbstractItemView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractitemview_devtype_callback) {
            int callback_ret = qabstractitemview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractitemview_setvisible_callback) {
            bool cbval1 = visible;
            qabstractitemview_setvisible_callback(this, cbval1);
            return;
        }
        QAbstractItemView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractitemview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qabstractitemview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractitemview_hasheightforwidth_callback) {
            bool callback_ret = qabstractitemview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QAbstractItemView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractitemview_paintengine_callback) {
            QPaintEngine* callback_ret = qabstractitemview_paintengine_callback(this);
            return callback_ret;
        }
        return QAbstractItemView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractitemview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractitemview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractitemview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qabstractitemview_enterevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractitemview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qabstractitemview_leaveevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractitemview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qabstractitemview_moveevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractitemview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qabstractitemview_closeevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractitemview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qabstractitemview_tabletevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractitemview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qabstractitemview_actionevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractitemview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qabstractitemview_showevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractitemview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qabstractitemview_hideevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractitemview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qabstractitemview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QAbstractItemView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractitemview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qabstractitemview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractitemview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qabstractitemview_initpainter_callback(this, cbval1);
            return;
        }
        QAbstractItemView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractitemview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qabstractitemview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractitemview_sharedpainter_callback) {
            QPainter* callback_ret = qabstractitemview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QAbstractItemView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractitemview_childevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemview_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractitemview_customevent_callback(this, cbval1);
            return;
        }
        QAbstractItemView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractitemview_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractItemView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractitemview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractItemView::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractItemView_SuperDataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QAbstractItemView_SuperRowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_SuperRowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
    friend void QAbstractItemView_SuperSelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QAbstractItemView_SuperCurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QAbstractItemView_SuperUpdateEditorData(QAbstractItemView* self);
    friend void QAbstractItemView_SuperUpdateEditorGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_SuperUpdateGeometries(QAbstractItemView* self);
    friend void QAbstractItemView_SuperVerticalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_SuperHorizontalScrollbarAction(QAbstractItemView* self, int action);
    friend void QAbstractItemView_SuperVerticalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_SuperHorizontalScrollbarValueChanged(QAbstractItemView* self, int value);
    friend void QAbstractItemView_SuperCloseEditor(QAbstractItemView* self, QWidget* editor, int hint);
    friend void QAbstractItemView_SuperCommitData(QAbstractItemView* self, QWidget* editor);
    friend void QAbstractItemView_SuperEditorDestroyed(QAbstractItemView* self, QObject* editor);
    friend libqt_list /* of QModelIndex* */ QAbstractItemView_SuperSelectedIndexes(const QAbstractItemView* self);
    friend bool QAbstractItemView_SuperEdit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QAbstractItemView_SuperSelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event);
    friend void QAbstractItemView_SuperStartDrag(QAbstractItemView* self, int supportedActions);
    friend void QAbstractItemView_SuperInitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option);
    friend bool QAbstractItemView_SuperFocusNextPrevChild(QAbstractItemView* self, bool next);
    friend bool QAbstractItemView_SuperEvent(QAbstractItemView* self, QEvent* event);
    friend bool QAbstractItemView_SuperViewportEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_SuperMousePressEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_SuperMouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_SuperMouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_SuperMouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
    friend void QAbstractItemView_SuperDragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
    friend void QAbstractItemView_SuperDragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
    friend void QAbstractItemView_SuperDragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
    friend void QAbstractItemView_SuperDropEvent(QAbstractItemView* self, QDropEvent* event);
    friend void QAbstractItemView_SuperFocusInEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_SuperFocusOutEvent(QAbstractItemView* self, QFocusEvent* event);
    friend void QAbstractItemView_SuperKeyPressEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_SuperResizeEvent(QAbstractItemView* self, QResizeEvent* event);
    friend void QAbstractItemView_SuperTimerEvent(QAbstractItemView* self, QTimerEvent* event);
    friend void QAbstractItemView_SuperInputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
    friend bool QAbstractItemView_SuperEventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
    friend QSize* QAbstractItemView_SuperViewportSizeHint(const QAbstractItemView* self);
    friend void QAbstractItemView_SuperPaintEvent(QAbstractItemView* self, QPaintEvent* param1);
    friend void QAbstractItemView_SuperWheelEvent(QAbstractItemView* self, QWheelEvent* param1);
    friend void QAbstractItemView_SuperContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1);
    friend void QAbstractItemView_SuperScrollContentsBy(QAbstractItemView* self, int dx, int dy);
    friend void QAbstractItemView_SuperChangeEvent(QAbstractItemView* self, QEvent* param1);
    friend void QAbstractItemView_SuperInitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option);
    friend void QAbstractItemView_SuperKeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event);
    friend void QAbstractItemView_SuperEnterEvent(QAbstractItemView* self, QEnterEvent* event);
    friend void QAbstractItemView_SuperLeaveEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_SuperMoveEvent(QAbstractItemView* self, QMoveEvent* event);
    friend void QAbstractItemView_SuperCloseEvent(QAbstractItemView* self, QCloseEvent* event);
    friend void QAbstractItemView_SuperTabletEvent(QAbstractItemView* self, QTabletEvent* event);
    friend void QAbstractItemView_SuperActionEvent(QAbstractItemView* self, QActionEvent* event);
    friend void QAbstractItemView_SuperShowEvent(QAbstractItemView* self, QShowEvent* event);
    friend void QAbstractItemView_SuperHideEvent(QAbstractItemView* self, QHideEvent* event);
    friend bool QAbstractItemView_SuperNativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractItemView_SuperMetric(const QAbstractItemView* self, int param1);
    friend void QAbstractItemView_SuperInitPainter(const QAbstractItemView* self, QPainter* painter);
    friend QPaintDevice* QAbstractItemView_SuperRedirected(const QAbstractItemView* self, QPoint* offset);
    friend QPainter* QAbstractItemView_SuperSharedPainter(const QAbstractItemView* self);
    friend void QAbstractItemView_SuperChildEvent(QAbstractItemView* self, QChildEvent* event);
    friend void QAbstractItemView_SuperCustomEvent(QAbstractItemView* self, QEvent* event);
    friend void QAbstractItemView_SuperConnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
    friend void QAbstractItemView_SuperDisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal);
};

#endif
