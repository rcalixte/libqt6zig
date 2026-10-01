#include <KExtraColumnsProxyModel>
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
#include <kextracolumnsproxymodel.h>
#include "libkextracolumnsproxymodel.h"
#include "libkextracolumnsproxymodel.hxx"

KExtraColumnsProxyModel* KExtraColumnsProxyModel_new() {
    return new VirtualKExtraColumnsProxyModel();
}

KExtraColumnsProxyModel* KExtraColumnsProxyModel_new2(QObject* parent) {
    return new VirtualKExtraColumnsProxyModel(parent);
}

QMetaObject* KExtraColumnsProxyModel_MetaObject(const KExtraColumnsProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KExtraColumnsProxyModel_Metacast(KExtraColumnsProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KExtraColumnsProxyModel_Metacall(KExtraColumnsProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KExtraColumnsProxyModel_Tr(const char* s) {
    auto _ret = KExtraColumnsProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KExtraColumnsProxyModel_AppendColumn(KExtraColumnsProxyModel* self) {
    self->appendColumn();
}

void KExtraColumnsProxyModel_RemoveExtraColumn(KExtraColumnsProxyModel* self, int idx) {
    self->removeExtraColumn(static_cast<int>(idx));
}

QVariant* KExtraColumnsProxyModel_ExtraColumnData(const KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, int role) {
    return new QVariant(self->extraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), static_cast<int>(role)));
}

bool KExtraColumnsProxyModel_SetExtraColumnData(KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, const QVariant* data, int role) {
    return self->setExtraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), *data, static_cast<int>(role));
}

void KExtraColumnsProxyModel_ExtraColumnDataChanged(KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    self->extraColumnDataChanged(*parent, static_cast<int>(row), static_cast<int>(extraColumn), roles_QList);
}

int KExtraColumnsProxyModel_ExtraColumnForProxyColumn(const KExtraColumnsProxyModel* self, int proxyColumn) {
    return self->extraColumnForProxyColumn(static_cast<int>(proxyColumn));
}

int KExtraColumnsProxyModel_ProxyColumnForExtraColumn(const KExtraColumnsProxyModel* self, int extraColumn) {
    return self->proxyColumnForExtraColumn(static_cast<int>(extraColumn));
}

void KExtraColumnsProxyModel_SetSourceModel(KExtraColumnsProxyModel* self, QAbstractItemModel* model) {
    self->setSourceModel(model);
}

QModelIndex* KExtraColumnsProxyModel_MapToSource(const KExtraColumnsProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

QItemSelection* KExtraColumnsProxyModel_MapSelectionToSource(const KExtraColumnsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionToSource(*selection));
}

int KExtraColumnsProxyModel_ColumnCount(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QVariant* KExtraColumnsProxyModel_Data(const KExtraColumnsProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool KExtraColumnsProxyModel_SetData(KExtraColumnsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

QModelIndex* KExtraColumnsProxyModel_Sibling(const KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QModelIndex* KExtraColumnsProxyModel_Buddy(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

int KExtraColumnsProxyModel_Flags(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

bool KExtraColumnsProxyModel_HasChildren(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return self->hasChildren(*index);
}

QVariant* KExtraColumnsProxyModel_HeaderData(const KExtraColumnsProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

QModelIndex* KExtraColumnsProxyModel_Index(const KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* KExtraColumnsProxyModel_Parent(const KExtraColumnsProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

libqt_string KExtraColumnsProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = KExtraColumnsProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KExtraColumnsProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KExtraColumnsProxyModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KExtraColumnsProxyModel_AppendColumn1(KExtraColumnsProxyModel* self, const libqt_string header) {
    QString header_QString = QString::fromUtf8(header.data, header.len);
    self->appendColumn(header_QString);
}

// Base class handler implementation
QMetaObject* KExtraColumnsProxyModel_SuperMetaObject(const KExtraColumnsProxyModel* self) {
    return (QMetaObject*)self->KExtraColumnsProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMetaObject(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_metaobject_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KExtraColumnsProxyModel_SuperMetacast(KExtraColumnsProxyModel* self, const char* param1) {
    return self->KExtraColumnsProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMetacast(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_metacast_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KExtraColumnsProxyModel_SuperMetacall(KExtraColumnsProxyModel* self, int param1, int param2, void** param3) {
    return self->KExtraColumnsProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMetacall(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_metacall_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnExtraColumnData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_extracolumndata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ExtraColumnData_Callback>(slot);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperSetExtraColumnData(KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, const QVariant* data, int role) {
    return self->KExtraColumnsProxyModel::setExtraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), *data, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetExtraColumnData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_setextracolumndata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetExtraColumnData_Callback>(slot);
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperSetSourceModel(KExtraColumnsProxyModel* self, QAbstractItemModel* model) {
    self->KExtraColumnsProxyModel::setSourceModel(model);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetSourceModel(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetSourceModel_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_SuperMapToSource(const KExtraColumnsProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->KExtraColumnsProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMapToSource(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_maptosource_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MapToSource_Callback>(slot);
}

// Base class handler implementation
QItemSelection* KExtraColumnsProxyModel_SuperMapSelectionToSource(const KExtraColumnsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KExtraColumnsProxyModel::mapSelectionToSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMapSelectionToSource(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MapSelectionToSource_Callback>(slot);
}

// Base class handler implementation
int KExtraColumnsProxyModel_SuperColumnCount(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnColumnCount(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_columncount_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
QVariant* KExtraColumnsProxyModel_SuperData(const KExtraColumnsProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KExtraColumnsProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_data_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Data_Callback>(slot);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperSetData(KExtraColumnsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KExtraColumnsProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_setdata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetData_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_SuperSibling(const KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KExtraColumnsProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSibling(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_sibling_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Sibling_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_SuperBuddy(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KExtraColumnsProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBuddy(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_buddy_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Buddy_Callback>(slot);
}

// Base class handler implementation
int KExtraColumnsProxyModel_SuperFlags(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KExtraColumnsProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnFlags(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_flags_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Flags_Callback>(slot);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperHasChildren(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return self->KExtraColumnsProxyModel::hasChildren(*index);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnHasChildren(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_haschildren_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
QVariant* KExtraColumnsProxyModel_SuperHeaderData(const KExtraColumnsProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->KExtraColumnsProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnHeaderData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_headerdata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_SuperIndex(const KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KExtraColumnsProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnIndex(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_index_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_SuperParent(const KExtraColumnsProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->KExtraColumnsProxyModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnParent(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_parent_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Parent_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KExtraColumnsProxyModel_MapFromSource(const KExtraColumnsProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_SuperMapFromSource(const KExtraColumnsProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->KExtraColumnsProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMapFromSource(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_mapfromsource_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MapFromSource_Callback>(slot);
}

// Derived class handler implementation
int KExtraColumnsProxyModel_RowCount(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Base class handler implementation
int KExtraColumnsProxyModel_SuperRowCount(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnRowCount(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_rowcount_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_DropMimeData(KExtraColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperDropMimeData(KExtraColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnDropMimeData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_dropmimedata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KExtraColumnsProxyModel_MapSelectionFromSource(const KExtraColumnsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionFromSource(*selection));
}

// Base class handler implementation
QItemSelection* KExtraColumnsProxyModel_SuperMapSelectionFromSource(const KExtraColumnsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KExtraColumnsProxyModel::mapSelectionFromSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMapSelectionFromSource(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_Match(const KExtraColumnsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_SuperMatch(const KExtraColumnsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KExtraColumnsProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KExtraColumnsProxyModel_OnMatch(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_match_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_InsertColumns(KExtraColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperInsertColumns(KExtraColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnInsertColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_insertcolumns_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_InsertRows(KExtraColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperInsertRows(KExtraColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnInsertRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_insertrows_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_RemoveColumns(KExtraColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperRemoveColumns(KExtraColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnRemoveColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_removecolumns_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_RemoveRows(KExtraColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperRemoveRows(KExtraColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnRemoveRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_removerows_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_MoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperMoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KExtraColumnsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMoveRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_moverows_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_MoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperMoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KExtraColumnsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMoveColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_movecolumns_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_Submit(KExtraColumnsProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperSubmit(KExtraColumnsProxyModel* self) {
    return self->KExtraColumnsProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSubmit(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_submit_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_Revert(KExtraColumnsProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperRevert(KExtraColumnsProxyModel* self) {
    self->KExtraColumnsProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnRevert(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_revert_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KExtraColumnsProxyModel_ItemData(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KExtraColumnsProxyModel_SuperItemData(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KExtraColumnsProxyModel::itemData(*index);
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
void KExtraColumnsProxyModel_OnItemData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_itemdata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_SetItemData(KExtraColumnsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperSetItemData(KExtraColumnsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KExtraColumnsProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetItemData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_setitemdata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_SetHeaderData(KExtraColumnsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperSetHeaderData(KExtraColumnsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KExtraColumnsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetHeaderData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_setheaderdata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_ClearItemData(KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperClearItemData(KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return self->KExtraColumnsProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnClearItemData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_clearitemdata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_CanFetchMore(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperCanFetchMore(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnCanFetchMore(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_canfetchmore_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_FetchMore(KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperFetchMore(KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    self->KExtraColumnsProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnFetchMore(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_fetchmore_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_Sort(KExtraColumnsProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperSort(KExtraColumnsProxyModel* self, int column, int order) {
    self->KExtraColumnsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSort(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_sort_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QSize* KExtraColumnsProxyModel_Span(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KExtraColumnsProxyModel_SuperSpan(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    return new QSize(self->KExtraColumnsProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSpan(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_span_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KExtraColumnsProxyModel_MimeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KExtraColumnsProxyModel_SuperMimeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KExtraColumnsProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMimeData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_mimedata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_CanDropMimeData(const KExtraColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperCanDropMimeData(const KExtraColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KExtraColumnsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnCanDropMimeData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_candropmimedata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KExtraColumnsProxyModel_MimeTypes(const KExtraColumnsProxyModel* self) {
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
libqt_list /* of libqt_string */ KExtraColumnsProxyModel_SuperMimeTypes(const KExtraColumnsProxyModel* self) {
    QList<QString> _ret = self->KExtraColumnsProxyModel::mimeTypes();
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
void KExtraColumnsProxyModel_OnMimeTypes(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_mimetypes_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
int KExtraColumnsProxyModel_SupportedDragActions(const KExtraColumnsProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KExtraColumnsProxyModel_SuperSupportedDragActions(const KExtraColumnsProxyModel* self) {
    return static_cast<int>(self->KExtraColumnsProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSupportedDragActions(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
int KExtraColumnsProxyModel_SupportedDropActions(const KExtraColumnsProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KExtraColumnsProxyModel_SuperSupportedDropActions(const KExtraColumnsProxyModel* self) {
    return static_cast<int>(self->KExtraColumnsProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSupportedDropActions(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KExtraColumnsProxyModel_RoleNames(const KExtraColumnsProxyModel* self) {
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
libqt_map /* of int to libqt_string */ KExtraColumnsProxyModel_SuperRoleNames(const KExtraColumnsProxyModel* self) {
    QHash<int, QByteArray> _ret = self->KExtraColumnsProxyModel::roleNames();
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
void KExtraColumnsProxyModel_OnRoleNames(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_rolenames_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_MultiData(const KExtraColumnsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperMultiData(const KExtraColumnsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KExtraColumnsProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMultiData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_multidata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_ResetInternalData(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel) {
        vkextracolumnsproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperResetInternalData(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->KExtraColumnsProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnResetInternalData(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_Event(KExtraColumnsProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperEvent(KExtraColumnsProxyModel* self, QEvent* event) {
    return self->KExtraColumnsProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEvent(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_event_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_EventFilter(KExtraColumnsProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KExtraColumnsProxyModel_SuperEventFilter(KExtraColumnsProxyModel* self, QObject* watched, QEvent* event) {
    return self->KExtraColumnsProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEventFilter(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_eventfilter_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_TimerEvent(KExtraColumnsProxyModel* self, QTimerEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel) {
        vkextracolumnsproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperTimerEvent(KExtraColumnsProxyModel* self, QTimerEvent* event) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->KExtraColumnsProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnTimerEvent(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_timerevent_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_ChildEvent(KExtraColumnsProxyModel* self, QChildEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel) {
        vkextracolumnsproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperChildEvent(KExtraColumnsProxyModel* self, QChildEvent* event) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->KExtraColumnsProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnChildEvent(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_childevent_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_CustomEvent(KExtraColumnsProxyModel* self, QEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel) {
        vkextracolumnsproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperCustomEvent(KExtraColumnsProxyModel* self, QEvent* event) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->KExtraColumnsProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnCustomEvent(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_customevent_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_ConnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel) {
        vkextracolumnsproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperConnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->KExtraColumnsProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnConnectNotify(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_connectnotify_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KExtraColumnsProxyModel_DisconnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel) {
        vkextracolumnsproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_SuperDisconnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->KExtraColumnsProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KExtraColumnsProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnDisconnectNotify(KExtraColumnsProxyModel* self, intptr_t slot) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self))
        vkextracolumnsproxymodel->kextracolumnsproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_SetHandleSourceLayoutChanges(KExtraColumnsProxyModel* self, bool handleSourceLayoutChanges) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::setHandleSourceLayoutChanges called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_SetHandleSourceDataChanges(KExtraColumnsProxyModel* self, bool handleSourceDataChanges) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::setHandleSourceDataChanges called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KExtraColumnsProxyModel_CreateSourceIndex(const KExtraColumnsProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        return new QModelIndex(vkextracolumnsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method KExtraColumnsProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KExtraColumnsProxyModel_CreateIndex(const KExtraColumnsProxyModel* self, int row, int column) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self)))
        return new QModelIndex(vkextracolumnsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KExtraColumnsProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_EncodeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KExtraColumnsProxyModel_DecodeData(KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        return vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_BeginInsertRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_EndInsertRows(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_BeginRemoveRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_EndRemoveRows(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KExtraColumnsProxyModel_BeginMoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        return vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_EndMoveRows(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_BeginInsertColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_EndInsertColumns(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_BeginRemoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_EndRemoveColumns(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KExtraColumnsProxyModel_BeginMoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        return vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_EndMoveColumns(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_BeginResetModel(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_EndResetModel(KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_ChangePersistentIndex(KExtraColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtraColumnsProxyModel_ChangePersistentIndexList(KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self)) {
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
        vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_PersistentIndexList(const KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self))) {
        QList<QModelIndex> _ret = vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method KExtraColumnsProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KExtraColumnsProxyModel_Sender(const KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self))) {
        return vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::sender();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KExtraColumnsProxyModel_SenderSignalIndex(const KExtraColumnsProxyModel* self) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self))) {
        return vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KExtraColumnsProxyModel_Receivers(const KExtraColumnsProxyModel* self, const char* signal) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self))) {
        return vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KExtraColumnsProxyModel_IsSignalConnected(const KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self))) {
        return vkextracolumnsproxymodel->VirtualKExtraColumnsProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KExtraColumnsProxyModel::isSignalConnected called without a directly constructed type");
}

void KExtraColumnsProxyModel_Delete(KExtraColumnsProxyModel* self) {
    delete self;
}
