#pragma once
#ifndef EXTRAS_KIO_LIBKFILEPLACESVIEW_HXX
#define EXTRAS_KIO_LIBKFILEPLACESVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilePlacesView
class VirtualKFilePlacesView final : public KFilePlacesView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using KFilePlacesView_MetaObject_Callback = QMetaObject* (*)(const KFilePlacesView*);
    using KFilePlacesView_Metacast_Callback = void* (*)(KFilePlacesView*, const char*);
    using KFilePlacesView_Metacall_Callback = int (*)(KFilePlacesView*, int, int, void**);
    using KFilePlacesView_SizeHint_Callback = QSize* (*)(const KFilePlacesView*);
    using KFilePlacesView_SetModel_Callback = void (*)(KFilePlacesView*, QAbstractItemModel*);
    using KFilePlacesView_KeyPressEvent_Callback = void (*)(KFilePlacesView*, QKeyEvent*);
    using KFilePlacesView_ContextMenuEvent_Callback = void (*)(KFilePlacesView*, QContextMenuEvent*);
    using KFilePlacesView_ResizeEvent_Callback = void (*)(KFilePlacesView*, QResizeEvent*);
    using KFilePlacesView_ShowEvent_Callback = void (*)(KFilePlacesView*, QShowEvent*);
    using KFilePlacesView_HideEvent_Callback = void (*)(KFilePlacesView*, QHideEvent*);
    using KFilePlacesView_DragEnterEvent_Callback = void (*)(KFilePlacesView*, QDragEnterEvent*);
    using KFilePlacesView_DragLeaveEvent_Callback = void (*)(KFilePlacesView*, QDragLeaveEvent*);
    using KFilePlacesView_DragMoveEvent_Callback = void (*)(KFilePlacesView*, QDragMoveEvent*);
    using KFilePlacesView_DropEvent_Callback = void (*)(KFilePlacesView*, QDropEvent*);
    using KFilePlacesView_PaintEvent_Callback = void (*)(KFilePlacesView*, QPaintEvent*);
    using KFilePlacesView_StartDrag_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_MousePressEvent_Callback = void (*)(KFilePlacesView*, QMouseEvent*);
    using KFilePlacesView_RowsInserted_Callback = void (*)(KFilePlacesView*, QModelIndex*, int, int);
    using KFilePlacesView_DataChanged_Callback = void (*)(KFilePlacesView*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using KFilePlacesView_VisualRect_Callback = QRect* (*)(const KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_ScrollTo_Callback = void (*)(KFilePlacesView*, QModelIndex*, int);
    using KFilePlacesView_IndexAt_Callback = QModelIndex* (*)(const KFilePlacesView*, QPoint*);
    using KFilePlacesView_DoItemsLayout_Callback = void (*)(KFilePlacesView*);
    using KFilePlacesView_Reset_Callback = void (*)(KFilePlacesView*);
    using KFilePlacesView_SetRootIndex_Callback = void (*)(KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_Event_Callback = bool (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_ScrollContentsBy_Callback = void (*)(KFilePlacesView*, int, int);
    using KFilePlacesView_RowsAboutToBeRemoved_Callback = void (*)(KFilePlacesView*, QModelIndex*, int, int);
    using KFilePlacesView_MouseMoveEvent_Callback = void (*)(KFilePlacesView*, QMouseEvent*);
    using KFilePlacesView_MouseReleaseEvent_Callback = void (*)(KFilePlacesView*, QMouseEvent*);
    using KFilePlacesView_WheelEvent_Callback = void (*)(KFilePlacesView*, QWheelEvent*);
    using KFilePlacesView_TimerEvent_Callback = void (*)(KFilePlacesView*, QTimerEvent*);
    using KFilePlacesView_InitViewItemOption_Callback = void (*)(const KFilePlacesView*, QStyleOptionViewItem*);
    using KFilePlacesView_HorizontalOffset_Callback = int (*)(const KFilePlacesView*);
    using KFilePlacesView_VerticalOffset_Callback = int (*)(const KFilePlacesView*);
    using KFilePlacesView_MoveCursor_Callback = QModelIndex* (*)(KFilePlacesView*, int, int);
    using KFilePlacesView_SetSelection_Callback = void (*)(KFilePlacesView*, QRect*, int);
    using KFilePlacesView_VisualRegionForSelection_Callback = QRegion* (*)(const KFilePlacesView*, QItemSelection*);
    using KFilePlacesView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const KFilePlacesView*);
    using KFilePlacesView_UpdateGeometries_Callback = void (*)(KFilePlacesView*);
    using KFilePlacesView_IsIndexHidden_Callback = bool (*)(const KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_SelectionChanged_Callback = void (*)(KFilePlacesView*, QItemSelection*, QItemSelection*);
    using KFilePlacesView_CurrentChanged_Callback = void (*)(KFilePlacesView*, QModelIndex*, QModelIndex*);
    using KFilePlacesView_ViewportSizeHint_Callback = QSize* (*)(const KFilePlacesView*);
    using KFilePlacesView_SetSelectionModel_Callback = void (*)(KFilePlacesView*, QItemSelectionModel*);
    using KFilePlacesView_KeyboardSearch_Callback = void (*)(KFilePlacesView*, const char*);
    using KFilePlacesView_SizeHintForRow_Callback = int (*)(const KFilePlacesView*, int);
    using KFilePlacesView_SizeHintForColumn_Callback = int (*)(const KFilePlacesView*, int);
    using KFilePlacesView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const KFilePlacesView*, QModelIndex*);
    using KFilePlacesView_InputMethodQuery_Callback = QVariant* (*)(const KFilePlacesView*, int);
    using KFilePlacesView_SelectAll_Callback = void (*)(KFilePlacesView*);
    using KFilePlacesView_UpdateEditorData_Callback = void (*)(KFilePlacesView*);
    using KFilePlacesView_UpdateEditorGeometries_Callback = void (*)(KFilePlacesView*);
    using KFilePlacesView_VerticalScrollbarAction_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_HorizontalScrollbarAction_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_VerticalScrollbarValueChanged_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_HorizontalScrollbarValueChanged_Callback = void (*)(KFilePlacesView*, int);
    using KFilePlacesView_CloseEditor_Callback = void (*)(KFilePlacesView*, QWidget*, int);
    using KFilePlacesView_CommitData_Callback = void (*)(KFilePlacesView*, QWidget*);
    using KFilePlacesView_EditorDestroyed_Callback = void (*)(KFilePlacesView*, QObject*);
    using KFilePlacesView_Edit2_Callback = bool (*)(KFilePlacesView*, QModelIndex*, int, QEvent*);
    using KFilePlacesView_SelectionCommand_Callback = int (*)(const KFilePlacesView*, QModelIndex*, QEvent*);
    using KFilePlacesView_FocusNextPrevChild_Callback = bool (*)(KFilePlacesView*, bool);
    using KFilePlacesView_ViewportEvent_Callback = bool (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_MouseDoubleClickEvent_Callback = void (*)(KFilePlacesView*, QMouseEvent*);
    using KFilePlacesView_FocusInEvent_Callback = void (*)(KFilePlacesView*, QFocusEvent*);
    using KFilePlacesView_FocusOutEvent_Callback = void (*)(KFilePlacesView*, QFocusEvent*);
    using KFilePlacesView_InputMethodEvent_Callback = void (*)(KFilePlacesView*, QInputMethodEvent*);
    using KFilePlacesView_EventFilter_Callback = bool (*)(KFilePlacesView*, QObject*, QEvent*);
    using KFilePlacesView_MinimumSizeHint_Callback = QSize* (*)(const KFilePlacesView*);
    using KFilePlacesView_SetupViewport_Callback = void (*)(KFilePlacesView*, QWidget*);
    using KFilePlacesView_ChangeEvent_Callback = void (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_InitStyleOption_Callback = void (*)(const KFilePlacesView*, QStyleOptionFrame*);
    using KFilePlacesView_DevType_Callback = int (*)(const KFilePlacesView*);
    using KFilePlacesView_SetVisible_Callback = void (*)(KFilePlacesView*, bool);
    using KFilePlacesView_HeightForWidth_Callback = int (*)(const KFilePlacesView*, int);
    using KFilePlacesView_HasHeightForWidth_Callback = bool (*)(const KFilePlacesView*);
    using KFilePlacesView_PaintEngine_Callback = QPaintEngine* (*)(const KFilePlacesView*);
    using KFilePlacesView_KeyReleaseEvent_Callback = void (*)(KFilePlacesView*, QKeyEvent*);
    using KFilePlacesView_EnterEvent_Callback = void (*)(KFilePlacesView*, QEnterEvent*);
    using KFilePlacesView_LeaveEvent_Callback = void (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_MoveEvent_Callback = void (*)(KFilePlacesView*, QMoveEvent*);
    using KFilePlacesView_CloseEvent_Callback = void (*)(KFilePlacesView*, QCloseEvent*);
    using KFilePlacesView_TabletEvent_Callback = void (*)(KFilePlacesView*, QTabletEvent*);
    using KFilePlacesView_ActionEvent_Callback = void (*)(KFilePlacesView*, QActionEvent*);
    using KFilePlacesView_NativeEvent_Callback = bool (*)(KFilePlacesView*, libqt_string, void*, intptr_t*);
    using KFilePlacesView_Metric_Callback = int (*)(const KFilePlacesView*, int);
    using KFilePlacesView_InitPainter_Callback = void (*)(const KFilePlacesView*, QPainter*);
    using KFilePlacesView_Redirected_Callback = QPaintDevice* (*)(const KFilePlacesView*, QPoint*);
    using KFilePlacesView_SharedPainter_Callback = QPainter* (*)(const KFilePlacesView*);
    using KFilePlacesView_ChildEvent_Callback = void (*)(KFilePlacesView*, QChildEvent*);
    using KFilePlacesView_CustomEvent_Callback = void (*)(KFilePlacesView*, QEvent*);
    using KFilePlacesView_ConnectNotify_Callback = void (*)(KFilePlacesView*, QMetaMethod*);
    using KFilePlacesView_DisconnectNotify_Callback = void (*)(KFilePlacesView*, QMetaMethod*);
    using KFilePlacesView::contentsSize;
    using KFilePlacesView::create;
    using KFilePlacesView::destroy;
    using KFilePlacesView::dirtyRegionOffset;
    using KFilePlacesView::doAutoScroll;
    using KFilePlacesView::drawFrame;
    using KFilePlacesView::dropIndicatorPosition;
    using KFilePlacesView::executeDelayedItemsLayout;
    using KFilePlacesView::focusNextChild;
    using KFilePlacesView::focusPreviousChild;
    using KFilePlacesView::getDecodedMetricF;
    using KFilePlacesView::isSignalConnected;
    using KFilePlacesView::receivers;
    using KFilePlacesView::rectForIndex;
    using KFilePlacesView::resizeContents;
    using KFilePlacesView::scheduleDelayedItemsLayout;
    using KFilePlacesView::scrollDirtyRegion;
    using KFilePlacesView::sender;
    using KFilePlacesView::senderSignalIndex;
    using KFilePlacesView::setDirtyRegion;
    using KFilePlacesView::setPositionForIndex;
    using KFilePlacesView::setState;
    using KFilePlacesView::setViewportMargins;
    using KFilePlacesView::startAutoScroll;
    using KFilePlacesView::state;
    using KFilePlacesView::stopAutoScroll;
    using KFilePlacesView::updateMicroFocus;
    using KFilePlacesView::viewportMargins;

    // Instance callback storage
    KFilePlacesView_MetaObject_Callback kfileplacesview_metaobject_callback = nullptr;
    KFilePlacesView_Metacast_Callback kfileplacesview_metacast_callback = nullptr;
    KFilePlacesView_Metacall_Callback kfileplacesview_metacall_callback = nullptr;
    KFilePlacesView_SizeHint_Callback kfileplacesview_sizehint_callback = nullptr;
    KFilePlacesView_SetModel_Callback kfileplacesview_setmodel_callback = nullptr;
    KFilePlacesView_KeyPressEvent_Callback kfileplacesview_keypressevent_callback = nullptr;
    KFilePlacesView_ContextMenuEvent_Callback kfileplacesview_contextmenuevent_callback = nullptr;
    KFilePlacesView_ResizeEvent_Callback kfileplacesview_resizeevent_callback = nullptr;
    KFilePlacesView_ShowEvent_Callback kfileplacesview_showevent_callback = nullptr;
    KFilePlacesView_HideEvent_Callback kfileplacesview_hideevent_callback = nullptr;
    KFilePlacesView_DragEnterEvent_Callback kfileplacesview_dragenterevent_callback = nullptr;
    KFilePlacesView_DragLeaveEvent_Callback kfileplacesview_dragleaveevent_callback = nullptr;
    KFilePlacesView_DragMoveEvent_Callback kfileplacesview_dragmoveevent_callback = nullptr;
    KFilePlacesView_DropEvent_Callback kfileplacesview_dropevent_callback = nullptr;
    KFilePlacesView_PaintEvent_Callback kfileplacesview_paintevent_callback = nullptr;
    KFilePlacesView_StartDrag_Callback kfileplacesview_startdrag_callback = nullptr;
    KFilePlacesView_MousePressEvent_Callback kfileplacesview_mousepressevent_callback = nullptr;
    KFilePlacesView_RowsInserted_Callback kfileplacesview_rowsinserted_callback = nullptr;
    KFilePlacesView_DataChanged_Callback kfileplacesview_datachanged_callback = nullptr;
    KFilePlacesView_VisualRect_Callback kfileplacesview_visualrect_callback = nullptr;
    KFilePlacesView_ScrollTo_Callback kfileplacesview_scrollto_callback = nullptr;
    KFilePlacesView_IndexAt_Callback kfileplacesview_indexat_callback = nullptr;
    KFilePlacesView_DoItemsLayout_Callback kfileplacesview_doitemslayout_callback = nullptr;
    KFilePlacesView_Reset_Callback kfileplacesview_reset_callback = nullptr;
    KFilePlacesView_SetRootIndex_Callback kfileplacesview_setrootindex_callback = nullptr;
    KFilePlacesView_Event_Callback kfileplacesview_event_callback = nullptr;
    KFilePlacesView_ScrollContentsBy_Callback kfileplacesview_scrollcontentsby_callback = nullptr;
    KFilePlacesView_RowsAboutToBeRemoved_Callback kfileplacesview_rowsabouttoberemoved_callback = nullptr;
    KFilePlacesView_MouseMoveEvent_Callback kfileplacesview_mousemoveevent_callback = nullptr;
    KFilePlacesView_MouseReleaseEvent_Callback kfileplacesview_mousereleaseevent_callback = nullptr;
    KFilePlacesView_WheelEvent_Callback kfileplacesview_wheelevent_callback = nullptr;
    KFilePlacesView_TimerEvent_Callback kfileplacesview_timerevent_callback = nullptr;
    KFilePlacesView_InitViewItemOption_Callback kfileplacesview_initviewitemoption_callback = nullptr;
    KFilePlacesView_HorizontalOffset_Callback kfileplacesview_horizontaloffset_callback = nullptr;
    KFilePlacesView_VerticalOffset_Callback kfileplacesview_verticaloffset_callback = nullptr;
    KFilePlacesView_MoveCursor_Callback kfileplacesview_movecursor_callback = nullptr;
    KFilePlacesView_SetSelection_Callback kfileplacesview_setselection_callback = nullptr;
    KFilePlacesView_VisualRegionForSelection_Callback kfileplacesview_visualregionforselection_callback = nullptr;
    KFilePlacesView_SelectedIndexes_Callback kfileplacesview_selectedindexes_callback = nullptr;
    KFilePlacesView_UpdateGeometries_Callback kfileplacesview_updategeometries_callback = nullptr;
    KFilePlacesView_IsIndexHidden_Callback kfileplacesview_isindexhidden_callback = nullptr;
    KFilePlacesView_SelectionChanged_Callback kfileplacesview_selectionchanged_callback = nullptr;
    KFilePlacesView_CurrentChanged_Callback kfileplacesview_currentchanged_callback = nullptr;
    KFilePlacesView_ViewportSizeHint_Callback kfileplacesview_viewportsizehint_callback = nullptr;
    KFilePlacesView_SetSelectionModel_Callback kfileplacesview_setselectionmodel_callback = nullptr;
    KFilePlacesView_KeyboardSearch_Callback kfileplacesview_keyboardsearch_callback = nullptr;
    KFilePlacesView_SizeHintForRow_Callback kfileplacesview_sizehintforrow_callback = nullptr;
    KFilePlacesView_SizeHintForColumn_Callback kfileplacesview_sizehintforcolumn_callback = nullptr;
    KFilePlacesView_ItemDelegateForIndex_Callback kfileplacesview_itemdelegateforindex_callback = nullptr;
    KFilePlacesView_InputMethodQuery_Callback kfileplacesview_inputmethodquery_callback = nullptr;
    KFilePlacesView_SelectAll_Callback kfileplacesview_selectall_callback = nullptr;
    KFilePlacesView_UpdateEditorData_Callback kfileplacesview_updateeditordata_callback = nullptr;
    KFilePlacesView_UpdateEditorGeometries_Callback kfileplacesview_updateeditorgeometries_callback = nullptr;
    KFilePlacesView_VerticalScrollbarAction_Callback kfileplacesview_verticalscrollbaraction_callback = nullptr;
    KFilePlacesView_HorizontalScrollbarAction_Callback kfileplacesview_horizontalscrollbaraction_callback = nullptr;
    KFilePlacesView_VerticalScrollbarValueChanged_Callback kfileplacesview_verticalscrollbarvaluechanged_callback = nullptr;
    KFilePlacesView_HorizontalScrollbarValueChanged_Callback kfileplacesview_horizontalscrollbarvaluechanged_callback = nullptr;
    KFilePlacesView_CloseEditor_Callback kfileplacesview_closeeditor_callback = nullptr;
    KFilePlacesView_CommitData_Callback kfileplacesview_commitdata_callback = nullptr;
    KFilePlacesView_EditorDestroyed_Callback kfileplacesview_editordestroyed_callback = nullptr;
    KFilePlacesView_Edit2_Callback kfileplacesview_edit2_callback = nullptr;
    KFilePlacesView_SelectionCommand_Callback kfileplacesview_selectioncommand_callback = nullptr;
    KFilePlacesView_FocusNextPrevChild_Callback kfileplacesview_focusnextprevchild_callback = nullptr;
    KFilePlacesView_ViewportEvent_Callback kfileplacesview_viewportevent_callback = nullptr;
    KFilePlacesView_MouseDoubleClickEvent_Callback kfileplacesview_mousedoubleclickevent_callback = nullptr;
    KFilePlacesView_FocusInEvent_Callback kfileplacesview_focusinevent_callback = nullptr;
    KFilePlacesView_FocusOutEvent_Callback kfileplacesview_focusoutevent_callback = nullptr;
    KFilePlacesView_InputMethodEvent_Callback kfileplacesview_inputmethodevent_callback = nullptr;
    KFilePlacesView_EventFilter_Callback kfileplacesview_eventfilter_callback = nullptr;
    KFilePlacesView_MinimumSizeHint_Callback kfileplacesview_minimumsizehint_callback = nullptr;
    KFilePlacesView_SetupViewport_Callback kfileplacesview_setupviewport_callback = nullptr;
    KFilePlacesView_ChangeEvent_Callback kfileplacesview_changeevent_callback = nullptr;
    KFilePlacesView_InitStyleOption_Callback kfileplacesview_initstyleoption_callback = nullptr;
    KFilePlacesView_DevType_Callback kfileplacesview_devtype_callback = nullptr;
    KFilePlacesView_SetVisible_Callback kfileplacesview_setvisible_callback = nullptr;
    KFilePlacesView_HeightForWidth_Callback kfileplacesview_heightforwidth_callback = nullptr;
    KFilePlacesView_HasHeightForWidth_Callback kfileplacesview_hasheightforwidth_callback = nullptr;
    KFilePlacesView_PaintEngine_Callback kfileplacesview_paintengine_callback = nullptr;
    KFilePlacesView_KeyReleaseEvent_Callback kfileplacesview_keyreleaseevent_callback = nullptr;
    KFilePlacesView_EnterEvent_Callback kfileplacesview_enterevent_callback = nullptr;
    KFilePlacesView_LeaveEvent_Callback kfileplacesview_leaveevent_callback = nullptr;
    KFilePlacesView_MoveEvent_Callback kfileplacesview_moveevent_callback = nullptr;
    KFilePlacesView_CloseEvent_Callback kfileplacesview_closeevent_callback = nullptr;
    KFilePlacesView_TabletEvent_Callback kfileplacesview_tabletevent_callback = nullptr;
    KFilePlacesView_ActionEvent_Callback kfileplacesview_actionevent_callback = nullptr;
    KFilePlacesView_NativeEvent_Callback kfileplacesview_nativeevent_callback = nullptr;
    KFilePlacesView_Metric_Callback kfileplacesview_metric_callback = nullptr;
    KFilePlacesView_InitPainter_Callback kfileplacesview_initpainter_callback = nullptr;
    KFilePlacesView_Redirected_Callback kfileplacesview_redirected_callback = nullptr;
    KFilePlacesView_SharedPainter_Callback kfileplacesview_sharedpainter_callback = nullptr;
    KFilePlacesView_ChildEvent_Callback kfileplacesview_childevent_callback = nullptr;
    KFilePlacesView_CustomEvent_Callback kfileplacesview_customevent_callback = nullptr;
    KFilePlacesView_ConnectNotify_Callback kfileplacesview_connectnotify_callback = nullptr;
    KFilePlacesView_DisconnectNotify_Callback kfileplacesview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFilePlacesView {
        using KFilePlacesView::actionEvent;
        using KFilePlacesView::changeEvent;
        using KFilePlacesView::childEvent;
        using KFilePlacesView::closeEditor;
        using KFilePlacesView::closeEvent;
        using KFilePlacesView::commitData;
        using KFilePlacesView::connectNotify;
        using KFilePlacesView::contextMenuEvent;
        using KFilePlacesView::currentChanged;
        using KFilePlacesView::customEvent;
        using KFilePlacesView::dataChanged;
        using KFilePlacesView::disconnectNotify;
        using KFilePlacesView::dragEnterEvent;
        using KFilePlacesView::dragLeaveEvent;
        using KFilePlacesView::dragMoveEvent;
        using KFilePlacesView::dropEvent;
        using KFilePlacesView::edit;
        using KFilePlacesView::editorDestroyed;
        using KFilePlacesView::enterEvent;
        using KFilePlacesView::event;
        using KFilePlacesView::eventFilter;
        using KFilePlacesView::focusInEvent;
        using KFilePlacesView::focusNextPrevChild;
        using KFilePlacesView::focusOutEvent;
        using KFilePlacesView::hideEvent;
        using KFilePlacesView::horizontalOffset;
        using KFilePlacesView::horizontalScrollbarAction;
        using KFilePlacesView::horizontalScrollbarValueChanged;
        using KFilePlacesView::initPainter;
        using KFilePlacesView::initStyleOption;
        using KFilePlacesView::initViewItemOption;
        using KFilePlacesView::inputMethodEvent;
        using KFilePlacesView::isIndexHidden;
        using KFilePlacesView::keyPressEvent;
        using KFilePlacesView::keyReleaseEvent;
        using KFilePlacesView::leaveEvent;
        using KFilePlacesView::metric;
        using KFilePlacesView::mouseDoubleClickEvent;
        using KFilePlacesView::mouseMoveEvent;
        using KFilePlacesView::mousePressEvent;
        using KFilePlacesView::mouseReleaseEvent;
        using KFilePlacesView::moveCursor;
        using KFilePlacesView::moveEvent;
        using KFilePlacesView::nativeEvent;
        using KFilePlacesView::paintEvent;
        using KFilePlacesView::redirected;
        using KFilePlacesView::resizeEvent;
        using KFilePlacesView::rowsAboutToBeRemoved;
        using KFilePlacesView::rowsInserted;
        using KFilePlacesView::scrollContentsBy;
        using KFilePlacesView::selectedIndexes;
        using KFilePlacesView::selectionChanged;
        using KFilePlacesView::selectionCommand;
        using KFilePlacesView::setSelection;
        using KFilePlacesView::sharedPainter;
        using KFilePlacesView::showEvent;
        using KFilePlacesView::startDrag;
        using KFilePlacesView::tabletEvent;
        using KFilePlacesView::timerEvent;
        using KFilePlacesView::updateEditorData;
        using KFilePlacesView::updateEditorGeometries;
        using KFilePlacesView::updateGeometries;
        using KFilePlacesView::verticalOffset;
        using KFilePlacesView::verticalScrollbarAction;
        using KFilePlacesView::verticalScrollbarValueChanged;
        using KFilePlacesView::viewportEvent;
        using KFilePlacesView::viewportSizeHint;
        using KFilePlacesView::visualRegionForSelection;
        using KFilePlacesView::wheelEvent;
    };

    VirtualKFilePlacesView(QWidget* parent) : KFilePlacesView(parent) {};
    VirtualKFilePlacesView() : KFilePlacesView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfileplacesview_metaobject_callback) {
            QMetaObject* callback_ret = kfileplacesview_metaobject_callback(this);
            return callback_ret;
        }
        return KFilePlacesView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfileplacesview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfileplacesview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileplacesview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfileplacesview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfileplacesview_sizehint_callback) {
            QSize* callback_ret = kfileplacesview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kfileplacesview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kfileplacesview_setmodel_callback(this, cbval1);
            return;
        }
        KFilePlacesView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfileplacesview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kfileplacesview_keypressevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfileplacesview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kfileplacesview_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfileplacesview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kfileplacesview_resizeevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfileplacesview_showevent_callback) {
            QShowEvent* cbval1 = event;
            kfileplacesview_showevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfileplacesview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kfileplacesview_hideevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfileplacesview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfileplacesview_dragenterevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfileplacesview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfileplacesview_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfileplacesview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfileplacesview_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfileplacesview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfileplacesview_dropevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfileplacesview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kfileplacesview_paintevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (kfileplacesview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            kfileplacesview_startdrag_callback(this, cbval1);
            return;
        }
        KFilePlacesView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfileplacesview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kfileplacesview_mousepressevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (kfileplacesview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            kfileplacesview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KFilePlacesView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (kfileplacesview_datachanged_callback) {
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
            kfileplacesview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        KFilePlacesView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kfileplacesview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = kfileplacesview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (kfileplacesview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            kfileplacesview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (kfileplacesview_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = kfileplacesview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (kfileplacesview_doitemslayout_callback) {
            kfileplacesview_doitemslayout_callback(this);
            return;
        }
        KFilePlacesView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kfileplacesview_reset_callback) {
            kfileplacesview_reset_callback(this);
            return;
        }
        KFilePlacesView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (kfileplacesview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            kfileplacesview_setrootindex_callback(this, cbval1);
            return;
        }
        KFilePlacesView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kfileplacesview_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kfileplacesview_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kfileplacesview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            kfileplacesview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (kfileplacesview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            kfileplacesview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KFilePlacesView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kfileplacesview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kfileplacesview_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kfileplacesview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kfileplacesview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kfileplacesview_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            kfileplacesview_wheelevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kfileplacesview_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            kfileplacesview_timerevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (kfileplacesview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            kfileplacesview_initviewitemoption_callback(this, cbval1);
            return;
        }
        KFilePlacesView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (kfileplacesview_horizontaloffset_callback) {
            int callback_ret = kfileplacesview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (kfileplacesview_verticaloffset_callback) {
            int callback_ret = kfileplacesview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (kfileplacesview_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = kfileplacesview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesView::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (kfileplacesview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            kfileplacesview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (kfileplacesview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = kfileplacesview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (kfileplacesview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = kfileplacesview_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KFilePlacesView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (kfileplacesview_updategeometries_callback) {
            kfileplacesview_updategeometries_callback(this);
            return;
        }
        KFilePlacesView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (kfileplacesview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kfileplacesview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (kfileplacesview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            kfileplacesview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (kfileplacesview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            kfileplacesview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kfileplacesview_viewportsizehint_callback) {
            QSize* callback_ret = kfileplacesview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (kfileplacesview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            kfileplacesview_setselectionmodel_callback(this, cbval1);
            return;
        }
        KFilePlacesView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (kfileplacesview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            kfileplacesview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        KFilePlacesView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (kfileplacesview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = kfileplacesview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (kfileplacesview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = kfileplacesview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (kfileplacesview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = kfileplacesview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (kfileplacesview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = kfileplacesview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (kfileplacesview_selectall_callback) {
            kfileplacesview_selectall_callback(this);
            return;
        }
        KFilePlacesView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (kfileplacesview_updateeditordata_callback) {
            kfileplacesview_updateeditordata_callback(this);
            return;
        }
        KFilePlacesView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (kfileplacesview_updateeditorgeometries_callback) {
            kfileplacesview_updateeditorgeometries_callback(this);
            return;
        }
        KFilePlacesView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (kfileplacesview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            kfileplacesview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        KFilePlacesView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (kfileplacesview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            kfileplacesview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        KFilePlacesView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (kfileplacesview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            kfileplacesview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        KFilePlacesView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (kfileplacesview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            kfileplacesview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        KFilePlacesView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (kfileplacesview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            kfileplacesview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        KFilePlacesView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (kfileplacesview_commitdata_callback) {
            QWidget* cbval1 = editor;
            kfileplacesview_commitdata_callback(this, cbval1);
            return;
        }
        KFilePlacesView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (kfileplacesview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            kfileplacesview_editordestroyed_callback(this, cbval1);
            return;
        }
        KFilePlacesView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (kfileplacesview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = kfileplacesview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KFilePlacesView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (kfileplacesview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = kfileplacesview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return KFilePlacesView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfileplacesview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfileplacesview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (kfileplacesview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfileplacesview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfileplacesview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfileplacesview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfileplacesview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kfileplacesview_focusinevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfileplacesview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kfileplacesview_focusoutevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (kfileplacesview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            kfileplacesview_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kfileplacesview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = kfileplacesview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFilePlacesView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfileplacesview_minimumsizehint_callback) {
            QSize* callback_ret = kfileplacesview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kfileplacesview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            kfileplacesview_setupviewport_callback(this, cbval1);
            return;
        }
        KFilePlacesView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfileplacesview_changeevent_callback) {
            QEvent* cbval1 = param1;
            kfileplacesview_changeevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kfileplacesview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kfileplacesview_initstyleoption_callback(this, cbval1);
            return;
        }
        KFilePlacesView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfileplacesview_devtype_callback) {
            int callback_ret = kfileplacesview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfileplacesview_setvisible_callback) {
            bool cbval1 = visible;
            kfileplacesview_setvisible_callback(this, cbval1);
            return;
        }
        KFilePlacesView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfileplacesview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfileplacesview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfileplacesview_hasheightforwidth_callback) {
            bool callback_ret = kfileplacesview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFilePlacesView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfileplacesview_paintengine_callback) {
            QPaintEngine* callback_ret = kfileplacesview_paintengine_callback(this);
            return callback_ret;
        }
        return KFilePlacesView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfileplacesview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kfileplacesview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfileplacesview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfileplacesview_enterevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfileplacesview_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfileplacesview_leaveevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfileplacesview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfileplacesview_moveevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfileplacesview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kfileplacesview_closeevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfileplacesview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfileplacesview_tabletevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfileplacesview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfileplacesview_actionevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfileplacesview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfileplacesview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFilePlacesView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfileplacesview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfileplacesview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfileplacesview_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfileplacesview_initpainter_callback(this, cbval1);
            return;
        }
        KFilePlacesView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfileplacesview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfileplacesview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfileplacesview_sharedpainter_callback) {
            QPainter* callback_ret = kfileplacesview_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFilePlacesView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileplacesview_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfileplacesview_childevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileplacesview_customevent_callback) {
            QEvent* cbval1 = event;
            kfileplacesview_customevent_callback(this, cbval1);
            return;
        }
        KFilePlacesView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileplacesview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileplacesview_connectnotify_callback(this, cbval1);
            return;
        }
        KFilePlacesView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileplacesview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileplacesview_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFilePlacesView::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFilePlacesView_SuperKeyPressEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_SuperContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event);
    friend void KFilePlacesView_SuperResizeEvent(KFilePlacesView* self, QResizeEvent* event);
    friend void KFilePlacesView_SuperShowEvent(KFilePlacesView* self, QShowEvent* event);
    friend void KFilePlacesView_SuperHideEvent(KFilePlacesView* self, QHideEvent* event);
    friend void KFilePlacesView_SuperDragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event);
    friend void KFilePlacesView_SuperDragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event);
    friend void KFilePlacesView_SuperDragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event);
    friend void KFilePlacesView_SuperDropEvent(KFilePlacesView* self, QDropEvent* event);
    friend void KFilePlacesView_SuperPaintEvent(KFilePlacesView* self, QPaintEvent* event);
    friend void KFilePlacesView_SuperStartDrag(KFilePlacesView* self, int supportedActions);
    friend void KFilePlacesView_SuperMousePressEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_SuperRowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_SuperDataChanged(KFilePlacesView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend bool KFilePlacesView_SuperEvent(KFilePlacesView* self, QEvent* e);
    friend void KFilePlacesView_SuperScrollContentsBy(KFilePlacesView* self, int dx, int dy);
    friend void KFilePlacesView_SuperRowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end);
    friend void KFilePlacesView_SuperMouseMoveEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_SuperMouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e);
    friend void KFilePlacesView_SuperWheelEvent(KFilePlacesView* self, QWheelEvent* e);
    friend void KFilePlacesView_SuperTimerEvent(KFilePlacesView* self, QTimerEvent* e);
    friend void KFilePlacesView_SuperInitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option);
    friend int KFilePlacesView_SuperHorizontalOffset(const KFilePlacesView* self);
    friend int KFilePlacesView_SuperVerticalOffset(const KFilePlacesView* self);
    friend QModelIndex* KFilePlacesView_SuperMoveCursor(KFilePlacesView* self, int cursorAction, int modifiers);
    friend void KFilePlacesView_SuperSetSelection(KFilePlacesView* self, const QRect* rect, int command);
    friend QRegion* KFilePlacesView_SuperVisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ KFilePlacesView_SuperSelectedIndexes(const KFilePlacesView* self);
    friend void KFilePlacesView_SuperUpdateGeometries(KFilePlacesView* self);
    friend bool KFilePlacesView_SuperIsIndexHidden(const KFilePlacesView* self, const QModelIndex* index);
    friend void KFilePlacesView_SuperSelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void KFilePlacesView_SuperCurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* KFilePlacesView_SuperViewportSizeHint(const KFilePlacesView* self);
    friend void KFilePlacesView_SuperUpdateEditorData(KFilePlacesView* self);
    friend void KFilePlacesView_SuperUpdateEditorGeometries(KFilePlacesView* self);
    friend void KFilePlacesView_SuperVerticalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_SuperHorizontalScrollbarAction(KFilePlacesView* self, int action);
    friend void KFilePlacesView_SuperVerticalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_SuperHorizontalScrollbarValueChanged(KFilePlacesView* self, int value);
    friend void KFilePlacesView_SuperCloseEditor(KFilePlacesView* self, QWidget* editor, int hint);
    friend void KFilePlacesView_SuperCommitData(KFilePlacesView* self, QWidget* editor);
    friend void KFilePlacesView_SuperEditorDestroyed(KFilePlacesView* self, QObject* editor);
    friend bool KFilePlacesView_SuperEdit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int KFilePlacesView_SuperSelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event);
    friend bool KFilePlacesView_SuperFocusNextPrevChild(KFilePlacesView* self, bool next);
    friend bool KFilePlacesView_SuperViewportEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_SuperMouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event);
    friend void KFilePlacesView_SuperFocusInEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_SuperFocusOutEvent(KFilePlacesView* self, QFocusEvent* event);
    friend void KFilePlacesView_SuperInputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event);
    friend bool KFilePlacesView_SuperEventFilter(KFilePlacesView* self, QObject* object, QEvent* event);
    friend void KFilePlacesView_SuperChangeEvent(KFilePlacesView* self, QEvent* param1);
    friend void KFilePlacesView_SuperInitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option);
    friend void KFilePlacesView_SuperKeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event);
    friend void KFilePlacesView_SuperEnterEvent(KFilePlacesView* self, QEnterEvent* event);
    friend void KFilePlacesView_SuperLeaveEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_SuperMoveEvent(KFilePlacesView* self, QMoveEvent* event);
    friend void KFilePlacesView_SuperCloseEvent(KFilePlacesView* self, QCloseEvent* event);
    friend void KFilePlacesView_SuperTabletEvent(KFilePlacesView* self, QTabletEvent* event);
    friend void KFilePlacesView_SuperActionEvent(KFilePlacesView* self, QActionEvent* event);
    friend bool KFilePlacesView_SuperNativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KFilePlacesView_SuperMetric(const KFilePlacesView* self, int param1);
    friend void KFilePlacesView_SuperInitPainter(const KFilePlacesView* self, QPainter* painter);
    friend QPaintDevice* KFilePlacesView_SuperRedirected(const KFilePlacesView* self, QPoint* offset);
    friend QPainter* KFilePlacesView_SuperSharedPainter(const KFilePlacesView* self);
    friend void KFilePlacesView_SuperChildEvent(KFilePlacesView* self, QChildEvent* event);
    friend void KFilePlacesView_SuperCustomEvent(KFilePlacesView* self, QEvent* event);
    friend void KFilePlacesView_SuperConnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
    friend void KFilePlacesView_SuperDisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal);
};

#endif
