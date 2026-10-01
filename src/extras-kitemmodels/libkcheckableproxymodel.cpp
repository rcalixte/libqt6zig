#include <KCheckableProxyModel>
#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QIdentityProxyModel>
#include <QItemSelection>
#include <QItemSelectionModel>
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
#include <kcheckableproxymodel.h>
#include "libkcheckableproxymodel.h"
#include "libkcheckableproxymodel.hxx"

KCheckableProxyModel* KCheckableProxyModel_new() {
    return new VirtualKCheckableProxyModel();
}

KCheckableProxyModel* KCheckableProxyModel_new2(QObject* parent) {
    return new VirtualKCheckableProxyModel(parent);
}

QMetaObject* KCheckableProxyModel_MetaObject(const KCheckableProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCheckableProxyModel_Metacast(KCheckableProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCheckableProxyModel_Metacall(KCheckableProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCheckableProxyModel_Tr(const char* s) {
    auto _ret = KCheckableProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCheckableProxyModel_SetSelectionModel(KCheckableProxyModel* self, QItemSelectionModel* itemSelectionModel) {
    self->setSelectionModel(itemSelectionModel);
}

QItemSelectionModel* KCheckableProxyModel_SelectionModel(const KCheckableProxyModel* self) {
    return self->selectionModel();
}

int KCheckableProxyModel_Flags(const KCheckableProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

QVariant* KCheckableProxyModel_Data(const KCheckableProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool KCheckableProxyModel_SetData(KCheckableProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

void KCheckableProxyModel_SetSourceModel(KCheckableProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

libqt_map /* of int to libqt_string */ KCheckableProxyModel_RoleNames(const KCheckableProxyModel* self) {
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

bool KCheckableProxyModel_Select(KCheckableProxyModel* self, const QItemSelection* selection, int command) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel) {
        return vkcheckableproxymodel->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
    qFatal("Error: Protected method KCheckableProxyModel::select called without a directly constructed type");
}

libqt_string KCheckableProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = KCheckableProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCheckableProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCheckableProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCheckableProxyModel_SuperMetaObject(const KCheckableProxyModel* self) {
    return (QMetaObject*)self->KCheckableProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMetaObject(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_metaobject_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCheckableProxyModel_SuperMetacast(KCheckableProxyModel* self, const char* param1) {
    return self->KCheckableProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMetacast(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_metacast_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCheckableProxyModel_SuperMetacall(KCheckableProxyModel* self, int param1, int param2, void** param3) {
    return self->KCheckableProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMetacall(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_metacall_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int KCheckableProxyModel_SuperFlags(const KCheckableProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KCheckableProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnFlags(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_flags_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Flags_Callback>(slot);
}

// Base class handler implementation
QVariant* KCheckableProxyModel_SuperData(const KCheckableProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KCheckableProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_data_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Data_Callback>(slot);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperSetData(KCheckableProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KCheckableProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_setdata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetData_Callback>(slot);
}

// Base class handler implementation
void KCheckableProxyModel_SuperSetSourceModel(KCheckableProxyModel* self, QAbstractItemModel* sourceModel) {
    self->KCheckableProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetSourceModel(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetSourceModel_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KCheckableProxyModel_SuperRoleNames(const KCheckableProxyModel* self) {
    QHash<int, QByteArray> _ret = self->KCheckableProxyModel::roleNames();
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
void KCheckableProxyModel_OnRoleNames(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_rolenames_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperSelect(KCheckableProxyModel* self, const QItemSelection* selection, int command) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        return vkcheckableproxymodel->KCheckableProxyModel::select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method KCheckableProxyModel::select called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSelect(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_select_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Select_Callback>(slot);
}

// Derived class handler implementation
int KCheckableProxyModel_ColumnCount(const KCheckableProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Base class handler implementation
int KCheckableProxyModel_SuperColumnCount(const KCheckableProxyModel* self, const QModelIndex* parent) {
    return self->KCheckableProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnColumnCount(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_columncount_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_Index(const KCheckableProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_SuperIndex(const KCheckableProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KCheckableProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnIndex(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_index_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_MapFromSource(const KCheckableProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_SuperMapFromSource(const KCheckableProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->KCheckableProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMapFromSource(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_mapfromsource_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MapFromSource_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_MapToSource(const KCheckableProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_SuperMapToSource(const KCheckableProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->KCheckableProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMapToSource(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_maptosource_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MapToSource_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_Parent(const KCheckableProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_SuperParent(const KCheckableProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->KCheckableProxyModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnParent(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_parent_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Parent_Callback>(slot);
}

// Derived class handler implementation
int KCheckableProxyModel_RowCount(const KCheckableProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Base class handler implementation
int KCheckableProxyModel_SuperRowCount(const KCheckableProxyModel* self, const QModelIndex* parent) {
    return self->KCheckableProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnRowCount(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_rowcount_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCheckableProxyModel_HeaderData(const KCheckableProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KCheckableProxyModel_SuperHeaderData(const KCheckableProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->KCheckableProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnHeaderData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_headerdata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_DropMimeData(KCheckableProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperDropMimeData(KCheckableProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KCheckableProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnDropMimeData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_dropmimedata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_Sibling(const KCheckableProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_SuperSibling(const KCheckableProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KCheckableProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSibling(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_sibling_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KCheckableProxyModel_MapSelectionFromSource(const KCheckableProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionFromSource(*selection));
}

// Base class handler implementation
QItemSelection* KCheckableProxyModel_SuperMapSelectionFromSource(const KCheckableProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KCheckableProxyModel::mapSelectionFromSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMapSelectionFromSource(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KCheckableProxyModel_MapSelectionToSource(const KCheckableProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionToSource(*selection));
}

// Base class handler implementation
QItemSelection* KCheckableProxyModel_SuperMapSelectionToSource(const KCheckableProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KCheckableProxyModel::mapSelectionToSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMapSelectionToSource(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MapSelectionToSource_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCheckableProxyModel_Match(const KCheckableProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KCheckableProxyModel_SuperMatch(const KCheckableProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KCheckableProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KCheckableProxyModel_OnMatch(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_match_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_InsertColumns(KCheckableProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperInsertColumns(KCheckableProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KCheckableProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnInsertColumns(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_insertcolumns_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_InsertRows(KCheckableProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperInsertRows(KCheckableProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KCheckableProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnInsertRows(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_insertrows_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_RemoveColumns(KCheckableProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperRemoveColumns(KCheckableProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KCheckableProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnRemoveColumns(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_removecolumns_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_RemoveRows(KCheckableProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperRemoveRows(KCheckableProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KCheckableProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnRemoveRows(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_removerows_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_MoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KCheckableProxyModel_SuperMoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KCheckableProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMoveRows(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_moverows_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_MoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KCheckableProxyModel_SuperMoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KCheckableProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMoveColumns(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_movecolumns_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_Submit(KCheckableProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KCheckableProxyModel_SuperSubmit(KCheckableProxyModel* self) {
    return self->KCheckableProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSubmit(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_submit_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_Revert(KCheckableProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void KCheckableProxyModel_SuperRevert(KCheckableProxyModel* self) {
    self->KCheckableProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnRevert(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_revert_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KCheckableProxyModel_ItemData(const KCheckableProxyModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KCheckableProxyModel_SuperItemData(const KCheckableProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KCheckableProxyModel::itemData(*index);
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
void KCheckableProxyModel_OnItemData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_itemdata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_SetItemData(KCheckableProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperSetItemData(KCheckableProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KCheckableProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetItemData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_setitemdata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_SetHeaderData(KCheckableProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KCheckableProxyModel_SuperSetHeaderData(KCheckableProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KCheckableProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetHeaderData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_setheaderdata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_ClearItemData(KCheckableProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperClearItemData(KCheckableProxyModel* self, const QModelIndex* index) {
    return self->KCheckableProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnClearItemData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_clearitemdata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_Buddy(const KCheckableProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_SuperBuddy(const KCheckableProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KCheckableProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBuddy(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_buddy_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_CanFetchMore(const KCheckableProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperCanFetchMore(const KCheckableProxyModel* self, const QModelIndex* parent) {
    return self->KCheckableProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnCanFetchMore(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_canfetchmore_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_FetchMore(KCheckableProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KCheckableProxyModel_SuperFetchMore(KCheckableProxyModel* self, const QModelIndex* parent) {
    self->KCheckableProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnFetchMore(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_fetchmore_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_Sort(KCheckableProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KCheckableProxyModel_SuperSort(KCheckableProxyModel* self, int column, int order) {
    self->KCheckableProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSort(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_sort_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QSize* KCheckableProxyModel_Span(const KCheckableProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KCheckableProxyModel_SuperSpan(const KCheckableProxyModel* self, const QModelIndex* index) {
    return new QSize(self->KCheckableProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSpan(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_span_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_HasChildren(const KCheckableProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperHasChildren(const KCheckableProxyModel* self, const QModelIndex* parent) {
    return self->KCheckableProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnHasChildren(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_haschildren_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KCheckableProxyModel_MimeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KCheckableProxyModel_SuperMimeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KCheckableProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMimeData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_mimedata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_CanDropMimeData(const KCheckableProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperCanDropMimeData(const KCheckableProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KCheckableProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnCanDropMimeData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_candropmimedata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KCheckableProxyModel_MimeTypes(const KCheckableProxyModel* self) {
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
libqt_list /* of libqt_string */ KCheckableProxyModel_SuperMimeTypes(const KCheckableProxyModel* self) {
    QList<QString> _ret = self->KCheckableProxyModel::mimeTypes();
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
void KCheckableProxyModel_OnMimeTypes(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_mimetypes_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
int KCheckableProxyModel_SupportedDragActions(const KCheckableProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KCheckableProxyModel_SuperSupportedDragActions(const KCheckableProxyModel* self) {
    return static_cast<int>(self->KCheckableProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSupportedDragActions(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
int KCheckableProxyModel_SupportedDropActions(const KCheckableProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KCheckableProxyModel_SuperSupportedDropActions(const KCheckableProxyModel* self) {
    return static_cast<int>(self->KCheckableProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSupportedDropActions(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_MultiData(const KCheckableProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KCheckableProxyModel_SuperMultiData(const KCheckableProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KCheckableProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMultiData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        vkcheckableproxymodel->kcheckableproxymodel_multidata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_ResetInternalData(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel) {
        vkcheckableproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KCheckableProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KCheckableProxyModel_SuperResetInternalData(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->KCheckableProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KCheckableProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnResetInternalData(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_Event(KCheckableProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperEvent(KCheckableProxyModel* self, QEvent* event) {
    return self->KCheckableProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEvent(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_event_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCheckableProxyModel_EventFilter(KCheckableProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCheckableProxyModel_SuperEventFilter(KCheckableProxyModel* self, QObject* watched, QEvent* event) {
    return self->KCheckableProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEventFilter(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_eventfilter_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_TimerEvent(KCheckableProxyModel* self, QTimerEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel) {
        vkcheckableproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCheckableProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCheckableProxyModel_SuperTimerEvent(KCheckableProxyModel* self, QTimerEvent* event) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->KCheckableProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCheckableProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnTimerEvent(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_timerevent_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_ChildEvent(KCheckableProxyModel* self, QChildEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel) {
        vkcheckableproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCheckableProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCheckableProxyModel_SuperChildEvent(KCheckableProxyModel* self, QChildEvent* event) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->KCheckableProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCheckableProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnChildEvent(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_childevent_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_CustomEvent(KCheckableProxyModel* self, QEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel) {
        vkcheckableproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCheckableProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCheckableProxyModel_SuperCustomEvent(KCheckableProxyModel* self, QEvent* event) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->KCheckableProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCheckableProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnCustomEvent(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_customevent_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_ConnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel) {
        vkcheckableproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCheckableProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCheckableProxyModel_SuperConnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->KCheckableProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCheckableProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnConnectNotify(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_connectnotify_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCheckableProxyModel_DisconnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel) {
        vkcheckableproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCheckableProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCheckableProxyModel_SuperDisconnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->KCheckableProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCheckableProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnDisconnectNotify(KCheckableProxyModel* self, intptr_t slot) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self))
        vkcheckableproxymodel->kcheckableproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCheckableProxyModel_SetHandleSourceLayoutChanges(KCheckableProxyModel* self, bool handleSourceLayoutChanges) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else
        qFatal("Error: Protected method KCheckableProxyModel::setHandleSourceLayoutChanges called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_SetHandleSourceDataChanges(KCheckableProxyModel* self, bool handleSourceDataChanges) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
    } else
        qFatal("Error: Protected method KCheckableProxyModel::setHandleSourceDataChanges called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_CreateSourceIndex(const KCheckableProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        return new QModelIndex(vkcheckableproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method KCheckableProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_CreateIndex(const KCheckableProxyModel* self, int row, int column) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self)))
        return new QModelIndex(vkcheckableproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KCheckableProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_EncodeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkcheckableproxymodel->VirtualKCheckableProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KCheckableProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCheckableProxyModel_DecodeData(KCheckableProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        return vkcheckableproxymodel->VirtualKCheckableProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KCheckableProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_BeginInsertRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KCheckableProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_EndInsertRows(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_BeginRemoveRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KCheckableProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_EndRemoveRows(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCheckableProxyModel_BeginMoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        return vkcheckableproxymodel->VirtualKCheckableProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KCheckableProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_EndMoveRows(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_BeginInsertColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KCheckableProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_EndInsertColumns(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_BeginRemoveColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KCheckableProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_EndRemoveColumns(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCheckableProxyModel_BeginMoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        return vkcheckableproxymodel->VirtualKCheckableProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KCheckableProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_EndMoveColumns(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_BeginResetModel(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_EndResetModel(KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_ChangePersistentIndex(KCheckableProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
        vkcheckableproxymodel->VirtualKCheckableProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KCheckableProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KCheckableProxyModel_ChangePersistentIndexList(KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self)) {
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
        vkcheckableproxymodel->VirtualKCheckableProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KCheckableProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KCheckableProxyModel_PersistentIndexList(const KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self))) {
        QList<QModelIndex> _ret = vkcheckableproxymodel->VirtualKCheckableProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method KCheckableProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCheckableProxyModel_Sender(const KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self))) {
        return vkcheckableproxymodel->VirtualKCheckableProxyModel::sender();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCheckableProxyModel_SenderSignalIndex(const KCheckableProxyModel* self) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self))) {
        return vkcheckableproxymodel->VirtualKCheckableProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCheckableProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCheckableProxyModel_Receivers(const KCheckableProxyModel* self, const char* signal) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self))) {
        return vkcheckableproxymodel->VirtualKCheckableProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method KCheckableProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCheckableProxyModel_IsSignalConnected(const KCheckableProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self))) {
        return vkcheckableproxymodel->VirtualKCheckableProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCheckableProxyModel::isSignalConnected called without a directly constructed type");
}

void KCheckableProxyModel_Delete(KCheckableProxyModel* self) {
    delete self;
}
