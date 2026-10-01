#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QItemSelection>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QTransposeProxyModel>
#include <QVariant>
#include <qtransposeproxymodel.h>
#include "libqtransposeproxymodel.h"
#include "libqtransposeproxymodel.hxx"

QTransposeProxyModel* QTransposeProxyModel_new() {
    return new VirtualQTransposeProxyModel();
}

QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent) {
    return new VirtualQTransposeProxyModel(parent);
}

QMetaObject* QTransposeProxyModel_MetaObject(const QTransposeProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTransposeProxyModel_Metacast(QTransposeProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTransposeProxyModel_Metacall(QTransposeProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTransposeProxyModel_Tr(const char* s) {
    auto _ret = QTransposeProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
    self->setSourceModel(newSourceModel);
}

int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

libqt_map /* of int to QVariant* */ QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, const QModelIndex* index) {
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

QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->parent(*index));
}

QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

libqt_string QTransposeProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = QTransposeProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTransposeProxyModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QTransposeProxyModel_SuperMetaObject(const QTransposeProxyModel* self) {
    return (QMetaObject*)self->QTransposeProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMetaObject(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_metaobject_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTransposeProxyModel_SuperMetacast(QTransposeProxyModel* self, const char* param1) {
    return self->QTransposeProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMetacast(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_metacast_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTransposeProxyModel_SuperMetacall(QTransposeProxyModel* self, int param1, int param2, void** param3) {
    return self->QTransposeProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMetacall(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_metacall_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void QTransposeProxyModel_SuperSetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
    self->QTransposeProxyModel::setSourceModel(newSourceModel);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSetSourceModel(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetSourceModel_Callback>(slot);
}

// Base class handler implementation
int QTransposeProxyModel_SuperRowCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
    return self->QTransposeProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnRowCount(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_rowcount_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RowCount_Callback>(slot);
}

// Base class handler implementation
int QTransposeProxyModel_SuperColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
    return self->QTransposeProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnColumnCount(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_columncount_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
QVariant* QTransposeProxyModel_SuperHeaderData(const QTransposeProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->QTransposeProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnHeaderData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_headerdata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperSetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QTransposeProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSetHeaderData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_setheaderdata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetHeaderData_Callback>(slot);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperSetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QTransposeProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSetItemData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_setitemdata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetItemData_Callback>(slot);
}

// Base class handler implementation
QSize* QTransposeProxyModel_SuperSpan(const QTransposeProxyModel* self, const QModelIndex* index) {
    return new QSize(self->QTransposeProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSpan(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_span_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Span_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QTransposeProxyModel_SuperItemData(const QTransposeProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QTransposeProxyModel::itemData(*index);
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
void QTransposeProxyModel_OnItemData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_itemdata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ItemData_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_SuperMapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->QTransposeProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMapFromSource(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_mapfromsource_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapFromSource_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_SuperMapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->QTransposeProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMapToSource(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_maptosource_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapToSource_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_SuperParent(const QTransposeProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QTransposeProxyModel::parent(*index));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnParent(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_parent_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Parent_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_SuperIndex(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QTransposeProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnIndex(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_index_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Index_Callback>(slot);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperInsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QTransposeProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnInsertRows(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_insertrows_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_InsertRows_Callback>(slot);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperRemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QTransposeProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnRemoveRows(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_removerows_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RemoveRows_Callback>(slot);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QTransposeProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMoveRows(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_moverows_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MoveRows_Callback>(slot);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperInsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QTransposeProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnInsertColumns(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_insertcolumns_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_InsertColumns_Callback>(slot);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperRemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QTransposeProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnRemoveColumns(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_removecolumns_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RemoveColumns_Callback>(slot);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QTransposeProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMoveColumns(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_movecolumns_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MoveColumns_Callback>(slot);
}

// Base class handler implementation
void QTransposeProxyModel_SuperSort(QTransposeProxyModel* self, int column, int order) {
    self->QTransposeProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSort(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_sort_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* QTransposeProxyModel_MapSelectionToSource(const QTransposeProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionToSource(*selection));
}

// Base class handler implementation
QItemSelection* QTransposeProxyModel_SuperMapSelectionToSource(const QTransposeProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->QTransposeProxyModel::mapSelectionToSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMapSelectionToSource(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapSelectionToSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* QTransposeProxyModel_MapSelectionFromSource(const QTransposeProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionFromSource(*selection));
}

// Base class handler implementation
QItemSelection* QTransposeProxyModel_SuperMapSelectionFromSource(const QTransposeProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->QTransposeProxyModel::mapSelectionFromSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMapSelectionFromSource(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_Submit(QTransposeProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QTransposeProxyModel_SuperSubmit(QTransposeProxyModel* self) {
    return self->QTransposeProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSubmit(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_submit_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_Revert(QTransposeProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void QTransposeProxyModel_SuperRevert(QTransposeProxyModel* self) {
    self->QTransposeProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnRevert(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_revert_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTransposeProxyModel_Data(const QTransposeProxyModel* self, const QModelIndex* proxyIndex, int role) {
    return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QTransposeProxyModel_SuperData(const QTransposeProxyModel* self, const QModelIndex* proxyIndex, int role) {
    return new QVariant(self->QTransposeProxyModel::data(*proxyIndex, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_data_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Data_Callback>(slot);
}

// Derived class handler implementation
int QTransposeProxyModel_Flags(const QTransposeProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int QTransposeProxyModel_SuperFlags(const QTransposeProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QTransposeProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnFlags(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_flags_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_SetData(QTransposeProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool QTransposeProxyModel_SuperSetData(QTransposeProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QTransposeProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSetData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_setdata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetData_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_ClearItemData(QTransposeProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperClearItemData(QTransposeProxyModel* self, const QModelIndex* index) {
    return self->QTransposeProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnClearItemData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_clearitemdata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QTransposeProxyModel_Buddy(const QTransposeProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_SuperBuddy(const QTransposeProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QTransposeProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBuddy(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_buddy_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_CanFetchMore(const QTransposeProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperCanFetchMore(const QTransposeProxyModel* self, const QModelIndex* parent) {
    return self->QTransposeProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnCanFetchMore(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_canfetchmore_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_FetchMore(QTransposeProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QTransposeProxyModel_SuperFetchMore(QTransposeProxyModel* self, const QModelIndex* parent) {
    self->QTransposeProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnFetchMore(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_fetchmore_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_HasChildren(const QTransposeProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperHasChildren(const QTransposeProxyModel* self, const QModelIndex* parent) {
    return self->QTransposeProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnHasChildren(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_haschildren_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QTransposeProxyModel_Sibling(const QTransposeProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_SuperSibling(const QTransposeProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QTransposeProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSibling(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_sibling_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QTransposeProxyModel_MimeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QTransposeProxyModel_SuperMimeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QTransposeProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMimeData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_mimedata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_CanDropMimeData(const QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperCanDropMimeData(const QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QTransposeProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnCanDropMimeData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_candropmimedata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_DropMimeData(QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperDropMimeData(QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QTransposeProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnDropMimeData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_dropmimedata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QTransposeProxyModel_MimeTypes(const QTransposeProxyModel* self) {
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

// Base class handler implementation
libqt_list /* of libqt_string */ QTransposeProxyModel_SuperMimeTypes(const QTransposeProxyModel* self) {
    QList<QString> _ret = self->QTransposeProxyModel::mimeTypes();
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
void QTransposeProxyModel_OnMimeTypes(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_mimetypes_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
int QTransposeProxyModel_SupportedDragActions(const QTransposeProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QTransposeProxyModel_SuperSupportedDragActions(const QTransposeProxyModel* self) {
    return static_cast<int>(self->QTransposeProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSupportedDragActions(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
int QTransposeProxyModel_SupportedDropActions(const QTransposeProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QTransposeProxyModel_SuperSupportedDropActions(const QTransposeProxyModel* self) {
    return static_cast<int>(self->QTransposeProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSupportedDropActions(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QTransposeProxyModel_RoleNames(const QTransposeProxyModel* self) {
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

// Base class handler implementation
libqt_map /* of int to libqt_string */ QTransposeProxyModel_SuperRoleNames(const QTransposeProxyModel* self) {
    QHash<int, QByteArray> _ret = self->QTransposeProxyModel::roleNames();
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
void QTransposeProxyModel_OnRoleNames(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_rolenames_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTransposeProxyModel_Match(const QTransposeProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QTransposeProxyModel_SuperMatch(const QTransposeProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QTransposeProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QTransposeProxyModel_OnMatch(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_match_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_MultiData(const QTransposeProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QTransposeProxyModel_SuperMultiData(const QTransposeProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QTransposeProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMultiData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        vqtransposeproxymodel->qtransposeproxymodel_multidata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_ResetInternalData(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel) {
        vqtransposeproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QTransposeProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTransposeProxyModel_SuperResetInternalData(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->QTransposeProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QTransposeProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnResetInternalData(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_Event(QTransposeProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperEvent(QTransposeProxyModel* self, QEvent* event) {
    return self->QTransposeProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEvent(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_event_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTransposeProxyModel_EventFilter(QTransposeProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTransposeProxyModel_SuperEventFilter(QTransposeProxyModel* self, QObject* watched, QEvent* event) {
    return self->QTransposeProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEventFilter(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_eventfilter_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_TimerEvent(QTransposeProxyModel* self, QTimerEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel) {
        vqtransposeproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTransposeProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTransposeProxyModel_SuperTimerEvent(QTransposeProxyModel* self, QTimerEvent* event) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->QTransposeProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTransposeProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnTimerEvent(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_timerevent_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_ChildEvent(QTransposeProxyModel* self, QChildEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel) {
        vqtransposeproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTransposeProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTransposeProxyModel_SuperChildEvent(QTransposeProxyModel* self, QChildEvent* event) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->QTransposeProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTransposeProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnChildEvent(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_childevent_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_CustomEvent(QTransposeProxyModel* self, QEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel) {
        vqtransposeproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTransposeProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTransposeProxyModel_SuperCustomEvent(QTransposeProxyModel* self, QEvent* event) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->QTransposeProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTransposeProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnCustomEvent(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_customevent_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_ConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel) {
        vqtransposeproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTransposeProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTransposeProxyModel_SuperConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->QTransposeProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTransposeProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnConnectNotify(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_connectnotify_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTransposeProxyModel_DisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel) {
        vqtransposeproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTransposeProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTransposeProxyModel_SuperDisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->QTransposeProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTransposeProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnDisconnectNotify(QTransposeProxyModel* self, intptr_t slot) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self))
        vqtransposeproxymodel->qtransposeproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QTransposeProxyModel_CreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        return new QModelIndex(vqtransposeproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method QTransposeProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QTransposeProxyModel_CreateIndex(const QTransposeProxyModel* self, int row, int column) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self)))
        return new QModelIndex(vqtransposeproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QTransposeProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_EncodeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqtransposeproxymodel->VirtualQTransposeProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QTransposeProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTransposeProxyModel_DecodeData(QTransposeProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        return vqtransposeproxymodel->VirtualQTransposeProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QTransposeProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_BeginInsertRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QTransposeProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_EndInsertRows(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_BeginRemoveRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QTransposeProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_EndRemoveRows(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTransposeProxyModel_BeginMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        return vqtransposeproxymodel->VirtualQTransposeProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QTransposeProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_EndMoveRows(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_BeginInsertColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QTransposeProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_EndInsertColumns(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_BeginRemoveColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QTransposeProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_EndRemoveColumns(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTransposeProxyModel_BeginMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        return vqtransposeproxymodel->VirtualQTransposeProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QTransposeProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_EndMoveColumns(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_BeginResetModel(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_EndResetModel(QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_ChangePersistentIndex(QTransposeProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
        vqtransposeproxymodel->VirtualQTransposeProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QTransposeProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QTransposeProxyModel_ChangePersistentIndexList(QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self)) {
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
        vqtransposeproxymodel->VirtualQTransposeProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QTransposeProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QTransposeProxyModel_PersistentIndexList(const QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self))) {
        QList<QModelIndex> _ret = vqtransposeproxymodel->VirtualQTransposeProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method QTransposeProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTransposeProxyModel_Sender(const QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self))) {
        return vqtransposeproxymodel->VirtualQTransposeProxyModel::sender();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTransposeProxyModel_SenderSignalIndex(const QTransposeProxyModel* self) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self))) {
        return vqtransposeproxymodel->VirtualQTransposeProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTransposeProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTransposeProxyModel_Receivers(const QTransposeProxyModel* self, const char* signal) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self))) {
        return vqtransposeproxymodel->VirtualQTransposeProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method QTransposeProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTransposeProxyModel_IsSignalConnected(const QTransposeProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self))) {
        return vqtransposeproxymodel->VirtualQTransposeProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTransposeProxyModel::isSignalConnected called without a directly constructed type");
}

void QTransposeProxyModel_Delete(QTransposeProxyModel* self) {
    delete self;
}
