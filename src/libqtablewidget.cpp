#include <QAbstractItemDelegate>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDataStream>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTableView>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtablewidget.h>
#include "libqtablewidget.h"
#include "libqtablewidget.hxx"

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new() {
    return new QTableWidgetSelectionRange();
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(const QTableWidgetSelectionRange* other) {
    return new QTableWidgetSelectionRange(*other);
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3(QTableWidgetSelectionRange* other) {
    return new QTableWidgetSelectionRange(std::move(*other));
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new4(int top, int left, int bottom, int right) {
    return new QTableWidgetSelectionRange(static_cast<int>(top), static_cast<int>(left), static_cast<int>(bottom), static_cast<int>(right));
}

void QTableWidgetSelectionRange_CopyAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
    *self = *other;
}

void QTableWidgetSelectionRange_MoveAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
    *self = std::move(*other);
}

int QTableWidgetSelectionRange_TopRow(const QTableWidgetSelectionRange* self) {
    return self->topRow();
}

int QTableWidgetSelectionRange_BottomRow(const QTableWidgetSelectionRange* self) {
    return self->bottomRow();
}

int QTableWidgetSelectionRange_LeftColumn(const QTableWidgetSelectionRange* self) {
    return self->leftColumn();
}

int QTableWidgetSelectionRange_RightColumn(const QTableWidgetSelectionRange* self) {
    return self->rightColumn();
}

int QTableWidgetSelectionRange_RowCount(const QTableWidgetSelectionRange* self) {
    return self->rowCount();
}

int QTableWidgetSelectionRange_ColumnCount(const QTableWidgetSelectionRange* self) {
    return self->columnCount();
}

void QTableWidgetSelectionRange_Delete(QTableWidgetSelectionRange* self) {
    delete self;
}

QTableWidgetItem* QTableWidgetItem_new() {
    return new VirtualQTableWidgetItem();
}

QTableWidgetItem* QTableWidgetItem_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTableWidgetItem(text_QString);
}

QTableWidgetItem* QTableWidgetItem_new3(const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTableWidgetItem(*icon, text_QString);
}

QTableWidgetItem* QTableWidgetItem_new4(const QTableWidgetItem* other) {
    return new VirtualQTableWidgetItem(*other);
}

QTableWidgetItem* QTableWidgetItem_new5(int typeVal) {
    return new VirtualQTableWidgetItem(static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new6(const libqt_string text, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTableWidgetItem(text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new7(const QIcon* icon, const libqt_string text, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTableWidgetItem(*icon, text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_Clone(const QTableWidgetItem* self) {
    return self->clone();
}

QTableWidget* QTableWidgetItem_TableWidget(const QTableWidgetItem* self) {
    return self->tableWidget();
}

int QTableWidgetItem_Row(const QTableWidgetItem* self) {
    return self->row();
}

int QTableWidgetItem_Column(const QTableWidgetItem* self) {
    return self->column();
}

void QTableWidgetItem_SetSelected(QTableWidgetItem* self, bool select) {
    self->setSelected(select);
}

bool QTableWidgetItem_IsSelected(const QTableWidgetItem* self) {
    return self->isSelected();
}

int QTableWidgetItem_Flags(const QTableWidgetItem* self) {
    return static_cast<int>(self->flags());
}

void QTableWidgetItem_SetFlags(QTableWidgetItem* self, int flags) {
    self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

libqt_string QTableWidgetItem_Text(const QTableWidgetItem* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTableWidgetItem_SetText(QTableWidgetItem* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

QIcon* QTableWidgetItem_Icon(const QTableWidgetItem* self) {
    return new QIcon(self->icon());
}

void QTableWidgetItem_SetIcon(QTableWidgetItem* self, const QIcon* icon) {
    self->setIcon(*icon);
}

libqt_string QTableWidgetItem_StatusTip(const QTableWidgetItem* self) {
    auto _ret = self->statusTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, const libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QTableWidgetItem_ToolTip(const QTableWidgetItem* self) {
    auto _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QTableWidgetItem_WhatsThis(const QTableWidgetItem* self) {
    auto _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, const libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(whatsThis_QString);
}

QFont* QTableWidgetItem_Font(const QTableWidgetItem* self) {
    return new QFont(self->font());
}

void QTableWidgetItem_SetFont(QTableWidgetItem* self, const QFont* font) {
    self->setFont(*font);
}

int QTableWidgetItem_TextAlignment(const QTableWidgetItem* self) {
    return self->textAlignment();
}

void QTableWidgetItem_SetTextAlignment(QTableWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<int>(alignment));
}

void QTableWidgetItem_SetTextAlignment2(QTableWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QTableWidgetItem_SetTextAlignment3(QTableWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::Alignment>(alignment));
}

QBrush* QTableWidgetItem_Background(const QTableWidgetItem* self) {
    return new QBrush(self->background());
}

void QTableWidgetItem_SetBackground(QTableWidgetItem* self, const QBrush* brush) {
    self->setBackground(*brush);
}

QBrush* QTableWidgetItem_Foreground(const QTableWidgetItem* self) {
    return new QBrush(self->foreground());
}

void QTableWidgetItem_SetForeground(QTableWidgetItem* self, const QBrush* brush) {
    self->setForeground(*brush);
}

int QTableWidgetItem_CheckState(const QTableWidgetItem* self) {
    return static_cast<int>(self->checkState());
}

void QTableWidgetItem_SetCheckState(QTableWidgetItem* self, int state) {
    self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QTableWidgetItem_SizeHint(const QTableWidgetItem* self) {
    return new QSize(self->sizeHint());
}

void QTableWidgetItem_SetSizeHint(QTableWidgetItem* self, const QSize* size) {
    self->setSizeHint(*size);
}

QVariant* QTableWidgetItem_Data(const QTableWidgetItem* self, int role) {
    return new QVariant(self->data(static_cast<int>(role)));
}

void QTableWidgetItem_SetData(QTableWidgetItem* self, int role, const QVariant* value) {
    self->setData(static_cast<int>(role), *value);
}

bool QTableWidgetItem_OperatorLesser(const QTableWidgetItem* self, const QTableWidgetItem* other) {
    return self->operator<(*other);
}

void QTableWidgetItem_Read(QTableWidgetItem* self, QDataStream* in) {
    self->read(*in);
}

void QTableWidgetItem_Write(const QTableWidgetItem* self, QDataStream* out) {
    self->write(*out);
}

int QTableWidgetItem_Type(const QTableWidgetItem* self) {
    return self->type();
}

// Base class handler implementation
QTableWidgetItem* QTableWidgetItem_SuperClone(const QTableWidgetItem* self) {
    return self->QTableWidgetItem::clone();
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnClone(QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self)))
        vqtablewidgetitem->qtablewidgetitem_clone_callback = reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Clone_Callback>(slot);
}

// Base class handler implementation
QVariant* QTableWidgetItem_SuperData(const QTableWidgetItem* self, int role) {
    return new QVariant(self->QTableWidgetItem::data(static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnData(QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self)))
        vqtablewidgetitem->qtablewidgetitem_data_callback = reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Data_Callback>(slot);
}

// Base class handler implementation
void QTableWidgetItem_SuperSetData(QTableWidgetItem* self, int role, const QVariant* value) {
    self->QTableWidgetItem::setData(static_cast<int>(role), *value);
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnSetData(QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self))
        vqtablewidgetitem->qtablewidgetitem_setdata_callback = reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_SetData_Callback>(slot);
}

// Base class handler implementation
bool QTableWidgetItem_SuperOperatorLesser(const QTableWidgetItem* self, const QTableWidgetItem* other) {
    return self->QTableWidgetItem::operator<(*other);
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnOperatorLesser(QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self)))
        vqtablewidgetitem->qtablewidgetitem_operatorlesser_callback = reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_OperatorLesser_Callback>(slot);
}

// Base class handler implementation
void QTableWidgetItem_SuperRead(QTableWidgetItem* self, QDataStream* in) {
    self->QTableWidgetItem::read(*in);
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnRead(QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self))
        vqtablewidgetitem->qtablewidgetitem_read_callback = reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Read_Callback>(slot);
}

// Base class handler implementation
void QTableWidgetItem_SuperWrite(const QTableWidgetItem* self, QDataStream* out) {
    self->QTableWidgetItem::write(*out);
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnWrite(QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self)))
        vqtablewidgetitem->qtablewidgetitem_write_callback = reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Write_Callback>(slot);
}

void QTableWidgetItem_Delete(QTableWidgetItem* self) {
    delete self;
}

QTableWidget* QTableWidget_new(QWidget* parent) {
    return new VirtualQTableWidget(parent);
}

QTableWidget* QTableWidget_new2() {
    return new VirtualQTableWidget();
}

QTableWidget* QTableWidget_new3(int rows, int columns) {
    return new VirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns));
}

QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent) {
    return new VirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns), parent);
}

QMetaObject* QTableWidget_MetaObject(const QTableWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTableWidget_Metacast(QTableWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTableWidget_Metacall(QTableWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTableWidget_Tr(const char* s) {
    auto _ret = QTableWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTableWidget_SetRowCount(QTableWidget* self, int rows) {
    self->setRowCount(static_cast<int>(rows));
}

int QTableWidget_RowCount(const QTableWidget* self) {
    return self->rowCount();
}

void QTableWidget_SetColumnCount(QTableWidget* self, int columns) {
    self->setColumnCount(static_cast<int>(columns));
}

int QTableWidget_ColumnCount(const QTableWidget* self) {
    return self->columnCount();
}

int QTableWidget_Row(const QTableWidget* self, const QTableWidgetItem* item) {
    return self->row(item);
}

int QTableWidget_Column(const QTableWidget* self, const QTableWidgetItem* item) {
    return self->column(item);
}

QTableWidgetItem* QTableWidget_Item(const QTableWidget* self, int row, int column) {
    return self->item(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetItem(QTableWidget* self, int row, int column, QTableWidgetItem* item) {
    self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeItem(QTableWidget* self, int row, int column) {
    return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

libqt_list /* of QTableWidgetItem* */ QTableWidget_Items(const QTableWidget* self, const QMimeData* data) {
    QList<QTableWidgetItem*> _ret = self->items(data);
    // Convert QList<> from C++ memory to manually-managed C memory
    QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QModelIndex* QTableWidget_IndexFromItem(const QTableWidget* self, const QTableWidgetItem* item) {
    return new QModelIndex(self->indexFromItem(item));
}

QTableWidgetItem* QTableWidget_ItemFromIndex(const QTableWidget* self, const QModelIndex* index) {
    return self->itemFromIndex(*index);
}

QTableWidgetItem* QTableWidget_VerticalHeaderItem(const QTableWidget* self, int row) {
    return self->verticalHeaderItem(static_cast<int>(row));
}

void QTableWidget_SetVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item) {
    self->setVerticalHeaderItem(static_cast<int>(row), item);
}

QTableWidgetItem* QTableWidget_TakeVerticalHeaderItem(QTableWidget* self, int row) {
    return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QTableWidgetItem* QTableWidget_HorizontalHeaderItem(const QTableWidget* self, int column) {
    return self->horizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item) {
    self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeHorizontalHeaderItem(QTableWidget* self, int column) {
    return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setVerticalHeaderLabels(labels_QList);
}

void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setHorizontalHeaderLabels(labels_QList);
}

int QTableWidget_CurrentRow(const QTableWidget* self) {
    return self->currentRow();
}

int QTableWidget_CurrentColumn(const QTableWidget* self) {
    return self->currentColumn();
}

QTableWidgetItem* QTableWidget_CurrentItem(const QTableWidget* self) {
    return self->currentItem();
}

void QTableWidget_SetCurrentItem(QTableWidget* self, QTableWidgetItem* item) {
    self->setCurrentItem(item);
}

void QTableWidget_SetCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command) {
    self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_SetCurrentCell(QTableWidget* self, int row, int column) {
    self->setCurrentCell(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCurrentCell2(QTableWidget* self, int row, int column, int command) {
    self->setCurrentCell(static_cast<int>(row), static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_SortItems(QTableWidget* self, int column) {
    self->sortItems(static_cast<int>(column));
}

void QTableWidget_SetSortingEnabled(QTableWidget* self, bool enable) {
    self->setSortingEnabled(enable);
}

bool QTableWidget_IsSortingEnabled(const QTableWidget* self) {
    return self->isSortingEnabled();
}

void QTableWidget_EditItem(QTableWidget* self, QTableWidgetItem* item) {
    self->editItem(item);
}

void QTableWidget_OpenPersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
    self->openPersistentEditor(item);
}

void QTableWidget_ClosePersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
    self->closePersistentEditor(item);
}

bool QTableWidget_IsPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item) {
    return self->isPersistentEditorOpen(item);
}

QWidget* QTableWidget_CellWidget(const QTableWidget* self, int row, int column) {
    return self->cellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCellWidget(QTableWidget* self, int row, int column, QWidget* widget) {
    self->setCellWidget(static_cast<int>(row), static_cast<int>(column), widget);
}

void QTableWidget_RemoveCellWidget(QTableWidget* self, int row, int column) {
    self->removeCellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetRangeSelected(QTableWidget* self, const QTableWidgetSelectionRange* range, bool select) {
    self->setRangeSelected(*range, select);
}

libqt_list /* of QTableWidgetSelectionRange* */ QTableWidget_SelectedRanges(const QTableWidget* self) {
    QList<QTableWidgetSelectionRange> _ret = self->selectedRanges();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTableWidgetSelectionRange** _arr = static_cast<QTableWidgetSelectionRange**>(malloc(sizeof(QTableWidgetSelectionRange*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QTableWidgetSelectionRange(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QTableWidgetItem* */ QTableWidget_SelectedItems(const QTableWidget* self) {
    QList<QTableWidgetItem*> _ret = self->selectedItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QTableWidgetItem* */ QTableWidget_FindItems(const QTableWidget* self, const libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QTableWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QTableWidget_VisualRow(const QTableWidget* self, int logicalRow) {
    return self->visualRow(static_cast<int>(logicalRow));
}

int QTableWidget_VisualColumn(const QTableWidget* self, int logicalColumn) {
    return self->visualColumn(static_cast<int>(logicalColumn));
}

QTableWidgetItem* QTableWidget_ItemAt(const QTableWidget* self, const QPoint* p) {
    return self->itemAt(*p);
}

QTableWidgetItem* QTableWidget_ItemAt2(const QTableWidget* self, int x, int y) {
    return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTableWidget_VisualItemRect(const QTableWidget* self, const QTableWidgetItem* item) {
    return new QRect(self->visualItemRect(item));
}

QTableWidgetItem* QTableWidget_ItemPrototype(const QTableWidget* self) {
    return (QTableWidgetItem*)self->itemPrototype();
}

void QTableWidget_SetItemPrototype(QTableWidget* self, const QTableWidgetItem* item) {
    self->setItemPrototype(item);
}

void QTableWidget_ScrollToItem(QTableWidget* self, const QTableWidgetItem* item) {
    self->scrollToItem(item);
}

void QTableWidget_InsertRow(QTableWidget* self, int row) {
    self->insertRow(static_cast<int>(row));
}

void QTableWidget_InsertColumn(QTableWidget* self, int column) {
    self->insertColumn(static_cast<int>(column));
}

void QTableWidget_RemoveRow(QTableWidget* self, int row) {
    self->removeRow(static_cast<int>(row));
}

void QTableWidget_RemoveColumn(QTableWidget* self, int column) {
    self->removeColumn(static_cast<int>(column));
}

void QTableWidget_Clear(QTableWidget* self) {
    self->clear();
}

void QTableWidget_ClearContents(QTableWidget* self) {
    self->clearContents();
}

void QTableWidget_ItemPressed(QTableWidget* self, QTableWidgetItem* item) {
    self->itemPressed(item);
}

void QTableWidget_Connect_ItemPressed(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemPressed),
                          [self, slotFunc](QTableWidgetItem* item) {
                              QTableWidgetItem* sigval1 = item;
                              slotFunc(self, sigval1);
                          });
}

void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item) {
    self->itemClicked(item);
}

void QTableWidget_Connect_ItemClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemClicked),
                          [self, slotFunc](QTableWidgetItem* item) {
                              QTableWidgetItem* sigval1 = item;
                              slotFunc(self, sigval1);
                          });
}

void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
    self->itemDoubleClicked(item);
}

void QTableWidget_Connect_ItemDoubleClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemDoubleClicked),
                          [self, slotFunc](QTableWidgetItem* item) {
                              QTableWidgetItem* sigval1 = item;
                              slotFunc(self, sigval1);
                          });
}

void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item) {
    self->itemActivated(item);
}

void QTableWidget_Connect_ItemActivated(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemActivated),
                          [self, slotFunc](QTableWidgetItem* item) {
                              QTableWidgetItem* sigval1 = item;
                              slotFunc(self, sigval1);
                          });
}

void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item) {
    self->itemEntered(item);
}

void QTableWidget_Connect_ItemEntered(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemEntered),
                          [self, slotFunc](QTableWidgetItem* item) {
                              QTableWidgetItem* sigval1 = item;
                              slotFunc(self, sigval1);
                          });
}

void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item) {
    self->itemChanged(item);
}

void QTableWidget_Connect_ItemChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemChanged),
                          [self, slotFunc](QTableWidgetItem* item) {
                              QTableWidgetItem* sigval1 = item;
                              slotFunc(self, sigval1);
                          });
}

void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
    self->currentItemChanged(current, previous);
}

void QTableWidget_Connect_CurrentItemChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(QTableWidgetItem*, QTableWidgetItem*)>(&QTableWidget::currentItemChanged),
                          [self, slotFunc](QTableWidgetItem* current, QTableWidgetItem* previous) {
                              QTableWidgetItem* sigval1 = current;
                              QTableWidgetItem* sigval2 = previous;
                              slotFunc(self, sigval1, sigval2);
                          });
}

void QTableWidget_ItemSelectionChanged(QTableWidget* self) {
    self->itemSelectionChanged();
}

void QTableWidget_Connect_ItemSelectionChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*) = reinterpret_cast<void (*)(QTableWidget*)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)()>(&QTableWidget::itemSelectionChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QTableWidget_CellPressed(QTableWidget* self, int row, int column) {
    self->cellPressed(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellPressed(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellPressed),
                          [self, slotFunc](int row, int column) {
                              int sigval1 = row;
                              int sigval2 = column;
                              slotFunc(self, sigval1, sigval2);
                          });
}

void QTableWidget_CellClicked(QTableWidget* self, int row, int column) {
    self->cellClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellClicked),
                          [self, slotFunc](int row, int column) {
                              int sigval1 = row;
                              int sigval2 = column;
                              slotFunc(self, sigval1, sigval2);
                          });
}

void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column) {
    self->cellDoubleClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellDoubleClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellDoubleClicked),
                          [self, slotFunc](int row, int column) {
                              int sigval1 = row;
                              int sigval2 = column;
                              slotFunc(self, sigval1, sigval2);
                          });
}

void QTableWidget_CellActivated(QTableWidget* self, int row, int column) {
    self->cellActivated(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellActivated(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellActivated),
                          [self, slotFunc](int row, int column) {
                              int sigval1 = row;
                              int sigval2 = column;
                              slotFunc(self, sigval1, sigval2);
                          });
}

void QTableWidget_CellEntered(QTableWidget* self, int row, int column) {
    self->cellEntered(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellEntered(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellEntered),
                          [self, slotFunc](int row, int column) {
                              int sigval1 = row;
                              int sigval2 = column;
                              slotFunc(self, sigval1, sigval2);
                          });
}

void QTableWidget_CellChanged(QTableWidget* self, int row, int column) {
    self->cellChanged(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellChanged),
                          [self, slotFunc](int row, int column) {
                              int sigval1 = row;
                              int sigval2 = column;
                              slotFunc(self, sigval1, sigval2);
                          });
}

void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
    self->currentCellChanged(static_cast<int>(currentRow), static_cast<int>(currentColumn), static_cast<int>(previousRow), static_cast<int>(previousColumn));
}

void QTableWidget_Connect_CurrentCellChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int, int, int)>(slot);
    QTableWidget::connect(self,
                          static_cast<void (QTableWidget::*)(int, int, int, int)>(&QTableWidget::currentCellChanged),
                          [self, slotFunc](int currentRow, int currentColumn, int previousRow, int previousColumn) {
                              int sigval1 = currentRow;
                              int sigval2 = currentColumn;
                              int sigval3 = previousRow;
                              int sigval4 = previousColumn;
                              slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                          });
}

bool QTableWidget_Event(QTableWidget* self, QEvent* e) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return vqtablewidget->event(e);
    }
    qFatal("Error: Protected method QTableWidget::event called without a directly constructed type");
}

libqt_list /* of libqt_string */ QTableWidget_MimeTypes(const QTableWidget* self) {
    auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        QList<QString> _ret = vqtablewidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            auto _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
    qFatal("Error: Protected method QTableWidget::mimeTypes called without a directly constructed type");
}

QMimeData* QTableWidget_MimeData(const QTableWidget* self, const libqt_list /* of QTableWidgetItem* */ items) {
    QList<QTableWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return vqtablewidget->mimeData(items_QList);
    }
    qFatal("Error: Protected method QTableWidget::mimeData called without a directly constructed type");
}

bool QTableWidget_DropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return vqtablewidget->dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));
    }
    qFatal("Error: Protected method QTableWidget::dropMimeData called without a directly constructed type");
}

int QTableWidget_SupportedDropActions(const QTableWidget* self) {
    auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return static_cast<int>(vqtablewidget->supportedDropActions());
    }
    qFatal("Error: Protected method QTableWidget::supportedDropActions called without a directly constructed type");
}

void QTableWidget_DropEvent(QTableWidget* self, QDropEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->dropEvent(event);
    }
}

libqt_string QTableWidget_Tr2(const char* s, const char* c) {
    auto _ret = QTableWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTableWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTableWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTableWidget_SortItems2(QTableWidget* self, int column, int order) {
    self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableWidget_ScrollToItem2(QTableWidget* self, const QTableWidgetItem* item, int hint) {
    self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
QMetaObject* QTableWidget_SuperMetaObject(const QTableWidget* self) {
    return (QMetaObject*)self->QTableWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMetaObject(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_metaobject_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTableWidget_SuperMetacast(QTableWidget* self, const char* param1) {
    return self->QTableWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMetacast(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_metacast_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTableWidget_SuperMetacall(QTableWidget* self, int param1, int param2, void** param3) {
    return self->QTableWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMetacall(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_metacall_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QTableWidget_SuperEvent(QTableWidget* self, QEvent* e) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->QTableWidget::event(e);
    } else
        qFatal("Error: Protected virtual method QTableWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_event_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_Event_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QTableWidget_SuperMimeTypes(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        QList<QString> _ret = vqtablewidget->QTableWidget::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            auto _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected virtual method QTableWidget::mimeTypes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMimeTypes(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_mimetypes_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QMimeData* QTableWidget_SuperMimeData(const QTableWidget* self, const libqt_list /* of QTableWidgetItem* */ items) {
    QList<QTableWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::mimeData(items_QList);
    } else
        qFatal("Error: Protected virtual method QTableWidget::mimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMimeData(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_mimedata_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QTableWidget_SuperDropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->QTableWidget::dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));
    } else
        qFatal("Error: Protected virtual method QTableWidget::dropMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDropMimeData(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_dropmimedata_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DropMimeData_Callback>(slot);
}

// Base class handler implementation
int QTableWidget_SuperSupportedDropActions(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return static_cast<int>(vqtablewidget->QTableWidget::supportedDropActions());
    } else
        qFatal("Error: Protected virtual method QTableWidget::supportedDropActions called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSupportedDropActions(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_supporteddropactions_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
void QTableWidget_SuperDropEvent(QTableWidget* self, QDropEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDropEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_dropevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_SetRootIndex(QTableWidget* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

// Base class handler implementation
void QTableWidget_SuperSetRootIndex(QTableWidget* self, const QModelIndex* index) {
    self->QTableWidget::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetRootIndex(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_setrootindex_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SetRootIndex_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_SetSelectionModel(QTableWidget* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

// Base class handler implementation
void QTableWidget_SuperSetSelectionModel(QTableWidget* self, QItemSelectionModel* selectionModel) {
    self->QTableWidget::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetSelectionModel(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_setselectionmodel_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SetSelectionModel_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_DoItemsLayout(QTableWidget* self) {
    self->doItemsLayout();
}

// Base class handler implementation
void QTableWidget_SuperDoItemsLayout(QTableWidget* self) {
    self->QTableWidget::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDoItemsLayout(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_doitemslayout_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DoItemsLayout_Callback>(slot);
}

// Derived class handler implementation
QRect* QTableWidget_VisualRect(const QTableWidget* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

// Base class handler implementation
QRect* QTableWidget_SuperVisualRect(const QTableWidget* self, const QModelIndex* index) {
    return new QRect(self->QTableWidget::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVisualRect(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_visualrect_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_VisualRect_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ScrollTo(QTableWidget* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void QTableWidget_SuperScrollTo(QTableWidget* self, const QModelIndex* index, int hint) {
    self->QTableWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnScrollTo(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_scrollto_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ScrollTo_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QTableWidget_IndexAt(const QTableWidget* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

// Base class handler implementation
QModelIndex* QTableWidget_SuperIndexAt(const QTableWidget* self, const QPoint* p) {
    return new QModelIndex(self->QTableWidget::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnIndexAt(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_indexat_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_IndexAt_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ScrollContentsBy(QTableWidget* self, int dx, int dy) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperScrollContentsBy(QTableWidget* self, int dx, int dy) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QTableWidget::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnScrollContentsBy(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_scrollcontentsby_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_InitViewItemOption(const QTableWidget* self, QStyleOptionViewItem* option) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        vqtablewidget->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperInitViewItemOption(const QTableWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->QTableWidget::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QTableWidget::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInitViewItemOption(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_initviewitemoption_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_PaintEvent(QTableWidget* self, QPaintEvent* e) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperPaintEvent(QTableWidget* self, QPaintEvent* e) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QTableWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnPaintEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_paintevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_TimerEvent(QTableWidget* self, QTimerEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperTimerEvent(QTableWidget* self, QTimerEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnTimerEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_timerevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int QTableWidget_HorizontalOffset(const QTableWidget* self) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return vqtablewidget->horizontalOffset();
    } else {
        qFatal("Error: Protected virtual method QTableWidget::horizontalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int QTableWidget_SuperHorizontalOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QTableWidget::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHorizontalOffset(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_horizontaloffset_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_HorizontalOffset_Callback>(slot);
}

// Derived class handler implementation
int QTableWidget_VerticalOffset(const QTableWidget* self) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return vqtablewidget->verticalOffset();
    } else {
        qFatal("Error: Protected virtual method QTableWidget::verticalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int QTableWidget_SuperVerticalOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QTableWidget::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVerticalOffset(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_verticaloffset_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_VerticalOffset_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QTableWidget_MoveCursor(QTableWidget* self, int cursorAction, int modifiers) {
    return new QModelIndex((self->*&VirtualQTableWidget::Base::moveCursor)(static_cast<VirtualQTableWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

// Base class handler implementation
QModelIndex* QTableWidget_SuperMoveCursor(QTableWidget* self, int cursorAction, int modifiers) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        return new QModelIndex(vqtablewidget->moveCursor(static_cast<VirtualQTableWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method QTableWidget::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMoveCursor(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_movecursor_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MoveCursor_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_SetSelection(QTableWidget* self, const QRect* rect, int command) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::setSelection called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperSetSelection(QTableWidget* self, const QRect* rect, int command) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method QTableWidget::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetSelection(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_setselection_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SetSelection_Callback>(slot);
}

// Derived class handler implementation
QRegion* QTableWidget_VisualRegionForSelection(const QTableWidget* self, const QItemSelection* selection) {
    return new QRegion((self->*&VirtualQTableWidget::Base::visualRegionForSelection)(*selection));
}

// Base class handler implementation
QRegion* QTableWidget_SuperVisualRegionForSelection(const QTableWidget* self, const QItemSelection* selection) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        return new QRegion(vqtablewidget->visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QTableWidget::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVisualRegionForSelection(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_visualregionforselection_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_VisualRegionForSelection_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTableWidget_SelectedIndexes(const QTableWidget* self) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        QList<QModelIndex> _ret = vqtablewidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        qFatal("Error: Protected virtual method QTableWidget::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QTableWidget_SuperSelectedIndexes(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        QList<QModelIndex> _ret = vqtablewidget->QTableWidget::selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected virtual method QTableWidget::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSelectedIndexes(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_selectedindexes_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_UpdateGeometries(QTableWidget* self) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->updateGeometries();
    } else {
        qFatal("Error: Protected virtual method QTableWidget::updateGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperUpdateGeometries(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QTableWidget::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnUpdateGeometries(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_updategeometries_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_UpdateGeometries_Callback>(slot);
}

// Derived class handler implementation
QSize* QTableWidget_ViewportSizeHint(const QTableWidget* self) {
    return new QSize((self->*&VirtualQTableWidget::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QTableWidget_SuperViewportSizeHint(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        return new QSize(vqtablewidget->viewportSizeHint());
    qFatal("Error: Protected virtual method QTableWidget::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnViewportSizeHint(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_viewportsizehint_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QTableWidget_SizeHintForRow(const QTableWidget* self, int row) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return vqtablewidget->sizeHintForRow(static_cast<int>(row));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::sizeHintForRow called without a directly constructed type");
    }
}

// Base class handler implementation
int QTableWidget_SuperSizeHintForRow(const QTableWidget* self, int row) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::sizeHintForRow(static_cast<int>(row));
    } else
        qFatal("Error: Protected virtual method QTableWidget::sizeHintForRow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSizeHintForRow(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_sizehintforrow_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int QTableWidget_SizeHintForColumn(const QTableWidget* self, int column) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return vqtablewidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::sizeHintForColumn called without a directly constructed type");
    }
}

// Base class handler implementation
int QTableWidget_SuperSizeHintForColumn(const QTableWidget* self, int column) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::sizeHintForColumn(static_cast<int>(column));
    } else
        qFatal("Error: Protected virtual method QTableWidget::sizeHintForColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSizeHintForColumn(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_sizehintforcolumn_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_VerticalScrollbarAction(QTableWidget* self, int action) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperVerticalScrollbarAction(QTableWidget* self, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QTableWidget::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVerticalScrollbarAction(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_verticalscrollbaraction_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_HorizontalScrollbarAction(QTableWidget* self, int action) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperHorizontalScrollbarAction(QTableWidget* self, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QTableWidget::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHorizontalScrollbarAction(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
bool QTableWidget_IsIndexHidden(const QTableWidget* self, const QModelIndex* index) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return vqtablewidget->isIndexHidden(*index);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::isIndexHidden called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableWidget_SuperIsIndexHidden(const QTableWidget* self, const QModelIndex* index) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QTableWidget::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnIsIndexHidden(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_isindexhidden_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_IsIndexHidden_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_SelectionChanged(QTableWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperSelectionChanged(QTableWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QTableWidget::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSelectionChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_selectionchanged_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_CurrentChanged(QTableWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->currentChanged(*current, *previous);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::currentChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperCurrentChanged(QTableWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QTableWidget::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCurrentChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_currentchanged_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_CurrentChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_KeyboardSearch(QTableWidget* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void QTableWidget_SuperKeyboardSearch(QTableWidget* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QTableWidget::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnKeyboardSearch(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_keyboardsearch_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QTableWidget_ItemDelegateForIndex(const QTableWidget* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QTableWidget_SuperItemDelegateForIndex(const QTableWidget* self, const QModelIndex* index) {
    return self->QTableWidget::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnItemDelegateForIndex(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_itemdelegateforindex_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTableWidget_InputMethodQuery(const QTableWidget* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QTableWidget_SuperInputMethodQuery(const QTableWidget* self, int query) {
    return new QVariant(self->QTableWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInputMethodQuery(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_inputmethodquery_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_Reset(QTableWidget* self) {
    self->reset();
}

// Base class handler implementation
void QTableWidget_SuperReset(QTableWidget* self) {
    self->QTableWidget::reset();
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnReset(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_reset_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_Reset_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_SelectAll(QTableWidget* self) {
    self->selectAll();
}

// Base class handler implementation
void QTableWidget_SuperSelectAll(QTableWidget* self) {
    self->QTableWidget::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSelectAll(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_selectall_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_DataChanged(QTableWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::dataChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperDataChanged(QTableWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method QTableWidget::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDataChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_datachanged_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DataChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_RowsInserted(QTableWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::rowsInserted called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperRowsInserted(QTableWidget* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QTableWidget::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRowsInserted(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_rowsinserted_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_RowsInserted_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_RowsAboutToBeRemoved(QTableWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperRowsAboutToBeRemoved(QTableWidget* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QTableWidget::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRowsAboutToBeRemoved(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_UpdateEditorData(QTableWidget* self) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QTableWidget::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperUpdateEditorData(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QTableWidget::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnUpdateEditorData(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_updateeditordata_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_UpdateEditorGeometries(QTableWidget* self) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QTableWidget::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperUpdateEditorGeometries(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QTableWidget::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnUpdateEditorGeometries(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_updateeditorgeometries_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_VerticalScrollbarValueChanged(QTableWidget* self, int value) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperVerticalScrollbarValueChanged(QTableWidget* self, int value) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QTableWidget::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVerticalScrollbarValueChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_HorizontalScrollbarValueChanged(QTableWidget* self, int value) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperHorizontalScrollbarValueChanged(QTableWidget* self, int value) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QTableWidget::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHorizontalScrollbarValueChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_CloseEditor(QTableWidget* self, QWidget* editor, int hint) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperCloseEditor(QTableWidget* self, QWidget* editor, int hint) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QTableWidget::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCloseEditor(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_closeeditor_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_CommitData(QTableWidget* self, QWidget* editor) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperCommitData(QTableWidget* self, QWidget* editor) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QTableWidget::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCommitData(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_commitdata_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_EditorDestroyed(QTableWidget* self, QObject* editor) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperEditorDestroyed(QTableWidget* self, QObject* editor) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QTableWidget::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEditorDestroyed(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_editordestroyed_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool QTableWidget_Edit2(QTableWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return vqtablewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableWidget_SuperEdit2(QTableWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->QTableWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEdit2(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_edit2_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QTableWidget_SelectionCommand(const QTableWidget* self, const QModelIndex* index, const QEvent* event) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return static_cast<int>(vqtablewidget->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QTableWidget_SuperSelectionCommand(const QTableWidget* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return static_cast<int>(vqtablewidget->QTableWidget::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QTableWidget::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSelectionCommand(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_selectioncommand_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_StartDrag(QTableWidget* self, int supportedActions) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperStartDrag(QTableWidget* self, int supportedActions) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QTableWidget::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnStartDrag(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_startdrag_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_StartDrag_Callback>(slot);
}

// Derived class handler implementation
bool QTableWidget_FocusNextPrevChild(QTableWidget* self, bool next) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return vqtablewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableWidget_SuperFocusNextPrevChild(QTableWidget* self, bool next) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->QTableWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTableWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnFocusNextPrevChild(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_focusnextprevchild_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QTableWidget_ViewportEvent(QTableWidget* self, QEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return vqtablewidget->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableWidget_SuperViewportEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->QTableWidget::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnViewportEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_viewportevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_MousePressEvent(QTableWidget* self, QMouseEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperMousePressEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMousePressEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_mousepressevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_MouseMoveEvent(QTableWidget* self, QMouseEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperMouseMoveEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMouseMoveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_mousemoveevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_MouseReleaseEvent(QTableWidget* self, QMouseEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperMouseReleaseEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMouseReleaseEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_mousereleaseevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_MouseDoubleClickEvent(QTableWidget* self, QMouseEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperMouseDoubleClickEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMouseDoubleClickEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_DragEnterEvent(QTableWidget* self, QDragEnterEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperDragEnterEvent(QTableWidget* self, QDragEnterEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDragEnterEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_dragenterevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_DragMoveEvent(QTableWidget* self, QDragMoveEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperDragMoveEvent(QTableWidget* self, QDragMoveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDragMoveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_dragmoveevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_DragLeaveEvent(QTableWidget* self, QDragLeaveEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperDragLeaveEvent(QTableWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDragLeaveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_dragleaveevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_FocusInEvent(QTableWidget* self, QFocusEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperFocusInEvent(QTableWidget* self, QFocusEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnFocusInEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_focusinevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_FocusOutEvent(QTableWidget* self, QFocusEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperFocusOutEvent(QTableWidget* self, QFocusEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnFocusOutEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_focusoutevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_KeyPressEvent(QTableWidget* self, QKeyEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperKeyPressEvent(QTableWidget* self, QKeyEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnKeyPressEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_keypressevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ResizeEvent(QTableWidget* self, QResizeEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperResizeEvent(QTableWidget* self, QResizeEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnResizeEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_resizeevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_InputMethodEvent(QTableWidget* self, QInputMethodEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperInputMethodEvent(QTableWidget* self, QInputMethodEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInputMethodEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_inputmethodevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTableWidget_EventFilter(QTableWidget* self, QObject* object, QEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return vqtablewidget->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableWidget_SuperEventFilter(QTableWidget* self, QObject* object, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->QTableWidget::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEventFilter(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_eventfilter_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QTableWidget_MinimumSizeHint(const QTableWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QTableWidget_SuperMinimumSizeHint(const QTableWidget* self) {
    return new QSize(self->QTableWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMinimumSizeHint(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_minimumsizehint_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QTableWidget_SizeHint(const QTableWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QTableWidget_SuperSizeHint(const QTableWidget* self) {
    return new QSize(self->QTableWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSizeHint(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_sizehint_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_SetupViewport(QTableWidget* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QTableWidget_SuperSetupViewport(QTableWidget* self, QWidget* viewport) {
    self->QTableWidget::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetupViewport(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_setupviewport_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_WheelEvent(QTableWidget* self, QWheelEvent* param1) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperWheelEvent(QTableWidget* self, QWheelEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTableWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnWheelEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_wheelevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ContextMenuEvent(QTableWidget* self, QContextMenuEvent* param1) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperContextMenuEvent(QTableWidget* self, QContextMenuEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTableWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnContextMenuEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_contextmenuevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ChangeEvent(QTableWidget* self, QEvent* param1) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperChangeEvent(QTableWidget* self, QEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTableWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnChangeEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_changeevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_InitStyleOption(const QTableWidget* self, QStyleOptionFrame* option) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        vqtablewidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperInitStyleOption(const QTableWidget* self, QStyleOptionFrame* option) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->QTableWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QTableWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInitStyleOption(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_initstyleoption_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QTableWidget_DevType(const QTableWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QTableWidget_SuperDevType(const QTableWidget* self) {
    return self->QTableWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDevType(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_devtype_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_SetVisible(QTableWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTableWidget_SuperSetVisible(QTableWidget* self, bool visible) {
    self->QTableWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetVisible(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_setvisible_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QTableWidget_HeightForWidth(const QTableWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTableWidget_SuperHeightForWidth(const QTableWidget* self, int param1) {
    return self->QTableWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHeightForWidth(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_heightforwidth_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTableWidget_HasHeightForWidth(const QTableWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTableWidget_SuperHasHeightForWidth(const QTableWidget* self) {
    return self->QTableWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHasHeightForWidth(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_hasheightforwidth_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTableWidget_PaintEngine(const QTableWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTableWidget_SuperPaintEngine(const QTableWidget* self) {
    return self->QTableWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnPaintEngine(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_paintengine_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_KeyReleaseEvent(QTableWidget* self, QKeyEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperKeyReleaseEvent(QTableWidget* self, QKeyEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnKeyReleaseEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_keyreleaseevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_EnterEvent(QTableWidget* self, QEnterEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperEnterEvent(QTableWidget* self, QEnterEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEnterEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_enterevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_LeaveEvent(QTableWidget* self, QEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperLeaveEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnLeaveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_leaveevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_MoveEvent(QTableWidget* self, QMoveEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperMoveEvent(QTableWidget* self, QMoveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMoveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_moveevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_CloseEvent(QTableWidget* self, QCloseEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperCloseEvent(QTableWidget* self, QCloseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCloseEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_closeevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_TabletEvent(QTableWidget* self, QTabletEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperTabletEvent(QTableWidget* self, QTabletEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnTabletEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_tabletevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ActionEvent(QTableWidget* self, QActionEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperActionEvent(QTableWidget* self, QActionEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnActionEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_actionevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ShowEvent(QTableWidget* self, QShowEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperShowEvent(QTableWidget* self, QShowEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnShowEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_showevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_HideEvent(QTableWidget* self, QHideEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperHideEvent(QTableWidget* self, QHideEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHideEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_hideevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTableWidget_NativeEvent(QTableWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        return vqtablewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableWidget_SuperNativeEvent(QTableWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->QTableWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTableWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnNativeEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_nativeevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTableWidget_Metric(const QTableWidget* self, int param1) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return vqtablewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTableWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTableWidget_SuperMetric(const QTableWidget* self, int param1) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTableWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMetric(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_metric_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_InitPainter(const QTableWidget* self, QPainter* painter) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        vqtablewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperInitPainter(const QTableWidget* self, QPainter* painter) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->QTableWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTableWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInitPainter(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_initpainter_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTableWidget_Redirected(const QTableWidget* self, QPoint* offset) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return vqtablewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTableWidget_SuperRedirected(const QTableWidget* self, QPoint* offset) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTableWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRedirected(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_redirected_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTableWidget_SharedPainter(const QTableWidget* self) {
    auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self));
    if (vqtablewidget) {
        return vqtablewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTableWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTableWidget_SuperSharedPainter(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->QTableWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTableWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSharedPainter(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        vqtablewidget->qtablewidget_sharedpainter_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ChildEvent(QTableWidget* self, QChildEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperChildEvent(QTableWidget* self, QChildEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnChildEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_childevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_CustomEvent(QTableWidget* self, QEvent* event) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperCustomEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCustomEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_customevent_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_ConnectNotify(QTableWidget* self, const QMetaMethod* signal) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperConnectNotify(QTableWidget* self, const QMetaMethod* signal) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTableWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnConnectNotify(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_connectnotify_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTableWidget_DisconnectNotify(QTableWidget* self, const QMetaMethod* signal) {
    auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
    if (vqtablewidget) {
        vqtablewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTableWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableWidget_SuperDisconnectNotify(QTableWidget* self, const QMetaMethod* signal) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->QTableWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTableWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDisconnectNotify(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self))
        vqtablewidget->qtablewidget_disconnectnotify_callback = reinterpret_cast<VirtualQTableWidget::QTableWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTableWidget_RowMoved(QTableWidget* self, int row, int oldIndex, int newIndex) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else
        qFatal("Error: Protected method QTableWidget::rowMoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_ColumnMoved(QTableWidget* self, int column, int oldIndex, int newIndex) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else
        qFatal("Error: Protected method QTableWidget::columnMoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_RowResized(QTableWidget* self, int row, int oldHeight, int newHeight) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    } else
        qFatal("Error: Protected method QTableWidget::rowResized called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_ColumnResized(QTableWidget* self, int column, int oldWidth, int newWidth) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    } else
        qFatal("Error: Protected method QTableWidget::columnResized called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_RowCountChanged(QTableWidget* self, int oldCount, int newCount) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else
        qFatal("Error: Protected method QTableWidget::rowCountChanged called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_ColumnCountChanged(QTableWidget* self, int oldCount, int newCount) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else
        qFatal("Error: Protected method QTableWidget::columnCountChanged called without a directly constructed type");
}

// Derived class protected handler implementation
int QTableWidget_State(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return static_cast<int>(vqtablewidget->VirtualQTableWidget::state());
    } else
        qFatal("Error: Protected method QTableWidget::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_SetState(QTableWidget* self, int state) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::setState(static_cast<VirtualQTableWidget::State>(state));
    } else
        qFatal("Error: Protected method QTableWidget::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_ScheduleDelayedItemsLayout(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QTableWidget::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_ExecuteDelayedItemsLayout(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QTableWidget::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_SetDirtyRegion(QTableWidget* self, const QRegion* region) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QTableWidget::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_ScrollDirtyRegion(QTableWidget* self, int dx, int dy) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QTableWidget::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QTableWidget_DirtyRegionOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        return new QPoint(vqtablewidget->dirtyRegionOffset());
    qFatal("Error: Protected method QTableWidget::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_StartAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::startAutoScroll();
    } else
        qFatal("Error: Protected method QTableWidget::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_StopAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::stopAutoScroll();
    } else
        qFatal("Error: Protected method QTableWidget::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_DoAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::doAutoScroll();
    } else
        qFatal("Error: Protected method QTableWidget::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QTableWidget_DropIndicatorPosition(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return static_cast<int>(vqtablewidget->VirtualQTableWidget::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QTableWidget::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_SetViewportMargins(QTableWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QTableWidget::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QTableWidget_ViewportMargins(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self)))
        return new QMargins(vqtablewidget->viewportMargins());
    qFatal("Error: Protected method QTableWidget::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_DrawFrame(QTableWidget* self, QPainter* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::drawFrame(param1);
    } else
        qFatal("Error: Protected method QTableWidget::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_UpdateMicroFocus(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTableWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_Create(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::create();
    } else
        qFatal("Error: Protected method QTableWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableWidget_Destroy(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->VirtualQTableWidget::destroy();
    } else
        qFatal("Error: Protected method QTableWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTableWidget_FocusNextChild(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->VirtualQTableWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QTableWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTableWidget_FocusPreviousChild(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->VirtualQTableWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTableWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTableWidget_Sender(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->VirtualQTableWidget::sender();
    } else
        qFatal("Error: Protected method QTableWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTableWidget_SenderSignalIndex(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->VirtualQTableWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTableWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTableWidget_Receivers(const QTableWidget* self, const char* signal) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->VirtualQTableWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QTableWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTableWidget_IsSignalConnected(const QTableWidget* self, const QMetaMethod* signal) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->VirtualQTableWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTableWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTableWidget_GetDecodedMetricF(const QTableWidget* self, int metricA, int metricB) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->VirtualQTableWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTableWidget::getDecodedMetricF called without a directly constructed type");
}

void QTableWidget_Delete(QTableWidget* self) {
    delete self;
}
