#pragma once
#ifndef SRCC_LIBVIRTUALQLISTWIDGET_H
#define SRCC_LIBVIRTUALQLISTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QListWidgetItem so that we can call protected methods
class VirtualQListWidgetItem final : public QListWidgetItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQListWidgetItem = true;

    // Virtual class public types (including callbacks)
    using QListWidgetItem_Clone_Callback = QListWidgetItem* (*)();
    using QListWidgetItem_Data_Callback = QVariant* (*)(const QListWidgetItem*, int);
    using QListWidgetItem_SetData_Callback = void (*)(QListWidgetItem*, int, QVariant*);
    using QListWidgetItem_OperatorLesser_Callback = bool (*)(const QListWidgetItem*, QListWidgetItem*);
    using QListWidgetItem_Read_Callback = void (*)(QListWidgetItem*, QDataStream*);
    using QListWidgetItem_Write_Callback = void (*)(const QListWidgetItem*, QDataStream*);

  protected:
    // Instance callback storage
    QListWidgetItem_Clone_Callback qlistwidgetitem_clone_callback = nullptr;
    QListWidgetItem_Data_Callback qlistwidgetitem_data_callback = nullptr;
    QListWidgetItem_SetData_Callback qlistwidgetitem_setdata_callback = nullptr;
    QListWidgetItem_OperatorLesser_Callback qlistwidgetitem_operatorlesser_callback = nullptr;
    QListWidgetItem_Read_Callback qlistwidgetitem_read_callback = nullptr;
    QListWidgetItem_Write_Callback qlistwidgetitem_write_callback = nullptr;

    // Instance base flags
    mutable bool qlistwidgetitem_clone_isbase = false;
    mutable bool qlistwidgetitem_data_isbase = false;
    mutable bool qlistwidgetitem_setdata_isbase = false;
    mutable bool qlistwidgetitem_operatorlesser_isbase = false;
    mutable bool qlistwidgetitem_read_isbase = false;
    mutable bool qlistwidgetitem_write_isbase = false;

  public:
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

    // Callback setters
    inline void setQListWidgetItem_Clone_Callback(QListWidgetItem_Clone_Callback cb) { qlistwidgetitem_clone_callback = cb; }
    inline void setQListWidgetItem_Data_Callback(QListWidgetItem_Data_Callback cb) { qlistwidgetitem_data_callback = cb; }
    inline void setQListWidgetItem_SetData_Callback(QListWidgetItem_SetData_Callback cb) { qlistwidgetitem_setdata_callback = cb; }
    inline void setQListWidgetItem_OperatorLesser_Callback(QListWidgetItem_OperatorLesser_Callback cb) { qlistwidgetitem_operatorlesser_callback = cb; }
    inline void setQListWidgetItem_Read_Callback(QListWidgetItem_Read_Callback cb) { qlistwidgetitem_read_callback = cb; }
    inline void setQListWidgetItem_Write_Callback(QListWidgetItem_Write_Callback cb) { qlistwidgetitem_write_callback = cb; }

    // Base flag setters
    inline void setQListWidgetItem_Clone_IsBase(bool value) const { qlistwidgetitem_clone_isbase = value; }
    inline void setQListWidgetItem_Data_IsBase(bool value) const { qlistwidgetitem_data_isbase = value; }
    inline void setQListWidgetItem_SetData_IsBase(bool value) const { qlistwidgetitem_setdata_isbase = value; }
    inline void setQListWidgetItem_OperatorLesser_IsBase(bool value) const { qlistwidgetitem_operatorlesser_isbase = value; }
    inline void setQListWidgetItem_Read_IsBase(bool value) const { qlistwidgetitem_read_isbase = value; }
    inline void setQListWidgetItem_Write_IsBase(bool value) const { qlistwidgetitem_write_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QListWidgetItem* clone() const override {
        if (qlistwidgetitem_clone_isbase) {
            qlistwidgetitem_clone_isbase = false;
            return QListWidgetItem::clone();
        }
        auto clone_cb = qlistwidgetitem_clone_callback;
        if (clone_cb) {
            QListWidgetItem* callback_ret = clone_cb();
            return callback_ret;
        }
        return QListWidgetItem::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int role) const override {
        if (qlistwidgetitem_data_isbase) {
            qlistwidgetitem_data_isbase = false;
            return QListWidgetItem::data(role);
        }
        auto data_cb = qlistwidgetitem_data_callback;
        if (data_cb) {
            int cbval1 = role;

            QVariant* callback_ret = data_cb(this, cbval1);
            return *callback_ret;
        }
        return QListWidgetItem::data(role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(int role, const QVariant& value) override {
        if (qlistwidgetitem_setdata_isbase) {
            qlistwidgetitem_setdata_isbase = false;
            QListWidgetItem::setData(role, value);
            return;
        }
        auto setdata_cb = qlistwidgetitem_setdata_callback;
        if (setdata_cb) {
            int cbval1 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            setdata_cb(this, cbval1, cbval2);
            return;
        }
        QListWidgetItem::setData(role, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QListWidgetItem& other) const override {
        if (qlistwidgetitem_operatorlesser_isbase) {
            qlistwidgetitem_operatorlesser_isbase = false;
            return QListWidgetItem::operator<(other);
        }
        auto operatorlesser_cb = qlistwidgetitem_operatorlesser_callback;
        if (operatorlesser_cb) {
            const QListWidgetItem& other_ret = other;
            // Cast returned reference into pointer
            QListWidgetItem* cbval1 = const_cast<QListWidgetItem*>(&other_ret);

            bool callback_ret = operatorlesser_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidgetItem::operator<(other);
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qlistwidgetitem_read_isbase) {
            qlistwidgetitem_read_isbase = false;
            QListWidgetItem::read(in);
            return;
        }
        auto read_cb = qlistwidgetitem_read_callback;
        if (read_cb) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;

            read_cb(this, cbval1);
            return;
        }
        QListWidgetItem::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qlistwidgetitem_write_isbase) {
            qlistwidgetitem_write_isbase = false;
            QListWidgetItem::write(out);
            return;
        }
        auto write_cb = qlistwidgetitem_write_callback;
        if (write_cb) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;

            write_cb(this, cbval1);
            return;
        }
        QListWidgetItem::write(out);
    }
};

// This class is a subclass of QListWidget so that we can call protected methods
class VirtualQListWidget final : public QListWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQListWidget = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QListWidget_MetaObject_Callback = QMetaObject* (*)();
    using QListWidget_Metacast_Callback = void* (*)(QListWidget*, const char*);
    using QListWidget_Metacall_Callback = int (*)(QListWidget*, int, int, void**);
    using QListWidget_SetSelectionModel_Callback = void (*)(QListWidget*, QItemSelectionModel*);
    using QListWidget_DropEvent_Callback = void (*)(QListWidget*, QDropEvent*);
    using QListWidget_Event_Callback = bool (*)(QListWidget*, QEvent*);
    using QListWidget_MimeTypes_Callback = const char** (*)();
    using QListWidget_MimeData_Callback = QMimeData* (*)(const QListWidget*, libqt_list /* of QListWidgetItem* */);
    using QListWidget_DropMimeData_Callback = bool (*)(QListWidget*, int, QMimeData*, int);
    using QListWidget_SupportedDropActions_Callback = int (*)();
    using QListWidget_VisualRect_Callback = QRect* (*)(const QListWidget*, QModelIndex*);
    using QListWidget_ScrollTo_Callback = void (*)(QListWidget*, QModelIndex*, int);
    using QListWidget_IndexAt_Callback = QModelIndex* (*)(const QListWidget*, QPoint*);
    using QListWidget_DoItemsLayout_Callback = void (*)();
    using QListWidget_Reset_Callback = void (*)();
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
    using QListWidget_HorizontalOffset_Callback = int (*)();
    using QListWidget_VerticalOffset_Callback = int (*)();
    using QListWidget_MoveCursor_Callback = QModelIndex* (*)(QListWidget*, int, int);
    using QListWidget_SetSelection_Callback = void (*)(QListWidget*, QRect*, int);
    using QListWidget_VisualRegionForSelection_Callback = QRegion* (*)(const QListWidget*, QItemSelection*);
    using QListWidget_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QListWidget_UpdateGeometries_Callback = void (*)();
    using QListWidget_IsIndexHidden_Callback = bool (*)(const QListWidget*, QModelIndex*);
    using QListWidget_SelectionChanged_Callback = void (*)(QListWidget*, QItemSelection*, QItemSelection*);
    using QListWidget_CurrentChanged_Callback = void (*)(QListWidget*, QModelIndex*, QModelIndex*);
    using QListWidget_ViewportSizeHint_Callback = QSize* (*)();
    using QListWidget_KeyboardSearch_Callback = void (*)(QListWidget*, const char*);
    using QListWidget_SizeHintForRow_Callback = int (*)(const QListWidget*, int);
    using QListWidget_SizeHintForColumn_Callback = int (*)(const QListWidget*, int);
    using QListWidget_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QListWidget*, QModelIndex*);
    using QListWidget_InputMethodQuery_Callback = QVariant* (*)(const QListWidget*, int);
    using QListWidget_SelectAll_Callback = void (*)();
    using QListWidget_UpdateEditorData_Callback = void (*)();
    using QListWidget_UpdateEditorGeometries_Callback = void (*)();
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
    using QListWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QListWidget_SizeHint_Callback = QSize* (*)();
    using QListWidget_SetupViewport_Callback = void (*)(QListWidget*, QWidget*);
    using QListWidget_ContextMenuEvent_Callback = void (*)(QListWidget*, QContextMenuEvent*);
    using QListWidget_ChangeEvent_Callback = void (*)(QListWidget*, QEvent*);
    using QListWidget_InitStyleOption_Callback = void (*)(const QListWidget*, QStyleOptionFrame*);
    using QListWidget_DevType_Callback = int (*)();
    using QListWidget_SetVisible_Callback = void (*)(QListWidget*, bool);
    using QListWidget_HeightForWidth_Callback = int (*)(const QListWidget*, int);
    using QListWidget_HasHeightForWidth_Callback = bool (*)();
    using QListWidget_PaintEngine_Callback = QPaintEngine* (*)();
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
    using QListWidget_SharedPainter_Callback = QPainter* (*)();
    using QListWidget_ChildEvent_Callback = void (*)(QListWidget*, QChildEvent*);
    using QListWidget_CustomEvent_Callback = void (*)(QListWidget*, QEvent*);
    using QListWidget_ConnectNotify_Callback = void (*)(QListWidget*, QMetaMethod*);
    using QListWidget_DisconnectNotify_Callback = void (*)(QListWidget*, QMetaMethod*);
    using QListWidget_ResizeContents_Callback = void (*)(QListWidget*, int, int);
    using QListWidget_ContentsSize_Callback = QSize* (*)();
    using QListWidget_RectForIndex_Callback = QRect* (*)(const QListWidget*, QModelIndex*);
    using QListWidget_SetPositionForIndex_Callback = void (*)(QListWidget*, QPoint*, QModelIndex*);
    using QListWidget_State_Callback = int (*)();
    using QListWidget_SetState_Callback = void (*)(QListWidget*, int);
    using QListWidget_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QListWidget_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QListWidget_SetDirtyRegion_Callback = void (*)(QListWidget*, QRegion*);
    using QListWidget_ScrollDirtyRegion_Callback = void (*)(QListWidget*, int, int);
    using QListWidget_DirtyRegionOffset_Callback = QPoint* (*)();
    using QListWidget_StartAutoScroll_Callback = void (*)();
    using QListWidget_StopAutoScroll_Callback = void (*)();
    using QListWidget_DoAutoScroll_Callback = void (*)();
    using QListWidget_DropIndicatorPosition_Callback = int (*)();
    using QListWidget_SetViewportMargins_Callback = void (*)(QListWidget*, int, int, int, int);
    using QListWidget_ViewportMargins_Callback = QMargins* (*)();
    using QListWidget_DrawFrame_Callback = void (*)(QListWidget*, QPainter*);
    using QListWidget_UpdateMicroFocus_Callback = void (*)();
    using QListWidget_Create_Callback = void (*)();
    using QListWidget_Destroy_Callback = void (*)();
    using QListWidget_FocusNextChild_Callback = bool (*)();
    using QListWidget_FocusPreviousChild_Callback = bool (*)();
    using QListWidget_Sender_Callback = QObject* (*)();
    using QListWidget_SenderSignalIndex_Callback = int (*)();
    using QListWidget_Receivers_Callback = int (*)(const QListWidget*, const char*);
    using QListWidget_IsSignalConnected_Callback = bool (*)(const QListWidget*, QMetaMethod*);
    using QListWidget_GetDecodedMetricF_Callback = double (*)(const QListWidget*, int, int);

  protected:
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
    QListWidget_ResizeContents_Callback qlistwidget_resizecontents_callback = nullptr;
    QListWidget_ContentsSize_Callback qlistwidget_contentssize_callback = nullptr;
    QListWidget_RectForIndex_Callback qlistwidget_rectforindex_callback = nullptr;
    QListWidget_SetPositionForIndex_Callback qlistwidget_setpositionforindex_callback = nullptr;
    QListWidget_State_Callback qlistwidget_state_callback = nullptr;
    QListWidget_SetState_Callback qlistwidget_setstate_callback = nullptr;
    QListWidget_ScheduleDelayedItemsLayout_Callback qlistwidget_scheduledelayeditemslayout_callback = nullptr;
    QListWidget_ExecuteDelayedItemsLayout_Callback qlistwidget_executedelayeditemslayout_callback = nullptr;
    QListWidget_SetDirtyRegion_Callback qlistwidget_setdirtyregion_callback = nullptr;
    QListWidget_ScrollDirtyRegion_Callback qlistwidget_scrolldirtyregion_callback = nullptr;
    QListWidget_DirtyRegionOffset_Callback qlistwidget_dirtyregionoffset_callback = nullptr;
    QListWidget_StartAutoScroll_Callback qlistwidget_startautoscroll_callback = nullptr;
    QListWidget_StopAutoScroll_Callback qlistwidget_stopautoscroll_callback = nullptr;
    QListWidget_DoAutoScroll_Callback qlistwidget_doautoscroll_callback = nullptr;
    QListWidget_DropIndicatorPosition_Callback qlistwidget_dropindicatorposition_callback = nullptr;
    QListWidget_SetViewportMargins_Callback qlistwidget_setviewportmargins_callback = nullptr;
    QListWidget_ViewportMargins_Callback qlistwidget_viewportmargins_callback = nullptr;
    QListWidget_DrawFrame_Callback qlistwidget_drawframe_callback = nullptr;
    QListWidget_UpdateMicroFocus_Callback qlistwidget_updatemicrofocus_callback = nullptr;
    QListWidget_Create_Callback qlistwidget_create_callback = nullptr;
    QListWidget_Destroy_Callback qlistwidget_destroy_callback = nullptr;
    QListWidget_FocusNextChild_Callback qlistwidget_focusnextchild_callback = nullptr;
    QListWidget_FocusPreviousChild_Callback qlistwidget_focuspreviouschild_callback = nullptr;
    QListWidget_Sender_Callback qlistwidget_sender_callback = nullptr;
    QListWidget_SenderSignalIndex_Callback qlistwidget_sendersignalindex_callback = nullptr;
    QListWidget_Receivers_Callback qlistwidget_receivers_callback = nullptr;
    QListWidget_IsSignalConnected_Callback qlistwidget_issignalconnected_callback = nullptr;
    QListWidget_GetDecodedMetricF_Callback qlistwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qlistwidget_metaobject_isbase = false;
    mutable bool qlistwidget_metacast_isbase = false;
    mutable bool qlistwidget_metacall_isbase = false;
    mutable bool qlistwidget_setselectionmodel_isbase = false;
    mutable bool qlistwidget_dropevent_isbase = false;
    mutable bool qlistwidget_event_isbase = false;
    mutable bool qlistwidget_mimetypes_isbase = false;
    mutable bool qlistwidget_mimedata_isbase = false;
    mutable bool qlistwidget_dropmimedata_isbase = false;
    mutable bool qlistwidget_supporteddropactions_isbase = false;
    mutable bool qlistwidget_visualrect_isbase = false;
    mutable bool qlistwidget_scrollto_isbase = false;
    mutable bool qlistwidget_indexat_isbase = false;
    mutable bool qlistwidget_doitemslayout_isbase = false;
    mutable bool qlistwidget_reset_isbase = false;
    mutable bool qlistwidget_setrootindex_isbase = false;
    mutable bool qlistwidget_scrollcontentsby_isbase = false;
    mutable bool qlistwidget_datachanged_isbase = false;
    mutable bool qlistwidget_rowsinserted_isbase = false;
    mutable bool qlistwidget_rowsabouttoberemoved_isbase = false;
    mutable bool qlistwidget_mousemoveevent_isbase = false;
    mutable bool qlistwidget_mousereleaseevent_isbase = false;
    mutable bool qlistwidget_wheelevent_isbase = false;
    mutable bool qlistwidget_timerevent_isbase = false;
    mutable bool qlistwidget_resizeevent_isbase = false;
    mutable bool qlistwidget_dragmoveevent_isbase = false;
    mutable bool qlistwidget_dragleaveevent_isbase = false;
    mutable bool qlistwidget_startdrag_isbase = false;
    mutable bool qlistwidget_initviewitemoption_isbase = false;
    mutable bool qlistwidget_paintevent_isbase = false;
    mutable bool qlistwidget_horizontaloffset_isbase = false;
    mutable bool qlistwidget_verticaloffset_isbase = false;
    mutable bool qlistwidget_movecursor_isbase = false;
    mutable bool qlistwidget_setselection_isbase = false;
    mutable bool qlistwidget_visualregionforselection_isbase = false;
    mutable bool qlistwidget_selectedindexes_isbase = false;
    mutable bool qlistwidget_updategeometries_isbase = false;
    mutable bool qlistwidget_isindexhidden_isbase = false;
    mutable bool qlistwidget_selectionchanged_isbase = false;
    mutable bool qlistwidget_currentchanged_isbase = false;
    mutable bool qlistwidget_viewportsizehint_isbase = false;
    mutable bool qlistwidget_keyboardsearch_isbase = false;
    mutable bool qlistwidget_sizehintforrow_isbase = false;
    mutable bool qlistwidget_sizehintforcolumn_isbase = false;
    mutable bool qlistwidget_itemdelegateforindex_isbase = false;
    mutable bool qlistwidget_inputmethodquery_isbase = false;
    mutable bool qlistwidget_selectall_isbase = false;
    mutable bool qlistwidget_updateeditordata_isbase = false;
    mutable bool qlistwidget_updateeditorgeometries_isbase = false;
    mutable bool qlistwidget_verticalscrollbaraction_isbase = false;
    mutable bool qlistwidget_horizontalscrollbaraction_isbase = false;
    mutable bool qlistwidget_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qlistwidget_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qlistwidget_closeeditor_isbase = false;
    mutable bool qlistwidget_commitdata_isbase = false;
    mutable bool qlistwidget_editordestroyed_isbase = false;
    mutable bool qlistwidget_edit2_isbase = false;
    mutable bool qlistwidget_selectioncommand_isbase = false;
    mutable bool qlistwidget_focusnextprevchild_isbase = false;
    mutable bool qlistwidget_viewportevent_isbase = false;
    mutable bool qlistwidget_mousepressevent_isbase = false;
    mutable bool qlistwidget_mousedoubleclickevent_isbase = false;
    mutable bool qlistwidget_dragenterevent_isbase = false;
    mutable bool qlistwidget_focusinevent_isbase = false;
    mutable bool qlistwidget_focusoutevent_isbase = false;
    mutable bool qlistwidget_keypressevent_isbase = false;
    mutable bool qlistwidget_inputmethodevent_isbase = false;
    mutable bool qlistwidget_eventfilter_isbase = false;
    mutable bool qlistwidget_minimumsizehint_isbase = false;
    mutable bool qlistwidget_sizehint_isbase = false;
    mutable bool qlistwidget_setupviewport_isbase = false;
    mutable bool qlistwidget_contextmenuevent_isbase = false;
    mutable bool qlistwidget_changeevent_isbase = false;
    mutable bool qlistwidget_initstyleoption_isbase = false;
    mutable bool qlistwidget_devtype_isbase = false;
    mutable bool qlistwidget_setvisible_isbase = false;
    mutable bool qlistwidget_heightforwidth_isbase = false;
    mutable bool qlistwidget_hasheightforwidth_isbase = false;
    mutable bool qlistwidget_paintengine_isbase = false;
    mutable bool qlistwidget_keyreleaseevent_isbase = false;
    mutable bool qlistwidget_enterevent_isbase = false;
    mutable bool qlistwidget_leaveevent_isbase = false;
    mutable bool qlistwidget_moveevent_isbase = false;
    mutable bool qlistwidget_closeevent_isbase = false;
    mutable bool qlistwidget_tabletevent_isbase = false;
    mutable bool qlistwidget_actionevent_isbase = false;
    mutable bool qlistwidget_showevent_isbase = false;
    mutable bool qlistwidget_hideevent_isbase = false;
    mutable bool qlistwidget_nativeevent_isbase = false;
    mutable bool qlistwidget_metric_isbase = false;
    mutable bool qlistwidget_initpainter_isbase = false;
    mutable bool qlistwidget_redirected_isbase = false;
    mutable bool qlistwidget_sharedpainter_isbase = false;
    mutable bool qlistwidget_childevent_isbase = false;
    mutable bool qlistwidget_customevent_isbase = false;
    mutable bool qlistwidget_connectnotify_isbase = false;
    mutable bool qlistwidget_disconnectnotify_isbase = false;
    mutable bool qlistwidget_resizecontents_isbase = false;
    mutable bool qlistwidget_contentssize_isbase = false;
    mutable bool qlistwidget_rectforindex_isbase = false;
    mutable bool qlistwidget_setpositionforindex_isbase = false;
    mutable bool qlistwidget_state_isbase = false;
    mutable bool qlistwidget_setstate_isbase = false;
    mutable bool qlistwidget_scheduledelayeditemslayout_isbase = false;
    mutable bool qlistwidget_executedelayeditemslayout_isbase = false;
    mutable bool qlistwidget_setdirtyregion_isbase = false;
    mutable bool qlistwidget_scrolldirtyregion_isbase = false;
    mutable bool qlistwidget_dirtyregionoffset_isbase = false;
    mutable bool qlistwidget_startautoscroll_isbase = false;
    mutable bool qlistwidget_stopautoscroll_isbase = false;
    mutable bool qlistwidget_doautoscroll_isbase = false;
    mutable bool qlistwidget_dropindicatorposition_isbase = false;
    mutable bool qlistwidget_setviewportmargins_isbase = false;
    mutable bool qlistwidget_viewportmargins_isbase = false;
    mutable bool qlistwidget_drawframe_isbase = false;
    mutable bool qlistwidget_updatemicrofocus_isbase = false;
    mutable bool qlistwidget_create_isbase = false;
    mutable bool qlistwidget_destroy_isbase = false;
    mutable bool qlistwidget_focusnextchild_isbase = false;
    mutable bool qlistwidget_focuspreviouschild_isbase = false;
    mutable bool qlistwidget_sender_isbase = false;
    mutable bool qlistwidget_sendersignalindex_isbase = false;
    mutable bool qlistwidget_receivers_isbase = false;
    mutable bool qlistwidget_issignalconnected_isbase = false;
    mutable bool qlistwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualQListWidget(QWidget* parent) : QListWidget(parent) {};
    VirtualQListWidget() : QListWidget() {};

    // Callback setters
    inline void setQListWidget_MetaObject_Callback(QListWidget_MetaObject_Callback cb) { qlistwidget_metaobject_callback = cb; }
    inline void setQListWidget_Metacast_Callback(QListWidget_Metacast_Callback cb) { qlistwidget_metacast_callback = cb; }
    inline void setQListWidget_Metacall_Callback(QListWidget_Metacall_Callback cb) { qlistwidget_metacall_callback = cb; }
    inline void setQListWidget_SetSelectionModel_Callback(QListWidget_SetSelectionModel_Callback cb) { qlistwidget_setselectionmodel_callback = cb; }
    inline void setQListWidget_DropEvent_Callback(QListWidget_DropEvent_Callback cb) { qlistwidget_dropevent_callback = cb; }
    inline void setQListWidget_Event_Callback(QListWidget_Event_Callback cb) { qlistwidget_event_callback = cb; }
    inline void setQListWidget_MimeTypes_Callback(QListWidget_MimeTypes_Callback cb) { qlistwidget_mimetypes_callback = cb; }
    inline void setQListWidget_MimeData_Callback(QListWidget_MimeData_Callback cb) { qlistwidget_mimedata_callback = cb; }
    inline void setQListWidget_DropMimeData_Callback(QListWidget_DropMimeData_Callback cb) { qlistwidget_dropmimedata_callback = cb; }
    inline void setQListWidget_SupportedDropActions_Callback(QListWidget_SupportedDropActions_Callback cb) { qlistwidget_supporteddropactions_callback = cb; }
    inline void setQListWidget_VisualRect_Callback(QListWidget_VisualRect_Callback cb) { qlistwidget_visualrect_callback = cb; }
    inline void setQListWidget_ScrollTo_Callback(QListWidget_ScrollTo_Callback cb) { qlistwidget_scrollto_callback = cb; }
    inline void setQListWidget_IndexAt_Callback(QListWidget_IndexAt_Callback cb) { qlistwidget_indexat_callback = cb; }
    inline void setQListWidget_DoItemsLayout_Callback(QListWidget_DoItemsLayout_Callback cb) { qlistwidget_doitemslayout_callback = cb; }
    inline void setQListWidget_Reset_Callback(QListWidget_Reset_Callback cb) { qlistwidget_reset_callback = cb; }
    inline void setQListWidget_SetRootIndex_Callback(QListWidget_SetRootIndex_Callback cb) { qlistwidget_setrootindex_callback = cb; }
    inline void setQListWidget_ScrollContentsBy_Callback(QListWidget_ScrollContentsBy_Callback cb) { qlistwidget_scrollcontentsby_callback = cb; }
    inline void setQListWidget_DataChanged_Callback(QListWidget_DataChanged_Callback cb) { qlistwidget_datachanged_callback = cb; }
    inline void setQListWidget_RowsInserted_Callback(QListWidget_RowsInserted_Callback cb) { qlistwidget_rowsinserted_callback = cb; }
    inline void setQListWidget_RowsAboutToBeRemoved_Callback(QListWidget_RowsAboutToBeRemoved_Callback cb) { qlistwidget_rowsabouttoberemoved_callback = cb; }
    inline void setQListWidget_MouseMoveEvent_Callback(QListWidget_MouseMoveEvent_Callback cb) { qlistwidget_mousemoveevent_callback = cb; }
    inline void setQListWidget_MouseReleaseEvent_Callback(QListWidget_MouseReleaseEvent_Callback cb) { qlistwidget_mousereleaseevent_callback = cb; }
    inline void setQListWidget_WheelEvent_Callback(QListWidget_WheelEvent_Callback cb) { qlistwidget_wheelevent_callback = cb; }
    inline void setQListWidget_TimerEvent_Callback(QListWidget_TimerEvent_Callback cb) { qlistwidget_timerevent_callback = cb; }
    inline void setQListWidget_ResizeEvent_Callback(QListWidget_ResizeEvent_Callback cb) { qlistwidget_resizeevent_callback = cb; }
    inline void setQListWidget_DragMoveEvent_Callback(QListWidget_DragMoveEvent_Callback cb) { qlistwidget_dragmoveevent_callback = cb; }
    inline void setQListWidget_DragLeaveEvent_Callback(QListWidget_DragLeaveEvent_Callback cb) { qlistwidget_dragleaveevent_callback = cb; }
    inline void setQListWidget_StartDrag_Callback(QListWidget_StartDrag_Callback cb) { qlistwidget_startdrag_callback = cb; }
    inline void setQListWidget_InitViewItemOption_Callback(QListWidget_InitViewItemOption_Callback cb) { qlistwidget_initviewitemoption_callback = cb; }
    inline void setQListWidget_PaintEvent_Callback(QListWidget_PaintEvent_Callback cb) { qlistwidget_paintevent_callback = cb; }
    inline void setQListWidget_HorizontalOffset_Callback(QListWidget_HorizontalOffset_Callback cb) { qlistwidget_horizontaloffset_callback = cb; }
    inline void setQListWidget_VerticalOffset_Callback(QListWidget_VerticalOffset_Callback cb) { qlistwidget_verticaloffset_callback = cb; }
    inline void setQListWidget_MoveCursor_Callback(QListWidget_MoveCursor_Callback cb) { qlistwidget_movecursor_callback = cb; }
    inline void setQListWidget_SetSelection_Callback(QListWidget_SetSelection_Callback cb) { qlistwidget_setselection_callback = cb; }
    inline void setQListWidget_VisualRegionForSelection_Callback(QListWidget_VisualRegionForSelection_Callback cb) { qlistwidget_visualregionforselection_callback = cb; }
    inline void setQListWidget_SelectedIndexes_Callback(QListWidget_SelectedIndexes_Callback cb) { qlistwidget_selectedindexes_callback = cb; }
    inline void setQListWidget_UpdateGeometries_Callback(QListWidget_UpdateGeometries_Callback cb) { qlistwidget_updategeometries_callback = cb; }
    inline void setQListWidget_IsIndexHidden_Callback(QListWidget_IsIndexHidden_Callback cb) { qlistwidget_isindexhidden_callback = cb; }
    inline void setQListWidget_SelectionChanged_Callback(QListWidget_SelectionChanged_Callback cb) { qlistwidget_selectionchanged_callback = cb; }
    inline void setQListWidget_CurrentChanged_Callback(QListWidget_CurrentChanged_Callback cb) { qlistwidget_currentchanged_callback = cb; }
    inline void setQListWidget_ViewportSizeHint_Callback(QListWidget_ViewportSizeHint_Callback cb) { qlistwidget_viewportsizehint_callback = cb; }
    inline void setQListWidget_KeyboardSearch_Callback(QListWidget_KeyboardSearch_Callback cb) { qlistwidget_keyboardsearch_callback = cb; }
    inline void setQListWidget_SizeHintForRow_Callback(QListWidget_SizeHintForRow_Callback cb) { qlistwidget_sizehintforrow_callback = cb; }
    inline void setQListWidget_SizeHintForColumn_Callback(QListWidget_SizeHintForColumn_Callback cb) { qlistwidget_sizehintforcolumn_callback = cb; }
    inline void setQListWidget_ItemDelegateForIndex_Callback(QListWidget_ItemDelegateForIndex_Callback cb) { qlistwidget_itemdelegateforindex_callback = cb; }
    inline void setQListWidget_InputMethodQuery_Callback(QListWidget_InputMethodQuery_Callback cb) { qlistwidget_inputmethodquery_callback = cb; }
    inline void setQListWidget_SelectAll_Callback(QListWidget_SelectAll_Callback cb) { qlistwidget_selectall_callback = cb; }
    inline void setQListWidget_UpdateEditorData_Callback(QListWidget_UpdateEditorData_Callback cb) { qlistwidget_updateeditordata_callback = cb; }
    inline void setQListWidget_UpdateEditorGeometries_Callback(QListWidget_UpdateEditorGeometries_Callback cb) { qlistwidget_updateeditorgeometries_callback = cb; }
    inline void setQListWidget_VerticalScrollbarAction_Callback(QListWidget_VerticalScrollbarAction_Callback cb) { qlistwidget_verticalscrollbaraction_callback = cb; }
    inline void setQListWidget_HorizontalScrollbarAction_Callback(QListWidget_HorizontalScrollbarAction_Callback cb) { qlistwidget_horizontalscrollbaraction_callback = cb; }
    inline void setQListWidget_VerticalScrollbarValueChanged_Callback(QListWidget_VerticalScrollbarValueChanged_Callback cb) { qlistwidget_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQListWidget_HorizontalScrollbarValueChanged_Callback(QListWidget_HorizontalScrollbarValueChanged_Callback cb) { qlistwidget_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQListWidget_CloseEditor_Callback(QListWidget_CloseEditor_Callback cb) { qlistwidget_closeeditor_callback = cb; }
    inline void setQListWidget_CommitData_Callback(QListWidget_CommitData_Callback cb) { qlistwidget_commitdata_callback = cb; }
    inline void setQListWidget_EditorDestroyed_Callback(QListWidget_EditorDestroyed_Callback cb) { qlistwidget_editordestroyed_callback = cb; }
    inline void setQListWidget_Edit2_Callback(QListWidget_Edit2_Callback cb) { qlistwidget_edit2_callback = cb; }
    inline void setQListWidget_SelectionCommand_Callback(QListWidget_SelectionCommand_Callback cb) { qlistwidget_selectioncommand_callback = cb; }
    inline void setQListWidget_FocusNextPrevChild_Callback(QListWidget_FocusNextPrevChild_Callback cb) { qlistwidget_focusnextprevchild_callback = cb; }
    inline void setQListWidget_ViewportEvent_Callback(QListWidget_ViewportEvent_Callback cb) { qlistwidget_viewportevent_callback = cb; }
    inline void setQListWidget_MousePressEvent_Callback(QListWidget_MousePressEvent_Callback cb) { qlistwidget_mousepressevent_callback = cb; }
    inline void setQListWidget_MouseDoubleClickEvent_Callback(QListWidget_MouseDoubleClickEvent_Callback cb) { qlistwidget_mousedoubleclickevent_callback = cb; }
    inline void setQListWidget_DragEnterEvent_Callback(QListWidget_DragEnterEvent_Callback cb) { qlistwidget_dragenterevent_callback = cb; }
    inline void setQListWidget_FocusInEvent_Callback(QListWidget_FocusInEvent_Callback cb) { qlistwidget_focusinevent_callback = cb; }
    inline void setQListWidget_FocusOutEvent_Callback(QListWidget_FocusOutEvent_Callback cb) { qlistwidget_focusoutevent_callback = cb; }
    inline void setQListWidget_KeyPressEvent_Callback(QListWidget_KeyPressEvent_Callback cb) { qlistwidget_keypressevent_callback = cb; }
    inline void setQListWidget_InputMethodEvent_Callback(QListWidget_InputMethodEvent_Callback cb) { qlistwidget_inputmethodevent_callback = cb; }
    inline void setQListWidget_EventFilter_Callback(QListWidget_EventFilter_Callback cb) { qlistwidget_eventfilter_callback = cb; }
    inline void setQListWidget_MinimumSizeHint_Callback(QListWidget_MinimumSizeHint_Callback cb) { qlistwidget_minimumsizehint_callback = cb; }
    inline void setQListWidget_SizeHint_Callback(QListWidget_SizeHint_Callback cb) { qlistwidget_sizehint_callback = cb; }
    inline void setQListWidget_SetupViewport_Callback(QListWidget_SetupViewport_Callback cb) { qlistwidget_setupviewport_callback = cb; }
    inline void setQListWidget_ContextMenuEvent_Callback(QListWidget_ContextMenuEvent_Callback cb) { qlistwidget_contextmenuevent_callback = cb; }
    inline void setQListWidget_ChangeEvent_Callback(QListWidget_ChangeEvent_Callback cb) { qlistwidget_changeevent_callback = cb; }
    inline void setQListWidget_InitStyleOption_Callback(QListWidget_InitStyleOption_Callback cb) { qlistwidget_initstyleoption_callback = cb; }
    inline void setQListWidget_DevType_Callback(QListWidget_DevType_Callback cb) { qlistwidget_devtype_callback = cb; }
    inline void setQListWidget_SetVisible_Callback(QListWidget_SetVisible_Callback cb) { qlistwidget_setvisible_callback = cb; }
    inline void setQListWidget_HeightForWidth_Callback(QListWidget_HeightForWidth_Callback cb) { qlistwidget_heightforwidth_callback = cb; }
    inline void setQListWidget_HasHeightForWidth_Callback(QListWidget_HasHeightForWidth_Callback cb) { qlistwidget_hasheightforwidth_callback = cb; }
    inline void setQListWidget_PaintEngine_Callback(QListWidget_PaintEngine_Callback cb) { qlistwidget_paintengine_callback = cb; }
    inline void setQListWidget_KeyReleaseEvent_Callback(QListWidget_KeyReleaseEvent_Callback cb) { qlistwidget_keyreleaseevent_callback = cb; }
    inline void setQListWidget_EnterEvent_Callback(QListWidget_EnterEvent_Callback cb) { qlistwidget_enterevent_callback = cb; }
    inline void setQListWidget_LeaveEvent_Callback(QListWidget_LeaveEvent_Callback cb) { qlistwidget_leaveevent_callback = cb; }
    inline void setQListWidget_MoveEvent_Callback(QListWidget_MoveEvent_Callback cb) { qlistwidget_moveevent_callback = cb; }
    inline void setQListWidget_CloseEvent_Callback(QListWidget_CloseEvent_Callback cb) { qlistwidget_closeevent_callback = cb; }
    inline void setQListWidget_TabletEvent_Callback(QListWidget_TabletEvent_Callback cb) { qlistwidget_tabletevent_callback = cb; }
    inline void setQListWidget_ActionEvent_Callback(QListWidget_ActionEvent_Callback cb) { qlistwidget_actionevent_callback = cb; }
    inline void setQListWidget_ShowEvent_Callback(QListWidget_ShowEvent_Callback cb) { qlistwidget_showevent_callback = cb; }
    inline void setQListWidget_HideEvent_Callback(QListWidget_HideEvent_Callback cb) { qlistwidget_hideevent_callback = cb; }
    inline void setQListWidget_NativeEvent_Callback(QListWidget_NativeEvent_Callback cb) { qlistwidget_nativeevent_callback = cb; }
    inline void setQListWidget_Metric_Callback(QListWidget_Metric_Callback cb) { qlistwidget_metric_callback = cb; }
    inline void setQListWidget_InitPainter_Callback(QListWidget_InitPainter_Callback cb) { qlistwidget_initpainter_callback = cb; }
    inline void setQListWidget_Redirected_Callback(QListWidget_Redirected_Callback cb) { qlistwidget_redirected_callback = cb; }
    inline void setQListWidget_SharedPainter_Callback(QListWidget_SharedPainter_Callback cb) { qlistwidget_sharedpainter_callback = cb; }
    inline void setQListWidget_ChildEvent_Callback(QListWidget_ChildEvent_Callback cb) { qlistwidget_childevent_callback = cb; }
    inline void setQListWidget_CustomEvent_Callback(QListWidget_CustomEvent_Callback cb) { qlistwidget_customevent_callback = cb; }
    inline void setQListWidget_ConnectNotify_Callback(QListWidget_ConnectNotify_Callback cb) { qlistwidget_connectnotify_callback = cb; }
    inline void setQListWidget_DisconnectNotify_Callback(QListWidget_DisconnectNotify_Callback cb) { qlistwidget_disconnectnotify_callback = cb; }
    inline void setQListWidget_ResizeContents_Callback(QListWidget_ResizeContents_Callback cb) { qlistwidget_resizecontents_callback = cb; }
    inline void setQListWidget_ContentsSize_Callback(QListWidget_ContentsSize_Callback cb) { qlistwidget_contentssize_callback = cb; }
    inline void setQListWidget_RectForIndex_Callback(QListWidget_RectForIndex_Callback cb) { qlistwidget_rectforindex_callback = cb; }
    inline void setQListWidget_SetPositionForIndex_Callback(QListWidget_SetPositionForIndex_Callback cb) { qlistwidget_setpositionforindex_callback = cb; }
    inline void setQListWidget_State_Callback(QListWidget_State_Callback cb) { qlistwidget_state_callback = cb; }
    inline void setQListWidget_SetState_Callback(QListWidget_SetState_Callback cb) { qlistwidget_setstate_callback = cb; }
    inline void setQListWidget_ScheduleDelayedItemsLayout_Callback(QListWidget_ScheduleDelayedItemsLayout_Callback cb) { qlistwidget_scheduledelayeditemslayout_callback = cb; }
    inline void setQListWidget_ExecuteDelayedItemsLayout_Callback(QListWidget_ExecuteDelayedItemsLayout_Callback cb) { qlistwidget_executedelayeditemslayout_callback = cb; }
    inline void setQListWidget_SetDirtyRegion_Callback(QListWidget_SetDirtyRegion_Callback cb) { qlistwidget_setdirtyregion_callback = cb; }
    inline void setQListWidget_ScrollDirtyRegion_Callback(QListWidget_ScrollDirtyRegion_Callback cb) { qlistwidget_scrolldirtyregion_callback = cb; }
    inline void setQListWidget_DirtyRegionOffset_Callback(QListWidget_DirtyRegionOffset_Callback cb) { qlistwidget_dirtyregionoffset_callback = cb; }
    inline void setQListWidget_StartAutoScroll_Callback(QListWidget_StartAutoScroll_Callback cb) { qlistwidget_startautoscroll_callback = cb; }
    inline void setQListWidget_StopAutoScroll_Callback(QListWidget_StopAutoScroll_Callback cb) { qlistwidget_stopautoscroll_callback = cb; }
    inline void setQListWidget_DoAutoScroll_Callback(QListWidget_DoAutoScroll_Callback cb) { qlistwidget_doautoscroll_callback = cb; }
    inline void setQListWidget_DropIndicatorPosition_Callback(QListWidget_DropIndicatorPosition_Callback cb) { qlistwidget_dropindicatorposition_callback = cb; }
    inline void setQListWidget_SetViewportMargins_Callback(QListWidget_SetViewportMargins_Callback cb) { qlistwidget_setviewportmargins_callback = cb; }
    inline void setQListWidget_ViewportMargins_Callback(QListWidget_ViewportMargins_Callback cb) { qlistwidget_viewportmargins_callback = cb; }
    inline void setQListWidget_DrawFrame_Callback(QListWidget_DrawFrame_Callback cb) { qlistwidget_drawframe_callback = cb; }
    inline void setQListWidget_UpdateMicroFocus_Callback(QListWidget_UpdateMicroFocus_Callback cb) { qlistwidget_updatemicrofocus_callback = cb; }
    inline void setQListWidget_Create_Callback(QListWidget_Create_Callback cb) { qlistwidget_create_callback = cb; }
    inline void setQListWidget_Destroy_Callback(QListWidget_Destroy_Callback cb) { qlistwidget_destroy_callback = cb; }
    inline void setQListWidget_FocusNextChild_Callback(QListWidget_FocusNextChild_Callback cb) { qlistwidget_focusnextchild_callback = cb; }
    inline void setQListWidget_FocusPreviousChild_Callback(QListWidget_FocusPreviousChild_Callback cb) { qlistwidget_focuspreviouschild_callback = cb; }
    inline void setQListWidget_Sender_Callback(QListWidget_Sender_Callback cb) { qlistwidget_sender_callback = cb; }
    inline void setQListWidget_SenderSignalIndex_Callback(QListWidget_SenderSignalIndex_Callback cb) { qlistwidget_sendersignalindex_callback = cb; }
    inline void setQListWidget_Receivers_Callback(QListWidget_Receivers_Callback cb) { qlistwidget_receivers_callback = cb; }
    inline void setQListWidget_IsSignalConnected_Callback(QListWidget_IsSignalConnected_Callback cb) { qlistwidget_issignalconnected_callback = cb; }
    inline void setQListWidget_GetDecodedMetricF_Callback(QListWidget_GetDecodedMetricF_Callback cb) { qlistwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQListWidget_MetaObject_IsBase(bool value) const { qlistwidget_metaobject_isbase = value; }
    inline void setQListWidget_Metacast_IsBase(bool value) const { qlistwidget_metacast_isbase = value; }
    inline void setQListWidget_Metacall_IsBase(bool value) const { qlistwidget_metacall_isbase = value; }
    inline void setQListWidget_SetSelectionModel_IsBase(bool value) const { qlistwidget_setselectionmodel_isbase = value; }
    inline void setQListWidget_DropEvent_IsBase(bool value) const { qlistwidget_dropevent_isbase = value; }
    inline void setQListWidget_Event_IsBase(bool value) const { qlistwidget_event_isbase = value; }
    inline void setQListWidget_MimeTypes_IsBase(bool value) const { qlistwidget_mimetypes_isbase = value; }
    inline void setQListWidget_MimeData_IsBase(bool value) const { qlistwidget_mimedata_isbase = value; }
    inline void setQListWidget_DropMimeData_IsBase(bool value) const { qlistwidget_dropmimedata_isbase = value; }
    inline void setQListWidget_SupportedDropActions_IsBase(bool value) const { qlistwidget_supporteddropactions_isbase = value; }
    inline void setQListWidget_VisualRect_IsBase(bool value) const { qlistwidget_visualrect_isbase = value; }
    inline void setQListWidget_ScrollTo_IsBase(bool value) const { qlistwidget_scrollto_isbase = value; }
    inline void setQListWidget_IndexAt_IsBase(bool value) const { qlistwidget_indexat_isbase = value; }
    inline void setQListWidget_DoItemsLayout_IsBase(bool value) const { qlistwidget_doitemslayout_isbase = value; }
    inline void setQListWidget_Reset_IsBase(bool value) const { qlistwidget_reset_isbase = value; }
    inline void setQListWidget_SetRootIndex_IsBase(bool value) const { qlistwidget_setrootindex_isbase = value; }
    inline void setQListWidget_ScrollContentsBy_IsBase(bool value) const { qlistwidget_scrollcontentsby_isbase = value; }
    inline void setQListWidget_DataChanged_IsBase(bool value) const { qlistwidget_datachanged_isbase = value; }
    inline void setQListWidget_RowsInserted_IsBase(bool value) const { qlistwidget_rowsinserted_isbase = value; }
    inline void setQListWidget_RowsAboutToBeRemoved_IsBase(bool value) const { qlistwidget_rowsabouttoberemoved_isbase = value; }
    inline void setQListWidget_MouseMoveEvent_IsBase(bool value) const { qlistwidget_mousemoveevent_isbase = value; }
    inline void setQListWidget_MouseReleaseEvent_IsBase(bool value) const { qlistwidget_mousereleaseevent_isbase = value; }
    inline void setQListWidget_WheelEvent_IsBase(bool value) const { qlistwidget_wheelevent_isbase = value; }
    inline void setQListWidget_TimerEvent_IsBase(bool value) const { qlistwidget_timerevent_isbase = value; }
    inline void setQListWidget_ResizeEvent_IsBase(bool value) const { qlistwidget_resizeevent_isbase = value; }
    inline void setQListWidget_DragMoveEvent_IsBase(bool value) const { qlistwidget_dragmoveevent_isbase = value; }
    inline void setQListWidget_DragLeaveEvent_IsBase(bool value) const { qlistwidget_dragleaveevent_isbase = value; }
    inline void setQListWidget_StartDrag_IsBase(bool value) const { qlistwidget_startdrag_isbase = value; }
    inline void setQListWidget_InitViewItemOption_IsBase(bool value) const { qlistwidget_initviewitemoption_isbase = value; }
    inline void setQListWidget_PaintEvent_IsBase(bool value) const { qlistwidget_paintevent_isbase = value; }
    inline void setQListWidget_HorizontalOffset_IsBase(bool value) const { qlistwidget_horizontaloffset_isbase = value; }
    inline void setQListWidget_VerticalOffset_IsBase(bool value) const { qlistwidget_verticaloffset_isbase = value; }
    inline void setQListWidget_MoveCursor_IsBase(bool value) const { qlistwidget_movecursor_isbase = value; }
    inline void setQListWidget_SetSelection_IsBase(bool value) const { qlistwidget_setselection_isbase = value; }
    inline void setQListWidget_VisualRegionForSelection_IsBase(bool value) const { qlistwidget_visualregionforselection_isbase = value; }
    inline void setQListWidget_SelectedIndexes_IsBase(bool value) const { qlistwidget_selectedindexes_isbase = value; }
    inline void setQListWidget_UpdateGeometries_IsBase(bool value) const { qlistwidget_updategeometries_isbase = value; }
    inline void setQListWidget_IsIndexHidden_IsBase(bool value) const { qlistwidget_isindexhidden_isbase = value; }
    inline void setQListWidget_SelectionChanged_IsBase(bool value) const { qlistwidget_selectionchanged_isbase = value; }
    inline void setQListWidget_CurrentChanged_IsBase(bool value) const { qlistwidget_currentchanged_isbase = value; }
    inline void setQListWidget_ViewportSizeHint_IsBase(bool value) const { qlistwidget_viewportsizehint_isbase = value; }
    inline void setQListWidget_KeyboardSearch_IsBase(bool value) const { qlistwidget_keyboardsearch_isbase = value; }
    inline void setQListWidget_SizeHintForRow_IsBase(bool value) const { qlistwidget_sizehintforrow_isbase = value; }
    inline void setQListWidget_SizeHintForColumn_IsBase(bool value) const { qlistwidget_sizehintforcolumn_isbase = value; }
    inline void setQListWidget_ItemDelegateForIndex_IsBase(bool value) const { qlistwidget_itemdelegateforindex_isbase = value; }
    inline void setQListWidget_InputMethodQuery_IsBase(bool value) const { qlistwidget_inputmethodquery_isbase = value; }
    inline void setQListWidget_SelectAll_IsBase(bool value) const { qlistwidget_selectall_isbase = value; }
    inline void setQListWidget_UpdateEditorData_IsBase(bool value) const { qlistwidget_updateeditordata_isbase = value; }
    inline void setQListWidget_UpdateEditorGeometries_IsBase(bool value) const { qlistwidget_updateeditorgeometries_isbase = value; }
    inline void setQListWidget_VerticalScrollbarAction_IsBase(bool value) const { qlistwidget_verticalscrollbaraction_isbase = value; }
    inline void setQListWidget_HorizontalScrollbarAction_IsBase(bool value) const { qlistwidget_horizontalscrollbaraction_isbase = value; }
    inline void setQListWidget_VerticalScrollbarValueChanged_IsBase(bool value) const { qlistwidget_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQListWidget_HorizontalScrollbarValueChanged_IsBase(bool value) const { qlistwidget_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQListWidget_CloseEditor_IsBase(bool value) const { qlistwidget_closeeditor_isbase = value; }
    inline void setQListWidget_CommitData_IsBase(bool value) const { qlistwidget_commitdata_isbase = value; }
    inline void setQListWidget_EditorDestroyed_IsBase(bool value) const { qlistwidget_editordestroyed_isbase = value; }
    inline void setQListWidget_Edit2_IsBase(bool value) const { qlistwidget_edit2_isbase = value; }
    inline void setQListWidget_SelectionCommand_IsBase(bool value) const { qlistwidget_selectioncommand_isbase = value; }
    inline void setQListWidget_FocusNextPrevChild_IsBase(bool value) const { qlistwidget_focusnextprevchild_isbase = value; }
    inline void setQListWidget_ViewportEvent_IsBase(bool value) const { qlistwidget_viewportevent_isbase = value; }
    inline void setQListWidget_MousePressEvent_IsBase(bool value) const { qlistwidget_mousepressevent_isbase = value; }
    inline void setQListWidget_MouseDoubleClickEvent_IsBase(bool value) const { qlistwidget_mousedoubleclickevent_isbase = value; }
    inline void setQListWidget_DragEnterEvent_IsBase(bool value) const { qlistwidget_dragenterevent_isbase = value; }
    inline void setQListWidget_FocusInEvent_IsBase(bool value) const { qlistwidget_focusinevent_isbase = value; }
    inline void setQListWidget_FocusOutEvent_IsBase(bool value) const { qlistwidget_focusoutevent_isbase = value; }
    inline void setQListWidget_KeyPressEvent_IsBase(bool value) const { qlistwidget_keypressevent_isbase = value; }
    inline void setQListWidget_InputMethodEvent_IsBase(bool value) const { qlistwidget_inputmethodevent_isbase = value; }
    inline void setQListWidget_EventFilter_IsBase(bool value) const { qlistwidget_eventfilter_isbase = value; }
    inline void setQListWidget_MinimumSizeHint_IsBase(bool value) const { qlistwidget_minimumsizehint_isbase = value; }
    inline void setQListWidget_SizeHint_IsBase(bool value) const { qlistwidget_sizehint_isbase = value; }
    inline void setQListWidget_SetupViewport_IsBase(bool value) const { qlistwidget_setupviewport_isbase = value; }
    inline void setQListWidget_ContextMenuEvent_IsBase(bool value) const { qlistwidget_contextmenuevent_isbase = value; }
    inline void setQListWidget_ChangeEvent_IsBase(bool value) const { qlistwidget_changeevent_isbase = value; }
    inline void setQListWidget_InitStyleOption_IsBase(bool value) const { qlistwidget_initstyleoption_isbase = value; }
    inline void setQListWidget_DevType_IsBase(bool value) const { qlistwidget_devtype_isbase = value; }
    inline void setQListWidget_SetVisible_IsBase(bool value) const { qlistwidget_setvisible_isbase = value; }
    inline void setQListWidget_HeightForWidth_IsBase(bool value) const { qlistwidget_heightforwidth_isbase = value; }
    inline void setQListWidget_HasHeightForWidth_IsBase(bool value) const { qlistwidget_hasheightforwidth_isbase = value; }
    inline void setQListWidget_PaintEngine_IsBase(bool value) const { qlistwidget_paintengine_isbase = value; }
    inline void setQListWidget_KeyReleaseEvent_IsBase(bool value) const { qlistwidget_keyreleaseevent_isbase = value; }
    inline void setQListWidget_EnterEvent_IsBase(bool value) const { qlistwidget_enterevent_isbase = value; }
    inline void setQListWidget_LeaveEvent_IsBase(bool value) const { qlistwidget_leaveevent_isbase = value; }
    inline void setQListWidget_MoveEvent_IsBase(bool value) const { qlistwidget_moveevent_isbase = value; }
    inline void setQListWidget_CloseEvent_IsBase(bool value) const { qlistwidget_closeevent_isbase = value; }
    inline void setQListWidget_TabletEvent_IsBase(bool value) const { qlistwidget_tabletevent_isbase = value; }
    inline void setQListWidget_ActionEvent_IsBase(bool value) const { qlistwidget_actionevent_isbase = value; }
    inline void setQListWidget_ShowEvent_IsBase(bool value) const { qlistwidget_showevent_isbase = value; }
    inline void setQListWidget_HideEvent_IsBase(bool value) const { qlistwidget_hideevent_isbase = value; }
    inline void setQListWidget_NativeEvent_IsBase(bool value) const { qlistwidget_nativeevent_isbase = value; }
    inline void setQListWidget_Metric_IsBase(bool value) const { qlistwidget_metric_isbase = value; }
    inline void setQListWidget_InitPainter_IsBase(bool value) const { qlistwidget_initpainter_isbase = value; }
    inline void setQListWidget_Redirected_IsBase(bool value) const { qlistwidget_redirected_isbase = value; }
    inline void setQListWidget_SharedPainter_IsBase(bool value) const { qlistwidget_sharedpainter_isbase = value; }
    inline void setQListWidget_ChildEvent_IsBase(bool value) const { qlistwidget_childevent_isbase = value; }
    inline void setQListWidget_CustomEvent_IsBase(bool value) const { qlistwidget_customevent_isbase = value; }
    inline void setQListWidget_ConnectNotify_IsBase(bool value) const { qlistwidget_connectnotify_isbase = value; }
    inline void setQListWidget_DisconnectNotify_IsBase(bool value) const { qlistwidget_disconnectnotify_isbase = value; }
    inline void setQListWidget_ResizeContents_IsBase(bool value) const { qlistwidget_resizecontents_isbase = value; }
    inline void setQListWidget_ContentsSize_IsBase(bool value) const { qlistwidget_contentssize_isbase = value; }
    inline void setQListWidget_RectForIndex_IsBase(bool value) const { qlistwidget_rectforindex_isbase = value; }
    inline void setQListWidget_SetPositionForIndex_IsBase(bool value) const { qlistwidget_setpositionforindex_isbase = value; }
    inline void setQListWidget_State_IsBase(bool value) const { qlistwidget_state_isbase = value; }
    inline void setQListWidget_SetState_IsBase(bool value) const { qlistwidget_setstate_isbase = value; }
    inline void setQListWidget_ScheduleDelayedItemsLayout_IsBase(bool value) const { qlistwidget_scheduledelayeditemslayout_isbase = value; }
    inline void setQListWidget_ExecuteDelayedItemsLayout_IsBase(bool value) const { qlistwidget_executedelayeditemslayout_isbase = value; }
    inline void setQListWidget_SetDirtyRegion_IsBase(bool value) const { qlistwidget_setdirtyregion_isbase = value; }
    inline void setQListWidget_ScrollDirtyRegion_IsBase(bool value) const { qlistwidget_scrolldirtyregion_isbase = value; }
    inline void setQListWidget_DirtyRegionOffset_IsBase(bool value) const { qlistwidget_dirtyregionoffset_isbase = value; }
    inline void setQListWidget_StartAutoScroll_IsBase(bool value) const { qlistwidget_startautoscroll_isbase = value; }
    inline void setQListWidget_StopAutoScroll_IsBase(bool value) const { qlistwidget_stopautoscroll_isbase = value; }
    inline void setQListWidget_DoAutoScroll_IsBase(bool value) const { qlistwidget_doautoscroll_isbase = value; }
    inline void setQListWidget_DropIndicatorPosition_IsBase(bool value) const { qlistwidget_dropindicatorposition_isbase = value; }
    inline void setQListWidget_SetViewportMargins_IsBase(bool value) const { qlistwidget_setviewportmargins_isbase = value; }
    inline void setQListWidget_ViewportMargins_IsBase(bool value) const { qlistwidget_viewportmargins_isbase = value; }
    inline void setQListWidget_DrawFrame_IsBase(bool value) const { qlistwidget_drawframe_isbase = value; }
    inline void setQListWidget_UpdateMicroFocus_IsBase(bool value) const { qlistwidget_updatemicrofocus_isbase = value; }
    inline void setQListWidget_Create_IsBase(bool value) const { qlistwidget_create_isbase = value; }
    inline void setQListWidget_Destroy_IsBase(bool value) const { qlistwidget_destroy_isbase = value; }
    inline void setQListWidget_FocusNextChild_IsBase(bool value) const { qlistwidget_focusnextchild_isbase = value; }
    inline void setQListWidget_FocusPreviousChild_IsBase(bool value) const { qlistwidget_focuspreviouschild_isbase = value; }
    inline void setQListWidget_Sender_IsBase(bool value) const { qlistwidget_sender_isbase = value; }
    inline void setQListWidget_SenderSignalIndex_IsBase(bool value) const { qlistwidget_sendersignalindex_isbase = value; }
    inline void setQListWidget_Receivers_IsBase(bool value) const { qlistwidget_receivers_isbase = value; }
    inline void setQListWidget_IsSignalConnected_IsBase(bool value) const { qlistwidget_issignalconnected_isbase = value; }
    inline void setQListWidget_GetDecodedMetricF_IsBase(bool value) const { qlistwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlistwidget_metaobject_isbase) {
            qlistwidget_metaobject_isbase = false;
            return QListWidget::metaObject();
        }
        auto metaobject_cb = qlistwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QListWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlistwidget_metacast_isbase) {
            qlistwidget_metacast_isbase = false;
            return QListWidget::qt_metacast(param1);
        }
        auto metacast_cb = qlistwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlistwidget_metacall_isbase) {
            qlistwidget_metacall_isbase = false;
            return QListWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qlistwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qlistwidget_setselectionmodel_isbase) {
            qlistwidget_setselectionmodel_isbase = false;
            QListWidget::setSelectionModel(selectionModel);
            return;
        }
        auto setselectionmodel_cb = qlistwidget_setselectionmodel_callback;
        if (setselectionmodel_cb) {
            QItemSelectionModel* cbval1 = selectionModel;

            setselectionmodel_cb(this, cbval1);
            return;
        }
        QListWidget::setSelectionModel(selectionModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlistwidget_dropevent_isbase) {
            qlistwidget_dropevent_isbase = false;
            QListWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = qlistwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QListWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlistwidget_event_isbase) {
            qlistwidget_event_isbase = false;
            return QListWidget::event(e);
        }
        auto event_cb = qlistwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qlistwidget_mimetypes_isbase) {
            qlistwidget_mimetypes_isbase = false;
            return QListWidget::mimeTypes();
        }
        auto mimetypes_cb = qlistwidget_mimetypes_callback;
        if (mimetypes_cb) {
            const char** callback_ret = mimetypes_cb();
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
        if (qlistwidget_mimedata_isbase) {
            qlistwidget_mimedata_isbase = false;
            return QListWidget::mimeData(items);
        }
        auto mimedata_cb = qlistwidget_mimedata_callback;
        if (mimedata_cb) {
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

            QMimeData* callback_ret = mimedata_cb(this, cbval1);
            free(items_arr);
            return callback_ret;
        }
        return QListWidget::mimeData(items);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
        if (qlistwidget_dropmimedata_isbase) {
            qlistwidget_dropmimedata_isbase = false;
            return QListWidget::dropMimeData(index, data, action);
        }
        auto dropmimedata_cb = qlistwidget_dropmimedata_callback;
        if (dropmimedata_cb) {
            int cbval1 = index;
            QMimeData* cbval2 = (QMimeData*)data;
            int cbval3 = static_cast<int>(action);

            bool callback_ret = dropmimedata_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QListWidget::dropMimeData(index, data, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qlistwidget_supporteddropactions_isbase) {
            qlistwidget_supporteddropactions_isbase = false;
            return QListWidget::supportedDropActions();
        }
        auto supporteddropactions_cb = qlistwidget_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QListWidget::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qlistwidget_visualrect_isbase) {
            qlistwidget_visualrect_isbase = false;
            return QListWidget::visualRect(index);
        }
        auto visualrect_cb = qlistwidget_visualrect_callback;
        if (visualrect_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = visualrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QListWidget::visualRect(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qlistwidget_scrollto_isbase) {
            qlistwidget_scrollto_isbase = false;
            QListWidget::scrollTo(index, hint);
            return;
        }
        auto scrollto_cb = qlistwidget_scrollto_callback;
        if (scrollto_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            scrollto_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::scrollTo(index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qlistwidget_indexat_isbase) {
            qlistwidget_indexat_isbase = false;
            return QListWidget::indexAt(p);
        }
        auto indexat_cb = qlistwidget_indexat_callback;
        if (indexat_cb) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = indexat_cb(this, cbval1);
            return *callback_ret;
        }
        return QListWidget::indexAt(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qlistwidget_doitemslayout_isbase) {
            qlistwidget_doitemslayout_isbase = false;
            QListWidget::doItemsLayout();
            return;
        }
        auto doitemslayout_cb = qlistwidget_doitemslayout_callback;
        if (doitemslayout_cb) {
            doitemslayout_cb();
            return;
        }
        QListWidget::doItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qlistwidget_reset_isbase) {
            qlistwidget_reset_isbase = false;
            QListWidget::reset();
            return;
        }
        auto reset_cb = qlistwidget_reset_callback;
        if (reset_cb) {
            reset_cb();
            return;
        }
        QListWidget::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qlistwidget_setrootindex_isbase) {
            qlistwidget_setrootindex_isbase = false;
            QListWidget::setRootIndex(index);
            return;
        }
        auto setrootindex_cb = qlistwidget_setrootindex_callback;
        if (setrootindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            setrootindex_cb(this, cbval1);
            return;
        }
        QListWidget::setRootIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qlistwidget_scrollcontentsby_isbase) {
            qlistwidget_scrollcontentsby_isbase = false;
            QListWidget::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qlistwidget_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qlistwidget_datachanged_isbase) {
            qlistwidget_datachanged_isbase = false;
            QListWidget::dataChanged(topLeft, bottomRight, roles);
            return;
        }
        auto datachanged_cb = qlistwidget_datachanged_callback;
        if (datachanged_cb) {
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

            datachanged_cb(this, cbval1, cbval2, cbval3);
            free(roles_arr);
            return;
        }
        QListWidget::dataChanged(topLeft, bottomRight, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qlistwidget_rowsinserted_isbase) {
            qlistwidget_rowsinserted_isbase = false;
            QListWidget::rowsInserted(parent, start, end);
            return;
        }
        auto rowsinserted_cb = qlistwidget_rowsinserted_callback;
        if (rowsinserted_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsinserted_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QListWidget::rowsInserted(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qlistwidget_rowsabouttoberemoved_isbase) {
            qlistwidget_rowsabouttoberemoved_isbase = false;
            QListWidget::rowsAboutToBeRemoved(parent, start, end);
            return;
        }
        auto rowsabouttoberemoved_cb = qlistwidget_rowsabouttoberemoved_callback;
        if (rowsabouttoberemoved_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            rowsabouttoberemoved_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QListWidget::rowsAboutToBeRemoved(parent, start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qlistwidget_mousemoveevent_isbase) {
            qlistwidget_mousemoveevent_isbase = false;
            QListWidget::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = qlistwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QListWidget::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qlistwidget_mousereleaseevent_isbase) {
            qlistwidget_mousereleaseevent_isbase = false;
            QListWidget::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = qlistwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QListWidget::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qlistwidget_wheelevent_isbase) {
            qlistwidget_wheelevent_isbase = false;
            QListWidget::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = qlistwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        QListWidget::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qlistwidget_timerevent_isbase) {
            qlistwidget_timerevent_isbase = false;
            QListWidget::timerEvent(e);
            return;
        }
        auto timerevent_cb = qlistwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        QListWidget::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qlistwidget_resizeevent_isbase) {
            qlistwidget_resizeevent_isbase = false;
            QListWidget::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = qlistwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        QListWidget::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlistwidget_dragmoveevent_isbase) {
            qlistwidget_dragmoveevent_isbase = false;
            QListWidget::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = qlistwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QListWidget::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlistwidget_dragleaveevent_isbase) {
            qlistwidget_dragleaveevent_isbase = false;
            QListWidget::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = qlistwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QListWidget::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qlistwidget_startdrag_isbase) {
            qlistwidget_startdrag_isbase = false;
            QListWidget::startDrag(supportedActions);
            return;
        }
        auto startdrag_cb = qlistwidget_startdrag_callback;
        if (startdrag_cb) {
            int cbval1 = static_cast<int>(supportedActions);

            startdrag_cb(this, cbval1);
            return;
        }
        QListWidget::startDrag(supportedActions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qlistwidget_initviewitemoption_isbase) {
            qlistwidget_initviewitemoption_isbase = false;
            QListWidget::initViewItemOption(option);
            return;
        }
        auto initviewitemoption_cb = qlistwidget_initviewitemoption_callback;
        if (initviewitemoption_cb) {
            QStyleOptionViewItem* cbval1 = option;

            initviewitemoption_cb(this, cbval1);
            return;
        }
        QListWidget::initViewItemOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qlistwidget_paintevent_isbase) {
            qlistwidget_paintevent_isbase = false;
            QListWidget::paintEvent(e);
            return;
        }
        auto paintevent_cb = qlistwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        QListWidget::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qlistwidget_horizontaloffset_isbase) {
            qlistwidget_horizontaloffset_isbase = false;
            return QListWidget::horizontalOffset();
        }
        auto horizontaloffset_cb = qlistwidget_horizontaloffset_callback;
        if (horizontaloffset_cb) {
            int callback_ret = horizontaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return QListWidget::horizontalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qlistwidget_verticaloffset_isbase) {
            qlistwidget_verticaloffset_isbase = false;
            return QListWidget::verticalOffset();
        }
        auto verticaloffset_cb = qlistwidget_verticaloffset_callback;
        if (verticaloffset_cb) {
            int callback_ret = verticaloffset_cb();
            return static_cast<int>(callback_ret);
        }
        return QListWidget::verticalOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qlistwidget_movecursor_isbase) {
            qlistwidget_movecursor_isbase = false;
            return QListWidget::moveCursor(cursorAction, modifiers);
        }
        auto movecursor_cb = qlistwidget_movecursor_callback;
        if (movecursor_cb) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = movecursor_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QListWidget::moveCursor(cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qlistwidget_setselection_isbase) {
            qlistwidget_setselection_isbase = false;
            QListWidget::setSelection(rect, command);
            return;
        }
        auto setselection_cb = qlistwidget_setselection_callback;
        if (setselection_cb) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            setselection_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::setSelection(rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qlistwidget_visualregionforselection_isbase) {
            qlistwidget_visualregionforselection_isbase = false;
            return QListWidget::visualRegionForSelection(selection);
        }
        auto visualregionforselection_cb = qlistwidget_visualregionforselection_callback;
        if (visualregionforselection_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = visualregionforselection_cb(this, cbval1);
            return *callback_ret;
        }
        return QListWidget::visualRegionForSelection(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> selectedIndexes() const override {
        if (qlistwidget_selectedindexes_isbase) {
            qlistwidget_selectedindexes_isbase = false;
            return QListWidget::selectedIndexes();
        }
        auto selectedindexes_cb = qlistwidget_selectedindexes_callback;
        if (selectedindexes_cb) {
            libqt_list /* of QModelIndex* */ callback_ret = selectedindexes_cb();
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
        if (qlistwidget_updategeometries_isbase) {
            qlistwidget_updategeometries_isbase = false;
            QListWidget::updateGeometries();
            return;
        }
        auto updategeometries_cb = qlistwidget_updategeometries_callback;
        if (updategeometries_cb) {
            updategeometries_cb();
            return;
        }
        QListWidget::updateGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qlistwidget_isindexhidden_isbase) {
            qlistwidget_isindexhidden_isbase = false;
            return QListWidget::isIndexHidden(index);
        }
        auto isindexhidden_cb = qlistwidget_isindexhidden_callback;
        if (isindexhidden_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = isindexhidden_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidget::isIndexHidden(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qlistwidget_selectionchanged_isbase) {
            qlistwidget_selectionchanged_isbase = false;
            QListWidget::selectionChanged(selected, deselected);
            return;
        }
        auto selectionchanged_cb = qlistwidget_selectionchanged_callback;
        if (selectionchanged_cb) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            selectionchanged_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::selectionChanged(selected, deselected);
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qlistwidget_currentchanged_isbase) {
            qlistwidget_currentchanged_isbase = false;
            QListWidget::currentChanged(current, previous);
            return;
        }
        auto currentchanged_cb = qlistwidget_currentchanged_callback;
        if (currentchanged_cb) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            currentchanged_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::currentChanged(current, previous);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qlistwidget_viewportsizehint_isbase) {
            qlistwidget_viewportsizehint_isbase = false;
            return QListWidget::viewportSizeHint();
        }
        auto viewportsizehint_cb = qlistwidget_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QListWidget::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qlistwidget_keyboardsearch_isbase) {
            qlistwidget_keyboardsearch_isbase = false;
            QListWidget::keyboardSearch(search);
            return;
        }
        auto keyboardsearch_cb = qlistwidget_keyboardsearch_callback;
        if (keyboardsearch_cb) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            auto search_str_len = search_b.length();
            const char* search_str = static_cast<const char*>(malloc(search_str_len + 1));
            memcpy((void*)search_str, search_b.data(), search_str_len);
            ((char*)search_str)[search_str_len] = '\0';
            const char* cbval1 = search_str;

            keyboardsearch_cb(this, cbval1);
            libqt_free(search_str);
            return;
        }
        QListWidget::keyboardSearch(search);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qlistwidget_sizehintforrow_isbase) {
            qlistwidget_sizehintforrow_isbase = false;
            return QListWidget::sizeHintForRow(row);
        }
        auto sizehintforrow_cb = qlistwidget_sizehintforrow_callback;
        if (sizehintforrow_cb) {
            int cbval1 = row;

            int callback_ret = sizehintforrow_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::sizeHintForRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qlistwidget_sizehintforcolumn_isbase) {
            qlistwidget_sizehintforcolumn_isbase = false;
            return QListWidget::sizeHintForColumn(column);
        }
        auto sizehintforcolumn_cb = qlistwidget_sizehintforcolumn_callback;
        if (sizehintforcolumn_cb) {
            int cbval1 = column;

            int callback_ret = sizehintforcolumn_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::sizeHintForColumn(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qlistwidget_itemdelegateforindex_isbase) {
            qlistwidget_itemdelegateforindex_isbase = false;
            return QListWidget::itemDelegateForIndex(index);
        }
        auto itemdelegateforindex_cb = qlistwidget_itemdelegateforindex_callback;
        if (itemdelegateforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = itemdelegateforindex_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidget::itemDelegateForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qlistwidget_inputmethodquery_isbase) {
            qlistwidget_inputmethodquery_isbase = false;
            return QListWidget::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qlistwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QListWidget::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qlistwidget_selectall_isbase) {
            qlistwidget_selectall_isbase = false;
            QListWidget::selectAll();
            return;
        }
        auto selectall_cb = qlistwidget_selectall_callback;
        if (selectall_cb) {
            selectall_cb();
            return;
        }
        QListWidget::selectAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qlistwidget_updateeditordata_isbase) {
            qlistwidget_updateeditordata_isbase = false;
            QListWidget::updateEditorData();
            return;
        }
        auto updateeditordata_cb = qlistwidget_updateeditordata_callback;
        if (updateeditordata_cb) {
            updateeditordata_cb();
            return;
        }
        QListWidget::updateEditorData();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qlistwidget_updateeditorgeometries_isbase) {
            qlistwidget_updateeditorgeometries_isbase = false;
            QListWidget::updateEditorGeometries();
            return;
        }
        auto updateeditorgeometries_cb = qlistwidget_updateeditorgeometries_callback;
        if (updateeditorgeometries_cb) {
            updateeditorgeometries_cb();
            return;
        }
        QListWidget::updateEditorGeometries();
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qlistwidget_verticalscrollbaraction_isbase) {
            qlistwidget_verticalscrollbaraction_isbase = false;
            QListWidget::verticalScrollbarAction(action);
            return;
        }
        auto verticalscrollbaraction_cb = qlistwidget_verticalscrollbaraction_callback;
        if (verticalscrollbaraction_cb) {
            int cbval1 = action;

            verticalscrollbaraction_cb(this, cbval1);
            return;
        }
        QListWidget::verticalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qlistwidget_horizontalscrollbaraction_isbase) {
            qlistwidget_horizontalscrollbaraction_isbase = false;
            QListWidget::horizontalScrollbarAction(action);
            return;
        }
        auto horizontalscrollbaraction_cb = qlistwidget_horizontalscrollbaraction_callback;
        if (horizontalscrollbaraction_cb) {
            int cbval1 = action;

            horizontalscrollbaraction_cb(this, cbval1);
            return;
        }
        QListWidget::horizontalScrollbarAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qlistwidget_verticalscrollbarvaluechanged_isbase) {
            qlistwidget_verticalscrollbarvaluechanged_isbase = false;
            QListWidget::verticalScrollbarValueChanged(value);
            return;
        }
        auto verticalscrollbarvaluechanged_cb = qlistwidget_verticalscrollbarvaluechanged_callback;
        if (verticalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            verticalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QListWidget::verticalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qlistwidget_horizontalscrollbarvaluechanged_isbase) {
            qlistwidget_horizontalscrollbarvaluechanged_isbase = false;
            QListWidget::horizontalScrollbarValueChanged(value);
            return;
        }
        auto horizontalscrollbarvaluechanged_cb = qlistwidget_horizontalscrollbarvaluechanged_callback;
        if (horizontalscrollbarvaluechanged_cb) {
            int cbval1 = value;

            horizontalscrollbarvaluechanged_cb(this, cbval1);
            return;
        }
        QListWidget::horizontalScrollbarValueChanged(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qlistwidget_closeeditor_isbase) {
            qlistwidget_closeeditor_isbase = false;
            QListWidget::closeEditor(editor, hint);
            return;
        }
        auto closeeditor_cb = qlistwidget_closeeditor_callback;
        if (closeeditor_cb) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            closeeditor_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::closeEditor(editor, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qlistwidget_commitdata_isbase) {
            qlistwidget_commitdata_isbase = false;
            QListWidget::commitData(editor);
            return;
        }
        auto commitdata_cb = qlistwidget_commitdata_callback;
        if (commitdata_cb) {
            QWidget* cbval1 = editor;

            commitdata_cb(this, cbval1);
            return;
        }
        QListWidget::commitData(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qlistwidget_editordestroyed_isbase) {
            qlistwidget_editordestroyed_isbase = false;
            QListWidget::editorDestroyed(editor);
            return;
        }
        auto editordestroyed_cb = qlistwidget_editordestroyed_callback;
        if (editordestroyed_cb) {
            QObject* cbval1 = editor;

            editordestroyed_cb(this, cbval1);
            return;
        }
        QListWidget::editorDestroyed(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qlistwidget_edit2_isbase) {
            qlistwidget_edit2_isbase = false;
            return QListWidget::edit(index, trigger, event);
        }
        auto edit2_cb = qlistwidget_edit2_callback;
        if (edit2_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = edit2_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QListWidget::edit(index, trigger, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qlistwidget_selectioncommand_isbase) {
            qlistwidget_selectioncommand_isbase = false;
            return QListWidget::selectionCommand(index, event);
        }
        auto selectioncommand_cb = qlistwidget_selectioncommand_callback;
        if (selectioncommand_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = selectioncommand_cb(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        }
        return QListWidget::selectionCommand(index, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlistwidget_focusnextprevchild_isbase) {
            qlistwidget_focusnextprevchild_isbase = false;
            return QListWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qlistwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qlistwidget_viewportevent_isbase) {
            qlistwidget_viewportevent_isbase = false;
            return QListWidget::viewportEvent(event);
        }
        auto viewportevent_cb = qlistwidget_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidget::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlistwidget_mousepressevent_isbase) {
            qlistwidget_mousepressevent_isbase = false;
            QListWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qlistwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QListWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlistwidget_mousedoubleclickevent_isbase) {
            qlistwidget_mousedoubleclickevent_isbase = false;
            QListWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qlistwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QListWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlistwidget_dragenterevent_isbase) {
            qlistwidget_dragenterevent_isbase = false;
            QListWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qlistwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QListWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlistwidget_focusinevent_isbase) {
            qlistwidget_focusinevent_isbase = false;
            QListWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qlistwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QListWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlistwidget_focusoutevent_isbase) {
            qlistwidget_focusoutevent_isbase = false;
            QListWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qlistwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QListWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlistwidget_keypressevent_isbase) {
            qlistwidget_keypressevent_isbase = false;
            QListWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qlistwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QListWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qlistwidget_inputmethodevent_isbase) {
            qlistwidget_inputmethodevent_isbase = false;
            QListWidget::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qlistwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QListWidget::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qlistwidget_eventfilter_isbase) {
            qlistwidget_eventfilter_isbase = false;
            return QListWidget::eventFilter(object, event);
        }
        auto eventfilter_cb = qlistwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QListWidget::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlistwidget_minimumsizehint_isbase) {
            qlistwidget_minimumsizehint_isbase = false;
            return QListWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = qlistwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QListWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlistwidget_sizehint_isbase) {
            qlistwidget_sizehint_isbase = false;
            return QListWidget::sizeHint();
        }
        auto sizehint_cb = qlistwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QListWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qlistwidget_setupviewport_isbase) {
            qlistwidget_setupviewport_isbase = false;
            QListWidget::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qlistwidget_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QListWidget::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlistwidget_contextmenuevent_isbase) {
            qlistwidget_contextmenuevent_isbase = false;
            QListWidget::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qlistwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QListWidget::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlistwidget_changeevent_isbase) {
            qlistwidget_changeevent_isbase = false;
            QListWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qlistwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QListWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlistwidget_initstyleoption_isbase) {
            qlistwidget_initstyleoption_isbase = false;
            QListWidget::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qlistwidget_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QListWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlistwidget_devtype_isbase) {
            qlistwidget_devtype_isbase = false;
            return QListWidget::devType();
        }
        auto devtype_cb = qlistwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QListWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlistwidget_setvisible_isbase) {
            qlistwidget_setvisible_isbase = false;
            QListWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = qlistwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QListWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlistwidget_heightforwidth_isbase) {
            qlistwidget_heightforwidth_isbase = false;
            return QListWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = qlistwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlistwidget_hasheightforwidth_isbase) {
            qlistwidget_hasheightforwidth_isbase = false;
            return QListWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qlistwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QListWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlistwidget_paintengine_isbase) {
            qlistwidget_paintengine_isbase = false;
            return QListWidget::paintEngine();
        }
        auto paintengine_cb = qlistwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QListWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlistwidget_keyreleaseevent_isbase) {
            qlistwidget_keyreleaseevent_isbase = false;
            QListWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qlistwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QListWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlistwidget_enterevent_isbase) {
            qlistwidget_enterevent_isbase = false;
            QListWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = qlistwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QListWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlistwidget_leaveevent_isbase) {
            qlistwidget_leaveevent_isbase = false;
            QListWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qlistwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QListWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlistwidget_moveevent_isbase) {
            qlistwidget_moveevent_isbase = false;
            QListWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = qlistwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QListWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlistwidget_closeevent_isbase) {
            qlistwidget_closeevent_isbase = false;
            QListWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = qlistwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QListWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlistwidget_tabletevent_isbase) {
            qlistwidget_tabletevent_isbase = false;
            QListWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qlistwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QListWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlistwidget_actionevent_isbase) {
            qlistwidget_actionevent_isbase = false;
            QListWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = qlistwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QListWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlistwidget_showevent_isbase) {
            qlistwidget_showevent_isbase = false;
            QListWidget::showEvent(event);
            return;
        }
        auto showevent_cb = qlistwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QListWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlistwidget_hideevent_isbase) {
            qlistwidget_hideevent_isbase = false;
            QListWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = qlistwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QListWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlistwidget_nativeevent_isbase) {
            qlistwidget_nativeevent_isbase = false;
            return QListWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qlistwidget_nativeevent_callback;
        if (nativeevent_cb) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = nativeevent_cb(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QListWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlistwidget_metric_isbase) {
            qlistwidget_metric_isbase = false;
            return QListWidget::metric(param1);
        }
        auto metric_cb = qlistwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlistwidget_initpainter_isbase) {
            qlistwidget_initpainter_isbase = false;
            QListWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = qlistwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QListWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlistwidget_redirected_isbase) {
            qlistwidget_redirected_isbase = false;
            return QListWidget::redirected(offset);
        }
        auto redirected_cb = qlistwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlistwidget_sharedpainter_isbase) {
            qlistwidget_sharedpainter_isbase = false;
            return QListWidget::sharedPainter();
        }
        auto sharedpainter_cb = qlistwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QListWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlistwidget_childevent_isbase) {
            qlistwidget_childevent_isbase = false;
            QListWidget::childEvent(event);
            return;
        }
        auto childevent_cb = qlistwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QListWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlistwidget_customevent_isbase) {
            qlistwidget_customevent_isbase = false;
            QListWidget::customEvent(event);
            return;
        }
        auto customevent_cb = qlistwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QListWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlistwidget_connectnotify_isbase) {
            qlistwidget_connectnotify_isbase = false;
            QListWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qlistwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QListWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlistwidget_disconnectnotify_isbase) {
            qlistwidget_disconnectnotify_isbase = false;
            QListWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qlistwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QListWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (qlistwidget_resizecontents_isbase) {
            qlistwidget_resizecontents_isbase = false;
            QListWidget::resizeContents(width, height);
            return;
        }
        auto resizecontents_cb = qlistwidget_resizecontents_callback;
        if (resizecontents_cb) {
            int cbval1 = width;
            int cbval2 = height;

            resizecontents_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::resizeContents(width, height);
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (qlistwidget_contentssize_isbase) {
            qlistwidget_contentssize_isbase = false;
            return QListWidget::contentsSize();
        }
        auto contentssize_cb = qlistwidget_contentssize_callback;
        if (contentssize_cb) {
            QSize* callback_ret = contentssize_cb();
            return *callback_ret;
        }
        return QListWidget::contentsSize();
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (qlistwidget_rectforindex_isbase) {
            qlistwidget_rectforindex_isbase = false;
            return QListWidget::rectForIndex(index);
        }
        auto rectforindex_cb = qlistwidget_rectforindex_callback;
        if (rectforindex_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = rectforindex_cb(this, cbval1);
            return *callback_ret;
        }
        return QListWidget::rectForIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (qlistwidget_setpositionforindex_isbase) {
            qlistwidget_setpositionforindex_isbase = false;
            QListWidget::setPositionForIndex(position, index);
            return;
        }
        auto setpositionforindex_cb = qlistwidget_setpositionforindex_callback;
        if (setpositionforindex_cb) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            setpositionforindex_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::setPositionForIndex(position, index);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qlistwidget_state_isbase) {
            qlistwidget_state_isbase = false;
            return QListWidget::state();
        }
        auto state_cb = qlistwidget_state_callback;
        if (state_cb) {
            int callback_ret = state_cb();
            return static_cast<VirtualQListWidget::State>(callback_ret);
        }
        return QListWidget::state();
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qlistwidget_setstate_isbase) {
            qlistwidget_setstate_isbase = false;
            QListWidget::setState(state);
            return;
        }
        auto setstate_cb = qlistwidget_setstate_callback;
        if (setstate_cb) {
            int cbval1 = static_cast<int>(state);

            setstate_cb(this, cbval1);
            return;
        }
        QListWidget::setState(state);
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qlistwidget_scheduledelayeditemslayout_isbase) {
            qlistwidget_scheduledelayeditemslayout_isbase = false;
            QListWidget::scheduleDelayedItemsLayout();
            return;
        }
        auto scheduledelayeditemslayout_cb = qlistwidget_scheduledelayeditemslayout_callback;
        if (scheduledelayeditemslayout_cb) {
            scheduledelayeditemslayout_cb();
            return;
        }
        QListWidget::scheduleDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qlistwidget_executedelayeditemslayout_isbase) {
            qlistwidget_executedelayeditemslayout_isbase = false;
            QListWidget::executeDelayedItemsLayout();
            return;
        }
        auto executedelayeditemslayout_cb = qlistwidget_executedelayeditemslayout_callback;
        if (executedelayeditemslayout_cb) {
            executedelayeditemslayout_cb();
            return;
        }
        QListWidget::executeDelayedItemsLayout();
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qlistwidget_setdirtyregion_isbase) {
            qlistwidget_setdirtyregion_isbase = false;
            QListWidget::setDirtyRegion(region);
            return;
        }
        auto setdirtyregion_cb = qlistwidget_setdirtyregion_callback;
        if (setdirtyregion_cb) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            setdirtyregion_cb(this, cbval1);
            return;
        }
        QListWidget::setDirtyRegion(region);
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qlistwidget_scrolldirtyregion_isbase) {
            qlistwidget_scrolldirtyregion_isbase = false;
            QListWidget::scrollDirtyRegion(dx, dy);
            return;
        }
        auto scrolldirtyregion_cb = qlistwidget_scrolldirtyregion_callback;
        if (scrolldirtyregion_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrolldirtyregion_cb(this, cbval1, cbval2);
            return;
        }
        QListWidget::scrollDirtyRegion(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qlistwidget_dirtyregionoffset_isbase) {
            qlistwidget_dirtyregionoffset_isbase = false;
            return QListWidget::dirtyRegionOffset();
        }
        auto dirtyregionoffset_cb = qlistwidget_dirtyregionoffset_callback;
        if (dirtyregionoffset_cb) {
            QPoint* callback_ret = dirtyregionoffset_cb();
            return *callback_ret;
        }
        return QListWidget::dirtyRegionOffset();
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qlistwidget_startautoscroll_isbase) {
            qlistwidget_startautoscroll_isbase = false;
            QListWidget::startAutoScroll();
            return;
        }
        auto startautoscroll_cb = qlistwidget_startautoscroll_callback;
        if (startautoscroll_cb) {
            startautoscroll_cb();
            return;
        }
        QListWidget::startAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qlistwidget_stopautoscroll_isbase) {
            qlistwidget_stopautoscroll_isbase = false;
            QListWidget::stopAutoScroll();
            return;
        }
        auto stopautoscroll_cb = qlistwidget_stopautoscroll_callback;
        if (stopautoscroll_cb) {
            stopautoscroll_cb();
            return;
        }
        QListWidget::stopAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qlistwidget_doautoscroll_isbase) {
            qlistwidget_doautoscroll_isbase = false;
            QListWidget::doAutoScroll();
            return;
        }
        auto doautoscroll_cb = qlistwidget_doautoscroll_callback;
        if (doautoscroll_cb) {
            doautoscroll_cb();
            return;
        }
        QListWidget::doAutoScroll();
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qlistwidget_dropindicatorposition_isbase) {
            qlistwidget_dropindicatorposition_isbase = false;
            return QListWidget::dropIndicatorPosition();
        }
        auto dropindicatorposition_cb = qlistwidget_dropindicatorposition_callback;
        if (dropindicatorposition_cb) {
            int callback_ret = dropindicatorposition_cb();
            return static_cast<VirtualQListWidget::DropIndicatorPosition>(callback_ret);
        }
        return QListWidget::dropIndicatorPosition();
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qlistwidget_setviewportmargins_isbase) {
            qlistwidget_setviewportmargins_isbase = false;
            QListWidget::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qlistwidget_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QListWidget::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qlistwidget_viewportmargins_isbase) {
            qlistwidget_viewportmargins_isbase = false;
            return QListWidget::viewportMargins();
        }
        auto viewportmargins_cb = qlistwidget_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QListWidget::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qlistwidget_drawframe_isbase) {
            qlistwidget_drawframe_isbase = false;
            QListWidget::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qlistwidget_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QListWidget::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlistwidget_updatemicrofocus_isbase) {
            qlistwidget_updatemicrofocus_isbase = false;
            QListWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qlistwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QListWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlistwidget_create_isbase) {
            qlistwidget_create_isbase = false;
            QListWidget::create();
            return;
        }
        auto create_cb = qlistwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QListWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlistwidget_destroy_isbase) {
            qlistwidget_destroy_isbase = false;
            QListWidget::destroy();
            return;
        }
        auto destroy_cb = qlistwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QListWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlistwidget_focusnextchild_isbase) {
            qlistwidget_focusnextchild_isbase = false;
            return QListWidget::focusNextChild();
        }
        auto focusnextchild_cb = qlistwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QListWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlistwidget_focuspreviouschild_isbase) {
            qlistwidget_focuspreviouschild_isbase = false;
            return QListWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qlistwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QListWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlistwidget_sender_isbase) {
            qlistwidget_sender_isbase = false;
            return QListWidget::sender();
        }
        auto sender_cb = qlistwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QListWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlistwidget_sendersignalindex_isbase) {
            qlistwidget_sendersignalindex_isbase = false;
            return QListWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = qlistwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QListWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlistwidget_receivers_isbase) {
            qlistwidget_receivers_isbase = false;
            return QListWidget::receivers(signal);
        }
        auto receivers_cb = qlistwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QListWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlistwidget_issignalconnected_isbase) {
            qlistwidget_issignalconnected_isbase = false;
            return QListWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qlistwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QListWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qlistwidget_getdecodedmetricf_isbase) {
            qlistwidget_getdecodedmetricf_isbase = false;
            return QListWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qlistwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QListWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QListWidget_DropEvent(QListWidget* self, QDropEvent* event);
    friend void QListWidget_SuperDropEvent(QListWidget* self, QDropEvent* event);
    friend bool QListWidget_Event(QListWidget* self, QEvent* e);
    friend bool QListWidget_SuperEvent(QListWidget* self, QEvent* e);
    friend libqt_list /* of libqt_string */ QListWidget_MimeTypes(const QListWidget* self);
    friend libqt_list /* of libqt_string */ QListWidget_SuperMimeTypes(const QListWidget* self);
    friend QMimeData* QListWidget_MimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items);
    friend QMimeData* QListWidget_SuperMimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items);
    friend bool QListWidget_DropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
    friend bool QListWidget_SuperDropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
    friend int QListWidget_SupportedDropActions(const QListWidget* self);
    friend int QListWidget_SuperSupportedDropActions(const QListWidget* self);
    friend void QListWidget_ScrollContentsBy(QListWidget* self, int dx, int dy);
    friend void QListWidget_SuperScrollContentsBy(QListWidget* self, int dx, int dy);
    friend void QListWidget_DataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QListWidget_SuperDataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QListWidget_RowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_SuperRowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_RowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_SuperRowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_MouseMoveEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_SuperMouseMoveEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_MouseReleaseEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_SuperMouseReleaseEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_WheelEvent(QListWidget* self, QWheelEvent* e);
    friend void QListWidget_SuperWheelEvent(QListWidget* self, QWheelEvent* e);
    friend void QListWidget_TimerEvent(QListWidget* self, QTimerEvent* e);
    friend void QListWidget_SuperTimerEvent(QListWidget* self, QTimerEvent* e);
    friend void QListWidget_ResizeEvent(QListWidget* self, QResizeEvent* e);
    friend void QListWidget_SuperResizeEvent(QListWidget* self, QResizeEvent* e);
    friend void QListWidget_DragMoveEvent(QListWidget* self, QDragMoveEvent* e);
    friend void QListWidget_SuperDragMoveEvent(QListWidget* self, QDragMoveEvent* e);
    friend void QListWidget_DragLeaveEvent(QListWidget* self, QDragLeaveEvent* e);
    friend void QListWidget_SuperDragLeaveEvent(QListWidget* self, QDragLeaveEvent* e);
    friend void QListWidget_StartDrag(QListWidget* self, int supportedActions);
    friend void QListWidget_SuperStartDrag(QListWidget* self, int supportedActions);
    friend void QListWidget_InitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option);
    friend void QListWidget_SuperInitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option);
    friend void QListWidget_PaintEvent(QListWidget* self, QPaintEvent* e);
    friend void QListWidget_SuperPaintEvent(QListWidget* self, QPaintEvent* e);
    friend int QListWidget_HorizontalOffset(const QListWidget* self);
    friend int QListWidget_SuperHorizontalOffset(const QListWidget* self);
    friend int QListWidget_VerticalOffset(const QListWidget* self);
    friend int QListWidget_SuperVerticalOffset(const QListWidget* self);
    friend QModelIndex* QListWidget_MoveCursor(QListWidget* self, int cursorAction, int modifiers);
    friend QModelIndex* QListWidget_SuperMoveCursor(QListWidget* self, int cursorAction, int modifiers);
    friend void QListWidget_SetSelection(QListWidget* self, const QRect* rect, int command);
    friend void QListWidget_SuperSetSelection(QListWidget* self, const QRect* rect, int command);
    friend QRegion* QListWidget_VisualRegionForSelection(const QListWidget* self, const QItemSelection* selection);
    friend QRegion* QListWidget_SuperVisualRegionForSelection(const QListWidget* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QListWidget_SelectedIndexes(const QListWidget* self);
    friend libqt_list /* of QModelIndex* */ QListWidget_SuperSelectedIndexes(const QListWidget* self);
    friend void QListWidget_UpdateGeometries(QListWidget* self);
    friend void QListWidget_SuperUpdateGeometries(QListWidget* self);
    friend bool QListWidget_IsIndexHidden(const QListWidget* self, const QModelIndex* index);
    friend bool QListWidget_SuperIsIndexHidden(const QListWidget* self, const QModelIndex* index);
    friend void QListWidget_SelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QListWidget_SuperSelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QListWidget_CurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QListWidget_SuperCurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* QListWidget_ViewportSizeHint(const QListWidget* self);
    friend QSize* QListWidget_SuperViewportSizeHint(const QListWidget* self);
    friend void QListWidget_UpdateEditorData(QListWidget* self);
    friend void QListWidget_SuperUpdateEditorData(QListWidget* self);
    friend void QListWidget_UpdateEditorGeometries(QListWidget* self);
    friend void QListWidget_SuperUpdateEditorGeometries(QListWidget* self);
    friend void QListWidget_VerticalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_SuperVerticalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_HorizontalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_SuperHorizontalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_VerticalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_SuperVerticalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_HorizontalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_SuperHorizontalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_CloseEditor(QListWidget* self, QWidget* editor, int hint);
    friend void QListWidget_SuperCloseEditor(QListWidget* self, QWidget* editor, int hint);
    friend void QListWidget_CommitData(QListWidget* self, QWidget* editor);
    friend void QListWidget_SuperCommitData(QListWidget* self, QWidget* editor);
    friend void QListWidget_EditorDestroyed(QListWidget* self, QObject* editor);
    friend void QListWidget_SuperEditorDestroyed(QListWidget* self, QObject* editor);
    friend bool QListWidget_Edit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QListWidget_SuperEdit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QListWidget_SelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event);
    friend int QListWidget_SuperSelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event);
    friend bool QListWidget_FocusNextPrevChild(QListWidget* self, bool next);
    friend bool QListWidget_SuperFocusNextPrevChild(QListWidget* self, bool next);
    friend bool QListWidget_ViewportEvent(QListWidget* self, QEvent* event);
    friend bool QListWidget_SuperViewportEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_MousePressEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_SuperMousePressEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_MouseDoubleClickEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_SuperMouseDoubleClickEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_DragEnterEvent(QListWidget* self, QDragEnterEvent* event);
    friend void QListWidget_SuperDragEnterEvent(QListWidget* self, QDragEnterEvent* event);
    friend void QListWidget_FocusInEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_SuperFocusInEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_FocusOutEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_SuperFocusOutEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_KeyPressEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_SuperKeyPressEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_InputMethodEvent(QListWidget* self, QInputMethodEvent* event);
    friend void QListWidget_SuperInputMethodEvent(QListWidget* self, QInputMethodEvent* event);
    friend bool QListWidget_EventFilter(QListWidget* self, QObject* object, QEvent* event);
    friend bool QListWidget_SuperEventFilter(QListWidget* self, QObject* object, QEvent* event);
    friend void QListWidget_ContextMenuEvent(QListWidget* self, QContextMenuEvent* param1);
    friend void QListWidget_SuperContextMenuEvent(QListWidget* self, QContextMenuEvent* param1);
    friend void QListWidget_ChangeEvent(QListWidget* self, QEvent* param1);
    friend void QListWidget_SuperChangeEvent(QListWidget* self, QEvent* param1);
    friend void QListWidget_InitStyleOption(const QListWidget* self, QStyleOptionFrame* option);
    friend void QListWidget_SuperInitStyleOption(const QListWidget* self, QStyleOptionFrame* option);
    friend void QListWidget_KeyReleaseEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_SuperKeyReleaseEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_EnterEvent(QListWidget* self, QEnterEvent* event);
    friend void QListWidget_SuperEnterEvent(QListWidget* self, QEnterEvent* event);
    friend void QListWidget_LeaveEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_SuperLeaveEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_MoveEvent(QListWidget* self, QMoveEvent* event);
    friend void QListWidget_SuperMoveEvent(QListWidget* self, QMoveEvent* event);
    friend void QListWidget_CloseEvent(QListWidget* self, QCloseEvent* event);
    friend void QListWidget_SuperCloseEvent(QListWidget* self, QCloseEvent* event);
    friend void QListWidget_TabletEvent(QListWidget* self, QTabletEvent* event);
    friend void QListWidget_SuperTabletEvent(QListWidget* self, QTabletEvent* event);
    friend void QListWidget_ActionEvent(QListWidget* self, QActionEvent* event);
    friend void QListWidget_SuperActionEvent(QListWidget* self, QActionEvent* event);
    friend void QListWidget_ShowEvent(QListWidget* self, QShowEvent* event);
    friend void QListWidget_SuperShowEvent(QListWidget* self, QShowEvent* event);
    friend void QListWidget_HideEvent(QListWidget* self, QHideEvent* event);
    friend void QListWidget_SuperHideEvent(QListWidget* self, QHideEvent* event);
    friend bool QListWidget_NativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QListWidget_SuperNativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QListWidget_Metric(const QListWidget* self, int param1);
    friend int QListWidget_SuperMetric(const QListWidget* self, int param1);
    friend void QListWidget_InitPainter(const QListWidget* self, QPainter* painter);
    friend void QListWidget_SuperInitPainter(const QListWidget* self, QPainter* painter);
    friend QPaintDevice* QListWidget_Redirected(const QListWidget* self, QPoint* offset);
    friend QPaintDevice* QListWidget_SuperRedirected(const QListWidget* self, QPoint* offset);
    friend QPainter* QListWidget_SharedPainter(const QListWidget* self);
    friend QPainter* QListWidget_SuperSharedPainter(const QListWidget* self);
    friend void QListWidget_ChildEvent(QListWidget* self, QChildEvent* event);
    friend void QListWidget_SuperChildEvent(QListWidget* self, QChildEvent* event);
    friend void QListWidget_CustomEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_SuperCustomEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_ConnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_SuperConnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_DisconnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_SuperDisconnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_ResizeContents(QListWidget* self, int width, int height);
    friend void QListWidget_SuperResizeContents(QListWidget* self, int width, int height);
    friend QSize* QListWidget_ContentsSize(const QListWidget* self);
    friend QSize* QListWidget_SuperContentsSize(const QListWidget* self);
    friend QRect* QListWidget_RectForIndex(const QListWidget* self, const QModelIndex* index);
    friend QRect* QListWidget_SuperRectForIndex(const QListWidget* self, const QModelIndex* index);
    friend void QListWidget_SetPositionForIndex(QListWidget* self, const QPoint* position, const QModelIndex* index);
    friend void QListWidget_SuperSetPositionForIndex(QListWidget* self, const QPoint* position, const QModelIndex* index);
    friend int QListWidget_State(const QListWidget* self);
    friend int QListWidget_SuperState(const QListWidget* self);
    friend void QListWidget_SetState(QListWidget* self, int state);
    friend void QListWidget_SuperSetState(QListWidget* self, int state);
    friend void QListWidget_ScheduleDelayedItemsLayout(QListWidget* self);
    friend void QListWidget_SuperScheduleDelayedItemsLayout(QListWidget* self);
    friend void QListWidget_ExecuteDelayedItemsLayout(QListWidget* self);
    friend void QListWidget_SuperExecuteDelayedItemsLayout(QListWidget* self);
    friend void QListWidget_SetDirtyRegion(QListWidget* self, const QRegion* region);
    friend void QListWidget_SuperSetDirtyRegion(QListWidget* self, const QRegion* region);
    friend void QListWidget_ScrollDirtyRegion(QListWidget* self, int dx, int dy);
    friend void QListWidget_SuperScrollDirtyRegion(QListWidget* self, int dx, int dy);
    friend QPoint* QListWidget_DirtyRegionOffset(const QListWidget* self);
    friend QPoint* QListWidget_SuperDirtyRegionOffset(const QListWidget* self);
    friend void QListWidget_StartAutoScroll(QListWidget* self);
    friend void QListWidget_SuperStartAutoScroll(QListWidget* self);
    friend void QListWidget_StopAutoScroll(QListWidget* self);
    friend void QListWidget_SuperStopAutoScroll(QListWidget* self);
    friend void QListWidget_DoAutoScroll(QListWidget* self);
    friend void QListWidget_SuperDoAutoScroll(QListWidget* self);
    friend int QListWidget_DropIndicatorPosition(const QListWidget* self);
    friend int QListWidget_SuperDropIndicatorPosition(const QListWidget* self);
    friend void QListWidget_SetViewportMargins(QListWidget* self, int left, int top, int right, int bottom);
    friend void QListWidget_SuperSetViewportMargins(QListWidget* self, int left, int top, int right, int bottom);
    friend QMargins* QListWidget_ViewportMargins(const QListWidget* self);
    friend QMargins* QListWidget_SuperViewportMargins(const QListWidget* self);
    friend void QListWidget_DrawFrame(QListWidget* self, QPainter* param1);
    friend void QListWidget_SuperDrawFrame(QListWidget* self, QPainter* param1);
    friend void QListWidget_UpdateMicroFocus(QListWidget* self);
    friend void QListWidget_SuperUpdateMicroFocus(QListWidget* self);
    friend void QListWidget_Create(QListWidget* self);
    friend void QListWidget_SuperCreate(QListWidget* self);
    friend void QListWidget_Destroy(QListWidget* self);
    friend void QListWidget_SuperDestroy(QListWidget* self);
    friend bool QListWidget_FocusNextChild(QListWidget* self);
    friend bool QListWidget_SuperFocusNextChild(QListWidget* self);
    friend bool QListWidget_FocusPreviousChild(QListWidget* self);
    friend bool QListWidget_SuperFocusPreviousChild(QListWidget* self);
    friend QObject* QListWidget_Sender(const QListWidget* self);
    friend QObject* QListWidget_SuperSender(const QListWidget* self);
    friend int QListWidget_SenderSignalIndex(const QListWidget* self);
    friend int QListWidget_SuperSenderSignalIndex(const QListWidget* self);
    friend int QListWidget_Receivers(const QListWidget* self, const char* signal);
    friend int QListWidget_SuperReceivers(const QListWidget* self, const char* signal);
    friend bool QListWidget_IsSignalConnected(const QListWidget* self, const QMetaMethod* signal);
    friend bool QListWidget_SuperIsSignalConnected(const QListWidget* self, const QMetaMethod* signal);
    friend double QListWidget_GetDecodedMetricF(const QListWidget* self, int metricA, int metricB);
    friend double QListWidget_SuperGetDecodedMetricF(const QListWidget* self, int metricA, int metricB);
};

#endif
