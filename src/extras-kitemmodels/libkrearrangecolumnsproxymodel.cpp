#include <KRearrangeColumnsProxyModel>
#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QIdentityProxyModel>
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
#include <QVariant>
#include <krearrangecolumnsproxymodel.h>
#include "libkrearrangecolumnsproxymodel.h"
#include "libkrearrangecolumnsproxymodel.hxx"

KRearrangeColumnsProxyModel* KRearrangeColumnsProxyModel_new() {
    return new VirtualKRearrangeColumnsProxyModel();
}

KRearrangeColumnsProxyModel* KRearrangeColumnsProxyModel_new2(QObject* parent) {
    return new VirtualKRearrangeColumnsProxyModel(parent);
}

QMetaObject* KRearrangeColumnsProxyModel_MetaObject(const KRearrangeColumnsProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRearrangeColumnsProxyModel_Metacast(KRearrangeColumnsProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRearrangeColumnsProxyModel_Metacall(KRearrangeColumnsProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KRearrangeColumnsProxyModel_Tr(const char* s) {
    auto _ret = KRearrangeColumnsProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRearrangeColumnsProxyModel_SetSourceColumns(KRearrangeColumnsProxyModel* self, const libqt_list /* of int */ columns) {
    QList<int> columns_QList;
    columns_QList.reserve(columns.len);
    int* columns_arr = static_cast<int*>(columns.data);
    for (size_t i = 0; i < columns.len; ++i) {
        columns_QList.push_back(static_cast<int>(columns_arr[i]));
    }
    self->setSourceColumns(columns_QList);
}

int KRearrangeColumnsProxyModel_ColumnCount(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

int KRearrangeColumnsProxyModel_RowCount(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QModelIndex* KRearrangeColumnsProxyModel_Index(const KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* KRearrangeColumnsProxyModel_Parent(const KRearrangeColumnsProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

QModelIndex* KRearrangeColumnsProxyModel_MapFromSource(const KRearrangeColumnsProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* KRearrangeColumnsProxyModel_MapToSource(const KRearrangeColumnsProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

QVariant* KRearrangeColumnsProxyModel_HeaderData(const KRearrangeColumnsProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool KRearrangeColumnsProxyModel_HasChildren(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

QModelIndex* KRearrangeColumnsProxyModel_Sibling(const KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int KRearrangeColumnsProxyModel_ProxyColumnForSourceColumn(const KRearrangeColumnsProxyModel* self, int sourceColumn) {
    return self->proxyColumnForSourceColumn(static_cast<int>(sourceColumn));
}

int KRearrangeColumnsProxyModel_SourceColumnForProxyColumn(const KRearrangeColumnsProxyModel* self, int proxyColumn) {
    return self->sourceColumnForProxyColumn(static_cast<int>(proxyColumn));
}

libqt_string KRearrangeColumnsProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = KRearrangeColumnsProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRearrangeColumnsProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KRearrangeColumnsProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KRearrangeColumnsProxyModel_SuperMetaObject(const KRearrangeColumnsProxyModel* self) {
    return (QMetaObject*)self->KRearrangeColumnsProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMetaObject(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_metaobject_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KRearrangeColumnsProxyModel_SuperMetacast(KRearrangeColumnsProxyModel* self, const char* param1) {
    return self->KRearrangeColumnsProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMetacast(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_metacast_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_SuperMetacall(KRearrangeColumnsProxyModel* self, int param1, int param2, void** param3) {
    return self->KRearrangeColumnsProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMetacall(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_metacall_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_SuperColumnCount(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnColumnCount(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_columncount_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_SuperRowCount(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnRowCount(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_rowcount_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_SuperIndex(const KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KRearrangeColumnsProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnIndex(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_index_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_SuperParent(const KRearrangeColumnsProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->KRearrangeColumnsProxyModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnParent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_parent_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Parent_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_SuperMapFromSource(const KRearrangeColumnsProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->KRearrangeColumnsProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMapFromSource(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_mapfromsource_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MapFromSource_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_SuperMapToSource(const KRearrangeColumnsProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->KRearrangeColumnsProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMapToSource(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_maptosource_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MapToSource_Callback>(slot);
}

// Base class handler implementation
QVariant* KRearrangeColumnsProxyModel_SuperHeaderData(const KRearrangeColumnsProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->KRearrangeColumnsProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnHeaderData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_headerdata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperHasChildren(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnHasChildren(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_haschildren_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_SuperSibling(const KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KRearrangeColumnsProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSibling(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_sibling_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_DropMimeData(KRearrangeColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperDropMimeData(KRearrangeColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnDropMimeData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_dropmimedata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KRearrangeColumnsProxyModel_MapSelectionFromSource(const KRearrangeColumnsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionFromSource(*selection));
}

// Base class handler implementation
QItemSelection* KRearrangeColumnsProxyModel_SuperMapSelectionFromSource(const KRearrangeColumnsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KRearrangeColumnsProxyModel::mapSelectionFromSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMapSelectionFromSource(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KRearrangeColumnsProxyModel_MapSelectionToSource(const KRearrangeColumnsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionToSource(*selection));
}

// Base class handler implementation
QItemSelection* KRearrangeColumnsProxyModel_SuperMapSelectionToSource(const KRearrangeColumnsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KRearrangeColumnsProxyModel::mapSelectionToSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMapSelectionToSource(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MapSelectionToSource_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_Match(const KRearrangeColumnsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_SuperMatch(const KRearrangeColumnsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KRearrangeColumnsProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KRearrangeColumnsProxyModel_OnMatch(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_match_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_SetSourceModel(KRearrangeColumnsProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperSetSourceModel(KRearrangeColumnsProxyModel* self, QAbstractItemModel* sourceModel) {
    self->KRearrangeColumnsProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetSourceModel(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetSourceModel_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_InsertColumns(KRearrangeColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperInsertColumns(KRearrangeColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnInsertColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_insertcolumns_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_InsertRows(KRearrangeColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperInsertRows(KRearrangeColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnInsertRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_insertrows_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_RemoveColumns(KRearrangeColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperRemoveColumns(KRearrangeColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnRemoveColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_removecolumns_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_RemoveRows(KRearrangeColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperRemoveRows(KRearrangeColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnRemoveRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_removerows_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_MoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperMoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KRearrangeColumnsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMoveRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_moverows_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_MoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperMoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KRearrangeColumnsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMoveColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_movecolumns_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_Submit(KRearrangeColumnsProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperSubmit(KRearrangeColumnsProxyModel* self) {
    return self->KRearrangeColumnsProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSubmit(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_submit_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_Revert(KRearrangeColumnsProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperRevert(KRearrangeColumnsProxyModel* self) {
    self->KRearrangeColumnsProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnRevert(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_revert_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
QVariant* KRearrangeColumnsProxyModel_Data(const KRearrangeColumnsProxyModel* self, const QModelIndex* proxyIndex, int role) {
    return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KRearrangeColumnsProxyModel_SuperData(const KRearrangeColumnsProxyModel* self, const QModelIndex* proxyIndex, int role) {
    return new QVariant(self->KRearrangeColumnsProxyModel::data(*proxyIndex, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_data_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Data_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KRearrangeColumnsProxyModel_ItemData(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
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

// Base class handler implementation
libqt_map /* of int to QVariant* */ KRearrangeColumnsProxyModel_SuperItemData(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KRearrangeColumnsProxyModel::itemData(*index);
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
void KRearrangeColumnsProxyModel_OnItemData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_itemdata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
int KRearrangeColumnsProxyModel_Flags(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_SuperFlags(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KRearrangeColumnsProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnFlags(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_flags_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_SetData(KRearrangeColumnsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperSetData(KRearrangeColumnsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KRearrangeColumnsProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_setdata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetData_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_SetItemData(KRearrangeColumnsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperSetItemData(KRearrangeColumnsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KRearrangeColumnsProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetItemData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_setitemdata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_SetHeaderData(KRearrangeColumnsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperSetHeaderData(KRearrangeColumnsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KRearrangeColumnsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetHeaderData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_setheaderdata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_ClearItemData(KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperClearItemData(KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    return self->KRearrangeColumnsProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnClearItemData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_clearitemdata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_Buddy(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_SuperBuddy(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KRearrangeColumnsProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBuddy(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_buddy_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_CanFetchMore(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperCanFetchMore(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnCanFetchMore(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_canfetchmore_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_FetchMore(KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperFetchMore(KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    self->KRearrangeColumnsProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnFetchMore(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_fetchmore_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_Sort(KRearrangeColumnsProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperSort(KRearrangeColumnsProxyModel* self, int column, int order) {
    self->KRearrangeColumnsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSort(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_sort_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QSize* KRearrangeColumnsProxyModel_Span(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KRearrangeColumnsProxyModel_SuperSpan(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    return new QSize(self->KRearrangeColumnsProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSpan(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_span_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KRearrangeColumnsProxyModel_MimeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KRearrangeColumnsProxyModel_SuperMimeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KRearrangeColumnsProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMimeData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_mimedata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_CanDropMimeData(const KRearrangeColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperCanDropMimeData(const KRearrangeColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KRearrangeColumnsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnCanDropMimeData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_candropmimedata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KRearrangeColumnsProxyModel_MimeTypes(const KRearrangeColumnsProxyModel* self) {
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
libqt_list /* of libqt_string */ KRearrangeColumnsProxyModel_SuperMimeTypes(const KRearrangeColumnsProxyModel* self) {
    QList<QString> _ret = self->KRearrangeColumnsProxyModel::mimeTypes();
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
void KRearrangeColumnsProxyModel_OnMimeTypes(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_mimetypes_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
int KRearrangeColumnsProxyModel_SupportedDragActions(const KRearrangeColumnsProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_SuperSupportedDragActions(const KRearrangeColumnsProxyModel* self) {
    return static_cast<int>(self->KRearrangeColumnsProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSupportedDragActions(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
int KRearrangeColumnsProxyModel_SupportedDropActions(const KRearrangeColumnsProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_SuperSupportedDropActions(const KRearrangeColumnsProxyModel* self) {
    return static_cast<int>(self->KRearrangeColumnsProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSupportedDropActions(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KRearrangeColumnsProxyModel_RoleNames(const KRearrangeColumnsProxyModel* self) {
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
libqt_map /* of int to libqt_string */ KRearrangeColumnsProxyModel_SuperRoleNames(const KRearrangeColumnsProxyModel* self) {
    QHash<int, QByteArray> _ret = self->KRearrangeColumnsProxyModel::roleNames();
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
void KRearrangeColumnsProxyModel_OnRoleNames(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_rolenames_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_MultiData(const KRearrangeColumnsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperMultiData(const KRearrangeColumnsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KRearrangeColumnsProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMultiData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_multidata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_ResetInternalData(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel) {
        vkrearrangecolumnsproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperResetInternalData(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->KRearrangeColumnsProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnResetInternalData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_Event(KRearrangeColumnsProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperEvent(KRearrangeColumnsProxyModel* self, QEvent* event) {
    return self->KRearrangeColumnsProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEvent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_event_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_EventFilter(KRearrangeColumnsProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_SuperEventFilter(KRearrangeColumnsProxyModel* self, QObject* watched, QEvent* event) {
    return self->KRearrangeColumnsProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEventFilter(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_eventfilter_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_TimerEvent(KRearrangeColumnsProxyModel* self, QTimerEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel) {
        vkrearrangecolumnsproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperTimerEvent(KRearrangeColumnsProxyModel* self, QTimerEvent* event) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->KRearrangeColumnsProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnTimerEvent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_timerevent_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_ChildEvent(KRearrangeColumnsProxyModel* self, QChildEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel) {
        vkrearrangecolumnsproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperChildEvent(KRearrangeColumnsProxyModel* self, QChildEvent* event) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->KRearrangeColumnsProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnChildEvent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_childevent_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_CustomEvent(KRearrangeColumnsProxyModel* self, QEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel) {
        vkrearrangecolumnsproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperCustomEvent(KRearrangeColumnsProxyModel* self, QEvent* event) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->KRearrangeColumnsProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnCustomEvent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_customevent_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_ConnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel) {
        vkrearrangecolumnsproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperConnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->KRearrangeColumnsProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnConnectNotify(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_connectnotify_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_DisconnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel) {
        vkrearrangecolumnsproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_SuperDisconnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->KRearrangeColumnsProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRearrangeColumnsProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnDisconnectNotify(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self))
        vkrearrangecolumnsproxymodel->krearrangecolumnsproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges(KRearrangeColumnsProxyModel* self, bool handleSourceLayoutChanges) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::setHandleSourceLayoutChanges called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_SetHandleSourceDataChanges(KRearrangeColumnsProxyModel* self, bool handleSourceDataChanges) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::setHandleSourceDataChanges called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_CreateSourceIndex(const KRearrangeColumnsProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        return new QModelIndex(vkrearrangecolumnsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method KRearrangeColumnsProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_CreateIndex(const KRearrangeColumnsProxyModel* self, int row, int column) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self)))
        return new QModelIndex(vkrearrangecolumnsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KRearrangeColumnsProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_EncodeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRearrangeColumnsProxyModel_DecodeData(KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        return vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_BeginInsertRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_EndInsertRows(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_BeginRemoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_EndRemoveRows(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRearrangeColumnsProxyModel_BeginMoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        return vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_EndMoveRows(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_BeginInsertColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_EndInsertColumns(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_BeginRemoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_EndRemoveColumns(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRearrangeColumnsProxyModel_BeginMoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        return vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_EndMoveColumns(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_BeginResetModel(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_EndResetModel(KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_ChangePersistentIndex(KRearrangeColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KRearrangeColumnsProxyModel_ChangePersistentIndexList(KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self)) {
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
        vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_PersistentIndexList(const KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self))) {
        QList<QModelIndex> _ret = vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KRearrangeColumnsProxyModel_Sender(const KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self))) {
        return vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::sender();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KRearrangeColumnsProxyModel_SenderSignalIndex(const KRearrangeColumnsProxyModel* self) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self))) {
        return vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KRearrangeColumnsProxyModel_Receivers(const KRearrangeColumnsProxyModel* self, const char* signal) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self))) {
        return vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRearrangeColumnsProxyModel_IsSignalConnected(const KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self))) {
        return vkrearrangecolumnsproxymodel->VirtualKRearrangeColumnsProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KRearrangeColumnsProxyModel::isSignalConnected called without a directly constructed type");
}

void KRearrangeColumnsProxyModel_Delete(KRearrangeColumnsProxyModel* self) {
    delete self;
}
