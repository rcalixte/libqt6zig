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
#include <QByteArray>
#include <cstring>
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
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCategorizedSortFilterProxyModel_Tr(const char* s) {
    QString _ret = KCategorizedSortFilterProxyModel::tr(s);
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
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
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
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->lessThan(*left, *right);
    }
    return {};
}

bool KCategorizedSortFilterProxyModel_SubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->subSortLessThan(*left, *right);
    }
    return {};
}

int KCategorizedSortFilterProxyModel_CompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->compareCategories(*left, *right);
    }
    return {};
}

libqt_string KCategorizedSortFilterProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = KCategorizedSortFilterProxyModel::tr(s, c);
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
    QString _ret = KCategorizedSortFilterProxyModel::tr(s, c, static_cast<int>(n));
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
int KCategorizedSortFilterProxyModel_QBaseMetacall(KCategorizedSortFilterProxyModel* self, int param1, int param2, void** param3) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Metacall_IsBase(true);
        return vkcategorizedsortfilterproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCategorizedSortFilterProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMetacall(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Metacall_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseSort(KCategorizedSortFilterProxyModel* self, int column, int order) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Sort_IsBase(true);
        vkcategorizedsortfilterproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KCategorizedSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSort(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Sort_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Sort_Callback>(slot));
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_LessThan_IsBase(true);
        return vkcategorizedsortfilterproxymodel->lessThan(*left, *right);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->lessThan(*left, *right);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnLessThan(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_LessThan_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_LessThan_Callback>(slot));
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseSubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SubSortLessThan_IsBase(true);
        return vkcategorizedsortfilterproxymodel->subSortLessThan(*left, *right);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->subSortLessThan(*left, *right);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSubSortLessThan(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SubSortLessThan_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SubSortLessThan_Callback>(slot));
    }
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_QBaseCompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CompareCategories_IsBase(true);
        return vkcategorizedsortfilterproxymodel->compareCategories(*left, *right);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->compareCategories(*left, *right);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCompareCategories(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CompareCategories_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CompareCategories_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_SetSourceModel(KCategorizedSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setSourceModel(sourceModel);
    } else {
        self->KCategorizedSortFilterProxyModel::setSourceModel(sourceModel);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseSetSourceModel(KCategorizedSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SetSourceModel_IsBase(true);
        vkcategorizedsortfilterproxymodel->setSourceModel(sourceModel);
    } else {
        self->KCategorizedSortFilterProxyModel::setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSetSourceModel(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_MapToSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QModelIndex(vkcategorizedsortfilterproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_QBaseMapToSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vkcategorizedsortfilterproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMapToSource(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MapToSource_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MapToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_MapFromSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QModelIndex(vkcategorizedsortfilterproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_QBaseMapFromSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vkcategorizedsortfilterproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMapFromSource(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KCategorizedSortFilterProxyModel_MapSelectionToSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QItemSelection(vkcategorizedsortfilterproxymodel->mapSelectionToSource(*proxySelection));
    } else {
        return new QItemSelection(((VirtualKCategorizedSortFilterProxyModel*)self)->mapSelectionToSource(*proxySelection));
    }
}

// Base class handler implementation
QItemSelection* KCategorizedSortFilterProxyModel_QBaseMapSelectionToSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vkcategorizedsortfilterproxymodel->mapSelectionToSource(*proxySelection));
    } else {
        return new QItemSelection(((VirtualKCategorizedSortFilterProxyModel*)self)->mapSelectionToSource(*proxySelection));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMapSelectionToSource(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KCategorizedSortFilterProxyModel_MapSelectionFromSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QItemSelection(vkcategorizedsortfilterproxymodel->mapSelectionFromSource(*sourceSelection));
    } else {
        return new QItemSelection(((VirtualKCategorizedSortFilterProxyModel*)self)->mapSelectionFromSource(*sourceSelection));
    }
}

// Base class handler implementation
QItemSelection* KCategorizedSortFilterProxyModel_QBaseMapSelectionFromSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vkcategorizedsortfilterproxymodel->mapSelectionFromSource(*sourceSelection));
    } else {
        return new QItemSelection(((VirtualKCategorizedSortFilterProxyModel*)self)->mapSelectionFromSource(*sourceSelection));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMapSelectionFromSource(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_FilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseFilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_FilterAcceptsRow_IsBase(true);
        return vkcategorizedsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnFilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_FilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseFilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_FilterAcceptsColumn_IsBase(true);
        return vkcategorizedsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnFilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_Index(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QModelIndex(vkcategorizedsortfilterproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_QBaseIndex(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Index_IsBase(true);
        return new QModelIndex(vkcategorizedsortfilterproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnIndex(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Index_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_Parent(const KCategorizedSortFilterProxyModel* self, const QModelIndex* child) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QModelIndex(vkcategorizedsortfilterproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_QBaseParent(const KCategorizedSortFilterProxyModel* self, const QModelIndex* child) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Parent_IsBase(true);
        return new QModelIndex(vkcategorizedsortfilterproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnParent(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Parent_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_Sibling(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QModelIndex(vkcategorizedsortfilterproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_QBaseSibling(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vkcategorizedsortfilterproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSibling(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Sibling_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_RowCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->rowCount(*parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::rowCount(*parent);
    }
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_QBaseRowCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_RowCount_IsBase(true);
        return vkcategorizedsortfilterproxymodel->rowCount(*parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnRowCount(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_RowCount_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_ColumnCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->columnCount(*parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::columnCount(*parent);
    }
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_QBaseColumnCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ColumnCount_IsBase(true);
        return vkcategorizedsortfilterproxymodel->columnCount(*parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnColumnCount(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_HasChildren(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->hasChildren(*parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseHasChildren(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_HasChildren_IsBase(true);
        return vkcategorizedsortfilterproxymodel->hasChildren(*parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnHasChildren(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_HasChildren_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCategorizedSortFilterProxyModel_Data(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, int role) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QVariant(vkcategorizedsortfilterproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKCategorizedSortFilterProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KCategorizedSortFilterProxyModel_QBaseData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, int role) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Data_IsBase(true);
        return new QVariant(vkcategorizedsortfilterproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKCategorizedSortFilterProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnData(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Data_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_SetData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KCategorizedSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseSetData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SetData_IsBase(true);
        return vkcategorizedsortfilterproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KCategorizedSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSetData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SetData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCategorizedSortFilterProxyModel_HeaderData(const KCategorizedSortFilterProxyModel* self, int section, int orientation, int role) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QVariant(vkcategorizedsortfilterproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKCategorizedSortFilterProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KCategorizedSortFilterProxyModel_QBaseHeaderData(const KCategorizedSortFilterProxyModel* self, int section, int orientation, int role) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_HeaderData_IsBase(true);
        return new QVariant(vkcategorizedsortfilterproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKCategorizedSortFilterProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnHeaderData(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_HeaderData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_SetHeaderData(KCategorizedSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KCategorizedSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseSetHeaderData(KCategorizedSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SetHeaderData_IsBase(true);
        return vkcategorizedsortfilterproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KCategorizedSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSetHeaderData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KCategorizedSortFilterProxyModel_MimeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->mimeData(indexes_QList);
    } else {
        return self->KCategorizedSortFilterProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KCategorizedSortFilterProxyModel_QBaseMimeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MimeData_IsBase(true);
        return vkcategorizedsortfilterproxymodel->mimeData(indexes_QList);
    } else {
        return self->KCategorizedSortFilterProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMimeData(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MimeData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_DropMimeData(KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseDropMimeData(KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_DropMimeData_IsBase(true);
        return vkcategorizedsortfilterproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnDropMimeData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_InsertRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseInsertRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InsertRows_IsBase(true);
        return vkcategorizedsortfilterproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnInsertRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InsertRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_InsertColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseInsertColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InsertColumns_IsBase(true);
        return vkcategorizedsortfilterproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnInsertColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_RemoveRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseRemoveRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_RemoveRows_IsBase(true);
        return vkcategorizedsortfilterproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnRemoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_RemoveColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseRemoveColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_RemoveColumns_IsBase(true);
        return vkcategorizedsortfilterproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnRemoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_FetchMore(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->fetchMore(*parent);
    } else {
        self->KCategorizedSortFilterProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseFetchMore(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_FetchMore_IsBase(true);
        vkcategorizedsortfilterproxymodel->fetchMore(*parent);
    } else {
        self->KCategorizedSortFilterProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnFetchMore(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_FetchMore_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_CanFetchMore(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->canFetchMore(*parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseCanFetchMore(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CanFetchMore_IsBase(true);
        return vkcategorizedsortfilterproxymodel->canFetchMore(*parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCanFetchMore(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_Flags(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return static_cast<int>(vkcategorizedsortfilterproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KCategorizedSortFilterProxyModel::flags(*index));
    }
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_QBaseFlags(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Flags_IsBase(true);
        return static_cast<int>(vkcategorizedsortfilterproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KCategorizedSortFilterProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnFlags(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Flags_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_Buddy(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QModelIndex(vkcategorizedsortfilterproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_QBaseBuddy(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vkcategorizedsortfilterproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKCategorizedSortFilterProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBuddy(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Buddy_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_Match(const KCategorizedSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        QList<QModelIndex> _ret = vkcategorizedsortfilterproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->KCategorizedSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_QBaseMatch(const KCategorizedSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkcategorizedsortfilterproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->KCategorizedSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMatch(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Match_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCategorizedSortFilterProxyModel_Span(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QSize(vkcategorizedsortfilterproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKCategorizedSortFilterProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KCategorizedSortFilterProxyModel_QBaseSpan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Span_IsBase(true);
        return new QSize(vkcategorizedsortfilterproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKCategorizedSortFilterProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSpan(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Span_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KCategorizedSortFilterProxyModel_MimeTypes(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        QList<QString> _ret = vkcategorizedsortfilterproxymodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->KCategorizedSortFilterProxyModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ KCategorizedSortFilterProxyModel_QBaseMimeTypes(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkcategorizedsortfilterproxymodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->KCategorizedSortFilterProxyModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMimeTypes(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_SupportedDropActions(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return static_cast<int>(vkcategorizedsortfilterproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KCategorizedSortFilterProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_QBaseSupportedDropActions(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkcategorizedsortfilterproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KCategorizedSortFilterProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSupportedDropActions(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_Submit(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->submit();
    } else {
        return self->KCategorizedSortFilterProxyModel::submit();
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseSubmit(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Submit_IsBase(true);
        return vkcategorizedsortfilterproxymodel->submit();
    } else {
        return self->KCategorizedSortFilterProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSubmit(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Submit_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_Revert(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->revert();
    } else {
        self->KCategorizedSortFilterProxyModel::revert();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseRevert(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Revert_IsBase(true);
        vkcategorizedsortfilterproxymodel->revert();
    } else {
        self->KCategorizedSortFilterProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnRevert(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Revert_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KCategorizedSortFilterProxyModel_ItemData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        QMap<int, QVariant> _ret = vkcategorizedsortfilterproxymodel->itemData(*index);
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KCategorizedSortFilterProxyModel_QBaseItemData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkcategorizedsortfilterproxymodel->itemData(*index);
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
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnItemData(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ItemData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_SetItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KCategorizedSortFilterProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseSetItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SetItemData_IsBase(true);
        return vkcategorizedsortfilterproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KCategorizedSortFilterProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSetItemData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SetItemData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_ClearItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->clearItemData(*index);
    } else {
        return self->KCategorizedSortFilterProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseClearItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ClearItemData_IsBase(true);
        return vkcategorizedsortfilterproxymodel->clearItemData(*index);
    } else {
        return self->KCategorizedSortFilterProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnClearItemData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_CanDropMimeData(const KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseCanDropMimeData(const KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CanDropMimeData_IsBase(true);
        return vkcategorizedsortfilterproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KCategorizedSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCanDropMimeData(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_SupportedDragActions(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return static_cast<int>(vkcategorizedsortfilterproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KCategorizedSortFilterProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_QBaseSupportedDragActions(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkcategorizedsortfilterproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KCategorizedSortFilterProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSupportedDragActions(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KCategorizedSortFilterProxyModel_RoleNames(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        QHash<int, QByteArray> _ret = vkcategorizedsortfilterproxymodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
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
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
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
libqt_map /* of int to libqt_string */ KCategorizedSortFilterProxyModel_QBaseRoleNames(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkcategorizedsortfilterproxymodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
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
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
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
void KCategorizedSortFilterProxyModel_OnRoleNames(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_RoleNames_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_MoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KCategorizedSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MoveRows_IsBase(true);
        return vkcategorizedsortfilterproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KCategorizedSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MoveRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_MoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KCategorizedSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MoveColumns_IsBase(true);
        return vkcategorizedsortfilterproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KCategorizedSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_MultiData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KCategorizedSortFilterProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseMultiData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MultiData_IsBase(true);
        vkcategorizedsortfilterproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KCategorizedSortFilterProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnMultiData(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_MultiData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_ResetInternalData(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->resetInternalData();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseResetInternalData(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ResetInternalData_IsBase(true);
        vkcategorizedsortfilterproxymodel->resetInternalData();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnResetInternalData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_Event(KCategorizedSortFilterProxyModel* self, QEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->event(event);
    } else {
        return self->KCategorizedSortFilterProxyModel::event(event);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseEvent(KCategorizedSortFilterProxyModel* self, QEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Event_IsBase(true);
        return vkcategorizedsortfilterproxymodel->event(event);
    } else {
        return self->KCategorizedSortFilterProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Event_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_EventFilter(KCategorizedSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->eventFilter(watched, event);
    } else {
        return self->KCategorizedSortFilterProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseEventFilter(KCategorizedSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EventFilter_IsBase(true);
        return vkcategorizedsortfilterproxymodel->eventFilter(watched, event);
    } else {
        return self->KCategorizedSortFilterProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEventFilter(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EventFilter_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_TimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->timerEvent(event);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseTimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_TimerEvent_IsBase(true);
        vkcategorizedsortfilterproxymodel->timerEvent(event);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnTimerEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_ChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->childEvent(event);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ChildEvent_IsBase(true);
        vkcategorizedsortfilterproxymodel->childEvent(event);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnChildEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_CustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->customEvent(event);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseCustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CustomEvent_IsBase(true);
        vkcategorizedsortfilterproxymodel->customEvent(event);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCustomEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_ConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ConnectNotify_IsBase(true);
        vkcategorizedsortfilterproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnConnectNotify(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_DisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseDisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_DisconnectNotify_IsBase(true);
        vkcategorizedsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnDisconnectNotify(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_InvalidateFilter(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->invalidateFilter();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->invalidateFilter();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseInvalidateFilter(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InvalidateFilter_IsBase(true);
        vkcategorizedsortfilterproxymodel->invalidateFilter();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->invalidateFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnInvalidateFilter(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InvalidateFilter_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_InvalidateFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_InvalidateRowsFilter(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->invalidateRowsFilter();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->invalidateRowsFilter();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseInvalidateRowsFilter(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InvalidateRowsFilter_IsBase(true);
        vkcategorizedsortfilterproxymodel->invalidateRowsFilter();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->invalidateRowsFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnInvalidateRowsFilter(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InvalidateRowsFilter_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_InvalidateRowsFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_InvalidateColumnsFilter(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->invalidateColumnsFilter();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->invalidateColumnsFilter();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseInvalidateColumnsFilter(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InvalidateColumnsFilter_IsBase(true);
        vkcategorizedsortfilterproxymodel->invalidateColumnsFilter();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->invalidateColumnsFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnInvalidateColumnsFilter(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_InvalidateColumnsFilter_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_InvalidateColumnsFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_CreateSourceIndex(const KCategorizedSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QModelIndex(vkcategorizedsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_QBaseCreateSourceIndex(const KCategorizedSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vkcategorizedsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCreateSourceIndex(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_CreateIndex(const KCategorizedSortFilterProxyModel* self, int row, int column) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return new QModelIndex(vkcategorizedsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KCategorizedSortFilterProxyModel_QBaseCreateIndex(const KCategorizedSortFilterProxyModel* self, int row, int column) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkcategorizedsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnCreateIndex(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_EncodeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseEncodeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EncodeData_IsBase(true);
        vkcategorizedsortfilterproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEncodeData(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EncodeData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_DecodeData(KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseDecodeData(KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_DecodeData_IsBase(true);
        return vkcategorizedsortfilterproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnDecodeData(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_DecodeData_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_BeginInsertRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseBeginInsertRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginInsertRows_IsBase(true);
        vkcategorizedsortfilterproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBeginInsertRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_EndInsertRows(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->endInsertRows();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseEndInsertRows(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndInsertRows_IsBase(true);
        vkcategorizedsortfilterproxymodel->endInsertRows();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEndInsertRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_BeginRemoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseBeginRemoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginRemoveRows_IsBase(true);
        vkcategorizedsortfilterproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBeginRemoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_EndRemoveRows(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->endRemoveRows();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseEndRemoveRows(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndRemoveRows_IsBase(true);
        vkcategorizedsortfilterproxymodel->endRemoveRows();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEndRemoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_BeginMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseBeginMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginMoveRows_IsBase(true);
        return vkcategorizedsortfilterproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBeginMoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_EndMoveRows(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->endMoveRows();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseEndMoveRows(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndMoveRows_IsBase(true);
        vkcategorizedsortfilterproxymodel->endMoveRows();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEndMoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_BeginInsertColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseBeginInsertColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginInsertColumns_IsBase(true);
        vkcategorizedsortfilterproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBeginInsertColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_EndInsertColumns(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->endInsertColumns();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseEndInsertColumns(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndInsertColumns_IsBase(true);
        vkcategorizedsortfilterproxymodel->endInsertColumns();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEndInsertColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_BeginRemoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseBeginRemoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginRemoveColumns_IsBase(true);
        vkcategorizedsortfilterproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBeginRemoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_EndRemoveColumns(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->endRemoveColumns();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseEndRemoveColumns(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndRemoveColumns_IsBase(true);
        vkcategorizedsortfilterproxymodel->endRemoveColumns();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEndRemoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_BeginMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseBeginMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginMoveColumns_IsBase(true);
        return vkcategorizedsortfilterproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBeginMoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_EndMoveColumns(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->endMoveColumns();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseEndMoveColumns(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndMoveColumns_IsBase(true);
        vkcategorizedsortfilterproxymodel->endMoveColumns();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEndMoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_BeginResetModel(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->beginResetModel();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseBeginResetModel(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginResetModel_IsBase(true);
        vkcategorizedsortfilterproxymodel->beginResetModel();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnBeginResetModel(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_EndResetModel(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->endResetModel();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseEndResetModel(KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndResetModel_IsBase(true);
        vkcategorizedsortfilterproxymodel->endResetModel();
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnEndResetModel(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_ChangePersistentIndex(KCategorizedSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseChangePersistentIndex(KCategorizedSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ChangePersistentIndex_IsBase(true);
        vkcategorizedsortfilterproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnChangePersistentIndex(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedSortFilterProxyModel_ChangePersistentIndexList(KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
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
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KCategorizedSortFilterProxyModel_QBaseChangePersistentIndexList(KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
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
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ChangePersistentIndexList_IsBase(true);
        vkcategorizedsortfilterproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKCategorizedSortFilterProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnChangePersistentIndexList(KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = dynamic_cast<VirtualKCategorizedSortFilterProxyModel*>(self);
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_PersistentIndexList(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        QList<QModelIndex> _ret = vkcategorizedsortfilterproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKCategorizedSortFilterProxyModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_QBasePersistentIndexList(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkcategorizedsortfilterproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKCategorizedSortFilterProxyModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnPersistentIndexList(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCategorizedSortFilterProxyModel_Sender(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->sender();
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCategorizedSortFilterProxyModel_QBaseSender(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Sender_IsBase(true);
        return vkcategorizedsortfilterproxymodel->sender();
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSender(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Sender_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_SenderSignalIndex(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_QBaseSenderSignalIndex(const KCategorizedSortFilterProxyModel* self) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SenderSignalIndex_IsBase(true);
        return vkcategorizedsortfilterproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnSenderSignalIndex(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedSortFilterProxyModel_Receivers(const KCategorizedSortFilterProxyModel* self, const char* signal) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->receivers(signal);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCategorizedSortFilterProxyModel_QBaseReceivers(const KCategorizedSortFilterProxyModel* self, const char* signal) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Receivers_IsBase(true);
        return vkcategorizedsortfilterproxymodel->receivers(signal);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnReceivers(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_Receivers_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedSortFilterProxyModel_IsSignalConnected(const KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        return vkcategorizedsortfilterproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCategorizedSortFilterProxyModel_QBaseIsSignalConnected(const KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_IsSignalConnected_IsBase(true);
        return vkcategorizedsortfilterproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKCategorizedSortFilterProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedSortFilterProxyModel_OnIsSignalConnected(const KCategorizedSortFilterProxyModel* self, intptr_t slot) {
    auto* vkcategorizedsortfilterproxymodel = const_cast<VirtualKCategorizedSortFilterProxyModel*>(dynamic_cast<const VirtualKCategorizedSortFilterProxyModel*>(self));
    if (vkcategorizedsortfilterproxymodel && vkcategorizedsortfilterproxymodel->isVirtualKCategorizedSortFilterProxyModel) {
        vkcategorizedsortfilterproxymodel->setKCategorizedSortFilterProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKCategorizedSortFilterProxyModel::KCategorizedSortFilterProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void KCategorizedSortFilterProxyModel_Delete(KCategorizedSortFilterProxyModel* self) {
    delete self;
}
