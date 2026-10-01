#include <KSelectionProxyModel>
#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
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
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <kselectionproxymodel.h>
#include "libkselectionproxymodel.h"
#include "libkselectionproxymodel.hxx"

KSelectionProxyModel* KSelectionProxyModel_new(QItemSelectionModel* selectionModel) {
    return new VirtualKSelectionProxyModel(selectionModel);
}

KSelectionProxyModel* KSelectionProxyModel_new2() {
    return new VirtualKSelectionProxyModel();
}

KSelectionProxyModel* KSelectionProxyModel_new3(QItemSelectionModel* selectionModel, QObject* parent) {
    return new VirtualKSelectionProxyModel(selectionModel, parent);
}

QMetaObject* KSelectionProxyModel_MetaObject(const KSelectionProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSelectionProxyModel_Metacast(KSelectionProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSelectionProxyModel_Metacall(KSelectionProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSelectionProxyModel_Tr(const char* s) {
    auto _ret = KSelectionProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSelectionProxyModel_SetSourceModel(KSelectionProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

QItemSelectionModel* KSelectionProxyModel_SelectionModel(const KSelectionProxyModel* self) {
    return self->selectionModel();
}

void KSelectionProxyModel_SetSelectionModel(KSelectionProxyModel* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

void KSelectionProxyModel_SetFilterBehavior(KSelectionProxyModel* self, int behavior) {
    self->setFilterBehavior(static_cast<KSelectionProxyModel::FilterBehavior>(behavior));
}

int KSelectionProxyModel_FilterBehavior(const KSelectionProxyModel* self) {
    return static_cast<int>(self->filterBehavior());
}

QModelIndex* KSelectionProxyModel_MapFromSource(const KSelectionProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* KSelectionProxyModel_MapToSource(const KSelectionProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

QItemSelection* KSelectionProxyModel_MapSelectionFromSource(const KSelectionProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionFromSource(*selection));
}

QItemSelection* KSelectionProxyModel_MapSelectionToSource(const KSelectionProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionToSource(*selection));
}

int KSelectionProxyModel_Flags(const KSelectionProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

QVariant* KSelectionProxyModel_Data(const KSelectionProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

int KSelectionProxyModel_RowCount(const KSelectionProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* KSelectionProxyModel_HeaderData(const KSelectionProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

QMimeData* KSelectionProxyModel_MimeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

libqt_list /* of libqt_string */ KSelectionProxyModel_MimeTypes(const KSelectionProxyModel* self) {
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

int KSelectionProxyModel_SupportedDropActions(const KSelectionProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

bool KSelectionProxyModel_DropMimeData(KSelectionProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool KSelectionProxyModel_HasChildren(const KSelectionProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

QModelIndex* KSelectionProxyModel_Index(const KSelectionProxyModel* self, int param1, int param2, const QModelIndex* param3) {
    return new QModelIndex(self->index(static_cast<int>(param1), static_cast<int>(param2), *param3));
}

QModelIndex* KSelectionProxyModel_Parent(const KSelectionProxyModel* self, const QModelIndex* param1) {
    return new QModelIndex(self->parent(*param1));
}

int KSelectionProxyModel_ColumnCount(const KSelectionProxyModel* self, const QModelIndex* param1) {
    return self->columnCount(*param1);
}

libqt_list /* of QModelIndex* */ KSelectionProxyModel_Match(const KSelectionProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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

libqt_string KSelectionProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = KSelectionProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSelectionProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSelectionProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSelectionProxyModel_SuperMetaObject(const KSelectionProxyModel* self) {
    return (QMetaObject*)self->KSelectionProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMetaObject(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_metaobject_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSelectionProxyModel_SuperMetacast(KSelectionProxyModel* self, const char* param1) {
    return self->KSelectionProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMetacast(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_metacast_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSelectionProxyModel_SuperMetacall(KSelectionProxyModel* self, int param1, int param2, void** param3) {
    return self->KSelectionProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMetacall(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_metacall_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void KSelectionProxyModel_SuperSetSourceModel(KSelectionProxyModel* self, QAbstractItemModel* sourceModel) {
    self->KSelectionProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSetSourceModel(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SetSourceModel_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_SuperMapFromSource(const KSelectionProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->KSelectionProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMapFromSource(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_mapfromsource_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MapFromSource_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_SuperMapToSource(const KSelectionProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->KSelectionProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMapToSource(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_maptosource_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MapToSource_Callback>(slot);
}

// Base class handler implementation
QItemSelection* KSelectionProxyModel_SuperMapSelectionFromSource(const KSelectionProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KSelectionProxyModel::mapSelectionFromSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMapSelectionFromSource(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Base class handler implementation
QItemSelection* KSelectionProxyModel_SuperMapSelectionToSource(const KSelectionProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KSelectionProxyModel::mapSelectionToSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMapSelectionToSource(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MapSelectionToSource_Callback>(slot);
}

// Base class handler implementation
int KSelectionProxyModel_SuperFlags(const KSelectionProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KSelectionProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnFlags(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_flags_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Flags_Callback>(slot);
}

// Base class handler implementation
QVariant* KSelectionProxyModel_SuperData(const KSelectionProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KSelectionProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_data_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Data_Callback>(slot);
}

// Base class handler implementation
int KSelectionProxyModel_SuperRowCount(const KSelectionProxyModel* self, const QModelIndex* parent) {
    return self->KSelectionProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnRowCount(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_rowcount_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* KSelectionProxyModel_SuperHeaderData(const KSelectionProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->KSelectionProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnHeaderData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_headerdata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
QMimeData* KSelectionProxyModel_SuperMimeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KSelectionProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMimeData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_mimedata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MimeData_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ KSelectionProxyModel_SuperMimeTypes(const KSelectionProxyModel* self) {
    QList<QString> _ret = self->KSelectionProxyModel::mimeTypes();
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
void KSelectionProxyModel_OnMimeTypes(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_mimetypes_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
int KSelectionProxyModel_SuperSupportedDropActions(const KSelectionProxyModel* self) {
    return static_cast<int>(self->KSelectionProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSupportedDropActions(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperDropMimeData(KSelectionProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KSelectionProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnDropMimeData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_dropmimedata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperHasChildren(const KSelectionProxyModel* self, const QModelIndex* parent) {
    return self->KSelectionProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnHasChildren(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_haschildren_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_SuperIndex(const KSelectionProxyModel* self, int param1, int param2, const QModelIndex* param3) {
    return new QModelIndex(self->KSelectionProxyModel::index(static_cast<int>(param1), static_cast<int>(param2), *param3));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnIndex(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_index_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_SuperParent(const KSelectionProxyModel* self, const QModelIndex* param1) {
    return new QModelIndex(self->KSelectionProxyModel::parent(*param1));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnParent(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_parent_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Parent_Callback>(slot);
}

// Base class handler implementation
int KSelectionProxyModel_SuperColumnCount(const KSelectionProxyModel* self, const QModelIndex* param1) {
    return self->KSelectionProxyModel::columnCount(*param1);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnColumnCount(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_columncount_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KSelectionProxyModel_SuperMatch(const KSelectionProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KSelectionProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KSelectionProxyModel_OnMatch(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_match_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_Submit(KSelectionProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KSelectionProxyModel_SuperSubmit(KSelectionProxyModel* self) {
    return self->KSelectionProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSubmit(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_submit_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_Revert(KSelectionProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void KSelectionProxyModel_SuperRevert(KSelectionProxyModel* self) {
    self->KSelectionProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnRevert(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_revert_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KSelectionProxyModel_ItemData(const KSelectionProxyModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KSelectionProxyModel_SuperItemData(const KSelectionProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KSelectionProxyModel::itemData(*index);
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
void KSelectionProxyModel_OnItemData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_itemdata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_SetData(KSelectionProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KSelectionProxyModel_SuperSetData(KSelectionProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KSelectionProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSetData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_setdata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SetData_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_SetItemData(KSelectionProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperSetItemData(KSelectionProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KSelectionProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSetItemData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_setitemdata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_SetHeaderData(KSelectionProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KSelectionProxyModel_SuperSetHeaderData(KSelectionProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KSelectionProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSetHeaderData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_setheaderdata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_ClearItemData(KSelectionProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperClearItemData(KSelectionProxyModel* self, const QModelIndex* index) {
    return self->KSelectionProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnClearItemData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_clearitemdata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KSelectionProxyModel_Buddy(const KSelectionProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_SuperBuddy(const KSelectionProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KSelectionProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBuddy(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_buddy_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_CanFetchMore(const KSelectionProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperCanFetchMore(const KSelectionProxyModel* self, const QModelIndex* parent) {
    return self->KSelectionProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnCanFetchMore(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_canfetchmore_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_FetchMore(KSelectionProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KSelectionProxyModel_SuperFetchMore(KSelectionProxyModel* self, const QModelIndex* parent) {
    self->KSelectionProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnFetchMore(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_fetchmore_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_Sort(KSelectionProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KSelectionProxyModel_SuperSort(KSelectionProxyModel* self, int column, int order) {
    self->KSelectionProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSort(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_sort_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QSize* KSelectionProxyModel_Span(const KSelectionProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KSelectionProxyModel_SuperSpan(const KSelectionProxyModel* self, const QModelIndex* index) {
    return new QSize(self->KSelectionProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSpan(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_span_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KSelectionProxyModel_Sibling(const KSelectionProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_SuperSibling(const KSelectionProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KSelectionProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSibling(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_sibling_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_CanDropMimeData(const KSelectionProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperCanDropMimeData(const KSelectionProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KSelectionProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnCanDropMimeData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_candropmimedata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KSelectionProxyModel_SupportedDragActions(const KSelectionProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KSelectionProxyModel_SuperSupportedDragActions(const KSelectionProxyModel* self) {
    return static_cast<int>(self->KSelectionProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSupportedDragActions(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KSelectionProxyModel_RoleNames(const KSelectionProxyModel* self) {
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
libqt_map /* of int to libqt_string */ KSelectionProxyModel_SuperRoleNames(const KSelectionProxyModel* self) {
    QHash<int, QByteArray> _ret = self->KSelectionProxyModel::roleNames();
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
void KSelectionProxyModel_OnRoleNames(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_rolenames_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_InsertRows(KSelectionProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperInsertRows(KSelectionProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KSelectionProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnInsertRows(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_insertrows_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_InsertColumns(KSelectionProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperInsertColumns(KSelectionProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KSelectionProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnInsertColumns(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_insertcolumns_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_RemoveRows(KSelectionProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperRemoveRows(KSelectionProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KSelectionProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnRemoveRows(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_removerows_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_RemoveColumns(KSelectionProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperRemoveColumns(KSelectionProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KSelectionProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnRemoveColumns(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_removecolumns_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_MoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KSelectionProxyModel_SuperMoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KSelectionProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMoveRows(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_moverows_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_MoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KSelectionProxyModel_SuperMoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KSelectionProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMoveColumns(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_movecolumns_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_MultiData(const KSelectionProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KSelectionProxyModel_SuperMultiData(const KSelectionProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KSelectionProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMultiData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        vkselectionproxymodel->kselectionproxymodel_multidata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_ResetInternalData(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel) {
        vkselectionproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KSelectionProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionProxyModel_SuperResetInternalData(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->KSelectionProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KSelectionProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnResetInternalData(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_Event(KSelectionProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperEvent(KSelectionProxyModel* self, QEvent* event) {
    return self->KSelectionProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEvent(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_event_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionProxyModel_EventFilter(KSelectionProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSelectionProxyModel_SuperEventFilter(KSelectionProxyModel* self, QObject* watched, QEvent* event) {
    return self->KSelectionProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEventFilter(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_eventfilter_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_TimerEvent(KSelectionProxyModel* self, QTimerEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel) {
        vkselectionproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectionProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionProxyModel_SuperTimerEvent(KSelectionProxyModel* self, QTimerEvent* event) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->KSelectionProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectionProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnTimerEvent(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_timerevent_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_ChildEvent(KSelectionProxyModel* self, QChildEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel) {
        vkselectionproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectionProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionProxyModel_SuperChildEvent(KSelectionProxyModel* self, QChildEvent* event) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->KSelectionProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectionProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnChildEvent(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_childevent_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_CustomEvent(KSelectionProxyModel* self, QEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel) {
        vkselectionproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectionProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionProxyModel_SuperCustomEvent(KSelectionProxyModel* self, QEvent* event) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->KSelectionProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectionProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnCustomEvent(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_customevent_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_ConnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel) {
        vkselectionproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelectionProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionProxyModel_SuperConnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->KSelectionProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelectionProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnConnectNotify(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_connectnotify_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSelectionProxyModel_DisconnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel) {
        vkselectionproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelectionProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionProxyModel_SuperDisconnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->KSelectionProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelectionProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnDisconnectNotify(KSelectionProxyModel* self, intptr_t slot) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self))
        vkselectionproxymodel->kselectionproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QPersistentModelIndex* */ KSelectionProxyModel_SourceRootIndexes(const KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self))) {
        QList<QPersistentModelIndex> _ret = vkselectionproxymodel->VirtualKSelectionProxyModel::sourceRootIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** _arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QPersistentModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KSelectionProxyModel::sourceRootIndexes called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KSelectionProxyModel_CreateSourceIndex(const KSelectionProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        return new QModelIndex(vkselectionproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method KSelectionProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KSelectionProxyModel_CreateIndex(const KSelectionProxyModel* self, int row, int column) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self)))
        return new QModelIndex(vkselectionproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KSelectionProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_EncodeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkselectionproxymodel->VirtualKSelectionProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KSelectionProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelectionProxyModel_DecodeData(KSelectionProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        return vkselectionproxymodel->VirtualKSelectionProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KSelectionProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_BeginInsertRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KSelectionProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_EndInsertRows(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_BeginRemoveRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KSelectionProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_EndRemoveRows(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelectionProxyModel_BeginMoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        return vkselectionproxymodel->VirtualKSelectionProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KSelectionProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_EndMoveRows(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_BeginInsertColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KSelectionProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_EndInsertColumns(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_BeginRemoveColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KSelectionProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_EndRemoveColumns(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelectionProxyModel_BeginMoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        return vkselectionproxymodel->VirtualKSelectionProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KSelectionProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_EndMoveColumns(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_BeginResetModel(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_EndResetModel(KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_ChangePersistentIndex(KSelectionProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
        vkselectionproxymodel->VirtualKSelectionProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KSelectionProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelectionProxyModel_ChangePersistentIndexList(KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self)) {
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
        vkselectionproxymodel->VirtualKSelectionProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KSelectionProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KSelectionProxyModel_PersistentIndexList(const KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self))) {
        QList<QModelIndex> _ret = vkselectionproxymodel->VirtualKSelectionProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method KSelectionProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSelectionProxyModel_Sender(const KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self))) {
        return vkselectionproxymodel->VirtualKSelectionProxyModel::sender();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelectionProxyModel_SenderSignalIndex(const KSelectionProxyModel* self) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self))) {
        return vkselectionproxymodel->VirtualKSelectionProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSelectionProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelectionProxyModel_Receivers(const KSelectionProxyModel* self, const char* signal) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self))) {
        return vkselectionproxymodel->VirtualKSelectionProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method KSelectionProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelectionProxyModel_IsSignalConnected(const KSelectionProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self))) {
        return vkselectionproxymodel->VirtualKSelectionProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSelectionProxyModel::isSignalConnected called without a directly constructed type");
}

void KSelectionProxyModel_Connect_RootIndexAboutToBeRemoved(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*, QModelIndex*) = reinterpret_cast<void (*)(KSelectionProxyModel*, QModelIndex*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::rootIndexAboutToBeRemoved, [self, slotFunc](const QModelIndex& removeRootIndex) {
        const QModelIndex& removeRootIndex_ret = removeRootIndex;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&removeRootIndex_ret);
        slotFunc(self, sigval1);
    });
}

void KSelectionProxyModel_Connect_RootIndexAdded(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*, QModelIndex*) = reinterpret_cast<void (*)(KSelectionProxyModel*, QModelIndex*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::rootIndexAdded, [self, slotFunc](const QModelIndex& newIndex) {
        const QModelIndex& newIndex_ret = newIndex;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&newIndex_ret);
        slotFunc(self, sigval1);
    });
}

void KSelectionProxyModel_Connect_RootSelectionAboutToBeRemoved(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*, QItemSelection*) = reinterpret_cast<void (*)(KSelectionProxyModel*, QItemSelection*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::rootSelectionAboutToBeRemoved, [self, slotFunc](const QItemSelection& selection) {
        const QItemSelection& selection_ret = selection;
        // Cast returned reference into pointer
        QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
        slotFunc(self, sigval1);
    });
}

void KSelectionProxyModel_Connect_RootSelectionAdded(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*, QItemSelection*) = reinterpret_cast<void (*)(KSelectionProxyModel*, QItemSelection*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::rootSelectionAdded, [self, slotFunc](const QItemSelection& selection) {
        const QItemSelection& selection_ret = selection;
        // Cast returned reference into pointer
        QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
        slotFunc(self, sigval1);
    });
}

void KSelectionProxyModel_Connect_SelectionModelChanged(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*) = reinterpret_cast<void (*)(KSelectionProxyModel*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::selectionModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSelectionProxyModel_Connect_FilterBehaviorChanged(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*) = reinterpret_cast<void (*)(KSelectionProxyModel*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::filterBehaviorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSelectionProxyModel_Delete(KSelectionProxyModel* self) {
    delete self;
}
