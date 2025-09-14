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
#include <QByteArray>
#include <cstring>
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
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDirSortFilterProxyModel_Tr(const char* s) {
    QString _ret = KDirSortFilterProxyModel::tr(s);
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
    auto* vkdirsortfilterproxymodel = dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return self->hasChildren(*parent);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->hasChildren(*parent);
    }
}

bool KDirSortFilterProxyModel_CanFetchMore(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return self->canFetchMore(*parent);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->canFetchMore(*parent);
    }
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
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->subSortLessThan(*left, *right);
    }
    return {};
}

libqt_string KDirSortFilterProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = KDirSortFilterProxyModel::tr(s, c);
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
    QString _ret = KDirSortFilterProxyModel::tr(s, c, static_cast<int>(n));
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
int KDirSortFilterProxyModel_QBaseMetacall(KDirSortFilterProxyModel* self, int param1, int param2, void** param3) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Metacall_IsBase(true);
        return vkdirsortfilterproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDirSortFilterProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMetacall(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Metacall_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseHasChildren(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_HasChildren_IsBase(true);
        return vkdirsortfilterproxymodel->hasChildren(*parent);
    } else {
        return self->KDirSortFilterProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnHasChildren(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_HasChildren_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_HasChildren_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseCanFetchMore(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CanFetchMore_IsBase(true);
        return vkdirsortfilterproxymodel->canFetchMore(*parent);
    } else {
        return self->KDirSortFilterProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCanFetchMore(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseSubSortLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SubSortLessThan_IsBase(true);
        return vkdirsortfilterproxymodel->subSortLessThan(*left, *right);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->subSortLessThan(*left, *right);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSubSortLessThan(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SubSortLessThan_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SubSortLessThan_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_Sort(KDirSortFilterProxyModel* self, int column, int order) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KDirSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseSort(KDirSortFilterProxyModel* self, int column, int order) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Sort_IsBase(true);
        vkdirsortfilterproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KDirSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSort(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Sort_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_LessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->lessThan(*left, *right);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->lessThan(*left, *right);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_LessThan_IsBase(true);
        return vkdirsortfilterproxymodel->lessThan(*left, *right);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->lessThan(*left, *right);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnLessThan(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_LessThan_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_LessThan_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirSortFilterProxyModel_CompareCategories(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->compareCategories(*left, *right);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->compareCategories(*left, *right);
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_QBaseCompareCategories(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CompareCategories_IsBase(true);
        return vkdirsortfilterproxymodel->compareCategories(*left, *right);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->compareCategories(*left, *right);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCompareCategories(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CompareCategories_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CompareCategories_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_SetSourceModel(KDirSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setSourceModel(sourceModel);
    } else {
        self->KDirSortFilterProxyModel::setSourceModel(sourceModel);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseSetSourceModel(KDirSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SetSourceModel_IsBase(true);
        vkdirsortfilterproxymodel->setSourceModel(sourceModel);
    } else {
        self->KDirSortFilterProxyModel::setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSetSourceModel(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_MapToSource(const KDirSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QModelIndex(vkdirsortfilterproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_QBaseMapToSource(const KDirSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vkdirsortfilterproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMapToSource(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MapToSource_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MapToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_MapFromSource(const KDirSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QModelIndex(vkdirsortfilterproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_QBaseMapFromSource(const KDirSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vkdirsortfilterproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMapFromSource(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KDirSortFilterProxyModel_MapSelectionToSource(const KDirSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QItemSelection(vkdirsortfilterproxymodel->mapSelectionToSource(*proxySelection));
    } else {
        return new QItemSelection(((VirtualKDirSortFilterProxyModel*)self)->mapSelectionToSource(*proxySelection));
    }
}

// Base class handler implementation
QItemSelection* KDirSortFilterProxyModel_QBaseMapSelectionToSource(const KDirSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vkdirsortfilterproxymodel->mapSelectionToSource(*proxySelection));
    } else {
        return new QItemSelection(((VirtualKDirSortFilterProxyModel*)self)->mapSelectionToSource(*proxySelection));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMapSelectionToSource(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KDirSortFilterProxyModel_MapSelectionFromSource(const KDirSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QItemSelection(vkdirsortfilterproxymodel->mapSelectionFromSource(*sourceSelection));
    } else {
        return new QItemSelection(((VirtualKDirSortFilterProxyModel*)self)->mapSelectionFromSource(*sourceSelection));
    }
}

// Base class handler implementation
QItemSelection* KDirSortFilterProxyModel_QBaseMapSelectionFromSource(const KDirSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vkdirsortfilterproxymodel->mapSelectionFromSource(*sourceSelection));
    } else {
        return new QItemSelection(((VirtualKDirSortFilterProxyModel*)self)->mapSelectionFromSource(*sourceSelection));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMapSelectionFromSource(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_FilterAcceptsRow(const KDirSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseFilterAcceptsRow(const KDirSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_FilterAcceptsRow_IsBase(true);
        return vkdirsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnFilterAcceptsRow(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_FilterAcceptsRow_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_FilterAcceptsRow_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_FilterAcceptsColumn(const KDirSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseFilterAcceptsColumn(const KDirSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_FilterAcceptsColumn_IsBase(true);
        return vkdirsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnFilterAcceptsColumn(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_FilterAcceptsColumn_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_FilterAcceptsColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_Index(const KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QModelIndex(vkdirsortfilterproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_QBaseIndex(const KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Index_IsBase(true);
        return new QModelIndex(vkdirsortfilterproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnIndex(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Index_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_Parent(const KDirSortFilterProxyModel* self, const QModelIndex* child) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QModelIndex(vkdirsortfilterproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_QBaseParent(const KDirSortFilterProxyModel* self, const QModelIndex* child) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Parent_IsBase(true);
        return new QModelIndex(vkdirsortfilterproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnParent(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Parent_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_Sibling(const KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QModelIndex(vkdirsortfilterproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_QBaseSibling(const KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vkdirsortfilterproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSibling(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Sibling_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirSortFilterProxyModel_RowCount(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->rowCount(*parent);
    } else {
        return self->KDirSortFilterProxyModel::rowCount(*parent);
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_QBaseRowCount(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_RowCount_IsBase(true);
        return vkdirsortfilterproxymodel->rowCount(*parent);
    } else {
        return self->KDirSortFilterProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnRowCount(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_RowCount_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirSortFilterProxyModel_ColumnCount(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->columnCount(*parent);
    } else {
        return self->KDirSortFilterProxyModel::columnCount(*parent);
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_QBaseColumnCount(const KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ColumnCount_IsBase(true);
        return vkdirsortfilterproxymodel->columnCount(*parent);
    } else {
        return self->KDirSortFilterProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnColumnCount(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KDirSortFilterProxyModel_Data(const KDirSortFilterProxyModel* self, const QModelIndex* index, int role) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QVariant(vkdirsortfilterproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDirSortFilterProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KDirSortFilterProxyModel_QBaseData(const KDirSortFilterProxyModel* self, const QModelIndex* index, int role) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Data_IsBase(true);
        return new QVariant(vkdirsortfilterproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDirSortFilterProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnData(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Data_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_SetData(KDirSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KDirSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseSetData(KDirSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SetData_IsBase(true);
        return vkdirsortfilterproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KDirSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSetData(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SetData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KDirSortFilterProxyModel_HeaderData(const KDirSortFilterProxyModel* self, int section, int orientation, int role) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QVariant(vkdirsortfilterproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDirSortFilterProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KDirSortFilterProxyModel_QBaseHeaderData(const KDirSortFilterProxyModel* self, int section, int orientation, int role) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_HeaderData_IsBase(true);
        return new QVariant(vkdirsortfilterproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDirSortFilterProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnHeaderData(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_HeaderData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_SetHeaderData(KDirSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KDirSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseSetHeaderData(KDirSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SetHeaderData_IsBase(true);
        return vkdirsortfilterproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KDirSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSetHeaderData(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KDirSortFilterProxyModel_MimeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->mimeData(indexes_QList);
    } else {
        return self->KDirSortFilterProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KDirSortFilterProxyModel_QBaseMimeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MimeData_IsBase(true);
        return vkdirsortfilterproxymodel->mimeData(indexes_QList);
    } else {
        return self->KDirSortFilterProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMimeData(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MimeData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_DropMimeData(KDirSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDirSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseDropMimeData(KDirSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_DropMimeData_IsBase(true);
        return vkdirsortfilterproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDirSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnDropMimeData(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_InsertRows(KDirSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KDirSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseInsertRows(KDirSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InsertRows_IsBase(true);
        return vkdirsortfilterproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KDirSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnInsertRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InsertRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_InsertColumns(KDirSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KDirSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseInsertColumns(KDirSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InsertColumns_IsBase(true);
        return vkdirsortfilterproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KDirSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnInsertColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_RemoveRows(KDirSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KDirSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseRemoveRows(KDirSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_RemoveRows_IsBase(true);
        return vkdirsortfilterproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KDirSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnRemoveRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_RemoveColumns(KDirSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KDirSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseRemoveColumns(KDirSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_RemoveColumns_IsBase(true);
        return vkdirsortfilterproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KDirSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnRemoveColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_FetchMore(KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->fetchMore(*parent);
    } else {
        self->KDirSortFilterProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseFetchMore(KDirSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_FetchMore_IsBase(true);
        vkdirsortfilterproxymodel->fetchMore(*parent);
    } else {
        self->KDirSortFilterProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnFetchMore(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_FetchMore_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirSortFilterProxyModel_Flags(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return static_cast<int>(vkdirsortfilterproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KDirSortFilterProxyModel::flags(*index));
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_QBaseFlags(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Flags_IsBase(true);
        return static_cast<int>(vkdirsortfilterproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KDirSortFilterProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnFlags(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Flags_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_Buddy(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QModelIndex(vkdirsortfilterproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_QBaseBuddy(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vkdirsortfilterproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKDirSortFilterProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBuddy(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Buddy_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_Match(const KDirSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        QList<QModelIndex> _ret = vkdirsortfilterproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KDirSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_QBaseMatch(const KDirSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkdirsortfilterproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KDirSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KDirSortFilterProxyModel_OnMatch(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Match_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDirSortFilterProxyModel_Span(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QSize(vkdirsortfilterproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKDirSortFilterProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KDirSortFilterProxyModel_QBaseSpan(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Span_IsBase(true);
        return new QSize(vkdirsortfilterproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKDirSortFilterProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSpan(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Span_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KDirSortFilterProxyModel_MimeTypes(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        QList<QString> _ret = vkdirsortfilterproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KDirSortFilterProxyModel::mimeTypes();
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
libqt_list /* of libqt_string */ KDirSortFilterProxyModel_QBaseMimeTypes(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkdirsortfilterproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KDirSortFilterProxyModel::mimeTypes();
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
void KDirSortFilterProxyModel_OnMimeTypes(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirSortFilterProxyModel_SupportedDropActions(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return static_cast<int>(vkdirsortfilterproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KDirSortFilterProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_QBaseSupportedDropActions(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkdirsortfilterproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KDirSortFilterProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSupportedDropActions(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_Submit(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->submit();
    } else {
        return self->KDirSortFilterProxyModel::submit();
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseSubmit(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Submit_IsBase(true);
        return vkdirsortfilterproxymodel->submit();
    } else {
        return self->KDirSortFilterProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSubmit(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Submit_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_Revert(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->revert();
    } else {
        self->KDirSortFilterProxyModel::revert();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseRevert(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Revert_IsBase(true);
        vkdirsortfilterproxymodel->revert();
    } else {
        self->KDirSortFilterProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnRevert(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Revert_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KDirSortFilterProxyModel_ItemData(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        QMap<int, QVariant> _ret = vkdirsortfilterproxymodel->itemData(*index);
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KDirSortFilterProxyModel_QBaseItemData(const KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkdirsortfilterproxymodel->itemData(*index);
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
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnItemData(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ItemData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_SetItemData(KDirSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KDirSortFilterProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseSetItemData(KDirSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SetItemData_IsBase(true);
        return vkdirsortfilterproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KDirSortFilterProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSetItemData(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SetItemData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_ClearItemData(KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->clearItemData(*index);
    } else {
        return self->KDirSortFilterProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseClearItemData(KDirSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ClearItemData_IsBase(true);
        return vkdirsortfilterproxymodel->clearItemData(*index);
    } else {
        return self->KDirSortFilterProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnClearItemData(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_CanDropMimeData(const KDirSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDirSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseCanDropMimeData(const KDirSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CanDropMimeData_IsBase(true);
        return vkdirsortfilterproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDirSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCanDropMimeData(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirSortFilterProxyModel_SupportedDragActions(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return static_cast<int>(vkdirsortfilterproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KDirSortFilterProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_QBaseSupportedDragActions(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkdirsortfilterproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KDirSortFilterProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSupportedDragActions(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KDirSortFilterProxyModel_RoleNames(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        QHash<int, QByteArray> _ret = vkdirsortfilterproxymodel->roleNames();
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
libqt_map /* of int to libqt_string */ KDirSortFilterProxyModel_QBaseRoleNames(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkdirsortfilterproxymodel->roleNames();
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
void KDirSortFilterProxyModel_OnRoleNames(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_RoleNames_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_MoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDirSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseMoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MoveRows_IsBase(true);
        return vkdirsortfilterproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDirSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMoveRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MoveRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_MoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDirSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseMoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MoveColumns_IsBase(true);
        return vkdirsortfilterproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDirSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMoveColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_MultiData(const KDirSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KDirSortFilterProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseMultiData(const KDirSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MultiData_IsBase(true);
        vkdirsortfilterproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KDirSortFilterProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnMultiData(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_MultiData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_ResetInternalData(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->resetInternalData();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseResetInternalData(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ResetInternalData_IsBase(true);
        vkdirsortfilterproxymodel->resetInternalData();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnResetInternalData(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_Event(KDirSortFilterProxyModel* self, QEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->event(event);
    } else {
        return self->KDirSortFilterProxyModel::event(event);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseEvent(KDirSortFilterProxyModel* self, QEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Event_IsBase(true);
        return vkdirsortfilterproxymodel->event(event);
    } else {
        return self->KDirSortFilterProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEvent(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Event_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_EventFilter(KDirSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->eventFilter(watched, event);
    } else {
        return self->KDirSortFilterProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseEventFilter(KDirSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EventFilter_IsBase(true);
        return vkdirsortfilterproxymodel->eventFilter(watched, event);
    } else {
        return self->KDirSortFilterProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEventFilter(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EventFilter_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_TimerEvent(KDirSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->timerEvent(event);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseTimerEvent(KDirSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_TimerEvent_IsBase(true);
        vkdirsortfilterproxymodel->timerEvent(event);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnTimerEvent(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_ChildEvent(KDirSortFilterProxyModel* self, QChildEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->childEvent(event);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseChildEvent(KDirSortFilterProxyModel* self, QChildEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ChildEvent_IsBase(true);
        vkdirsortfilterproxymodel->childEvent(event);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnChildEvent(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_CustomEvent(KDirSortFilterProxyModel* self, QEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->customEvent(event);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseCustomEvent(KDirSortFilterProxyModel* self, QEvent* event) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CustomEvent_IsBase(true);
        vkdirsortfilterproxymodel->customEvent(event);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCustomEvent(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_ConnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseConnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ConnectNotify_IsBase(true);
        vkdirsortfilterproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnConnectNotify(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_DisconnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseDisconnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_DisconnectNotify_IsBase(true);
        vkdirsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnDisconnectNotify(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_InvalidateFilter(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->invalidateFilter();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->invalidateFilter();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseInvalidateFilter(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InvalidateFilter_IsBase(true);
        vkdirsortfilterproxymodel->invalidateFilter();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->invalidateFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnInvalidateFilter(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InvalidateFilter_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_InvalidateFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_InvalidateRowsFilter(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->invalidateRowsFilter();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->invalidateRowsFilter();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseInvalidateRowsFilter(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InvalidateRowsFilter_IsBase(true);
        vkdirsortfilterproxymodel->invalidateRowsFilter();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->invalidateRowsFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnInvalidateRowsFilter(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InvalidateRowsFilter_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_InvalidateRowsFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_InvalidateColumnsFilter(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->invalidateColumnsFilter();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->invalidateColumnsFilter();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseInvalidateColumnsFilter(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InvalidateColumnsFilter_IsBase(true);
        vkdirsortfilterproxymodel->invalidateColumnsFilter();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->invalidateColumnsFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnInvalidateColumnsFilter(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_InvalidateColumnsFilter_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_InvalidateColumnsFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_CreateSourceIndex(const KDirSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QModelIndex(vkdirsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_QBaseCreateSourceIndex(const KDirSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vkdirsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCreateSourceIndex(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirSortFilterProxyModel_CreateIndex(const KDirSortFilterProxyModel* self, int row, int column) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return new QModelIndex(vkdirsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KDirSortFilterProxyModel_QBaseCreateIndex(const KDirSortFilterProxyModel* self, int row, int column) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkdirsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnCreateIndex(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_EncodeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseEncodeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EncodeData_IsBase(true);
        vkdirsortfilterproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEncodeData(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EncodeData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_DecodeData(KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseDecodeData(KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_DecodeData_IsBase(true);
        return vkdirsortfilterproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnDecodeData(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_DecodeData_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_BeginInsertRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseBeginInsertRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginInsertRows_IsBase(true);
        vkdirsortfilterproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBeginInsertRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_EndInsertRows(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->endInsertRows();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseEndInsertRows(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndInsertRows_IsBase(true);
        vkdirsortfilterproxymodel->endInsertRows();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEndInsertRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_BeginRemoveRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseBeginRemoveRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginRemoveRows_IsBase(true);
        vkdirsortfilterproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBeginRemoveRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_EndRemoveRows(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->endRemoveRows();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseEndRemoveRows(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndRemoveRows_IsBase(true);
        vkdirsortfilterproxymodel->endRemoveRows();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEndRemoveRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_BeginMoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseBeginMoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginMoveRows_IsBase(true);
        return vkdirsortfilterproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBeginMoveRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_EndMoveRows(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->endMoveRows();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseEndMoveRows(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndMoveRows_IsBase(true);
        vkdirsortfilterproxymodel->endMoveRows();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEndMoveRows(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_BeginInsertColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseBeginInsertColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginInsertColumns_IsBase(true);
        vkdirsortfilterproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBeginInsertColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_EndInsertColumns(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->endInsertColumns();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseEndInsertColumns(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndInsertColumns_IsBase(true);
        vkdirsortfilterproxymodel->endInsertColumns();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEndInsertColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_BeginRemoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseBeginRemoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginRemoveColumns_IsBase(true);
        vkdirsortfilterproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBeginRemoveColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_EndRemoveColumns(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->endRemoveColumns();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseEndRemoveColumns(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndRemoveColumns_IsBase(true);
        vkdirsortfilterproxymodel->endRemoveColumns();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEndRemoveColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_BeginMoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseBeginMoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginMoveColumns_IsBase(true);
        return vkdirsortfilterproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBeginMoveColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_EndMoveColumns(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->endMoveColumns();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseEndMoveColumns(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndMoveColumns_IsBase(true);
        vkdirsortfilterproxymodel->endMoveColumns();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEndMoveColumns(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_BeginResetModel(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->beginResetModel();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseBeginResetModel(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginResetModel_IsBase(true);
        vkdirsortfilterproxymodel->beginResetModel();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnBeginResetModel(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_EndResetModel(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->endResetModel();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseEndResetModel(KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndResetModel_IsBase(true);
        vkdirsortfilterproxymodel->endResetModel();
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnEndResetModel(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_ChangePersistentIndex(KDirSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseChangePersistentIndex(KDirSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ChangePersistentIndex_IsBase(true);
        vkdirsortfilterproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnChangePersistentIndex(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirSortFilterProxyModel_ChangePersistentIndexList(KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
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
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KDirSortFilterProxyModel_QBaseChangePersistentIndexList(KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
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
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ChangePersistentIndexList_IsBase(true);
        vkdirsortfilterproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKDirSortFilterProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnChangePersistentIndexList(KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = dynamic_cast<VirtualKDirSortFilterProxyModel*>(self);
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_PersistentIndexList(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        QList<QModelIndex> _ret = vkdirsortfilterproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKDirSortFilterProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_QBasePersistentIndexList(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkdirsortfilterproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKDirSortFilterProxyModel*)self)->persistentIndexList();
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
void KDirSortFilterProxyModel_OnPersistentIndexList(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDirSortFilterProxyModel_Sender(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->sender();
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDirSortFilterProxyModel_QBaseSender(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Sender_IsBase(true);
        return vkdirsortfilterproxymodel->sender();
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSender(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Sender_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirSortFilterProxyModel_SenderSignalIndex(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_QBaseSenderSignalIndex(const KDirSortFilterProxyModel* self) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SenderSignalIndex_IsBase(true);
        return vkdirsortfilterproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnSenderSignalIndex(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirSortFilterProxyModel_Receivers(const KDirSortFilterProxyModel* self, const char* signal) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->receivers(signal);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDirSortFilterProxyModel_QBaseReceivers(const KDirSortFilterProxyModel* self, const char* signal) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Receivers_IsBase(true);
        return vkdirsortfilterproxymodel->receivers(signal);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnReceivers(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_Receivers_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirSortFilterProxyModel_IsSignalConnected(const KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        return vkdirsortfilterproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDirSortFilterProxyModel_QBaseIsSignalConnected(const KDirSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_IsSignalConnected_IsBase(true);
        return vkdirsortfilterproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirSortFilterProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirSortFilterProxyModel_OnIsSignalConnected(const KDirSortFilterProxyModel* self, intptr_t slot) {
    auto* vkdirsortfilterproxymodel = const_cast<VirtualKDirSortFilterProxyModel*>(dynamic_cast<const VirtualKDirSortFilterProxyModel*>(self));
    if (vkdirsortfilterproxymodel && vkdirsortfilterproxymodel->isVirtualKDirSortFilterProxyModel) {
        vkdirsortfilterproxymodel->setKDirSortFilterProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKDirSortFilterProxyModel::KDirSortFilterProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void KDirSortFilterProxyModel_Delete(KDirSortFilterProxyModel* self) {
    delete self;
}
