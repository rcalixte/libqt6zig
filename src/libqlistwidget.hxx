#pragma once
#ifndef SRCC_LIBVIRTUALQLISTWIDGET_H
#define SRCC_LIBVIRTUALQLISTWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
    VirtualQListWidgetItem() : QListWidgetItem(){};
    VirtualQListWidgetItem(const QString& text) : QListWidgetItem(text){};
    VirtualQListWidgetItem(const QIcon& icon, const QString& text) : QListWidgetItem(icon, text){};
    VirtualQListWidgetItem(const QListWidgetItem& other) : QListWidgetItem(other){};
    VirtualQListWidgetItem(QListWidget* listview) : QListWidgetItem(listview){};
    VirtualQListWidgetItem(QListWidget* listview, int typeVal) : QListWidgetItem(listview, typeVal){};
    VirtualQListWidgetItem(const QString& text, QListWidget* listview) : QListWidgetItem(text, listview){};
    VirtualQListWidgetItem(const QString& text, QListWidget* listview, int typeVal) : QListWidgetItem(text, listview, typeVal){};
    VirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview) : QListWidgetItem(icon, text, listview){};
    VirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview, int typeVal) : QListWidgetItem(icon, text, listview, typeVal){};

    ~VirtualQListWidgetItem() {
        qlistwidgetitem_clone_callback = nullptr;
        qlistwidgetitem_data_callback = nullptr;
        qlistwidgetitem_setdata_callback = nullptr;
        qlistwidgetitem_operatorlesser_callback = nullptr;
        qlistwidgetitem_read_callback = nullptr;
        qlistwidgetitem_write_callback = nullptr;
    }

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
        } else if (qlistwidgetitem_clone_callback != nullptr) {
            QListWidgetItem* callback_ret = qlistwidgetitem_clone_callback();
            return callback_ret;
        } else {
            return QListWidgetItem::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int role) const override {
        if (qlistwidgetitem_data_isbase) {
            qlistwidgetitem_data_isbase = false;
            return QListWidgetItem::data(role);
        } else if (qlistwidgetitem_data_callback != nullptr) {
            int cbval1 = role;

            QVariant* callback_ret = qlistwidgetitem_data_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QListWidgetItem::data(role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(int role, const QVariant& value) override {
        if (qlistwidgetitem_setdata_isbase) {
            qlistwidgetitem_setdata_isbase = false;
            QListWidgetItem::setData(role, value);
        } else if (qlistwidgetitem_setdata_callback != nullptr) {
            int cbval1 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qlistwidgetitem_setdata_callback(this, cbval1, cbval2);
        } else {
            QListWidgetItem::setData(role, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QListWidgetItem& other) const override {
        if (qlistwidgetitem_operatorlesser_isbase) {
            qlistwidgetitem_operatorlesser_isbase = false;
            return QListWidgetItem::operator<(other);
        } else if (qlistwidgetitem_operatorlesser_callback != nullptr) {
            const QListWidgetItem& other_ret = other;
            // Cast returned reference into pointer
            QListWidgetItem* cbval1 = const_cast<QListWidgetItem*>(&other_ret);

            bool callback_ret = qlistwidgetitem_operatorlesser_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidgetItem::operator<(other);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qlistwidgetitem_read_isbase) {
            qlistwidgetitem_read_isbase = false;
            QListWidgetItem::read(in);
        } else if (qlistwidgetitem_read_callback != nullptr) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;

            qlistwidgetitem_read_callback(this, cbval1);
        } else {
            QListWidgetItem::read(in);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qlistwidgetitem_write_isbase) {
            qlistwidgetitem_write_isbase = false;
            QListWidgetItem::write(out);
        } else if (qlistwidgetitem_write_callback != nullptr) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;

            qlistwidgetitem_write_callback(this, cbval1);
        } else {
            QListWidgetItem::write(out);
        }
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
    using QListWidget_Metacall_Callback = int (*)(QListWidget*, int, int, void**);
    using QListWidget_SetSelectionModel_Callback = void (*)(QListWidget*, QItemSelectionModel*);
    using QListWidget_DropEvent_Callback = void (*)(QListWidget*, QDropEvent*);
    using QListWidget_Event_Callback = bool (*)(QListWidget*, QEvent*);
    using QListWidget_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
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
    using QListWidget_KeyboardSearch_Callback = void (*)(QListWidget*, libqt_string);
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

  protected:
    // Instance callback storage
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

    // Instance base flags
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

  public:
    VirtualQListWidget(QWidget* parent) : QListWidget(parent){};
    VirtualQListWidget() : QListWidget(){};

    ~VirtualQListWidget() {
        qlistwidget_metacall_callback = nullptr;
        qlistwidget_setselectionmodel_callback = nullptr;
        qlistwidget_dropevent_callback = nullptr;
        qlistwidget_event_callback = nullptr;
        qlistwidget_mimetypes_callback = nullptr;
        qlistwidget_mimedata_callback = nullptr;
        qlistwidget_dropmimedata_callback = nullptr;
        qlistwidget_supporteddropactions_callback = nullptr;
        qlistwidget_visualrect_callback = nullptr;
        qlistwidget_scrollto_callback = nullptr;
        qlistwidget_indexat_callback = nullptr;
        qlistwidget_doitemslayout_callback = nullptr;
        qlistwidget_reset_callback = nullptr;
        qlistwidget_setrootindex_callback = nullptr;
        qlistwidget_scrollcontentsby_callback = nullptr;
        qlistwidget_datachanged_callback = nullptr;
        qlistwidget_rowsinserted_callback = nullptr;
        qlistwidget_rowsabouttoberemoved_callback = nullptr;
        qlistwidget_mousemoveevent_callback = nullptr;
        qlistwidget_mousereleaseevent_callback = nullptr;
        qlistwidget_wheelevent_callback = nullptr;
        qlistwidget_timerevent_callback = nullptr;
        qlistwidget_resizeevent_callback = nullptr;
        qlistwidget_dragmoveevent_callback = nullptr;
        qlistwidget_dragleaveevent_callback = nullptr;
        qlistwidget_startdrag_callback = nullptr;
        qlistwidget_initviewitemoption_callback = nullptr;
        qlistwidget_paintevent_callback = nullptr;
        qlistwidget_horizontaloffset_callback = nullptr;
        qlistwidget_verticaloffset_callback = nullptr;
        qlistwidget_movecursor_callback = nullptr;
        qlistwidget_setselection_callback = nullptr;
        qlistwidget_visualregionforselection_callback = nullptr;
        qlistwidget_selectedindexes_callback = nullptr;
        qlistwidget_updategeometries_callback = nullptr;
        qlistwidget_isindexhidden_callback = nullptr;
        qlistwidget_selectionchanged_callback = nullptr;
        qlistwidget_currentchanged_callback = nullptr;
        qlistwidget_viewportsizehint_callback = nullptr;
        qlistwidget_keyboardsearch_callback = nullptr;
        qlistwidget_sizehintforrow_callback = nullptr;
        qlistwidget_sizehintforcolumn_callback = nullptr;
        qlistwidget_itemdelegateforindex_callback = nullptr;
        qlistwidget_inputmethodquery_callback = nullptr;
        qlistwidget_selectall_callback = nullptr;
        qlistwidget_updateeditordata_callback = nullptr;
        qlistwidget_updateeditorgeometries_callback = nullptr;
        qlistwidget_verticalscrollbaraction_callback = nullptr;
        qlistwidget_horizontalscrollbaraction_callback = nullptr;
        qlistwidget_verticalscrollbarvaluechanged_callback = nullptr;
        qlistwidget_horizontalscrollbarvaluechanged_callback = nullptr;
        qlistwidget_closeeditor_callback = nullptr;
        qlistwidget_commitdata_callback = nullptr;
        qlistwidget_editordestroyed_callback = nullptr;
        qlistwidget_edit2_callback = nullptr;
        qlistwidget_selectioncommand_callback = nullptr;
        qlistwidget_focusnextprevchild_callback = nullptr;
        qlistwidget_viewportevent_callback = nullptr;
        qlistwidget_mousepressevent_callback = nullptr;
        qlistwidget_mousedoubleclickevent_callback = nullptr;
        qlistwidget_dragenterevent_callback = nullptr;
        qlistwidget_focusinevent_callback = nullptr;
        qlistwidget_focusoutevent_callback = nullptr;
        qlistwidget_keypressevent_callback = nullptr;
        qlistwidget_inputmethodevent_callback = nullptr;
        qlistwidget_eventfilter_callback = nullptr;
        qlistwidget_minimumsizehint_callback = nullptr;
        qlistwidget_sizehint_callback = nullptr;
        qlistwidget_setupviewport_callback = nullptr;
        qlistwidget_contextmenuevent_callback = nullptr;
        qlistwidget_changeevent_callback = nullptr;
        qlistwidget_initstyleoption_callback = nullptr;
        qlistwidget_devtype_callback = nullptr;
        qlistwidget_setvisible_callback = nullptr;
        qlistwidget_heightforwidth_callback = nullptr;
        qlistwidget_hasheightforwidth_callback = nullptr;
        qlistwidget_paintengine_callback = nullptr;
        qlistwidget_keyreleaseevent_callback = nullptr;
        qlistwidget_enterevent_callback = nullptr;
        qlistwidget_leaveevent_callback = nullptr;
        qlistwidget_moveevent_callback = nullptr;
        qlistwidget_closeevent_callback = nullptr;
        qlistwidget_tabletevent_callback = nullptr;
        qlistwidget_actionevent_callback = nullptr;
        qlistwidget_showevent_callback = nullptr;
        qlistwidget_hideevent_callback = nullptr;
        qlistwidget_nativeevent_callback = nullptr;
        qlistwidget_metric_callback = nullptr;
        qlistwidget_initpainter_callback = nullptr;
        qlistwidget_redirected_callback = nullptr;
        qlistwidget_sharedpainter_callback = nullptr;
        qlistwidget_childevent_callback = nullptr;
        qlistwidget_customevent_callback = nullptr;
        qlistwidget_connectnotify_callback = nullptr;
        qlistwidget_disconnectnotify_callback = nullptr;
        qlistwidget_resizecontents_callback = nullptr;
        qlistwidget_contentssize_callback = nullptr;
        qlistwidget_rectforindex_callback = nullptr;
        qlistwidget_setpositionforindex_callback = nullptr;
        qlistwidget_state_callback = nullptr;
        qlistwidget_setstate_callback = nullptr;
        qlistwidget_scheduledelayeditemslayout_callback = nullptr;
        qlistwidget_executedelayeditemslayout_callback = nullptr;
        qlistwidget_setdirtyregion_callback = nullptr;
        qlistwidget_scrolldirtyregion_callback = nullptr;
        qlistwidget_dirtyregionoffset_callback = nullptr;
        qlistwidget_startautoscroll_callback = nullptr;
        qlistwidget_stopautoscroll_callback = nullptr;
        qlistwidget_doautoscroll_callback = nullptr;
        qlistwidget_dropindicatorposition_callback = nullptr;
        qlistwidget_setviewportmargins_callback = nullptr;
        qlistwidget_viewportmargins_callback = nullptr;
        qlistwidget_drawframe_callback = nullptr;
        qlistwidget_updatemicrofocus_callback = nullptr;
        qlistwidget_create_callback = nullptr;
        qlistwidget_destroy_callback = nullptr;
        qlistwidget_focusnextchild_callback = nullptr;
        qlistwidget_focuspreviouschild_callback = nullptr;
        qlistwidget_sender_callback = nullptr;
        qlistwidget_sendersignalindex_callback = nullptr;
        qlistwidget_receivers_callback = nullptr;
        qlistwidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
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

    // Base flag setters
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

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlistwidget_metacall_isbase) {
            qlistwidget_metacall_isbase = false;
            return QListWidget::qt_metacall(param1, param2, param3);
        } else if (qlistwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qlistwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qlistwidget_setselectionmodel_isbase) {
            qlistwidget_setselectionmodel_isbase = false;
            QListWidget::setSelectionModel(selectionModel);
        } else if (qlistwidget_setselectionmodel_callback != nullptr) {
            QItemSelectionModel* cbval1 = selectionModel;

            qlistwidget_setselectionmodel_callback(this, cbval1);
        } else {
            QListWidget::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlistwidget_dropevent_isbase) {
            qlistwidget_dropevent_isbase = false;
            QListWidget::dropEvent(event);
        } else if (qlistwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qlistwidget_dropevent_callback(this, cbval1);
        } else {
            QListWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlistwidget_event_isbase) {
            qlistwidget_event_isbase = false;
            return QListWidget::event(e);
        } else if (qlistwidget_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qlistwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidget::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qlistwidget_mimetypes_isbase) {
            qlistwidget_mimetypes_isbase = false;
            return QListWidget::mimeTypes();
        } else if (qlistwidget_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qlistwidget_mimetypes_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QListWidget::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QListWidgetItem*>& items) const override {
        if (qlistwidget_mimedata_isbase) {
            qlistwidget_mimedata_isbase = false;
            return QListWidget::mimeData(items);
        } else if (qlistwidget_mimedata_callback != nullptr) {
            const QList<QListWidgetItem*>& items_ret = items;
            // Convert QList<> from C++ memory to manually-managed C memory
            QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * items_ret.length()));
            for (size_t i = 0; i < items_ret.length(); ++i) {
                items_arr[i] = items_ret[i];
            }
            libqt_list items_out;
            items_out.len = items_ret.length();
            items_out.data = static_cast<void*>(items_arr);
            libqt_list /* of QListWidgetItem* */ cbval1 = items_out;

            QMimeData* callback_ret = qlistwidget_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidget::mimeData(items);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
        if (qlistwidget_dropmimedata_isbase) {
            qlistwidget_dropmimedata_isbase = false;
            return QListWidget::dropMimeData(index, data, action);
        } else if (qlistwidget_dropmimedata_callback != nullptr) {
            int cbval1 = index;
            QMimeData* cbval2 = (QMimeData*)data;
            int cbval3 = static_cast<int>(action);

            bool callback_ret = qlistwidget_dropmimedata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QListWidget::dropMimeData(index, data, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qlistwidget_supporteddropactions_isbase) {
            qlistwidget_supporteddropactions_isbase = false;
            return QListWidget::supportedDropActions();
        } else if (qlistwidget_supporteddropactions_callback != nullptr) {
            int callback_ret = qlistwidget_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QListWidget::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qlistwidget_visualrect_isbase) {
            qlistwidget_visualrect_isbase = false;
            return QListWidget::visualRect(index);
        } else if (qlistwidget_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qlistwidget_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QListWidget::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qlistwidget_scrollto_isbase) {
            qlistwidget_scrollto_isbase = false;
            QListWidget::scrollTo(index, hint);
        } else if (qlistwidget_scrollto_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(hint);

            qlistwidget_scrollto_callback(this, cbval1, cbval2);
        } else {
            QListWidget::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qlistwidget_indexat_isbase) {
            qlistwidget_indexat_isbase = false;
            return QListWidget::indexAt(p);
        } else if (qlistwidget_indexat_callback != nullptr) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            QModelIndex* callback_ret = qlistwidget_indexat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QListWidget::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qlistwidget_doitemslayout_isbase) {
            qlistwidget_doitemslayout_isbase = false;
            QListWidget::doItemsLayout();
        } else if (qlistwidget_doitemslayout_callback != nullptr) {
            qlistwidget_doitemslayout_callback();
        } else {
            QListWidget::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qlistwidget_reset_isbase) {
            qlistwidget_reset_isbase = false;
            QListWidget::reset();
        } else if (qlistwidget_reset_callback != nullptr) {
            qlistwidget_reset_callback();
        } else {
            QListWidget::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qlistwidget_setrootindex_isbase) {
            qlistwidget_setrootindex_isbase = false;
            QListWidget::setRootIndex(index);
        } else if (qlistwidget_setrootindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            qlistwidget_setrootindex_callback(this, cbval1);
        } else {
            QListWidget::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qlistwidget_scrollcontentsby_isbase) {
            qlistwidget_scrollcontentsby_isbase = false;
            QListWidget::scrollContentsBy(dx, dy);
        } else if (qlistwidget_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qlistwidget_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QListWidget::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qlistwidget_datachanged_isbase) {
            qlistwidget_datachanged_isbase = false;
            QListWidget::dataChanged(topLeft, bottomRight, roles);
        } else if (qlistwidget_datachanged_callback != nullptr) {
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

            qlistwidget_datachanged_callback(this, cbval1, cbval2, cbval3);
        } else {
            QListWidget::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qlistwidget_rowsinserted_isbase) {
            qlistwidget_rowsinserted_isbase = false;
            QListWidget::rowsInserted(parent, start, end);
        } else if (qlistwidget_rowsinserted_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qlistwidget_rowsinserted_callback(this, cbval1, cbval2, cbval3);
        } else {
            QListWidget::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qlistwidget_rowsabouttoberemoved_isbase) {
            qlistwidget_rowsabouttoberemoved_isbase = false;
            QListWidget::rowsAboutToBeRemoved(parent, start, end);
        } else if (qlistwidget_rowsabouttoberemoved_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = start;
            int cbval3 = end;

            qlistwidget_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            QListWidget::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qlistwidget_mousemoveevent_isbase) {
            qlistwidget_mousemoveevent_isbase = false;
            QListWidget::mouseMoveEvent(e);
        } else if (qlistwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qlistwidget_mousemoveevent_callback(this, cbval1);
        } else {
            QListWidget::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qlistwidget_mousereleaseevent_isbase) {
            qlistwidget_mousereleaseevent_isbase = false;
            QListWidget::mouseReleaseEvent(e);
        } else if (qlistwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qlistwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QListWidget::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qlistwidget_wheelevent_isbase) {
            qlistwidget_wheelevent_isbase = false;
            QListWidget::wheelEvent(e);
        } else if (qlistwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            qlistwidget_wheelevent_callback(this, cbval1);
        } else {
            QListWidget::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qlistwidget_timerevent_isbase) {
            qlistwidget_timerevent_isbase = false;
            QListWidget::timerEvent(e);
        } else if (qlistwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            qlistwidget_timerevent_callback(this, cbval1);
        } else {
            QListWidget::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qlistwidget_resizeevent_isbase) {
            qlistwidget_resizeevent_isbase = false;
            QListWidget::resizeEvent(e);
        } else if (qlistwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            qlistwidget_resizeevent_callback(this, cbval1);
        } else {
            QListWidget::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlistwidget_dragmoveevent_isbase) {
            qlistwidget_dragmoveevent_isbase = false;
            QListWidget::dragMoveEvent(e);
        } else if (qlistwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            qlistwidget_dragmoveevent_callback(this, cbval1);
        } else {
            QListWidget::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlistwidget_dragleaveevent_isbase) {
            qlistwidget_dragleaveevent_isbase = false;
            QListWidget::dragLeaveEvent(e);
        } else if (qlistwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            qlistwidget_dragleaveevent_callback(this, cbval1);
        } else {
            QListWidget::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qlistwidget_startdrag_isbase) {
            qlistwidget_startdrag_isbase = false;
            QListWidget::startDrag(supportedActions);
        } else if (qlistwidget_startdrag_callback != nullptr) {
            int cbval1 = static_cast<int>(supportedActions);

            qlistwidget_startdrag_callback(this, cbval1);
        } else {
            QListWidget::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qlistwidget_initviewitemoption_isbase) {
            qlistwidget_initviewitemoption_isbase = false;
            QListWidget::initViewItemOption(option);
        } else if (qlistwidget_initviewitemoption_callback != nullptr) {
            QStyleOptionViewItem* cbval1 = option;

            qlistwidget_initviewitemoption_callback(this, cbval1);
        } else {
            QListWidget::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qlistwidget_paintevent_isbase) {
            qlistwidget_paintevent_isbase = false;
            QListWidget::paintEvent(e);
        } else if (qlistwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            qlistwidget_paintevent_callback(this, cbval1);
        } else {
            QListWidget::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qlistwidget_horizontaloffset_isbase) {
            qlistwidget_horizontaloffset_isbase = false;
            return QListWidget::horizontalOffset();
        } else if (qlistwidget_horizontaloffset_callback != nullptr) {
            int callback_ret = qlistwidget_horizontaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qlistwidget_verticaloffset_isbase) {
            qlistwidget_verticaloffset_isbase = false;
            return QListWidget::verticalOffset();
        } else if (qlistwidget_verticaloffset_callback != nullptr) {
            int callback_ret = qlistwidget_verticaloffset_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qlistwidget_movecursor_isbase) {
            qlistwidget_movecursor_isbase = false;
            return QListWidget::moveCursor(cursorAction, modifiers);
        } else if (qlistwidget_movecursor_callback != nullptr) {
            int cbval1 = static_cast<int>(cursorAction);
            int cbval2 = static_cast<int>(modifiers);

            QModelIndex* callback_ret = qlistwidget_movecursor_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QListWidget::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qlistwidget_setselection_isbase) {
            qlistwidget_setselection_isbase = false;
            QListWidget::setSelection(rect, command);
        } else if (qlistwidget_setselection_callback != nullptr) {
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&rect_ret);
            int cbval2 = static_cast<int>(command);

            qlistwidget_setselection_callback(this, cbval1, cbval2);
        } else {
            QListWidget::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qlistwidget_visualregionforselection_isbase) {
            qlistwidget_visualregionforselection_isbase = false;
            return QListWidget::visualRegionForSelection(selection);
        } else if (qlistwidget_visualregionforselection_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QRegion* callback_ret = qlistwidget_visualregionforselection_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QListWidget::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qlistwidget_selectedindexes_isbase) {
            qlistwidget_selectedindexes_isbase = false;
            return QListWidget::selectedIndexes();
        } else if (qlistwidget_selectedindexes_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qlistwidget_selectedindexes_callback();
            QModelIndexList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QListWidget::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qlistwidget_updategeometries_isbase) {
            qlistwidget_updategeometries_isbase = false;
            QListWidget::updateGeometries();
        } else if (qlistwidget_updategeometries_callback != nullptr) {
            qlistwidget_updategeometries_callback();
        } else {
            QListWidget::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qlistwidget_isindexhidden_isbase) {
            qlistwidget_isindexhidden_isbase = false;
            return QListWidget::isIndexHidden(index);
        } else if (qlistwidget_isindexhidden_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qlistwidget_isindexhidden_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidget::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qlistwidget_selectionchanged_isbase) {
            qlistwidget_selectionchanged_isbase = false;
            QListWidget::selectionChanged(selected, deselected);
        } else if (qlistwidget_selectionchanged_callback != nullptr) {
            const QItemSelection& selected_ret = selected;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selected_ret);
            const QItemSelection& deselected_ret = deselected;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&deselected_ret);

            qlistwidget_selectionchanged_callback(this, cbval1, cbval2);
        } else {
            QListWidget::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qlistwidget_currentchanged_isbase) {
            qlistwidget_currentchanged_isbase = false;
            QListWidget::currentChanged(current, previous);
        } else if (qlistwidget_currentchanged_callback != nullptr) {
            const QModelIndex& current_ret = current;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&current_ret);
            const QModelIndex& previous_ret = previous;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&previous_ret);

            qlistwidget_currentchanged_callback(this, cbval1, cbval2);
        } else {
            QListWidget::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qlistwidget_viewportsizehint_isbase) {
            qlistwidget_viewportsizehint_isbase = false;
            return QListWidget::viewportSizeHint();
        } else if (qlistwidget_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qlistwidget_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QListWidget::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qlistwidget_keyboardsearch_isbase) {
            qlistwidget_keyboardsearch_isbase = false;
            QListWidget::keyboardSearch(search);
        } else if (qlistwidget_keyboardsearch_callback != nullptr) {
            const QString search_ret = search;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray search_b = search_ret.toUtf8();
            libqt_string search_str;
            search_str.len = search_b.length();
            search_str.data = static_cast<const char*>(malloc((search_str.len + 1) * sizeof(char)));
            memcpy((void*)search_str.data, search_b.data(), search_str.len);
            ((char*)search_str.data)[search_str.len] = '\0';
            libqt_string cbval1 = search_str;

            qlistwidget_keyboardsearch_callback(this, cbval1);
        } else {
            QListWidget::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qlistwidget_sizehintforrow_isbase) {
            qlistwidget_sizehintforrow_isbase = false;
            return QListWidget::sizeHintForRow(row);
        } else if (qlistwidget_sizehintforrow_callback != nullptr) {
            int cbval1 = row;

            int callback_ret = qlistwidget_sizehintforrow_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qlistwidget_sizehintforcolumn_isbase) {
            qlistwidget_sizehintforcolumn_isbase = false;
            return QListWidget::sizeHintForColumn(column);
        } else if (qlistwidget_sizehintforcolumn_callback != nullptr) {
            int cbval1 = column;

            int callback_ret = qlistwidget_sizehintforcolumn_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qlistwidget_itemdelegateforindex_isbase) {
            qlistwidget_itemdelegateforindex_isbase = false;
            return QListWidget::itemDelegateForIndex(index);
        } else if (qlistwidget_itemdelegateforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QAbstractItemDelegate* callback_ret = qlistwidget_itemdelegateforindex_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidget::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qlistwidget_inputmethodquery_isbase) {
            qlistwidget_inputmethodquery_isbase = false;
            return QListWidget::inputMethodQuery(query);
        } else if (qlistwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qlistwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QListWidget::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qlistwidget_selectall_isbase) {
            qlistwidget_selectall_isbase = false;
            QListWidget::selectAll();
        } else if (qlistwidget_selectall_callback != nullptr) {
            qlistwidget_selectall_callback();
        } else {
            QListWidget::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qlistwidget_updateeditordata_isbase) {
            qlistwidget_updateeditordata_isbase = false;
            QListWidget::updateEditorData();
        } else if (qlistwidget_updateeditordata_callback != nullptr) {
            qlistwidget_updateeditordata_callback();
        } else {
            QListWidget::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qlistwidget_updateeditorgeometries_isbase) {
            qlistwidget_updateeditorgeometries_isbase = false;
            QListWidget::updateEditorGeometries();
        } else if (qlistwidget_updateeditorgeometries_callback != nullptr) {
            qlistwidget_updateeditorgeometries_callback();
        } else {
            QListWidget::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qlistwidget_verticalscrollbaraction_isbase) {
            qlistwidget_verticalscrollbaraction_isbase = false;
            QListWidget::verticalScrollbarAction(action);
        } else if (qlistwidget_verticalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qlistwidget_verticalscrollbaraction_callback(this, cbval1);
        } else {
            QListWidget::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qlistwidget_horizontalscrollbaraction_isbase) {
            qlistwidget_horizontalscrollbaraction_isbase = false;
            QListWidget::horizontalScrollbarAction(action);
        } else if (qlistwidget_horizontalscrollbaraction_callback != nullptr) {
            int cbval1 = action;

            qlistwidget_horizontalscrollbaraction_callback(this, cbval1);
        } else {
            QListWidget::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qlistwidget_verticalscrollbarvaluechanged_isbase) {
            qlistwidget_verticalscrollbarvaluechanged_isbase = false;
            QListWidget::verticalScrollbarValueChanged(value);
        } else if (qlistwidget_verticalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qlistwidget_verticalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QListWidget::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qlistwidget_horizontalscrollbarvaluechanged_isbase) {
            qlistwidget_horizontalscrollbarvaluechanged_isbase = false;
            QListWidget::horizontalScrollbarValueChanged(value);
        } else if (qlistwidget_horizontalscrollbarvaluechanged_callback != nullptr) {
            int cbval1 = value;

            qlistwidget_horizontalscrollbarvaluechanged_callback(this, cbval1);
        } else {
            QListWidget::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qlistwidget_closeeditor_isbase) {
            qlistwidget_closeeditor_isbase = false;
            QListWidget::closeEditor(editor, hint);
        } else if (qlistwidget_closeeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            int cbval2 = static_cast<int>(hint);

            qlistwidget_closeeditor_callback(this, cbval1, cbval2);
        } else {
            QListWidget::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qlistwidget_commitdata_isbase) {
            qlistwidget_commitdata_isbase = false;
            QListWidget::commitData(editor);
        } else if (qlistwidget_commitdata_callback != nullptr) {
            QWidget* cbval1 = editor;

            qlistwidget_commitdata_callback(this, cbval1);
        } else {
            QListWidget::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qlistwidget_editordestroyed_isbase) {
            qlistwidget_editordestroyed_isbase = false;
            QListWidget::editorDestroyed(editor);
        } else if (qlistwidget_editordestroyed_callback != nullptr) {
            QObject* cbval1 = editor;

            qlistwidget_editordestroyed_callback(this, cbval1);
        } else {
            QListWidget::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qlistwidget_edit2_isbase) {
            qlistwidget_edit2_isbase = false;
            return QListWidget::edit(index, trigger, event);
        } else if (qlistwidget_edit2_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(trigger);
            QEvent* cbval3 = event;

            bool callback_ret = qlistwidget_edit2_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QListWidget::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qlistwidget_selectioncommand_isbase) {
            qlistwidget_selectioncommand_isbase = false;
            return QListWidget::selectionCommand(index, event);
        } else if (qlistwidget_selectioncommand_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QEvent* cbval2 = (QEvent*)event;

            int callback_ret = qlistwidget_selectioncommand_callback(this, cbval1, cbval2);
            return static_cast<QItemSelectionModel::SelectionFlags>(callback_ret);
        } else {
            return QListWidget::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlistwidget_focusnextprevchild_isbase) {
            qlistwidget_focusnextprevchild_isbase = false;
            return QListWidget::focusNextPrevChild(next);
        } else if (qlistwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qlistwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qlistwidget_viewportevent_isbase) {
            qlistwidget_viewportevent_isbase = false;
            return QListWidget::viewportEvent(event);
        } else if (qlistwidget_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qlistwidget_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidget::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlistwidget_mousepressevent_isbase) {
            qlistwidget_mousepressevent_isbase = false;
            QListWidget::mousePressEvent(event);
        } else if (qlistwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qlistwidget_mousepressevent_callback(this, cbval1);
        } else {
            QListWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlistwidget_mousedoubleclickevent_isbase) {
            qlistwidget_mousedoubleclickevent_isbase = false;
            QListWidget::mouseDoubleClickEvent(event);
        } else if (qlistwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qlistwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QListWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlistwidget_dragenterevent_isbase) {
            qlistwidget_dragenterevent_isbase = false;
            QListWidget::dragEnterEvent(event);
        } else if (qlistwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qlistwidget_dragenterevent_callback(this, cbval1);
        } else {
            QListWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlistwidget_focusinevent_isbase) {
            qlistwidget_focusinevent_isbase = false;
            QListWidget::focusInEvent(event);
        } else if (qlistwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qlistwidget_focusinevent_callback(this, cbval1);
        } else {
            QListWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlistwidget_focusoutevent_isbase) {
            qlistwidget_focusoutevent_isbase = false;
            QListWidget::focusOutEvent(event);
        } else if (qlistwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qlistwidget_focusoutevent_callback(this, cbval1);
        } else {
            QListWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlistwidget_keypressevent_isbase) {
            qlistwidget_keypressevent_isbase = false;
            QListWidget::keyPressEvent(event);
        } else if (qlistwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qlistwidget_keypressevent_callback(this, cbval1);
        } else {
            QListWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qlistwidget_inputmethodevent_isbase) {
            qlistwidget_inputmethodevent_isbase = false;
            QListWidget::inputMethodEvent(event);
        } else if (qlistwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qlistwidget_inputmethodevent_callback(this, cbval1);
        } else {
            QListWidget::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qlistwidget_eventfilter_isbase) {
            qlistwidget_eventfilter_isbase = false;
            return QListWidget::eventFilter(object, event);
        } else if (qlistwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qlistwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QListWidget::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlistwidget_minimumsizehint_isbase) {
            qlistwidget_minimumsizehint_isbase = false;
            return QListWidget::minimumSizeHint();
        } else if (qlistwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qlistwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QListWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlistwidget_sizehint_isbase) {
            qlistwidget_sizehint_isbase = false;
            return QListWidget::sizeHint();
        } else if (qlistwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = qlistwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return QListWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qlistwidget_setupviewport_isbase) {
            qlistwidget_setupviewport_isbase = false;
            QListWidget::setupViewport(viewport);
        } else if (qlistwidget_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qlistwidget_setupviewport_callback(this, cbval1);
        } else {
            QListWidget::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlistwidget_contextmenuevent_isbase) {
            qlistwidget_contextmenuevent_isbase = false;
            QListWidget::contextMenuEvent(param1);
        } else if (qlistwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qlistwidget_contextmenuevent_callback(this, cbval1);
        } else {
            QListWidget::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlistwidget_changeevent_isbase) {
            qlistwidget_changeevent_isbase = false;
            QListWidget::changeEvent(param1);
        } else if (qlistwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qlistwidget_changeevent_callback(this, cbval1);
        } else {
            QListWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlistwidget_initstyleoption_isbase) {
            qlistwidget_initstyleoption_isbase = false;
            QListWidget::initStyleOption(option);
        } else if (qlistwidget_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qlistwidget_initstyleoption_callback(this, cbval1);
        } else {
            QListWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlistwidget_devtype_isbase) {
            qlistwidget_devtype_isbase = false;
            return QListWidget::devType();
        } else if (qlistwidget_devtype_callback != nullptr) {
            int callback_ret = qlistwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlistwidget_setvisible_isbase) {
            qlistwidget_setvisible_isbase = false;
            QListWidget::setVisible(visible);
        } else if (qlistwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qlistwidget_setvisible_callback(this, cbval1);
        } else {
            QListWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlistwidget_heightforwidth_isbase) {
            qlistwidget_heightforwidth_isbase = false;
            return QListWidget::heightForWidth(param1);
        } else if (qlistwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qlistwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlistwidget_hasheightforwidth_isbase) {
            qlistwidget_hasheightforwidth_isbase = false;
            return QListWidget::hasHeightForWidth();
        } else if (qlistwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qlistwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QListWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlistwidget_paintengine_isbase) {
            qlistwidget_paintengine_isbase = false;
            return QListWidget::paintEngine();
        } else if (qlistwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qlistwidget_paintengine_callback();
            return callback_ret;
        } else {
            return QListWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlistwidget_keyreleaseevent_isbase) {
            qlistwidget_keyreleaseevent_isbase = false;
            QListWidget::keyReleaseEvent(event);
        } else if (qlistwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qlistwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QListWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlistwidget_enterevent_isbase) {
            qlistwidget_enterevent_isbase = false;
            QListWidget::enterEvent(event);
        } else if (qlistwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qlistwidget_enterevent_callback(this, cbval1);
        } else {
            QListWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlistwidget_leaveevent_isbase) {
            qlistwidget_leaveevent_isbase = false;
            QListWidget::leaveEvent(event);
        } else if (qlistwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlistwidget_leaveevent_callback(this, cbval1);
        } else {
            QListWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlistwidget_moveevent_isbase) {
            qlistwidget_moveevent_isbase = false;
            QListWidget::moveEvent(event);
        } else if (qlistwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qlistwidget_moveevent_callback(this, cbval1);
        } else {
            QListWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlistwidget_closeevent_isbase) {
            qlistwidget_closeevent_isbase = false;
            QListWidget::closeEvent(event);
        } else if (qlistwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qlistwidget_closeevent_callback(this, cbval1);
        } else {
            QListWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlistwidget_tabletevent_isbase) {
            qlistwidget_tabletevent_isbase = false;
            QListWidget::tabletEvent(event);
        } else if (qlistwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qlistwidget_tabletevent_callback(this, cbval1);
        } else {
            QListWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlistwidget_actionevent_isbase) {
            qlistwidget_actionevent_isbase = false;
            QListWidget::actionEvent(event);
        } else if (qlistwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qlistwidget_actionevent_callback(this, cbval1);
        } else {
            QListWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlistwidget_showevent_isbase) {
            qlistwidget_showevent_isbase = false;
            QListWidget::showEvent(event);
        } else if (qlistwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qlistwidget_showevent_callback(this, cbval1);
        } else {
            QListWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlistwidget_hideevent_isbase) {
            qlistwidget_hideevent_isbase = false;
            QListWidget::hideEvent(event);
        } else if (qlistwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qlistwidget_hideevent_callback(this, cbval1);
        } else {
            QListWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlistwidget_nativeevent_isbase) {
            qlistwidget_nativeevent_isbase = false;
            return QListWidget::nativeEvent(eventType, message, result);
        } else if (qlistwidget_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qlistwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QListWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlistwidget_metric_isbase) {
            qlistwidget_metric_isbase = false;
            return QListWidget::metric(param1);
        } else if (qlistwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qlistwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlistwidget_initpainter_isbase) {
            qlistwidget_initpainter_isbase = false;
            QListWidget::initPainter(painter);
        } else if (qlistwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qlistwidget_initpainter_callback(this, cbval1);
        } else {
            QListWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlistwidget_redirected_isbase) {
            qlistwidget_redirected_isbase = false;
            return QListWidget::redirected(offset);
        } else if (qlistwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qlistwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlistwidget_sharedpainter_isbase) {
            qlistwidget_sharedpainter_isbase = false;
            return QListWidget::sharedPainter();
        } else if (qlistwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qlistwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return QListWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlistwidget_childevent_isbase) {
            qlistwidget_childevent_isbase = false;
            QListWidget::childEvent(event);
        } else if (qlistwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qlistwidget_childevent_callback(this, cbval1);
        } else {
            QListWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlistwidget_customevent_isbase) {
            qlistwidget_customevent_isbase = false;
            QListWidget::customEvent(event);
        } else if (qlistwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlistwidget_customevent_callback(this, cbval1);
        } else {
            QListWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlistwidget_connectnotify_isbase) {
            qlistwidget_connectnotify_isbase = false;
            QListWidget::connectNotify(signal);
        } else if (qlistwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlistwidget_connectnotify_callback(this, cbval1);
        } else {
            QListWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlistwidget_disconnectnotify_isbase) {
            qlistwidget_disconnectnotify_isbase = false;
            QListWidget::disconnectNotify(signal);
        } else if (qlistwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlistwidget_disconnectnotify_callback(this, cbval1);
        } else {
            QListWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (qlistwidget_resizecontents_isbase) {
            qlistwidget_resizecontents_isbase = false;
            QListWidget::resizeContents(width, height);
        } else if (qlistwidget_resizecontents_callback != nullptr) {
            int cbval1 = width;
            int cbval2 = height;

            qlistwidget_resizecontents_callback(this, cbval1, cbval2);
        } else {
            QListWidget::resizeContents(width, height);
        }
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (qlistwidget_contentssize_isbase) {
            qlistwidget_contentssize_isbase = false;
            return QListWidget::contentsSize();
        } else if (qlistwidget_contentssize_callback != nullptr) {
            QSize* callback_ret = qlistwidget_contentssize_callback();
            return *callback_ret;
        } else {
            return QListWidget::contentsSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (qlistwidget_rectforindex_isbase) {
            qlistwidget_rectforindex_isbase = false;
            return QListWidget::rectForIndex(index);
        } else if (qlistwidget_rectforindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = qlistwidget_rectforindex_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QListWidget::rectForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (qlistwidget_setpositionforindex_isbase) {
            qlistwidget_setpositionforindex_isbase = false;
            QListWidget::setPositionForIndex(position, index);
        } else if (qlistwidget_setpositionforindex_callback != nullptr) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            qlistwidget_setpositionforindex_callback(this, cbval1, cbval2);
        } else {
            QListWidget::setPositionForIndex(position, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qlistwidget_state_isbase) {
            qlistwidget_state_isbase = false;
            return QListWidget::state();
        } else if (qlistwidget_state_callback != nullptr) {
            int callback_ret = qlistwidget_state_callback();
            return static_cast<VirtualQListWidget::State>(callback_ret);
        } else {
            return QListWidget::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qlistwidget_setstate_isbase) {
            qlistwidget_setstate_isbase = false;
            QListWidget::setState(state);
        } else if (qlistwidget_setstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qlistwidget_setstate_callback(this, cbval1);
        } else {
            QListWidget::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qlistwidget_scheduledelayeditemslayout_isbase) {
            qlistwidget_scheduledelayeditemslayout_isbase = false;
            QListWidget::scheduleDelayedItemsLayout();
        } else if (qlistwidget_scheduledelayeditemslayout_callback != nullptr) {
            qlistwidget_scheduledelayeditemslayout_callback();
        } else {
            QListWidget::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qlistwidget_executedelayeditemslayout_isbase) {
            qlistwidget_executedelayeditemslayout_isbase = false;
            QListWidget::executeDelayedItemsLayout();
        } else if (qlistwidget_executedelayeditemslayout_callback != nullptr) {
            qlistwidget_executedelayeditemslayout_callback();
        } else {
            QListWidget::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qlistwidget_setdirtyregion_isbase) {
            qlistwidget_setdirtyregion_isbase = false;
            QListWidget::setDirtyRegion(region);
        } else if (qlistwidget_setdirtyregion_callback != nullptr) {
            const QRegion& region_ret = region;
            // Cast returned reference into pointer
            QRegion* cbval1 = const_cast<QRegion*>(&region_ret);

            qlistwidget_setdirtyregion_callback(this, cbval1);
        } else {
            QListWidget::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qlistwidget_scrolldirtyregion_isbase) {
            qlistwidget_scrolldirtyregion_isbase = false;
            QListWidget::scrollDirtyRegion(dx, dy);
        } else if (qlistwidget_scrolldirtyregion_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qlistwidget_scrolldirtyregion_callback(this, cbval1, cbval2);
        } else {
            QListWidget::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qlistwidget_dirtyregionoffset_isbase) {
            qlistwidget_dirtyregionoffset_isbase = false;
            return QListWidget::dirtyRegionOffset();
        } else if (qlistwidget_dirtyregionoffset_callback != nullptr) {
            QPoint* callback_ret = qlistwidget_dirtyregionoffset_callback();
            return *callback_ret;
        } else {
            return QListWidget::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qlistwidget_startautoscroll_isbase) {
            qlistwidget_startautoscroll_isbase = false;
            QListWidget::startAutoScroll();
        } else if (qlistwidget_startautoscroll_callback != nullptr) {
            qlistwidget_startautoscroll_callback();
        } else {
            QListWidget::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qlistwidget_stopautoscroll_isbase) {
            qlistwidget_stopautoscroll_isbase = false;
            QListWidget::stopAutoScroll();
        } else if (qlistwidget_stopautoscroll_callback != nullptr) {
            qlistwidget_stopautoscroll_callback();
        } else {
            QListWidget::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qlistwidget_doautoscroll_isbase) {
            qlistwidget_doautoscroll_isbase = false;
            QListWidget::doAutoScroll();
        } else if (qlistwidget_doautoscroll_callback != nullptr) {
            qlistwidget_doautoscroll_callback();
        } else {
            QListWidget::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qlistwidget_dropindicatorposition_isbase) {
            qlistwidget_dropindicatorposition_isbase = false;
            return QListWidget::dropIndicatorPosition();
        } else if (qlistwidget_dropindicatorposition_callback != nullptr) {
            int callback_ret = qlistwidget_dropindicatorposition_callback();
            return static_cast<VirtualQListWidget::DropIndicatorPosition>(callback_ret);
        } else {
            return QListWidget::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qlistwidget_setviewportmargins_isbase) {
            qlistwidget_setviewportmargins_isbase = false;
            QListWidget::setViewportMargins(left, top, right, bottom);
        } else if (qlistwidget_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qlistwidget_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QListWidget::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qlistwidget_viewportmargins_isbase) {
            qlistwidget_viewportmargins_isbase = false;
            return QListWidget::viewportMargins();
        } else if (qlistwidget_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qlistwidget_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QListWidget::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qlistwidget_drawframe_isbase) {
            qlistwidget_drawframe_isbase = false;
            QListWidget::drawFrame(param1);
        } else if (qlistwidget_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qlistwidget_drawframe_callback(this, cbval1);
        } else {
            QListWidget::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlistwidget_updatemicrofocus_isbase) {
            qlistwidget_updatemicrofocus_isbase = false;
            QListWidget::updateMicroFocus();
        } else if (qlistwidget_updatemicrofocus_callback != nullptr) {
            qlistwidget_updatemicrofocus_callback();
        } else {
            QListWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlistwidget_create_isbase) {
            qlistwidget_create_isbase = false;
            QListWidget::create();
        } else if (qlistwidget_create_callback != nullptr) {
            qlistwidget_create_callback();
        } else {
            QListWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlistwidget_destroy_isbase) {
            qlistwidget_destroy_isbase = false;
            QListWidget::destroy();
        } else if (qlistwidget_destroy_callback != nullptr) {
            qlistwidget_destroy_callback();
        } else {
            QListWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlistwidget_focusnextchild_isbase) {
            qlistwidget_focusnextchild_isbase = false;
            return QListWidget::focusNextChild();
        } else if (qlistwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = qlistwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return QListWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlistwidget_focuspreviouschild_isbase) {
            qlistwidget_focuspreviouschild_isbase = false;
            return QListWidget::focusPreviousChild();
        } else if (qlistwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qlistwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QListWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlistwidget_sender_isbase) {
            qlistwidget_sender_isbase = false;
            return QListWidget::sender();
        } else if (qlistwidget_sender_callback != nullptr) {
            QObject* callback_ret = qlistwidget_sender_callback();
            return callback_ret;
        } else {
            return QListWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlistwidget_sendersignalindex_isbase) {
            qlistwidget_sendersignalindex_isbase = false;
            return QListWidget::senderSignalIndex();
        } else if (qlistwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qlistwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlistwidget_receivers_isbase) {
            qlistwidget_receivers_isbase = false;
            return QListWidget::receivers(signal);
        } else if (qlistwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qlistwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QListWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlistwidget_issignalconnected_isbase) {
            qlistwidget_issignalconnected_isbase = false;
            return QListWidget::isSignalConnected(signal);
        } else if (qlistwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qlistwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QListWidget::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QListWidget_DropEvent(QListWidget* self, QDropEvent* event);
    friend void QListWidget_QBaseDropEvent(QListWidget* self, QDropEvent* event);
    friend bool QListWidget_Event(QListWidget* self, QEvent* e);
    friend bool QListWidget_QBaseEvent(QListWidget* self, QEvent* e);
    friend libqt_list /* of libqt_string */ QListWidget_MimeTypes(const QListWidget* self);
    friend libqt_list /* of libqt_string */ QListWidget_QBaseMimeTypes(const QListWidget* self);
    friend QMimeData* QListWidget_MimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items);
    friend QMimeData* QListWidget_QBaseMimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items);
    friend bool QListWidget_DropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
    friend bool QListWidget_QBaseDropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
    friend int QListWidget_SupportedDropActions(const QListWidget* self);
    friend int QListWidget_QBaseSupportedDropActions(const QListWidget* self);
    friend void QListWidget_ScrollContentsBy(QListWidget* self, int dx, int dy);
    friend void QListWidget_QBaseScrollContentsBy(QListWidget* self, int dx, int dy);
    friend void QListWidget_DataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QListWidget_QBaseDataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
    friend void QListWidget_RowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_QBaseRowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_RowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_QBaseRowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end);
    friend void QListWidget_MouseMoveEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_QBaseMouseMoveEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_MouseReleaseEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_QBaseMouseReleaseEvent(QListWidget* self, QMouseEvent* e);
    friend void QListWidget_WheelEvent(QListWidget* self, QWheelEvent* e);
    friend void QListWidget_QBaseWheelEvent(QListWidget* self, QWheelEvent* e);
    friend void QListWidget_TimerEvent(QListWidget* self, QTimerEvent* e);
    friend void QListWidget_QBaseTimerEvent(QListWidget* self, QTimerEvent* e);
    friend void QListWidget_ResizeEvent(QListWidget* self, QResizeEvent* e);
    friend void QListWidget_QBaseResizeEvent(QListWidget* self, QResizeEvent* e);
    friend void QListWidget_DragMoveEvent(QListWidget* self, QDragMoveEvent* e);
    friend void QListWidget_QBaseDragMoveEvent(QListWidget* self, QDragMoveEvent* e);
    friend void QListWidget_DragLeaveEvent(QListWidget* self, QDragLeaveEvent* e);
    friend void QListWidget_QBaseDragLeaveEvent(QListWidget* self, QDragLeaveEvent* e);
    friend void QListWidget_StartDrag(QListWidget* self, int supportedActions);
    friend void QListWidget_QBaseStartDrag(QListWidget* self, int supportedActions);
    friend void QListWidget_InitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option);
    friend void QListWidget_QBaseInitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option);
    friend void QListWidget_PaintEvent(QListWidget* self, QPaintEvent* e);
    friend void QListWidget_QBasePaintEvent(QListWidget* self, QPaintEvent* e);
    friend int QListWidget_HorizontalOffset(const QListWidget* self);
    friend int QListWidget_QBaseHorizontalOffset(const QListWidget* self);
    friend int QListWidget_VerticalOffset(const QListWidget* self);
    friend int QListWidget_QBaseVerticalOffset(const QListWidget* self);
    friend QModelIndex* QListWidget_MoveCursor(QListWidget* self, int cursorAction, int modifiers);
    friend QModelIndex* QListWidget_QBaseMoveCursor(QListWidget* self, int cursorAction, int modifiers);
    friend void QListWidget_SetSelection(QListWidget* self, const QRect* rect, int command);
    friend void QListWidget_QBaseSetSelection(QListWidget* self, const QRect* rect, int command);
    friend QRegion* QListWidget_VisualRegionForSelection(const QListWidget* self, const QItemSelection* selection);
    friend QRegion* QListWidget_QBaseVisualRegionForSelection(const QListWidget* self, const QItemSelection* selection);
    friend libqt_list /* of QModelIndex* */ QListWidget_SelectedIndexes(const QListWidget* self);
    friend libqt_list /* of QModelIndex* */ QListWidget_QBaseSelectedIndexes(const QListWidget* self);
    friend void QListWidget_UpdateGeometries(QListWidget* self);
    friend void QListWidget_QBaseUpdateGeometries(QListWidget* self);
    friend bool QListWidget_IsIndexHidden(const QListWidget* self, const QModelIndex* index);
    friend bool QListWidget_QBaseIsIndexHidden(const QListWidget* self, const QModelIndex* index);
    friend void QListWidget_SelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QListWidget_QBaseSelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected);
    friend void QListWidget_CurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend void QListWidget_QBaseCurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous);
    friend QSize* QListWidget_ViewportSizeHint(const QListWidget* self);
    friend QSize* QListWidget_QBaseViewportSizeHint(const QListWidget* self);
    friend void QListWidget_UpdateEditorData(QListWidget* self);
    friend void QListWidget_QBaseUpdateEditorData(QListWidget* self);
    friend void QListWidget_UpdateEditorGeometries(QListWidget* self);
    friend void QListWidget_QBaseUpdateEditorGeometries(QListWidget* self);
    friend void QListWidget_VerticalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_QBaseVerticalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_HorizontalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_QBaseHorizontalScrollbarAction(QListWidget* self, int action);
    friend void QListWidget_VerticalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_QBaseVerticalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_HorizontalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_QBaseHorizontalScrollbarValueChanged(QListWidget* self, int value);
    friend void QListWidget_CloseEditor(QListWidget* self, QWidget* editor, int hint);
    friend void QListWidget_QBaseCloseEditor(QListWidget* self, QWidget* editor, int hint);
    friend void QListWidget_CommitData(QListWidget* self, QWidget* editor);
    friend void QListWidget_QBaseCommitData(QListWidget* self, QWidget* editor);
    friend void QListWidget_EditorDestroyed(QListWidget* self, QObject* editor);
    friend void QListWidget_QBaseEditorDestroyed(QListWidget* self, QObject* editor);
    friend bool QListWidget_Edit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend bool QListWidget_QBaseEdit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event);
    friend int QListWidget_SelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event);
    friend int QListWidget_QBaseSelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event);
    friend bool QListWidget_FocusNextPrevChild(QListWidget* self, bool next);
    friend bool QListWidget_QBaseFocusNextPrevChild(QListWidget* self, bool next);
    friend bool QListWidget_ViewportEvent(QListWidget* self, QEvent* event);
    friend bool QListWidget_QBaseViewportEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_MousePressEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_QBaseMousePressEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_MouseDoubleClickEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_QBaseMouseDoubleClickEvent(QListWidget* self, QMouseEvent* event);
    friend void QListWidget_DragEnterEvent(QListWidget* self, QDragEnterEvent* event);
    friend void QListWidget_QBaseDragEnterEvent(QListWidget* self, QDragEnterEvent* event);
    friend void QListWidget_FocusInEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_QBaseFocusInEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_FocusOutEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_QBaseFocusOutEvent(QListWidget* self, QFocusEvent* event);
    friend void QListWidget_KeyPressEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_QBaseKeyPressEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_InputMethodEvent(QListWidget* self, QInputMethodEvent* event);
    friend void QListWidget_QBaseInputMethodEvent(QListWidget* self, QInputMethodEvent* event);
    friend bool QListWidget_EventFilter(QListWidget* self, QObject* object, QEvent* event);
    friend bool QListWidget_QBaseEventFilter(QListWidget* self, QObject* object, QEvent* event);
    friend void QListWidget_ContextMenuEvent(QListWidget* self, QContextMenuEvent* param1);
    friend void QListWidget_QBaseContextMenuEvent(QListWidget* self, QContextMenuEvent* param1);
    friend void QListWidget_ChangeEvent(QListWidget* self, QEvent* param1);
    friend void QListWidget_QBaseChangeEvent(QListWidget* self, QEvent* param1);
    friend void QListWidget_InitStyleOption(const QListWidget* self, QStyleOptionFrame* option);
    friend void QListWidget_QBaseInitStyleOption(const QListWidget* self, QStyleOptionFrame* option);
    friend void QListWidget_KeyReleaseEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_QBaseKeyReleaseEvent(QListWidget* self, QKeyEvent* event);
    friend void QListWidget_EnterEvent(QListWidget* self, QEnterEvent* event);
    friend void QListWidget_QBaseEnterEvent(QListWidget* self, QEnterEvent* event);
    friend void QListWidget_LeaveEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_QBaseLeaveEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_MoveEvent(QListWidget* self, QMoveEvent* event);
    friend void QListWidget_QBaseMoveEvent(QListWidget* self, QMoveEvent* event);
    friend void QListWidget_CloseEvent(QListWidget* self, QCloseEvent* event);
    friend void QListWidget_QBaseCloseEvent(QListWidget* self, QCloseEvent* event);
    friend void QListWidget_TabletEvent(QListWidget* self, QTabletEvent* event);
    friend void QListWidget_QBaseTabletEvent(QListWidget* self, QTabletEvent* event);
    friend void QListWidget_ActionEvent(QListWidget* self, QActionEvent* event);
    friend void QListWidget_QBaseActionEvent(QListWidget* self, QActionEvent* event);
    friend void QListWidget_ShowEvent(QListWidget* self, QShowEvent* event);
    friend void QListWidget_QBaseShowEvent(QListWidget* self, QShowEvent* event);
    friend void QListWidget_HideEvent(QListWidget* self, QHideEvent* event);
    friend void QListWidget_QBaseHideEvent(QListWidget* self, QHideEvent* event);
    friend bool QListWidget_NativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QListWidget_QBaseNativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QListWidget_Metric(const QListWidget* self, int param1);
    friend int QListWidget_QBaseMetric(const QListWidget* self, int param1);
    friend void QListWidget_InitPainter(const QListWidget* self, QPainter* painter);
    friend void QListWidget_QBaseInitPainter(const QListWidget* self, QPainter* painter);
    friend QPaintDevice* QListWidget_Redirected(const QListWidget* self, QPoint* offset);
    friend QPaintDevice* QListWidget_QBaseRedirected(const QListWidget* self, QPoint* offset);
    friend QPainter* QListWidget_SharedPainter(const QListWidget* self);
    friend QPainter* QListWidget_QBaseSharedPainter(const QListWidget* self);
    friend void QListWidget_ChildEvent(QListWidget* self, QChildEvent* event);
    friend void QListWidget_QBaseChildEvent(QListWidget* self, QChildEvent* event);
    friend void QListWidget_CustomEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_QBaseCustomEvent(QListWidget* self, QEvent* event);
    friend void QListWidget_ConnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_QBaseConnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_DisconnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_QBaseDisconnectNotify(QListWidget* self, const QMetaMethod* signal);
    friend void QListWidget_ResizeContents(QListWidget* self, int width, int height);
    friend void QListWidget_QBaseResizeContents(QListWidget* self, int width, int height);
    friend QSize* QListWidget_ContentsSize(const QListWidget* self);
    friend QSize* QListWidget_QBaseContentsSize(const QListWidget* self);
    friend QRect* QListWidget_RectForIndex(const QListWidget* self, const QModelIndex* index);
    friend QRect* QListWidget_QBaseRectForIndex(const QListWidget* self, const QModelIndex* index);
    friend void QListWidget_SetPositionForIndex(QListWidget* self, const QPoint* position, const QModelIndex* index);
    friend void QListWidget_QBaseSetPositionForIndex(QListWidget* self, const QPoint* position, const QModelIndex* index);
    friend int QListWidget_State(const QListWidget* self);
    friend int QListWidget_QBaseState(const QListWidget* self);
    friend void QListWidget_SetState(QListWidget* self, int state);
    friend void QListWidget_QBaseSetState(QListWidget* self, int state);
    friend void QListWidget_ScheduleDelayedItemsLayout(QListWidget* self);
    friend void QListWidget_QBaseScheduleDelayedItemsLayout(QListWidget* self);
    friend void QListWidget_ExecuteDelayedItemsLayout(QListWidget* self);
    friend void QListWidget_QBaseExecuteDelayedItemsLayout(QListWidget* self);
    friend void QListWidget_SetDirtyRegion(QListWidget* self, const QRegion* region);
    friend void QListWidget_QBaseSetDirtyRegion(QListWidget* self, const QRegion* region);
    friend void QListWidget_ScrollDirtyRegion(QListWidget* self, int dx, int dy);
    friend void QListWidget_QBaseScrollDirtyRegion(QListWidget* self, int dx, int dy);
    friend QPoint* QListWidget_DirtyRegionOffset(const QListWidget* self);
    friend QPoint* QListWidget_QBaseDirtyRegionOffset(const QListWidget* self);
    friend void QListWidget_StartAutoScroll(QListWidget* self);
    friend void QListWidget_QBaseStartAutoScroll(QListWidget* self);
    friend void QListWidget_StopAutoScroll(QListWidget* self);
    friend void QListWidget_QBaseStopAutoScroll(QListWidget* self);
    friend void QListWidget_DoAutoScroll(QListWidget* self);
    friend void QListWidget_QBaseDoAutoScroll(QListWidget* self);
    friend int QListWidget_DropIndicatorPosition(const QListWidget* self);
    friend int QListWidget_QBaseDropIndicatorPosition(const QListWidget* self);
    friend void QListWidget_SetViewportMargins(QListWidget* self, int left, int top, int right, int bottom);
    friend void QListWidget_QBaseSetViewportMargins(QListWidget* self, int left, int top, int right, int bottom);
    friend QMargins* QListWidget_ViewportMargins(const QListWidget* self);
    friend QMargins* QListWidget_QBaseViewportMargins(const QListWidget* self);
    friend void QListWidget_DrawFrame(QListWidget* self, QPainter* param1);
    friend void QListWidget_QBaseDrawFrame(QListWidget* self, QPainter* param1);
    friend void QListWidget_UpdateMicroFocus(QListWidget* self);
    friend void QListWidget_QBaseUpdateMicroFocus(QListWidget* self);
    friend void QListWidget_Create(QListWidget* self);
    friend void QListWidget_QBaseCreate(QListWidget* self);
    friend void QListWidget_Destroy(QListWidget* self);
    friend void QListWidget_QBaseDestroy(QListWidget* self);
    friend bool QListWidget_FocusNextChild(QListWidget* self);
    friend bool QListWidget_QBaseFocusNextChild(QListWidget* self);
    friend bool QListWidget_FocusPreviousChild(QListWidget* self);
    friend bool QListWidget_QBaseFocusPreviousChild(QListWidget* self);
    friend QObject* QListWidget_Sender(const QListWidget* self);
    friend QObject* QListWidget_QBaseSender(const QListWidget* self);
    friend int QListWidget_SenderSignalIndex(const QListWidget* self);
    friend int QListWidget_QBaseSenderSignalIndex(const QListWidget* self);
    friend int QListWidget_Receivers(const QListWidget* self, const char* signal);
    friend int QListWidget_QBaseReceivers(const QListWidget* self, const char* signal);
    friend bool QListWidget_IsSignalConnected(const QListWidget* self, const QMetaMethod* signal);
    friend bool QListWidget_QBaseIsSignalConnected(const QListWidget* self, const QMetaMethod* signal);
};

#endif
