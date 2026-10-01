#pragma once
#ifndef LIBQTABLEWIDGET_HXX
#define LIBQTABLEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTableWidgetItem
class VirtualQTableWidgetItem final : public QTableWidgetItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTableWidgetItem_Clone_Callback = QTableWidgetItem* (*)(const QTableWidgetItem*);
    using QTableWidgetItem_Data_Callback = QVariant* (*)(const QTableWidgetItem*, int);
    using QTableWidgetItem_SetData_Callback = void (*)(QTableWidgetItem*, int, QVariant*);
    using QTableWidgetItem_OperatorLesser_Callback = bool (*)(const QTableWidgetItem*, QTableWidgetItem*);
    using QTableWidgetItem_Read_Callback = void (*)(QTableWidgetItem*, QDataStream*);
    using QTableWidgetItem_Write_Callback = void (*)(const QTableWidgetItem*, QDataStream*);

    // Instance callback storage
    QTableWidgetItem_Clone_Callback qtablewidgetitem_clone_callback = nullptr;
    QTableWidgetItem_Data_Callback qtablewidgetitem_data_callback = nullptr;
    QTableWidgetItem_SetData_Callback qtablewidgetitem_setdata_callback = nullptr;
    QTableWidgetItem_OperatorLesser_Callback qtablewidgetitem_operatorlesser_callback = nullptr;
    QTableWidgetItem_Read_Callback qtablewidgetitem_read_callback = nullptr;
    QTableWidgetItem_Write_Callback qtablewidgetitem_write_callback = nullptr;

    VirtualQTableWidgetItem() : QTableWidgetItem() {};
    VirtualQTableWidgetItem(const QString& text) : QTableWidgetItem(text) {};
    VirtualQTableWidgetItem(const QIcon& icon, const QString& text) : QTableWidgetItem(icon, text) {};
    VirtualQTableWidgetItem(const QTableWidgetItem& other) : QTableWidgetItem(other) {};
    VirtualQTableWidgetItem(int typeVal) : QTableWidgetItem(typeVal) {};
    VirtualQTableWidgetItem(const QString& text, int typeVal) : QTableWidgetItem(text, typeVal) {};
    VirtualQTableWidgetItem(const QIcon& icon, const QString& text, int typeVal) : QTableWidgetItem(icon, text, typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual QTableWidgetItem* clone() const override {
        if (qtablewidgetitem_clone_callback) {
            QTableWidgetItem* callback_ret = qtablewidgetitem_clone_callback(this);
            return callback_ret;
        }
        return QTableWidgetItem::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int role) const override {
        if (qtablewidgetitem_data_callback) {
            int cbval1 = role;
            QVariant* callback_ret = qtablewidgetitem_data_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidgetItem::data(role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(int role, const QVariant& value) override {
        if (qtablewidgetitem_setdata_callback) {
            int cbval1 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qtablewidgetitem_setdata_callback(this, cbval1, cbval2);
            return;
        }
        QTableWidgetItem::setData(role, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QTableWidgetItem& other) const override {
        if (qtablewidgetitem_operatorlesser_callback) {
            const QTableWidgetItem& other_ret = other;
            // Cast returned reference into pointer
            QTableWidgetItem* cbval1 = const_cast<QTableWidgetItem*>(&other_ret);
            bool callback_ret = qtablewidgetitem_operatorlesser_callback(this, cbval1);
            return callback_ret;
        }
        return QTableWidgetItem::operator<(other);
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qtablewidgetitem_read_callback) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;
            qtablewidgetitem_read_callback(this, cbval1);
            return;
        }
        QTableWidgetItem::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qtablewidgetitem_write_callback) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;
            qtablewidgetitem_write_callback(this, cbval1);
            return;
        }
        QTableWidgetItem::write(out);
    }
};

// This class is a subclass of QTableWidget
class VirtualQTableWidget final : public QTableWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTableWidget_MetaObject_Callback = QMetaObject* (*)(const QTableWidget*);
    using QTableWidget_Metacast_Callback = void* (*)(QTableWidget*, const char*);
    using QTableWidget_Metacall_Callback = int (*)(QTableWidget*, int, int, void**);
    using QTableWidget_Event_Callback = bool (*)(QTableWidget*, QEvent*);
    using QTableWidget_MimeTypes_Callback = const char** (*)(const QTableWidget*);
    using QTableWidget_MimeData_Callback = QMimeData* (*)(const QTableWidget*, libqt_list /* of QTableWidgetItem* */);
    using QTableWidget_DropMimeData_Callback = bool (*)(QTableWidget*, int, int, QMimeData*, int);
    using QTableWidget_SupportedDropActions_Callback = int (*)(const QTableWidget*);
    using QTableWidget_DropEvent_Callback = void (*)(QTableWidget*, QDropEvent*);
    using QTableWidget_SetRootIndex_Callback = void (*)(QTableWidget*, QModelIndex*);
    using QTableWidget_SetSelectionModel_Callback = void (*)(QTableWidget*, QItemSelectionModel*);
    using QTableWidget_DoItemsLayout_Callback = void (*)(QTableWidget*);
    using QTableWidget_VisualRect_Callback = QRect* (*)(const QTableWidget*, QModelIndex*);
    using QTableWidget_ScrollTo_Callback = void (*)(QTableWidget*, QModelIndex*, int);
    using QTableWidget_IndexAt_Callback = QModelIndex* (*)(const QTableWidget*, QPoint*);
    using QTableWidget_ScrollContentsBy_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_InitViewItemOption_Callback = void (*)(const QTableWidget*, QStyleOptionViewItem*);
    using QTableWidget_PaintEvent_Callback = void (*)(QTableWidget*, QPaintEvent*);
    using QTableWidget_TimerEvent_Callback = void (*)(QTableWidget*, QTimerEvent*);
    using QTableWidget_HorizontalOffset_Callback = int (*)(const QTableWidget*);
    using QTableWidget_VerticalOffset_Callback = int (*)(const QTableWidget*);
    using QTableWidget_MoveCursor_Callback = QModelIndex* (*)(QTableWidget*, int, int);
    using QTableWidget_SetSelection_Callback = void (*)(QTableWidget*, QRect*, int);
    using QTableWidget_VisualRegionForSelection_Callback = QRegion* (*)(const QTableWidget*, QItemSelection*);
    using QTableWidget_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QTableWidget*);
    using QTableWidget_UpdateGeometries_Callback = void (*)(QTableWidget*);
    using QTableWidget_ViewportSizeHint_Callback = QSize* (*)(const QTableWidget*);
    using QTableWidget_SizeHintForRow_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_SizeHintForColumn_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_VerticalScrollbarAction_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_HorizontalScrollbarAction_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_IsIndexHidden_Callback = bool (*)(const QTableWidget*, QModelIndex*);
    using QTableWidget_SelectionChanged_Callback = void (*)(QTableWidget*, QItemSelection*, QItemSelection*);
    using QTableWidget_CurrentChanged_Callback = void (*)(QTableWidget*, QModelIndex*, QModelIndex*);
    using QTableWidget_KeyboardSearch_Callback = void (*)(QTableWidget*, const char*);
    using QTableWidget_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTableWidget*, QModelIndex*);
    using QTableWidget_InputMethodQuery_Callback = QVariant* (*)(const QTableWidget*, int);
    using QTableWidget_Reset_Callback = void (*)(QTableWidget*);
    using QTableWidget_SelectAll_Callback = void (*)(QTableWidget*);
    using QTableWidget_DataChanged_Callback = void (*)(QTableWidget*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QTableWidget_RowsInserted_Callback = void (*)(QTableWidget*, QModelIndex*, int, int);
    using QTableWidget_RowsAboutToBeRemoved_Callback = void (*)(QTableWidget*, QModelIndex*, int, int);
    using QTableWidget_UpdateEditorData_Callback = void (*)(QTableWidget*);
    using QTableWidget_UpdateEditorGeometries_Callback = void (*)(QTableWidget*);
    using QTableWidget_VerticalScrollbarValueChanged_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_HorizontalScrollbarValueChanged_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_CloseEditor_Callback = void (*)(QTableWidget*, QWidget*, int);
    using QTableWidget_CommitData_Callback = void (*)(QTableWidget*, QWidget*);
    using QTableWidget_EditorDestroyed_Callback = void (*)(QTableWidget*, QObject*);
    using QTableWidget_Edit2_Callback = bool (*)(QTableWidget*, QModelIndex*, int, QEvent*);
    using QTableWidget_SelectionCommand_Callback = int (*)(const QTableWidget*, QModelIndex*, QEvent*);
    using QTableWidget_StartDrag_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_FocusNextPrevChild_Callback = bool (*)(QTableWidget*, bool);
    using QTableWidget_ViewportEvent_Callback = bool (*)(QTableWidget*, QEvent*);
    using QTableWidget_MousePressEvent_Callback = void (*)(QTableWidget*, QMouseEvent*);
    using QTableWidget_MouseMoveEvent_Callback = void (*)(QTableWidget*, QMouseEvent*);
    using QTableWidget_MouseReleaseEvent_Callback = void (*)(QTableWidget*, QMouseEvent*);
    using QTableWidget_MouseDoubleClickEvent_Callback = void (*)(QTableWidget*, QMouseEvent*);
    using QTableWidget_DragEnterEvent_Callback = void (*)(QTableWidget*, QDragEnterEvent*);
    using QTableWidget_DragMoveEvent_Callback = void (*)(QTableWidget*, QDragMoveEvent*);
    using QTableWidget_DragLeaveEvent_Callback = void (*)(QTableWidget*, QDragLeaveEvent*);
    using QTableWidget_FocusInEvent_Callback = void (*)(QTableWidget*, QFocusEvent*);
    using QTableWidget_FocusOutEvent_Callback = void (*)(QTableWidget*, QFocusEvent*);
    using QTableWidget_KeyPressEvent_Callback = void (*)(QTableWidget*, QKeyEvent*);
    using QTableWidget_ResizeEvent_Callback = void (*)(QTableWidget*, QResizeEvent*);
    using QTableWidget_InputMethodEvent_Callback = void (*)(QTableWidget*, QInputMethodEvent*);
    using QTableWidget_EventFilter_Callback = bool (*)(QTableWidget*, QObject*, QEvent*);
    using QTableWidget_MinimumSizeHint_Callback = QSize* (*)(const QTableWidget*);
    using QTableWidget_SizeHint_Callback = QSize* (*)(const QTableWidget*);
    using QTableWidget_SetupViewport_Callback = void (*)(QTableWidget*, QWidget*);
    using QTableWidget_WheelEvent_Callback = void (*)(QTableWidget*, QWheelEvent*);
    using QTableWidget_ContextMenuEvent_Callback = void (*)(QTableWidget*, QContextMenuEvent*);
    using QTableWidget_ChangeEvent_Callback = void (*)(QTableWidget*, QEvent*);
    using QTableWidget_InitStyleOption_Callback = void (*)(const QTableWidget*, QStyleOptionFrame*);
    using QTableWidget_DevType_Callback = int (*)(const QTableWidget*);
    using QTableWidget_SetVisible_Callback = void (*)(QTableWidget*, bool);
    using QTableWidget_HeightForWidth_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_HasHeightForWidth_Callback = bool (*)(const QTableWidget*);
    using QTableWidget_PaintEngine_Callback = QPaintEngine* (*)(const QTableWidget*);
    using QTableWidget_KeyReleaseEvent_Callback = void (*)(QTableWidget*, QKeyEvent*);
    using QTableWidget_EnterEvent_Callback = void (*)(QTableWidget*, QEnterEvent*);
    using QTableWidget_LeaveEvent_Callback = void (*)(QTableWidget*, QEvent*);
    using QTableWidget_MoveEvent_Callback = void (*)(QTableWidget*, QMoveEvent*);
    using QTableWidget_CloseEvent_Callback = void (*)(QTableWidget*, QCloseEvent*);
    using QTableWidget_TabletEvent_Callback = void (*)(QTableWidget*, QTabletEvent*);
    using QTableWidget_ActionEvent_Callback = void (*)(QTableWidget*, QActionEvent*);
    using QTableWidget_ShowEvent_Callback = void (*)(QTableWidget*, QShowEvent*);
    using QTableWidget_HideEvent_Callback = void (*)(QTableWidget*, QHideEvent*);
    using QTableWidget_NativeEvent_Callback = bool (*)(QTableWidget*, libqt_string, void*, intptr_t*);
    using QTableWidget_Metric_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_InitPainter_Callback = void (*)(const QTableWidget*, QPainter*);
    using QTableWidget_Redirected_Callback = QPaintDevice* (*)(const QTableWidget*, QPoint*);
    using QTableWidget_SharedPainter_Callback = QPainter* (*)(const QTableWidget*);
    using QTableWidget_ChildEvent_Callback = void (*)(QTableWidget*, QChildEvent*);
    using QTableWidget_CustomEvent_Callback = void (*)(QTableWidget*, QEvent*);
    using QTableWidget_ConnectNotify_Callback = void (*)(QTableWidget*, QMetaMethod*);
    using QTableWidget_DisconnectNotify_Callback = void (*)(QTableWidget*, QMetaMethod*);
    using QTableWidget::columnCountChanged;
    using QTableWidget::columnMoved;
    using QTableWidget::columnResized;
    using QTableWidget::create;
    using QTableWidget::destroy;
    using QTableWidget::dirtyRegionOffset;
    using QTableWidget::doAutoScroll;
    using QTableWidget::drawFrame;
    using QTableWidget::dropIndicatorPosition;
    using QTableWidget::executeDelayedItemsLayout;
    using QTableWidget::focusNextChild;
    using QTableWidget::focusPreviousChild;
    using QTableWidget::getDecodedMetricF;
    using QTableWidget::isSignalConnected;
    using QTableWidget::receivers;
    using QTableWidget::rowCountChanged;
    using QTableWidget::rowMoved;
    using QTableWidget::rowResized;
    using QTableWidget::scheduleDelayedItemsLayout;
    using QTableWidget::scrollDirtyRegion;
    using QTableWidget::sender;
    using QTableWidget::senderSignalIndex;
    using QTableWidget::setDirtyRegion;
    using QTableWidget::setState;
    using QTableWidget::setViewportMargins;
    using QTableWidget::startAutoScroll;
    using QTableWidget::state;
    using QTableWidget::stopAutoScroll;
    using QTableWidget::updateMicroFocus;
    using QTableWidget::viewportMargins;

    // Instance callback storage
    QTableWidget_MetaObject_Callback qtablewidget_metaobject_callback = nullptr;
    QTableWidget_Metacast_Callback qtablewidget_metacast_callback = nullptr;
    QTableWidget_Metacall_Callback qtablewidget_metacall_callback = nullptr;
    QTableWidget_Event_Callback qtablewidget_event_callback = nullptr;
    QTableWidget_MimeTypes_Callback qtablewidget_mimetypes_callback = nullptr;
    QTableWidget_MimeData_Callback qtablewidget_mimedata_callback = nullptr;
    QTableWidget_DropMimeData_Callback qtablewidget_dropmimedata_callback = nullptr;
    QTableWidget_SupportedDropActions_Callback qtablewidget_supporteddropactions_callback = nullptr;
    QTableWidget_DropEvent_Callback qtablewidget_dropevent_callback = nullptr;
    QTableWidget_SetRootIndex_Callback qtablewidget_setrootindex_callback = nullptr;
    QTableWidget_SetSelectionModel_Callback qtablewidget_setselectionmodel_callback = nullptr;
    QTableWidget_DoItemsLayout_Callback qtablewidget_doitemslayout_callback = nullptr;
    QTableWidget_VisualRect_Callback qtablewidget_visualrect_callback = nullptr;
    QTableWidget_ScrollTo_Callback qtablewidget_scrollto_callback = nullptr;
    QTableWidget_IndexAt_Callback qtablewidget_indexat_callback = nullptr;
    QTableWidget_ScrollContentsBy_Callback qtablewidget_scrollcontentsby_callback = nullptr;
    QTableWidget_InitViewItemOption_Callback qtablewidget_initviewitemoption_callback = nullptr;
    QTableWidget_PaintEvent_Callback qtablewidget_paintevent_callback = nullptr;
    QTableWidget_TimerEvent_Callback qtablewidget_timerevent_callback = nullptr;
    QTableWidget_HorizontalOffset_Callback qtablewidget_horizontaloffset_callback = nullptr;
    QTableWidget_VerticalOffset_Callback qtablewidget_verticaloffset_callback = nullptr;
    QTableWidget_MoveCursor_Callback qtablewidget_movecursor_callback = nullptr;
    QTableWidget_SetSelection_Callback qtablewidget_setselection_callback = nullptr;
    QTableWidget_VisualRegionForSelection_Callback qtablewidget_visualregionforselection_callback = nullptr;
    QTableWidget_SelectedIndexes_Callback qtablewidget_selectedindexes_callback = nullptr;
    QTableWidget_UpdateGeometries_Callback qtablewidget_updategeometries_callback = nullptr;
    QTableWidget_ViewportSizeHint_Callback qtablewidget_viewportsizehint_callback = nullptr;
    QTableWidget_SizeHintForRow_Callback qtablewidget_sizehintforrow_callback = nullptr;
    QTableWidget_SizeHintForColumn_Callback qtablewidget_sizehintforcolumn_callback = nullptr;
    QTableWidget_VerticalScrollbarAction_Callback qtablewidget_verticalscrollbaraction_callback = nullptr;
    QTableWidget_HorizontalScrollbarAction_Callback qtablewidget_horizontalscrollbaraction_callback = nullptr;
    QTableWidget_IsIndexHidden_Callback qtablewidget_isindexhidden_callback = nullptr;
    QTableWidget_SelectionChanged_Callback qtablewidget_selectionchanged_callback = nullptr;
    QTableWidget_CurrentChanged_Callback qtablewidget_currentchanged_callback = nullptr;
    QTableWidget_KeyboardSearch_Callback qtablewidget_keyboardsearch_callback = nullptr;
    QTableWidget_ItemDelegateForIndex_Callback qtablewidget_itemdelegateforindex_callback = nullptr;
    QTableWidget_InputMethodQuery_Callback qtablewidget_inputmethodquery_callback = nullptr;
    QTableWidget_Reset_Callback qtablewidget_reset_callback = nullptr;
    QTableWidget_SelectAll_Callback qtablewidget_selectall_callback = nullptr;
    QTableWidget_DataChanged_Callback qtablewidget_datachanged_callback = nullptr;
    QTableWidget_RowsInserted_Callback qtablewidget_rowsinserted_callback = nullptr;
    QTableWidget_RowsAboutToBeRemoved_Callback qtablewidget_rowsabouttoberemoved_callback = nullptr;
    QTableWidget_UpdateEditorData_Callback qtablewidget_updateeditordata_callback = nullptr;
    QTableWidget_UpdateEditorGeometries_Callback qtablewidget_updateeditorgeometries_callback = nullptr;
    QTableWidget_VerticalScrollbarValueChanged_Callback qtablewidget_verticalscrollbarvaluechanged_callback = nullptr;
    QTableWidget_HorizontalScrollbarValueChanged_Callback qtablewidget_horizontalscrollbarvaluechanged_callback = nullptr;
    QTableWidget_CloseEditor_Callback qtablewidget_closeeditor_callback = nullptr;
    QTableWidget_CommitData_Callback qtablewidget_commitdata_callback = nullptr;
    QTableWidget_EditorDestroyed_Callback qtablewidget_editordestroyed_callback = nullptr;
    QTableWidget_Edit2_Callback qtablewidget_edit2_callback = nullptr;
    QTableWidget_SelectionCommand_Callback qtablewidget_selectioncommand_callback = nullptr;
    QTableWidget_StartDrag_Callback qtablewidget_startdrag_callback = nullptr;
    QTableWidget_FocusNextPrevChild_Callback qtablewidget_focusnextprevchild_callback = nullptr;
    QTableWidget_ViewportEvent_Callback qtablewidget_viewportevent_callback = nullptr;
    QTableWidget_MousePressEvent_Callback qtablewidget_mousepressevent_callback = nullptr;
    QTableWidget_MouseMoveEvent_Callback qtablewidget_mousemoveevent_callback = nullptr;
    QTableWidget_MouseReleaseEvent_Callback qtablewidget_mousereleaseevent_callback = nullptr;
    QTableWidget_MouseDoubleClickEvent_Callback qtablewidget_mousedoubleclickevent_callback = nullptr;
    QTableWidget_DragEnterEvent_Callback qtablewidget_dragenterevent_callback = nullptr;
    QTableWidget_DragMoveEvent_Callback qtablewidget_dragmoveevent_callback = nullptr;
    QTableWidget_DragLeaveEvent_Callback qtablewidget_dragleaveevent_callback = nullptr;
    QTableWidget_FocusInEvent_Callback qtablewidget_focusinevent_callback = nullptr;
    QTableWidget_FocusOutEvent_Callback qtablewidget_focusoutevent_callback = nullptr;
    QTableWidget_KeyPressEvent_Callback qtablewidget_keypressevent_callback = nullptr;
    QTableWidget_ResizeEvent_Callback qtablewidget_resizeevent_callback = nullptr;
    QTableWidget_InputMethodEvent_Callback qtablewidget_inputmethodevent_callback = nullptr;
    QTableWidget_EventFilter_Callback qtablewidget_eventfilter_callback = nullptr;
    QTableWidget_MinimumSizeHint_Callback qtablewidget_minimumsizehint_callback = nullptr;
    QTableWidget_SizeHint_Callback qtablewidget_sizehint_callback = nullptr;
    QTableWidget_SetupViewport_Callback qtablewidget_setupviewport_callback = nullptr;
    QTableWidget_WheelEvent_Callback qtablewidget_wheelevent_callback = nullptr;
    QTableWidget_ContextMenuEvent_Callback qtablewidget_contextmenuevent_callback = nullptr;
    QTableWidget_ChangeEvent_Callback qtablewidget_changeevent_callback = nullptr;
    QTableWidget_InitStyleOption_Callback qtablewidget_initstyleoption_callback = nullptr;
    QTableWidget_DevType_Callback qtablewidget_devtype_callback = nullptr;
    QTableWidget_SetVisible_Callback qtablewidget_setvisible_callback = nullptr;
    QTableWidget_HeightForWidth_Callback qtablewidget_heightforwidth_callback = nullptr;
    QTableWidget_HasHeightForWidth_Callback qtablewidget_hasheightforwidth_callback = nullptr;
    QTableWidget_PaintEngine_Callback qtablewidget_paintengine_callback = nullptr;
    QTableWidget_KeyReleaseEvent_Callback qtablewidget_keyreleaseevent_callback = nullptr;
    QTableWidget_EnterEvent_Callback qtablewidget_enterevent_callback = nullptr;
    QTableWidget_LeaveEvent_Callback qtablewidget_leaveevent_callback = nullptr;
    QTableWidget_MoveEvent_Callback qtablewidget_moveevent_callback = nullptr;
    QTableWidget_CloseEvent_Callback qtablewidget_closeevent_callback = nullptr;
    QTableWidget_TabletEvent_Callback qtablewidget_tabletevent_callback = nullptr;
    QTableWidget_ActionEvent_Callback qtablewidget_actionevent_callback = nullptr;
    QTableWidget_ShowEvent_Callback qtablewidget_showevent_callback = nullptr;
    QTableWidget_HideEvent_Callback qtablewidget_hideevent_callback = nullptr;
    QTableWidget_NativeEvent_Callback qtablewidget_nativeevent_callback = nullptr;
    QTableWidget_Metric_Callback qtablewidget_metric_callback = nullptr;
    QTableWidget_InitPainter_Callback qtablewidget_initpainter_callback = nullptr;
    QTableWidget_Redirected_Callback qtablewidget_redirected_callback = nullptr;
    QTableWidget_SharedPainter_Callback qtablewidget_sharedpainter_callback = nullptr;
    QTableWidget_ChildEvent_Callback qtablewidget_childevent_callback = nullptr;
    QTableWidget_CustomEvent_Callback qtablewidget_customevent_callback = nullptr;
    QTableWidget_ConnectNotify_Callback qtablewidget_connectnotify_callback = nullptr;
    QTableWidget_DisconnectNotify_Callback qtablewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTableWidget {
        using QTableWidget::actionEvent;
        using QTableWidget::changeEvent;
        using QTableWidget::childEvent;
        using QTableWidget::closeEditor;
        using QTableWidget::closeEvent;
        using QTableWidget::commitData;
        using QTableWidget::connectNotify;
        using QTableWidget::contextMenuEvent;
        using QTableWidget::currentChanged;
        using QTableWidget::customEvent;
        using QTableWidget::dataChanged;
        using QTableWidget::disconnectNotify;
        using QTableWidget::dragEnterEvent;
        using QTableWidget::dragLeaveEvent;
        using QTableWidget::dragMoveEvent;
        using QTableWidget::dropEvent;
        using QTableWidget::dropMimeData;
        using QTableWidget::edit;
        using QTableWidget::editorDestroyed;
        using QTableWidget::enterEvent;
        using QTableWidget::event;
        using QTableWidget::eventFilter;
        using QTableWidget::focusInEvent;
        using QTableWidget::focusNextPrevChild;
        using QTableWidget::focusOutEvent;
        using QTableWidget::hideEvent;
        using QTableWidget::horizontalOffset;
        using QTableWidget::horizontalScrollbarAction;
        using QTableWidget::horizontalScrollbarValueChanged;
        using QTableWidget::initPainter;
        using QTableWidget::initStyleOption;
        using QTableWidget::initViewItemOption;
        using QTableWidget::inputMethodEvent;
        using QTableWidget::isIndexHidden;
        using QTableWidget::keyPressEvent;
        using QTableWidget::keyReleaseEvent;
        using QTableWidget::leaveEvent;
        using QTableWidget::metric;
        using QTableWidget::mimeData;
        using QTableWidget::mimeTypes;
        using QTableWidget::mouseDoubleClickEvent;
        using QTableWidget::mouseMoveEvent;
        using QTableWidget::mousePressEvent;
        using QTableWidget::mouseReleaseEvent;
        using QTableWidget::moveCursor;
        using QTableWidget::moveEvent;
        using QTableWidget::nativeEvent;
        using QTableWidget::paintEvent;
        using QTableWidget::redirected;
        using QTableWidget::resizeEvent;
        using QTableWidget::rowsAboutToBeRemoved;
        using QTableWidget::rowsInserted;
        using QTableWidget::scrollContentsBy;
        using QTableWidget::selectedIndexes;
        using QTableWidget::selectionChanged;
        using QTableWidget::selectionCommand;
        using QTableWidget::setSelection;
        using QTableWidget::sharedPainter;
        using QTableWidget::showEvent;
        using QTableWidget::sizeHintForColumn;
        using QTableWidget::sizeHintForRow;
        using QTableWidget::startDrag;
        using QTableWidget::supportedDropActions;
        using QTableWidget::tabletEvent;
        using QTableWidget::timerEvent;
        using QTableWidget::updateEditorData;
        using QTableWidget::updateEditorGeometries;
        using QTableWidget::updateGeometries;
        using QTableWidget::verticalOffset;
        using QTableWidget::verticalScrollbarAction;
        using QTableWidget::verticalScrollbarValueChanged;
        using QTableWidget::viewportEvent;
        using QTableWidget::viewportSizeHint;
        using QTableWidget::visualRegionForSelection;
        using QTableWidget::wheelEvent;
    };

    VirtualQTableWidget(QWidget* parent) : QTableWidget(parent) {};
    VirtualQTableWidget() : QTableWidget() {};
    VirtualQTableWidget(int rows, int columns) : QTableWidget(rows, columns) {};
    VirtualQTableWidget(int rows, int columns, QWidget* parent) : QTableWidget(rows, columns, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtablewidget_metaobject_callback) {
            QMetaObject* callback_ret = qtablewidget_metaobject_callback(this);
            return callback_ret;
        }
        return QTableWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtablewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtablewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTableWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtablewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtablewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTableWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtablewidget_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qtablewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTableWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qtablewidget_mimetypes_callback) {
            const char** callback_ret = qtablewidget_mimetypes_callback(this);
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
        return QTableWidget::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QTableWidgetItem*>& items) const override {
        if (qtablewidget_mimedata_callback) {
            const QList<QTableWidgetItem*>& items_ret = items;
            // Convert QList<> from C++ memory to manually-managed C memory
            QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * (items_ret.size())));
            for (qsizetype i = 0; i < items_ret.size(); ++i) {
                items_arr[i] = items_ret[i];
            }
            libqt_list items_out;
            items_out.len = items_ret.size();
            items_out.data = static_cast<void*>(items_arr);
            libqt_list /* of QTableWidgetItem* */ cbval1 = items_out;
            QMimeData* callback_ret = qtablewidget_mimedata_callback(this, cbval1);
            free(items_arr);
            return callback_ret;
        }
        return QTableWidget::mimeData(items);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(int row, int column, const QMimeData* data, Qt::DropAction action) override {
        if (qtablewidget_dropmimedata_callback) {
            int cbval1 = row;
            int cbval2 = column;
            QMimeData* cbval3 = (QMimeData*)data;
            int cbval4 = static_cast<int>(action);
            bool callback_ret = qtablewidget_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QTableWidget::dropMimeData(row, column, data, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qtablewidget_supporteddropactions_callback) {
            int callback_ret = qtablewidget_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QTableWidget::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtablewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtablewidget_dropevent_callback(this, cbval1);
            return;
        }
        QTableWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtablewidget_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qtablewidget_setrootindex_callback(this, cbval1);
            return;
        }
        QTableWidget::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtablewidget_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qtablewidget_setselectionmodel_callback(this, cbval1);
            return;
        }
        QTableWidget::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtablewidget_doitemslayout_callback) {
            qtablewidget_doitemslayout_callback(this);
            return;
        }
        QTableWidget::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtablewidget_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qtablewidget_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidget::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtablewidget_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qtablewidget_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QTableWidget::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtablewidget_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = qtablewidget_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidget::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtablewidget_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qtablewidget_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QTableWidget::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtablewidget_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qtablewidget_initviewitemoption_callback(this, cbval1);
            return;
        }
        QTableWidget::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtablewidget_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qtablewidget_paintevent_callback(this, cbval1);
            return;
        }
        QTableWidget::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtablewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtablewidget_timerevent_callback(this, cbval1);
            return;
        }
        QTableWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtablewidget_horizontaloffset_callback) {
            int callback_ret = qtablewidget_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTableWidget::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtablewidget_verticaloffset_callback) {
            int callback_ret = qtablewidget_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTableWidget::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtablewidget_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qtablewidget_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidget::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtablewidget_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qtablewidget_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QTableWidget::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtablewidget_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qtablewidget_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidget::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qtablewidget_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qtablewidget_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QTableWidget::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtablewidget_updategeometries_callback) {
            qtablewidget_updategeometries_callback(this);
            return;
        }
        QTableWidget::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtablewidget_viewportsizehint_callback) {
            QSize* callback_ret = qtablewidget_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidget::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtablewidget_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qtablewidget_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTableWidget::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtablewidget_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qtablewidget_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTableWidget::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtablewidget_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qtablewidget_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QTableWidget::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtablewidget_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qtablewidget_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QTableWidget::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtablewidget_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qtablewidget_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QTableWidget::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtablewidget_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qtablewidget_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QTableWidget::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtablewidget_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qtablewidget_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QTableWidget::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtablewidget_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qtablewidget_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QTableWidget::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtablewidget_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qtablewidget_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QTableWidget::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtablewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qtablewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidget::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtablewidget_reset_callback) {
            qtablewidget_reset_callback(this);
            return;
        }
        QTableWidget::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtablewidget_selectall_callback) {
            qtablewidget_selectall_callback(this);
            return;
        }
        QTableWidget::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtablewidget_datachanged_callback) {
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
            qtablewidget_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QTableWidget::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtablewidget_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qtablewidget_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTableWidget::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtablewidget_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qtablewidget_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTableWidget::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtablewidget_updateeditordata_callback) {
            qtablewidget_updateeditordata_callback(this);
            return;
        }
        QTableWidget::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtablewidget_updateeditorgeometries_callback) {
            qtablewidget_updateeditorgeometries_callback(this);
            return;
        }
        QTableWidget::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtablewidget_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qtablewidget_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QTableWidget::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtablewidget_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qtablewidget_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QTableWidget::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtablewidget_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qtablewidget_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QTableWidget::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtablewidget_commitdata_callback) {
            QWidget* cbval1 = editor;
            qtablewidget_commitdata_callback(this, cbval1);
            return;
        }
        QTableWidget::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtablewidget_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qtablewidget_editordestroyed_callback(this, cbval1);
            return;
        }
        QTableWidget::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtablewidget_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qtablewidget_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTableWidget::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtablewidget_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qtablewidget_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QTableWidget::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtablewidget_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qtablewidget_startdrag_callback(this, cbval1);
            return;
        }
        QTableWidget::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtablewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtablewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTableWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtablewidget_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtablewidget_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QTableWidget::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtablewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtablewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QTableWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtablewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtablewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTableWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtablewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtablewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTableWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtablewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtablewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTableWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtablewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtablewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QTableWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtablewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtablewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTableWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtablewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtablewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTableWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtablewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtablewidget_focusinevent_callback(this, cbval1);
            return;
        }
        QTableWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtablewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtablewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QTableWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtablewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qtablewidget_keypressevent_callback(this, cbval1);
            return;
        }
        QTableWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtablewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qtablewidget_resizeevent_callback(this, cbval1);
            return;
        }
        QTableWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtablewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qtablewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTableWidget::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtablewidget_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qtablewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTableWidget::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtablewidget_minimumsizehint_callback) {
            QSize* callback_ret = qtablewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtablewidget_sizehint_callback) {
            QSize* callback_ret = qtablewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTableWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtablewidget_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qtablewidget_setupviewport_callback(this, cbval1);
            return;
        }
        QTableWidget::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtablewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qtablewidget_wheelevent_callback(this, cbval1);
            return;
        }
        QTableWidget::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtablewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qtablewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTableWidget::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtablewidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qtablewidget_changeevent_callback(this, cbval1);
            return;
        }
        QTableWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtablewidget_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qtablewidget_initstyleoption_callback(this, cbval1);
            return;
        }
        QTableWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtablewidget_devtype_callback) {
            int callback_ret = qtablewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTableWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtablewidget_setvisible_callback) {
            bool cbval1 = visible;
            qtablewidget_setvisible_callback(this, cbval1);
            return;
        }
        QTableWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtablewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtablewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTableWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtablewidget_hasheightforwidth_callback) {
            bool callback_ret = qtablewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTableWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtablewidget_paintengine_callback) {
            QPaintEngine* callback_ret = qtablewidget_paintengine_callback(this);
            return callback_ret;
        }
        return QTableWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtablewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtablewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTableWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtablewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtablewidget_enterevent_callback(this, cbval1);
            return;
        }
        QTableWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtablewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtablewidget_leaveevent_callback(this, cbval1);
            return;
        }
        QTableWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtablewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtablewidget_moveevent_callback(this, cbval1);
            return;
        }
        QTableWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtablewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtablewidget_closeevent_callback(this, cbval1);
            return;
        }
        QTableWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtablewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtablewidget_tabletevent_callback(this, cbval1);
            return;
        }
        QTableWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtablewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtablewidget_actionevent_callback(this, cbval1);
            return;
        }
        QTableWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtablewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qtablewidget_showevent_callback(this, cbval1);
            return;
        }
        QTableWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtablewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtablewidget_hideevent_callback(this, cbval1);
            return;
        }
        QTableWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtablewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtablewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTableWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtablewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtablewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTableWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtablewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtablewidget_initpainter_callback(this, cbval1);
            return;
        }
        QTableWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtablewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtablewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTableWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtablewidget_sharedpainter_callback) {
            QPainter* callback_ret = qtablewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTableWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtablewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtablewidget_childevent_callback(this, cbval1);
            return;
        }
        QTableWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtablewidget_customevent_callback) {
            QEvent* cbval1 = event;
            qtablewidget_customevent_callback(this, cbval1);
            return;
        }
        QTableWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtablewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtablewidget_connectnotify_callback(this, cbval1);
            return;
        }
        QTableWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtablewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtablewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTableWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QTableWidget_SuperEvent(QTableWidget* self, QEvent* e);
    friend libqt_list /* of libqt_string */ QTableWidget_SuperMimeTypes(const QTableWidget* self);
    friend QMimeData* QTableWidget_SuperMimeData(const QTableWidget* self, const libqt_list /* of QTableWidgetItem* */ items);
    friend bool QTableWidget_SuperDropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action);
    friend int QTableWidget_SuperSupportedDropActions(const QTableWidget* self);
    friend void QTableWidget_SuperDropEvent(QTableWidget* self, QDropEvent* event);
    friend void QTableWidget_SuperScrollContentsBy(QTableWidget* self, int dx, int dy);
    friend void QTableWidget_SuperInitViewItemOption(const QTableWidget* self, QStyleOptionViewItem* option);
    friend void QTableWidget_SuperPaintEvent(QTableWidget* self, QPaintEvent* e);
    friend void QTableWidget_SuperTimerEvent(QTableWidget* self, QTimerEvent* event);
    friend int QTableWidget_SuperHorizontalOffset(const QTableWidget* self);
    friend int QTableWidget_SuperVerticalOffset(const QTableWidget* self);
    friend QModelIndex* QTableWidget_SuperMoveCursor(QTableWidget* self, int cursorAction, int modifiers);
    friend void QTableWidget_SuperSetSelection(QTableWidget* self, const QRect* rect, int command);
    friend QRegion* QTableWidget_SuperVisualRegionForSelection(const QTableWidget* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QTableWidget_SuperSelectedIndexes(const QTableWidget* self);
    friend void QTableWidget_SuperUpdateGeometries(QTableWidget* self);
    friend QSize* QTableWidget_SuperViewportSizeHint(const QTableWidget* self);
    friend int QTableWidget_SuperSizeHintForRow(const QTableWidget* self, int row);
    friend int QTableWidget_SuperSizeHintForColumn(const QTableWidget* self, int column);
    friend void QTableWidget_SuperVerticalScrollbarAction(QTableWidget* self, int action);
    friend void QTableWidget_SuperHorizontalScrollbarAction(QTableWidget* self, int action);
    friend bool QTableWidget_SuperIsIndexHidden(const QTableWidget* self, const QModelIndex* index);
    friend void QTableWidget_SuperSelectionChanged(QTableWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTableWidget_SuperCurrentChanged(QTableWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTableWidget_SuperDataChanged(QTableWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QTableWidget_SuperRowsInserted(QTableWidget* self, const QModelIndex* parent, int start, int end);
    friend void QTableWidget_SuperRowsAboutToBeRemoved(QTableWidget* self, const QModelIndex* parent, int start, int end);
    friend void QTableWidget_SuperUpdateEditorData(QTableWidget* self);
    friend void QTableWidget_SuperUpdateEditorGeometries(QTableWidget* self);
    friend void QTableWidget_SuperVerticalScrollbarValueChanged(QTableWidget* self, int value);
    friend void QTableWidget_SuperHorizontalScrollbarValueChanged(QTableWidget* self, int value);
    friend void QTableWidget_SuperCloseEditor(QTableWidget* self, QWidget* editor, int hint);
    friend void QTableWidget_SuperCommitData(QTableWidget* self, QWidget* editor);
    friend void QTableWidget_SuperEditorDestroyed(QTableWidget* self, QObject* editor);
    friend bool QTableWidget_SuperEdit2(QTableWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QTableWidget_SuperSelectionCommand(const QTableWidget* self, const QModelIndex* index, const QEvent* event);
    friend void QTableWidget_SuperStartDrag(QTableWidget* self, int supportedActions);
    friend bool QTableWidget_SuperFocusNextPrevChild(QTableWidget* self, bool next);
    friend bool QTableWidget_SuperViewportEvent(QTableWidget* self, QEvent* event);
    friend void QTableWidget_SuperMousePressEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_SuperMouseMoveEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_SuperMouseReleaseEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_SuperMouseDoubleClickEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_SuperDragEnterEvent(QTableWidget* self, QDragEnterEvent* event);
    friend void QTableWidget_SuperDragMoveEvent(QTableWidget* self, QDragMoveEvent* event);
    friend void QTableWidget_SuperDragLeaveEvent(QTableWidget* self, QDragLeaveEvent* event);
    friend void QTableWidget_SuperFocusInEvent(QTableWidget* self, QFocusEvent* event);
    friend void QTableWidget_SuperFocusOutEvent(QTableWidget* self, QFocusEvent* event);
    friend void QTableWidget_SuperKeyPressEvent(QTableWidget* self, QKeyEvent* event);
    friend void QTableWidget_SuperResizeEvent(QTableWidget* self, QResizeEvent* event);
    friend void QTableWidget_SuperInputMethodEvent(QTableWidget* self, QInputMethodEvent* event);
    friend bool QTableWidget_SuperEventFilter(QTableWidget* self, QObject* object, QEvent* event);
    friend void QTableWidget_SuperWheelEvent(QTableWidget* self, QWheelEvent* param1);
    friend void QTableWidget_SuperContextMenuEvent(QTableWidget* self, QContextMenuEvent* param1);
    friend void QTableWidget_SuperChangeEvent(QTableWidget* self, QEvent* param1);
    friend void QTableWidget_SuperInitStyleOption(const QTableWidget* self, QStyleOptionFrame* option);
    friend void QTableWidget_SuperKeyReleaseEvent(QTableWidget* self, QKeyEvent* event);
    friend void QTableWidget_SuperEnterEvent(QTableWidget* self, QEnterEvent* event);
    friend void QTableWidget_SuperLeaveEvent(QTableWidget* self, QEvent* event);
    friend void QTableWidget_SuperMoveEvent(QTableWidget* self, QMoveEvent* event);
    friend void QTableWidget_SuperCloseEvent(QTableWidget* self, QCloseEvent* event);
    friend void QTableWidget_SuperTabletEvent(QTableWidget* self, QTabletEvent* event);
    friend void QTableWidget_SuperActionEvent(QTableWidget* self, QActionEvent* event);
    friend void QTableWidget_SuperShowEvent(QTableWidget* self, QShowEvent* event);
    friend void QTableWidget_SuperHideEvent(QTableWidget* self, QHideEvent* event);
    friend bool QTableWidget_SuperNativeEvent(QTableWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTableWidget_SuperMetric(const QTableWidget* self, int param1);
    friend void QTableWidget_SuperInitPainter(const QTableWidget* self, QPainter* painter);
    friend QPaintDevice* QTableWidget_SuperRedirected(const QTableWidget* self, QPoint* offset);
    friend QPainter* QTableWidget_SuperSharedPainter(const QTableWidget* self);
    friend void QTableWidget_SuperChildEvent(QTableWidget* self, QChildEvent* event);
    friend void QTableWidget_SuperCustomEvent(QTableWidget* self, QEvent* event);
    friend void QTableWidget_SuperConnectNotify(QTableWidget* self, const QMetaMethod* signal);
    friend void QTableWidget_SuperDisconnectNotify(QTableWidget* self, const QMetaMethod* signal);
};

#endif
