#pragma once
#ifndef SRCC_LIBVIRTUALQTABLEWIDGET_H
#define SRCC_LIBVIRTUALQTABLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTableWidgetItem so that we can call protected methods
class VirtualQTableWidgetItem final : public QTableWidgetItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQTableWidgetItem = true;

    // Virtual class public types (including callbacks)
    using QTableWidgetItem_Clone_Callback = QTableWidgetItem* (*)();
    using QTableWidgetItem_Data_Callback = QVariant* (*)(const QTableWidgetItem*, int);
    using QTableWidgetItem_SetData_Callback = void (*)(QTableWidgetItem*, int, QVariant*);
    using QTableWidgetItem_OperatorLesser_Callback = bool (*)(const QTableWidgetItem*, QTableWidgetItem*);
    using QTableWidgetItem_Read_Callback = void (*)(QTableWidgetItem*, QDataStream*);
    using QTableWidgetItem_Write_Callback = void (*)(const QTableWidgetItem*, QDataStream*);

  protected:
    // Instance callback storage
    QTableWidgetItem_Clone_Callback qtablewidgetitem_clone_callback = nullptr;
    QTableWidgetItem_Data_Callback qtablewidgetitem_data_callback = nullptr;
    QTableWidgetItem_SetData_Callback qtablewidgetitem_setdata_callback = nullptr;
    QTableWidgetItem_OperatorLesser_Callback qtablewidgetitem_operatorlesser_callback = nullptr;
    QTableWidgetItem_Read_Callback qtablewidgetitem_read_callback = nullptr;
    QTableWidgetItem_Write_Callback qtablewidgetitem_write_callback = nullptr;

    // Instance base flags
    mutable bool qtablewidgetitem_clone_isbase = false;
    mutable bool qtablewidgetitem_data_isbase = false;
    mutable bool qtablewidgetitem_setdata_isbase = false;
    mutable bool qtablewidgetitem_operatorlesser_isbase = false;
    mutable bool qtablewidgetitem_read_isbase = false;
    mutable bool qtablewidgetitem_write_isbase = false;

  public:
    VirtualQTableWidgetItem() : QTableWidgetItem(){};
    VirtualQTableWidgetItem(const QString& text) : QTableWidgetItem(text){};
    VirtualQTableWidgetItem(const QIcon& icon, const QString& text) : QTableWidgetItem(icon, text){};
    VirtualQTableWidgetItem(const QTableWidgetItem& other) : QTableWidgetItem(other){};
    VirtualQTableWidgetItem(int typeVal) : QTableWidgetItem(typeVal){};
    VirtualQTableWidgetItem(const QString& text, int typeVal) : QTableWidgetItem(text, typeVal){};
    VirtualQTableWidgetItem(const QIcon& icon, const QString& text, int typeVal) : QTableWidgetItem(icon, text, typeVal){};

    ~VirtualQTableWidgetItem() {
        qtablewidgetitem_clone_callback = nullptr;
        qtablewidgetitem_data_callback = nullptr;
        qtablewidgetitem_setdata_callback = nullptr;
        qtablewidgetitem_operatorlesser_callback = nullptr;
        qtablewidgetitem_read_callback = nullptr;
        qtablewidgetitem_write_callback = nullptr;
    }

    // Callback setters
    inline void setQTableWidgetItem_Clone_Callback(QTableWidgetItem_Clone_Callback cb) { qtablewidgetitem_clone_callback = cb; }
    inline void setQTableWidgetItem_Data_Callback(QTableWidgetItem_Data_Callback cb) { qtablewidgetitem_data_callback = cb; }
    inline void setQTableWidgetItem_SetData_Callback(QTableWidgetItem_SetData_Callback cb) { qtablewidgetitem_setdata_callback = cb; }
    inline void setQTableWidgetItem_OperatorLesser_Callback(QTableWidgetItem_OperatorLesser_Callback cb) { qtablewidgetitem_operatorlesser_callback = cb; }
    inline void setQTableWidgetItem_Read_Callback(QTableWidgetItem_Read_Callback cb) { qtablewidgetitem_read_callback = cb; }
    inline void setQTableWidgetItem_Write_Callback(QTableWidgetItem_Write_Callback cb) { qtablewidgetitem_write_callback = cb; }

    // Base flag setters
    inline void setQTableWidgetItem_Clone_IsBase(bool value) const { qtablewidgetitem_clone_isbase = value; }
    inline void setQTableWidgetItem_Data_IsBase(bool value) const { qtablewidgetitem_data_isbase = value; }
    inline void setQTableWidgetItem_SetData_IsBase(bool value) const { qtablewidgetitem_setdata_isbase = value; }
    inline void setQTableWidgetItem_OperatorLesser_IsBase(bool value) const { qtablewidgetitem_operatorlesser_isbase = value; }
    inline void setQTableWidgetItem_Read_IsBase(bool value) const { qtablewidgetitem_read_isbase = value; }
    inline void setQTableWidgetItem_Write_IsBase(bool value) const { qtablewidgetitem_write_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QTableWidgetItem* clone() const override {
        if (qtablewidgetitem_clone_isbase) {
            qtablewidgetitem_clone_isbase = false;
            return QTableWidgetItem::clone();
        } else if (qtablewidgetitem_clone_callback != nullptr) {
            QTableWidgetItem* callback_ret = qtablewidgetitem_clone_callback();
            return callback_ret;
        } else {
            return QTableWidgetItem::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int role) const override {
        if (qtablewidgetitem_data_isbase) {
            qtablewidgetitem_data_isbase = false;
            return QTableWidgetItem::data(role);
        } else if (qtablewidgetitem_data_callback != nullptr) {
            int cbval1 = role;

            QVariant* callback_ret = qtablewidgetitem_data_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableWidgetItem::data(role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(int role, const QVariant& value) override {
        if (qtablewidgetitem_setdata_isbase) {
            qtablewidgetitem_setdata_isbase = false;
            QTableWidgetItem::setData(role, value);
        } else if (qtablewidgetitem_setdata_callback != nullptr) {
            int cbval1 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qtablewidgetitem_setdata_callback(this, cbval1, cbval2);
        } else {
            QTableWidgetItem::setData(role, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QTableWidgetItem& other) const override {
        if (qtablewidgetitem_operatorlesser_isbase) {
            qtablewidgetitem_operatorlesser_isbase = false;
            return QTableWidgetItem::operator<(other);
        } else if (qtablewidgetitem_operatorlesser_callback != nullptr) {
            const QTableWidgetItem& other_ret = other;
            // Cast returned reference into pointer
            QTableWidgetItem* cbval1 = const_cast<QTableWidgetItem*>(&other_ret);

            bool callback_ret = qtablewidgetitem_operatorlesser_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidgetItem::operator<(other);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qtablewidgetitem_read_isbase) {
            qtablewidgetitem_read_isbase = false;
            QTableWidgetItem::read(in);
        } else if (qtablewidgetitem_read_callback != nullptr) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;

            qtablewidgetitem_read_callback(this, cbval1);
        } else {
            QTableWidgetItem::read(in);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qtablewidgetitem_write_isbase) {
            qtablewidgetitem_write_isbase = false;
            QTableWidgetItem::write(out);
        } else if (qtablewidgetitem_write_callback != nullptr) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;

            qtablewidgetitem_write_callback(this, cbval1);
        } else {
            QTableWidgetItem::write(out);
        }
    }
};

// This class is a subclass of QTableWidget so that we can call protected methods
class VirtualQTableWidget final : public QTableWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQTableWidget = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTableWidget_Metacall_Callback = int (*)(QTableWidget*, int, int, void**);
    using QTableWidget_Event_Callback = bool (*)(QTableWidget*, QEvent*);
    using QTableWidget_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
    using QTableWidget_MimeData_Callback = QMimeData* (*)(const QTableWidget*, libqt_list /* of QTableWidgetItem* */);
    using QTableWidget_DropMimeData_Callback = bool (*)(QTableWidget*, int, int, QMimeData*, int);
    using QTableWidget_SupportedDropActions_Callback = int (*)();
    using QTableWidget_DropEvent_Callback = void (*)(QTableWidget*, QDropEvent*);
    using QTableWidget_SetRootIndex_Callback = void (*)(QTableWidget*, QModelIndex*);
    using QTableWidget_SetSelectionModel_Callback = void (*)(QTableWidget*, QItemSelectionModel*);
    using QTableWidget_DoItemsLayout_Callback = void (*)();
    using QTableWidget_VisualRect_Callback = QRect* (*)(const QTableWidget*, QModelIndex*);
    using QTableWidget_ScrollTo_Callback = void (*)(QTableWidget*, QModelIndex*, int);
    using QTableWidget_IndexAt_Callback = QModelIndex* (*)(const QTableWidget*, QPoint*);
    using QTableWidget_ScrollContentsBy_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_InitViewItemOption_Callback = void (*)(const QTableWidget*, QStyleOptionViewItem*);
    using QTableWidget_PaintEvent_Callback = void (*)(QTableWidget*, QPaintEvent*);
    using QTableWidget_TimerEvent_Callback = void (*)(QTableWidget*, QTimerEvent*);
    using QTableWidget_HorizontalOffset_Callback = int (*)();
    using QTableWidget_VerticalOffset_Callback = int (*)();
    using QTableWidget_MoveCursor_Callback = QModelIndex* (*)(QTableWidget*, int, int);
    using QTableWidget_SetSelection_Callback = void (*)(QTableWidget*, QRect*, int);
    using QTableWidget_VisualRegionForSelection_Callback = QRegion* (*)(const QTableWidget*, QItemSelection*);
    using QTableWidget_SelectedIndexes_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QTableWidget_UpdateGeometries_Callback = void (*)();
    using QTableWidget_ViewportSizeHint_Callback = QSize* (*)();
    using QTableWidget_SizeHintForRow_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_SizeHintForColumn_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_VerticalScrollbarAction_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_HorizontalScrollbarAction_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_IsIndexHidden_Callback = bool (*)(const QTableWidget*, QModelIndex*);
    using QTableWidget_SelectionChanged_Callback = void (*)(QTableWidget*, QItemSelection*, QItemSelection*);
    using QTableWidget_CurrentChanged_Callback = void (*)(QTableWidget*, QModelIndex*, QModelIndex*);
    using QTableWidget_KeyboardSearch_Callback = void (*)(QTableWidget*, libqt_string);
    using QTableWidget_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTableWidget*, QModelIndex*);
    using QTableWidget_InputMethodQuery_Callback = QVariant* (*)(const QTableWidget*, int);
    using QTableWidget_Reset_Callback = void (*)();
    using QTableWidget_SelectAll_Callback = void (*)();
    using QTableWidget_DataChanged_Callback = void (*)(QTableWidget*, QModelIndex*, QModelIndex*, libqt_list /* of int */);
    using QTableWidget_RowsInserted_Callback = void (*)(QTableWidget*, QModelIndex*, int, int);
    using QTableWidget_RowsAboutToBeRemoved_Callback = void (*)(QTableWidget*, QModelIndex*, int, int);
    using QTableWidget_UpdateEditorData_Callback = void (*)();
    using QTableWidget_UpdateEditorGeometries_Callback = void (*)();
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
    using QTableWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QTableWidget_SizeHint_Callback = QSize* (*)();
    using QTableWidget_SetupViewport_Callback = void (*)(QTableWidget*, QWidget*);
    using QTableWidget_WheelEvent_Callback = void (*)(QTableWidget*, QWheelEvent*);
    using QTableWidget_ContextMenuEvent_Callback = void (*)(QTableWidget*, QContextMenuEvent*);
    using QTableWidget_ChangeEvent_Callback = void (*)(QTableWidget*, QEvent*);
    using QTableWidget_InitStyleOption_Callback = void (*)(const QTableWidget*, QStyleOptionFrame*);
    using QTableWidget_DevType_Callback = int (*)();
    using QTableWidget_SetVisible_Callback = void (*)(QTableWidget*, bool);
    using QTableWidget_HeightForWidth_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_HasHeightForWidth_Callback = bool (*)();
    using QTableWidget_PaintEngine_Callback = QPaintEngine* (*)();
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
    using QTableWidget_SharedPainter_Callback = QPainter* (*)();
    using QTableWidget_ChildEvent_Callback = void (*)(QTableWidget*, QChildEvent*);
    using QTableWidget_CustomEvent_Callback = void (*)(QTableWidget*, QEvent*);
    using QTableWidget_ConnectNotify_Callback = void (*)(QTableWidget*, QMetaMethod*);
    using QTableWidget_DisconnectNotify_Callback = void (*)(QTableWidget*, QMetaMethod*);
    using QTableWidget_RowMoved_Callback = void (*)(QTableWidget*, int, int, int);
    using QTableWidget_ColumnMoved_Callback = void (*)(QTableWidget*, int, int, int);
    using QTableWidget_RowResized_Callback = void (*)(QTableWidget*, int, int, int);
    using QTableWidget_ColumnResized_Callback = void (*)(QTableWidget*, int, int, int);
    using QTableWidget_RowCountChanged_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_ColumnCountChanged_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_State_Callback = int (*)();
    using QTableWidget_SetState_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QTableWidget_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QTableWidget_SetDirtyRegion_Callback = void (*)(QTableWidget*, QRegion*);
    using QTableWidget_ScrollDirtyRegion_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_DirtyRegionOffset_Callback = QPoint* (*)();
    using QTableWidget_StartAutoScroll_Callback = void (*)();
    using QTableWidget_StopAutoScroll_Callback = void (*)();
    using QTableWidget_DoAutoScroll_Callback = void (*)();
    using QTableWidget_DropIndicatorPosition_Callback = int (*)();
    using QTableWidget_SetViewportMargins_Callback = void (*)(QTableWidget*, int, int, int, int);
    using QTableWidget_ViewportMargins_Callback = QMargins* (*)();
    using QTableWidget_DrawFrame_Callback = void (*)(QTableWidget*, QPainter*);
    using QTableWidget_UpdateMicroFocus_Callback = void (*)();
    using QTableWidget_Create_Callback = void (*)();
    using QTableWidget_Destroy_Callback = void (*)();
    using QTableWidget_FocusNextChild_Callback = bool (*)();
    using QTableWidget_FocusPreviousChild_Callback = bool (*)();
    using QTableWidget_Sender_Callback = QObject* (*)();
    using QTableWidget_SenderSignalIndex_Callback = int (*)();
    using QTableWidget_Receivers_Callback = int (*)(const QTableWidget*, const char*);
    using QTableWidget_IsSignalConnected_Callback = bool (*)(const QTableWidget*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    QTableWidget_RowMoved_Callback qtablewidget_rowmoved_callback = nullptr;
    QTableWidget_ColumnMoved_Callback qtablewidget_columnmoved_callback = nullptr;
    QTableWidget_RowResized_Callback qtablewidget_rowresized_callback = nullptr;
    QTableWidget_ColumnResized_Callback qtablewidget_columnresized_callback = nullptr;
    QTableWidget_RowCountChanged_Callback qtablewidget_rowcountchanged_callback = nullptr;
    QTableWidget_ColumnCountChanged_Callback qtablewidget_columncountchanged_callback = nullptr;
    QTableWidget_State_Callback qtablewidget_state_callback = nullptr;
    QTableWidget_SetState_Callback qtablewidget_setstate_callback = nullptr;
    QTableWidget_ScheduleDelayedItemsLayout_Callback qtablewidget_scheduledelayeditemslayout_callback = nullptr;
    QTableWidget_ExecuteDelayedItemsLayout_Callback qtablewidget_executedelayeditemslayout_callback = nullptr;
    QTableWidget_SetDirtyRegion_Callback qtablewidget_setdirtyregion_callback = nullptr;
    QTableWidget_ScrollDirtyRegion_Callback qtablewidget_scrolldirtyregion_callback = nullptr;
    QTableWidget_DirtyRegionOffset_Callback qtablewidget_dirtyregionoffset_callback = nullptr;
    QTableWidget_StartAutoScroll_Callback qtablewidget_startautoscroll_callback = nullptr;
    QTableWidget_StopAutoScroll_Callback qtablewidget_stopautoscroll_callback = nullptr;
    QTableWidget_DoAutoScroll_Callback qtablewidget_doautoscroll_callback = nullptr;
    QTableWidget_DropIndicatorPosition_Callback qtablewidget_dropindicatorposition_callback = nullptr;
    QTableWidget_SetViewportMargins_Callback qtablewidget_setviewportmargins_callback = nullptr;
    QTableWidget_ViewportMargins_Callback qtablewidget_viewportmargins_callback = nullptr;
    QTableWidget_DrawFrame_Callback qtablewidget_drawframe_callback = nullptr;
    QTableWidget_UpdateMicroFocus_Callback qtablewidget_updatemicrofocus_callback = nullptr;
    QTableWidget_Create_Callback qtablewidget_create_callback = nullptr;
    QTableWidget_Destroy_Callback qtablewidget_destroy_callback = nullptr;
    QTableWidget_FocusNextChild_Callback qtablewidget_focusnextchild_callback = nullptr;
    QTableWidget_FocusPreviousChild_Callback qtablewidget_focuspreviouschild_callback = nullptr;
    QTableWidget_Sender_Callback qtablewidget_sender_callback = nullptr;
    QTableWidget_SenderSignalIndex_Callback qtablewidget_sendersignalindex_callback = nullptr;
    QTableWidget_Receivers_Callback qtablewidget_receivers_callback = nullptr;
    QTableWidget_IsSignalConnected_Callback qtablewidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtablewidget_metacall_isbase = false;
    mutable bool qtablewidget_event_isbase = false;
    mutable bool qtablewidget_mimetypes_isbase = false;
    mutable bool qtablewidget_mimedata_isbase = false;
    mutable bool qtablewidget_dropmimedata_isbase = false;
    mutable bool qtablewidget_supporteddropactions_isbase = false;
    mutable bool qtablewidget_dropevent_isbase = false;
    mutable bool qtablewidget_setrootindex_isbase = false;
    mutable bool qtablewidget_setselectionmodel_isbase = false;
    mutable bool qtablewidget_doitemslayout_isbase = false;
    mutable bool qtablewidget_visualrect_isbase = false;
    mutable bool qtablewidget_scrollto_isbase = false;
    mutable bool qtablewidget_indexat_isbase = false;
    mutable bool qtablewidget_scrollcontentsby_isbase = false;
    mutable bool qtablewidget_initviewitemoption_isbase = false;
    mutable bool qtablewidget_paintevent_isbase = false;
    mutable bool qtablewidget_timerevent_isbase = false;
    mutable bool qtablewidget_horizontaloffset_isbase = false;
    mutable bool qtablewidget_verticaloffset_isbase = false;
    mutable bool qtablewidget_movecursor_isbase = false;
    mutable bool qtablewidget_setselection_isbase = false;
    mutable bool qtablewidget_visualregionforselection_isbase = false;
    mutable bool qtablewidget_selectedindexes_isbase = false;
    mutable bool qtablewidget_updategeometries_isbase = false;
    mutable bool qtablewidget_viewportsizehint_isbase = false;
    mutable bool qtablewidget_sizehintforrow_isbase = false;
    mutable bool qtablewidget_sizehintforcolumn_isbase = false;
    mutable bool qtablewidget_verticalscrollbaraction_isbase = false;
    mutable bool qtablewidget_horizontalscrollbaraction_isbase = false;
    mutable bool qtablewidget_isindexhidden_isbase = false;
    mutable bool qtablewidget_selectionchanged_isbase = false;
    mutable bool qtablewidget_currentchanged_isbase = false;
    mutable bool qtablewidget_keyboardsearch_isbase = false;
    mutable bool qtablewidget_itemdelegateforindex_isbase = false;
    mutable bool qtablewidget_inputmethodquery_isbase = false;
    mutable bool qtablewidget_reset_isbase = false;
    mutable bool qtablewidget_selectall_isbase = false;
    mutable bool qtablewidget_datachanged_isbase = false;
    mutable bool qtablewidget_rowsinserted_isbase = false;
    mutable bool qtablewidget_rowsabouttoberemoved_isbase = false;
    mutable bool qtablewidget_updateeditordata_isbase = false;
    mutable bool qtablewidget_updateeditorgeometries_isbase = false;
    mutable bool qtablewidget_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qtablewidget_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qtablewidget_closeeditor_isbase = false;
    mutable bool qtablewidget_commitdata_isbase = false;
    mutable bool qtablewidget_editordestroyed_isbase = false;
    mutable bool qtablewidget_edit2_isbase = false;
    mutable bool qtablewidget_selectioncommand_isbase = false;
    mutable bool qtablewidget_startdrag_isbase = false;
    mutable bool qtablewidget_focusnextprevchild_isbase = false;
    mutable bool qtablewidget_viewportevent_isbase = false;
    mutable bool qtablewidget_mousepressevent_isbase = false;
    mutable bool qtablewidget_mousemoveevent_isbase = false;
    mutable bool qtablewidget_mousereleaseevent_isbase = false;
    mutable bool qtablewidget_mousedoubleclickevent_isbase = false;
    mutable bool qtablewidget_dragenterevent_isbase = false;
    mutable bool qtablewidget_dragmoveevent_isbase = false;
    mutable bool qtablewidget_dragleaveevent_isbase = false;
    mutable bool qtablewidget_focusinevent_isbase = false;
    mutable bool qtablewidget_focusoutevent_isbase = false;
    mutable bool qtablewidget_keypressevent_isbase = false;
    mutable bool qtablewidget_resizeevent_isbase = false;
    mutable bool qtablewidget_inputmethodevent_isbase = false;
    mutable bool qtablewidget_eventfilter_isbase = false;
    mutable bool qtablewidget_minimumsizehint_isbase = false;
    mutable bool qtablewidget_sizehint_isbase = false;
    mutable bool qtablewidget_setupviewport_isbase = false;
    mutable bool qtablewidget_wheelevent_isbase = false;
    mutable bool qtablewidget_contextmenuevent_isbase = false;
    mutable bool qtablewidget_changeevent_isbase = false;
    mutable bool qtablewidget_initstyleoption_isbase = false;
    mutable bool qtablewidget_devtype_isbase = false;
    mutable bool qtablewidget_setvisible_isbase = false;
    mutable bool qtablewidget_heightforwidth_isbase = false;
    mutable bool qtablewidget_hasheightforwidth_isbase = false;
    mutable bool qtablewidget_paintengine_isbase = false;
    mutable bool qtablewidget_keyreleaseevent_isbase = false;
    mutable bool qtablewidget_enterevent_isbase = false;
    mutable bool qtablewidget_leaveevent_isbase = false;
    mutable bool qtablewidget_moveevent_isbase = false;
    mutable bool qtablewidget_closeevent_isbase = false;
    mutable bool qtablewidget_tabletevent_isbase = false;
    mutable bool qtablewidget_actionevent_isbase = false;
    mutable bool qtablewidget_showevent_isbase = false;
    mutable bool qtablewidget_hideevent_isbase = false;
    mutable bool qtablewidget_nativeevent_isbase = false;
    mutable bool qtablewidget_metric_isbase = false;
    mutable bool qtablewidget_initpainter_isbase = false;
    mutable bool qtablewidget_redirected_isbase = false;
    mutable bool qtablewidget_sharedpainter_isbase = false;
    mutable bool qtablewidget_childevent_isbase = false;
    mutable bool qtablewidget_customevent_isbase = false;
    mutable bool qtablewidget_connectnotify_isbase = false;
    mutable bool qtablewidget_disconnectnotify_isbase = false;
    mutable bool qtablewidget_rowmoved_isbase = false;
    mutable bool qtablewidget_columnmoved_isbase = false;
    mutable bool qtablewidget_rowresized_isbase = false;
    mutable bool qtablewidget_columnresized_isbase = false;
    mutable bool qtablewidget_rowcountchanged_isbase = false;
    mutable bool qtablewidget_columncountchanged_isbase = false;
    mutable bool qtablewidget_state_isbase = false;
    mutable bool qtablewidget_setstate_isbase = false;
    mutable bool qtablewidget_scheduledelayeditemslayout_isbase = false;
    mutable bool qtablewidget_executedelayeditemslayout_isbase = false;
    mutable bool qtablewidget_setdirtyregion_isbase = false;
    mutable bool qtablewidget_scrolldirtyregion_isbase = false;
    mutable bool qtablewidget_dirtyregionoffset_isbase = false;
    mutable bool qtablewidget_startautoscroll_isbase = false;
    mutable bool qtablewidget_stopautoscroll_isbase = false;
    mutable bool qtablewidget_doautoscroll_isbase = false;
    mutable bool qtablewidget_dropindicatorposition_isbase = false;
    mutable bool qtablewidget_setviewportmargins_isbase = false;
    mutable bool qtablewidget_viewportmargins_isbase = false;
    mutable bool qtablewidget_drawframe_isbase = false;
    mutable bool qtablewidget_updatemicrofocus_isbase = false;
    mutable bool qtablewidget_create_isbase = false;
    mutable bool qtablewidget_destroy_isbase = false;
    mutable bool qtablewidget_focusnextchild_isbase = false;
    mutable bool qtablewidget_focuspreviouschild_isbase = false;
    mutable bool qtablewidget_sender_isbase = false;
    mutable bool qtablewidget_sendersignalindex_isbase = false;
    mutable bool qtablewidget_receivers_isbase = false;
    mutable bool qtablewidget_issignalconnected_isbase = false;

  public:
    VirtualQTableWidget(QWidget* parent) : QTableWidget(parent){};
    VirtualQTableWidget() : QTableWidget(){};
    VirtualQTableWidget(int rows, int columns) : QTableWidget(rows, columns){};
    VirtualQTableWidget(int rows, int columns, QWidget* parent) : QTableWidget(rows, columns, parent){};

    ~VirtualQTableWidget() {
        qtablewidget_metacall_callback = nullptr;
        qtablewidget_event_callback = nullptr;
        qtablewidget_mimetypes_callback = nullptr;
        qtablewidget_mimedata_callback = nullptr;
        qtablewidget_dropmimedata_callback = nullptr;
        qtablewidget_supporteddropactions_callback = nullptr;
        qtablewidget_dropevent_callback = nullptr;
        qtablewidget_setrootindex_callback = nullptr;
        qtablewidget_setselectionmodel_callback = nullptr;
        qtablewidget_doitemslayout_callback = nullptr;
        qtablewidget_visualrect_callback = nullptr;
        qtablewidget_scrollto_callback = nullptr;
        qtablewidget_indexat_callback = nullptr;
        qtablewidget_scrollcontentsby_callback = nullptr;
        qtablewidget_initviewitemoption_callback = nullptr;
        qtablewidget_paintevent_callback = nullptr;
        qtablewidget_timerevent_callback = nullptr;
        qtablewidget_horizontaloffset_callback = nullptr;
        qtablewidget_verticaloffset_callback = nullptr;
        qtablewidget_movecursor_callback = nullptr;
        qtablewidget_setselection_callback = nullptr;
        qtablewidget_visualregionforselection_callback = nullptr;
        qtablewidget_selectedindexes_callback = nullptr;
        qtablewidget_updategeometries_callback = nullptr;
        qtablewidget_viewportsizehint_callback = nullptr;
        qtablewidget_sizehintforrow_callback = nullptr;
        qtablewidget_sizehintforcolumn_callback = nullptr;
        qtablewidget_verticalscrollbaraction_callback = nullptr;
        qtablewidget_horizontalscrollbaraction_callback = nullptr;
        qtablewidget_isindexhidden_callback = nullptr;
        qtablewidget_selectionchanged_callback = nullptr;
        qtablewidget_currentchanged_callback = nullptr;
        qtablewidget_keyboardsearch_callback = nullptr;
        qtablewidget_itemdelegateforindex_callback = nullptr;
        qtablewidget_inputmethodquery_callback = nullptr;
        qtablewidget_reset_callback = nullptr;
        qtablewidget_selectall_callback = nullptr;
        qtablewidget_datachanged_callback = nullptr;
        qtablewidget_rowsinserted_callback = nullptr;
        qtablewidget_rowsabouttoberemoved_callback = nullptr;
        qtablewidget_updateeditordata_callback = nullptr;
        qtablewidget_updateeditorgeometries_callback = nullptr;
        qtablewidget_verticalscrollbarvaluechanged_callback = nullptr;
        qtablewidget_horizontalscrollbarvaluechanged_callback = nullptr;
        qtablewidget_closeeditor_callback = nullptr;
        qtablewidget_commitdata_callback = nullptr;
        qtablewidget_editordestroyed_callback = nullptr;
        qtablewidget_edit2_callback = nullptr;
        qtablewidget_selectioncommand_callback = nullptr;
        qtablewidget_startdrag_callback = nullptr;
        qtablewidget_focusnextprevchild_callback = nullptr;
        qtablewidget_viewportevent_callback = nullptr;
        qtablewidget_mousepressevent_callback = nullptr;
        qtablewidget_mousemoveevent_callback = nullptr;
        qtablewidget_mousereleaseevent_callback = nullptr;
        qtablewidget_mousedoubleclickevent_callback = nullptr;
        qtablewidget_dragenterevent_callback = nullptr;
        qtablewidget_dragmoveevent_callback = nullptr;
        qtablewidget_dragleaveevent_callback = nullptr;
        qtablewidget_focusinevent_callback = nullptr;
        qtablewidget_focusoutevent_callback = nullptr;
        qtablewidget_keypressevent_callback = nullptr;
        qtablewidget_resizeevent_callback = nullptr;
        qtablewidget_inputmethodevent_callback = nullptr;
        qtablewidget_eventfilter_callback = nullptr;
        qtablewidget_minimumsizehint_callback = nullptr;
        qtablewidget_sizehint_callback = nullptr;
        qtablewidget_setupviewport_callback = nullptr;
        qtablewidget_wheelevent_callback = nullptr;
        qtablewidget_contextmenuevent_callback = nullptr;
        qtablewidget_changeevent_callback = nullptr;
        qtablewidget_initstyleoption_callback = nullptr;
        qtablewidget_devtype_callback = nullptr;
        qtablewidget_setvisible_callback = nullptr;
        qtablewidget_heightforwidth_callback = nullptr;
        qtablewidget_hasheightforwidth_callback = nullptr;
        qtablewidget_paintengine_callback = nullptr;
        qtablewidget_keyreleaseevent_callback = nullptr;
        qtablewidget_enterevent_callback = nullptr;
        qtablewidget_leaveevent_callback = nullptr;
        qtablewidget_moveevent_callback = nullptr;
        qtablewidget_closeevent_callback = nullptr;
        qtablewidget_tabletevent_callback = nullptr;
        qtablewidget_actionevent_callback = nullptr;
        qtablewidget_showevent_callback = nullptr;
        qtablewidget_hideevent_callback = nullptr;
        qtablewidget_nativeevent_callback = nullptr;
        qtablewidget_metric_callback = nullptr;
        qtablewidget_initpainter_callback = nullptr;
        qtablewidget_redirected_callback = nullptr;
        qtablewidget_sharedpainter_callback = nullptr;
        qtablewidget_childevent_callback = nullptr;
        qtablewidget_customevent_callback = nullptr;
        qtablewidget_connectnotify_callback = nullptr;
        qtablewidget_disconnectnotify_callback = nullptr;
        qtablewidget_rowmoved_callback = nullptr;
        qtablewidget_columnmoved_callback = nullptr;
        qtablewidget_rowresized_callback = nullptr;
        qtablewidget_columnresized_callback = nullptr;
        qtablewidget_rowcountchanged_callback = nullptr;
        qtablewidget_columncountchanged_callback = nullptr;
        qtablewidget_state_callback = nullptr;
        qtablewidget_setstate_callback = nullptr;
        qtablewidget_scheduledelayeditemslayout_callback = nullptr;
        qtablewidget_executedelayeditemslayout_callback = nullptr;
        qtablewidget_setdirtyregion_callback = nullptr;
        qtablewidget_scrolldirtyregion_callback = nullptr;
        qtablewidget_dirtyregionoffset_callback = nullptr;
        qtablewidget_startautoscroll_callback = nullptr;
        qtablewidget_stopautoscroll_callback = nullptr;
        qtablewidget_doautoscroll_callback = nullptr;
        qtablewidget_dropindicatorposition_callback = nullptr;
        qtablewidget_setviewportmargins_callback = nullptr;
        qtablewidget_viewportmargins_callback = nullptr;
        qtablewidget_drawframe_callback = nullptr;
        qtablewidget_updatemicrofocus_callback = nullptr;
        qtablewidget_create_callback = nullptr;
        qtablewidget_destroy_callback = nullptr;
        qtablewidget_focusnextchild_callback = nullptr;
        qtablewidget_focuspreviouschild_callback = nullptr;
        qtablewidget_sender_callback = nullptr;
        qtablewidget_sendersignalindex_callback = nullptr;
        qtablewidget_receivers_callback = nullptr;
        qtablewidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQTableWidget_Metacall_Callback(QTableWidget_Metacall_Callback cb) { qtablewidget_metacall_callback = cb; }
    inline void setQTableWidget_Event_Callback(QTableWidget_Event_Callback cb) { qtablewidget_event_callback = cb; }
    inline void setQTableWidget_MimeTypes_Callback(QTableWidget_MimeTypes_Callback cb) { qtablewidget_mimetypes_callback = cb; }
    inline void setQTableWidget_MimeData_Callback(QTableWidget_MimeData_Callback cb) { qtablewidget_mimedata_callback = cb; }
    inline void setQTableWidget_DropMimeData_Callback(QTableWidget_DropMimeData_Callback cb) { qtablewidget_dropmimedata_callback = cb; }
    inline void setQTableWidget_SupportedDropActions_Callback(QTableWidget_SupportedDropActions_Callback cb) { qtablewidget_supporteddropactions_callback = cb; }
    inline void setQTableWidget_DropEvent_Callback(QTableWidget_DropEvent_Callback cb) { qtablewidget_dropevent_callback = cb; }
    inline void setQTableWidget_SetRootIndex_Callback(QTableWidget_SetRootIndex_Callback cb) { qtablewidget_setrootindex_callback = cb; }
    inline void setQTableWidget_SetSelectionModel_Callback(QTableWidget_SetSelectionModel_Callback cb) { qtablewidget_setselectionmodel_callback = cb; }
    inline void setQTableWidget_DoItemsLayout_Callback(QTableWidget_DoItemsLayout_Callback cb) { qtablewidget_doitemslayout_callback = cb; }
    inline void setQTableWidget_VisualRect_Callback(QTableWidget_VisualRect_Callback cb) { qtablewidget_visualrect_callback = cb; }
    inline void setQTableWidget_ScrollTo_Callback(QTableWidget_ScrollTo_Callback cb) { qtablewidget_scrollto_callback = cb; }
    inline void setQTableWidget_IndexAt_Callback(QTableWidget_IndexAt_Callback cb) { qtablewidget_indexat_callback = cb; }
    inline void setQTableWidget_ScrollContentsBy_Callback(QTableWidget_ScrollContentsBy_Callback cb) { qtablewidget_scrollcontentsby_callback = cb; }
    inline void setQTableWidget_InitViewItemOption_Callback(QTableWidget_InitViewItemOption_Callback cb) { qtablewidget_initviewitemoption_callback = cb; }
    inline void setQTableWidget_PaintEvent_Callback(QTableWidget_PaintEvent_Callback cb) { qtablewidget_paintevent_callback = cb; }
    inline void setQTableWidget_TimerEvent_Callback(QTableWidget_TimerEvent_Callback cb) { qtablewidget_timerevent_callback = cb; }
    inline void setQTableWidget_HorizontalOffset_Callback(QTableWidget_HorizontalOffset_Callback cb) { qtablewidget_horizontaloffset_callback = cb; }
    inline void setQTableWidget_VerticalOffset_Callback(QTableWidget_VerticalOffset_Callback cb) { qtablewidget_verticaloffset_callback = cb; }
    inline void setQTableWidget_MoveCursor_Callback(QTableWidget_MoveCursor_Callback cb) { qtablewidget_movecursor_callback = cb; }
    inline void setQTableWidget_SetSelection_Callback(QTableWidget_SetSelection_Callback cb) { qtablewidget_setselection_callback = cb; }
    inline void setQTableWidget_VisualRegionForSelection_Callback(QTableWidget_VisualRegionForSelection_Callback cb) { qtablewidget_visualregionforselection_callback = cb; }
    inline void setQTableWidget_SelectedIndexes_Callback(QTableWidget_SelectedIndexes_Callback cb) { qtablewidget_selectedindexes_callback = cb; }
    inline void setQTableWidget_UpdateGeometries_Callback(QTableWidget_UpdateGeometries_Callback cb) { qtablewidget_updategeometries_callback = cb; }
    inline void setQTableWidget_ViewportSizeHint_Callback(QTableWidget_ViewportSizeHint_Callback cb) { qtablewidget_viewportsizehint_callback = cb; }
    inline void setQTableWidget_SizeHintForRow_Callback(QTableWidget_SizeHintForRow_Callback cb) { qtablewidget_sizehintforrow_callback = cb; }
    inline void setQTableWidget_SizeHintForColumn_Callback(QTableWidget_SizeHintForColumn_Callback cb) { qtablewidget_sizehintforcolumn_callback = cb; }
    inline void setQTableWidget_VerticalScrollbarAction_Callback(QTableWidget_VerticalScrollbarAction_Callback cb) { qtablewidget_verticalscrollbaraction_callback = cb; }
    inline void setQTableWidget_HorizontalScrollbarAction_Callback(QTableWidget_HorizontalScrollbarAction_Callback cb) { qtablewidget_horizontalscrollbaraction_callback = cb; }
    inline void setQTableWidget_IsIndexHidden_Callback(QTableWidget_IsIndexHidden_Callback cb) { qtablewidget_isindexhidden_callback = cb; }
    inline void setQTableWidget_SelectionChanged_Callback(QTableWidget_SelectionChanged_Callback cb) { qtablewidget_selectionchanged_callback = cb; }
    inline void setQTableWidget_CurrentChanged_Callback(QTableWidget_CurrentChanged_Callback cb) { qtablewidget_currentchanged_callback = cb; }
    inline void setQTableWidget_KeyboardSearch_Callback(QTableWidget_KeyboardSearch_Callback cb) { qtablewidget_keyboardsearch_callback = cb; }
    inline void setQTableWidget_ItemDelegateForIndex_Callback(QTableWidget_ItemDelegateForIndex_Callback cb) { qtablewidget_itemdelegateforindex_callback = cb; }
    inline void setQTableWidget_InputMethodQuery_Callback(QTableWidget_InputMethodQuery_Callback cb) { qtablewidget_inputmethodquery_callback = cb; }
    inline void setQTableWidget_Reset_Callback(QTableWidget_Reset_Callback cb) { qtablewidget_reset_callback = cb; }
    inline void setQTableWidget_SelectAll_Callback(QTableWidget_SelectAll_Callback cb) { qtablewidget_selectall_callback = cb; }
    inline void setQTableWidget_DataChanged_Callback(QTableWidget_DataChanged_Callback cb) { qtablewidget_datachanged_callback = cb; }
    inline void setQTableWidget_RowsInserted_Callback(QTableWidget_RowsInserted_Callback cb) { qtablewidget_rowsinserted_callback = cb; }
    inline void setQTableWidget_RowsAboutToBeRemoved_Callback(QTableWidget_RowsAboutToBeRemoved_Callback cb) { qtablewidget_rowsabouttoberemoved_callback = cb; }
    inline void setQTableWidget_UpdateEditorData_Callback(QTableWidget_UpdateEditorData_Callback cb) { qtablewidget_updateeditordata_callback = cb; }
    inline void setQTableWidget_UpdateEditorGeometries_Callback(QTableWidget_UpdateEditorGeometries_Callback cb) { qtablewidget_updateeditorgeometries_callback = cb; }
    inline void setQTableWidget_VerticalScrollbarValueChanged_Callback(QTableWidget_VerticalScrollbarValueChanged_Callback cb) { qtablewidget_verticalscrollbarvaluechanged_callback = cb; }
    inline void setQTableWidget_HorizontalScrollbarValueChanged_Callback(QTableWidget_HorizontalScrollbarValueChanged_Callback cb) { qtablewidget_horizontalscrollbarvaluechanged_callback = cb; }
    inline void setQTableWidget_CloseEditor_Callback(QTableWidget_CloseEditor_Callback cb) { qtablewidget_closeeditor_callback = cb; }
    inline void setQTableWidget_CommitData_Callback(QTableWidget_CommitData_Callback cb) { qtablewidget_commitdata_callback = cb; }
    inline void setQTableWidget_EditorDestroyed_Callback(QTableWidget_EditorDestroyed_Callback cb) { qtablewidget_editordestroyed_callback = cb; }
    inline void setQTableWidget_Edit2_Callback(QTableWidget_Edit2_Callback cb) { qtablewidget_edit2_callback = cb; }
    inline void setQTableWidget_SelectionCommand_Callback(QTableWidget_SelectionCommand_Callback cb) { qtablewidget_selectioncommand_callback = cb; }
    inline void setQTableWidget_StartDrag_Callback(QTableWidget_StartDrag_Callback cb) { qtablewidget_startdrag_callback = cb; }
    inline void setQTableWidget_FocusNextPrevChild_Callback(QTableWidget_FocusNextPrevChild_Callback cb) { qtablewidget_focusnextprevchild_callback = cb; }
    inline void setQTableWidget_ViewportEvent_Callback(QTableWidget_ViewportEvent_Callback cb) { qtablewidget_viewportevent_callback = cb; }
    inline void setQTableWidget_MousePressEvent_Callback(QTableWidget_MousePressEvent_Callback cb) { qtablewidget_mousepressevent_callback = cb; }
    inline void setQTableWidget_MouseMoveEvent_Callback(QTableWidget_MouseMoveEvent_Callback cb) { qtablewidget_mousemoveevent_callback = cb; }
    inline void setQTableWidget_MouseReleaseEvent_Callback(QTableWidget_MouseReleaseEvent_Callback cb) { qtablewidget_mousereleaseevent_callback = cb; }
    inline void setQTableWidget_MouseDoubleClickEvent_Callback(QTableWidget_MouseDoubleClickEvent_Callback cb) { qtablewidget_mousedoubleclickevent_callback = cb; }
    inline void setQTableWidget_DragEnterEvent_Callback(QTableWidget_DragEnterEvent_Callback cb) { qtablewidget_dragenterevent_callback = cb; }
    inline void setQTableWidget_DragMoveEvent_Callback(QTableWidget_DragMoveEvent_Callback cb) { qtablewidget_dragmoveevent_callback = cb; }
    inline void setQTableWidget_DragLeaveEvent_Callback(QTableWidget_DragLeaveEvent_Callback cb) { qtablewidget_dragleaveevent_callback = cb; }
    inline void setQTableWidget_FocusInEvent_Callback(QTableWidget_FocusInEvent_Callback cb) { qtablewidget_focusinevent_callback = cb; }
    inline void setQTableWidget_FocusOutEvent_Callback(QTableWidget_FocusOutEvent_Callback cb) { qtablewidget_focusoutevent_callback = cb; }
    inline void setQTableWidget_KeyPressEvent_Callback(QTableWidget_KeyPressEvent_Callback cb) { qtablewidget_keypressevent_callback = cb; }
    inline void setQTableWidget_ResizeEvent_Callback(QTableWidget_ResizeEvent_Callback cb) { qtablewidget_resizeevent_callback = cb; }
    inline void setQTableWidget_InputMethodEvent_Callback(QTableWidget_InputMethodEvent_Callback cb) { qtablewidget_inputmethodevent_callback = cb; }
    inline void setQTableWidget_EventFilter_Callback(QTableWidget_EventFilter_Callback cb) { qtablewidget_eventfilter_callback = cb; }
    inline void setQTableWidget_MinimumSizeHint_Callback(QTableWidget_MinimumSizeHint_Callback cb) { qtablewidget_minimumsizehint_callback = cb; }
    inline void setQTableWidget_SizeHint_Callback(QTableWidget_SizeHint_Callback cb) { qtablewidget_sizehint_callback = cb; }
    inline void setQTableWidget_SetupViewport_Callback(QTableWidget_SetupViewport_Callback cb) { qtablewidget_setupviewport_callback = cb; }
    inline void setQTableWidget_WheelEvent_Callback(QTableWidget_WheelEvent_Callback cb) { qtablewidget_wheelevent_callback = cb; }
    inline void setQTableWidget_ContextMenuEvent_Callback(QTableWidget_ContextMenuEvent_Callback cb) { qtablewidget_contextmenuevent_callback = cb; }
    inline void setQTableWidget_ChangeEvent_Callback(QTableWidget_ChangeEvent_Callback cb) { qtablewidget_changeevent_callback = cb; }
    inline void setQTableWidget_InitStyleOption_Callback(QTableWidget_InitStyleOption_Callback cb) { qtablewidget_initstyleoption_callback = cb; }
    inline void setQTableWidget_DevType_Callback(QTableWidget_DevType_Callback cb) { qtablewidget_devtype_callback = cb; }
    inline void setQTableWidget_SetVisible_Callback(QTableWidget_SetVisible_Callback cb) { qtablewidget_setvisible_callback = cb; }
    inline void setQTableWidget_HeightForWidth_Callback(QTableWidget_HeightForWidth_Callback cb) { qtablewidget_heightforwidth_callback = cb; }
    inline void setQTableWidget_HasHeightForWidth_Callback(QTableWidget_HasHeightForWidth_Callback cb) { qtablewidget_hasheightforwidth_callback = cb; }
    inline void setQTableWidget_PaintEngine_Callback(QTableWidget_PaintEngine_Callback cb) { qtablewidget_paintengine_callback = cb; }
    inline void setQTableWidget_KeyReleaseEvent_Callback(QTableWidget_KeyReleaseEvent_Callback cb) { qtablewidget_keyreleaseevent_callback = cb; }
    inline void setQTableWidget_EnterEvent_Callback(QTableWidget_EnterEvent_Callback cb) { qtablewidget_enterevent_callback = cb; }
    inline void setQTableWidget_LeaveEvent_Callback(QTableWidget_LeaveEvent_Callback cb) { qtablewidget_leaveevent_callback = cb; }
    inline void setQTableWidget_MoveEvent_Callback(QTableWidget_MoveEvent_Callback cb) { qtablewidget_moveevent_callback = cb; }
    inline void setQTableWidget_CloseEvent_Callback(QTableWidget_CloseEvent_Callback cb) { qtablewidget_closeevent_callback = cb; }
    inline void setQTableWidget_TabletEvent_Callback(QTableWidget_TabletEvent_Callback cb) { qtablewidget_tabletevent_callback = cb; }
    inline void setQTableWidget_ActionEvent_Callback(QTableWidget_ActionEvent_Callback cb) { qtablewidget_actionevent_callback = cb; }
    inline void setQTableWidget_ShowEvent_Callback(QTableWidget_ShowEvent_Callback cb) { qtablewidget_showevent_callback = cb; }
    inline void setQTableWidget_HideEvent_Callback(QTableWidget_HideEvent_Callback cb) { qtablewidget_hideevent_callback = cb; }
    inline void setQTableWidget_NativeEvent_Callback(QTableWidget_NativeEvent_Callback cb) { qtablewidget_nativeevent_callback = cb; }
    inline void setQTableWidget_Metric_Callback(QTableWidget_Metric_Callback cb) { qtablewidget_metric_callback = cb; }
    inline void setQTableWidget_InitPainter_Callback(QTableWidget_InitPainter_Callback cb) { qtablewidget_initpainter_callback = cb; }
    inline void setQTableWidget_Redirected_Callback(QTableWidget_Redirected_Callback cb) { qtablewidget_redirected_callback = cb; }
    inline void setQTableWidget_SharedPainter_Callback(QTableWidget_SharedPainter_Callback cb) { qtablewidget_sharedpainter_callback = cb; }
    inline void setQTableWidget_ChildEvent_Callback(QTableWidget_ChildEvent_Callback cb) { qtablewidget_childevent_callback = cb; }
    inline void setQTableWidget_CustomEvent_Callback(QTableWidget_CustomEvent_Callback cb) { qtablewidget_customevent_callback = cb; }
    inline void setQTableWidget_ConnectNotify_Callback(QTableWidget_ConnectNotify_Callback cb) { qtablewidget_connectnotify_callback = cb; }
    inline void setQTableWidget_DisconnectNotify_Callback(QTableWidget_DisconnectNotify_Callback cb) { qtablewidget_disconnectnotify_callback = cb; }
    inline void setQTableWidget_RowMoved_Callback(QTableWidget_RowMoved_Callback cb) { qtablewidget_rowmoved_callback = cb; }
    inline void setQTableWidget_ColumnMoved_Callback(QTableWidget_ColumnMoved_Callback cb) { qtablewidget_columnmoved_callback = cb; }
    inline void setQTableWidget_RowResized_Callback(QTableWidget_RowResized_Callback cb) { qtablewidget_rowresized_callback = cb; }
    inline void setQTableWidget_ColumnResized_Callback(QTableWidget_ColumnResized_Callback cb) { qtablewidget_columnresized_callback = cb; }
    inline void setQTableWidget_RowCountChanged_Callback(QTableWidget_RowCountChanged_Callback cb) { qtablewidget_rowcountchanged_callback = cb; }
    inline void setQTableWidget_ColumnCountChanged_Callback(QTableWidget_ColumnCountChanged_Callback cb) { qtablewidget_columncountchanged_callback = cb; }
    inline void setQTableWidget_State_Callback(QTableWidget_State_Callback cb) { qtablewidget_state_callback = cb; }
    inline void setQTableWidget_SetState_Callback(QTableWidget_SetState_Callback cb) { qtablewidget_setstate_callback = cb; }
    inline void setQTableWidget_ScheduleDelayedItemsLayout_Callback(QTableWidget_ScheduleDelayedItemsLayout_Callback cb) { qtablewidget_scheduledelayeditemslayout_callback = cb; }
    inline void setQTableWidget_ExecuteDelayedItemsLayout_Callback(QTableWidget_ExecuteDelayedItemsLayout_Callback cb) { qtablewidget_executedelayeditemslayout_callback = cb; }
    inline void setQTableWidget_SetDirtyRegion_Callback(QTableWidget_SetDirtyRegion_Callback cb) { qtablewidget_setdirtyregion_callback = cb; }
    inline void setQTableWidget_ScrollDirtyRegion_Callback(QTableWidget_ScrollDirtyRegion_Callback cb) { qtablewidget_scrolldirtyregion_callback = cb; }
    inline void setQTableWidget_DirtyRegionOffset_Callback(QTableWidget_DirtyRegionOffset_Callback cb) { qtablewidget_dirtyregionoffset_callback = cb; }
    inline void setQTableWidget_StartAutoScroll_Callback(QTableWidget_StartAutoScroll_Callback cb) { qtablewidget_startautoscroll_callback = cb; }
    inline void setQTableWidget_StopAutoScroll_Callback(QTableWidget_StopAutoScroll_Callback cb) { qtablewidget_stopautoscroll_callback = cb; }
    inline void setQTableWidget_DoAutoScroll_Callback(QTableWidget_DoAutoScroll_Callback cb) { qtablewidget_doautoscroll_callback = cb; }
    inline void setQTableWidget_DropIndicatorPosition_Callback(QTableWidget_DropIndicatorPosition_Callback cb) { qtablewidget_dropindicatorposition_callback = cb; }
    inline void setQTableWidget_SetViewportMargins_Callback(QTableWidget_SetViewportMargins_Callback cb) { qtablewidget_setviewportmargins_callback = cb; }
    inline void setQTableWidget_ViewportMargins_Callback(QTableWidget_ViewportMargins_Callback cb) { qtablewidget_viewportmargins_callback = cb; }
    inline void setQTableWidget_DrawFrame_Callback(QTableWidget_DrawFrame_Callback cb) { qtablewidget_drawframe_callback = cb; }
    inline void setQTableWidget_UpdateMicroFocus_Callback(QTableWidget_UpdateMicroFocus_Callback cb) { qtablewidget_updatemicrofocus_callback = cb; }
    inline void setQTableWidget_Create_Callback(QTableWidget_Create_Callback cb) { qtablewidget_create_callback = cb; }
    inline void setQTableWidget_Destroy_Callback(QTableWidget_Destroy_Callback cb) { qtablewidget_destroy_callback = cb; }
    inline void setQTableWidget_FocusNextChild_Callback(QTableWidget_FocusNextChild_Callback cb) { qtablewidget_focusnextchild_callback = cb; }
    inline void setQTableWidget_FocusPreviousChild_Callback(QTableWidget_FocusPreviousChild_Callback cb) { qtablewidget_focuspreviouschild_callback = cb; }
    inline void setQTableWidget_Sender_Callback(QTableWidget_Sender_Callback cb) { qtablewidget_sender_callback = cb; }
    inline void setQTableWidget_SenderSignalIndex_Callback(QTableWidget_SenderSignalIndex_Callback cb) { qtablewidget_sendersignalindex_callback = cb; }
    inline void setQTableWidget_Receivers_Callback(QTableWidget_Receivers_Callback cb) { qtablewidget_receivers_callback = cb; }
    inline void setQTableWidget_IsSignalConnected_Callback(QTableWidget_IsSignalConnected_Callback cb) { qtablewidget_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTableWidget_Metacall_IsBase(bool value) const { qtablewidget_metacall_isbase = value; }
    inline void setQTableWidget_Event_IsBase(bool value) const { qtablewidget_event_isbase = value; }
    inline void setQTableWidget_MimeTypes_IsBase(bool value) const { qtablewidget_mimetypes_isbase = value; }
    inline void setQTableWidget_MimeData_IsBase(bool value) const { qtablewidget_mimedata_isbase = value; }
    inline void setQTableWidget_DropMimeData_IsBase(bool value) const { qtablewidget_dropmimedata_isbase = value; }
    inline void setQTableWidget_SupportedDropActions_IsBase(bool value) const { qtablewidget_supporteddropactions_isbase = value; }
    inline void setQTableWidget_DropEvent_IsBase(bool value) const { qtablewidget_dropevent_isbase = value; }
    inline void setQTableWidget_SetRootIndex_IsBase(bool value) const { qtablewidget_setrootindex_isbase = value; }
    inline void setQTableWidget_SetSelectionModel_IsBase(bool value) const { qtablewidget_setselectionmodel_isbase = value; }
    inline void setQTableWidget_DoItemsLayout_IsBase(bool value) const { qtablewidget_doitemslayout_isbase = value; }
    inline void setQTableWidget_VisualRect_IsBase(bool value) const { qtablewidget_visualrect_isbase = value; }
    inline void setQTableWidget_ScrollTo_IsBase(bool value) const { qtablewidget_scrollto_isbase = value; }
    inline void setQTableWidget_IndexAt_IsBase(bool value) const { qtablewidget_indexat_isbase = value; }
    inline void setQTableWidget_ScrollContentsBy_IsBase(bool value) const { qtablewidget_scrollcontentsby_isbase = value; }
    inline void setQTableWidget_InitViewItemOption_IsBase(bool value) const { qtablewidget_initviewitemoption_isbase = value; }
    inline void setQTableWidget_PaintEvent_IsBase(bool value) const { qtablewidget_paintevent_isbase = value; }
    inline void setQTableWidget_TimerEvent_IsBase(bool value) const { qtablewidget_timerevent_isbase = value; }
    inline void setQTableWidget_HorizontalOffset_IsBase(bool value) const { qtablewidget_horizontaloffset_isbase = value; }
    inline void setQTableWidget_VerticalOffset_IsBase(bool value) const { qtablewidget_verticaloffset_isbase = value; }
    inline void setQTableWidget_MoveCursor_IsBase(bool value) const { qtablewidget_movecursor_isbase = value; }
    inline void setQTableWidget_SetSelection_IsBase(bool value) const { qtablewidget_setselection_isbase = value; }
    inline void setQTableWidget_VisualRegionForSelection_IsBase(bool value) const { qtablewidget_visualregionforselection_isbase = value; }
    inline void setQTableWidget_SelectedIndexes_IsBase(bool value) const { qtablewidget_selectedindexes_isbase = value; }
    inline void setQTableWidget_UpdateGeometries_IsBase(bool value) const { qtablewidget_updategeometries_isbase = value; }
    inline void setQTableWidget_ViewportSizeHint_IsBase(bool value) const { qtablewidget_viewportsizehint_isbase = value; }
    inline void setQTableWidget_SizeHintForRow_IsBase(bool value) const { qtablewidget_sizehintforrow_isbase = value; }
    inline void setQTableWidget_SizeHintForColumn_IsBase(bool value) const { qtablewidget_sizehintforcolumn_isbase = value; }
    inline void setQTableWidget_VerticalScrollbarAction_IsBase(bool value) const { qtablewidget_verticalscrollbaraction_isbase = value; }
    inline void setQTableWidget_HorizontalScrollbarAction_IsBase(bool value) const { qtablewidget_horizontalscrollbaraction_isbase = value; }
    inline void setQTableWidget_IsIndexHidden_IsBase(bool value) const { qtablewidget_isindexhidden_isbase = value; }
    inline void setQTableWidget_SelectionChanged_IsBase(bool value) const { qtablewidget_selectionchanged_isbase = value; }
    inline void setQTableWidget_CurrentChanged_IsBase(bool value) const { qtablewidget_currentchanged_isbase = value; }
    inline void setQTableWidget_KeyboardSearch_IsBase(bool value) const { qtablewidget_keyboardsearch_isbase = value; }
    inline void setQTableWidget_ItemDelegateForIndex_IsBase(bool value) const { qtablewidget_itemdelegateforindex_isbase = value; }
    inline void setQTableWidget_InputMethodQuery_IsBase(bool value) const { qtablewidget_inputmethodquery_isbase = value; }
    inline void setQTableWidget_Reset_IsBase(bool value) const { qtablewidget_reset_isbase = value; }
    inline void setQTableWidget_SelectAll_IsBase(bool value) const { qtablewidget_selectall_isbase = value; }
    inline void setQTableWidget_DataChanged_IsBase(bool value) const { qtablewidget_datachanged_isbase = value; }
    inline void setQTableWidget_RowsInserted_IsBase(bool value) const { qtablewidget_rowsinserted_isbase = value; }
    inline void setQTableWidget_RowsAboutToBeRemoved_IsBase(bool value) const { qtablewidget_rowsabouttoberemoved_isbase = value; }
    inline void setQTableWidget_UpdateEditorData_IsBase(bool value) const { qtablewidget_updateeditordata_isbase = value; }
    inline void setQTableWidget_UpdateEditorGeometries_IsBase(bool value) const { qtablewidget_updateeditorgeometries_isbase = value; }
    inline void setQTableWidget_VerticalScrollbarValueChanged_IsBase(bool value) const { qtablewidget_verticalscrollbarvaluechanged_isbase = value; }
    inline void setQTableWidget_HorizontalScrollbarValueChanged_IsBase(bool value) const { qtablewidget_horizontalscrollbarvaluechanged_isbase = value; }
    inline void setQTableWidget_CloseEditor_IsBase(bool value) const { qtablewidget_closeeditor_isbase = value; }
    inline void setQTableWidget_CommitData_IsBase(bool value) const { qtablewidget_commitdata_isbase = value; }
    inline void setQTableWidget_EditorDestroyed_IsBase(bool value) const { qtablewidget_editordestroyed_isbase = value; }
    inline void setQTableWidget_Edit2_IsBase(bool value) const { qtablewidget_edit2_isbase = value; }
    inline void setQTableWidget_SelectionCommand_IsBase(bool value) const { qtablewidget_selectioncommand_isbase = value; }
    inline void setQTableWidget_StartDrag_IsBase(bool value) const { qtablewidget_startdrag_isbase = value; }
    inline void setQTableWidget_FocusNextPrevChild_IsBase(bool value) const { qtablewidget_focusnextprevchild_isbase = value; }
    inline void setQTableWidget_ViewportEvent_IsBase(bool value) const { qtablewidget_viewportevent_isbase = value; }
    inline void setQTableWidget_MousePressEvent_IsBase(bool value) const { qtablewidget_mousepressevent_isbase = value; }
    inline void setQTableWidget_MouseMoveEvent_IsBase(bool value) const { qtablewidget_mousemoveevent_isbase = value; }
    inline void setQTableWidget_MouseReleaseEvent_IsBase(bool value) const { qtablewidget_mousereleaseevent_isbase = value; }
    inline void setQTableWidget_MouseDoubleClickEvent_IsBase(bool value) const { qtablewidget_mousedoubleclickevent_isbase = value; }
    inline void setQTableWidget_DragEnterEvent_IsBase(bool value) const { qtablewidget_dragenterevent_isbase = value; }
    inline void setQTableWidget_DragMoveEvent_IsBase(bool value) const { qtablewidget_dragmoveevent_isbase = value; }
    inline void setQTableWidget_DragLeaveEvent_IsBase(bool value) const { qtablewidget_dragleaveevent_isbase = value; }
    inline void setQTableWidget_FocusInEvent_IsBase(bool value) const { qtablewidget_focusinevent_isbase = value; }
    inline void setQTableWidget_FocusOutEvent_IsBase(bool value) const { qtablewidget_focusoutevent_isbase = value; }
    inline void setQTableWidget_KeyPressEvent_IsBase(bool value) const { qtablewidget_keypressevent_isbase = value; }
    inline void setQTableWidget_ResizeEvent_IsBase(bool value) const { qtablewidget_resizeevent_isbase = value; }
    inline void setQTableWidget_InputMethodEvent_IsBase(bool value) const { qtablewidget_inputmethodevent_isbase = value; }
    inline void setQTableWidget_EventFilter_IsBase(bool value) const { qtablewidget_eventfilter_isbase = value; }
    inline void setQTableWidget_MinimumSizeHint_IsBase(bool value) const { qtablewidget_minimumsizehint_isbase = value; }
    inline void setQTableWidget_SizeHint_IsBase(bool value) const { qtablewidget_sizehint_isbase = value; }
    inline void setQTableWidget_SetupViewport_IsBase(bool value) const { qtablewidget_setupviewport_isbase = value; }
    inline void setQTableWidget_WheelEvent_IsBase(bool value) const { qtablewidget_wheelevent_isbase = value; }
    inline void setQTableWidget_ContextMenuEvent_IsBase(bool value) const { qtablewidget_contextmenuevent_isbase = value; }
    inline void setQTableWidget_ChangeEvent_IsBase(bool value) const { qtablewidget_changeevent_isbase = value; }
    inline void setQTableWidget_InitStyleOption_IsBase(bool value) const { qtablewidget_initstyleoption_isbase = value; }
    inline void setQTableWidget_DevType_IsBase(bool value) const { qtablewidget_devtype_isbase = value; }
    inline void setQTableWidget_SetVisible_IsBase(bool value) const { qtablewidget_setvisible_isbase = value; }
    inline void setQTableWidget_HeightForWidth_IsBase(bool value) const { qtablewidget_heightforwidth_isbase = value; }
    inline void setQTableWidget_HasHeightForWidth_IsBase(bool value) const { qtablewidget_hasheightforwidth_isbase = value; }
    inline void setQTableWidget_PaintEngine_IsBase(bool value) const { qtablewidget_paintengine_isbase = value; }
    inline void setQTableWidget_KeyReleaseEvent_IsBase(bool value) const { qtablewidget_keyreleaseevent_isbase = value; }
    inline void setQTableWidget_EnterEvent_IsBase(bool value) const { qtablewidget_enterevent_isbase = value; }
    inline void setQTableWidget_LeaveEvent_IsBase(bool value) const { qtablewidget_leaveevent_isbase = value; }
    inline void setQTableWidget_MoveEvent_IsBase(bool value) const { qtablewidget_moveevent_isbase = value; }
    inline void setQTableWidget_CloseEvent_IsBase(bool value) const { qtablewidget_closeevent_isbase = value; }
    inline void setQTableWidget_TabletEvent_IsBase(bool value) const { qtablewidget_tabletevent_isbase = value; }
    inline void setQTableWidget_ActionEvent_IsBase(bool value) const { qtablewidget_actionevent_isbase = value; }
    inline void setQTableWidget_ShowEvent_IsBase(bool value) const { qtablewidget_showevent_isbase = value; }
    inline void setQTableWidget_HideEvent_IsBase(bool value) const { qtablewidget_hideevent_isbase = value; }
    inline void setQTableWidget_NativeEvent_IsBase(bool value) const { qtablewidget_nativeevent_isbase = value; }
    inline void setQTableWidget_Metric_IsBase(bool value) const { qtablewidget_metric_isbase = value; }
    inline void setQTableWidget_InitPainter_IsBase(bool value) const { qtablewidget_initpainter_isbase = value; }
    inline void setQTableWidget_Redirected_IsBase(bool value) const { qtablewidget_redirected_isbase = value; }
    inline void setQTableWidget_SharedPainter_IsBase(bool value) const { qtablewidget_sharedpainter_isbase = value; }
    inline void setQTableWidget_ChildEvent_IsBase(bool value) const { qtablewidget_childevent_isbase = value; }
    inline void setQTableWidget_CustomEvent_IsBase(bool value) const { qtablewidget_customevent_isbase = value; }
    inline void setQTableWidget_ConnectNotify_IsBase(bool value) const { qtablewidget_connectnotify_isbase = value; }
    inline void setQTableWidget_DisconnectNotify_IsBase(bool value) const { qtablewidget_disconnectnotify_isbase = value; }
    inline void setQTableWidget_RowMoved_IsBase(bool value) const { qtablewidget_rowmoved_isbase = value; }
    inline void setQTableWidget_ColumnMoved_IsBase(bool value) const { qtablewidget_columnmoved_isbase = value; }
    inline void setQTableWidget_RowResized_IsBase(bool value) const { qtablewidget_rowresized_isbase = value; }
    inline void setQTableWidget_ColumnResized_IsBase(bool value) const { qtablewidget_columnresized_isbase = value; }
    inline void setQTableWidget_RowCountChanged_IsBase(bool value) const { qtablewidget_rowcountchanged_isbase = value; }
    inline void setQTableWidget_ColumnCountChanged_IsBase(bool value) const { qtablewidget_columncountchanged_isbase = value; }
    inline void setQTableWidget_State_IsBase(bool value) const { qtablewidget_state_isbase = value; }
    inline void setQTableWidget_SetState_IsBase(bool value) const { qtablewidget_setstate_isbase = value; }
    inline void setQTableWidget_ScheduleDelayedItemsLayout_IsBase(bool value) const { qtablewidget_scheduledelayeditemslayout_isbase = value; }
    inline void setQTableWidget_ExecuteDelayedItemsLayout_IsBase(bool value) const { qtablewidget_executedelayeditemslayout_isbase = value; }
    inline void setQTableWidget_SetDirtyRegion_IsBase(bool value) const { qtablewidget_setdirtyregion_isbase = value; }
    inline void setQTableWidget_ScrollDirtyRegion_IsBase(bool value) const { qtablewidget_scrolldirtyregion_isbase = value; }
    inline void setQTableWidget_DirtyRegionOffset_IsBase(bool value) const { qtablewidget_dirtyregionoffset_isbase = value; }
    inline void setQTableWidget_StartAutoScroll_IsBase(bool value) const { qtablewidget_startautoscroll_isbase = value; }
    inline void setQTableWidget_StopAutoScroll_IsBase(bool value) const { qtablewidget_stopautoscroll_isbase = value; }
    inline void setQTableWidget_DoAutoScroll_IsBase(bool value) const { qtablewidget_doautoscroll_isbase = value; }
    inline void setQTableWidget_DropIndicatorPosition_IsBase(bool value) const { qtablewidget_dropindicatorposition_isbase = value; }
    inline void setQTableWidget_SetViewportMargins_IsBase(bool value) const { qtablewidget_setviewportmargins_isbase = value; }
    inline void setQTableWidget_ViewportMargins_IsBase(bool value) const { qtablewidget_viewportmargins_isbase = value; }
    inline void setQTableWidget_DrawFrame_IsBase(bool value) const { qtablewidget_drawframe_isbase = value; }
    inline void setQTableWidget_UpdateMicroFocus_IsBase(bool value) const { qtablewidget_updatemicrofocus_isbase = value; }
    inline void setQTableWidget_Create_IsBase(bool value) const { qtablewidget_create_isbase = value; }
    inline void setQTableWidget_Destroy_IsBase(bool value) const { qtablewidget_destroy_isbase = value; }
    inline void setQTableWidget_FocusNextChild_IsBase(bool value) const { qtablewidget_focusnextchild_isbase = value; }
    inline void setQTableWidget_FocusPreviousChild_IsBase(bool value) const { qtablewidget_focuspreviouschild_isbase = value; }
    inline void setQTableWidget_Sender_IsBase(bool value) const { qtablewidget_sender_isbase = value; }
    inline void setQTableWidget_SenderSignalIndex_IsBase(bool value) const { qtablewidget_sendersignalindex_isbase = value; }
    inline void setQTableWidget_Receivers_IsBase(bool value) const { qtablewidget_receivers_isbase = value; }
    inline void setQTableWidget_IsSignalConnected_IsBase(bool value) const { qtablewidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtablewidget_metacall_isbase) {
            qtablewidget_metacall_isbase = false;
            return QTableWidget::qt_metacall(param1, param2, param3);
        } else if (qtablewidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtablewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtablewidget_event_isbase) {
            qtablewidget_event_isbase = false;
            return QTableWidget::event(e);
        } else if (qtablewidget_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qtablewidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidget::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qtablewidget_mimetypes_isbase) {
            qtablewidget_mimetypes_isbase = false;
            return QTableWidget::mimeTypes();
        } else if (qtablewidget_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qtablewidget_mimetypes_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QTableWidget::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QTableWidgetItem*>& items) const override {
        if (qtablewidget_mimedata_isbase) {
            qtablewidget_mimedata_isbase = false;
            return QTableWidget::mimeData(items);
        } else if (qtablewidget_mimedata_callback != nullptr) {
            const QList<QTableWidgetItem*>& items_ret = items;
            // Convert QList<> from C++ memory to manually-managed C memory
            QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * items_ret.length()));
            for (size_t i = 0; i < items_ret.length(); ++i) {
                items_arr[i] = items_ret[i];
            }
            libqt_list items_out;
            items_out.len = items_ret.length();
            items_out.data = static_cast<void*>(items_arr);
            libqt_list /* of QTableWidgetItem* */ cbval1 = items_out;

            QMimeData* callback_ret = qtablewidget_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidget::mimeData(items);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(int row, int column, const QMimeData* data, Qt::DropAction action) override {
        if (qtablewidget_dropmimedata_isbase) {
            qtablewidget_dropmimedata_isbase = false;
            return QTableWidget::dropMimeData(row, column, data, action);
        } else if (qtablewidget_dropmimedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            QMimeData* cbval3 = (QMimeData*)data;
            int cbval4 = static_cast<int>(action);

            bool callback_ret = qtablewidget_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QTableWidget::dropMimeData(row, column, data, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qtablewidget_supporteddropactions_isbase) {
            qtablewidget_supporteddropactions_isbase = false;
            return QTableWidget::supportedDropActions();
        } else if (qtablewidget_supporteddropactions_callback != nullptr) {
            int callback_ret = qtablewidget_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QTableWidget::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtablewidget_dropevent_isbase) {
            qtablewidget_dropevent_isbase = false;
            QTableWidget::dropEvent(event);
        } else if (qtablewidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qtablewidget_dropevent_callback(this, cbval1);
        } else {
            QTableWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtablewidget_setrootindex_isbase) {
            qtablewidget_setrootindex_isbase = false;
            QTableWidget::setRootIndex(index);
        } else if (qtablewidget_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            qtablewidget_setrootindex_callback(this, cbval1);
        } else {
            QTableWidget::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtablewidget_setselectionmodel_isbase) {
            qtablewidget_setselectionmodel_isbase = false;
            QTableWidget::setSelectionModel(selectionModel);
        } else if (qtablewidget_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            qtablewidget_setselectionmodel_callback(this, cbval1);
        } else {
            QTableWidget::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtablewidget_doitemslayout_isbase) {
            qtablewidget_doitemslayout_isbase = false;
            QTableWidget::doItemsLayout();
        } else if (qtablewidget_doitemslayout_callback != nullptr) {
            qtablewidget_doitemslayout_callback();
        } else {
            QTableWidget::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtablewidget_visualrect_isbase) {
            qtablewidget_visualrect_isbase = false;
            return QTableWidget::visualRect(index);
        } else if (qtablewidget_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qtablewidget_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableWidget::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtablewidget_scrollto_isbase) {
            qtablewidget_scrollto_isbase = false;
            QTableWidget::scrollTo(index, hint);
        } else if (qtablewidget_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            qtablewidget_scrollto_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtablewidget_indexat_isbase) {
            qtablewidget_indexat_isbase = false;
            return QTableWidget::indexAt(p);
        } else if (qtablewidget_indexat_callback != nullptr) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = qtablewidget_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableWidget::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtablewidget_scrollcontentsby_isbase) {
            qtablewidget_scrollcontentsby_isbase = false;
            QTableWidget::scrollContentsBy(dx, dy);
        } else if (qtablewidget_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qtablewidget_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtablewidget_initviewitemoption_isbase) {
            qtablewidget_initviewitemoption_isbase = false;
            QTableWidget::initViewItemOption(option);
        } else if (qtablewidget_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            qtablewidget_initviewitemoption_callback(this, cbval1);
        } else {
            QTableWidget::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtablewidget_paintevent_isbase) {
            qtablewidget_paintevent_isbase = false;
            QTableWidget::paintEvent(e);
        } else if (qtablewidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            qtablewidget_paintevent_callback(this, cbval1);
        } else {
            QTableWidget::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtablewidget_timerevent_isbase) {
            qtablewidget_timerevent_isbase = false;
            QTableWidget::timerEvent(event);
        } else if (qtablewidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtablewidget_timerevent_callback(this, cbval1);
        } else {
            QTableWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtablewidget_horizontaloffset_isbase) {
            qtablewidget_horizontaloffset_isbase = false;
            return QTableWidget::horizontalOffset();
        } else if (qtablewidget_horizontaloffset_callback != nullptr) {
            int callback_ret = qtablewidget_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtablewidget_verticaloffset_isbase) {
            qtablewidget_verticaloffset_isbase = false;
            return QTableWidget::verticalOffset();
        } else if (qtablewidget_verticaloffset_callback != nullptr) {
            int callback_ret = qtablewidget_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtablewidget_movecursor_isbase) {
            qtablewidget_movecursor_isbase = false;
            return QTableWidget::moveCursor(cursorAction, modifiers);
        } else if (qtablewidget_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = qtablewidget_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QTableWidget::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtablewidget_setselection_isbase) {
            qtablewidget_setselection_isbase = false;
            QTableWidget::setSelection(rect, command);
        } else if (qtablewidget_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            qtablewidget_setselection_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtablewidget_visualregionforselection_isbase) {
            qtablewidget_visualregionforselection_isbase = false;
            return QTableWidget::visualRegionForSelection(selection);
        } else if (qtablewidget_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = qtablewidget_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableWidget::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qtablewidget_selectedindexes_isbase) {
            qtablewidget_selectedindexes_isbase = false;
            return QTableWidget::selectedIndexes();
        } else if (qtablewidget_selectedindexes_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qtablewidget_selectedindexes_callback();
            QModelIndexList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QTableWidget::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtablewidget_updategeometries_isbase) {
            qtablewidget_updategeometries_isbase = false;
            QTableWidget::updateGeometries();
        } else if (qtablewidget_updategeometries_callback != nullptr) {
            qtablewidget_updategeometries_callback();
        } else {
            QTableWidget::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtablewidget_viewportsizehint_isbase) {
            qtablewidget_viewportsizehint_isbase = false;
            return QTableWidget::viewportSizeHint();
        } else if (qtablewidget_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qtablewidget_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QTableWidget::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtablewidget_sizehintforrow_isbase) {
            qtablewidget_sizehintforrow_isbase = false;
            return QTableWidget::sizeHintForRow(row);
        } else if (qtablewidget_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = qtablewidget_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtablewidget_sizehintforcolumn_isbase) {
            qtablewidget_sizehintforcolumn_isbase = false;
            return QTableWidget::sizeHintForColumn(column);
        } else if (qtablewidget_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = qtablewidget_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtablewidget_verticalscrollbaraction_isbase) {
            qtablewidget_verticalscrollbaraction_isbase = false;
            QTableWidget::verticalScrollbarAction(action);
        } else if (qtablewidget_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qtablewidget_verticalscrollbaraction_callback(this, cbval1);
        } else {
            QTableWidget::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtablewidget_horizontalscrollbaraction_isbase) {
            qtablewidget_horizontalscrollbaraction_isbase = false;
            QTableWidget::horizontalScrollbarAction(action);
        } else if (qtablewidget_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qtablewidget_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            QTableWidget::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtablewidget_isindexhidden_isbase) {
            qtablewidget_isindexhidden_isbase = false;
            return QTableWidget::isIndexHidden(index);
        } else if (qtablewidget_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qtablewidget_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidget::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtablewidget_selectionchanged_isbase) {
            qtablewidget_selectionchanged_isbase = false;
            QTableWidget::selectionChanged(selected, deselected);
        } else if (qtablewidget_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            qtablewidget_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtablewidget_currentchanged_isbase) {
            qtablewidget_currentchanged_isbase = false;
            QTableWidget::currentChanged(current, previous);
        } else if (qtablewidget_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            qtablewidget_currentchanged_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtablewidget_keyboardsearch_isbase) {
            qtablewidget_keyboardsearch_isbase = false;
            QTableWidget::keyboardSearch(search);
        } else if (qtablewidget_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<char*>(malloc((search_str.len + 1) * sizeof(char)));
            memcpy(search_str.data, search_b.data(), search_str.len);
            search_str.data[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            qtablewidget_keyboardsearch_callback(this, cbval1);
        } else {
            QTableWidget::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtablewidget_itemdelegateforindex_isbase) {
            qtablewidget_itemdelegateforindex_isbase = false;
            return QTableWidget::itemDelegateForIndex(index);
        } else if (qtablewidget_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = qtablewidget_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidget::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtablewidget_inputmethodquery_isbase) {
            qtablewidget_inputmethodquery_isbase = false;
            return QTableWidget::inputMethodQuery(query);
        } else if (qtablewidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qtablewidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTableWidget::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtablewidget_reset_isbase) {
            qtablewidget_reset_isbase = false;
            QTableWidget::reset();
        } else if (qtablewidget_reset_callback != nullptr) {
            qtablewidget_reset_callback();
        } else {
            QTableWidget::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtablewidget_selectall_isbase) {
            qtablewidget_selectall_isbase = false;
            QTableWidget::selectAll();
        } else if (qtablewidget_selectall_callback != nullptr) {
            qtablewidget_selectall_callback();
        } else {
            QTableWidget::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtablewidget_datachanged_isbase) {
            qtablewidget_datachanged_isbase = false;
            QTableWidget::dataChanged(topLeft, bottomRight, roles);
        } else if (qtablewidget_datachanged_callback != nullptr) {
            const QModelIndex& topLeft_ret = topLeft;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&topLeft_ret);
            const QModelIndex& bottomRight_ret = bottomRight;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&bottomRight_ret);
            const QList<int>& roles_ret = roles;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
            for (size_t i = 0; i < roles_ret.length(); ++i) {
                roles_arr[i] = roles_ret[i];
            }
            libqt_list roles_out;
            roles_out.len = roles_ret.length();
            roles_out.data = static_cast<void*>(roles_arr);
            libqt_list /* of int */ cbval3 = roles_out;

            qtablewidget_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableWidget::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtablewidget_rowsinserted_isbase) {
            qtablewidget_rowsinserted_isbase = false;
            QTableWidget::rowsInserted(parent, start, end);
        } else if (qtablewidget_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qtablewidget_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableWidget::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtablewidget_rowsabouttoberemoved_isbase) {
            qtablewidget_rowsabouttoberemoved_isbase = false;
            QTableWidget::rowsAboutToBeRemoved(parent, start, end);
        } else if (qtablewidget_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qtablewidget_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableWidget::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtablewidget_updateeditordata_isbase) {
            qtablewidget_updateeditordata_isbase = false;
            QTableWidget::updateEditorData();
        } else if (qtablewidget_updateeditordata_callback != nullptr) {
            qtablewidget_updateeditordata_callback();
        } else {
            QTableWidget::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtablewidget_updateeditorgeometries_isbase) {
            qtablewidget_updateeditorgeometries_isbase = false;
            QTableWidget::updateEditorGeometries();
        } else if (qtablewidget_updateeditorgeometries_callback != nullptr) {
            qtablewidget_updateeditorgeometries_callback();
        } else {
            QTableWidget::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtablewidget_verticalscrollbarvaluechanged_isbase) {
            qtablewidget_verticalscrollbarvaluechanged_isbase = false;
            QTableWidget::verticalScrollbarValueChanged(value);
        } else if (qtablewidget_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qtablewidget_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QTableWidget::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtablewidget_horizontalscrollbarvaluechanged_isbase) {
            qtablewidget_horizontalscrollbarvaluechanged_isbase = false;
            QTableWidget::horizontalScrollbarValueChanged(value);
        } else if (qtablewidget_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qtablewidget_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QTableWidget::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtablewidget_closeeditor_isbase) {
            qtablewidget_closeeditor_isbase = false;
            QTableWidget::closeEditor(editor, hint);
        } else if (qtablewidget_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            qtablewidget_closeeditor_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtablewidget_commitdata_isbase) {
            qtablewidget_commitdata_isbase = false;
            QTableWidget::commitData(editor);
        } else if (qtablewidget_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            qtablewidget_commitdata_callback(this, cbval1);
        } else {
            QTableWidget::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtablewidget_editordestroyed_isbase) {
            qtablewidget_editordestroyed_isbase = false;
            QTableWidget::editorDestroyed(editor);
        } else if (qtablewidget_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            qtablewidget_editordestroyed_callback(this, cbval1);
        } else {
            QTableWidget::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtablewidget_edit2_isbase) {
            qtablewidget_edit2_isbase = false;
            return QTableWidget::edit(index, trigger, event);
        } else if (qtablewidget_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = qtablewidget_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTableWidget::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtablewidget_selectioncommand_isbase) {
            qtablewidget_selectioncommand_isbase = false;
            return QTableWidget::selectionCommand(index, event);
        } else if (qtablewidget_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = qtablewidget_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return QTableWidget::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtablewidget_startdrag_isbase) {
            qtablewidget_startdrag_isbase = false;
            QTableWidget::startDrag(supportedActions);
        } else if (qtablewidget_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            qtablewidget_startdrag_callback(this, cbval1);
        } else {
            QTableWidget::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtablewidget_focusnextprevchild_isbase) {
            qtablewidget_focusnextprevchild_isbase = false;
            return QTableWidget::focusNextPrevChild(next);
        } else if (qtablewidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qtablewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtablewidget_viewportevent_isbase) {
            qtablewidget_viewportevent_isbase = false;
            return QTableWidget::viewportEvent(event);
        } else if (qtablewidget_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtablewidget_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidget::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtablewidget_mousepressevent_isbase) {
            qtablewidget_mousepressevent_isbase = false;
            QTableWidget::mousePressEvent(event);
        } else if (qtablewidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtablewidget_mousepressevent_callback(this, cbval1);
        } else {
            QTableWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtablewidget_mousemoveevent_isbase) {
            qtablewidget_mousemoveevent_isbase = false;
            QTableWidget::mouseMoveEvent(event);
        } else if (qtablewidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtablewidget_mousemoveevent_callback(this, cbval1);
        } else {
            QTableWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtablewidget_mousereleaseevent_isbase) {
            qtablewidget_mousereleaseevent_isbase = false;
            QTableWidget::mouseReleaseEvent(event);
        } else if (qtablewidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtablewidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QTableWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtablewidget_mousedoubleclickevent_isbase) {
            qtablewidget_mousedoubleclickevent_isbase = false;
            QTableWidget::mouseDoubleClickEvent(event);
        } else if (qtablewidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtablewidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QTableWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtablewidget_dragenterevent_isbase) {
            qtablewidget_dragenterevent_isbase = false;
            QTableWidget::dragEnterEvent(event);
        } else if (qtablewidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qtablewidget_dragenterevent_callback(this, cbval1);
        } else {
            QTableWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtablewidget_dragmoveevent_isbase) {
            qtablewidget_dragmoveevent_isbase = false;
            QTableWidget::dragMoveEvent(event);
        } else if (qtablewidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qtablewidget_dragmoveevent_callback(this, cbval1);
        } else {
            QTableWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtablewidget_dragleaveevent_isbase) {
            qtablewidget_dragleaveevent_isbase = false;
            QTableWidget::dragLeaveEvent(event);
        } else if (qtablewidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qtablewidget_dragleaveevent_callback(this, cbval1);
        } else {
            QTableWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtablewidget_focusinevent_isbase) {
            qtablewidget_focusinevent_isbase = false;
            QTableWidget::focusInEvent(event);
        } else if (qtablewidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtablewidget_focusinevent_callback(this, cbval1);
        } else {
            QTableWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtablewidget_focusoutevent_isbase) {
            qtablewidget_focusoutevent_isbase = false;
            QTableWidget::focusOutEvent(event);
        } else if (qtablewidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtablewidget_focusoutevent_callback(this, cbval1);
        } else {
            QTableWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtablewidget_keypressevent_isbase) {
            qtablewidget_keypressevent_isbase = false;
            QTableWidget::keyPressEvent(event);
        } else if (qtablewidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtablewidget_keypressevent_callback(this, cbval1);
        } else {
            QTableWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtablewidget_resizeevent_isbase) {
            qtablewidget_resizeevent_isbase = false;
            QTableWidget::resizeEvent(event);
        } else if (qtablewidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qtablewidget_resizeevent_callback(this, cbval1);
        } else {
            QTableWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtablewidget_inputmethodevent_isbase) {
            qtablewidget_inputmethodevent_isbase = false;
            QTableWidget::inputMethodEvent(event);
        } else if (qtablewidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qtablewidget_inputmethodevent_callback(this, cbval1);
        } else {
            QTableWidget::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtablewidget_eventfilter_isbase) {
            qtablewidget_eventfilter_isbase = false;
            return QTableWidget::eventFilter(object, event);
        } else if (qtablewidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qtablewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTableWidget::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtablewidget_minimumsizehint_isbase) {
            qtablewidget_minimumsizehint_isbase = false;
            return QTableWidget::minimumSizeHint();
        } else if (qtablewidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qtablewidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QTableWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtablewidget_sizehint_isbase) {
            qtablewidget_sizehint_isbase = false;
            return QTableWidget::sizeHint();
        } else if (qtablewidget_sizehint_callback != nullptr) {
            QSize* callback_ret = qtablewidget_sizehint_callback();
            return *callback_ret;
        } else {
            return QTableWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtablewidget_setupviewport_isbase) {
            qtablewidget_setupviewport_isbase = false;
            QTableWidget::setupViewport(viewport);
        } else if (qtablewidget_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qtablewidget_setupviewport_callback(this, cbval1);
        } else {
            QTableWidget::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtablewidget_wheelevent_isbase) {
            qtablewidget_wheelevent_isbase = false;
            QTableWidget::wheelEvent(param1);
        } else if (qtablewidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qtablewidget_wheelevent_callback(this, cbval1);
        } else {
            QTableWidget::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtablewidget_contextmenuevent_isbase) {
            qtablewidget_contextmenuevent_isbase = false;
            QTableWidget::contextMenuEvent(param1);
        } else if (qtablewidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qtablewidget_contextmenuevent_callback(this, cbval1);
        } else {
            QTableWidget::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtablewidget_changeevent_isbase) {
            qtablewidget_changeevent_isbase = false;
            QTableWidget::changeEvent(param1);
        } else if (qtablewidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qtablewidget_changeevent_callback(this, cbval1);
        } else {
            QTableWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtablewidget_initstyleoption_isbase) {
            qtablewidget_initstyleoption_isbase = false;
            QTableWidget::initStyleOption(option);
        } else if (qtablewidget_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qtablewidget_initstyleoption_callback(this, cbval1);
        } else {
            QTableWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtablewidget_devtype_isbase) {
            qtablewidget_devtype_isbase = false;
            return QTableWidget::devType();
        } else if (qtablewidget_devtype_callback != nullptr) {
            int callback_ret = qtablewidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtablewidget_setvisible_isbase) {
            qtablewidget_setvisible_isbase = false;
            QTableWidget::setVisible(visible);
        } else if (qtablewidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qtablewidget_setvisible_callback(this, cbval1);
        } else {
            QTableWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtablewidget_heightforwidth_isbase) {
            qtablewidget_heightforwidth_isbase = false;
            return QTableWidget::heightForWidth(param1);
        } else if (qtablewidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qtablewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtablewidget_hasheightforwidth_isbase) {
            qtablewidget_hasheightforwidth_isbase = false;
            return QTableWidget::hasHeightForWidth();
        } else if (qtablewidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qtablewidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QTableWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtablewidget_paintengine_isbase) {
            qtablewidget_paintengine_isbase = false;
            return QTableWidget::paintEngine();
        } else if (qtablewidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qtablewidget_paintengine_callback();
            return callback_ret;
        } else {
            return QTableWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtablewidget_keyreleaseevent_isbase) {
            qtablewidget_keyreleaseevent_isbase = false;
            QTableWidget::keyReleaseEvent(event);
        } else if (qtablewidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtablewidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QTableWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtablewidget_enterevent_isbase) {
            qtablewidget_enterevent_isbase = false;
            QTableWidget::enterEvent(event);
        } else if (qtablewidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qtablewidget_enterevent_callback(this, cbval1);
        } else {
            QTableWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtablewidget_leaveevent_isbase) {
            qtablewidget_leaveevent_isbase = false;
            QTableWidget::leaveEvent(event);
        } else if (qtablewidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtablewidget_leaveevent_callback(this, cbval1);
        } else {
            QTableWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtablewidget_moveevent_isbase) {
            qtablewidget_moveevent_isbase = false;
            QTableWidget::moveEvent(event);
        } else if (qtablewidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qtablewidget_moveevent_callback(this, cbval1);
        } else {
            QTableWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtablewidget_closeevent_isbase) {
            qtablewidget_closeevent_isbase = false;
            QTableWidget::closeEvent(event);
        } else if (qtablewidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qtablewidget_closeevent_callback(this, cbval1);
        } else {
            QTableWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtablewidget_tabletevent_isbase) {
            qtablewidget_tabletevent_isbase = false;
            QTableWidget::tabletEvent(event);
        } else if (qtablewidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qtablewidget_tabletevent_callback(this, cbval1);
        } else {
            QTableWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtablewidget_actionevent_isbase) {
            qtablewidget_actionevent_isbase = false;
            QTableWidget::actionEvent(event);
        } else if (qtablewidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qtablewidget_actionevent_callback(this, cbval1);
        } else {
            QTableWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtablewidget_showevent_isbase) {
            qtablewidget_showevent_isbase = false;
            QTableWidget::showEvent(event);
        } else if (qtablewidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qtablewidget_showevent_callback(this, cbval1);
        } else {
            QTableWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtablewidget_hideevent_isbase) {
            qtablewidget_hideevent_isbase = false;
            QTableWidget::hideEvent(event);
        } else if (qtablewidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qtablewidget_hideevent_callback(this, cbval1);
        } else {
            QTableWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtablewidget_nativeevent_isbase) {
            qtablewidget_nativeevent_isbase = false;
            return QTableWidget::nativeEvent(eventType, message, result);
        } else if (qtablewidget_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy(eventType_str.data, eventType_qb.data(), eventType_str.len);
            eventType_str.data[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qtablewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTableWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtablewidget_metric_isbase) {
            qtablewidget_metric_isbase = false;
            return QTableWidget::metric(param1);
        } else if (qtablewidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qtablewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtablewidget_initpainter_isbase) {
            qtablewidget_initpainter_isbase = false;
            QTableWidget::initPainter(painter);
        } else if (qtablewidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qtablewidget_initpainter_callback(this, cbval1);
        } else {
            QTableWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtablewidget_redirected_isbase) {
            qtablewidget_redirected_isbase = false;
            return QTableWidget::redirected(offset);
        } else if (qtablewidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qtablewidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtablewidget_sharedpainter_isbase) {
            qtablewidget_sharedpainter_isbase = false;
            return QTableWidget::sharedPainter();
        } else if (qtablewidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qtablewidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return QTableWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtablewidget_childevent_isbase) {
            qtablewidget_childevent_isbase = false;
            QTableWidget::childEvent(event);
        } else if (qtablewidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtablewidget_childevent_callback(this, cbval1);
        } else {
            QTableWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtablewidget_customevent_isbase) {
            qtablewidget_customevent_isbase = false;
            QTableWidget::customEvent(event);
        } else if (qtablewidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtablewidget_customevent_callback(this, cbval1);
        } else {
            QTableWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtablewidget_connectnotify_isbase) {
            qtablewidget_connectnotify_isbase = false;
            QTableWidget::connectNotify(signal);
        } else if (qtablewidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtablewidget_connectnotify_callback(this, cbval1);
        } else {
            QTableWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtablewidget_disconnectnotify_isbase) {
            qtablewidget_disconnectnotify_isbase = false;
            QTableWidget::disconnectNotify(signal);
        } else if (qtablewidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtablewidget_disconnectnotify_callback(this, cbval1);
        } else {
            QTableWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowMoved(int row, int oldIndex, int newIndex) {
        if (qtablewidget_rowmoved_isbase) {
            qtablewidget_rowmoved_isbase = false;
            QTableWidget::rowMoved(row, oldIndex, newIndex);
        } else if (qtablewidget_rowmoved_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = oldIndex;
            int cbval3 = newIndex;

            qtablewidget_rowmoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableWidget::rowMoved(row, oldIndex, newIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnMoved(int column, int oldIndex, int newIndex) {
        if (qtablewidget_columnmoved_isbase) {
            qtablewidget_columnmoved_isbase = false;
            QTableWidget::columnMoved(column, oldIndex, newIndex);
        } else if (qtablewidget_columnmoved_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = oldIndex;
            int cbval3 = newIndex;

            qtablewidget_columnmoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableWidget::columnMoved(column, oldIndex, newIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowResized(int row, int oldHeight, int newHeight) {
        if (qtablewidget_rowresized_isbase) {
            qtablewidget_rowresized_isbase = false;
            QTableWidget::rowResized(row, oldHeight, newHeight);
        } else if (qtablewidget_rowresized_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = oldHeight;
            int cbval3 = newHeight;

            qtablewidget_rowresized_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableWidget::rowResized(row, oldHeight, newHeight);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnResized(int column, int oldWidth, int newWidth) {
        if (qtablewidget_columnresized_isbase) {
            qtablewidget_columnresized_isbase = false;
            QTableWidget::columnResized(column, oldWidth, newWidth);
        } else if (qtablewidget_columnresized_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = oldWidth;
            int cbval3 = newWidth;

            qtablewidget_columnresized_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTableWidget::columnResized(column, oldWidth, newWidth);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowCountChanged(int oldCount, int newCount) {
        if (qtablewidget_rowcountchanged_isbase) {
            qtablewidget_rowcountchanged_isbase = false;
            QTableWidget::rowCountChanged(oldCount, newCount);
        } else if (qtablewidget_rowcountchanged_callback != nullptr) {
            int cbval1 = oldCount;
            int cbval2 = newCount;

            qtablewidget_rowcountchanged_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::rowCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnCountChanged(int oldCount, int newCount) {
        if (qtablewidget_columncountchanged_isbase) {
            qtablewidget_columncountchanged_isbase = false;
            QTableWidget::columnCountChanged(oldCount, newCount);
        } else if (qtablewidget_columncountchanged_callback != nullptr) {
            int cbval1 = oldCount;
            int cbval2 = newCount;

            qtablewidget_columncountchanged_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::columnCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qtablewidget_state_isbase) {
            qtablewidget_state_isbase = false;
            return QTableWidget::state();
        } else if (qtablewidget_state_callback != nullptr) {
            int callback_ret = qtablewidget_state_callback();
            return static_cast<VirtualQTableWidget::State>(callback_ret);
        } else {
            return QTableWidget::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qtablewidget_setstate_isbase) {
            qtablewidget_setstate_isbase = false;
            QTableWidget::setState(state);
        } else if (qtablewidget_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qtablewidget_setstate_callback(this, cbval1);
        } else {
            QTableWidget::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qtablewidget_scheduledelayeditemslayout_isbase) {
            qtablewidget_scheduledelayeditemslayout_isbase = false;
            QTableWidget::scheduleDelayedItemsLayout();
        } else if (qtablewidget_scheduledelayeditemslayout_callback != nullptr) {
            qtablewidget_scheduledelayeditemslayout_callback();
        } else {
            QTableWidget::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qtablewidget_executedelayeditemslayout_isbase) {
            qtablewidget_executedelayeditemslayout_isbase = false;
            QTableWidget::executeDelayedItemsLayout();
        } else if (qtablewidget_executedelayeditemslayout_callback != nullptr) {
            qtablewidget_executedelayeditemslayout_callback();
        } else {
            QTableWidget::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qtablewidget_setdirtyregion_isbase) {
            qtablewidget_setdirtyregion_isbase = false;
            QTableWidget::setDirtyRegion(region);
        } else if (qtablewidget_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            qtablewidget_setdirtyregion_callback(this, cbval1);
        } else {
            QTableWidget::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qtablewidget_scrolldirtyregion_isbase) {
            qtablewidget_scrolldirtyregion_isbase = false;
            QTableWidget::scrollDirtyRegion(dx, dy);
        } else if (qtablewidget_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qtablewidget_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            QTableWidget::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qtablewidget_dirtyregionoffset_isbase) {
            qtablewidget_dirtyregionoffset_isbase = false;
            return QTableWidget::dirtyRegionOffset();
        } else if (qtablewidget_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = qtablewidget_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return QTableWidget::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qtablewidget_startautoscroll_isbase) {
            qtablewidget_startautoscroll_isbase = false;
            QTableWidget::startAutoScroll();
        } else if (qtablewidget_startautoscroll_callback != nullptr) {
            qtablewidget_startautoscroll_callback();
        } else {
            QTableWidget::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qtablewidget_stopautoscroll_isbase) {
            qtablewidget_stopautoscroll_isbase = false;
            QTableWidget::stopAutoScroll();
        } else if (qtablewidget_stopautoscroll_callback != nullptr) {
            qtablewidget_stopautoscroll_callback();
        } else {
            QTableWidget::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qtablewidget_doautoscroll_isbase) {
            qtablewidget_doautoscroll_isbase = false;
            QTableWidget::doAutoScroll();
        } else if (qtablewidget_doautoscroll_callback != nullptr) {
            qtablewidget_doautoscroll_callback();
        } else {
            QTableWidget::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qtablewidget_dropindicatorposition_isbase) {
            qtablewidget_dropindicatorposition_isbase = false;
            return QTableWidget::dropIndicatorPosition();
        } else if (qtablewidget_dropindicatorposition_callback != nullptr) {
            int callback_ret = qtablewidget_dropindicatorposition_callback();
            return static_cast<VirtualQTableWidget::DropIndicatorPosition>(callback_ret);
        } else {
            return QTableWidget::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtablewidget_setviewportmargins_isbase) {
            qtablewidget_setviewportmargins_isbase = false;
            QTableWidget::setViewportMargins(left, top, right, bottom);
        } else if (qtablewidget_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qtablewidget_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QTableWidget::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtablewidget_viewportmargins_isbase) {
            qtablewidget_viewportmargins_isbase = false;
            return QTableWidget::viewportMargins();
        } else if (qtablewidget_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qtablewidget_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QTableWidget::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtablewidget_drawframe_isbase) {
            qtablewidget_drawframe_isbase = false;
            QTableWidget::drawFrame(param1);
        } else if (qtablewidget_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qtablewidget_drawframe_callback(this, cbval1);
        } else {
            QTableWidget::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtablewidget_updatemicrofocus_isbase) {
            qtablewidget_updatemicrofocus_isbase = false;
            QTableWidget::updateMicroFocus();
        } else if (qtablewidget_updatemicrofocus_callback != nullptr) {
            qtablewidget_updatemicrofocus_callback();
        } else {
            QTableWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtablewidget_create_isbase) {
            qtablewidget_create_isbase = false;
            QTableWidget::create();
        } else if (qtablewidget_create_callback != nullptr) {
            qtablewidget_create_callback();
        } else {
            QTableWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtablewidget_destroy_isbase) {
            qtablewidget_destroy_isbase = false;
            QTableWidget::destroy();
        } else if (qtablewidget_destroy_callback != nullptr) {
            qtablewidget_destroy_callback();
        } else {
            QTableWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtablewidget_focusnextchild_isbase) {
            qtablewidget_focusnextchild_isbase = false;
            return QTableWidget::focusNextChild();
        } else if (qtablewidget_focusnextchild_callback != nullptr) {
            bool callback_ret = qtablewidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return QTableWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtablewidget_focuspreviouschild_isbase) {
            qtablewidget_focuspreviouschild_isbase = false;
            return QTableWidget::focusPreviousChild();
        } else if (qtablewidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qtablewidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QTableWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtablewidget_sender_isbase) {
            qtablewidget_sender_isbase = false;
            return QTableWidget::sender();
        } else if (qtablewidget_sender_callback != nullptr) {
            QObject* callback_ret = qtablewidget_sender_callback();
            return callback_ret;
        } else {
            return QTableWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtablewidget_sendersignalindex_isbase) {
            qtablewidget_sendersignalindex_isbase = false;
            return QTableWidget::senderSignalIndex();
        } else if (qtablewidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qtablewidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtablewidget_receivers_isbase) {
            qtablewidget_receivers_isbase = false;
            return QTableWidget::receivers(signal);
        } else if (qtablewidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtablewidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTableWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtablewidget_issignalconnected_isbase) {
            qtablewidget_issignalconnected_isbase = false;
            return QTableWidget::isSignalConnected(signal);
        } else if (qtablewidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtablewidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTableWidget::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QTableWidget_Event(QTableWidget* self, QEvent* e);
    friend bool QTableWidget_QBaseEvent(QTableWidget* self, QEvent* e);
    friend libqt_list /* of libqt_string */ QTableWidget_MimeTypes(const QTableWidget* self);
    friend libqt_list /* of libqt_string */ QTableWidget_QBaseMimeTypes(const QTableWidget* self);
    friend QMimeData* QTableWidget_MimeData(const QTableWidget* self, const libqt_list /* of QTableWidgetItem* */ items);
    friend QMimeData* QTableWidget_QBaseMimeData(const QTableWidget* self, const libqt_list /* of QTableWidgetItem* */ items);
    friend bool QTableWidget_DropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action);
    friend bool QTableWidget_QBaseDropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action);
    friend int QTableWidget_SupportedDropActions(const QTableWidget* self);
    friend int QTableWidget_QBaseSupportedDropActions(const QTableWidget* self);
    friend void QTableWidget_DropEvent(QTableWidget* self, QDropEvent* event);
    friend void QTableWidget_QBaseDropEvent(QTableWidget* self, QDropEvent* event);
    friend void QTableWidget_ScrollContentsBy(QTableWidget* self, int dx, int dy);
    friend void QTableWidget_QBaseScrollContentsBy(QTableWidget* self, int dx, int dy);
    friend void QTableWidget_InitViewItemOption(const QTableWidget* self, QStyleOptionViewItem* option);
    friend void QTableWidget_QBaseInitViewItemOption(const QTableWidget* self, QStyleOptionViewItem* option);
    friend void QTableWidget_PaintEvent(QTableWidget* self, QPaintEvent* e);
    friend void QTableWidget_QBasePaintEvent(QTableWidget* self, QPaintEvent* e);
    friend void QTableWidget_TimerEvent(QTableWidget* self, QTimerEvent* event);
    friend void QTableWidget_QBaseTimerEvent(QTableWidget* self, QTimerEvent* event);
    friend int QTableWidget_HorizontalOffset(const QTableWidget* self);
    friend int QTableWidget_QBaseHorizontalOffset(const QTableWidget* self);
    friend int QTableWidget_VerticalOffset(const QTableWidget* self);
    friend int QTableWidget_QBaseVerticalOffset(const QTableWidget* self);
    friend QModelIndex* QTableWidget_MoveCursor(QTableWidget* self, int cursorAction, int modifiers);
    friend QModelIndex* QTableWidget_QBaseMoveCursor(QTableWidget* self, int cursorAction, int modifiers);
    friend void QTableWidget_SetSelection(QTableWidget* self, const QRect* rect, int command);
    friend void QTableWidget_QBaseSetSelection(QTableWidget* self, const QRect* rect, int command);
    friend QRegion* QTableWidget_VisualRegionForSelection(const QTableWidget* self, const QItemSelection* selection);
    friend QRegion* QTableWidget_QBaseVisualRegionForSelection(const QTableWidget* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QTableWidget_SelectedIndexes(const QTableWidget* self);
    friend libqt_list /* of QModelIndex* */ QTableWidget_QBaseSelectedIndexes(const QTableWidget* self);
    friend void QTableWidget_UpdateGeometries(QTableWidget* self);
    friend void QTableWidget_QBaseUpdateGeometries(QTableWidget* self);
    friend QSize* QTableWidget_ViewportSizeHint(const QTableWidget* self);
    friend QSize* QTableWidget_QBaseViewportSizeHint(const QTableWidget* self);
    friend int QTableWidget_SizeHintForRow(const QTableWidget* self, int row);
    friend int QTableWidget_QBaseSizeHintForRow(const QTableWidget* self, int row);
    friend int QTableWidget_SizeHintForColumn(const QTableWidget* self, int column);
    friend int QTableWidget_QBaseSizeHintForColumn(const QTableWidget* self, int column);
    friend void QTableWidget_VerticalScrollbarAction(QTableWidget* self, int action);
    friend void QTableWidget_QBaseVerticalScrollbarAction(QTableWidget* self, int action);
    friend void QTableWidget_HorizontalScrollbarAction(QTableWidget* self, int action);
    friend void QTableWidget_QBaseHorizontalScrollbarAction(QTableWidget* self, int action);
    friend bool QTableWidget_IsIndexHidden(const QTableWidget* self, const QModelIndex* index);
    friend bool QTableWidget_QBaseIsIndexHidden(const QTableWidget* self, const QModelIndex* index);
    friend void QTableWidget_SelectionChanged(QTableWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTableWidget_QBaseSelectionChanged(QTableWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QTableWidget_CurrentChanged(QTableWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTableWidget_QBaseCurrentChanged(QTableWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QTableWidget_DataChanged(QTableWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QTableWidget_QBaseDataChanged(QTableWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QTableWidget_RowsInserted(QTableWidget* self, const QModelIndex* parent, int start, int end);
    friend void QTableWidget_QBaseRowsInserted(QTableWidget* self, const QModelIndex* parent, int start, int end);
    friend void QTableWidget_RowsAboutToBeRemoved(QTableWidget* self, const QModelIndex* parent, int start, int end);
    friend void QTableWidget_QBaseRowsAboutToBeRemoved(QTableWidget* self, const QModelIndex* parent, int start, int end);
    friend void QTableWidget_UpdateEditorData(QTableWidget* self);
    friend void QTableWidget_QBaseUpdateEditorData(QTableWidget* self);
    friend void QTableWidget_UpdateEditorGeometries(QTableWidget* self);
    friend void QTableWidget_QBaseUpdateEditorGeometries(QTableWidget* self);
    friend void QTableWidget_VerticalScrollbarValueChanged(QTableWidget* self, int value);
    friend void QTableWidget_QBaseVerticalScrollbarValueChanged(QTableWidget* self, int value);
    friend void QTableWidget_HorizontalScrollbarValueChanged(QTableWidget* self, int value);
    friend void QTableWidget_QBaseHorizontalScrollbarValueChanged(QTableWidget* self, int value);
    friend void QTableWidget_CloseEditor(QTableWidget* self, QWidget* editor, int hint);
    friend void QTableWidget_QBaseCloseEditor(QTableWidget* self, QWidget* editor, int hint);
    friend void QTableWidget_CommitData(QTableWidget* self, QWidget* editor);
    friend void QTableWidget_QBaseCommitData(QTableWidget* self, QWidget* editor);
    friend void QTableWidget_EditorDestroyed(QTableWidget* self, QObject* editor);
    friend void QTableWidget_QBaseEditorDestroyed(QTableWidget* self, QObject* editor);
    friend bool QTableWidget_Edit2(QTableWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QTableWidget_QBaseEdit2(QTableWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QTableWidget_SelectionCommand(const QTableWidget* self, const QModelIndex* index, const QEvent* event);
    friend int QTableWidget_QBaseSelectionCommand(const QTableWidget* self, const QModelIndex* index, const QEvent* event);
    friend void QTableWidget_StartDrag(QTableWidget* self, int supportedActions);
    friend void QTableWidget_QBaseStartDrag(QTableWidget* self, int supportedActions);
    friend bool QTableWidget_FocusNextPrevChild(QTableWidget* self, bool next);
    friend bool QTableWidget_QBaseFocusNextPrevChild(QTableWidget* self, bool next);
    friend bool QTableWidget_ViewportEvent(QTableWidget* self, QEvent* event);
    friend bool QTableWidget_QBaseViewportEvent(QTableWidget* self, QEvent* event);
    friend void QTableWidget_MousePressEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_QBaseMousePressEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_MouseMoveEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_QBaseMouseMoveEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_MouseReleaseEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_QBaseMouseReleaseEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_MouseDoubleClickEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_QBaseMouseDoubleClickEvent(QTableWidget* self, QMouseEvent* event);
    friend void QTableWidget_DragEnterEvent(QTableWidget* self, QDragEnterEvent* event);
    friend void QTableWidget_QBaseDragEnterEvent(QTableWidget* self, QDragEnterEvent* event);
    friend void QTableWidget_DragMoveEvent(QTableWidget* self, QDragMoveEvent* event);
    friend void QTableWidget_QBaseDragMoveEvent(QTableWidget* self, QDragMoveEvent* event);
    friend void QTableWidget_DragLeaveEvent(QTableWidget* self, QDragLeaveEvent* event);
    friend void QTableWidget_QBaseDragLeaveEvent(QTableWidget* self, QDragLeaveEvent* event);
    friend void QTableWidget_FocusInEvent(QTableWidget* self, QFocusEvent* event);
    friend void QTableWidget_QBaseFocusInEvent(QTableWidget* self, QFocusEvent* event);
    friend void QTableWidget_FocusOutEvent(QTableWidget* self, QFocusEvent* event);
    friend void QTableWidget_QBaseFocusOutEvent(QTableWidget* self, QFocusEvent* event);
    friend void QTableWidget_KeyPressEvent(QTableWidget* self, QKeyEvent* event);
    friend void QTableWidget_QBaseKeyPressEvent(QTableWidget* self, QKeyEvent* event);
    friend void QTableWidget_ResizeEvent(QTableWidget* self, QResizeEvent* event);
    friend void QTableWidget_QBaseResizeEvent(QTableWidget* self, QResizeEvent* event);
    friend void QTableWidget_InputMethodEvent(QTableWidget* self, QInputMethodEvent* event);
    friend void QTableWidget_QBaseInputMethodEvent(QTableWidget* self, QInputMethodEvent* event);
    friend bool QTableWidget_EventFilter(QTableWidget* self, QObject* object, QEvent* event);
    friend bool QTableWidget_QBaseEventFilter(QTableWidget* self, QObject* object, QEvent* event);
    friend void QTableWidget_WheelEvent(QTableWidget* self, QWheelEvent* param1);
    friend void QTableWidget_QBaseWheelEvent(QTableWidget* self, QWheelEvent* param1);
    friend void QTableWidget_ContextMenuEvent(QTableWidget* self, QContextMenuEvent* param1);
    friend void QTableWidget_QBaseContextMenuEvent(QTableWidget* self, QContextMenuEvent* param1);
    friend void QTableWidget_ChangeEvent(QTableWidget* self, QEvent* param1);
    friend void QTableWidget_QBaseChangeEvent(QTableWidget* self, QEvent* param1);
    friend void QTableWidget_InitStyleOption(const QTableWidget* self, QStyleOptionFrame* option);
    friend void QTableWidget_QBaseInitStyleOption(const QTableWidget* self, QStyleOptionFrame* option);
    friend void QTableWidget_KeyReleaseEvent(QTableWidget* self, QKeyEvent* event);
    friend void QTableWidget_QBaseKeyReleaseEvent(QTableWidget* self, QKeyEvent* event);
    friend void QTableWidget_EnterEvent(QTableWidget* self, QEnterEvent* event);
    friend void QTableWidget_QBaseEnterEvent(QTableWidget* self, QEnterEvent* event);
    friend void QTableWidget_LeaveEvent(QTableWidget* self, QEvent* event);
    friend void QTableWidget_QBaseLeaveEvent(QTableWidget* self, QEvent* event);
    friend void QTableWidget_MoveEvent(QTableWidget* self, QMoveEvent* event);
    friend void QTableWidget_QBaseMoveEvent(QTableWidget* self, QMoveEvent* event);
    friend void QTableWidget_CloseEvent(QTableWidget* self, QCloseEvent* event);
    friend void QTableWidget_QBaseCloseEvent(QTableWidget* self, QCloseEvent* event);
    friend void QTableWidget_TabletEvent(QTableWidget* self, QTabletEvent* event);
    friend void QTableWidget_QBaseTabletEvent(QTableWidget* self, QTabletEvent* event);
    friend void QTableWidget_ActionEvent(QTableWidget* self, QActionEvent* event);
    friend void QTableWidget_QBaseActionEvent(QTableWidget* self, QActionEvent* event);
    friend void QTableWidget_ShowEvent(QTableWidget* self, QShowEvent* event);
    friend void QTableWidget_QBaseShowEvent(QTableWidget* self, QShowEvent* event);
    friend void QTableWidget_HideEvent(QTableWidget* self, QHideEvent* event);
    friend void QTableWidget_QBaseHideEvent(QTableWidget* self, QHideEvent* event);
    friend bool QTableWidget_NativeEvent(QTableWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTableWidget_QBaseNativeEvent(QTableWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTableWidget_Metric(const QTableWidget* self, int param1);
    friend int QTableWidget_QBaseMetric(const QTableWidget* self, int param1);
    friend void QTableWidget_InitPainter(const QTableWidget* self, QPainter* painter);
    friend void QTableWidget_QBaseInitPainter(const QTableWidget* self, QPainter* painter);
    friend QPaintDevice* QTableWidget_Redirected(const QTableWidget* self, QPoint* offset);
    friend QPaintDevice* QTableWidget_QBaseRedirected(const QTableWidget* self, QPoint* offset);
    friend QPainter* QTableWidget_SharedPainter(const QTableWidget* self);
    friend QPainter* QTableWidget_QBaseSharedPainter(const QTableWidget* self);
    friend void QTableWidget_ChildEvent(QTableWidget* self, QChildEvent* event);
    friend void QTableWidget_QBaseChildEvent(QTableWidget* self, QChildEvent* event);
    friend void QTableWidget_CustomEvent(QTableWidget* self, QEvent* event);
    friend void QTableWidget_QBaseCustomEvent(QTableWidget* self, QEvent* event);
    friend void QTableWidget_ConnectNotify(QTableWidget* self, const QMetaMethod* signal);
    friend void QTableWidget_QBaseConnectNotify(QTableWidget* self, const QMetaMethod* signal);
    friend void QTableWidget_DisconnectNotify(QTableWidget* self, const QMetaMethod* signal);
    friend void QTableWidget_QBaseDisconnectNotify(QTableWidget* self, const QMetaMethod* signal);
    friend void QTableWidget_RowMoved(QTableWidget* self, int row, int oldIndex, int newIndex);
    friend void QTableWidget_QBaseRowMoved(QTableWidget* self, int row, int oldIndex, int newIndex);
    friend void QTableWidget_ColumnMoved(QTableWidget* self, int column, int oldIndex, int newIndex);
    friend void QTableWidget_QBaseColumnMoved(QTableWidget* self, int column, int oldIndex, int newIndex);
    friend void QTableWidget_RowResized(QTableWidget* self, int row, int oldHeight, int newHeight);
    friend void QTableWidget_QBaseRowResized(QTableWidget* self, int row, int oldHeight, int newHeight);
    friend void QTableWidget_ColumnResized(QTableWidget* self, int column, int oldWidth, int newWidth);
    friend void QTableWidget_QBaseColumnResized(QTableWidget* self, int column, int oldWidth, int newWidth);
    friend void QTableWidget_RowCountChanged(QTableWidget* self, int oldCount, int newCount);
    friend void QTableWidget_QBaseRowCountChanged(QTableWidget* self, int oldCount, int newCount);
    friend void QTableWidget_ColumnCountChanged(QTableWidget* self, int oldCount, int newCount);
    friend void QTableWidget_QBaseColumnCountChanged(QTableWidget* self, int oldCount, int newCount);
    friend int QTableWidget_State(const QTableWidget* self);
    friend int QTableWidget_QBaseState(const QTableWidget* self);
    friend void QTableWidget_SetState(QTableWidget* self, int state);
    friend void QTableWidget_QBaseSetState(QTableWidget* self, int state);
    friend void QTableWidget_ScheduleDelayedItemsLayout(QTableWidget* self);
    friend void QTableWidget_QBaseScheduleDelayedItemsLayout(QTableWidget* self);
    friend void QTableWidget_ExecuteDelayedItemsLayout(QTableWidget* self);
    friend void QTableWidget_QBaseExecuteDelayedItemsLayout(QTableWidget* self);
    friend void QTableWidget_SetDirtyRegion(QTableWidget* self, const QRegion* region);
    friend void QTableWidget_QBaseSetDirtyRegion(QTableWidget* self, const QRegion* region);
    friend void QTableWidget_ScrollDirtyRegion(QTableWidget* self, int dx, int dy);
    friend void QTableWidget_QBaseScrollDirtyRegion(QTableWidget* self, int dx, int dy);
    friend QPoint* QTableWidget_DirtyRegionOffset(const QTableWidget* self);
    friend QPoint* QTableWidget_QBaseDirtyRegionOffset(const QTableWidget* self);
    friend void QTableWidget_StartAutoScroll(QTableWidget* self);
    friend void QTableWidget_QBaseStartAutoScroll(QTableWidget* self);
    friend void QTableWidget_StopAutoScroll(QTableWidget* self);
    friend void QTableWidget_QBaseStopAutoScroll(QTableWidget* self);
    friend void QTableWidget_DoAutoScroll(QTableWidget* self);
    friend void QTableWidget_QBaseDoAutoScroll(QTableWidget* self);
    friend int QTableWidget_DropIndicatorPosition(const QTableWidget* self);
    friend int QTableWidget_QBaseDropIndicatorPosition(const QTableWidget* self);
    friend void QTableWidget_SetViewportMargins(QTableWidget* self, int left, int top, int right, int bottom);
    friend void QTableWidget_QBaseSetViewportMargins(QTableWidget* self, int left, int top, int right, int bottom);
    friend QMargins* QTableWidget_ViewportMargins(const QTableWidget* self);
    friend QMargins* QTableWidget_QBaseViewportMargins(const QTableWidget* self);
    friend void QTableWidget_DrawFrame(QTableWidget* self, QPainter* param1);
    friend void QTableWidget_QBaseDrawFrame(QTableWidget* self, QPainter* param1);
    friend void QTableWidget_UpdateMicroFocus(QTableWidget* self);
    friend void QTableWidget_QBaseUpdateMicroFocus(QTableWidget* self);
    friend void QTableWidget_Create(QTableWidget* self);
    friend void QTableWidget_QBaseCreate(QTableWidget* self);
    friend void QTableWidget_Destroy(QTableWidget* self);
    friend void QTableWidget_QBaseDestroy(QTableWidget* self);
    friend bool QTableWidget_FocusNextChild(QTableWidget* self);
    friend bool QTableWidget_QBaseFocusNextChild(QTableWidget* self);
    friend bool QTableWidget_FocusPreviousChild(QTableWidget* self);
    friend bool QTableWidget_QBaseFocusPreviousChild(QTableWidget* self);
    friend QObject* QTableWidget_Sender(const QTableWidget* self);
    friend QObject* QTableWidget_QBaseSender(const QTableWidget* self);
    friend int QTableWidget_SenderSignalIndex(const QTableWidget* self);
    friend int QTableWidget_QBaseSenderSignalIndex(const QTableWidget* self);
    friend int QTableWidget_Receivers(const QTableWidget* self, const char* signal);
    friend int QTableWidget_QBaseReceivers(const QTableWidget* self, const char* signal);
    friend bool QTableWidget_IsSignalConnected(const QTableWidget* self, const QMetaMethod* signal);
    friend bool QTableWidget_QBaseIsSignalConnected(const QTableWidget* self, const QMetaMethod* signal);
};

#endif
