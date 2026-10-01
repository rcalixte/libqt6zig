#include <KCategorizedSortFilterProxyModel>
#include <KDirSortFilterProxyModel>
#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QFileInfo>
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
#include <QSortFilterProxyModel>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <kdirsortfilterproxymodel.h>
#include "libkdirsortfilterproxymodel.h"
#include "libkdirsortfilterproxymodel.hxx"

KDirSortFilterProxyModel* KDirSortFilterProxyModel_new() {
    return new VirtualKDirSortFilterProxyModel();
}

KDirSortFilterProxyModel* KDirSortFilterProxyModel_new2(QObject* parent) {
    return new VirtualKDirSortFilterProxyModel(parent);
}

QMetaObject* KDirSortFilterProxyModel_MetaObject(const KDirSortFilterProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDirSortFilterProxyModel_Metacast(KDirSortFilterProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDirSortFilterProxyModel_Metacall(KDirSortFilterProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDirSortFilterProxyModel_Tr(const char* s) {
    auto _ret = KDirSortFilterProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KDirSortFilterProxyModel_HasChildren(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

bool KDirSortFilterProxyModel_CanFetchMore(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

int KDirSortFilterProxyModel_PointsForPermissions(const QFileInfo* info) {
    return KDirSortFilterProxyModel::pointsForPermissions(*info);
}

void KDirSortFilterProxyModel_SetSortFoldersFirst(KDirSortFilterProxyModel* self, bool foldersFirst) {
    self->setSortFoldersFirst(foldersFirst);
}

bool KDirSortFilterProxyModel_SortFoldersFirst(const KDirSortFilterProxyModel* self) {
    return self->sortFoldersFirst();
}

void KDirSortFilterProxyModel_SetSortHiddenFilesLast(KDirSortFilterProxyModel* self, bool hiddenFilesLast) {
    self->setSortHiddenFilesLast(hiddenFilesLast);
}

bool KDirSortFilterProxyModel_SortHiddenFilesLast(const KDirSortFilterProxyModel* self) {
    return self->sortHiddenFilesLast();
}

int KDirSortFilterProxyModel_SupportedDragOptions(const KDirSortFilterProxyModel* self) {
    return static_cast<int>(self->supportedDragOptions());
}

bool KDirSortFilterProxyModel_SubSortLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel) {
        return vkdirsortfilterproxymodel->subSortLessThan(*left, *right);
    }
    qFatal("Error: Protected method KDirSortFilterProxyModel::subSortLessThan called without a directly constructed type");
}

libqt_string KDirSortFilterProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = KDirSortFilterProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDirSortFilterProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KDirSortFilterProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KDirSortFilterProxyModel_SuperMetaObject(const KDirSortFilterProxyModel* self) {
    return (QMetaObject*)self->KDirSortFilterProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMetaObject(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_metaobject_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDirSortFilterProxyModel_SuperMetacast(KDirSortFilterProxyModel* self, const char* param1) {
    return self->KDirSortFilterProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMetacast(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_metacast_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDirSortFilterProxyModel_SuperMetacall(KDirSortFilterProxyModel* self, int param1, int param2, void** param3) {
    return self->KDirSortFilterProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMetacall(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_metacall_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperHasChildren(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnHasChildren(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_haschildren_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperCanFetchMore(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCanFetchMore(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_canfetchmore_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CanFetchMore_Callback>(slot);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperSubSortLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->KDirSortFilterProxyModel::subSortLessThan(*left, *right);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::subSortLessThan called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSubSortLessThan(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_subsortlessthan_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SubSortLessThan_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_Sort(KDirSortFilterProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperSort(KDirSortFilterProxyModel* self, int column, int order) {
    self->KDirSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSort(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_sort_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_LessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel) {
        return vkdirsortfilterproxymodel->lessThan(*left, *right);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::lessThan called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->KDirSortFilterProxyModel::lessThan(*left, *right);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::lessThan called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnLessThan(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_lessthan_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_LessThan_Callback>(slot);
}

// Derived class handler implementation
int KDirSortFilterProxyModel_CompareCategories(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel) {
        return vkdirsortfilterproxymodel->compareCategories(*left, *right);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::compareCategories called without a directly constructed type");
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_SuperCompareCategories(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->KDirSortFilterProxyModel::compareCategories(*left, *right);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::compareCategories called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCompareCategories(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_comparecategories_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CompareCategories_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_SetSourceModel(KDirSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperSetSourceModel(KDirSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    self->KDirSortFilterProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSetSourceModel(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SetSourceModel_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_MapToSource(const KDirSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_SuperMapToSource(const KDirSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->KDirSortFilterProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMapToSource(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_maptosource_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MapToSource_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_MapFromSource(const KDirSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_SuperMapFromSource(const KDirSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->KDirSortFilterProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMapFromSource(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_mapfromsource_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MapFromSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KDirSortFilterProxyModel_MapSelectionToSource(const KDirSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    return new QItemSelection(self->mapSelectionToSource(*proxySelection));
}

// Base class handler implementation
QItemSelection* KDirSortFilterProxyModel_SuperMapSelectionToSource(const KDirSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    return new QItemSelection(self->KDirSortFilterProxyModel::mapSelectionToSource(*proxySelection));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMapSelectionToSource(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MapSelectionToSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KDirSortFilterProxyModel_MapSelectionFromSource(const KDirSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    return new QItemSelection(self->mapSelectionFromSource(*sourceSelection));
}

// Base class handler implementation
QItemSelection* KDirSortFilterProxyModel_SuperMapSelectionFromSource(const KDirSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    return new QItemSelection(self->KDirSortFilterProxyModel::mapSelectionFromSource(*sourceSelection));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMapSelectionFromSource(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_FilterAcceptsRow(const KDirSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel) {
        return vkdirsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::filterAcceptsRow called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperFilterAcceptsRow(const KDirSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->KDirSortFilterProxyModel::filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::filterAcceptsRow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnFilterAcceptsRow(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_filteracceptsrow_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_FilterAcceptsRow_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_FilterAcceptsColumn(const KDirSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel) {
        return vkdirsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::filterAcceptsColumn called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperFilterAcceptsColumn(const KDirSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->KDirSortFilterProxyModel::filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::filterAcceptsColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnFilterAcceptsColumn(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_filteracceptscolumn_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_FilterAcceptsColumn_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_Index(const KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_SuperIndex(const KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KDirSortFilterProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnIndex(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_index_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_Parent(const KDirSortFilterProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_SuperParent(const KDirSortFilterProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->KDirSortFilterProxyModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnParent(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_parent_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Parent_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_Sibling(const KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_SuperSibling(const KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KDirSortFilterProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSibling(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_sibling_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
int KDirSortFilterProxyModel_RowCount(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Base class handler implementation
int KDirSortFilterProxyModel_SuperRowCount(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnRowCount(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_rowcount_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
int KDirSortFilterProxyModel_ColumnCount(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Base class handler implementation
int KDirSortFilterProxyModel_SuperColumnCount(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnColumnCount(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_columncount_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
QVariant* KDirSortFilterProxyModel_Data(const KDirSortFilterProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KDirSortFilterProxyModel_SuperData(const KDirSortFilterProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KDirSortFilterProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_data_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Data_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_SetData(KDirSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperSetData(KDirSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KDirSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSetData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_setdata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KDirSortFilterProxyModel_HeaderData(const KDirSortFilterProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KDirSortFilterProxyModel_SuperHeaderData(const KDirSortFilterProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->KDirSortFilterProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnHeaderData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_headerdata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_SetHeaderData(KDirSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperSetHeaderData(KDirSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KDirSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSetHeaderData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_setheaderdata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KDirSortFilterProxyModel_MimeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KDirSortFilterProxyModel_SuperMimeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KDirSortFilterProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMimeData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_mimedata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_DropMimeData(KDirSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperDropMimeData(KDirSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnDropMimeData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_dropmimedata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_InsertRows(KDirSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperInsertRows(KDirSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnInsertRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_insertrows_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_InsertColumns(KDirSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperInsertColumns(KDirSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnInsertColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_insertcolumns_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_RemoveRows(KDirSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperRemoveRows(KDirSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnRemoveRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_removerows_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_RemoveColumns(KDirSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperRemoveColumns(KDirSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnRemoveColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_removecolumns_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_FetchMore(KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperFetchMore(KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    self->KDirSortFilterProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnFetchMore(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_fetchmore_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
int KDirSortFilterProxyModel_Flags(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KDirSortFilterProxyModel_SuperFlags(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KDirSortFilterProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnFlags(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_flags_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Flags_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_Buddy(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_SuperBuddy(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KDirSortFilterProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBuddy(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_buddy_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_Match(const KDirSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_SuperMatch(const KDirSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KDirSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KDirSortFilterProxyModel_OnMatch(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_match_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KDirSortFilterProxyModel_Span(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KDirSortFilterProxyModel_SuperSpan(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    return new QSize(self->KDirSortFilterProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSpan(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_span_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KDirSortFilterProxyModel_MimeTypes(const KDirSortFilterProxyModel* self) {
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
libqt_list /* of libqt_string */ KDirSortFilterProxyModel_SuperMimeTypes(const KDirSortFilterProxyModel* self) {
    QList<QString> _ret = self->KDirSortFilterProxyModel::mimeTypes();
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
void KDirSortFilterProxyModel_OnMimeTypes(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_mimetypes_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
int KDirSortFilterProxyModel_SupportedDropActions(const KDirSortFilterProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KDirSortFilterProxyModel_SuperSupportedDropActions(const KDirSortFilterProxyModel* self) {
    return static_cast<int>(self->KDirSortFilterProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSupportedDropActions(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_Submit(KDirSortFilterProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperSubmit(KDirSortFilterProxyModel* self) {
    return self->KDirSortFilterProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSubmit(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_submit_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_Revert(KDirSortFilterProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperRevert(KDirSortFilterProxyModel* self) {
    self->KDirSortFilterProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnRevert(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_revert_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KDirSortFilterProxyModel_ItemData(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KDirSortFilterProxyModel_SuperItemData(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KDirSortFilterProxyModel::itemData(*index);
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
void KDirSortFilterProxyModel_OnItemData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_itemdata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_SetItemData(KDirSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperSetItemData(KDirSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KDirSortFilterProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSetItemData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_setitemdata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_ClearItemData(KDirSortFilterProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperClearItemData(KDirSortFilterProxyModel* self, const QModelIndex* index) {
    return self->KDirSortFilterProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnClearItemData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_clearitemdata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_CanDropMimeData(const KDirSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperCanDropMimeData(const KDirSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KDirSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCanDropMimeData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_candropmimedata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KDirSortFilterProxyModel_SupportedDragActions(const KDirSortFilterProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KDirSortFilterProxyModel_SuperSupportedDragActions(const KDirSortFilterProxyModel* self) {
    return static_cast<int>(self->KDirSortFilterProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSupportedDragActions(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KDirSortFilterProxyModel_RoleNames(const KDirSortFilterProxyModel* self) {
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
libqt_map /* of int to libqt_string */ KDirSortFilterProxyModel_SuperRoleNames(const KDirSortFilterProxyModel* self) {
    QHash<int, QByteArray> _ret = self->KDirSortFilterProxyModel::roleNames();
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
void KDirSortFilterProxyModel_OnRoleNames(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_rolenames_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_MoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperMoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KDirSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMoveRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_moverows_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_MoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperMoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KDirSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMoveColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_movecolumns_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_MultiData(const KDirSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperMultiData(const KDirSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KDirSortFilterProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMultiData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_multidata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_ResetInternalData(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel) {
        vkdirsortfilterproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperResetInternalData(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->KDirSortFilterProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnResetInternalData(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_Event(KDirSortFilterProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperEvent(KDirSortFilterProxyModel* self, QEvent* event) {
    return self->KDirSortFilterProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEvent(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_event_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_EventFilter(KDirSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KDirSortFilterProxyModel_SuperEventFilter(KDirSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    return self->KDirSortFilterProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEventFilter(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_eventfilter_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_TimerEvent(KDirSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel) {
        vkdirsortfilterproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperTimerEvent(KDirSortFilterProxyModel* self, QTimerEvent* event) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->KDirSortFilterProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnTimerEvent(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_timerevent_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_ChildEvent(KDirSortFilterProxyModel* self, QChildEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel) {
        vkdirsortfilterproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperChildEvent(KDirSortFilterProxyModel* self, QChildEvent* event) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->KDirSortFilterProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnChildEvent(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_childevent_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_CustomEvent(KDirSortFilterProxyModel* self, QEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel) {
        vkdirsortfilterproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperCustomEvent(KDirSortFilterProxyModel* self, QEvent* event) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->KDirSortFilterProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCustomEvent(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_customevent_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_ConnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel) {
        vkdirsortfilterproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperConnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->KDirSortFilterProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnConnectNotify(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_connectnotify_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDirSortFilterProxyModel_DisconnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel) {
        vkdirsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_SuperDisconnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->KDirSortFilterProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirSortFilterProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnDisconnectNotify(KDirSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self))
        vkdirsortfilterproxymodel->kdirsortfilterproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_InvalidateFilter(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::invalidateFilter();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::invalidateFilter called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_InvalidateRowsFilter(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::invalidateRowsFilter();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::invalidateRowsFilter called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_InvalidateColumnsFilter(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::invalidateColumnsFilter();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::invalidateColumnsFilter called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_CreateSourceIndex(const KDirSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        return new QModelIndex(vkdirsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method KDirSortFilterProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_CreateIndex(const KDirSortFilterProxyModel* self, int row, int column) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self)))
        return new QModelIndex(vkdirsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KDirSortFilterProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_EncodeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirSortFilterProxyModel_DecodeData(KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        return vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_BeginInsertRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_EndInsertRows(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_BeginRemoveRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_EndRemoveRows(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirSortFilterProxyModel_BeginMoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        return vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_EndMoveRows(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_BeginInsertColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_EndInsertColumns(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_BeginRemoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_EndRemoveColumns(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirSortFilterProxyModel_BeginMoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        return vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_EndMoveColumns(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_BeginResetModel(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_EndResetModel(KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_ChangePersistentIndex(KDirSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirSortFilterProxyModel_ChangePersistentIndexList(KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self)) {
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
        vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_PersistentIndexList(const KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        QList<QModelIndex> _ret = vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method KDirSortFilterProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDirSortFilterProxyModel_Sender(const KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::sender();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirSortFilterProxyModel_SenderSignalIndex(const KDirSortFilterProxyModel* self) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirSortFilterProxyModel_Receivers(const KDirSortFilterProxyModel* self, const char* signal) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirSortFilterProxyModel_IsSignalConnected(const KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self))) {
        return vkdirsortfilterproxymodel->VirtualKDirSortFilterProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDirSortFilterProxyModel::isSignalConnected called without a directly constructed type");
}

void KDirSortFilterProxyModel_Delete(KDirSortFilterProxyModel* self) {
    delete self;
}
