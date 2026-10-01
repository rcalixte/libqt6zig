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
#include <qidentityproxymodel.h>
#include "libqidentityproxymodel.h"
#include "libqidentityproxymodel.hxx"

QIdentityProxyModel* QIdentityProxyModel_new() {
    return new VirtualQIdentityProxyModel();
}

QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent) {
    return new VirtualQIdentityProxyModel(parent);
}

QMetaObject* QIdentityProxyModel_MetaObject(const QIdentityProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QIdentityProxyModel_Metacast(QIdentityProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QIdentityProxyModel_Metacall(QIdentityProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QIdentityProxyModel_Tr(const char* s) {
    auto _ret = QIdentityProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QItemSelection* QIdentityProxyModel_MapSelectionFromSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionFromSource(*selection));
}

QItemSelection* QIdentityProxyModel_MapSelectionToSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionToSource(*selection));
}

libqt_list /* of QModelIndex* */ QIdentityProxyModel_Match(const QIdentityProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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

void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QIdentityProxyModel_HandleSourceLayoutChanges(const QIdentityProxyModel* self) {
    return self->handleSourceLayoutChanges();
}

bool QIdentityProxyModel_HandleSourceDataChanges(const QIdentityProxyModel* self) {
    return self->handleSourceDataChanges();
}

libqt_string QIdentityProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = QIdentityProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QIdentityProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QIdentityProxyModel_SuperMetaObject(const QIdentityProxyModel* self) {
    return (QMetaObject*)self->QIdentityProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMetaObject(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_metaobject_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QIdentityProxyModel_SuperMetacast(QIdentityProxyModel* self, const char* param1) {
    return self->QIdentityProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMetacast(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_metacast_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QIdentityProxyModel_SuperMetacall(QIdentityProxyModel* self, int param1, int param2, void** param3) {
    return self->QIdentityProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMetacall(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_metacall_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int QIdentityProxyModel_SuperColumnCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
    return self->QIdentityProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnColumnCount(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_columncount_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_SuperIndex(const QIdentityProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QIdentityProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnIndex(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_index_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_SuperMapFromSource(const QIdentityProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->QIdentityProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapFromSource(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_mapfromsource_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapFromSource_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_SuperMapToSource(const QIdentityProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->QIdentityProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapToSource(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_maptosource_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapToSource_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_SuperParent(const QIdentityProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->QIdentityProxyModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnParent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_parent_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Parent_Callback>(slot);
}

// Base class handler implementation
int QIdentityProxyModel_SuperRowCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
    return self->QIdentityProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRowCount(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_rowcount_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* QIdentityProxyModel_SuperHeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->QIdentityProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnHeaderData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_headerdata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperDropMimeData(QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QIdentityProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDropMimeData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_dropmimedata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_SuperSibling(const QIdentityProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QIdentityProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSibling(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_sibling_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sibling_Callback>(slot);
}

// Base class handler implementation
QItemSelection* QIdentityProxyModel_SuperMapSelectionFromSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->QIdentityProxyModel::mapSelectionFromSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapSelectionFromSource(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Base class handler implementation
QItemSelection* QIdentityProxyModel_SuperMapSelectionToSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->QIdentityProxyModel::mapSelectionToSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapSelectionToSource(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapSelectionToSource_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_SuperMatch(const QIdentityProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QIdentityProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QIdentityProxyModel_OnMatch(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_match_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Match_Callback>(slot);
}

// Base class handler implementation
void QIdentityProxyModel_SuperSetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
    self->QIdentityProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetSourceModel(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetSourceModel_Callback>(slot);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperInsertColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QIdentityProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnInsertColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_insertcolumns_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_InsertColumns_Callback>(slot);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperInsertRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QIdentityProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnInsertRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_insertrows_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_InsertRows_Callback>(slot);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperRemoveColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QIdentityProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRemoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_removecolumns_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RemoveColumns_Callback>(slot);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperRemoveRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QIdentityProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRemoveRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_removerows_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RemoveRows_Callback>(slot);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QIdentityProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMoveRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_moverows_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MoveRows_Callback>(slot);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QIdentityProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_movecolumns_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_Submit(QIdentityProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QIdentityProxyModel_SuperSubmit(QIdentityProxyModel* self) {
    return self->QIdentityProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSubmit(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_submit_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_Revert(QIdentityProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void QIdentityProxyModel_SuperRevert(QIdentityProxyModel* self) {
    self->QIdentityProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRevert(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_revert_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
QVariant* QIdentityProxyModel_Data(const QIdentityProxyModel* self, const QModelIndex* proxyIndex, int role) {
    return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QIdentityProxyModel_SuperData(const QIdentityProxyModel* self, const QModelIndex* proxyIndex, int role) {
    return new QVariant(self->QIdentityProxyModel::data(*proxyIndex, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_data_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Data_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QIdentityProxyModel_ItemData(const QIdentityProxyModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QIdentityProxyModel_SuperItemData(const QIdentityProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QIdentityProxyModel::itemData(*index);
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
void QIdentityProxyModel_OnItemData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_itemdata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
int QIdentityProxyModel_Flags(const QIdentityProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int QIdentityProxyModel_SuperFlags(const QIdentityProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QIdentityProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnFlags(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_flags_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_SetData(QIdentityProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool QIdentityProxyModel_SuperSetData(QIdentityProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QIdentityProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_setdata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetData_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_SetItemData(QIdentityProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperSetItemData(QIdentityProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QIdentityProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetItemData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_setitemdata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_SetHeaderData(QIdentityProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QIdentityProxyModel_SuperSetHeaderData(QIdentityProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QIdentityProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetHeaderData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_setheaderdata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_ClearItemData(QIdentityProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperClearItemData(QIdentityProxyModel* self, const QModelIndex* index) {
    return self->QIdentityProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnClearItemData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_clearitemdata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Buddy(const QIdentityProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_SuperBuddy(const QIdentityProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QIdentityProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBuddy(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_buddy_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_CanFetchMore(const QIdentityProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperCanFetchMore(const QIdentityProxyModel* self, const QModelIndex* parent) {
    return self->QIdentityProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCanFetchMore(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_canfetchmore_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_FetchMore(QIdentityProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QIdentityProxyModel_SuperFetchMore(QIdentityProxyModel* self, const QModelIndex* parent) {
    self->QIdentityProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnFetchMore(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_fetchmore_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_Sort(QIdentityProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QIdentityProxyModel_SuperSort(QIdentityProxyModel* self, int column, int order) {
    self->QIdentityProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSort(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_sort_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QSize* QIdentityProxyModel_Span(const QIdentityProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QIdentityProxyModel_SuperSpan(const QIdentityProxyModel* self, const QModelIndex* index) {
    return new QSize(self->QIdentityProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSpan(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_span_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_HasChildren(const QIdentityProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperHasChildren(const QIdentityProxyModel* self, const QModelIndex* parent) {
    return self->QIdentityProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnHasChildren(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_haschildren_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QIdentityProxyModel_MimeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QIdentityProxyModel_SuperMimeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QIdentityProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMimeData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_mimedata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_CanDropMimeData(const QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperCanDropMimeData(const QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QIdentityProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCanDropMimeData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_candropmimedata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QIdentityProxyModel_MimeTypes(const QIdentityProxyModel* self) {
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
libqt_list /* of libqt_string */ QIdentityProxyModel_SuperMimeTypes(const QIdentityProxyModel* self) {
    QList<QString> _ret = self->QIdentityProxyModel::mimeTypes();
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
void QIdentityProxyModel_OnMimeTypes(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_mimetypes_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
int QIdentityProxyModel_SupportedDragActions(const QIdentityProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QIdentityProxyModel_SuperSupportedDragActions(const QIdentityProxyModel* self) {
    return static_cast<int>(self->QIdentityProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSupportedDragActions(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
int QIdentityProxyModel_SupportedDropActions(const QIdentityProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QIdentityProxyModel_SuperSupportedDropActions(const QIdentityProxyModel* self) {
    return static_cast<int>(self->QIdentityProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSupportedDropActions(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QIdentityProxyModel_RoleNames(const QIdentityProxyModel* self) {
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
libqt_map /* of int to libqt_string */ QIdentityProxyModel_SuperRoleNames(const QIdentityProxyModel* self) {
    QHash<int, QByteArray> _ret = self->QIdentityProxyModel::roleNames();
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
void QIdentityProxyModel_OnRoleNames(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_rolenames_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_MultiData(const QIdentityProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QIdentityProxyModel_SuperMultiData(const QIdentityProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QIdentityProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMultiData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        vqidentityproxymodel->qidentityproxymodel_multidata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_ResetInternalData(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel) {
        vqidentityproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QIdentityProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QIdentityProxyModel_SuperResetInternalData(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->QIdentityProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QIdentityProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnResetInternalData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_Event(QIdentityProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperEvent(QIdentityProxyModel* self, QEvent* event) {
    return self->QIdentityProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEvent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_event_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QIdentityProxyModel_EventFilter(QIdentityProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QIdentityProxyModel_SuperEventFilter(QIdentityProxyModel* self, QObject* watched, QEvent* event) {
    return self->QIdentityProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEventFilter(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_eventfilter_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_TimerEvent(QIdentityProxyModel* self, QTimerEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel) {
        vqidentityproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIdentityProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIdentityProxyModel_SuperTimerEvent(QIdentityProxyModel* self, QTimerEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->QIdentityProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QIdentityProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnTimerEvent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_timerevent_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_ChildEvent(QIdentityProxyModel* self, QChildEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel) {
        vqidentityproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIdentityProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIdentityProxyModel_SuperChildEvent(QIdentityProxyModel* self, QChildEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->QIdentityProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QIdentityProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnChildEvent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_childevent_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_CustomEvent(QIdentityProxyModel* self, QEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel) {
        vqidentityproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIdentityProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIdentityProxyModel_SuperCustomEvent(QIdentityProxyModel* self, QEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->QIdentityProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QIdentityProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCustomEvent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_customevent_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_ConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel) {
        vqidentityproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QIdentityProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QIdentityProxyModel_SuperConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->QIdentityProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QIdentityProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnConnectNotify(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_connectnotify_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QIdentityProxyModel_DisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel) {
        vqidentityproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QIdentityProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QIdentityProxyModel_SuperDisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->QIdentityProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QIdentityProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDisconnectNotify(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self))
        vqidentityproxymodel->qidentityproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QIdentityProxyModel_SetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else
        qFatal("Error: Protected method QIdentityProxyModel::setHandleSourceLayoutChanges called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_SetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
    } else
        qFatal("Error: Protected method QIdentityProxyModel::setHandleSourceDataChanges called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_CreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        return new QModelIndex(vqidentityproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method QIdentityProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_CreateIndex(const QIdentityProxyModel* self, int row, int column) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self)))
        return new QModelIndex(vqidentityproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QIdentityProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_EncodeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqidentityproxymodel->VirtualQIdentityProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QIdentityProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QIdentityProxyModel_DecodeData(QIdentityProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->VirtualQIdentityProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QIdentityProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_BeginInsertRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QIdentityProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_EndInsertRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_BeginRemoveRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QIdentityProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_EndRemoveRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QIdentityProxyModel_BeginMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->VirtualQIdentityProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QIdentityProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_EndMoveRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_BeginInsertColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QIdentityProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_EndInsertColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_BeginRemoveColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QIdentityProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_EndRemoveColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QIdentityProxyModel_BeginMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->VirtualQIdentityProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QIdentityProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_EndMoveColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_BeginResetModel(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_EndResetModel(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_ChangePersistentIndex(QIdentityProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->VirtualQIdentityProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QIdentityProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QIdentityProxyModel_ChangePersistentIndexList(QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
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
        vqidentityproxymodel->VirtualQIdentityProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QIdentityProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_PersistentIndexList(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        QList<QModelIndex> _ret = vqidentityproxymodel->VirtualQIdentityProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method QIdentityProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QIdentityProxyModel_Sender(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->VirtualQIdentityProxyModel::sender();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QIdentityProxyModel_SenderSignalIndex(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->VirtualQIdentityProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QIdentityProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QIdentityProxyModel_Receivers(const QIdentityProxyModel* self, const char* signal) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->VirtualQIdentityProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method QIdentityProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QIdentityProxyModel_IsSignalConnected(const QIdentityProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->VirtualQIdentityProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QIdentityProxyModel::isSignalConnected called without a directly constructed type");
}

void QIdentityProxyModel_Delete(QIdentityProxyModel* self) {
    delete self;
}
