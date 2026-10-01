#pragma once
#ifndef LIBQTREEWIDGET_HXX
#define LIBQTREEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTreeWidgetItem
class VirtualQTreeWidgetItem final : public QTreeWidgetItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTreeWidgetItem_Clone_Callback = QTreeWidgetItem* (*)(const QTreeWidgetItem*);
    using QTreeWidgetItem_Data_Callback = QVariant* (*)(const QTreeWidgetItem*, int, int);
    using QTreeWidgetItem_SetData_Callback = void (*)(QTreeWidgetItem*, int, int, QVariant*);
    using QTreeWidgetItem_OperatorLesser_Callback = bool (*)(const QTreeWidgetItem*, QTreeWidgetItem*);
    using QTreeWidgetItem_Read_Callback = void (*)(QTreeWidgetItem*, QDataStream*);
    using QTreeWidgetItem_Write_Callback = void (*)(const QTreeWidgetItem*, QDataStream*);
    using QTreeWidgetItem::emitDataChanged;

    // Instance callback storage
    QTreeWidgetItem_Clone_Callback qtreewidgetitem_clone_callback = nullptr;
    QTreeWidgetItem_Data_Callback qtreewidgetitem_data_callback = nullptr;
    QTreeWidgetItem_SetData_Callback qtreewidgetitem_setdata_callback = nullptr;
    QTreeWidgetItem_OperatorLesser_Callback qtreewidgetitem_operatorlesser_callback = nullptr;
    QTreeWidgetItem_Read_Callback qtreewidgetitem_read_callback = nullptr;
    QTreeWidgetItem_Write_Callback qtreewidgetitem_write_callback = nullptr;

    VirtualQTreeWidgetItem() : QTreeWidgetItem() {};
    VirtualQTreeWidgetItem(const QList<QString>& strings) : QTreeWidgetItem(strings) {};
    VirtualQTreeWidgetItem(QTreeWidget* treeview) : QTreeWidgetItem(treeview) {};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, const QList<QString>& strings) : QTreeWidgetItem(treeview, strings) {};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after) : QTreeWidgetItem(treeview, after) {};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent) : QTreeWidgetItem(parent) {};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QList<QString>& strings) : QTreeWidgetItem(parent, strings) {};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after) : QTreeWidgetItem(parent, after) {};
    VirtualQTreeWidgetItem(const QTreeWidgetItem& other) : QTreeWidgetItem(other) {};
    VirtualQTreeWidgetItem(int typeVal) : QTreeWidgetItem(typeVal) {};
    VirtualQTreeWidgetItem(const QList<QString>& strings, int typeVal) : QTreeWidgetItem(strings, typeVal) {};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, int typeVal) : QTreeWidgetItem(treeview, typeVal) {};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, const QList<QString>& strings, int typeVal) : QTreeWidgetItem(treeview, strings, typeVal) {};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal) : QTreeWidgetItem(treeview, after, typeVal) {};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, int typeVal) : QTreeWidgetItem(parent, typeVal) {};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QList<QString>& strings, int typeVal) : QTreeWidgetItem(parent, strings, typeVal) {};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal) : QTreeWidgetItem(parent, after, typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual QTreeWidgetItem* clone() const override {
        if (qtreewidgetitem_clone_callback) {
            QTreeWidgetItem* callback_ret = qtreewidgetitem_clone_callback(this);
            return callback_ret;
        }
        return QTreeWidgetItem::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int column, int role) const override {
        if (qtreewidgetitem_data_callback) {
            int cbval1 = column;
            int cbval2 = role;
            QVariant* callback_ret = qtreewidgetitem_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidgetItem::data(column, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(int column, int role, const QVariant& value) override {
        if (qtreewidgetitem_setdata_callback) {
            int cbval1 = column;
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            qtreewidgetitem_setdata_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeWidgetItem::setData(column, role, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QTreeWidgetItem& other) const override {
        if (qtreewidgetitem_operatorlesser_callback) {
            const QTreeWidgetItem& other_ret = other;
            // Cast returned reference into pointer
            QTreeWidgetItem* cbval1 = const_cast<QTreeWidgetItem*>(&other_ret);
            bool callback_ret = qtreewidgetitem_operatorlesser_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeWidgetItem::operator<(other);
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qtreewidgetitem_read_callback) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;
            qtreewidgetitem_read_callback(this, cbval1);
            return;
        }
        QTreeWidgetItem::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qtreewidgetitem_write_callback) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;
            qtreewidgetitem_write_callback(this, cbval1);
            return;
        }
        QTreeWidgetItem::write(out);
    }
};

// This class is a subclass of QTreeWidget
class VirtualQTreeWidget final : public QTreeWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTreeWidget_MetaObject_Callback = QMetaObject* (*)(const QTreeWidget*);
    using QTreeWidget_Metacast_Callback = void* (*)(QTreeWidget*, const char*);
    using QTreeWidget_Metacall_Callback = int (*)(QTreeWidget*, int, int, void**);
    using QTreeWidget_SetSelectionModel_Callback = void (*)(QTreeWidget*, QItemSelectionModel*);
    using QTreeWidget_Event_Callback = bool (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_MimeTypes_Callback = const char** (*)(const QTreeWidget*);
    using QTreeWidget_MimeData_Callback = QMimeData* (*)(const QTreeWidget*, libqt_list /* of QTreeWidgetItem* */);
    using QTreeWidget_DropMimeData_Callback = bool (*)(QTreeWidget*, QTreeWidgetItem*, int, QMimeData*, int);
    using QTreeWidget_SupportedDropActions_Callback = int (*)(const QTreeWidget*);
    using QTreeWidget_DropEvent_Callback = void (*)(QTreeWidget*, QDropEvent*);
    using QTreeWidget_SetRootIndex_Callback = void (*)(QTreeWidget*, QModelIndex*);
    using QTreeWidget_KeyboardSearch_Callback = void (*)(QTreeWidget*, const char*);
    using QTreeWidget_VisualRect_Callback = QRect* (*)(const QTreeWidget*, QModelIndex*);
    using QTreeWidget_ScrollTo_Callback = void (*)(QTreeWidget*, QModelIndex*, int);
    using QTreeWidget_IndexAt_Callback = QModelIndex* (*)(const QTreeWidget*, QPoint*);
    using QTreeWidget_DoItemsLayout_Callback = void (*)(QTreeWidget*);
    using QTreeWidget_Reset_Callback = void (*)(QTreeWidget*);
    using QTreeWidget_DataChanged_Callback = void (*)(QTreeWidget*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QTreeWidget_SelectAll_Callback = void (*)(QTreeWidget*);
    using QTreeWidget_VerticalScrollbarValueChanged_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_ScrollContentsBy_Callback = void (*)(QTreeWidget*, int, int);
    using QTreeWidget_RowsInserted_Callback = void (*)(QTreeWidget*, QModelIndex*, int, int);
    using QTreeWidget_RowsAboutToBeRemoved_Callback = void (*)(QTreeWidget*, QModelIndex*, int, int);
    using QTreeWidget_MoveCursor_Callback = QModelIndex* (*)(QTreeWidget*, int, int);
    using QTreeWidget_HorizontalOffset_Callback = int (*)(const QTreeWidget*);
    using QTreeWidget_VerticalOffset_Callback = int (*)(const QTreeWidget*);
    using QTreeWidget_SetSelection_Callback = void (*)(QTreeWidget*, QRect*, int);
    using QTreeWidget_VisualRegionForSelection_Callback = QRegion* (*)(const QTreeWidget*, QItemSelection*);
    using QTreeWidget_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QTreeWidget*);
    using QTreeWidget_ChangeEvent_Callback = void (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_TimerEvent_Callback = void (*)(QTreeWidget*, QTimerEvent*);
    using QTreeWidget_PaintEvent_Callback = void (*)(QTreeWidget*, QPaintEvent*);
    using QTreeWidget_DrawRow_Callback = void (*)(const QTreeWidget*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using QTreeWidget_DrawBranches_Callback = void (*)(const QTreeWidget*, QPainter*, QRect*, QModelIndex*);
    using QTreeWidget_MousePressEvent_Callback = void (*)(QTreeWidget*, QMouseEvent*);
    using QTreeWidget_MouseReleaseEvent_Callback = void (*)(QTreeWidget*, QMouseEvent*);
    using QTreeWidget_MouseDoubleClickEvent_Callback = void (*)(QTreeWidget*, QMouseEvent*);
    using QTreeWidget_MouseMoveEvent_Callback = void (*)(QTreeWidget*, QMouseEvent*);
    using QTreeWidget_KeyPressEvent_Callback = void (*)(QTreeWidget*, QKeyEvent*);
    using QTreeWidget_DragMoveEvent_Callback = void (*)(QTreeWidget*, QDragMoveEvent*);
    using QTreeWidget_ViewportEvent_Callback = bool (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_UpdateGeometries_Callback = void (*)(QTreeWidget*);
    using QTreeWidget_ViewportSizeHint_Callback = QSize* (*)(const QTreeWidget*);
    using QTreeWidget_SizeHintForColumn_Callback = int (*)(const QTreeWidget*, int);
    using QTreeWidget_HorizontalScrollbarAction_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_IsIndexHidden_Callback = bool (*)(const QTreeWidget*, QModelIndex*);
    using QTreeWidget_SelectionChanged_Callback = void (*)(QTreeWidget*, QItemSelection*, QItemSelection*);
    using QTreeWidget_CurrentChanged_Callback = void (*)(QTreeWidget*, QModelIndex*, QModelIndex*);
    using QTreeWidget_SizeHintForRow_Callback = int (*)(const QTreeWidget*, int);
    using QTreeWidget_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTreeWidget*, QModelIndex*);
    using QTreeWidget_InputMethodQuery_Callback = QVariant* (*)(const QTreeWidget*, int);
    using QTreeWidget_UpdateEditorData_Callback = void (*)(QTreeWidget*);
    using QTreeWidget_UpdateEditorGeometries_Callback = void (*)(QTreeWidget*);
    using QTreeWidget_VerticalScrollbarAction_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_HorizontalScrollbarValueChanged_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_CloseEditor_Callback = void (*)(QTreeWidget*, QWidget*, int);
    using QTreeWidget_CommitData_Callback = void (*)(QTreeWidget*, QWidget*);
    using QTreeWidget_EditorDestroyed_Callback = void (*)(QTreeWidget*, QObject*);
    using QTreeWidget_Edit2_Callback = bool (*)(QTreeWidget*, QModelIndex*, int, QEvent*);
    using QTreeWidget_SelectionCommand_Callback = int (*)(const QTreeWidget*, QModelIndex*, QEvent*);
    using QTreeWidget_StartDrag_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_InitViewItemOption_Callback = void (*)(const QTreeWidget*, QStyleOptionViewItem*);
    using QTreeWidget_FocusNextPrevChild_Callback = bool (*)(QTreeWidget*, bool);
    using QTreeWidget_DragEnterEvent_Callback = void (*)(QTreeWidget*, QDragEnterEvent*);
    using QTreeWidget_DragLeaveEvent_Callback = void (*)(QTreeWidget*, QDragLeaveEvent*);
    using QTreeWidget_FocusInEvent_Callback = void (*)(QTreeWidget*, QFocusEvent*);
    using QTreeWidget_FocusOutEvent_Callback = void (*)(QTreeWidget*, QFocusEvent*);
    using QTreeWidget_ResizeEvent_Callback = void (*)(QTreeWidget*, QResizeEvent*);
    using QTreeWidget_InputMethodEvent_Callback = void (*)(QTreeWidget*, QInputMethodEvent*);
    using QTreeWidget_EventFilter_Callback = bool (*)(QTreeWidget*, QObject*, QEvent*);
    using QTreeWidget_MinimumSizeHint_Callback = QSize* (*)(const QTreeWidget*);
    using QTreeWidget_SizeHint_Callback = QSize* (*)(const QTreeWidget*);
    using QTreeWidget_SetupViewport_Callback = void (*)(QTreeWidget*, QWidget*);
    using QTreeWidget_WheelEvent_Callback = void (*)(QTreeWidget*, QWheelEvent*);
    using QTreeWidget_ContextMenuEvent_Callback = void (*)(QTreeWidget*, QContextMenuEvent*);
    using QTreeWidget_InitStyleOption_Callback = void (*)(const QTreeWidget*, QStyleOptionFrame*);
    using QTreeWidget_DevType_Callback = int (*)(const QTreeWidget*);
    using QTreeWidget_SetVisible_Callback = void (*)(QTreeWidget*, bool);
    using QTreeWidget_HeightForWidth_Callback = int (*)(const QTreeWidget*, int);
    using QTreeWidget_HasHeightForWidth_Callback = bool (*)(const QTreeWidget*);
    using QTreeWidget_PaintEngine_Callback = QPaintEngine* (*)(const QTreeWidget*);
    using QTreeWidget_KeyReleaseEvent_Callback = void (*)(QTreeWidget*, QKeyEvent*);
    using QTreeWidget_EnterEvent_Callback = void (*)(QTreeWidget*, QEnterEvent*);
    using QTreeWidget_LeaveEvent_Callback = void (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_MoveEvent_Callback = void (*)(QTreeWidget*, QMoveEvent*);
    using QTreeWidget_CloseEvent_Callback = void (*)(QTreeWidget*, QCloseEvent*);
    using QTreeWidget_TabletEvent_Callback = void (*)(QTreeWidget*, QTabletEvent*);
    using QTreeWidget_ActionEvent_Callback = void (*)(QTreeWidget*, QActionEvent*);
    using QTreeWidget_ShowEvent_Callback = void (*)(QTreeWidget*, QShowEvent*);
    using QTreeWidget_HideEvent_Callback = void (*)(QTreeWidget*, QHideEvent*);
    using QTreeWidget_NativeEvent_Callback = bool (*)(QTreeWidget*, libqt_string, void*, intptr_t*);
    using QTreeWidget_Metric_Callback = int (*)(const QTreeWidget*, int);
    using QTreeWidget_InitPainter_Callback = void (*)(const QTreeWidget*, QPainter*);
    using QTreeWidget_Redirected_Callback = QPaintDevice* (*)(const QTreeWidget*, QPoint*);
    using QTreeWidget_SharedPainter_Callback = QPainter* (*)(const QTreeWidget*);
    using QTreeWidget_ChildEvent_Callback = void (*)(QTreeWidget*, QChildEvent*);
    using QTreeWidget_CustomEvent_Callback = void (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_ConnectNotify_Callback = void (*)(QTreeWidget*, QMetaMethod*);
    using QTreeWidget_DisconnectNotify_Callback = void (*)(QTreeWidget*, QMetaMethod*);
    using QTreeWidget::columnCountChanged;
    using QTreeWidget::columnMoved;
    using QTreeWidget::columnResized;
    using QTreeWidget::create;
    using QTreeWidget::destroy;
    using QTreeWidget::dirtyRegionOffset;
    using QTreeWidget::doAutoScroll;
    using QTreeWidget::drawFrame;
    using QTreeWidget::drawTree;
    using QTreeWidget::dropIndicatorPosition;
    using QTreeWidget::executeDelayedItemsLayout;
    using QTreeWidget::focusNextChild;
    using QTreeWidget::focusPreviousChild;
    using QTreeWidget::getDecodedMetricF;
    using QTreeWidget::indexRowSizeHint;
    using QTreeWidget::isSignalConnected;
    using QTreeWidget::receivers;
    using QTreeWidget::reexpand;
    using QTreeWidget::rowHeight;
    using QTreeWidget::rowsRemoved;
    using QTreeWidget::scheduleDelayedItemsLayout;
    using QTreeWidget::scrollDirtyRegion;
    using QTreeWidget::sender;
    using QTreeWidget::senderSignalIndex;
    using QTreeWidget::setDirtyRegion;
    using QTreeWidget::setState;
    using QTreeWidget::setViewportMargins;
    using QTreeWidget::startAutoScroll;
    using QTreeWidget::state;
    using QTreeWidget::stopAutoScroll;
    using QTreeWidget::updateMicroFocus;
    using QTreeWidget::viewportMargins;

    // Instance callback storage
    QTreeWidget_MetaObject_Callback qtreewidget_metaobject_callback = nullptr;
    QTreeWidget_Metacast_Callback qtreewidget_metacast_callback = nullptr;
    QTreeWidget_Metacall_Callback qtreewidget_metacall_callback = nullptr;
    QTreeWidget_SetSelectionModel_Callback qtreewidget_setselectionmodel_callback = nullptr;
    QTreeWidget_Event_Callback qtreewidget_event_callback = nullptr;
    QTreeWidget_MimeTypes_Callback qtreewidget_mimetypes_callback = nullptr;
    QTreeWidget_MimeData_Callback qtreewidget_mimedata_callback = nullptr;
    QTreeWidget_DropMimeData_Callback qtreewidget_dropmimedata_callback = nullptr;
    QTreeWidget_SupportedDropActions_Callback qtreewidget_supporteddropactions_callback = nullptr;
    QTreeWidget_DropEvent_Callback qtreewidget_dropevent_callback = nullptr;
    QTreeWidget_SetRootIndex_Callback qtreewidget_setrootindex_callback = nullptr;
    QTreeWidget_KeyboardSearch_Callback qtreewidget_keyboardsearch_callback = nullptr;
    QTreeWidget_VisualRect_Callback qtreewidget_visualrect_callback = nullptr;
    QTreeWidget_ScrollTo_Callback qtreewidget_scrollto_callback = nullptr;
    QTreeWidget_IndexAt_Callback qtreewidget_indexat_callback = nullptr;
    QTreeWidget_DoItemsLayout_Callback qtreewidget_doitemslayout_callback = nullptr;
    QTreeWidget_Reset_Callback qtreewidget_reset_callback = nullptr;
    QTreeWidget_DataChanged_Callback qtreewidget_datachanged_callback = nullptr;
    QTreeWidget_SelectAll_Callback qtreewidget_selectall_callback = nullptr;
    QTreeWidget_VerticalScrollbarValueChanged_Callback qtreewidget_verticalscrollbarvaluechanged_callback = nullptr;
    QTreeWidget_ScrollContentsBy_Callback qtreewidget_scrollcontentsby_callback = nullptr;
    QTreeWidget_RowsInserted_Callback qtreewidget_rowsinserted_callback = nullptr;
    QTreeWidget_RowsAboutToBeRemoved_Callback qtreewidget_rowsabouttoberemoved_callback = nullptr;
    QTreeWidget_MoveCursor_Callback qtreewidget_movecursor_callback = nullptr;
    QTreeWidget_HorizontalOffset_Callback qtreewidget_horizontaloffset_callback = nullptr;
    QTreeWidget_VerticalOffset_Callback qtreewidget_verticaloffset_callback = nullptr;
    QTreeWidget_SetSelection_Callback qtreewidget_setselection_callback = nullptr;
    QTreeWidget_VisualRegionForSelection_Callback qtreewidget_visualregionforselection_callback = nullptr;
    QTreeWidget_SelectedIndexes_Callback qtreewidget_selectedindexes_callback = nullptr;
    QTreeWidget_ChangeEvent_Callback qtreewidget_changeevent_callback = nullptr;
    QTreeWidget_TimerEvent_Callback qtreewidget_timerevent_callback = nullptr;
    QTreeWidget_PaintEvent_Callback qtreewidget_paintevent_callback = nullptr;
    QTreeWidget_DrawRow_Callback qtreewidget_drawrow_callback = nullptr;
    QTreeWidget_DrawBranches_Callback qtreewidget_drawbranches_callback = nullptr;
    QTreeWidget_MousePressEvent_Callback qtreewidget_mousepressevent_callback = nullptr;
    QTreeWidget_MouseReleaseEvent_Callback qtreewidget_mousereleaseevent_callback = nullptr;
    QTreeWidget_MouseDoubleClickEvent_Callback qtreewidget_mousedoubleclickevent_callback = nullptr;
    QTreeWidget_MouseMoveEvent_Callback qtreewidget_mousemoveevent_callback = nullptr;
    QTreeWidget_KeyPressEvent_Callback qtreewidget_keypressevent_callback = nullptr;
    QTreeWidget_DragMoveEvent_Callback qtreewidget_dragmoveevent_callback = nullptr;
    QTreeWidget_ViewportEvent_Callback qtreewidget_viewportevent_callback = nullptr;
    QTreeWidget_UpdateGeometries_Callback qtreewidget_updategeometries_callback = nullptr;
    QTreeWidget_ViewportSizeHint_Callback qtreewidget_viewportsizehint_callback = nullptr;
    QTreeWidget_SizeHintForColumn_Callback qtreewidget_sizehintforcolumn_callback = nullptr;
    QTreeWidget_HorizontalScrollbarAction_Callback qtreewidget_horizontalscrollbaraction_callback = nullptr;
    QTreeWidget_IsIndexHidden_Callback qtreewidget_isindexhidden_callback = nullptr;
    QTreeWidget_SelectionChanged_Callback qtreewidget_selectionchanged_callback = nullptr;
    QTreeWidget_CurrentChanged_Callback qtreewidget_currentchanged_callback = nullptr;
    QTreeWidget_SizeHintForRow_Callback qtreewidget_sizehintforrow_callback = nullptr;
    QTreeWidget_ItemDelegateForIndex_Callback qtreewidget_itemdelegateforindex_callback = nullptr;
    QTreeWidget_InputMethodQuery_Callback qtreewidget_inputmethodquery_callback = nullptr;
    QTreeWidget_UpdateEditorData_Callback qtreewidget_updateeditordata_callback = nullptr;
    QTreeWidget_UpdateEditorGeometries_Callback qtreewidget_updateeditorgeometries_callback = nullptr;
    QTreeWidget_VerticalScrollbarAction_Callback qtreewidget_verticalscrollbaraction_callback = nullptr;
    QTreeWidget_HorizontalScrollbarValueChanged_Callback qtreewidget_horizontalscrollbarvaluechanged_callback = nullptr;
    QTreeWidget_CloseEditor_Callback qtreewidget_closeeditor_callback = nullptr;
    QTreeWidget_CommitData_Callback qtreewidget_commitdata_callback = nullptr;
    QTreeWidget_EditorDestroyed_Callback qtreewidget_editordestroyed_callback = nullptr;
    QTreeWidget_Edit2_Callback qtreewidget_edit2_callback = nullptr;
    QTreeWidget_SelectionCommand_Callback qtreewidget_selectioncommand_callback = nullptr;
    QTreeWidget_StartDrag_Callback qtreewidget_startdrag_callback = nullptr;
    QTreeWidget_InitViewItemOption_Callback qtreewidget_initviewitemoption_callback = nullptr;
    QTreeWidget_FocusNextPrevChild_Callback qtreewidget_focusnextprevchild_callback = nullptr;
    QTreeWidget_DragEnterEvent_Callback qtreewidget_dragenterevent_callback = nullptr;
    QTreeWidget_DragLeaveEvent_Callback qtreewidget_dragleaveevent_callback = nullptr;
    QTreeWidget_FocusInEvent_Callback qtreewidget_focusinevent_callback = nullptr;
    QTreeWidget_FocusOutEvent_Callback qtreewidget_focusoutevent_callback = nullptr;
    QTreeWidget_ResizeEvent_Callback qtreewidget_resizeevent_callback = nullptr;
    QTreeWidget_InputMethodEvent_Callback qtreewidget_inputmethodevent_callback = nullptr;
    QTreeWidget_EventFilter_Callback qtreewidget_eventfilter_callback = nullptr;
    QTreeWidget_MinimumSizeHint_Callback qtreewidget_minimumsizehint_callback = nullptr;
    QTreeWidget_SizeHint_Callback qtreewidget_sizehint_callback = nullptr;
    QTreeWidget_SetupViewport_Callback qtreewidget_setupviewport_callback = nullptr;
    QTreeWidget_WheelEvent_Callback qtreewidget_wheelevent_callback = nullptr;
    QTreeWidget_ContextMenuEvent_Callback qtreewidget_contextmenuevent_callback = nullptr;
    QTreeWidget_InitStyleOption_Callback qtreewidget_initstyleoption_callback = nullptr;
    QTreeWidget_DevType_Callback qtreewidget_devtype_callback = nullptr;
    QTreeWidget_SetVisible_Callback qtreewidget_setvisible_callback = nullptr;
    QTreeWidget_HeightForWidth_Callback qtreewidget_heightforwidth_callback = nullptr;
    QTreeWidget_HasHeightForWidth_Callback qtreewidget_hasheightforwidth_callback = nullptr;
    QTreeWidget_PaintEngine_Callback qtreewidget_paintengine_callback = nullptr;
    QTreeWidget_KeyReleaseEvent_Callback qtreewidget_keyreleaseevent_callback = nullptr;
    QTreeWidget_EnterEvent_Callback qtreewidget_enterevent_callback = nullptr;
    QTreeWidget_LeaveEvent_Callback qtreewidget_leaveevent_callback = nullptr;
    QTreeWidget_MoveEvent_Callback qtreewidget_moveevent_callback = nullptr;
    QTreeWidget_CloseEvent_Callback qtreewidget_closeevent_callback = nullptr;
    QTreeWidget_TabletEvent_Callback qtreewidget_tabletevent_callback = nullptr;
    QTreeWidget_ActionEvent_Callback qtreewidget_actionevent_callback = nullptr;
    QTreeWidget_ShowEvent_Callback qtreewidget_showevent_callback = nullptr;
    QTreeWidget_HideEvent_Callback qtreewidget_hideevent_callback = nullptr;
    QTreeWidget_NativeEvent_Callback qtreewidget_nativeevent_callback = nullptr;
    QTreeWidget_Metric_Callback qtreewidget_metric_callback = nullptr;
    QTreeWidget_InitPainter_Callback qtreewidget_initpainter_callback = nullptr;
    QTreeWidget_Redirected_Callback qtreewidget_redirected_callback = nullptr;
    QTreeWidget_SharedPainter_Callback qtreewidget_sharedpainter_callback = nullptr;
    QTreeWidget_ChildEvent_Callback qtreewidget_childevent_callback = nullptr;
    QTreeWidget_CustomEvent_Callback qtreewidget_customevent_callback = nullptr;
    QTreeWidget_ConnectNotify_Callback qtreewidget_connectnotify_callback = nullptr;
    QTreeWidget_DisconnectNotify_Callback qtreewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTreeWidget {
        using QTreeWidget::actionEvent;
        using QTreeWidget::changeEvent;
        using QTreeWidget::childEvent;
        using QTreeWidget::closeEditor;
        using QTreeWidget::closeEvent;
        using QTreeWidget::commitData;
        using QTreeWidget::connectNotify;
        using QTreeWidget::contextMenuEvent;
        using QTreeWidget::currentChanged;
        using QTreeWidget::customEvent;
        using QTreeWidget::disconnectNotify;
        using QTreeWidget::dragEnterEvent;
        using QTreeWidget::dragLeaveEvent;
        using QTreeWidget::dragMoveEvent;
        using QTreeWidget::drawBranches;
        using QTreeWidget::drawRow;
        using QTreeWidget::dropEvent;
        using QTreeWidget::dropMimeData;
        using QTreeWidget::edit;
        using QTreeWidget::editorDestroyed;
        using QTreeWidget::enterEvent;
        using QTreeWidget::event;
        using QTreeWidget::eventFilter;
        using QTreeWidget::focusInEvent;
        using QTreeWidget::focusNextPrevChild;
        using QTreeWidget::focusOutEvent;
        using QTreeWidget::hideEvent;
        using QTreeWidget::horizontalOffset;
        using QTreeWidget::horizontalScrollbarAction;
        using QTreeWidget::horizontalScrollbarValueChanged;
        using QTreeWidget::initPainter;
        using QTreeWidget::initStyleOption;
        using QTreeWidget::initViewItemOption;
        using QTreeWidget::inputMethodEvent;
        using QTreeWidget::isIndexHidden;
        using QTreeWidget::keyPressEvent;
        using QTreeWidget::keyReleaseEvent;
        using QTreeWidget::leaveEvent;
        using QTreeWidget::metric;
        using QTreeWidget::mimeData;
        using QTreeWidget::mimeTypes;
        using QTreeWidget::mouseDoubleClickEvent;
        using QTreeWidget::mouseMoveEvent;
        using QTreeWidget::mousePressEvent;
        using QTreeWidget::mouseReleaseEvent;
        using QTreeWidget::moveCursor;
        using QTreeWidget::moveEvent;
        using QTreeWidget::nativeEvent;
        using QTreeWidget::paintEvent;
        using QTreeWidget::redirected;
        using QTreeWidget::resizeEvent;
        using QTreeWidget::rowsAboutToBeRemoved;
        using QTreeWidget::rowsInserted;
        using QTreeWidget::scrollContentsBy;
        using QTreeWidget::selectedIndexes;
        using QTreeWidget::selectionChanged;
        using QTreeWidget::selectionCommand;
        using QTreeWidget::setSelection;
        using QTreeWidget::sharedPainter;
        using QTreeWidget::showEvent;
        using QTreeWidget::sizeHintForColumn;
        using QTreeWidget::startDrag;
        using QTreeWidget::supportedDropActions;
        using QTreeWidget::tabletEvent;
        using QTreeWidget::timerEvent;
        using QTreeWidget::updateEditorData;
        using QTreeWidget::updateEditorGeometries;
        using QTreeWidget::updateGeometries;
        using QTreeWidget::verticalOffset;
        using QTreeWidget::verticalScrollbarAction;
        using QTreeWidget::verticalScrollbarValueChanged;
        using QTreeWidget::viewportEvent;
        using QTreeWidget::viewportSizeHint;
        using QTreeWidget::visualRegionForSelection;
        using QTreeWidget::wheelEvent;
    };

    VirtualQTreeWidget(QWidget* parent) : QTreeWidget(parent) {};
    VirtualQTreeWidget() : QTreeWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtreewidget_metaobject_callback) {
            QMetaObject* callback_ret = qtreewidget_metaobject_callback(this);
            return callback_ret;
        }
        return QTreeWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtreewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtreewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtreewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtreewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTreeWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtreewidget_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qtreewidget_setselectionmodel_callback(this, cbval1);
            return;
        }
        QTreeWidget::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtreewidget_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qtreewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qtreewidget_mimetypes_callback) {
            const char** callback_ret = qtreewidget_mimetypes_callback(this);
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
        return QTreeWidget::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QTreeWidgetItem*>& items) const override {
        if (qtreewidget_mimedata_callback) {
            const QList<QTreeWidgetItem*>& items_ret = items;
            // Convert QList<> from C++ memory to manually-managed C memory
            QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * (items_ret.size())));
            for (qsizetype i = 0; i < items_ret.size(); ++i) {
                items_arr[i] = items_ret[i];
            }
            libqt_list items_out;
            items_out.len = items_ret.size();
            items_out.data = static_cast<void*>(items_arr);
            libqt_list /* of QTreeWidgetItem* */ cbval1 = items_out;
            QMimeData* callback_ret = qtreewidget_mimedata_callback(this, cbval1);
            free(items_arr);
            return callback_ret;
        }
        return QTreeWidget::mimeData(items);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(QTreeWidgetItem* parent, int index, const QMimeData* data, Qt::DropAction action) override {
        if (qtreewidget_dropmimedata_callback) {
            QTreeWidgetItem* cbval1 = parent;
            int cbval2 = index;
            QMimeData* cbval3 = (QMimeData*)data;
            int cbval4 = static_cast<int>(action);
            bool callback_ret = qtreewidget_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QTreeWidget::dropMimeData(parent, index, data, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qtreewidget_supporteddropactions_callback) {
            int callback_ret = qtreewidget_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QTreeWidget::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtreewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtreewidget_dropevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtreewidget_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qtreewidget_setrootindex_callback(this, cbval1);
            return;
        }
        QTreeWidget::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtreewidget_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qtreewidget_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QTreeWidget::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtreewidget_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qtreewidget_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidget::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtreewidget_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qtreewidget_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QTreeWidget::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtreewidget_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = qtreewidget_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidget::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtreewidget_doitemslayout_callback) {
            qtreewidget_doitemslayout_callback(this);
            return;
        }
        QTreeWidget::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtreewidget_reset_callback) {
            qtreewidget_reset_callback(this);
            return;
        }
        QTreeWidget::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtreewidget_datachanged_callback) {
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
            qtreewidget_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QTreeWidget::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtreewidget_selectall_callback) {
            qtreewidget_selectall_callback(this);
            return;
        }
        QTreeWidget::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtreewidget_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qtreewidget_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QTreeWidget::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtreewidget_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qtreewidget_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QTreeWidget::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtreewidget_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qtreewidget_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeWidget::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtreewidget_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qtreewidget_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeWidget::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtreewidget_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qtreewidget_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidget::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtreewidget_horizontaloffset_callback) {
            int callback_ret = qtreewidget_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTreeWidget::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtreewidget_verticaloffset_callback) {
            int callback_ret = qtreewidget_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTreeWidget::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtreewidget_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qtreewidget_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QTreeWidget::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtreewidget_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qtreewidget_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidget::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qtreewidget_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qtreewidget_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QTreeWidget::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtreewidget_changeevent_callback) {
            QEvent* cbval1 = event;
            qtreewidget_changeevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtreewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtreewidget_timerevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtreewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qtreewidget_paintevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
        if (qtreewidget_drawrow_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& options_ret = options;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&options_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qtreewidget_drawrow_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeWidget::drawRow(painter, options, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
        if (qtreewidget_drawbranches_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qtreewidget_drawbranches_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QTreeWidget::drawBranches(painter, rect, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtreewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtreewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtreewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtreewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtreewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtreewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtreewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtreewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtreewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qtreewidget_keypressevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtreewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtreewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtreewidget_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtreewidget_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeWidget::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtreewidget_updategeometries_callback) {
            qtreewidget_updategeometries_callback(this);
            return;
        }
        QTreeWidget::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtreewidget_viewportsizehint_callback) {
            QSize* callback_ret = qtreewidget_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidget::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtreewidget_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qtreewidget_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeWidget::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtreewidget_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qtreewidget_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QTreeWidget::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtreewidget_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qtreewidget_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeWidget::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtreewidget_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qtreewidget_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QTreeWidget::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtreewidget_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qtreewidget_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QTreeWidget::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtreewidget_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qtreewidget_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeWidget::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtreewidget_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qtreewidget_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeWidget::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtreewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qtreewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidget::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtreewidget_updateeditordata_callback) {
            qtreewidget_updateeditordata_callback(this);
            return;
        }
        QTreeWidget::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtreewidget_updateeditorgeometries_callback) {
            qtreewidget_updateeditorgeometries_callback(this);
            return;
        }
        QTreeWidget::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtreewidget_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qtreewidget_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QTreeWidget::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtreewidget_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qtreewidget_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QTreeWidget::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtreewidget_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qtreewidget_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QTreeWidget::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtreewidget_commitdata_callback) {
            QWidget* cbval1 = editor;
            qtreewidget_commitdata_callback(this, cbval1);
            return;
        }
        QTreeWidget::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtreewidget_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qtreewidget_editordestroyed_callback(this, cbval1);
            return;
        }
        QTreeWidget::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtreewidget_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qtreewidget_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTreeWidget::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtreewidget_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qtreewidget_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QTreeWidget::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtreewidget_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qtreewidget_startdrag_callback(this, cbval1);
            return;
        }
        QTreeWidget::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtreewidget_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qtreewidget_initviewitemoption_callback(this, cbval1);
            return;
        }
        QTreeWidget::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtreewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtreewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtreewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtreewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtreewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtreewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtreewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtreewidget_focusinevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtreewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtreewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtreewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qtreewidget_resizeevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtreewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qtreewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtreewidget_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qtreewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTreeWidget::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtreewidget_minimumsizehint_callback) {
            QSize* callback_ret = qtreewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtreewidget_sizehint_callback) {
            QSize* callback_ret = qtreewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTreeWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtreewidget_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qtreewidget_setupviewport_callback(this, cbval1);
            return;
        }
        QTreeWidget::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtreewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qtreewidget_wheelevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtreewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qtreewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtreewidget_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qtreewidget_initstyleoption_callback(this, cbval1);
            return;
        }
        QTreeWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtreewidget_devtype_callback) {
            int callback_ret = qtreewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTreeWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtreewidget_setvisible_callback) {
            bool cbval1 = visible;
            qtreewidget_setvisible_callback(this, cbval1);
            return;
        }
        QTreeWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtreewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtreewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtreewidget_hasheightforwidth_callback) {
            bool callback_ret = qtreewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTreeWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtreewidget_paintengine_callback) {
            QPaintEngine* callback_ret = qtreewidget_paintengine_callback(this);
            return callback_ret;
        }
        return QTreeWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtreewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtreewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtreewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtreewidget_enterevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtreewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtreewidget_leaveevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtreewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtreewidget_moveevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtreewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtreewidget_closeevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtreewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtreewidget_tabletevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtreewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtreewidget_actionevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtreewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qtreewidget_showevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtreewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtreewidget_hideevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtreewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtreewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTreeWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtreewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtreewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTreeWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtreewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtreewidget_initpainter_callback(this, cbval1);
            return;
        }
        QTreeWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtreewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtreewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTreeWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtreewidget_sharedpainter_callback) {
            QPainter* callback_ret = qtreewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTreeWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtreewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtreewidget_childevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtreewidget_customevent_callback) {
            QEvent* cbval1 = event;
            qtreewidget_customevent_callback(this, cbval1);
            return;
        }
        QTreeWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtreewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtreewidget_connectnotify_callback(this, cbval1);
            return;
        }
        QTreeWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtreewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtreewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTreeWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QTreeWidget_SuperEvent(QTreeWidget* self, QEvent* e);
    friend libqt_list /* of libqt_string */ QTreeWidget_SuperMimeTypes(const QTreeWidget* self);
    friend QMimeData* QTreeWidget_SuperMimeData(const QTreeWidget* self, const libqt_list /* of QTreeWidgetItem* */ items);
    friend bool QTreeWidget_SuperDropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action);
    friend int QTreeWidget_SuperSupportedDropActions(const QTreeWidget* self);
    friend void QTreeWidget_SuperDropEvent(QTreeWidget* self, QDropEvent* event);
    friend void QTreeWidget_SuperVerticalScrollbarValueChanged(QTreeWidget* self, int value);
    friend void QTreeWidget_SuperScrollContentsBy(QTreeWidget* self, int dx, int dy);
    friend void QTreeWidget_SuperRowsInserted(QTreeWidget* self, const QModelIndex* parent, int start, int end);
    friend void QTreeWidget_SuperRowsAboutToBeRemoved(QTreeWidget* self, const QModelIndex* parent, int start, int end);
    friend QModelIndex* QTreeWidget_SuperMoveCursor(QTreeWidget* self, int cursorAction, int modifiers);
    friend int QTreeWidget_SuperHorizontalOffset(const QTreeWidget* self);
    friend int QTreeWidget_SuperVerticalOffset(const QTreeWidget* self);
    friend void QTreeWidget_SuperSetSelection(QTreeWidget* self, const QRect* rect, int command);
    friend QRegion* QTreeWidget_SuperVisualRegionForSelection(const QTreeWidget* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QTreeWidget_SuperSelectedIndexes(const QTreeWidget* self);
    friend void QTreeWidget_SuperChangeEvent(QTreeWidget* self, QEvent* event);
    friend void QTreeWidget_SuperTimerEvent(QTreeWidget* self, QTimerEvent* event);
    friend void QTreeWidget_SuperPaintEvent(QTreeWidget* self, QPaintEvent* event);
    friend void QTreeWidget_SuperDrawRow(const QTreeWidget* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index);
    friend void QTreeWidget_SuperDrawBranches(const QTreeWidget* self, QPainter* painter, const QRect* rect, const QModelIndex* index);
    friend void QTreeWidget_SuperMousePressEvent(QTreeWidget* self, QMouseEvent* event);
    friend void QTreeWidget_SuperMouseReleaseEvent(QTreeWidget* self, QMouseEvent* event);
    friend void QTreeWidget_SuperMouseDoubleClickEvent(QTreeWidget* self, QMouseEvent* event);
    friend void QTreeWidget_SuperMouseMoveEvent(QTreeWidget* self, QMouseEvent* event);
    friend void QTreeWidget_SuperKeyPressEvent(QTreeWidget* self, QKeyEvent* event);
    friend void QTreeWidget_SuperDragMoveEvent(QTreeWidget* self, QDragMoveEvent* event);
    friend bool QTreeWidget_SuperViewportEvent(QTreeWidget* self, QEvent* event);
    friend void QTreeWidget_SuperUpdateGeometries(QTreeWidget* self);
    friend QSize* QTreeWidget_SuperViewportSizeHint(const QTreeWidget* self);
    friend int QTreeWidget_SuperSizeHintForColumn(const QTreeWidget* self, int column);
    friend void QTreeWidget_SuperHorizontalScrollbarAction(QTreeWidget* self, int action);
    friend bool QTreeWidget_SuperIsIndexHidden(const QTreeWidget* self, const QModelIndex* index);
    friend void QTreeWidget_SuperSelectionChanged(QTreeWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTreeWidget_SuperCurrentChanged(QTreeWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTreeWidget_SuperUpdateEditorData(QTreeWidget* self);
    friend void QTreeWidget_SuperUpdateEditorGeometries(QTreeWidget* self);
    friend void QTreeWidget_SuperVerticalScrollbarAction(QTreeWidget* self, int action);
    friend void QTreeWidget_SuperHorizontalScrollbarValueChanged(QTreeWidget* self, int value);
    friend void QTreeWidget_SuperCloseEditor(QTreeWidget* self, QWidget* editor, int hint);
    friend void QTreeWidget_SuperCommitData(QTreeWidget* self, QWidget* editor);
    friend void QTreeWidget_SuperEditorDestroyed(QTreeWidget* self, QObject* editor);
    friend bool QTreeWidget_SuperEdit2(QTreeWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QTreeWidget_SuperSelectionCommand(const QTreeWidget* self, const QModelIndex* index, const QEvent* event);
    friend void QTreeWidget_SuperStartDrag(QTreeWidget* self, int supportedActions);
    friend void QTreeWidget_SuperInitViewItemOption(const QTreeWidget* self, QStyleOptionViewItem* option);
    friend bool QTreeWidget_SuperFocusNextPrevChild(QTreeWidget* self, bool next);
    friend void QTreeWidget_SuperDragEnterEvent(QTreeWidget* self, QDragEnterEvent* event);
    friend void QTreeWidget_SuperDragLeaveEvent(QTreeWidget* self, QDragLeaveEvent* event);
    friend void QTreeWidget_SuperFocusInEvent(QTreeWidget* self, QFocusEvent* event);
    friend void QTreeWidget_SuperFocusOutEvent(QTreeWidget* self, QFocusEvent* event);
    friend void QTreeWidget_SuperResizeEvent(QTreeWidget* self, QResizeEvent* event);
    friend void QTreeWidget_SuperInputMethodEvent(QTreeWidget* self, QInputMethodEvent* event);
    friend bool QTreeWidget_SuperEventFilter(QTreeWidget* self, QObject* object, QEvent* event);
    friend void QTreeWidget_SuperWheelEvent(QTreeWidget* self, QWheelEvent* param1);
    friend void QTreeWidget_SuperContextMenuEvent(QTreeWidget* self, QContextMenuEvent* param1);
    friend void QTreeWidget_SuperInitStyleOption(const QTreeWidget* self, QStyleOptionFrame* option);
    friend void QTreeWidget_SuperKeyReleaseEvent(QTreeWidget* self, QKeyEvent* event);
    friend void QTreeWidget_SuperEnterEvent(QTreeWidget* self, QEnterEvent* event);
    friend void QTreeWidget_SuperLeaveEvent(QTreeWidget* self, QEvent* event);
    friend void QTreeWidget_SuperMoveEvent(QTreeWidget* self, QMoveEvent* event);
    friend void QTreeWidget_SuperCloseEvent(QTreeWidget* self, QCloseEvent* event);
    friend void QTreeWidget_SuperTabletEvent(QTreeWidget* self, QTabletEvent* event);
    friend void QTreeWidget_SuperActionEvent(QTreeWidget* self, QActionEvent* event);
    friend void QTreeWidget_SuperShowEvent(QTreeWidget* self, QShowEvent* event);
    friend void QTreeWidget_SuperHideEvent(QTreeWidget* self, QHideEvent* event);
    friend bool QTreeWidget_SuperNativeEvent(QTreeWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTreeWidget_SuperMetric(const QTreeWidget* self, int param1);
    friend void QTreeWidget_SuperInitPainter(const QTreeWidget* self, QPainter* painter);
    friend QPaintDevice* QTreeWidget_SuperRedirected(const QTreeWidget* self, QPoint* offset);
    friend QPainter* QTreeWidget_SuperSharedPainter(const QTreeWidget* self);
    friend void QTreeWidget_SuperChildEvent(QTreeWidget* self, QChildEvent* event);
    friend void QTreeWidget_SuperCustomEvent(QTreeWidget* self, QEvent* event);
    friend void QTreeWidget_SuperConnectNotify(QTreeWidget* self, const QMetaMethod* signal);
    friend void QTreeWidget_SuperDisconnectNotify(QTreeWidget* self, const QMetaMethod* signal);
};

#endif
