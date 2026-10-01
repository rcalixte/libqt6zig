#pragma once
#ifndef LIBQLISTWIDGET_HXX
#define LIBQLISTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QListWidgetItem
class VirtualQListWidgetItem final : public QListWidgetItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QListWidgetItem_Clone_Callback = QListWidgetItem* (*)(const QListWidgetItem*);
    using QListWidgetItem_Data_Callback = QVariant* (*)(const QListWidgetItem*, int);
    using QListWidgetItem_SetData_Callback = void (*)(QListWidgetItem*, int, QVariant*);
    using QListWidgetItem_OperatorLesser_Callback = bool (*)(const QListWidgetItem*, QListWidgetItem*);
    using QListWidgetItem_Read_Callback = void (*)(QListWidgetItem*, QDataStream*);
    using QListWidgetItem_Write_Callback = void (*)(const QListWidgetItem*, QDataStream*);

    // Instance callback storage
    QListWidgetItem_Clone_Callback qlistwidgetitem_clone_callback = nullptr;
    QListWidgetItem_Data_Callback qlistwidgetitem_data_callback = nullptr;
    QListWidgetItem_SetData_Callback qlistwidgetitem_setdata_callback = nullptr;
    QListWidgetItem_OperatorLesser_Callback qlistwidgetitem_operatorlesser_callback = nullptr;
    QListWidgetItem_Read_Callback qlistwidgetitem_read_callback = nullptr;
    QListWidgetItem_Write_Callback qlistwidgetitem_write_callback = nullptr;

    VirtualQListWidgetItem() : QListWidgetItem() {};
    VirtualQListWidgetItem(const QString& text) : QListWidgetItem(text) {};
    VirtualQListWidgetItem(const QIcon& icon, const QString& text) : QListWidgetItem(icon, text) {};
    VirtualQListWidgetItem(const QListWidgetItem& other) : QListWidgetItem(other) {};
    VirtualQListWidgetItem(QListWidget* listview) : QListWidgetItem(listview) {};
    VirtualQListWidgetItem(QListWidget* listview, int typeVal) : QListWidgetItem(listview, typeVal) {};
    VirtualQListWidgetItem(const QString& text, QListWidget* listview) : QListWidgetItem(text, listview) {};
    VirtualQListWidgetItem(const QString& text, QListWidget* listview, int typeVal) : QListWidgetItem(text, listview, typeVal) {};
    VirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview) : QListWidgetItem(icon, text, listview) {};
    VirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview, int typeVal) : QListWidgetItem(icon, text, listview, typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual QListWidgetItem* clone() const override {
        if (qlistwidgetitem_clone_callback) {
            QListWidgetItem* callback_ret = qlistwidgetitem_clone_callback(this);
            return callback_ret;
        }
        return QListWidgetItem::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int role) const override {
        if (qlistwidgetitem_data_callback) {
            int cbval1 = role;
            QVariant* callback_ret = qlistwidgetitem_data_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidgetItem::data(role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(int role, const QVariant& value) override {
        if (qlistwidgetitem_setdata_callback) {
            int cbval1 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qlistwidgetitem_setdata_callback(this, cbval1, cbval2);
            return;
        }
        QListWidgetItem::setData(role, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QListWidgetItem& other) const override {
        if (qlistwidgetitem_operatorlesser_callback) {
            const QListWidgetItem& other_ret = other;
            // Cast returned reference into pointer
            QListWidgetItem* cbval1 = const_cast<QListWidgetItem*>(&other_ret);
            bool callback_ret = qlistwidgetitem_operatorlesser_callback(this, cbval1);
            return callback_ret;
        }
        return QListWidgetItem::operator<(other);
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qlistwidgetitem_read_callback) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;
            qlistwidgetitem_read_callback(this, cbval1);
            return;
        }
        QListWidgetItem::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qlistwidgetitem_write_callback) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;
            qlistwidgetitem_write_callback(this, cbval1);
            return;
        }
        QListWidgetItem::write(out);
    }
};

// This class is a subclass of QListWidget
class VirtualQListWidget final : public QListWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QListWidget_MetaObject_Callback = QMetaObject* (*)(const QListWidget*);
    using QListWidget_Metacast_Callback = void* (*)(QListWidget*, const char*);
    using QListWidget_Metacall_Callback = int (*)(QListWidget*, int, int, void**);
    using QListWidget_SetSelectionModel_Callback = void (*)(QListWidget*, QItemSelectionModel*);
    using QListWidget_DropEvent_Callback = void (*)(QListWidget*, QDropEvent*);
    using QListWidget_Event_Callback = bool (*)(QListWidget*, QEvent*);
    using QListWidget_MimeTypes_Callback = const char** (*)(const QListWidget*);
    using QListWidget_MimeData_Callback = QMimeData* (*)(const QListWidget*, libqt_list /* of QListWidgetItem* */);
    using QListWidget_DropMimeData_Callback = bool (*)(QListWidget*, int, QMimeData*, int);
    using QListWidget_SupportedDropActions_Callback = int (*)(const QListWidget*);
    using QListWidget_VisualRect_Callback = QRect* (*)(const QListWidget*, QModelIndex*);
    using QListWidget_ScrollTo_Callback = void (*)(QListWidget*, QModelIndex*, int);
    using QListWidget_IndexAt_Callback = QModelIndex* (*)(const QListWidget*, QPoint*);
    using QListWidget_DoItemsLayout_Callback = void (*)(QListWidget*);
    using QListWidget_Reset_Callback = void (*)(QListWidget*);
    using QListWidget_SetRootIndex_Callback = void (*)(QListWidget*, QModelIndex*);
    using QListWidget_ScrollContentsBy_Callback = void (*)(QListWidget*, int, int);
    using QListWidget_DataChanged_Callback = void (*)(QListWidget*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QListWidget_RowsInserted_Callback = void (*)(QListWidget*, QModelIndex*, int, int);
    using QListWidget_RowsAboutToBeRemoved_Callback = void (*)(QListWidget*, QModelIndex*, int, int);
    using QListWidget_MouseMoveEvent_Callback = void (*)(QListWidget*, QMouseEvent*);
    using QListWidget_MouseReleaseEvent_Callback = void (*)(QListWidget*, QMouseEvent*);
    using QListWidget_WheelEvent_Callback = void (*)(QListWidget*, QWheelEvent*);
    using QListWidget_TimerEvent_Callback = void (*)(QListWidget*, QTimerEvent*);
    using QListWidget_ResizeEvent_Callback = void (*)(QListWidget*, QResizeEvent*);
    using QListWidget_DragMoveEvent_Callback = void (*)(QListWidget*, QDragMoveEvent*);
    using QListWidget_DragLeaveEvent_Callback = void (*)(QListWidget*, QDragLeaveEvent*);
    using QListWidget_StartDrag_Callback = void (*)(QListWidget*, int);
    using QListWidget_InitViewItemOption_Callback = void (*)(const QListWidget*, QStyleOptionViewItem*);
    using QListWidget_PaintEvent_Callback = void (*)(QListWidget*, QPaintEvent*);
    using QListWidget_HorizontalOffset_Callback = int (*)(const QListWidget*);
    using QListWidget_VerticalOffset_Callback = int (*)(const QListWidget*);
    using QListWidget_MoveCursor_Callback = QModelIndex* (*)(QListWidget*, int, int);
    using QListWidget_SetSelection_Callback = void (*)(QListWidget*, QRect*, int);
    using QListWidget_VisualRegionForSelection_Callback = QRegion* (*)(const QListWidget*, QItemSelection*);
    using QListWidget_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)(const QListWidget*);
    using QListWidget_UpdateGeometries_Callback = void (*)(QListWidget*);
    using QListWidget_IsIndexHidden_Callback = bool (*)(const QListWidget*, QModelIndex*);
    using QListWidget_SelectionChanged_Callback = void (*)(QListWidget*, QItemSelection*, QItemSelection*);
    using QListWidget_CurrentChanged_Callback = void (*)(QListWidget*, QModelIndex*, QModelIndex*);
    using QListWidget_ViewportSizeHint_Callback = QSize* (*)(const QListWidget*);
    using QListWidget_KeyboardSearch_Callback = void (*)(QListWidget*, const char*);
    using QListWidget_SizeHintForRow_Callback = int (*)(const QListWidget*, int);
    using QListWidget_SizeHintForColumn_Callback = int (*)(const QListWidget*, int);
    using QListWidget_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QListWidget*, QModelIndex*);
    using QListWidget_InputMethodQuery_Callback = QVariant* (*)(const QListWidget*, int);
    using QListWidget_SelectAll_Callback = void (*)(QListWidget*);
    using QListWidget_UpdateEditorData_Callback = void (*)(QListWidget*);
    using QListWidget_UpdateEditorGeometries_Callback = void (*)(QListWidget*);
    using QListWidget_VerticalScrollbarAction_Callback = void (*)(QListWidget*, int);
    using QListWidget_HorizontalScrollbarAction_Callback = void (*)(QListWidget*, int);
    using QListWidget_VerticalScrollbarValueChanged_Callback = void (*)(QListWidget*, int);
    using QListWidget_HorizontalScrollbarValueChanged_Callback = void (*)(QListWidget*, int);
    using QListWidget_CloseEditor_Callback = void (*)(QListWidget*, QWidget*, int);
    using QListWidget_CommitData_Callback = void (*)(QListWidget*, QWidget*);
    using QListWidget_EditorDestroyed_Callback = void (*)(QListWidget*, QObject*);
    using QListWidget_Edit2_Callback = bool (*)(QListWidget*, QModelIndex*, int, QEvent*);
    using QListWidget_SelectionCommand_Callback = int (*)(const QListWidget*, QModelIndex*, QEvent*);
    using QListWidget_FocusNextPrevChild_Callback = bool (*)(QListWidget*, bool);
    using QListWidget_ViewportEvent_Callback = bool (*)(QListWidget*, QEvent*);
    using QListWidget_MousePressEvent_Callback = void (*)(QListWidget*, QMouseEvent*);
    using QListWidget_MouseDoubleClickEvent_Callback = void (*)(QListWidget*, QMouseEvent*);
    using QListWidget_DragEnterEvent_Callback = void (*)(QListWidget*, QDragEnterEvent*);
    using QListWidget_FocusInEvent_Callback = void (*)(QListWidget*, QFocusEvent*);
    using QListWidget_FocusOutEvent_Callback = void (*)(QListWidget*, QFocusEvent*);
    using QListWidget_KeyPressEvent_Callback = void (*)(QListWidget*, QKeyEvent*);
    using QListWidget_InputMethodEvent_Callback = void (*)(QListWidget*, QInputMethodEvent*);
    using QListWidget_EventFilter_Callback = bool (*)(QListWidget*, QObject*, QEvent*);
    using QListWidget_MinimumSizeHint_Callback = QSize* (*)(const QListWidget*);
    using QListWidget_SizeHint_Callback = QSize* (*)(const QListWidget*);
    using QListWidget_SetupViewport_Callback = void (*)(QListWidget*, QWidget*);
    using QListWidget_ContextMenuEvent_Callback = void (*)(QListWidget*, QContextMenuEvent*);
    using QListWidget_ChangeEvent_Callback = void (*)(QListWidget*, QEvent*);
    using QListWidget_InitStyleOption_Callback = void (*)(const QListWidget*, QStyleOptionFrame*);
    using QListWidget_DevType_Callback = int (*)(const QListWidget*);
    using QListWidget_SetVisible_Callback = void (*)(QListWidget*, bool);
    using QListWidget_HeightForWidth_Callback = int (*)(const QListWidget*, int);
    using QListWidget_HasHeightForWidth_Callback = bool (*)(const QListWidget*);
    using QListWidget_PaintEngine_Callback = QPaintEngine* (*)(const QListWidget*);
    using QListWidget_KeyReleaseEvent_Callback = void (*)(QListWidget*, QKeyEvent*);
    using QListWidget_EnterEvent_Callback = void (*)(QListWidget*, QEnterEvent*);
    using QListWidget_LeaveEvent_Callback = void (*)(QListWidget*, QEvent*);
    using QListWidget_MoveEvent_Callback = void (*)(QListWidget*, QMoveEvent*);
    using QListWidget_CloseEvent_Callback = void (*)(QListWidget*, QCloseEvent*);
    using QListWidget_TabletEvent_Callback = void (*)(QListWidget*, QTabletEvent*);
    using QListWidget_ActionEvent_Callback = void (*)(QListWidget*, QActionEvent*);
    using QListWidget_ShowEvent_Callback = void (*)(QListWidget*, QShowEvent*);
    using QListWidget_HideEvent_Callback = void (*)(QListWidget*, QHideEvent*);
    using QListWidget_NativeEvent_Callback = bool (*)(QListWidget*, libqt_string, void*, intptr_t*);
    using QListWidget_Metric_Callback = int (*)(const QListWidget*, int);
    using QListWidget_InitPainter_Callback = void (*)(const QListWidget*, QPainter*);
    using QListWidget_Redirected_Callback = QPaintDevice* (*)(const QListWidget*, QPoint*);
    using QListWidget_SharedPainter_Callback = QPainter* (*)(const QListWidget*);
    using QListWidget_ChildEvent_Callback = void (*)(QListWidget*, QChildEvent*);
    using QListWidget_CustomEvent_Callback = void (*)(QListWidget*, QEvent*);
    using QListWidget_ConnectNotify_Callback = void (*)(QListWidget*, QMetaMethod*);
    using QListWidget_DisconnectNotify_Callback = void (*)(QListWidget*, QMetaMethod*);
    using QListWidget::contentsSize;
    using QListWidget::create;
    using QListWidget::destroy;
    using QListWidget::dirtyRegionOffset;
    using QListWidget::doAutoScroll;
    using QListWidget::drawFrame;
    using QListWidget::dropIndicatorPosition;
    using QListWidget::executeDelayedItemsLayout;
    using QListWidget::focusNextChild;
    using QListWidget::focusPreviousChild;
    using QListWidget::getDecodedMetricF;
    using QListWidget::isSignalConnected;
    using QListWidget::receivers;
    using QListWidget::rectForIndex;
    using QListWidget::resizeContents;
    using QListWidget::scheduleDelayedItemsLayout;
    using QListWidget::scrollDirtyRegion;
    using QListWidget::sender;
    using QListWidget::senderSignalIndex;
    using QListWidget::setDirtyRegion;
    using QListWidget::setPositionForIndex;
    using QListWidget::setState;
    using QListWidget::setViewportMargins;
    using QListWidget::startAutoScroll;
    using QListWidget::state;
    using QListWidget::stopAutoScroll;
    using QListWidget::updateMicroFocus;
    using QListWidget::viewportMargins;

    // Instance callback storage
    QListWidget_MetaObject_Callback qlistwidget_metaobject_callback = nullptr;
    QListWidget_Metacast_Callback qlistwidget_metacast_callback = nullptr;
    QListWidget_Metacall_Callback qlistwidget_metacall_callback = nullptr;
    QListWidget_SetSelectionModel_Callback qlistwidget_setselectionmodel_callback = nullptr;
    QListWidget_DropEvent_Callback qlistwidget_dropevent_callback = nullptr;
    QListWidget_Event_Callback qlistwidget_event_callback = nullptr;
    QListWidget_MimeTypes_Callback qlistwidget_mimetypes_callback = nullptr;
    QListWidget_MimeData_Callback qlistwidget_mimedata_callback = nullptr;
    QListWidget_DropMimeData_Callback qlistwidget_dropmimedata_callback = nullptr;
    QListWidget_SupportedDropActions_Callback qlistwidget_supporteddropactions_callback = nullptr;
    QListWidget_VisualRect_Callback qlistwidget_visualrect_callback = nullptr;
    QListWidget_ScrollTo_Callback qlistwidget_scrollto_callback = nullptr;
    QListWidget_IndexAt_Callback qlistwidget_indexat_callback = nullptr;
    QListWidget_DoItemsLayout_Callback qlistwidget_doitemslayout_callback = nullptr;
    QListWidget_Reset_Callback qlistwidget_reset_callback = nullptr;
    QListWidget_SetRootIndex_Callback qlistwidget_setrootindex_callback = nullptr;
    QListWidget_ScrollContentsBy_Callback qlistwidget_scrollcontentsby_callback = nullptr;
    QListWidget_DataChanged_Callback qlistwidget_datachanged_callback = nullptr;
    QListWidget_RowsInserted_Callback qlistwidget_rowsinserted_callback = nullptr;
    QListWidget_RowsAboutToBeRemoved_Callback qlistwidget_rowsabouttoberemoved_callback = nullptr;
    QListWidget_MouseMoveEvent_Callback qlistwidget_mousemoveevent_callback = nullptr;
    QListWidget_MouseReleaseEvent_Callback qlistwidget_mousereleaseevent_callback = nullptr;
    QListWidget_WheelEvent_Callback qlistwidget_wheelevent_callback = nullptr;
    QListWidget_TimerEvent_Callback qlistwidget_timerevent_callback = nullptr;
    QListWidget_ResizeEvent_Callback qlistwidget_resizeevent_callback = nullptr;
    QListWidget_DragMoveEvent_Callback qlistwidget_dragmoveevent_callback = nullptr;
    QListWidget_DragLeaveEvent_Callback qlistwidget_dragleaveevent_callback = nullptr;
    QListWidget_StartDrag_Callback qlistwidget_startdrag_callback = nullptr;
    QListWidget_InitViewItemOption_Callback qlistwidget_initviewitemoption_callback = nullptr;
    QListWidget_PaintEvent_Callback qlistwidget_paintevent_callback = nullptr;
    QListWidget_HorizontalOffset_Callback qlistwidget_horizontaloffset_callback = nullptr;
    QListWidget_VerticalOffset_Callback qlistwidget_verticaloffset_callback = nullptr;
    QListWidget_MoveCursor_Callback qlistwidget_movecursor_callback = nullptr;
    QListWidget_SetSelection_Callback qlistwidget_setselection_callback = nullptr;
    QListWidget_VisualRegionForSelection_Callback qlistwidget_visualregionforselection_callback = nullptr;
    QListWidget_SelectedIndexes_Callback qlistwidget_selectedindexes_callback = nullptr;
    QListWidget_UpdateGeometries_Callback qlistwidget_updategeometries_callback = nullptr;
    QListWidget_IsIndexHidden_Callback qlistwidget_isindexhidden_callback = nullptr;
    QListWidget_SelectionChanged_Callback qlistwidget_selectionchanged_callback = nullptr;
    QListWidget_CurrentChanged_Callback qlistwidget_currentchanged_callback = nullptr;
    QListWidget_ViewportSizeHint_Callback qlistwidget_viewportsizehint_callback = nullptr;
    QListWidget_KeyboardSearch_Callback qlistwidget_keyboardsearch_callback = nullptr;
    QListWidget_SizeHintForRow_Callback qlistwidget_sizehintforrow_callback = nullptr;
    QListWidget_SizeHintForColumn_Callback qlistwidget_sizehintforcolumn_callback = nullptr;
    QListWidget_ItemDelegateForIndex_Callback qlistwidget_itemdelegateforindex_callback = nullptr;
    QListWidget_InputMethodQuery_Callback qlistwidget_inputmethodquery_callback = nullptr;
    QListWidget_SelectAll_Callback qlistwidget_selectall_callback = nullptr;
    QListWidget_UpdateEditorData_Callback qlistwidget_updateeditordata_callback = nullptr;
    QListWidget_UpdateEditorGeometries_Callback qlistwidget_updateeditorgeometries_callback = nullptr;
    QListWidget_VerticalScrollbarAction_Callback qlistwidget_verticalscrollbaraction_callback = nullptr;
    QListWidget_HorizontalScrollbarAction_Callback qlistwidget_horizontalscrollbaraction_callback = nullptr;
    QListWidget_VerticalScrollbarValueChanged_Callback qlistwidget_verticalscrollbarvaluechanged_callback = nullptr;
    QListWidget_HorizontalScrollbarValueChanged_Callback qlistwidget_horizontalscrollbarvaluechanged_callback = nullptr;
    QListWidget_CloseEditor_Callback qlistwidget_closeeditor_callback = nullptr;
    QListWidget_CommitData_Callback qlistwidget_commitdata_callback = nullptr;
    QListWidget_EditorDestroyed_Callback qlistwidget_editordestroyed_callback = nullptr;
    QListWidget_Edit2_Callback qlistwidget_edit2_callback = nullptr;
    QListWidget_SelectionCommand_Callback qlistwidget_selectioncommand_callback = nullptr;
    QListWidget_FocusNextPrevChild_Callback qlistwidget_focusnextprevchild_callback = nullptr;
    QListWidget_ViewportEvent_Callback qlistwidget_viewportevent_callback = nullptr;
    QListWidget_MousePressEvent_Callback qlistwidget_mousepressevent_callback = nullptr;
    QListWidget_MouseDoubleClickEvent_Callback qlistwidget_mousedoubleclickevent_callback = nullptr;
    QListWidget_DragEnterEvent_Callback qlistwidget_dragenterevent_callback = nullptr;
    QListWidget_FocusInEvent_Callback qlistwidget_focusinevent_callback = nullptr;
    QListWidget_FocusOutEvent_Callback qlistwidget_focusoutevent_callback = nullptr;
    QListWidget_KeyPressEvent_Callback qlistwidget_keypressevent_callback = nullptr;
    QListWidget_InputMethodEvent_Callback qlistwidget_inputmethodevent_callback = nullptr;
    QListWidget_EventFilter_Callback qlistwidget_eventfilter_callback = nullptr;
    QListWidget_MinimumSizeHint_Callback qlistwidget_minimumsizehint_callback = nullptr;
    QListWidget_SizeHint_Callback qlistwidget_sizehint_callback = nullptr;
    QListWidget_SetupViewport_Callback qlistwidget_setupviewport_callback = nullptr;
    QListWidget_ContextMenuEvent_Callback qlistwidget_contextmenuevent_callback = nullptr;
    QListWidget_ChangeEvent_Callback qlistwidget_changeevent_callback = nullptr;
    QListWidget_InitStyleOption_Callback qlistwidget_initstyleoption_callback = nullptr;
    QListWidget_DevType_Callback qlistwidget_devtype_callback = nullptr;
    QListWidget_SetVisible_Callback qlistwidget_setvisible_callback = nullptr;
    QListWidget_HeightForWidth_Callback qlistwidget_heightforwidth_callback = nullptr;
    QListWidget_HasHeightForWidth_Callback qlistwidget_hasheightforwidth_callback = nullptr;
    QListWidget_PaintEngine_Callback qlistwidget_paintengine_callback = nullptr;
    QListWidget_KeyReleaseEvent_Callback qlistwidget_keyreleaseevent_callback = nullptr;
    QListWidget_EnterEvent_Callback qlistwidget_enterevent_callback = nullptr;
    QListWidget_LeaveEvent_Callback qlistwidget_leaveevent_callback = nullptr;
    QListWidget_MoveEvent_Callback qlistwidget_moveevent_callback = nullptr;
    QListWidget_CloseEvent_Callback qlistwidget_closeevent_callback = nullptr;
    QListWidget_TabletEvent_Callback qlistwidget_tabletevent_callback = nullptr;
    QListWidget_ActionEvent_Callback qlistwidget_actionevent_callback = nullptr;
    QListWidget_ShowEvent_Callback qlistwidget_showevent_callback = nullptr;
    QListWidget_HideEvent_Callback qlistwidget_hideevent_callback = nullptr;
    QListWidget_NativeEvent_Callback qlistwidget_nativeevent_callback = nullptr;
    QListWidget_Metric_Callback qlistwidget_metric_callback = nullptr;
    QListWidget_InitPainter_Callback qlistwidget_initpainter_callback = nullptr;
    QListWidget_Redirected_Callback qlistwidget_redirected_callback = nullptr;
    QListWidget_SharedPainter_Callback qlistwidget_sharedpainter_callback = nullptr;
    QListWidget_ChildEvent_Callback qlistwidget_childevent_callback = nullptr;
    QListWidget_CustomEvent_Callback qlistwidget_customevent_callback = nullptr;
    QListWidget_ConnectNotify_Callback qlistwidget_connectnotify_callback = nullptr;
    QListWidget_DisconnectNotify_Callback qlistwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QListWidget {
        using QListWidget::actionEvent;
        using QListWidget::changeEvent;
        using QListWidget::childEvent;
        using QListWidget::closeEditor;
        using QListWidget::closeEvent;
        using QListWidget::commitData;
        using QListWidget::connectNotify;
        using QListWidget::contextMenuEvent;
        using QListWidget::currentChanged;
        using QListWidget::customEvent;
        using QListWidget::dataChanged;
        using QListWidget::disconnectNotify;
        using QListWidget::dragEnterEvent;
        using QListWidget::dragLeaveEvent;
        using QListWidget::dragMoveEvent;
        using QListWidget::dropEvent;
        using QListWidget::dropMimeData;
        using QListWidget::edit;
        using QListWidget::editorDestroyed;
        using QListWidget::enterEvent;
        using QListWidget::event;
        using QListWidget::eventFilter;
        using QListWidget::focusInEvent;
        using QListWidget::focusNextPrevChild;
        using QListWidget::focusOutEvent;
        using QListWidget::hideEvent;
        using QListWidget::horizontalOffset;
        using QListWidget::horizontalScrollbarAction;
        using QListWidget::horizontalScrollbarValueChanged;
        using QListWidget::initPainter;
        using QListWidget::initStyleOption;
        using QListWidget::initViewItemOption;
        using QListWidget::inputMethodEvent;
        using QListWidget::isIndexHidden;
        using QListWidget::keyPressEvent;
        using QListWidget::keyReleaseEvent;
        using QListWidget::leaveEvent;
        using QListWidget::metric;
        using QListWidget::mimeData;
        using QListWidget::mimeTypes;
        using QListWidget::mouseDoubleClickEvent;
        using QListWidget::mouseMoveEvent;
        using QListWidget::mousePressEvent;
        using QListWidget::mouseReleaseEvent;
        using QListWidget::moveCursor;
        using QListWidget::moveEvent;
        using QListWidget::nativeEvent;
        using QListWidget::paintEvent;
        using QListWidget::redirected;
        using QListWidget::resizeEvent;
        using QListWidget::rowsAboutToBeRemoved;
        using QListWidget::rowsInserted;
        using QListWidget::scrollContentsBy;
        using QListWidget::selectedIndexes;
        using QListWidget::selectionChanged;
        using QListWidget::selectionCommand;
        using QListWidget::setSelection;
        using QListWidget::sharedPainter;
        using QListWidget::showEvent;
        using QListWidget::startDrag;
        using QListWidget::supportedDropActions;
        using QListWidget::tabletEvent;
        using QListWidget::timerEvent;
        using QListWidget::updateEditorData;
        using QListWidget::updateEditorGeometries;
        using QListWidget::updateGeometries;
        using QListWidget::verticalOffset;
        using QListWidget::verticalScrollbarAction;
        using QListWidget::verticalScrollbarValueChanged;
        using QListWidget::viewportEvent;
        using QListWidget::viewportSizeHint;
        using QListWidget::visualRegionForSelection;
        using QListWidget::wheelEvent;
    };

    VirtualQListWidget(QWidget* parent) : QListWidget(parent) {};
    VirtualQListWidget() : QListWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlistwidget_metaobject_callback) {
            QMetaObject* callback_ret = qlistwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QListWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlistwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlistwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QListWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlistwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlistwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qlistwidget_setselectionmodel_callback) {
            QItemSelectionModel* cbval1 = selectionModel;
            qlistwidget_setselectionmodel_callback(this, cbval1);
            return;
        }
        QListWidget::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlistwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qlistwidget_dropevent_callback(this, cbval1);
            return;
        }
        QListWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlistwidget_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qlistwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QListWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qlistwidget_mimetypes_callback) {
            const char** callback_ret = qlistwidget_mimetypes_callback(this);
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
        return QListWidget::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QListWidgetItem*>& items) const override {
        if (qlistwidget_mimedata_callback) {
            const QList<QListWidgetItem*>& items_ret = items;
            // Convert QList<> from C++ memory to manually-managed C memory
            QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * (items_ret.size())));
            for (qsizetype i = 0; i < items_ret.size(); ++i) {
                items_arr[i] = items_ret[i];
            }
            libqt_list items_out;
            items_out.len = items_ret.size();
            items_out.data = static_cast<void*>(items_arr);
            libqt_list /* of QListWidgetItem* */ cbval1 = items_out;
            QMimeData* callback_ret = qlistwidget_mimedata_callback(this, cbval1);
            free(items_arr);
            return callback_ret;
        }
        return QListWidget::mimeData(items);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
        if (qlistwidget_dropmimedata_callback) {
            int cbval1 = index;
            QMimeData* cbval2 = (QMimeData*)data;
            int cbval3 = static_cast<int>(action);
            bool callback_ret = qlistwidget_dropmimedata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QListWidget::dropMimeData(index, data, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qlistwidget_supporteddropactions_callback) {
            int callback_ret = qlistwidget_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QListWidget::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qlistwidget_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = qlistwidget_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidget::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qlistwidget_scrollto_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);
            qlistwidget_scrollto_callback(this, cbval1, cbval2);
            return;
        }
        QListWidget::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qlistwidget_indexat_callback) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);
            QModelIndex* callback_ret = qlistwidget_indexat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidget::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qlistwidget_doitemslayout_callback) {
            qlistwidget_doitemslayout_callback(this);
            return;
        }
        QListWidget::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qlistwidget_reset_callback) {
            qlistwidget_reset_callback(this);
            return;
        }
        QListWidget::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qlistwidget_setrootindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            qlistwidget_setrootindex_callback(this, cbval1);
            return;
        }
        QListWidget::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qlistwidget_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qlistwidget_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QListWidget::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qlistwidget_datachanged_callback) {
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
            qlistwidget_datachanged_callback(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QListWidget::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qlistwidget_rowsinserted_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qlistwidget_rowsinserted_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QListWidget::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qlistwidget_rowsabouttoberemoved_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;
            qlistwidget_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QListWidget::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qlistwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qlistwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QListWidget::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qlistwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qlistwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QListWidget::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qlistwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qlistwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QListWidget::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qlistwidget_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qlistwidget_timerevent_callback(this, cbval1);
            return;
        }
        QListWidget::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qlistwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qlistwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QListWidget::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlistwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qlistwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QListWidget::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlistwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qlistwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QListWidget::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qlistwidget_startdrag_callback) {
            int cbval1 = static_cast<int>(supportedActions);
            qlistwidget_startdrag_callback(this, cbval1);
            return;
        }
        QListWidget::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qlistwidget_initviewitemoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            qlistwidget_initviewitemoption_callback(this, cbval1);
            return;
        }
        QListWidget::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qlistwidget_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qlistwidget_paintevent_callback(this, cbval1);
            return;
        }
        QListWidget::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qlistwidget_horizontaloffset_callback) {
            int callback_ret = qlistwidget_horizontaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qlistwidget_verticaloffset_callback) {
            int callback_ret = qlistwidget_verticaloffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qlistwidget_movecursor_callback) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);
            QModelIndex* callback_ret = qlistwidget_movecursor_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidget::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qlistwidget_setselection_callback) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);
            qlistwidget_setselection_callback(this, cbval1, cbval2);
            return;
        }
        QListWidget::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qlistwidget_visualregionforselection_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QRegion* callback_ret = qlistwidget_visualregionforselection_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidget::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qlistwidget_selectedindexes_callback) {
            libqt_list /* of QModelIndex* */ callback_ret = qlistwidget_selectedindexes_callback(this);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QListWidget::selectedIndexes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qlistwidget_updategeometries_callback) {
            qlistwidget_updategeometries_callback(this);
            return;
        }
        QListWidget::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qlistwidget_isindexhidden_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qlistwidget_isindexhidden_callback(this, cbval1);
            return callback_ret;
        }
        return QListWidget::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qlistwidget_selectionchanged_callback) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);
            qlistwidget_selectionchanged_callback(this, cbval1, cbval2);
            return;
        }
        QListWidget::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qlistwidget_currentchanged_callback) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);
            qlistwidget_currentchanged_callback(this, cbval1, cbval2);
            return;
        }
        QListWidget::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qlistwidget_viewportsizehint_callback) {
            QSize* callback_ret = qlistwidget_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidget::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qlistwidget_keyboardsearch_callback) {
            const auto search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;
            qlistwidget_keyboardsearch_callback(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QListWidget::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qlistwidget_sizehintforrow_callback) {
            int cbval1 = row;
            int callback_ret = qlistwidget_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qlistwidget_sizehintforcolumn_callback) {
            int cbval1 = column;
            int callback_ret = qlistwidget_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qlistwidget_itemdelegateforindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QAbstractItemDelegate* callback_ret = qlistwidget_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        }
        return QListWidget::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qlistwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qlistwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidget::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qlistwidget_selectall_callback) {
            qlistwidget_selectall_callback(this);
            return;
        }
        QListWidget::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qlistwidget_updateeditordata_callback) {
            qlistwidget_updateeditordata_callback(this);
            return;
        }
        QListWidget::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qlistwidget_updateeditorgeometries_callback) {
            qlistwidget_updateeditorgeometries_callback(this);
            return;
        }
        QListWidget::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qlistwidget_verticalscrollbaraction_callback) {
            int cbval1 = action;
            qlistwidget_verticalscrollbaraction_callback(this, cbval1);
            return;
        }
        QListWidget::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qlistwidget_horizontalscrollbaraction_callback) {
            int cbval1 = action;
            qlistwidget_horizontalscrollbaraction_callback(this, cbval1);
            return;
        }
        QListWidget::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qlistwidget_verticalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qlistwidget_verticalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QListWidget::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qlistwidget_horizontalscrollbarvaluechanged_callback) {
            int cbval1 = value;
            qlistwidget_horizontalscrollbarvaluechanged_callback(this, cbval1);
            return;
        }
        QListWidget::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qlistwidget_closeeditor_callback) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);
            qlistwidget_closeeditor_callback(this, cbval1, cbval2);
            return;
        }
        QListWidget::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qlistwidget_commitdata_callback) {
            QWidget* cbval1 = editor;
            qlistwidget_commitdata_callback(this, cbval1);
            return;
        }
        QListWidget::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qlistwidget_editordestroyed_callback) {
            QObject* cbval1 = editor;
            qlistwidget_editordestroyed_callback(this, cbval1);
            return;
        }
        QListWidget::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qlistwidget_edit2_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;
            bool callback_ret = qlistwidget_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QListWidget::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qlistwidget_selectioncommand_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;
            int callback_ret = qlistwidget_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QListWidget::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlistwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qlistwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QListWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qlistwidget_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlistwidget_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QListWidget::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlistwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qlistwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QListWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlistwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qlistwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QListWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlistwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qlistwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QListWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlistwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qlistwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QListWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlistwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qlistwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QListWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlistwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qlistwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QListWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qlistwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qlistwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QListWidget::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qlistwidget_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qlistwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QListWidget::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlistwidget_minimumsizehint_callback) {
            QSize* callback_ret = qlistwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlistwidget_sizehint_callback) {
            QSize* callback_ret = qlistwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QListWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qlistwidget_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qlistwidget_setupviewport_callback(this, cbval1);
            return;
        }
        QListWidget::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlistwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qlistwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QListWidget::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlistwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qlistwidget_changeevent_callback(this, cbval1);
            return;
        }
        QListWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlistwidget_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qlistwidget_initstyleoption_callback(this, cbval1);
            return;
        }
        QListWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlistwidget_devtype_callback) {
            int callback_ret = qlistwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlistwidget_setvisible_callback) {
            bool cbval1 = visible;
            qlistwidget_setvisible_callback(this, cbval1);
            return;
        }
        QListWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlistwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlistwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlistwidget_hasheightforwidth_callback) {
            bool callback_ret = qlistwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QListWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlistwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qlistwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QListWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlistwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qlistwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QListWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlistwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qlistwidget_enterevent_callback(this, cbval1);
            return;
        }
        QListWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlistwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qlistwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QListWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlistwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qlistwidget_moveevent_callback(this, cbval1);
            return;
        }
        QListWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlistwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qlistwidget_closeevent_callback(this, cbval1);
            return;
        }
        QListWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlistwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qlistwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QListWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlistwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qlistwidget_actionevent_callback(this, cbval1);
            return;
        }
        QListWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlistwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qlistwidget_showevent_callback(this, cbval1);
            return;
        }
        QListWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlistwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qlistwidget_hideevent_callback(this, cbval1);
            return;
        }
        QListWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlistwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qlistwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QListWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlistwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qlistwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlistwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qlistwidget_initpainter_callback(this, cbval1);
            return;
        }
        QListWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlistwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qlistwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QListWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlistwidget_sharedpainter_callback) {
            QPainter* callback_ret = qlistwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QListWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlistwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlistwidget_childevent_callback(this, cbval1);
            return;
        }
        QListWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlistwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qlistwidget_customevent_callback(this, cbval1);
            return;
        }
        QListWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlistwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlistwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QListWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlistwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlistwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QListWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void QListWidget_SuperDropEvent(QListWidget* self, QDropEvent* event);
    friend bool QListWidget_SuperEvent(QListWidget* self, QEvent* e);
    friend libqt_list /* of libqt_string */ QListWidget_SuperMimeTypes(const QListWidget* self);
    friend QMimeData* QListWidget_SuperMimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items);
    friend bool QListWidget_SuperDropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
    friend int QListWidget_SuperSupportedDropActions(const QListWidget* self);
    friend void QListWidget_SuperScrollContentsBy(QListWidget* self, int dx, int dy);
    friend void QListWidget_SuperDataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QListWidget_SuperRowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_SuperRowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_SuperMouseMoveEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_SuperMouseReleaseEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_SuperWheelEvent(QListWidget* self, QWheelEvent* e);
    friend void QListWidget_SuperTimerEvent(QListWidget* self, QTimerEvent* e);
    friend void QListWidget_SuperResizeEvent(QListWidget* self, QResizeEvent* e);
    friend void QListWidget_SuperDragMoveEvent(QListWidget* self, QDragMoveEvent* e);
    friend void QListWidget_SuperDragLeaveEvent(QListWidget* self, QDragLeaveEvent* e);
    friend void QListWidget_SuperStartDrag(QListWidget* self, int supportedActions);
    friend void QListWidget_SuperInitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option);
    friend void QListWidget_SuperPaintEvent(QListWidget* self, QPaintEvent* e);
    friend int QListWidget_SuperHorizontalOffset(const QListWidget* self);
    friend int QListWidget_SuperVerticalOffset(const QListWidget* self);
    friend QModelIndex* QListWidget_SuperMoveCursor(QListWidget* self, int cursorAction, int modifiers);
    friend void QListWidget_SuperSetSelection(QListWidget* self, const QRect* rect, int command);
    friend QRegion* QListWidget_SuperVisualRegionForSelection(const QListWidget* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QListWidget_SuperSelectedIndexes(const QListWidget* self);
    friend void QListWidget_SuperUpdateGeometries(QListWidget* self);
    friend bool QListWidget_SuperIsIndexHidden(const QListWidget* self, const QModelIndex* index);
    friend void QListWidget_SuperSelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QListWidget_SuperCurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* QListWidget_SuperViewportSizeHint(const QListWidget* self);
    friend void QListWidget_SuperUpdateEditorData(QListWidget* self);
    friend void QListWidget_SuperUpdateEditorGeometries(QListWidget* self);
    friend void QListWidget_SuperVerticalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_SuperHorizontalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_SuperVerticalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_SuperHorizontalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_SuperCloseEditor(QListWidget* self, QWidget* editor, int hint);
    friend void QListWidget_SuperCommitData(QListWidget* self, QWidget* editor);
    friend void QListWidget_SuperEditorDestroyed(QListWidget* self, QObject* editor);
    friend bool QListWidget_SuperEdit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QListWidget_SuperSelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event);
    friend bool QListWidget_SuperFocusNextPrevChild(QListWidget* self, bool next);
    friend bool QListWidget_SuperViewportEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_SuperMousePressEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_SuperMouseDoubleClickEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_SuperDragEnterEvent(QListWidget* self, QDragEnterEvent* event);
    friend void QListWidget_SuperFocusInEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_SuperFocusOutEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_SuperKeyPressEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_SuperInputMethodEvent(QListWidget* self, QInputMethodEvent* event);
    friend bool QListWidget_SuperEventFilter(QListWidget* self, QObject* object, QEvent* event);
    friend void QListWidget_SuperContextMenuEvent(QListWidget* self, QContextMenuEvent* param1);
    friend void QListWidget_SuperChangeEvent(QListWidget* self, QEvent* param1);
    friend void QListWidget_SuperInitStyleOption(const QListWidget* self, QStyleOptionFrame* option);
    friend void QListWidget_SuperKeyReleaseEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_SuperEnterEvent(QListWidget* self, QEnterEvent* event);
    friend void QListWidget_SuperLeaveEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_SuperMoveEvent(QListWidget* self, QMoveEvent* event);
    friend void QListWidget_SuperCloseEvent(QListWidget* self, QCloseEvent* event);
    friend void QListWidget_SuperTabletEvent(QListWidget* self, QTabletEvent* event);
    friend void QListWidget_SuperActionEvent(QListWidget* self, QActionEvent* event);
    friend void QListWidget_SuperShowEvent(QListWidget* self, QShowEvent* event);
    friend void QListWidget_SuperHideEvent(QListWidget* self, QHideEvent* event);
    friend bool QListWidget_SuperNativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QListWidget_SuperMetric(const QListWidget* self, int param1);
    friend void QListWidget_SuperInitPainter(const QListWidget* self, QPainter* painter);
    friend QPaintDevice* QListWidget_SuperRedirected(const QListWidget* self, QPoint* offset);
    friend QPainter* QListWidget_SuperSharedPainter(const QListWidget* self);
    friend void QListWidget_SuperChildEvent(QListWidget* self, QChildEvent* event);
    friend void QListWidget_SuperCustomEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_SuperConnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_SuperDisconnectNotify(QListWidget* self, const QMetaMethod* signal);
};

#endif
