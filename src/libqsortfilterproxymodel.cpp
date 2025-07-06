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
#include <QRegularExpression>
#include <QSize>
#include <QSortFilterProxyModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qsortfilterproxymodel.h>
#include "libqsortfilterproxymodel.h"
#include "libqsortfilterproxymodel.hxx"

QSortFilterProxyModel* QSortFilterProxyModel_new() {
    return new VirtualQSortFilterProxyModel();
}

QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent) {
    return new VirtualQSortFilterProxyModel(parent);
}

QMetaObject* QSortFilterProxyModel_MetaObject(const QSortFilterProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSortFilterProxyModel_Metacast(QSortFilterProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSortFilterProxyModel_Metacall(QSortFilterProxyModel* self, int param1, int param2, void** param3) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSortFilterProxyModel_OnMetacall(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Metacall_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSortFilterProxyModel_QBaseMetacall(QSortFilterProxyModel* self, int param1, int param2, void** param3) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Metacall_IsBase(true);
        return vqsortfilterproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSortFilterProxyModel_Tr(const char* s) {
    QString _ret = QSortFilterProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRegularExpression* QSortFilterProxyModel_FilterRegularExpression(const QSortFilterProxyModel* self) {
    return new QRegularExpression(self->filterRegularExpression());
}

int QSortFilterProxyModel_FilterKeyColumn(const QSortFilterProxyModel* self) {
    return self->filterKeyColumn();
}

void QSortFilterProxyModel_SetFilterKeyColumn(QSortFilterProxyModel* self, int column) {
    self->setFilterKeyColumn(static_cast<int>(column));
}

int QSortFilterProxyModel_FilterCaseSensitivity(const QSortFilterProxyModel* self) {
    return static_cast<int>(self->filterCaseSensitivity());
}

void QSortFilterProxyModel_SetFilterCaseSensitivity(QSortFilterProxyModel* self, int cs) {
    self->setFilterCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QSortFilterProxyModel_SortCaseSensitivity(const QSortFilterProxyModel* self) {
    return static_cast<int>(self->sortCaseSensitivity());
}

void QSortFilterProxyModel_SetSortCaseSensitivity(QSortFilterProxyModel* self, int cs) {
    self->setSortCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

bool QSortFilterProxyModel_IsSortLocaleAware(const QSortFilterProxyModel* self) {
    return self->isSortLocaleAware();
}

void QSortFilterProxyModel_SetSortLocaleAware(QSortFilterProxyModel* self, bool on) {
    self->setSortLocaleAware(on);
}

int QSortFilterProxyModel_SortColumn(const QSortFilterProxyModel* self) {
    return self->sortColumn();
}

int QSortFilterProxyModel_SortOrder(const QSortFilterProxyModel* self) {
    return static_cast<int>(self->sortOrder());
}

bool QSortFilterProxyModel_DynamicSortFilter(const QSortFilterProxyModel* self) {
    return self->dynamicSortFilter();
}

void QSortFilterProxyModel_SetDynamicSortFilter(QSortFilterProxyModel* self, bool enable) {
    self->setDynamicSortFilter(enable);
}

int QSortFilterProxyModel_SortRole(const QSortFilterProxyModel* self) {
    return self->sortRole();
}

void QSortFilterProxyModel_SetSortRole(QSortFilterProxyModel* self, int role) {
    self->setSortRole(static_cast<int>(role));
}

int QSortFilterProxyModel_FilterRole(const QSortFilterProxyModel* self) {
    return self->filterRole();
}

void QSortFilterProxyModel_SetFilterRole(QSortFilterProxyModel* self, int role) {
    self->setFilterRole(static_cast<int>(role));
}

bool QSortFilterProxyModel_IsRecursiveFilteringEnabled(const QSortFilterProxyModel* self) {
    return self->isRecursiveFilteringEnabled();
}

void QSortFilterProxyModel_SetRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive) {
    self->setRecursiveFilteringEnabled(recursive);
}

bool QSortFilterProxyModel_AutoAcceptChildRows(const QSortFilterProxyModel* self) {
    return self->autoAcceptChildRows();
}

void QSortFilterProxyModel_SetAutoAcceptChildRows(QSortFilterProxyModel* self, bool accept) {
    self->setAutoAcceptChildRows(accept);
}

void QSortFilterProxyModel_SetFilterRegularExpression(QSortFilterProxyModel* self, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    self->setFilterRegularExpression(pattern_QString);
}

void QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(QSortFilterProxyModel* self, const QRegularExpression* regularExpression) {
    self->setFilterRegularExpression(*regularExpression);
}

void QSortFilterProxyModel_SetFilterWildcard(QSortFilterProxyModel* self, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    self->setFilterWildcard(pattern_QString);
}

void QSortFilterProxyModel_SetFilterFixedString(QSortFilterProxyModel* self, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    self->setFilterFixedString(pattern_QString);
}

void QSortFilterProxyModel_Invalidate(QSortFilterProxyModel* self) {
    self->invalidate();
}

void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter) {
    self->dynamicSortFilterChanged(dynamicSortFilter);
}

void QSortFilterProxyModel_Connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::dynamicSortFilterChanged, [self, slotFunc](bool dynamicSortFilter) {
        bool sigval1 = dynamicSortFilter;
        slotFunc(self, sigval1);
    });
}

void QSortFilterProxyModel_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, int filterCaseSensitivity) {
    self->filterCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(filterCaseSensitivity));
}

void QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::filterCaseSensitivityChanged, [self, slotFunc](Qt::CaseSensitivity filterCaseSensitivity) {
        int sigval1 = static_cast<int>(filterCaseSensitivity);
        slotFunc(self, sigval1);
    });
}

void QSortFilterProxyModel_SortCaseSensitivityChanged(QSortFilterProxyModel* self, int sortCaseSensitivity) {
    self->sortCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(sortCaseSensitivity));
}

void QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::sortCaseSensitivityChanged, [self, slotFunc](Qt::CaseSensitivity sortCaseSensitivity) {
        int sigval1 = static_cast<int>(sortCaseSensitivity);
        slotFunc(self, sigval1);
    });
}

void QSortFilterProxyModel_SortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware) {
    self->sortLocaleAwareChanged(sortLocaleAware);
}

void QSortFilterProxyModel_Connect_SortLocaleAwareChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::sortLocaleAwareChanged, [self, slotFunc](bool sortLocaleAware) {
        bool sigval1 = sortLocaleAware;
        slotFunc(self, sigval1);
    });
}

void QSortFilterProxyModel_SortRoleChanged(QSortFilterProxyModel* self, int sortRole) {
    self->sortRoleChanged(static_cast<int>(sortRole));
}

void QSortFilterProxyModel_Connect_SortRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::sortRoleChanged, [self, slotFunc](int sortRole) {
        int sigval1 = sortRole;
        slotFunc(self, sigval1);
    });
}

void QSortFilterProxyModel_FilterRoleChanged(QSortFilterProxyModel* self, int filterRole) {
    self->filterRoleChanged(static_cast<int>(filterRole));
}

void QSortFilterProxyModel_Connect_FilterRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::filterRoleChanged, [self, slotFunc](int filterRole) {
        int sigval1 = filterRole;
        slotFunc(self, sigval1);
    });
}

void QSortFilterProxyModel_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled) {
    self->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}

void QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::recursiveFilteringEnabledChanged, [self, slotFunc](bool recursiveFilteringEnabled) {
        bool sigval1 = recursiveFilteringEnabled;
        slotFunc(self, sigval1);
    });
}

void QSortFilterProxyModel_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, bool autoAcceptChildRows) {
    self->autoAcceptChildRowsChanged(autoAcceptChildRows);
}

void QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::autoAcceptChildRowsChanged, [self, slotFunc](bool autoAcceptChildRows) {
        bool sigval1 = autoAcceptChildRows;
        slotFunc(self, sigval1);
    });
}

libqt_string QSortFilterProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = QSortFilterProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSortFilterProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSortFilterProxyModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setSourceModel(sourceModel);
    } else {
        self->QSortFilterProxyModel::setSourceModel(sourceModel);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseSetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SetSourceModel_IsBase(true);
        vqsortfilterproxymodel->setSourceModel(sourceModel);
    } else {
        self->QSortFilterProxyModel::setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetSourceModel(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_MapToSource(const QSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QModelIndex(vqsortfilterproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseMapToSource(const QSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vqsortfilterproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapToSource(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_MapFromSource(const QSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QModelIndex(vqsortfilterproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseMapFromSource(const QSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vqsortfilterproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapFromSource(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QSortFilterProxyModel_MapSelectionToSource(const QSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QItemSelection(vqsortfilterproxymodel->mapSelectionToSource(*proxySelection));
    } else {
        return new QItemSelection(((VirtualQSortFilterProxyModel*)self)->mapSelectionToSource(*proxySelection));
    }
}

// Base class handler implementation
QItemSelection* QSortFilterProxyModel_QBaseMapSelectionToSource(const QSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vqsortfilterproxymodel->mapSelectionToSource(*proxySelection));
    } else {
        return new QItemSelection(((VirtualQSortFilterProxyModel*)self)->mapSelectionToSource(*proxySelection));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapSelectionToSource(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QSortFilterProxyModel_MapSelectionFromSource(const QSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QItemSelection(vqsortfilterproxymodel->mapSelectionFromSource(*sourceSelection));
    } else {
        return new QItemSelection(((VirtualQSortFilterProxyModel*)self)->mapSelectionFromSource(*sourceSelection));
    }
}

// Base class handler implementation
QItemSelection* QSortFilterProxyModel_QBaseMapSelectionFromSource(const QSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vqsortfilterproxymodel->mapSelectionFromSource(*sourceSelection));
    } else {
        return new QItemSelection(((VirtualQSortFilterProxyModel*)self)->mapSelectionFromSource(*sourceSelection));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapSelectionFromSource(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_FilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseFilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_FilterAcceptsRow_IsBase(true);
        return vqsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFilterAcceptsRow(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_FilterAcceptsRow_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FilterAcceptsRow_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_FilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseFilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_FilterAcceptsColumn_IsBase(true);
        return vqsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFilterAcceptsColumn(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_FilterAcceptsColumn_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FilterAcceptsColumn_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_LessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->lessThan(*source_left, *source_right);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->lessThan(*source_left, *source_right);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseLessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_LessThan_IsBase(true);
        return vqsortfilterproxymodel->lessThan(*source_left, *source_right);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->lessThan(*source_left, *source_right);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnLessThan(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_LessThan_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_LessThan_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_Index(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QModelIndex(vqsortfilterproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseIndex(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Index_IsBase(true);
        return new QModelIndex(vqsortfilterproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnIndex(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Index_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_Parent(const QSortFilterProxyModel* self, const QModelIndex* child) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QModelIndex(vqsortfilterproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseParent(const QSortFilterProxyModel* self, const QModelIndex* child) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Parent_IsBase(true);
        return new QModelIndex(vqsortfilterproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnParent(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Parent_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_Sibling(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QModelIndex(vqsortfilterproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseSibling(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vqsortfilterproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSibling(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Sibling_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
int QSortFilterProxyModel_RowCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->rowCount(*parent);
    } else {
        return self->QSortFilterProxyModel::rowCount(*parent);
    }
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseRowCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_RowCount_IsBase(true);
        return vqsortfilterproxymodel->rowCount(*parent);
    } else {
        return self->QSortFilterProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRowCount(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_RowCount_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QSortFilterProxyModel_ColumnCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->columnCount(*parent);
    } else {
        return self->QSortFilterProxyModel::columnCount(*parent);
    }
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseColumnCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ColumnCount_IsBase(true);
        return vqsortfilterproxymodel->columnCount(*parent);
    } else {
        return self->QSortFilterProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnColumnCount(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_HasChildren(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->hasChildren(*parent);
    } else {
        return self->QSortFilterProxyModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseHasChildren(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_HasChildren_IsBase(true);
        return vqsortfilterproxymodel->hasChildren(*parent);
    } else {
        return self->QSortFilterProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnHasChildren(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSortFilterProxyModel_Data(const QSortFilterProxyModel* self, const QModelIndex* index, int role) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QVariant(vqsortfilterproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSortFilterProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QSortFilterProxyModel_QBaseData(const QSortFilterProxyModel* self, const QModelIndex* index, int role) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Data_IsBase(true);
        return new QVariant(vqsortfilterproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSortFilterProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnData(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Data_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseSetData(QSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SetData_IsBase(true);
        return vqsortfilterproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetData(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SetData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSortFilterProxyModel_HeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QVariant(vqsortfilterproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSortFilterProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QSortFilterProxyModel_QBaseHeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_HeaderData_IsBase(true);
        return new QVariant(vqsortfilterproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSortFilterProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnHeaderData(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseSetHeaderData(QSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SetHeaderData_IsBase(true);
        return vqsortfilterproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetHeaderData(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QSortFilterProxyModel_MimeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->mimeData(indexes_QList);
    } else {
        return self->QSortFilterProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QSortFilterProxyModel_QBaseMimeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MimeData_IsBase(true);
        return vqsortfilterproxymodel->mimeData(indexes_QList);
    } else {
        return self->QSortFilterProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMimeData(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MimeData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_DropMimeData(QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseDropMimeData(QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_DropMimeData_IsBase(true);
        return vqsortfilterproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnDropMimeData(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_InsertRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseInsertRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InsertRows_IsBase(true);
        return vqsortfilterproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInsertRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_InsertColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseInsertColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InsertColumns_IsBase(true);
        return vqsortfilterproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInsertColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_RemoveRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseRemoveRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_RemoveRows_IsBase(true);
        return vqsortfilterproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRemoveRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_RemoveColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseRemoveColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_RemoveColumns_IsBase(true);
        return vqsortfilterproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRemoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_FetchMore(QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->fetchMore(*parent);
    } else {
        self->QSortFilterProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseFetchMore(QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_FetchMore_IsBase(true);
        vqsortfilterproxymodel->fetchMore(*parent);
    } else {
        self->QSortFilterProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFetchMore(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_CanFetchMore(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->canFetchMore(*parent);
    } else {
        return self->QSortFilterProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseCanFetchMore(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CanFetchMore_IsBase(true);
        return vqsortfilterproxymodel->canFetchMore(*parent);
    } else {
        return self->QSortFilterProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCanFetchMore(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
int QSortFilterProxyModel_Flags(const QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return static_cast<int>(vqsortfilterproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->QSortFilterProxyModel::flags(*index));
    }
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseFlags(const QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Flags_IsBase(true);
        return static_cast<int>(vqsortfilterproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->QSortFilterProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFlags(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Flags_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_Buddy(const QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QModelIndex(vqsortfilterproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseBuddy(const QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vqsortfilterproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQSortFilterProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBuddy(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Buddy_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSortFilterProxyModel_Match(const QSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        QList<QModelIndex> _ret = vqsortfilterproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QSortFilterProxyModel_QBaseMatch(const QSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqsortfilterproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMatch(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Match_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSortFilterProxyModel_Span(const QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QSize(vqsortfilterproxymodel->span(*index));
    } else {
        return new QSize(((VirtualQSortFilterProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QSortFilterProxyModel_QBaseSpan(const QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Span_IsBase(true);
        return new QSize(vqsortfilterproxymodel->span(*index));
    } else {
        return new QSize(((VirtualQSortFilterProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSpan(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Span_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column, int order) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseSort(QSortFilterProxyModel* self, int column, int order) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Sort_IsBase(true);
        vqsortfilterproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSort(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Sort_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSortFilterProxyModel_MimeTypes(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        QList<QString> _ret = vqsortfilterproxymodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = self->QSortFilterProxyModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
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
libqt_list /* of libqt_string */ QSortFilterProxyModel_QBaseMimeTypes(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqsortfilterproxymodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = self->QSortFilterProxyModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
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
void QSortFilterProxyModel_OnMimeTypes(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int QSortFilterProxyModel_SupportedDropActions(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return static_cast<int>(vqsortfilterproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QSortFilterProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseSupportedDropActions(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqsortfilterproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QSortFilterProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSupportedDropActions(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_Submit(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->submit();
    } else {
        return self->QSortFilterProxyModel::submit();
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseSubmit(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Submit_IsBase(true);
        return vqsortfilterproxymodel->submit();
    } else {
        return self->QSortFilterProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSubmit(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Submit_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_Revert(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->revert();
    } else {
        self->QSortFilterProxyModel::revert();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseRevert(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Revert_IsBase(true);
        vqsortfilterproxymodel->revert();
    } else {
        self->QSortFilterProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRevert(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Revert_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QSortFilterProxyModel_ItemData(const QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        QMap<int, QVariant> _ret = vqsortfilterproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QSortFilterProxyModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ QSortFilterProxyModel_QBaseItemData(const QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqsortfilterproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QSortFilterProxyModel::itemData(*index);
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
void QSortFilterProxyModel_OnItemData(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ItemData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_SetItemData(QSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->QSortFilterProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseSetItemData(QSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SetItemData_IsBase(true);
        return vqsortfilterproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->QSortFilterProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetItemData(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_ClearItemData(QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->clearItemData(*index);
    } else {
        return self->QSortFilterProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseClearItemData(QSortFilterProxyModel* self, const QModelIndex* index) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ClearItemData_IsBase(true);
        return vqsortfilterproxymodel->clearItemData(*index);
    } else {
        return self->QSortFilterProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnClearItemData(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_CanDropMimeData(const QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseCanDropMimeData(const QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CanDropMimeData_IsBase(true);
        return vqsortfilterproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCanDropMimeData(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QSortFilterProxyModel_SupportedDragActions(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return static_cast<int>(vqsortfilterproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QSortFilterProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseSupportedDragActions(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqsortfilterproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QSortFilterProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSupportedDragActions(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QSortFilterProxyModel_RoleNames(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        QHash<int, QByteArray> _ret = vqsortfilterproxymodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
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
        QHash<int, QByteArray> _ret = self->QSortFilterProxyModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
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
libqt_map /* of int to libqt_string */ QSortFilterProxyModel_QBaseRoleNames(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqsortfilterproxymodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
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
        QHash<int, QByteArray> _ret = self->QSortFilterProxyModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
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
void QSortFilterProxyModel_OnRoleNames(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_MoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseMoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MoveRows_IsBase(true);
        return vqsortfilterproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMoveRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_MoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseMoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MoveColumns_IsBase(true);
        return vqsortfilterproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_MultiData(const QSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QSortFilterProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseMultiData(const QSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MultiData_IsBase(true);
        vqsortfilterproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QSortFilterProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMultiData(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_MultiData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_ResetInternalData(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->resetInternalData();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseResetInternalData(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ResetInternalData_IsBase(true);
        vqsortfilterproxymodel->resetInternalData();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnResetInternalData(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_Event(QSortFilterProxyModel* self, QEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->event(event);
    } else {
        return self->QSortFilterProxyModel::event(event);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseEvent(QSortFilterProxyModel* self, QEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Event_IsBase(true);
        return vqsortfilterproxymodel->event(event);
    } else {
        return self->QSortFilterProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEvent(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Event_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_EventFilter(QSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->eventFilter(watched, event);
    } else {
        return self->QSortFilterProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseEventFilter(QSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EventFilter_IsBase(true);
        return vqsortfilterproxymodel->eventFilter(watched, event);
    } else {
        return self->QSortFilterProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEventFilter(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EventFilter_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_TimerEvent(QSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->timerEvent(event);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseTimerEvent(QSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_TimerEvent_IsBase(true);
        vqsortfilterproxymodel->timerEvent(event);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnTimerEvent(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_ChildEvent(QSortFilterProxyModel* self, QChildEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->childEvent(event);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseChildEvent(QSortFilterProxyModel* self, QChildEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ChildEvent_IsBase(true);
        vqsortfilterproxymodel->childEvent(event);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnChildEvent(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_CustomEvent(QSortFilterProxyModel* self, QEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->customEvent(event);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseCustomEvent(QSortFilterProxyModel* self, QEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CustomEvent_IsBase(true);
        vqsortfilterproxymodel->customEvent(event);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCustomEvent(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_ConnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseConnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ConnectNotify_IsBase(true);
        vqsortfilterproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnConnectNotify(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_DisconnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseDisconnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_DisconnectNotify_IsBase(true);
        vqsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnDisconnectNotify(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_InvalidateFilter(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->invalidateFilter();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->invalidateFilter();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseInvalidateFilter(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateFilter_IsBase(true);
        vqsortfilterproxymodel->invalidateFilter();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->invalidateFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInvalidateFilter(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateFilter_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InvalidateFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_InvalidateRowsFilter(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->invalidateRowsFilter();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->invalidateRowsFilter();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseInvalidateRowsFilter(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateRowsFilter_IsBase(true);
        vqsortfilterproxymodel->invalidateRowsFilter();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->invalidateRowsFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInvalidateRowsFilter(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateRowsFilter_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InvalidateRowsFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_InvalidateColumnsFilter(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->invalidateColumnsFilter();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->invalidateColumnsFilter();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseInvalidateColumnsFilter(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateColumnsFilter_IsBase(true);
        vqsortfilterproxymodel->invalidateColumnsFilter();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->invalidateColumnsFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInvalidateColumnsFilter(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateColumnsFilter_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InvalidateColumnsFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_CreateSourceIndex(const QSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QModelIndex(vqsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseCreateSourceIndex(const QSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vqsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCreateSourceIndex(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_CreateIndex(const QSortFilterProxyModel* self, int row, int column) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return new QModelIndex(vqsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseCreateIndex(const QSortFilterProxyModel* self, int row, int column) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCreateIndex(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_EncodeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseEncodeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EncodeData_IsBase(true);
        vqsortfilterproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEncodeData(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EncodeData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_DecodeData(QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseDecodeData(QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_DecodeData_IsBase(true);
        return vqsortfilterproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnDecodeData(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_DecodeData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_BeginInsertRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseBeginInsertRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginInsertRows_IsBase(true);
        vqsortfilterproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBeginInsertRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_EndInsertRows(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->endInsertRows();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseEndInsertRows(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndInsertRows_IsBase(true);
        vqsortfilterproxymodel->endInsertRows();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEndInsertRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_BeginRemoveRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseBeginRemoveRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginRemoveRows_IsBase(true);
        vqsortfilterproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBeginRemoveRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_EndRemoveRows(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->endRemoveRows();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseEndRemoveRows(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndRemoveRows_IsBase(true);
        vqsortfilterproxymodel->endRemoveRows();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEndRemoveRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_BeginMoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseBeginMoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginMoveRows_IsBase(true);
        return vqsortfilterproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBeginMoveRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_EndMoveRows(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->endMoveRows();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseEndMoveRows(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndMoveRows_IsBase(true);
        vqsortfilterproxymodel->endMoveRows();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEndMoveRows(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_BeginInsertColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseBeginInsertColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginInsertColumns_IsBase(true);
        vqsortfilterproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBeginInsertColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_EndInsertColumns(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->endInsertColumns();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseEndInsertColumns(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndInsertColumns_IsBase(true);
        vqsortfilterproxymodel->endInsertColumns();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEndInsertColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_BeginRemoveColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseBeginRemoveColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginRemoveColumns_IsBase(true);
        vqsortfilterproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBeginRemoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_EndRemoveColumns(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->endRemoveColumns();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseEndRemoveColumns(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndRemoveColumns_IsBase(true);
        vqsortfilterproxymodel->endRemoveColumns();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEndRemoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_BeginMoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseBeginMoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginMoveColumns_IsBase(true);
        return vqsortfilterproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBeginMoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_EndMoveColumns(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->endMoveColumns();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseEndMoveColumns(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndMoveColumns_IsBase(true);
        vqsortfilterproxymodel->endMoveColumns();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEndMoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_BeginResetModel(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->beginResetModel();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseBeginResetModel(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginResetModel_IsBase(true);
        vqsortfilterproxymodel->beginResetModel();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBeginResetModel(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_EndResetModel(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->endResetModel();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseEndResetModel(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndResetModel_IsBase(true);
        vqsortfilterproxymodel->endResetModel();
    } else {
        ((VirtualQSortFilterProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEndResetModel(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_ChangePersistentIndex(QSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseChangePersistentIndex(QSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ChangePersistentIndex_IsBase(true);
        vqsortfilterproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnChangePersistentIndex(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QSortFilterProxyModel_ChangePersistentIndexList(QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
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
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseChangePersistentIndexList(QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
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
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ChangePersistentIndexList_IsBase(true);
        vqsortfilterproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQSortFilterProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnChangePersistentIndexList(QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSortFilterProxyModel_PersistentIndexList(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        QList<QModelIndex> _ret = vqsortfilterproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQSortFilterProxyModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QSortFilterProxyModel_QBasePersistentIndexList(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqsortfilterproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQSortFilterProxyModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnPersistentIndexList(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSortFilterProxyModel_Sender(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->sender();
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSortFilterProxyModel_QBaseSender(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Sender_IsBase(true);
        return vqsortfilterproxymodel->sender();
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSender(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Sender_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSortFilterProxyModel_SenderSignalIndex(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseSenderSignalIndex(const QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SenderSignalIndex_IsBase(true);
        return vqsortfilterproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSenderSignalIndex(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSortFilterProxyModel_Receivers(const QSortFilterProxyModel* self, const char* signal) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->receivers(signal);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseReceivers(const QSortFilterProxyModel* self, const char* signal) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Receivers_IsBase(true);
        return vqsortfilterproxymodel->receivers(signal);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnReceivers(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_Receivers_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSortFilterProxyModel_IsSignalConnected(const QSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        return vqsortfilterproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseIsSignalConnected(const QSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_IsSignalConnected_IsBase(true);
        return vqsortfilterproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQSortFilterProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnIsSignalConnected(const QSortFilterProxyModel* self, intptr_t slot) {
    auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self));
    if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
        vqsortfilterproxymodel->setQSortFilterProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self) {
    delete self;
}
