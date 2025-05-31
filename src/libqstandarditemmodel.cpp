#include <QAbstractItemModel>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qstandarditemmodel.h>
#include "libqstandarditemmodel.h"
#include "libqstandarditemmodel.hxx"

QStandardItem* QStandardItem_new() {
    return new VirtualQStandardItem();
}

QStandardItem* QStandardItem_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQStandardItem(text_QString);
}

QStandardItem* QStandardItem_new3(const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQStandardItem(*icon, text_QString);
}

QStandardItem* QStandardItem_new4(int rows) {
    return new VirtualQStandardItem(static_cast<int>(rows));
}

QStandardItem* QStandardItem_new5(int rows, int columns) {
    return new VirtualQStandardItem(static_cast<int>(rows), static_cast<int>(columns));
}

void QStandardItem_ClearData(QStandardItem* self) {
    self->clearData();
}

libqt_string QStandardItem_Text(const QStandardItem* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QStandardItem_SetText(QStandardItem* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

QIcon* QStandardItem_Icon(const QStandardItem* self) {
    return new QIcon(self->icon());
}

void QStandardItem_SetIcon(QStandardItem* self, const QIcon* icon) {
    self->setIcon(*icon);
}

libqt_string QStandardItem_ToolTip(const QStandardItem* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QStandardItem_SetToolTip(QStandardItem* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QStandardItem_StatusTip(const QStandardItem* self) {
    QString _ret = self->statusTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QStandardItem_SetStatusTip(QStandardItem* self, const libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QStandardItem_WhatsThis(const QStandardItem* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QStandardItem_SetWhatsThis(QStandardItem* self, const libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(whatsThis_QString);
}

QSize* QStandardItem_SizeHint(const QStandardItem* self) {
    return new QSize(self->sizeHint());
}

void QStandardItem_SetSizeHint(QStandardItem* self, const QSize* sizeHint) {
    self->setSizeHint(*sizeHint);
}

QFont* QStandardItem_Font(const QStandardItem* self) {
    return new QFont(self->font());
}

void QStandardItem_SetFont(QStandardItem* self, const QFont* font) {
    self->setFont(*font);
}

int QStandardItem_TextAlignment(const QStandardItem* self) {
    return static_cast<int>(self->textAlignment());
}

void QStandardItem_SetTextAlignment(QStandardItem* self, int textAlignment) {
    self->setTextAlignment(static_cast<Qt::Alignment>(textAlignment));
}

QBrush* QStandardItem_Background(const QStandardItem* self) {
    return new QBrush(self->background());
}

void QStandardItem_SetBackground(QStandardItem* self, const QBrush* brush) {
    self->setBackground(*brush);
}

QBrush* QStandardItem_Foreground(const QStandardItem* self) {
    return new QBrush(self->foreground());
}

void QStandardItem_SetForeground(QStandardItem* self, const QBrush* brush) {
    self->setForeground(*brush);
}

int QStandardItem_CheckState(const QStandardItem* self) {
    return static_cast<int>(self->checkState());
}

void QStandardItem_SetCheckState(QStandardItem* self, int checkState) {
    self->setCheckState(static_cast<Qt::CheckState>(checkState));
}

libqt_string QStandardItem_AccessibleText(const QStandardItem* self) {
    QString _ret = self->accessibleText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QStandardItem_SetAccessibleText(QStandardItem* self, const libqt_string accessibleText) {
    QString accessibleText_QString = QString::fromUtf8(accessibleText.data, accessibleText.len);
    self->setAccessibleText(accessibleText_QString);
}

libqt_string QStandardItem_AccessibleDescription(const QStandardItem* self) {
    QString _ret = self->accessibleDescription();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QStandardItem_SetAccessibleDescription(QStandardItem* self, const libqt_string accessibleDescription) {
    QString accessibleDescription_QString = QString::fromUtf8(accessibleDescription.data, accessibleDescription.len);
    self->setAccessibleDescription(accessibleDescription_QString);
}

int QStandardItem_Flags(const QStandardItem* self) {
    return static_cast<int>(self->flags());
}

void QStandardItem_SetFlags(QStandardItem* self, int flags) {
    self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

bool QStandardItem_IsEnabled(const QStandardItem* self) {
    return self->isEnabled();
}

void QStandardItem_SetEnabled(QStandardItem* self, bool enabled) {
    self->setEnabled(enabled);
}

bool QStandardItem_IsEditable(const QStandardItem* self) {
    return self->isEditable();
}

void QStandardItem_SetEditable(QStandardItem* self, bool editable) {
    self->setEditable(editable);
}

bool QStandardItem_IsSelectable(const QStandardItem* self) {
    return self->isSelectable();
}

void QStandardItem_SetSelectable(QStandardItem* self, bool selectable) {
    self->setSelectable(selectable);
}

bool QStandardItem_IsCheckable(const QStandardItem* self) {
    return self->isCheckable();
}

void QStandardItem_SetCheckable(QStandardItem* self, bool checkable) {
    self->setCheckable(checkable);
}

bool QStandardItem_IsAutoTristate(const QStandardItem* self) {
    return self->isAutoTristate();
}

void QStandardItem_SetAutoTristate(QStandardItem* self, bool tristate) {
    self->setAutoTristate(tristate);
}

bool QStandardItem_IsUserTristate(const QStandardItem* self) {
    return self->isUserTristate();
}

void QStandardItem_SetUserTristate(QStandardItem* self, bool tristate) {
    self->setUserTristate(tristate);
}

bool QStandardItem_IsDragEnabled(const QStandardItem* self) {
    return self->isDragEnabled();
}

void QStandardItem_SetDragEnabled(QStandardItem* self, bool dragEnabled) {
    self->setDragEnabled(dragEnabled);
}

bool QStandardItem_IsDropEnabled(const QStandardItem* self) {
    return self->isDropEnabled();
}

void QStandardItem_SetDropEnabled(QStandardItem* self, bool dropEnabled) {
    self->setDropEnabled(dropEnabled);
}

QStandardItem* QStandardItem_Parent(const QStandardItem* self) {
    return self->parent();
}

int QStandardItem_Row(const QStandardItem* self) {
    return self->row();
}

int QStandardItem_Column(const QStandardItem* self) {
    return self->column();
}

QModelIndex* QStandardItem_Index(const QStandardItem* self) {
    return new QModelIndex(self->index());
}

QStandardItemModel* QStandardItem_Model(const QStandardItem* self) {
    return self->model();
}

int QStandardItem_RowCount(const QStandardItem* self) {
    return self->rowCount();
}

void QStandardItem_SetRowCount(QStandardItem* self, int rows) {
    self->setRowCount(static_cast<int>(rows));
}

int QStandardItem_ColumnCount(const QStandardItem* self) {
    return self->columnCount();
}

void QStandardItem_SetColumnCount(QStandardItem* self, int columns) {
    self->setColumnCount(static_cast<int>(columns));
}

bool QStandardItem_HasChildren(const QStandardItem* self) {
    return self->hasChildren();
}

QStandardItem* QStandardItem_Child(const QStandardItem* self, int row) {
    return self->child(static_cast<int>(row));
}

void QStandardItem_SetChild(QStandardItem* self, int row, int column, QStandardItem* item) {
    self->setChild(static_cast<int>(row), static_cast<int>(column), item);
}

void QStandardItem_SetChild2(QStandardItem* self, int row, QStandardItem* item) {
    self->setChild(static_cast<int>(row), item);
}

void QStandardItem_InsertRow(QStandardItem* self, int row, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->insertRow(static_cast<int>(row), items_QList);
}

void QStandardItem_InsertColumn(QStandardItem* self, int column, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->insertColumn(static_cast<int>(column), items_QList);
}

void QStandardItem_InsertRows(QStandardItem* self, int row, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->insertRows(static_cast<int>(row), items_QList);
}

void QStandardItem_InsertRows2(QStandardItem* self, int row, int count) {
    self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

void QStandardItem_InsertColumns(QStandardItem* self, int column, int count) {
    self->insertColumns(static_cast<int>(column), static_cast<int>(count));
}

void QStandardItem_RemoveRow(QStandardItem* self, int row) {
    self->removeRow(static_cast<int>(row));
}

void QStandardItem_RemoveColumn(QStandardItem* self, int column) {
    self->removeColumn(static_cast<int>(column));
}

void QStandardItem_RemoveRows(QStandardItem* self, int row, int count) {
    self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

void QStandardItem_RemoveColumns(QStandardItem* self, int column, int count) {
    self->removeColumns(static_cast<int>(column), static_cast<int>(count));
}

void QStandardItem_AppendRow(QStandardItem* self, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->appendRow(items_QList);
}

void QStandardItem_AppendRows(QStandardItem* self, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->appendRows(items_QList);
}

void QStandardItem_AppendColumn(QStandardItem* self, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->appendColumn(items_QList);
}

void QStandardItem_InsertRow2(QStandardItem* self, int row, QStandardItem* item) {
    self->insertRow(static_cast<int>(row), item);
}

void QStandardItem_AppendRowWithItem(QStandardItem* self, QStandardItem* item) {
    self->appendRow(item);
}

QStandardItem* QStandardItem_TakeChild(QStandardItem* self, int row) {
    return self->takeChild(static_cast<int>(row));
}

libqt_list /* of QStandardItem* */ QStandardItem_TakeRow(QStandardItem* self, int row) {
    QList<QStandardItem*> _ret = self->takeRow(static_cast<int>(row));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QStandardItem* */ QStandardItem_TakeColumn(QStandardItem* self, int column) {
    QList<QStandardItem*> _ret = self->takeColumn(static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QStandardItem_SortChildren(QStandardItem* self, int column) {
    self->sortChildren(static_cast<int>(column));
}

QStandardItem* QStandardItem_Child2(const QStandardItem* self, int row, int column) {
    return self->child(static_cast<int>(row), static_cast<int>(column));
}

QStandardItem* QStandardItem_TakeChild2(QStandardItem* self, int row, int column) {
    return self->takeChild(static_cast<int>(row), static_cast<int>(column));
}

void QStandardItem_SortChildren2(QStandardItem* self, int column, int order) {
    self->sortChildren(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Derived class handler implementation
QVariant* QStandardItem_Data(const QStandardItem* self, int role) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        return new QVariant(vqstandarditem->data(static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStandardItem*)self)->data(static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QStandardItem_QBaseData(const QStandardItem* self, int role) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Data_IsBase(true);
        return new QVariant(vqstandarditem->data(static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStandardItem*)self)->data(static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnData(const QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Data_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Data_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItem_MultiData(const QStandardItem* self, QModelRoleDataSpan* roleDataSpan) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->multiData(*roleDataSpan);
    } else {
        self->QStandardItem::multiData(*roleDataSpan);
    }
}

// Base class handler implementation
void QStandardItem_QBaseMultiData(const QStandardItem* self, QModelRoleDataSpan* roleDataSpan) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_MultiData_IsBase(true);
        vqstandarditem->multiData(*roleDataSpan);
    } else {
        self->QStandardItem::multiData(*roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnMultiData(const QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_MultiData_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItem_SetData(QStandardItem* self, const QVariant* value, int role) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setData(*value, static_cast<int>(role));
    } else {
        self->QStandardItem::setData(*value, static_cast<int>(role));
    }
}

// Base class handler implementation
void QStandardItem_QBaseSetData(QStandardItem* self, const QVariant* value, int role) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_SetData_IsBase(true);
        vqstandarditem->setData(*value, static_cast<int>(role));
    } else {
        self->QStandardItem::setData(*value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnSetData(QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_SetData_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QStandardItem* QStandardItem_Clone(const QStandardItem* self) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        return vqstandarditem->clone();
    } else {
        return self->QStandardItem::clone();
    }
}

// Base class handler implementation
QStandardItem* QStandardItem_QBaseClone(const QStandardItem* self) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Clone_IsBase(true);
        return vqstandarditem->clone();
    } else {
        return self->QStandardItem::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnClone(const QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Clone_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
int QStandardItem_Type(const QStandardItem* self) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        return vqstandarditem->type();
    } else {
        return self->QStandardItem::type();
    }
}

// Base class handler implementation
int QStandardItem_QBaseType(const QStandardItem* self) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Type_IsBase(true);
        return vqstandarditem->type();
    } else {
        return self->QStandardItem::type();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnType(const QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Type_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItem_Read(QStandardItem* self, QDataStream* in) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->read(*in);
    } else {
        self->QStandardItem::read(*in);
    }
}

// Base class handler implementation
void QStandardItem_QBaseRead(QStandardItem* self, QDataStream* in) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Read_IsBase(true);
        vqstandarditem->read(*in);
    } else {
        self->QStandardItem::read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnRead(QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Read_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Read_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItem_Write(const QStandardItem* self, QDataStream* out) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->write(*out);
    } else {
        self->QStandardItem::write(*out);
    }
}

// Base class handler implementation
void QStandardItem_QBaseWrite(const QStandardItem* self, QDataStream* out) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Write_IsBase(true);
        vqstandarditem->write(*out);
    } else {
        self->QStandardItem::write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnWrite(const QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_Write_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Write_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItem_OperatorLesser(const QStandardItem* self, const QStandardItem* other) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        return vqstandarditem->operator<(*other);
    } else {
        return self->QStandardItem::operator<(*other);
    }
}

// Base class handler implementation
bool QStandardItem_QBaseOperatorLesser(const QStandardItem* self, const QStandardItem* other) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_OperatorLesser_IsBase(true);
        return vqstandarditem->operator<(*other);
    } else {
        return self->QStandardItem::operator<(*other);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnOperatorLesser(const QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self));
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_OperatorLesser_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_OperatorLesser_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItem_OperatorAssign(QStandardItem* self, const QStandardItem* other) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->operator=(*other);
    } else {
        ((VirtualQStandardItem*)self)->operator=(*other);
    }
}

// Base class handler implementation
void QStandardItem_QBaseOperatorAssign(QStandardItem* self, const QStandardItem* other) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_OperatorAssign_IsBase(true);
        vqstandarditem->operator=(*other);
    } else {
        ((VirtualQStandardItem*)self)->operator=(*other);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnOperatorAssign(QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_OperatorAssign_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_OperatorAssign_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItem_EmitDataChanged(QStandardItem* self) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->emitDataChanged();
    } else {
        ((VirtualQStandardItem*)self)->emitDataChanged();
    }
}

// Base class handler implementation
void QStandardItem_QBaseEmitDataChanged(QStandardItem* self) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_EmitDataChanged_IsBase(true);
        vqstandarditem->emitDataChanged();
    } else {
        ((VirtualQStandardItem*)self)->emitDataChanged();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnEmitDataChanged(QStandardItem* self, intptr_t slot) {
    auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
    if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
        vqstandarditem->setQStandardItem_EmitDataChanged_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_EmitDataChanged_Callback>(slot));
    }
}

void QStandardItem_Delete(QStandardItem* self) {
    delete self;
}

QStandardItemModel* QStandardItemModel_new() {
    return new VirtualQStandardItemModel();
}

QStandardItemModel* QStandardItemModel_new2(int rows, int columns) {
    return new VirtualQStandardItemModel(static_cast<int>(rows), static_cast<int>(columns));
}

QStandardItemModel* QStandardItemModel_new3(QObject* parent) {
    return new VirtualQStandardItemModel(parent);
}

QStandardItemModel* QStandardItemModel_new4(int rows, int columns, QObject* parent) {
    return new VirtualQStandardItemModel(static_cast<int>(rows), static_cast<int>(columns), parent);
}

QMetaObject* QStandardItemModel_MetaObject(const QStandardItemModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStandardItemModel_Metacast(QStandardItemModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStandardItemModel_Metacall(QStandardItemModel* self, int param1, int param2, void** param3) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStandardItemModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStandardItemModel_OnMetacall(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Metacall_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStandardItemModel_QBaseMetacall(QStandardItemModel* self, int param1, int param2, void** param3) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Metacall_IsBase(true);
        return vqstandarditemmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStandardItemModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStandardItemModel_Tr(const char* s) {
    QString _ret = QStandardItemModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QStandardItemModel_SetItemRoleNames(QStandardItemModel* self, const libqt_map /* of int to libqt_string */ roleNames) {
    QHash<int, QByteArray> roleNames_QMap;
    roleNames_QMap.reserve(roleNames.len);
    int* roleNames_karr = static_cast<int*>(roleNames.keys);
    libqt_string* roleNames_varr = static_cast<libqt_string*>(roleNames.values);
    for (size_t i = 0; i < roleNames.len; ++i) {
        QByteArray roleNames_varr_i_QByteArray(roleNames_varr[i].data, roleNames_varr[i].len);
        roleNames_QMap[static_cast<int>(roleNames_karr[i])] = roleNames_varr_i_QByteArray;
    }
    self->setItemRoleNames(roleNames_QMap);
}

void QStandardItemModel_Clear(QStandardItemModel* self) {
    self->clear();
}

QStandardItem* QStandardItemModel_ItemFromIndex(const QStandardItemModel* self, const QModelIndex* index) {
    return self->itemFromIndex(*index);
}

QModelIndex* QStandardItemModel_IndexFromItem(const QStandardItemModel* self, const QStandardItem* item) {
    return new QModelIndex(self->indexFromItem(item));
}

QStandardItem* QStandardItemModel_Item(const QStandardItemModel* self, int row) {
    return self->item(static_cast<int>(row));
}

void QStandardItemModel_SetItem(QStandardItemModel* self, int row, int column, QStandardItem* item) {
    self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

void QStandardItemModel_SetItem2(QStandardItemModel* self, int row, QStandardItem* item) {
    self->setItem(static_cast<int>(row), item);
}

QStandardItem* QStandardItemModel_InvisibleRootItem(const QStandardItemModel* self) {
    return self->invisibleRootItem();
}

QStandardItem* QStandardItemModel_HorizontalHeaderItem(const QStandardItemModel* self, int column) {
    return self->horizontalHeaderItem(static_cast<int>(column));
}

void QStandardItemModel_SetHorizontalHeaderItem(QStandardItemModel* self, int column, QStandardItem* item) {
    self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QStandardItem* QStandardItemModel_VerticalHeaderItem(const QStandardItemModel* self, int row) {
    return self->verticalHeaderItem(static_cast<int>(row));
}

void QStandardItemModel_SetVerticalHeaderItem(QStandardItemModel* self, int row, QStandardItem* item) {
    self->setVerticalHeaderItem(static_cast<int>(row), item);
}

void QStandardItemModel_SetHorizontalHeaderLabels(QStandardItemModel* self, const libqt_list /* of libqt_string */ labels) {
    QStringList labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setHorizontalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetVerticalHeaderLabels(QStandardItemModel* self, const libqt_list /* of libqt_string */ labels) {
    QStringList labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setVerticalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetRowCount(QStandardItemModel* self, int rows) {
    self->setRowCount(static_cast<int>(rows));
}

void QStandardItemModel_SetColumnCount(QStandardItemModel* self, int columns) {
    self->setColumnCount(static_cast<int>(columns));
}

void QStandardItemModel_AppendRow(QStandardItemModel* self, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->appendRow(items_QList);
}

void QStandardItemModel_AppendColumn(QStandardItemModel* self, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->appendColumn(items_QList);
}

void QStandardItemModel_AppendRowWithItem(QStandardItemModel* self, QStandardItem* item) {
    self->appendRow(item);
}

void QStandardItemModel_InsertRow(QStandardItemModel* self, int row, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->insertRow(static_cast<int>(row), items_QList);
}

void QStandardItemModel_InsertColumn(QStandardItemModel* self, int column, const libqt_list /* of QStandardItem* */ items) {
    QList<QStandardItem*> items_QList;
    items_QList.reserve(items.len);
    QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->insertColumn(static_cast<int>(column), items_QList);
}

void QStandardItemModel_InsertRow2(QStandardItemModel* self, int row, QStandardItem* item) {
    self->insertRow(static_cast<int>(row), item);
}

bool QStandardItemModel_InsertRowWithRow(QStandardItemModel* self, int row) {
    return self->insertRow(static_cast<int>(row));
}

bool QStandardItemModel_InsertColumnWithColumn(QStandardItemModel* self, int column) {
    return self->insertColumn(static_cast<int>(column));
}

QStandardItem* QStandardItemModel_TakeItem(QStandardItemModel* self, int row) {
    return self->takeItem(static_cast<int>(row));
}

libqt_list /* of QStandardItem* */ QStandardItemModel_TakeRow(QStandardItemModel* self, int row) {
    QList<QStandardItem*> _ret = self->takeRow(static_cast<int>(row));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QStandardItem* */ QStandardItemModel_TakeColumn(QStandardItemModel* self, int column) {
    QList<QStandardItem*> _ret = self->takeColumn(static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QStandardItem* QStandardItemModel_TakeHorizontalHeaderItem(QStandardItemModel* self, int column) {
    return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

QStandardItem* QStandardItemModel_TakeVerticalHeaderItem(QStandardItemModel* self, int row) {
    return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QStandardItem* QStandardItemModel_ItemPrototype(const QStandardItemModel* self) {
    return (QStandardItem*)self->itemPrototype();
}

void QStandardItemModel_SetItemPrototype(QStandardItemModel* self, const QStandardItem* item) {
    self->setItemPrototype(item);
}

libqt_list /* of QStandardItem* */ QStandardItemModel_FindItems(const QStandardItemModel* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QStandardItem*> _ret = self->findItems(text_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QStandardItemModel_SortRole(const QStandardItemModel* self) {
    return self->sortRole();
}

void QStandardItemModel_SetSortRole(QStandardItemModel* self, int role) {
    self->setSortRole(static_cast<int>(role));
}

void QStandardItemModel_ItemChanged(QStandardItemModel* self, QStandardItem* item) {
    self->itemChanged(item);
}

void QStandardItemModel_Connect_ItemChanged(QStandardItemModel* self, intptr_t slot) {
    void (*slotFunc)(QStandardItemModel*, QStandardItem*) = reinterpret_cast<void (*)(QStandardItemModel*, QStandardItem*)>(slot);
    QStandardItemModel::connect(self, &QStandardItemModel::itemChanged, [self, slotFunc](QStandardItem* item) {
        QStandardItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

libqt_string QStandardItemModel_Tr2(const char* s, const char* c) {
    QString _ret = QStandardItemModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QStandardItemModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStandardItemModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QStandardItem* QStandardItemModel_Item2(const QStandardItemModel* self, int row, int column) {
    return self->item(static_cast<int>(row), static_cast<int>(column));
}

bool QStandardItemModel_InsertRow22(QStandardItemModel* self, int row, const QModelIndex* parent) {
    return self->insertRow(static_cast<int>(row), *parent);
}

bool QStandardItemModel_InsertColumn2(QStandardItemModel* self, int column, const QModelIndex* parent) {
    return self->insertColumn(static_cast<int>(column), *parent);
}

QStandardItem* QStandardItemModel_TakeItem2(QStandardItemModel* self, int row, int column) {
    return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

libqt_list /* of QStandardItem* */ QStandardItemModel_FindItems2(const QStandardItemModel* self, const libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QStandardItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QStandardItem* */ QStandardItemModel_FindItems3(const QStandardItemModel* self, const libqt_string text, int flags, int column) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QStandardItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QStandardItemModel_RoleNames(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        QHash<int, QByteArray> _ret = vqstandarditemmodel->roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
            memcpy(_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            _hashval_str.data[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->QStandardItemModel::roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
            memcpy(_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            _hashval_str.data[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QStandardItemModel_QBaseRoleNames(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqstandarditemmodel->roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
            memcpy(_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            _hashval_str.data[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->QStandardItemModel::roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
            memcpy(_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            _hashval_str.data[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRoleNames(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_RoleNames_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStandardItemModel_Index(const QStandardItemModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return new QModelIndex(vqstandarditemmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQStandardItemModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QStandardItemModel_QBaseIndex(const QStandardItemModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Index_IsBase(true);
        return new QModelIndex(vqstandarditemmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQStandardItemModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnIndex(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Index_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStandardItemModel_Parent(const QStandardItemModel* self, const QModelIndex* child) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return new QModelIndex(vqstandarditemmodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQStandardItemModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* QStandardItemModel_QBaseParent(const QStandardItemModel* self, const QModelIndex* child) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Parent_IsBase(true);
        return new QModelIndex(vqstandarditemmodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQStandardItemModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnParent(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Parent_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int QStandardItemModel_RowCount(const QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->rowCount(*parent);
    } else {
        return self->QStandardItemModel::rowCount(*parent);
    }
}

// Base class handler implementation
int QStandardItemModel_QBaseRowCount(const QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_RowCount_IsBase(true);
        return vqstandarditemmodel->rowCount(*parent);
    } else {
        return self->QStandardItemModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRowCount(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_RowCount_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QStandardItemModel_ColumnCount(const QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->columnCount(*parent);
    } else {
        return self->QStandardItemModel::columnCount(*parent);
    }
}

// Base class handler implementation
int QStandardItemModel_QBaseColumnCount(const QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ColumnCount_IsBase(true);
        return vqstandarditemmodel->columnCount(*parent);
    } else {
        return self->QStandardItemModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnColumnCount(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ColumnCount_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_HasChildren(const QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->hasChildren(*parent);
    } else {
        return self->QStandardItemModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseHasChildren(const QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_HasChildren_IsBase(true);
        return vqstandarditemmodel->hasChildren(*parent);
    } else {
        return self->QStandardItemModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnHasChildren(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_HasChildren_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QStandardItemModel_Data(const QStandardItemModel* self, const QModelIndex* index, int role) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return new QVariant(vqstandarditemmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStandardItemModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QStandardItemModel_QBaseData(const QStandardItemModel* self, const QModelIndex* index, int role) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Data_IsBase(true);
        return new QVariant(vqstandarditemmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStandardItemModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnData(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Data_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_MultiData(const QStandardItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QStandardItemModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseMultiData(const QStandardItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MultiData_IsBase(true);
        vqstandarditemmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QStandardItemModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMultiData(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MultiData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_SetData(QStandardItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QStandardItemModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseSetData(QStandardItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SetData_IsBase(true);
        return vqstandarditemmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QStandardItemModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetData(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SetData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_ClearItemData(QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->clearItemData(*index);
    } else {
        return self->QStandardItemModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseClearItemData(QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ClearItemData_IsBase(true);
        return vqstandarditemmodel->clearItemData(*index);
    } else {
        return self->QStandardItemModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnClearItemData(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ClearItemData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QStandardItemModel_HeaderData(const QStandardItemModel* self, int section, int orientation, int role) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return new QVariant(vqstandarditemmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStandardItemModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QStandardItemModel_QBaseHeaderData(const QStandardItemModel* self, int section, int orientation, int role) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_HeaderData_IsBase(true);
        return new QVariant(vqstandarditemmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStandardItemModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnHeaderData(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_HeaderData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_SetHeaderData(QStandardItemModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QStandardItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseSetHeaderData(QStandardItemModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SetHeaderData_IsBase(true);
        return vqstandarditemmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QStandardItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetHeaderData(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SetHeaderData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_InsertRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QStandardItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseInsertRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_InsertRows_IsBase(true);
        return vqstandarditemmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QStandardItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnInsertRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_InsertRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_InsertColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QStandardItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseInsertColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_InsertColumns_IsBase(true);
        return vqstandarditemmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QStandardItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnInsertColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_InsertColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_RemoveRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QStandardItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseRemoveRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_RemoveRows_IsBase(true);
        return vqstandarditemmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QStandardItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRemoveRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_RemoveRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_RemoveColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QStandardItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseRemoveColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_RemoveColumns_IsBase(true);
        return vqstandarditemmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QStandardItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRemoveColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_RemoveColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
int QStandardItemModel_Flags(const QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return static_cast<int>(vqstandarditemmodel->flags(*index));
    } else {
        return static_cast<int>(self->QStandardItemModel::flags(*index));
    }
}

// Base class handler implementation
int QStandardItemModel_QBaseFlags(const QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Flags_IsBase(true);
        return static_cast<int>(vqstandarditemmodel->flags(*index));
    } else {
        return static_cast<int>(self->QStandardItemModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnFlags(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Flags_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
int QStandardItemModel_SupportedDropActions(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return static_cast<int>(vqstandarditemmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QStandardItemModel::supportedDropActions());
    }
}

// Base class handler implementation
int QStandardItemModel_QBaseSupportedDropActions(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqstandarditemmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QStandardItemModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSupportedDropActions(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QStandardItemModel_ItemData(const QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        QMap<int, QVariant> _ret = vqstandarditemmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->QStandardItemModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QStandardItemModel_QBaseItemData(const QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqstandarditemmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->QStandardItemModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnItemData(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ItemData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_SetItemData(QStandardItemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QStandardItemModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseSetItemData(QStandardItemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SetItemData_IsBase(true);
        return vqstandarditemmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QStandardItemModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetItemData(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SetItemData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_Sort(QStandardItemModel* self, int column, int order) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QStandardItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseSort(QStandardItemModel* self, int column, int order) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Sort_IsBase(true);
        vqstandarditemmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QStandardItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSort(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Sort_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QStandardItemModel_MimeTypes(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        QStringList _ret = vqstandarditemmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = self->QStandardItemModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QStandardItemModel_QBaseMimeTypes(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MimeTypes_IsBase(true);
        QStringList _ret = vqstandarditemmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = self->QStandardItemModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMimeTypes(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MimeTypes_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QStandardItemModel_MimeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->mimeData(indexes_QList);
    } else {
        return self->QStandardItemModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QStandardItemModel_QBaseMimeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MimeData_IsBase(true);
        return vqstandarditemmodel->mimeData(indexes_QList);
    } else {
        return self->QStandardItemModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMimeData(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MimeData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_DropMimeData(QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QStandardItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseDropMimeData(QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_DropMimeData_IsBase(true);
        return vqstandarditemmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QStandardItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnDropMimeData(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_DropMimeData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStandardItemModel_Sibling(const QStandardItemModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return new QModelIndex(vqstandarditemmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQStandardItemModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QStandardItemModel_QBaseSibling(const QStandardItemModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Sibling_IsBase(true);
        return new QModelIndex(vqstandarditemmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQStandardItemModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSibling(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Sibling_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_CanDropMimeData(const QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QStandardItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseCanDropMimeData(const QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_CanDropMimeData_IsBase(true);
        return vqstandarditemmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QStandardItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnCanDropMimeData(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QStandardItemModel_SupportedDragActions(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return static_cast<int>(vqstandarditemmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QStandardItemModel::supportedDragActions());
    }
}

// Base class handler implementation
int QStandardItemModel_QBaseSupportedDragActions(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqstandarditemmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QStandardItemModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSupportedDragActions(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_MoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QStandardItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseMoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MoveRows_IsBase(true);
        return vqstandarditemmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QStandardItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMoveRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MoveRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_MoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QStandardItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseMoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MoveColumns_IsBase(true);
        return vqstandarditemmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QStandardItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMoveColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_MoveColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_FetchMore(QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->fetchMore(*parent);
    } else {
        self->QStandardItemModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseFetchMore(QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_FetchMore_IsBase(true);
        vqstandarditemmodel->fetchMore(*parent);
    } else {
        self->QStandardItemModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnFetchMore(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_FetchMore_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_CanFetchMore(const QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->canFetchMore(*parent);
    } else {
        return self->QStandardItemModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseCanFetchMore(const QStandardItemModel* self, const QModelIndex* parent) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_CanFetchMore_IsBase(true);
        return vqstandarditemmodel->canFetchMore(*parent);
    } else {
        return self->QStandardItemModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnCanFetchMore(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_CanFetchMore_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStandardItemModel_Buddy(const QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return new QModelIndex(vqstandarditemmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQStandardItemModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QStandardItemModel_QBaseBuddy(const QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Buddy_IsBase(true);
        return new QModelIndex(vqstandarditemmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQStandardItemModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBuddy(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Buddy_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QStandardItemModel_Match(const QStandardItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        QModelIndexList _ret = vqstandarditemmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = self->QStandardItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QStandardItemModel_QBaseMatch(const QStandardItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Match_IsBase(true);
        QModelIndexList _ret = vqstandarditemmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = self->QStandardItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMatch(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Match_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStandardItemModel_Span(const QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return new QSize(vqstandarditemmodel->span(*index));
    } else {
        return new QSize(((VirtualQStandardItemModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QStandardItemModel_QBaseSpan(const QStandardItemModel* self, const QModelIndex* index) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Span_IsBase(true);
        return new QSize(vqstandarditemmodel->span(*index));
    } else {
        return new QSize(((VirtualQStandardItemModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSpan(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Span_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_Submit(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->submit();
    } else {
        return self->QStandardItemModel::submit();
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseSubmit(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Submit_IsBase(true);
        return vqstandarditemmodel->submit();
    } else {
        return self->QStandardItemModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSubmit(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Submit_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_Revert(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->revert();
    } else {
        self->QStandardItemModel::revert();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseRevert(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Revert_IsBase(true);
        vqstandarditemmodel->revert();
    } else {
        self->QStandardItemModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRevert(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Revert_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_ResetInternalData(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->resetInternalData();
    } else {
        ((VirtualQStandardItemModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseResetInternalData(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ResetInternalData_IsBase(true);
        vqstandarditemmodel->resetInternalData();
    } else {
        ((VirtualQStandardItemModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnResetInternalData(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ResetInternalData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_Event(QStandardItemModel* self, QEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->event(event);
    } else {
        return self->QStandardItemModel::event(event);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseEvent(QStandardItemModel* self, QEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Event_IsBase(true);
        return vqstandarditemmodel->event(event);
    } else {
        return self->QStandardItemModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEvent(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Event_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_EventFilter(QStandardItemModel* self, QObject* watched, QEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->eventFilter(watched, event);
    } else {
        return self->QStandardItemModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseEventFilter(QStandardItemModel* self, QObject* watched, QEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EventFilter_IsBase(true);
        return vqstandarditemmodel->eventFilter(watched, event);
    } else {
        return self->QStandardItemModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEventFilter(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EventFilter_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_TimerEvent(QStandardItemModel* self, QTimerEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->timerEvent(event);
    } else {
        ((VirtualQStandardItemModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseTimerEvent(QStandardItemModel* self, QTimerEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_TimerEvent_IsBase(true);
        vqstandarditemmodel->timerEvent(event);
    } else {
        ((VirtualQStandardItemModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnTimerEvent(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_TimerEvent_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_ChildEvent(QStandardItemModel* self, QChildEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->childEvent(event);
    } else {
        ((VirtualQStandardItemModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseChildEvent(QStandardItemModel* self, QChildEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ChildEvent_IsBase(true);
        vqstandarditemmodel->childEvent(event);
    } else {
        ((VirtualQStandardItemModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnChildEvent(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ChildEvent_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_CustomEvent(QStandardItemModel* self, QEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->customEvent(event);
    } else {
        ((VirtualQStandardItemModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseCustomEvent(QStandardItemModel* self, QEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_CustomEvent_IsBase(true);
        vqstandarditemmodel->customEvent(event);
    } else {
        ((VirtualQStandardItemModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnCustomEvent(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_CustomEvent_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_ConnectNotify(QStandardItemModel* self, const QMetaMethod* signal) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->connectNotify(*signal);
    } else {
        ((VirtualQStandardItemModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseConnectNotify(QStandardItemModel* self, const QMetaMethod* signal) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ConnectNotify_IsBase(true);
        vqstandarditemmodel->connectNotify(*signal);
    } else {
        ((VirtualQStandardItemModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnConnectNotify(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ConnectNotify_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_DisconnectNotify(QStandardItemModel* self, const QMetaMethod* signal) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQStandardItemModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseDisconnectNotify(QStandardItemModel* self, const QMetaMethod* signal) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_DisconnectNotify_IsBase(true);
        vqstandarditemmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQStandardItemModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnDisconnectNotify(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStandardItemModel_CreateIndex(const QStandardItemModel* self, int row, int column) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return new QModelIndex(vqstandarditemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QStandardItemModel_QBaseCreateIndex(const QStandardItemModel* self, int row, int column) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqstandarditemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnCreateIndex(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_CreateIndex_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_EncodeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQStandardItemModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseEncodeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EncodeData_IsBase(true);
        vqstandarditemmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQStandardItemModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEncodeData(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EncodeData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_DecodeData(QStandardItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQStandardItemModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseDecodeData(QStandardItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_DecodeData_IsBase(true);
        return vqstandarditemmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQStandardItemModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnDecodeData(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_DecodeData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_BeginInsertRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStandardItemModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseBeginInsertRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginInsertRows_IsBase(true);
        vqstandarditemmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStandardItemModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBeginInsertRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_EndInsertRows(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->endInsertRows();
    } else {
        ((VirtualQStandardItemModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseEndInsertRows(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndInsertRows_IsBase(true);
        vqstandarditemmodel->endInsertRows();
    } else {
        ((VirtualQStandardItemModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEndInsertRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndInsertRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_BeginRemoveRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStandardItemModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseBeginRemoveRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginRemoveRows_IsBase(true);
        vqstandarditemmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStandardItemModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBeginRemoveRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_EndRemoveRows(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->endRemoveRows();
    } else {
        ((VirtualQStandardItemModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseEndRemoveRows(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndRemoveRows_IsBase(true);
        vqstandarditemmodel->endRemoveRows();
    } else {
        ((VirtualQStandardItemModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEndRemoveRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_BeginMoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQStandardItemModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseBeginMoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginMoveRows_IsBase(true);
        return vqstandarditemmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQStandardItemModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBeginMoveRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_EndMoveRows(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->endMoveRows();
    } else {
        ((VirtualQStandardItemModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseEndMoveRows(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndMoveRows_IsBase(true);
        vqstandarditemmodel->endMoveRows();
    } else {
        ((VirtualQStandardItemModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEndMoveRows(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndMoveRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_BeginInsertColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStandardItemModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseBeginInsertColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginInsertColumns_IsBase(true);
        vqstandarditemmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStandardItemModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBeginInsertColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_EndInsertColumns(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->endInsertColumns();
    } else {
        ((VirtualQStandardItemModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseEndInsertColumns(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndInsertColumns_IsBase(true);
        vqstandarditemmodel->endInsertColumns();
    } else {
        ((VirtualQStandardItemModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEndInsertColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_BeginRemoveColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStandardItemModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseBeginRemoveColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginRemoveColumns_IsBase(true);
        vqstandarditemmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStandardItemModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBeginRemoveColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_EndRemoveColumns(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->endRemoveColumns();
    } else {
        ((VirtualQStandardItemModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseEndRemoveColumns(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndRemoveColumns_IsBase(true);
        vqstandarditemmodel->endRemoveColumns();
    } else {
        ((VirtualQStandardItemModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEndRemoveColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_BeginMoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQStandardItemModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseBeginMoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginMoveColumns_IsBase(true);
        return vqstandarditemmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQStandardItemModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBeginMoveColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_EndMoveColumns(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->endMoveColumns();
    } else {
        ((VirtualQStandardItemModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseEndMoveColumns(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndMoveColumns_IsBase(true);
        vqstandarditemmodel->endMoveColumns();
    } else {
        ((VirtualQStandardItemModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEndMoveColumns(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_BeginResetModel(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->beginResetModel();
    } else {
        ((VirtualQStandardItemModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseBeginResetModel(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginResetModel_IsBase(true);
        vqstandarditemmodel->beginResetModel();
    } else {
        ((VirtualQStandardItemModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBeginResetModel(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_BeginResetModel_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_EndResetModel(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->endResetModel();
    } else {
        ((VirtualQStandardItemModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseEndResetModel(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndResetModel_IsBase(true);
        vqstandarditemmodel->endResetModel();
    } else {
        ((VirtualQStandardItemModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEndResetModel(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_EndResetModel_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_ChangePersistentIndex(QStandardItemModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQStandardItemModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseChangePersistentIndex(QStandardItemModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ChangePersistentIndex_IsBase(true);
        vqstandarditemmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQStandardItemModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnChangePersistentIndex(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QStandardItemModel_ChangePersistentIndexList(QStandardItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    QModelIndexList from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QModelIndexList to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQStandardItemModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QStandardItemModel_QBaseChangePersistentIndexList(QStandardItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    QModelIndexList from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QModelIndexList to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ChangePersistentIndexList_IsBase(true);
        vqstandarditemmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQStandardItemModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnChangePersistentIndexList(QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QStandardItemModel_PersistentIndexList(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        QModelIndexList _ret = vqstandarditemmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = ((VirtualQStandardItemModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QStandardItemModel_QBasePersistentIndexList(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_PersistentIndexList_IsBase(true);
        QModelIndexList _ret = vqstandarditemmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = ((VirtualQStandardItemModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnPersistentIndexList(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStandardItemModel_Sender(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->sender();
    } else {
        return ((VirtualQStandardItemModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStandardItemModel_QBaseSender(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Sender_IsBase(true);
        return vqstandarditemmodel->sender();
    } else {
        return ((VirtualQStandardItemModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSender(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Sender_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStandardItemModel_SenderSignalIndex(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->senderSignalIndex();
    } else {
        return ((VirtualQStandardItemModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStandardItemModel_QBaseSenderSignalIndex(const QStandardItemModel* self) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SenderSignalIndex_IsBase(true);
        return vqstandarditemmodel->senderSignalIndex();
    } else {
        return ((VirtualQStandardItemModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSenderSignalIndex(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStandardItemModel_Receivers(const QStandardItemModel* self, const char* signal) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->receivers(signal);
    } else {
        return ((VirtualQStandardItemModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStandardItemModel_QBaseReceivers(const QStandardItemModel* self, const char* signal) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Receivers_IsBase(true);
        return vqstandarditemmodel->receivers(signal);
    } else {
        return ((VirtualQStandardItemModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnReceivers(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_Receivers_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStandardItemModel_IsSignalConnected(const QStandardItemModel* self, const QMetaMethod* signal) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        return vqstandarditemmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQStandardItemModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStandardItemModel_QBaseIsSignalConnected(const QStandardItemModel* self, const QMetaMethod* signal) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_IsSignalConnected_IsBase(true);
        return vqstandarditemmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQStandardItemModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnIsSignalConnected(const QStandardItemModel* self, intptr_t slot) {
    auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self));
    if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
        vqstandarditemmodel->setQStandardItemModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_IsSignalConnected_Callback>(slot));
    }
}

void QStandardItemModel_Delete(QStandardItemModel* self) {
    delete self;
}
