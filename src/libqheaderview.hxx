#pragma once
#ifndef LIBQHEADERVIEW_HXX
#define LIBQHEADERVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QHeaderView
class VirtualQHeaderView final : public QHeaderView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QHeaderView_MetaObject_Callback = QMetaObject* (*)(const QHeaderView*);
    using QHeaderView_Metacast_Callback = void* (*)(QHeaderView*, const char*);
    using QHeaderView_Metacall_Callback = int (*)(QHeaderView*, int, int, void**);
    using QHeaderView_SetModel_Callback = void (*)(QHeaderView*, QAbstractItemModel*);
    using QHeaderView_SizeHint_Callback = QSize* (*)(const QHeaderView*);
    using QHeaderView_SetVisible_Callback = void (*)(QHeaderView*, bool);
    using QHeaderView_DoItemsLayout_Callback = void (*)(QHeaderView*);
    using QHeaderView_Reset_Callback = void (*)(QHeaderView*);
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
    using QHeaderView_HorizontalOffset_Callback = int (*)(const QHeaderView*);
    using QHeaderView_VerticalOffset_Callback = int (*)(const QHeaderView*);
    using QHeaderView_UpdateGeometries_Callback = void (*)(QHeaderView*);
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
    using QHeaderView_KeyboardSearch_Callback = void (*)(QHeaderView*, const char*);
    using QHeaderView_SizeHintForRow_Callback = int (*)(const QHeaderView*, int);
    using QHeaderView_SizeHintForColumn_Callback = int (*)(const QHeaderView*, int);
    using QHeaderView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QHeaderView*, QModelIndex*);
    using QHeaderView_InputMethodQuery_Callback = QVariant* (*)(const QHeaderView*, int);
    using QHeaderView_SetRootIndex_Callback = void (*)(QHeaderView*, QModelIndex*);
    using QHeaderView_SelectAll_Callback = void (*)(QHeaderView*);
    using QHeaderView_RowsAboutToBeRemoved_Callback = void (*)(QHeaderView*, QModelIndex*, int, int);
    using QHeaderView_SelectionChanged_Callback = void (*)(QHeaderView*, QItemSelection*, QItemSelection*);
    using QHeaderView_UpdateEditorData_Callback = void (*)(QHeaderView*);
    using QHeaderView_UpdateEditorGeometries_Callback = void (*)(QHeaderView*);
    using QHeaderView_VerticalScrollbarAction_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_HorizontalScrollbarAction_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_VerticalScrollbarValueChanged_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_HorizontalScrollbarValueChanged_Callback = void (*)(QHeaderView*, int);
    using QHeaderView_CloseEditor_Callback = void (*)(QHeaderView*, QWidget*, int);
    using QHeaderView_CommitData_Callback = void (*)(QHeaderView*, QWidget*);
    using QHeaderView_EditorDestroyed_Callback = void (*)(QHeaderView*, QObject*);
    using QHeaderView_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QHeaderView*);
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
    using QHeaderView_ViewportSizeHint_Callback = QSize* (*)(const QHeaderView*);
    using QHeaderView_MinimumSizeHint_Callback = QSize* (*)(const QHeaderView*);
    using QHeaderView_SetupViewport_Callback = void (*)(QHeaderView*, QWidget*);
    using QHeaderView_WheelEvent_Callback = void (*)(QHeaderView*, QWheelEvent*);
    using QHeaderView_ContextMenuEvent_Callback = void (*)(QHeaderView*, QContextMenuEvent*);
    using QHeaderView_ChangeEvent_Callback = void (*)(QHeaderView*, QEvent*);
    using QHeaderView_DevType_Callback = int (*)(const QHeaderView*);
    using QHeaderView_HeightForWidth_Callback = int (*)(const QHeaderView*, int);
    using QHeaderView_HasHeightForWidth_Callback = bool (*)(const QHeaderView*);
    using QHeaderView_PaintEngine_Callback = QPaintEngine* (*)(const QHeaderView*);
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
    using QHeaderView_SharedPainter_Callback = QPainter* (*)(const QHeaderView*);
    using QHeaderView_ChildEvent_Callback = void (*)(QHeaderView*, QChildEvent*);
    using QHeaderView_CustomEvent_Callback = void (*)(QHeaderView*, QEvent*);
    using QHeaderView_ConnectNotify_Callback = void (*)(QHeaderView*, QMetaMethod*);
    using QHeaderView_DisconnectNotify_Callback = void (*)(QHeaderView*, QMetaMethod*);
    using QHeaderView::create;
    using QHeaderView::destroy;
    using QHeaderView::dirtyRegionOffset;
    using QHeaderView::doAutoScroll;
    using QHeaderView::drawFrame;
    using QHeaderView::dropIndicatorPosition;
    using QHeaderView::executeDelayedItemsLayout;
    using QHeaderView::focusNextChild;
    using QHeaderView::focusPreviousChild;
    using QHeaderView::getDecodedMetricF;
    using QHeaderView::initialize;
    using QHeaderView::initializeSections;
    using QHeaderView::isSignalConnected;
    using QHeaderView::receivers;
    using QHeaderView::resizeSections;
    using QHeaderView::scheduleDelayedItemsLayout;
    using QHeaderView::scrollDirtyRegion;
    using QHeaderView::sectionsAboutToBeRemoved;
    using QHeaderView::sectionsInserted;
    using QHeaderView::sender;
    using QHeaderView::senderSignalIndex;
    using QHeaderView::setDirtyRegion;
    using QHeaderView::setState;
    using QHeaderView::setViewportMargins;
    using QHeaderView::startAutoScroll;
    using QHeaderView::state;
    using QHeaderView::stopAutoScroll;
    using QHeaderView::updateMicroFocus;
    using QHeaderView::updateSection;
    using QHeaderView::viewportMargins;

    // Instance callback storage
    QHeaderView_MetaObject_Callback qheaderview_metaobject_callback = nullptr;
    QHeaderView_Metacast_Callback qheaderview_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QHeaderView {
        using QHeaderView::actionEvent;
        using QHeaderView::changeEvent;
        using QHeaderView::childEvent;
        using QHeaderView::closeEditor;
        using QHeaderView::closeEvent;
        using QHeaderView::commitData;
        using QHeaderView::connectNotify;
        using QHeaderView::contextMenuEvent;
        using QHeaderView::currentChanged;
        using QHeaderView::customEvent;
        using QHeaderView::dataChanged;
        using QHeaderView::disconnectNotify;
        using QHeaderView::dragEnterEvent;
        using QHeaderView::dragLeaveEvent;
        using QHeaderView::dragMoveEvent;
        using QHeaderView::dropEvent;
        using QHeaderView::edit;
        using QHeaderView::editorDestroyed;
        using QHeaderView::enterEvent;
        using QHeaderView::event;
        using QHeaderView::eventFilter;
        using QHeaderView::focusInEvent;
        using QHeaderView::focusNextPrevChild;
        using QHeaderView::focusOutEvent;
        using QHeaderView::hideEvent;
        using QHeaderView::horizontalOffset;
        using QHeaderView::horizontalScrollbarAction;
        using QHeaderView::horizontalScrollbarValueChanged;
        using QHeaderView::indexAt;
        using QHeaderView::initPainter;
        using QHeaderView::initStyleOptionForIndex;
        using QHeaderView::initViewItemOption;
        using QHeaderView::inputMethodEvent;
        using QHeaderView::isIndexHidden;
        using QHeaderView::keyPressEvent;
        using QHeaderView::keyReleaseEvent;
        using QHeaderView::leaveEvent;
        using QHeaderView::metric;
        using QHeaderView::mouseDoubleClickEvent;
        using QHeaderView::mouseMoveEvent;
        using QHeaderView::mousePressEvent;
        using QHeaderView::mouseReleaseEvent;
        using QHeaderView::moveCursor;
        using QHeaderView::moveEvent;
        using QHeaderView::nativeEvent;
        using QHeaderView::paintEvent;
        using QHeaderView::paintSection;
        using QHeaderView::redirected;
        using QHeaderView::resizeEvent;
        using QHeaderView::rowsAboutToBeRemoved;
        using QHeaderView::rowsInserted;
        using QHeaderView::scrollContentsBy;
        using QHeaderView::scrollTo;
        using QHeaderView::sectionSizeFromContents;
        using QHeaderView::selectedIndexes;
        using QHeaderView::selectionChanged;
        using QHeaderView::selectionCommand;
        using QHeaderView::setSelection;
        using QHeaderView::sharedPainter;
        using QHeaderView::showEvent;
        using QHeaderView::startDrag;
        using QHeaderView::tabletEvent;
        using QHeaderView::timerEvent;
        using QHeaderView::updateEditorData;
        using QHeaderView::updateEditorGeometries;
        using QHeaderView::updateGeometries;
        using QHeaderView::verticalOffset;
        using QHeaderView::verticalScrollbarAction;
        using QHeaderView::verticalScrollbarValueChanged;
        using QHeaderView::viewportEvent;
        using QHeaderView::viewportSizeHint;
        using QHeaderView::visualRect;
        using QHeaderView::visualRegionForSelection;
        using QHeaderView::wheelEvent;
    };

    VirtualQHeaderView(Qt::Orientation orientation) : QHeaderView(orientation) {};
    VirtualQHeaderView(Qt::Orientation orientation, QWidget* parent) : QHeaderView(orientation, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qheaderview_metaobject_callback) {
            QMetaObject* callback_ret = qheaderview_metaobject_callback(this);
            return callback_ret;
        }
        return QHeaderView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qheaderview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qheaderview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHeaderView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qheaderview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qheaderview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHeaderView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qheaderview_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qheaderview_setmodel_callback(this, cbval1);
            return;
        }
        QHeaderView::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qheaderview_sizehint_callback) {
            QSize* callback_ret = qheaderview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool v) override {
        if (qheaderview_setvisible_callback) {
            bool cbval1 = v;
            qheaderview_setvisible_callback(this, cbval1);
            return;
        }
        QHeaderView::setVisible(v);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qheaderview_doitemslayout_callback) {
            qheaderview_doitemslayout_callback(this);
            return;
        }
        QHeaderView::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qheaderview_reset_callback) {
            qheaderview_reset_callback(this);
            return;
        }
        QHeaderView::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& old) override {
        if (qheaderview_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& old_ret = old;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&old_ret);
            qheaderview_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QHeaderView::currentChanged(current, old);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qheaderview_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qheaderview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHeaderView::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qheaderview_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qheaderview_paintevent_callback(this, cbval1);
            return;
        }
        QHeaderView::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qheaderview_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qheaderview_mousepressevent_callback(this, cbval1);
            return;
        }
        QHeaderView::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qheaderview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qheaderview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QHeaderView::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qheaderview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qheaderview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QHeaderView::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qheaderview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            qheaderview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QHeaderView::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* e) override {
        if (qheaderview_viewportevent_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qheaderview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QHeaderView::viewportEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintSection(QPainter* painter, const QRect& rect, int logicalIndex) const override {
        if (qheaderview_paintsection_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = logicalIndex;
            qheaderview_paintsection_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QHeaderView::paintSection(painter, rect, logicalIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sectionSizeFromContents(int logicalIndex) const override {
        if (qheaderview_sectionsizefromcontents_callback) {
            int cbval1 = logicalIndex;
            QSize* callback_ret = qheaderview_sectionsizefromcontents_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::sectionSizeFromContents(logicalIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qheaderview_horizontaloffset_callback) {
            int callback_ret = qheaderview_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QHeaderView::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qheaderview_verticaloffset_callback) {
            int callback_ret = qheaderview_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QHeaderView::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qheaderview_updategeometries_callback) {
            qheaderview_updategeometries_callback(this);
            return;
        }
        QHeaderView::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qheaderview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qheaderview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QHeaderView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qheaderview_datachanged_callback) {
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
            qheaderview_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QHeaderView::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qheaderview_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qheaderview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QHeaderView::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qheaderview_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qheaderview_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qheaderview_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qheaderview_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QHeaderView::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qheaderview_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = qheaderview_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qheaderview_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qheaderview_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QHeaderView::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction param1, Qt::KeyboardModifiers param2) override {
        if (qheaderview_movecursor_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = static_cast<int>(param2);
            QModelIndex* callback_ret = qheaderview_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::moveCursor(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags flags) override {
        if (qheaderview_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(flags);
            qheaderview_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QHeaderView::setSelection(rect, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qheaderview_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qheaderview_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOptionForIndex(QStyleOptionHeader* option, int logicalIndex) const override {
        if (qheaderview_initstyleoptionforindex_callback) {
            QStyleOptionHeader* cbval1 = option;
            int cbval2 = logicalIndex;
            qheaderview_initstyleoptionforindex_callback(this, cbval1, cbval2);
            return;
        }
        QHeaderView::initStyleOptionForIndex(option, logicalIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionHeader* option) const override {
        if (qheaderview_initstyleoption_callback) {
            QStyleOptionHeader* cbval1 = option;
            qheaderview_initstyleoption_callback(this, cbval1);
            return;
        }
        QHeaderView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qheaderview_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qheaderview_setselectionmodel_callback(this, cbval1);
            return;
        }
        QHeaderView::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qheaderview_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qheaderview_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QHeaderView::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qheaderview_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qheaderview_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHeaderView::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qheaderview_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qheaderview_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHeaderView::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qheaderview_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qheaderview_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QHeaderView::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qheaderview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qheaderview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qheaderview_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qheaderview_setrootindex_callback(this, cbval1);
            return;
        }
        QHeaderView::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qheaderview_selectall_callback) {
            qheaderview_selectall_callback(this);
            return;
        }
        QHeaderView::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qheaderview_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qheaderview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QHeaderView::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qheaderview_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qheaderview_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QHeaderView::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qheaderview_updateeditordata_callback) {
            qheaderview_updateeditordata_callback(this);
            return;
        }
        QHeaderView::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qheaderview_updateeditorgeometries_callback) {
            qheaderview_updateeditorgeometries_callback(this);
            return;
        }
        QHeaderView::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qheaderview_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qheaderview_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QHeaderView::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qheaderview_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qheaderview_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QHeaderView::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qheaderview_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qheaderview_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QHeaderView::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qheaderview_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qheaderview_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QHeaderView::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qheaderview_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qheaderview_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QHeaderView::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qheaderview_commitdata_callback) {
            QWidget* cbval1 = editor;
            qheaderview_commitdata_callback(this, cbval1);
            return;
        }
        QHeaderView::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qheaderview_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qheaderview_editordestroyed_callback(this, cbval1);
            return;
        }
        QHeaderView::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qheaderview_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qheaderview_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QHeaderView::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qheaderview_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qheaderview_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QHeaderView::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qheaderview_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qheaderview_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QHeaderView::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qheaderview_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qheaderview_startdrag_callback(this, cbval1);
            return;
        }
        QHeaderView::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qheaderview_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qheaderview_initviewitemoption_callback(this, cbval1);
            return;
        }
        QHeaderView::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qheaderview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qheaderview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QHeaderView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qheaderview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qheaderview_dragenterevent_callback(this, cbval1);
            return;
        }
        QHeaderView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qheaderview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qheaderview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QHeaderView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qheaderview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qheaderview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QHeaderView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qheaderview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qheaderview_dropevent_callback(this, cbval1);
            return;
        }
        QHeaderView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qheaderview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qheaderview_focusinevent_callback(this, cbval1);
            return;
        }
        QHeaderView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qheaderview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qheaderview_focusoutevent_callback(this, cbval1);
            return;
        }
        QHeaderView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qheaderview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qheaderview_keypressevent_callback(this, cbval1);
            return;
        }
        QHeaderView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qheaderview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qheaderview_resizeevent_callback(this, cbval1);
            return;
        }
        QHeaderView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qheaderview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qheaderview_timerevent_callback(this, cbval1);
            return;
        }
        QHeaderView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qheaderview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qheaderview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QHeaderView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qheaderview_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qheaderview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHeaderView::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qheaderview_viewportsizehint_callback) {
            QSize* callback_ret = qheaderview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qheaderview_minimumsizehint_callback) {
            QSize* callback_ret = qheaderview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QHeaderView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qheaderview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qheaderview_setupviewport_callback(this, cbval1);
            return;
        }
        QHeaderView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qheaderview_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qheaderview_wheelevent_callback(this, cbval1);
            return;
        }
        QHeaderView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qheaderview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qheaderview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QHeaderView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qheaderview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qheaderview_changeevent_callback(this, cbval1);
            return;
        }
        QHeaderView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qheaderview_devtype_callback) {
            int callback_ret = qheaderview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QHeaderView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qheaderview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qheaderview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHeaderView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qheaderview_hasheightforwidth_callback) {
            bool callback_ret = qheaderview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QHeaderView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qheaderview_paintengine_callback) {
            QPaintEngine* callback_ret = qheaderview_paintengine_callback(this);
            return callback_ret;
        }
        return QHeaderView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qheaderview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qheaderview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QHeaderView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qheaderview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qheaderview_enterevent_callback(this, cbval1);
            return;
        }
        QHeaderView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qheaderview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qheaderview_leaveevent_callback(this, cbval1);
            return;
        }
        QHeaderView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qheaderview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qheaderview_moveevent_callback(this, cbval1);
            return;
        }
        QHeaderView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qheaderview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qheaderview_closeevent_callback(this, cbval1);
            return;
        }
        QHeaderView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qheaderview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qheaderview_tabletevent_callback(this, cbval1);
            return;
        }
        QHeaderView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qheaderview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qheaderview_actionevent_callback(this, cbval1);
            return;
        }
        QHeaderView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qheaderview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qheaderview_showevent_callback(this, cbval1);
            return;
        }
        QHeaderView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qheaderview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qheaderview_hideevent_callback(this, cbval1);
            return;
        }
        QHeaderView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qheaderview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qheaderview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QHeaderView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qheaderview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qheaderview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHeaderView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qheaderview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qheaderview_initpainter_callback(this, cbval1);
            return;
        }
        QHeaderView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qheaderview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qheaderview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QHeaderView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qheaderview_sharedpainter_callback) {
            QPainter* callback_ret = qheaderview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QHeaderView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qheaderview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qheaderview_childevent_callback(this, cbval1);
            return;
        }
        QHeaderView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qheaderview_customevent_callback) {
            QEvent* cbval1 = event;
            qheaderview_customevent_callback(this, cbval1);
            return;
        }
        QHeaderView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qheaderview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qheaderview_connectnotify_callback(this, cbval1);
            return;
        }
        QHeaderView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qheaderview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qheaderview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHeaderView::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHeaderView_SuperCurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old);
    friend bool QHeaderView_SuperEvent(QHeaderView* self, QEvent* e);
    friend void QHeaderView_SuperPaintEvent(QHeaderView* self, QPaintEvent* e);
    friend void QHeaderView_SuperMousePressEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_SuperMouseMoveEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_SuperMouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
    friend void QHeaderView_SuperMouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
    friend bool QHeaderView_SuperViewportEvent(QHeaderView* self, QEvent* e);
    friend void QHeaderView_SuperPaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex);
    friend QSize* QHeaderView_SuperSectionSizeFromContents(const QHeaderView* self, int logicalIndex);
    friend int QHeaderView_SuperHorizontalOffset(const QHeaderView* self);
    friend int QHeaderView_SuperVerticalOffset(const QHeaderView* self);
    friend void QHeaderView_SuperUpdateGeometries(QHeaderView* self);
    friend void QHeaderView_SuperScrollContentsBy(QHeaderView* self, int dx, int dy);
    friend void QHeaderView_SuperDataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QHeaderView_SuperRowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end);
    friend QRect* QHeaderView_SuperVisualRect(const QHeaderView* self, const QModelIndex* index);
    friend void QHeaderView_SuperScrollTo(QHeaderView* self, const QModelIndex* index, int hint);
    friend QModelIndex* QHeaderView_SuperIndexAt(const QHeaderView* self, const QPoint* p);
    friend bool QHeaderView_SuperIsIndexHidden(const QHeaderView* self, const QModelIndex* index);
    friend QModelIndex* QHeaderView_SuperMoveCursor(QHeaderView* self, int param1, int param2);
    friend void QHeaderView_SuperSetSelection(QHeaderView* self, const QRect* rect, int flags);
    friend QRegion* QHeaderView_SuperVisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection);
    friend void QHeaderView_SuperInitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
    friend void QHeaderView_SuperInitStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
    friend void QHeaderView_SuperRowsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int start, int end);
    friend void QHeaderView_SuperSelectionChanged(QHeaderView* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QHeaderView_SuperUpdateEditorData(QHeaderView* self);
    friend void QHeaderView_SuperUpdateEditorGeometries(QHeaderView* self);
    friend void QHeaderView_SuperVerticalScrollbarAction(QHeaderView* self, int action);
    friend void QHeaderView_SuperHorizontalScrollbarAction(QHeaderView* self, int action);
    friend void QHeaderView_SuperVerticalScrollbarValueChanged(QHeaderView* self, int value);
    friend void QHeaderView_SuperHorizontalScrollbarValueChanged(QHeaderView* self, int value);
    friend void QHeaderView_SuperCloseEditor(QHeaderView* self, QWidget* editor, int hint);
    friend void QHeaderView_SuperCommitData(QHeaderView* self, QWidget* editor);
    friend void QHeaderView_SuperEditorDestroyed(QHeaderView* self, QObject* editor);
    friend libqt_list /* of QModelIndex* */ QHeaderView_SuperSelectedIndexes(const QHeaderView* self);
    friend bool QHeaderView_SuperEdit2(QHeaderView* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QHeaderView_SuperSelectionCommand(const QHeaderView* self, const QModelIndex* index, const QEvent* event);
    friend void QHeaderView_SuperStartDrag(QHeaderView* self, int supportedActions);
    friend void QHeaderView_SuperInitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option);
    friend bool QHeaderView_SuperFocusNextPrevChild(QHeaderView* self, bool next);
    friend void QHeaderView_SuperDragEnterEvent(QHeaderView* self, QDragEnterEvent* event);
    friend void QHeaderView_SuperDragMoveEvent(QHeaderView* self, QDragMoveEvent* event);
    friend void QHeaderView_SuperDragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event);
    friend void QHeaderView_SuperDropEvent(QHeaderView* self, QDropEvent* event);
    friend void QHeaderView_SuperFocusInEvent(QHeaderView* self, QFocusEvent* event);
    friend void QHeaderView_SuperFocusOutEvent(QHeaderView* self, QFocusEvent* event);
    friend void QHeaderView_SuperKeyPressEvent(QHeaderView* self, QKeyEvent* event);
    friend void QHeaderView_SuperResizeEvent(QHeaderView* self, QResizeEvent* event);
    friend void QHeaderView_SuperTimerEvent(QHeaderView* self, QTimerEvent* event);
    friend void QHeaderView_SuperInputMethodEvent(QHeaderView* self, QInputMethodEvent* event);
    friend bool QHeaderView_SuperEventFilter(QHeaderView* self, QObject* object, QEvent* event);
    friend QSize* QHeaderView_SuperViewportSizeHint(const QHeaderView* self);
    friend void QHeaderView_SuperWheelEvent(QHeaderView* self, QWheelEvent* param1);
    friend void QHeaderView_SuperContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1);
    friend void QHeaderView_SuperChangeEvent(QHeaderView* self, QEvent* param1);
    friend void QHeaderView_SuperKeyReleaseEvent(QHeaderView* self, QKeyEvent* event);
    friend void QHeaderView_SuperEnterEvent(QHeaderView* self, QEnterEvent* event);
    friend void QHeaderView_SuperLeaveEvent(QHeaderView* self, QEvent* event);
    friend void QHeaderView_SuperMoveEvent(QHeaderView* self, QMoveEvent* event);
    friend void QHeaderView_SuperCloseEvent(QHeaderView* self, QCloseEvent* event);
    friend void QHeaderView_SuperTabletEvent(QHeaderView* self, QTabletEvent* event);
    friend void QHeaderView_SuperActionEvent(QHeaderView* self, QActionEvent* event);
    friend void QHeaderView_SuperShowEvent(QHeaderView* self, QShowEvent* event);
    friend void QHeaderView_SuperHideEvent(QHeaderView* self, QHideEvent* event);
    friend bool QHeaderView_SuperNativeEvent(QHeaderView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QHeaderView_SuperMetric(const QHeaderView* self, int param1);
    friend void QHeaderView_SuperInitPainter(const QHeaderView* self, QPainter* painter);
    friend QPaintDevice* QHeaderView_SuperRedirected(const QHeaderView* self, QPoint* offset);
    friend QPainter* QHeaderView_SuperSharedPainter(const QHeaderView* self);
    friend void QHeaderView_SuperChildEvent(QHeaderView* self, QChildEvent* event);
    friend void QHeaderView_SuperCustomEvent(QHeaderView* self, QEvent* event);
    friend void QHeaderView_SuperConnectNotify(QHeaderView* self, const QMetaMethod* signal);
    friend void QHeaderView_SuperDisconnectNotify(QHeaderView* self, const QMetaMethod* signal);
};

#endif
