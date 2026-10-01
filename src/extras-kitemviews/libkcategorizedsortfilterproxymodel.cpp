#include <KCategorizedSortFilterProxyModel>
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
#include <QSortFilterProxyModel>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <kcategorizedsortfilterproxymodel.h>
#include "libkcategorizedsortfilterproxymodel.h"
#include "libkcategorizedsortfilterproxymodel.hxx"

KCategorizedSortFilterProxyModel* KCategorizedSortFilterProxyModel_new() {
    return new VirtualKCategorizedSortFilterProxyModel();
}

KCategorizedSortFilterProxyModel* KCategorizedSortFilterProxyModel_new2(QObject* parent) {
    return new VirtualKCategorizedSortFilterProxyModel(parent);
}

QMetaObject* KCategorizedSortFilterProxyModel_MetaObject(const KCategorizedSortFilterProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCategorizedSortFilterProxyModel_Metacast(KCategorizedSortFilterProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCategorizedSortFilterProxyModel_Metacall(KCategorizedSortFilterProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCategorizedSortFilterProxyModel_Tr(const char* s) {
    auto _ret = KCategorizedSortFilterProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCategorizedSortFilterProxyModel_Sort(KCategorizedSortFilterProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool KCategorizedSortFilterProxyModel_IsCategorizedModel(const KCategorizedSortFilterProxyModel* self) {
    return self->isCategorizedModel();
}

void KCategorizedSortFilterProxyModel_SetCategorizedModel(KCategorizedSortFilterProxyModel* self, bool categorizedModel) {
    self->setCategorizedModel(categorizedModel);
}

int KCategorizedSortFilterProxyModel_SortColumn(const KCategorizedSortFilterProxyModel* self) {
    return self->sortColumn();
}

int KCategorizedSortFilterProxyModel_SortOrder(const KCategorizedSortFilterProxyModel* self) {
    return static_cast<int>(self->sortOrder());
}

void KCategorizedSortFilterProxyModel_SetSortCategoriesByNaturalComparison(KCategorizedSortFilterProxyModel* self, bool sortCategoriesByNaturalComparison) {
    self->setSortCategoriesByNaturalComparison(sortCategoriesByNaturalComparison);
}

bool KCategorizedSortFilterProxyModel_SortCategoriesByNaturalComparison(const KCategorizedSortFilterProxyModel* self) {
    return self->sortCategoriesByNaturalComparison();
}

bool KCategorizedSortFilterProxyModel_LessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        return vkcategorizedsortfilterproxymodel->lessThan(*left, *right);
    }
    qFatal("Error: Protected method KCategorizedSortFilterProxyModel::lessThan called without a directly constructed type");
}

bool KCategorizedSortFilterProxyModel_SubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        return vkcategorizedsortfilterproxymodel->subSortLessThan(*left, *right);
    }
    qFatal("Error: Protected method KCategorizedSortFilterProxyModel::subSortLessThan called without a directly constructed type");
}

int KCategorizedSortFilterProxyModel_CompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        return vkcategorizedsortfilterproxymodel->compareCategories(*left, *right);
    }
    qFatal("Error: Protected method KCategorizedSortFilterProxyModel::compareCategories called without a directly constructed type");
}

libqt_string KCategorizedSortFilterProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = KCategorizedSortFilterProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCategorizedSortFilterProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCategorizedSortFilterProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCategorizedSortFilterProxyModel_SuperMetaObject(const KCategorizedSortFilterProxyModel* self) {
    return (QMetaObject*)self->KCategorizedSortFilterProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMetaObject(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_metaobject_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCategorizedSortFilterProxyModel_SuperMetacast(KCategorizedSortFilterProxyModel* self, const char* param1) {
    return self->KCategorizedSortFilterProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMetacast(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_metacast_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_SuperMetacall(KCategorizedSortFilterProxyModel* self, int param1, int param2, void** param3) {
    return self->KCategorizedSortFilterProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMetacall(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_metacall_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperSort(KCategorizedSortFilterProxyModel* self, int column, int order) {
    self->KCategorizedSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSort(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_sort_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Sort_Callback>(slot);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::lessThan(*left, *right);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::lessThan called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnLessThan(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_lessthan_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_LessThan_Callback>(slot);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperSubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::subSortLessThan(*left, *right);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::subSortLessThan called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSubSortLessThan(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_subsortlessthan_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SubSortLessThan_Callback>(slot);
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_SuperCompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::compareCategories(*left, *right);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::compareCategories called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCompareCategories(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_comparecategories_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CompareCategories_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_SetSourceModel(KCategorizedSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperSetSourceModel(KCategorizedSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    self->KCategorizedSortFilterProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSetSourceModel(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SetSourceModel_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_MapToSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_SuperMapToSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->KCategorizedSortFilterProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMapToSource(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_maptosource_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MapToSource_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_MapFromSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_SuperMapFromSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->KCategorizedSortFilterProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMapFromSource(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_mapfromsource_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MapFromSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KCategorizedSortFilterProxyModel_MapSelectionToSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    return new QItemSelection(self->mapSelectionToSource(*proxySelection));
}

// Base class handler implementation
QItemSelection* KCategorizedSortFilterProxyModel_SuperMapSelectionToSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    return new QItemSelection(self->KCategorizedSortFilterProxyModel::mapSelectionToSource(*proxySelection));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMapSelectionToSource(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MapSelectionToSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KCategorizedSortFilterProxyModel_MapSelectionFromSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    return new QItemSelection(self->mapSelectionFromSource(*sourceSelection));
}

// Base class handler implementation
QItemSelection* KCategorizedSortFilterProxyModel_SuperMapSelectionFromSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    return new QItemSelection(self->KCategorizedSortFilterProxyModel::mapSelectionFromSource(*sourceSelection));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMapSelectionFromSource(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_FilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel) {
        return vkcategorizedsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::filterAcceptsRow called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperFilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::filterAcceptsRow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnFilterAcceptsRow(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_filteracceptsrow_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_FilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel) {
        return vkcategorizedsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::filterAcceptsColumn called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperFilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::filterAcceptsColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnFilterAcceptsColumn(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_filteracceptscolumn_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_Index(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_SuperIndex(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KCategorizedSortFilterProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnIndex(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_index_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_Parent(const KCategorizedSortFilterProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_SuperParent(const KCategorizedSortFilterProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->KCategorizedSortFilterProxyModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnParent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_parent_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Parent_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_Sibling(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_SuperSibling(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KCategorizedSortFilterProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSibling(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_sibling_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_RowCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_SuperRowCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnRowCount(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_rowcount_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_ColumnCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_SuperColumnCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnColumnCount(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_columncount_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_HasChildren(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperHasChildren(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnHasChildren(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_haschildren_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCategorizedSortFilterProxyModel_Data(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KCategorizedSortFilterProxyModel_SuperData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KCategorizedSortFilterProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_data_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Data_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_SetData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperSetData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KCategorizedSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSetData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_setdata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCategorizedSortFilterProxyModel_HeaderData(const KCategorizedSortFilterProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KCategorizedSortFilterProxyModel_SuperHeaderData(const KCategorizedSortFilterProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->KCategorizedSortFilterProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnHeaderData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_headerdata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_SetHeaderData(KCategorizedSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperSetHeaderData(KCategorizedSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KCategorizedSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSetHeaderData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_setheaderdata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KCategorizedSortFilterProxyModel_MimeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KCategorizedSortFilterProxyModel_SuperMimeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KCategorizedSortFilterProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMimeData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_mimedata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_DropMimeData(KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperDropMimeData(KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnDropMimeData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_dropmimedata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_InsertRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperInsertRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnInsertRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_insertrows_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_InsertColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperInsertColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnInsertColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_insertcolumns_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_RemoveRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperRemoveRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnRemoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_removerows_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_RemoveColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperRemoveColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnRemoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_removecolumns_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_FetchMore(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperFetchMore(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    self->KCategorizedSortFilterProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnFetchMore(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_fetchmore_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_CanFetchMore(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperCanFetchMore(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCanFetchMore(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_canfetchmore_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_Flags(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_SuperFlags(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KCategorizedSortFilterProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnFlags(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_flags_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Flags_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_Buddy(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_SuperBuddy(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KCategorizedSortFilterProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBuddy(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_buddy_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_Match(const KCategorizedSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_SuperMatch(const KCategorizedSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KCategorizedSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KCategorizedSortFilterProxyModel_OnMatch(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_match_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KCategorizedSortFilterProxyModel_Span(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KCategorizedSortFilterProxyModel_SuperSpan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    return new QSize(self->KCategorizedSortFilterProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSpan(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_span_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KCategorizedSortFilterProxyModel_MimeTypes(const KCategorizedSortFilterProxyModel* self) {
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
libqt_list /* of libqt_string */ KCategorizedSortFilterProxyModel_SuperMimeTypes(const KCategorizedSortFilterProxyModel* self) {
    QList<QString> _ret = self->KCategorizedSortFilterProxyModel::mimeTypes();
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
void KCategorizedSortFilterProxyModel_OnMimeTypes(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_mimetypes_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_SupportedDropActions(const KCategorizedSortFilterProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_SuperSupportedDropActions(const KCategorizedSortFilterProxyModel* self) {
    return static_cast<int>(self->KCategorizedSortFilterProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSupportedDropActions(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_Submit(KCategorizedSortFilterProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperSubmit(KCategorizedSortFilterProxyModel* self) {
    return self->KCategorizedSortFilterProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSubmit(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_submit_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_Revert(KCategorizedSortFilterProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperRevert(KCategorizedSortFilterProxyModel* self) {
    self->KCategorizedSortFilterProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnRevert(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_revert_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KCategorizedSortFilterProxyModel_ItemData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KCategorizedSortFilterProxyModel_SuperItemData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KCategorizedSortFilterProxyModel::itemData(*index);
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
void KCategorizedSortFilterProxyModel_OnItemData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_itemdata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_SetItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperSetItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KCategorizedSortFilterProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSetItemData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_setitemdata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_ClearItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperClearItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    return self->KCategorizedSortFilterProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnClearItemData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_clearitemdata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_CanDropMimeData(const KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperCanDropMimeData(const KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KCategorizedSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCanDropMimeData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_candropmimedata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_SupportedDragActions(const KCategorizedSortFilterProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_SuperSupportedDragActions(const KCategorizedSortFilterProxyModel* self) {
    return static_cast<int>(self->KCategorizedSortFilterProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSupportedDragActions(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KCategorizedSortFilterProxyModel_RoleNames(const KCategorizedSortFilterProxyModel* self) {
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
libqt_map /* of int to libqt_string */ KCategorizedSortFilterProxyModel_SuperRoleNames(const KCategorizedSortFilterProxyModel* self) {
    QHash<int, QByteArray> _ret = self->KCategorizedSortFilterProxyModel::roleNames();
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
void KCategorizedSortFilterProxyModel_OnRoleNames(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_rolenames_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_MoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KCategorizedSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_moverows_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_MoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KCategorizedSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_movecolumns_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_MultiData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperMultiData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KCategorizedSortFilterProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMultiData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_multidata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_ResetInternalData(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        vkcategorizedsortfilterproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperResetInternalData(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnResetInternalData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_Event(KCategorizedSortFilterProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperEvent(KCategorizedSortFilterProxyModel* self, QEvent* event) {
    return self->KCategorizedSortFilterProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_event_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_EventFilter(KCategorizedSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_SuperEventFilter(KCategorizedSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    return self->KCategorizedSortFilterProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEventFilter(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_eventfilter_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_TimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        vkcategorizedsortfilterproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperTimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnTimerEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_timerevent_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_ChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        vkcategorizedsortfilterproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnChildEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_childevent_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_CustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        vkcategorizedsortfilterproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperCustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCustomEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_customevent_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_ConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        vkcategorizedsortfilterproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnConnectNotify(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_connectnotify_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_DisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel) {
        vkcategorizedsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_SuperDisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->KCategorizedSortFilterProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCategorizedSortFilterProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnDisconnectNotify(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self))
        vkcategorizedsortfilterproxymodel->kcategorizedsortfilterproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_InvalidateFilter(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::invalidateFilter();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::invalidateFilter called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_InvalidateRowsFilter(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::invalidateRowsFilter();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::invalidateRowsFilter called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_InvalidateColumnsFilter(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::invalidateColumnsFilter();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::invalidateColumnsFilter called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_CreateSourceIndex(const KCategorizedSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        return new QModelIndex(vkcategorizedsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method KCategorizedSortFilterProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_CreateIndex(const KCategorizedSortFilterProxyModel* self, int row, int column) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self)))
        return new QModelIndex(vkcategorizedsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KCategorizedSortFilterProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_EncodeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCategorizedSortFilterProxyModel_DecodeData(KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        return vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_BeginInsertRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_EndInsertRows(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_BeginRemoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_EndRemoveRows(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCategorizedSortFilterProxyModel_BeginMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        return vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_EndMoveRows(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_BeginInsertColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_EndInsertColumns(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_BeginRemoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_EndRemoveColumns(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCategorizedSortFilterProxyModel_BeginMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        return vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_EndMoveColumns(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_BeginResetModel(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_EndResetModel(KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_ChangePersistentIndex(KCategorizedSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedSortFilterProxyModel_ChangePersistentIndexList(KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self)) {
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
        vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_PersistentIndexList(const KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        QList<QModelIndex> _ret = vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCategorizedSortFilterProxyModel_Sender(const KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::sender();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCategorizedSortFilterProxyModel_SenderSignalIndex(const KCategorizedSortFilterProxyModel* self) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCategorizedSortFilterProxyModel_Receivers(const KCategorizedSortFilterProxyModel* self, const char* signal) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCategorizedSortFilterProxyModel_IsSignalConnected(const KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self))) {
        return vkcategorizedsortfilterproxymodel->VirtualKCategorizedSortFilterProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCategorizedSortFilterProxyModel::isSignalConnected called without a directly constructed type");
}

void KCategorizedSortFilterProxyModel_Delete(KCategorizedSortFilterProxyModel* self) {
    delete self;
}
