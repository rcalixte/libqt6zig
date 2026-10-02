#include <QAbstractItemModel>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QFont>
#include <QHash>
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

QVariant* QStandardItem_Data(const QStandardItem* self, int role) {
    return new QVariant(self->data(static_cast<int>(role)));
}

void QStandardItem_MultiData(const QStandardItem* self, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*roleDataSpan);
}

void QStandardItem_SetData(QStandardItem* self, const QVariant* value, int role) {
    self->setData(*value, static_cast<int>(role));
}

void QStandardItem_ClearData(QStandardItem* self) {
    self->clearData();
}

libqt_string QStandardItem_Text(const QStandardItem* self) {
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

void QStandardItem_SetToolTip(QStandardItem* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QStandardItem_StatusTip(const QStandardItem* self) {
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

void QStandardItem_SetStatusTip(QStandardItem* self, const libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QStandardItem_WhatsThis(const QStandardItem* self) {
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
    auto _ret = self->accessibleText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStandardItem_SetAccessibleText(QStandardItem* self, const libqt_string accessibleText) {
    QString accessibleText_QString = QString::fromUtf8(accessibleText.data, accessibleText.len);
    self->setAccessibleText(accessibleText_QString);
}

libqt_string QStandardItem_AccessibleDescription(const QStandardItem* self) {
    auto _ret = self->accessibleDescription();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

void QStandardItem_AppendRow2(QStandardItem* self, QStandardItem* item) {
    self->appendRow(item);
}

QStandardItem* QStandardItem_TakeChild(QStandardItem* self, int row) {
    return self->takeChild(static_cast<int>(row));
}

libqt_list /* of QStandardItem* */ QStandardItem_TakeRow(QStandardItem* self, int row) {
    QList<QStandardItem*> _ret = self->takeRow(static_cast<int>(row));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QStandardItem* */ QStandardItem_TakeColumn(QStandardItem* self, int column) {
    QList<QStandardItem*> _ret = self->takeColumn(static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QStandardItem_SortChildren(QStandardItem* self, int column) {
    self->sortChildren(static_cast<int>(column));
}

QStandardItem* QStandardItem_Clone(const QStandardItem* self) {
    return self->clone();
}

int QStandardItem_Type(const QStandardItem* self) {
    return self->type();
}

void QStandardItem_Read(QStandardItem* self, QDataStream* in) {
    self->read(*in);
}

void QStandardItem_Write(const QStandardItem* self, QDataStream* out) {
    self->write(*out);
}

bool QStandardItem_OperatorLesser(const QStandardItem* self, const QStandardItem* other) {
    return self->operator<(*other);
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

// Base class handler implementation
QVariant* QStandardItem_SuperData(const QStandardItem* self, int role) {
    return new QVariant(self->QStandardItem::data(static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnData(QStandardItem* self, intptr_t slot) {
    if (auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self)))
        vqstandarditem->qstandarditem_data_callback = reinterpret_cast<VirtualQStandardItem::QStandardItem_Data_Callback>(slot);
}

// Base class handler implementation
void QStandardItem_SuperMultiData(const QStandardItem* self, QModelRoleDataSpan* roleDataSpan) {
    self->QStandardItem::multiData(*roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnMultiData(QStandardItem* self, intptr_t slot) {
    if (auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self)))
        vqstandarditem->qstandarditem_multidata_callback = reinterpret_cast<VirtualQStandardItem::QStandardItem_MultiData_Callback>(slot);
}

// Base class handler implementation
void QStandardItem_SuperSetData(QStandardItem* self, const QVariant* value, int role) {
    self->QStandardItem::setData(*value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnSetData(QStandardItem* self, intptr_t slot) {
    if (auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self))
        vqstandarditem->qstandarditem_setdata_callback = reinterpret_cast<VirtualQStandardItem::QStandardItem_SetData_Callback>(slot);
}

// Base class handler implementation
QStandardItem* QStandardItem_SuperClone(const QStandardItem* self) {
    return self->QStandardItem::clone();
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnClone(QStandardItem* self, intptr_t slot) {
    if (auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self)))
        vqstandarditem->qstandarditem_clone_callback = reinterpret_cast<VirtualQStandardItem::QStandardItem_Clone_Callback>(slot);
}

// Base class handler implementation
int QStandardItem_SuperType(const QStandardItem* self) {
    return self->QStandardItem::type();
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnType(QStandardItem* self, intptr_t slot) {
    if (auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self)))
        vqstandarditem->qstandarditem_type_callback = reinterpret_cast<VirtualQStandardItem::QStandardItem_Type_Callback>(slot);
}

// Base class handler implementation
void QStandardItem_SuperRead(QStandardItem* self, QDataStream* in) {
    self->QStandardItem::read(*in);
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnRead(QStandardItem* self, intptr_t slot) {
    if (auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self))
        vqstandarditem->qstandarditem_read_callback = reinterpret_cast<VirtualQStandardItem::QStandardItem_Read_Callback>(slot);
}

// Base class handler implementation
void QStandardItem_SuperWrite(const QStandardItem* self, QDataStream* out) {
    self->QStandardItem::write(*out);
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnWrite(QStandardItem* self, intptr_t slot) {
    if (auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self)))
        vqstandarditem->qstandarditem_write_callback = reinterpret_cast<VirtualQStandardItem::QStandardItem_Write_Callback>(slot);
}

// Base class handler implementation
bool QStandardItem_SuperOperatorLesser(const QStandardItem* self, const QStandardItem* other) {
    return self->QStandardItem::operator<(*other);
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnOperatorLesser(QStandardItem* self, intptr_t slot) {
    if (auto* vqstandarditem = const_cast<VirtualQStandardItem*>(dynamic_cast<const VirtualQStandardItem*>(self)))
        vqstandarditem->qstandarditem_operatorlesser_callback = reinterpret_cast<VirtualQStandardItem::QStandardItem_OperatorLesser_Callback>(slot);
}

// Derived class protected handler implementation
void QStandardItem_EmitDataChanged(QStandardItem* self) {
    if (auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self)) {
        vqstandarditem->VirtualQStandardItem::emitDataChanged();
    } else
        qFatal("Error: Protected method QStandardItem::emitDataChanged called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStandardItemModel_Tr(const char* s) {
    auto _ret = QStandardItemModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStandardItemModel_SetItemRoleNames(QStandardItemModel* self, const libqt_map /* of int to libqt_string */ roleNames) {
    QHash<int, QByteArray> roleNames_QHash;
    roleNames_QHash.reserve(roleNames.len);
    int* roleNames_karr = static_cast<int*>(roleNames.keys);
    libqt_string* roleNames_varr = static_cast<libqt_string*>(roleNames.values);
    for (size_t i = 0; i < roleNames.len; ++i) {
        QByteArray roleNames_varr_i_QByteArray(roleNames_varr[i].data, roleNames_varr[i].len);
        roleNames_QHash.insert(static_cast<int>(roleNames_karr[i]), roleNames_varr_i_QByteArray);
    }
    self->setItemRoleNames(roleNames_QHash);
}

libqt_map /* of int to libqt_string */ QStandardItemModel_RoleNames(const QStandardItemModel* self) {
    QHash<int, QByteArray> _ret = self->roleNames();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

QModelIndex* QStandardItemModel_Index(const QStandardItemModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QStandardItemModel_Parent(const QStandardItemModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

int QStandardItemModel_RowCount(const QStandardItemModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int QStandardItemModel_ColumnCount(const QStandardItemModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

bool QStandardItemModel_HasChildren(const QStandardItemModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

QVariant* QStandardItemModel_Data(const QStandardItemModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

void QStandardItemModel_MultiData(const QStandardItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

bool QStandardItemModel_SetData(QStandardItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

bool QStandardItemModel_ClearItemData(QStandardItemModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

QVariant* QStandardItemModel_HeaderData(const QStandardItemModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QStandardItemModel_SetHeaderData(QStandardItemModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QStandardItemModel_InsertRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStandardItemModel_InsertColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QStandardItemModel_RemoveRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStandardItemModel_RemoveColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

int QStandardItemModel_Flags(const QStandardItemModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

int QStandardItemModel_SupportedDropActions(const QStandardItemModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

libqt_map /* of int to QVariant* */ QStandardItemModel_ItemData(const QStandardItemModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->itemData(*index);
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

bool QStandardItemModel_SetItemData(QStandardItemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

void QStandardItemModel_Clear(QStandardItemModel* self) {
    self->clear();
}

void QStandardItemModel_Sort(QStandardItemModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
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
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setHorizontalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetVerticalHeaderLabels(QStandardItemModel* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
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

void QStandardItemModel_AppendRow2(QStandardItemModel* self, QStandardItem* item) {
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

bool QStandardItemModel_InsertRow3(QStandardItemModel* self, int row) {
    return self->insertRow(static_cast<int>(row));
}

bool QStandardItemModel_InsertColumn2(QStandardItemModel* self, int column) {
    return self->insertColumn(static_cast<int>(column));
}

QStandardItem* QStandardItemModel_TakeItem(QStandardItemModel* self, int row) {
    return self->takeItem(static_cast<int>(row));
}

libqt_list /* of QStandardItem* */ QStandardItemModel_TakeRow(QStandardItemModel* self, int row) {
    QList<QStandardItem*> _ret = self->takeRow(static_cast<int>(row));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QStandardItem* */ QStandardItemModel_TakeColumn(QStandardItemModel* self, int column) {
    QList<QStandardItem*> _ret = self->takeColumn(static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
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
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QStandardItemModel_SortRole(const QStandardItemModel* self) {
    return self->sortRole();
}

void QStandardItemModel_SetSortRole(QStandardItemModel* self, int role) {
    self->setSortRole(static_cast<int>(role));
}

libqt_list /* of libqt_string */ QStandardItemModel_MimeTypes(const QStandardItemModel* self) {
    QList<QString> _ret = self->mimeTypes();
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

QMimeData* QStandardItemModel_MimeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

bool QStandardItemModel_DropMimeData(QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

void QStandardItemModel_ItemChanged(QStandardItemModel* self, QStandardItem* item) {
    self->itemChanged(item);
}

void QStandardItemModel_Connect_ItemChanged(QStandardItemModel* self, intptr_t slot) {
    void (*slotFunc)(QStandardItemModel*, QStandardItem*) = reinterpret_cast<void (*)(QStandardItemModel*, QStandardItem*)>(slot);
    QStandardItemModel::connect(self,
                                static_cast<void (QStandardItemModel::*)(QStandardItem*)>(&QStandardItemModel::itemChanged),
                                [self, slotFunc](QStandardItem* item) {
                                    QStandardItem* sigval1 = item;
                                    slotFunc(self, sigval1);
                                });
}

libqt_string QStandardItemModel_Tr2(const char* s, const char* c) {
    auto _ret = QStandardItemModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStandardItemModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QStandardItemModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QStandardItem* QStandardItemModel_Item2(const QStandardItemModel* self, int row, int column) {
    return self->item(static_cast<int>(row), static_cast<int>(column));
}

bool QStandardItemModel_InsertRow22(QStandardItemModel* self, int row, const QModelIndex* parent) {
    return self->insertRow(static_cast<int>(row), *parent);
}

bool QStandardItemModel_InsertColumn22(QStandardItemModel* self, int column, const QModelIndex* parent) {
    return self->insertColumn(static_cast<int>(column), *parent);
}

QStandardItem* QStandardItemModel_TakeItem2(QStandardItemModel* self, int row, int column) {
    return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

libqt_list /* of QStandardItem* */ QStandardItemModel_FindItems2(const QStandardItemModel* self, const libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QStandardItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QStandardItem* */ QStandardItemModel_FindItems3(const QStandardItemModel* self, const libqt_string text, int flags, int column) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QStandardItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
QMetaObject* QStandardItemModel_SuperMetaObject(const QStandardItemModel* self) {
    return (QMetaObject*)self->QStandardItemModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMetaObject(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_metaobject_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStandardItemModel_SuperMetacast(QStandardItemModel* self, const char* param1) {
    return self->QStandardItemModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMetacast(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_metacast_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStandardItemModel_SuperMetacall(QStandardItemModel* self, int param1, int param2, void** param3) {
    return self->QStandardItemModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMetacall(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_metacall_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QStandardItemModel_SuperRoleNames(const QStandardItemModel* self) {
    QHash<int, QByteArray> _ret = self->QStandardItemModel::roleNames();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRoleNames(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_rolenames_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QStandardItemModel_SuperIndex(const QStandardItemModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QStandardItemModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnIndex(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_index_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QStandardItemModel_SuperParent(const QStandardItemModel* self, const QModelIndex* child) {
    return new QModelIndex(self->QStandardItemModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnParent(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_parent_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Parent_Callback>(slot);
}

// Base class handler implementation
int QStandardItemModel_SuperRowCount(const QStandardItemModel* self, const QModelIndex* parent) {
    return self->QStandardItemModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRowCount(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_rowcount_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RowCount_Callback>(slot);
}

// Base class handler implementation
int QStandardItemModel_SuperColumnCount(const QStandardItemModel* self, const QModelIndex* parent) {
    return self->QStandardItemModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnColumnCount(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_columncount_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperHasChildren(const QStandardItemModel* self, const QModelIndex* parent) {
    return self->QStandardItemModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnHasChildren(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_haschildren_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
QVariant* QStandardItemModel_SuperData(const QStandardItemModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->QStandardItemModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_data_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Data_Callback>(slot);
}

// Base class handler implementation
void QStandardItemModel_SuperMultiData(const QStandardItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QStandardItemModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMultiData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_multidata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MultiData_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperSetData(QStandardItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QStandardItemModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_setdata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetData_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperClearItemData(QStandardItemModel* self, const QModelIndex* index) {
    return self->QStandardItemModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnClearItemData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_clearitemdata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ClearItemData_Callback>(slot);
}

// Base class handler implementation
QVariant* QStandardItemModel_SuperHeaderData(const QStandardItemModel* self, int section, int orientation, int role) {
    return new QVariant(self->QStandardItemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnHeaderData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_headerdata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperSetHeaderData(QStandardItemModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QStandardItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetHeaderData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_setheaderdata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetHeaderData_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperInsertRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
    return self->QStandardItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnInsertRows(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_insertrows_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_InsertRows_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperInsertColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
    return self->QStandardItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnInsertColumns(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_insertcolumns_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_InsertColumns_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperRemoveRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
    return self->QStandardItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRemoveRows(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_removerows_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RemoveRows_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperRemoveColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
    return self->QStandardItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRemoveColumns(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_removecolumns_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RemoveColumns_Callback>(slot);
}

// Base class handler implementation
int QStandardItemModel_SuperFlags(const QStandardItemModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QStandardItemModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnFlags(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_flags_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Flags_Callback>(slot);
}

// Base class handler implementation
int QStandardItemModel_SuperSupportedDropActions(const QStandardItemModel* self) {
    return static_cast<int>(self->QStandardItemModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSupportedDropActions(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_supporteddropactions_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QStandardItemModel_SuperItemData(const QStandardItemModel* self, const QModelIndex* index) {
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

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnItemData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_itemdata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ItemData_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperSetItemData(QStandardItemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QStandardItemModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetItemData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_setitemdata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetItemData_Callback>(slot);
}

// Base class handler implementation
void QStandardItemModel_SuperSort(QStandardItemModel* self, int column, int order) {
    self->QStandardItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSort(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_sort_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Sort_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QStandardItemModel_SuperMimeTypes(const QStandardItemModel* self) {
    QList<QString> _ret = self->QStandardItemModel::mimeTypes();
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

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMimeTypes(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_mimetypes_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QMimeData* QStandardItemModel_SuperMimeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QStandardItemModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMimeData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_mimedata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QStandardItemModel_SuperDropMimeData(QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QStandardItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnDropMimeData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_dropmimedata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QStandardItemModel_Sibling(const QStandardItemModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QStandardItemModel_SuperSibling(const QStandardItemModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QStandardItemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSibling(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_sibling_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool QStandardItemModel_CanDropMimeData(const QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QStandardItemModel_SuperCanDropMimeData(const QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QStandardItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnCanDropMimeData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_candropmimedata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QStandardItemModel_SupportedDragActions(const QStandardItemModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QStandardItemModel_SuperSupportedDragActions(const QStandardItemModel* self) {
    return static_cast<int>(self->QStandardItemModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSupportedDragActions(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_supporteddragactions_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QStandardItemModel_MoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QStandardItemModel_SuperMoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QStandardItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMoveRows(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_moverows_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QStandardItemModel_MoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QStandardItemModel_SuperMoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QStandardItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMoveColumns(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_movecolumns_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QStandardItemModel_FetchMore(QStandardItemModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QStandardItemModel_SuperFetchMore(QStandardItemModel* self, const QModelIndex* parent) {
    self->QStandardItemModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnFetchMore(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_fetchmore_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QStandardItemModel_CanFetchMore(const QStandardItemModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QStandardItemModel_SuperCanFetchMore(const QStandardItemModel* self, const QModelIndex* parent) {
    return self->QStandardItemModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnCanFetchMore(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_canfetchmore_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QStandardItemModel_Buddy(const QStandardItemModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QStandardItemModel_SuperBuddy(const QStandardItemModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QStandardItemModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnBuddy(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_buddy_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QStandardItemModel_Match(const QStandardItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QStandardItemModel_SuperMatch(const QStandardItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QStandardItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMatch(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_match_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QStandardItemModel_Span(const QStandardItemModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QStandardItemModel_SuperSpan(const QStandardItemModel* self, const QModelIndex* index) {
    return new QSize(self->QStandardItemModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSpan(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        vqstandarditemmodel->qstandarditemmodel_span_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Span_Callback>(slot);
}

// Derived class handler implementation
bool QStandardItemModel_Submit(QStandardItemModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QStandardItemModel_SuperSubmit(QStandardItemModel* self) {
    return self->QStandardItemModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSubmit(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_submit_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QStandardItemModel_Revert(QStandardItemModel* self) {
    self->revert();
}

// Base class handler implementation
void QStandardItemModel_SuperRevert(QStandardItemModel* self) {
    self->QStandardItemModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRevert(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_revert_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QStandardItemModel_ResetInternalData(QStandardItemModel* self) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel) {
        vqstandarditemmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QStandardItemModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QStandardItemModel_SuperResetInternalData(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->QStandardItemModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QStandardItemModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnResetInternalData(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_resetinternaldata_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QStandardItemModel_Event(QStandardItemModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QStandardItemModel_SuperEvent(QStandardItemModel* self, QEvent* event) {
    return self->QStandardItemModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEvent(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_event_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QStandardItemModel_EventFilter(QStandardItemModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QStandardItemModel_SuperEventFilter(QStandardItemModel* self, QObject* watched, QEvent* event) {
    return self->QStandardItemModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnEventFilter(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_eventfilter_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QStandardItemModel_TimerEvent(QStandardItemModel* self, QTimerEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel) {
        vqstandarditemmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStandardItemModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStandardItemModel_SuperTimerEvent(QStandardItemModel* self, QTimerEvent* event) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->QStandardItemModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStandardItemModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnTimerEvent(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_timerevent_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStandardItemModel_ChildEvent(QStandardItemModel* self, QChildEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel) {
        vqstandarditemmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStandardItemModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStandardItemModel_SuperChildEvent(QStandardItemModel* self, QChildEvent* event) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->QStandardItemModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStandardItemModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnChildEvent(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_childevent_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStandardItemModel_CustomEvent(QStandardItemModel* self, QEvent* event) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel) {
        vqstandarditemmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStandardItemModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStandardItemModel_SuperCustomEvent(QStandardItemModel* self, QEvent* event) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->QStandardItemModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStandardItemModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnCustomEvent(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_customevent_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStandardItemModel_ConnectNotify(QStandardItemModel* self, const QMetaMethod* signal) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel) {
        vqstandarditemmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStandardItemModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStandardItemModel_SuperConnectNotify(QStandardItemModel* self, const QMetaMethod* signal) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->QStandardItemModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStandardItemModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnConnectNotify(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_connectnotify_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStandardItemModel_DisconnectNotify(QStandardItemModel* self, const QMetaMethod* signal) {
    auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
    if (vqstandarditemmodel) {
        vqstandarditemmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStandardItemModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStandardItemModel_SuperDisconnectNotify(QStandardItemModel* self, const QMetaMethod* signal) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->QStandardItemModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStandardItemModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnDisconnectNotify(QStandardItemModel* self, intptr_t slot) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self))
        vqstandarditemmodel->qstandarditemmodel_disconnectnotify_callback = reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QStandardItemModel_CreateIndex(const QStandardItemModel* self, int row, int column) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self)))
        return new QModelIndex(vqstandarditemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QStandardItemModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_EncodeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqstandarditemmodel->VirtualQStandardItemModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QStandardItemModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStandardItemModel_DecodeData(QStandardItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        return vqstandarditemmodel->VirtualQStandardItemModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QStandardItemModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_BeginInsertRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QStandardItemModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_EndInsertRows(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::endInsertRows();
    } else
        qFatal("Error: Protected method QStandardItemModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_BeginRemoveRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QStandardItemModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_EndRemoveRows(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QStandardItemModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStandardItemModel_BeginMoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        return vqstandarditemmodel->VirtualQStandardItemModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QStandardItemModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_EndMoveRows(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::endMoveRows();
    } else
        qFatal("Error: Protected method QStandardItemModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_BeginInsertColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QStandardItemModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_EndInsertColumns(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QStandardItemModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_BeginRemoveColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QStandardItemModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_EndRemoveColumns(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QStandardItemModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStandardItemModel_BeginMoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        return vqstandarditemmodel->VirtualQStandardItemModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QStandardItemModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_EndMoveColumns(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QStandardItemModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_BeginResetModel(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::beginResetModel();
    } else
        qFatal("Error: Protected method QStandardItemModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_EndResetModel(QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::endResetModel();
    } else
        qFatal("Error: Protected method QStandardItemModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_ChangePersistentIndex(QStandardItemModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        vqstandarditemmodel->VirtualQStandardItemModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QStandardItemModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QStandardItemModel_ChangePersistentIndexList(QStandardItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self)) {
        QList<QModelIndex> from_QList;
        from_QList.reserve(from.len);
        QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
        for (size_t i = 0; i < from.len; ++i) {
            from_QList.push_back(*(from_arr[i]));
        }
        QList<QModelIndex> to_QList;
        to_QList.reserve(to.len);
        QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
        for (size_t i = 0; i < to.len; ++i) {
            to_QList.push_back(*(to_arr[i]));
        }
        vqstandarditemmodel->VirtualQStandardItemModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QStandardItemModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QStandardItemModel_PersistentIndexList(const QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self))) {
        QList<QModelIndex> _ret = vqstandarditemmodel->VirtualQStandardItemModel::persistentIndexList();
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
        qFatal("Error: Protected method QStandardItemModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QStandardItemModel_Sender(const QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self))) {
        return vqstandarditemmodel->VirtualQStandardItemModel::sender();
    } else
        qFatal("Error: Protected method QStandardItemModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStandardItemModel_SenderSignalIndex(const QStandardItemModel* self) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self))) {
        return vqstandarditemmodel->VirtualQStandardItemModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStandardItemModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStandardItemModel_Receivers(const QStandardItemModel* self, const char* signal) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self))) {
        return vqstandarditemmodel->VirtualQStandardItemModel::receivers(signal);
    } else
        qFatal("Error: Protected method QStandardItemModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStandardItemModel_IsSignalConnected(const QStandardItemModel* self, const QMetaMethod* signal) {
    if (auto* vqstandarditemmodel = const_cast<VirtualQStandardItemModel*>(dynamic_cast<const VirtualQStandardItemModel*>(self))) {
        return vqstandarditemmodel->VirtualQStandardItemModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStandardItemModel::isSignalConnected called without a directly constructed type");
}

void QStandardItemModel_Delete(QStandardItemModel* self) {
    delete self;
}
