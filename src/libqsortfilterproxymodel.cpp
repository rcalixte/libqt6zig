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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSortFilterProxyModel_Tr(const char* s) {
    auto _ret = QSortFilterProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

QModelIndex* QSortFilterProxyModel_MapToSource(const QSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QSortFilterProxyModel_MapFromSource(const QSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QSortFilterProxyModel_MapSelectionToSource(const QSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    return new QItemSelection(self->mapSelectionToSource(*proxySelection));
}

QItemSelection* QSortFilterProxyModel_MapSelectionFromSource(const QSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    return new QItemSelection(self->mapSelectionFromSource(*sourceSelection));
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

void QSortFilterProxyModel_SetFilterRegularExpression2(QSortFilterProxyModel* self, const QRegularExpression* regularExpression) {
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

bool QSortFilterProxyModel_FilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        return vqsortfilterproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
    qFatal("Error: Protected method QSortFilterProxyModel::filterAcceptsRow called without a directly constructed type");
}

bool QSortFilterProxyModel_FilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        return vqsortfilterproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
    qFatal("Error: Protected method QSortFilterProxyModel::filterAcceptsColumn called without a directly constructed type");
}

bool QSortFilterProxyModel_LessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right) {
    auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        return vqsortfilterproxymodel->lessThan(*source_left, *source_right);
    }
    qFatal("Error: Protected method QSortFilterProxyModel::lessThan called without a directly constructed type");
}

QModelIndex* QSortFilterProxyModel_Index(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QSortFilterProxyModel_Parent(const QSortFilterProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

QModelIndex* QSortFilterProxyModel_Sibling(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QSortFilterProxyModel_RowCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int QSortFilterProxyModel_ColumnCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

bool QSortFilterProxyModel_HasChildren(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

QVariant* QSortFilterProxyModel_Data(const QSortFilterProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QSortFilterProxyModel_HeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

QMimeData* QSortFilterProxyModel_MimeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

bool QSortFilterProxyModel_DropMimeData(QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QSortFilterProxyModel_InsertRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_InsertColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_RemoveRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_RemoveColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QSortFilterProxyModel_FetchMore(QSortFilterProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

bool QSortFilterProxyModel_CanFetchMore(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

int QSortFilterProxyModel_Flags(const QSortFilterProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

QModelIndex* QSortFilterProxyModel_Buddy(const QSortFilterProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

libqt_list /* of QModelIndex* */ QSortFilterProxyModel_Match(const QSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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

QSize* QSortFilterProxyModel_Span(const QSortFilterProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

libqt_list /* of libqt_string */ QSortFilterProxyModel_MimeTypes(const QSortFilterProxyModel* self) {
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

int QSortFilterProxyModel_SupportedDropActions(const QSortFilterProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter) {
    self->dynamicSortFilterChanged(dynamicSortFilter);
}

void QSortFilterProxyModel_Connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self,
                                   static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::dynamicSortFilterChanged),
                                   [self, slotFunc](bool dynamicSortFilter) {
                                       bool sigval1 = dynamicSortFilter;
                                       slotFunc(self, sigval1);
                                   });
}

void QSortFilterProxyModel_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, int filterCaseSensitivity) {
    self->filterCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(filterCaseSensitivity));
}

void QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self,
                                   static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::filterCaseSensitivityChanged),
                                   [self, slotFunc](Qt::CaseSensitivity filterCaseSensitivity) {
                                       int sigval1 = static_cast<int>(filterCaseSensitivity);
                                       slotFunc(self, sigval1);
                                   });
}

void QSortFilterProxyModel_SortCaseSensitivityChanged(QSortFilterProxyModel* self, int sortCaseSensitivity) {
    self->sortCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(sortCaseSensitivity));
}

void QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self,
                                   static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::sortCaseSensitivityChanged),
                                   [self, slotFunc](Qt::CaseSensitivity sortCaseSensitivity) {
                                       int sigval1 = static_cast<int>(sortCaseSensitivity);
                                       slotFunc(self, sigval1);
                                   });
}

void QSortFilterProxyModel_SortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware) {
    self->sortLocaleAwareChanged(sortLocaleAware);
}

void QSortFilterProxyModel_Connect_SortLocaleAwareChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self,
                                   static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::sortLocaleAwareChanged),
                                   [self, slotFunc](bool sortLocaleAware) {
                                       bool sigval1 = sortLocaleAware;
                                       slotFunc(self, sigval1);
                                   });
}

void QSortFilterProxyModel_SortRoleChanged(QSortFilterProxyModel* self, int sortRole) {
    self->sortRoleChanged(static_cast<int>(sortRole));
}

void QSortFilterProxyModel_Connect_SortRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self,
                                   static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::sortRoleChanged),
                                   [self, slotFunc](int sortRole) {
                                       int sigval1 = sortRole;
                                       slotFunc(self, sigval1);
                                   });
}

void QSortFilterProxyModel_FilterRoleChanged(QSortFilterProxyModel* self, int filterRole) {
    self->filterRoleChanged(static_cast<int>(filterRole));
}

void QSortFilterProxyModel_Connect_FilterRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self,
                                   static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::filterRoleChanged),
                                   [self, slotFunc](int filterRole) {
                                       int sigval1 = filterRole;
                                       slotFunc(self, sigval1);
                                   });
}

void QSortFilterProxyModel_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled) {
    self->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}

void QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self,
                                   static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::recursiveFilteringEnabledChanged),
                                   [self, slotFunc](bool recursiveFilteringEnabled) {
                                       bool sigval1 = recursiveFilteringEnabled;
                                       slotFunc(self, sigval1);
                                   });
}

void QSortFilterProxyModel_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, bool autoAcceptChildRows) {
    self->autoAcceptChildRowsChanged(autoAcceptChildRows);
}

void QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self,
                                   static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::autoAcceptChildRowsChanged),
                                   [self, slotFunc](bool autoAcceptChildRows) {
                                       bool sigval1 = autoAcceptChildRows;
                                       slotFunc(self, sigval1);
                                   });
}

libqt_string QSortFilterProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = QSortFilterProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSortFilterProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSortFilterProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSortFilterProxyModel_SuperMetaObject(const QSortFilterProxyModel* self) {
    return (QMetaObject*)self->QSortFilterProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMetaObject(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_metaobject_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSortFilterProxyModel_SuperMetacast(QSortFilterProxyModel* self, const char* param1) {
    return self->QSortFilterProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMetacast(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_metacast_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSortFilterProxyModel_SuperMetacall(QSortFilterProxyModel* self, int param1, int param2, void** param3) {
    return self->QSortFilterProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMetacall(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_metacall_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void QSortFilterProxyModel_SuperSetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
    self->QSortFilterProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetSourceModel(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetSourceModel_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_SuperMapToSource(const QSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->QSortFilterProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapToSource(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_maptosource_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapToSource_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_SuperMapFromSource(const QSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->QSortFilterProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapFromSource(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_mapfromsource_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapFromSource_Callback>(slot);
}

// Base class handler implementation
QItemSelection* QSortFilterProxyModel_SuperMapSelectionToSource(const QSortFilterProxyModel* self, const QItemSelection* proxySelection) {
    return new QItemSelection(self->QSortFilterProxyModel::mapSelectionToSource(*proxySelection));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapSelectionToSource(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapSelectionToSource_Callback>(slot);
}

// Base class handler implementation
QItemSelection* QSortFilterProxyModel_SuperMapSelectionFromSource(const QSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
    return new QItemSelection(self->QSortFilterProxyModel::mapSelectionFromSource(*sourceSelection));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapSelectionFromSource(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperFilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        return vqsortfilterproxymodel->QSortFilterProxyModel::filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::filterAcceptsRow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFilterAcceptsRow(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_filteracceptsrow_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FilterAcceptsRow_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperFilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        return vqsortfilterproxymodel->QSortFilterProxyModel::filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::filterAcceptsColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFilterAcceptsColumn(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_filteracceptscolumn_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FilterAcceptsColumn_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperLessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        return vqsortfilterproxymodel->QSortFilterProxyModel::lessThan(*source_left, *source_right);
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::lessThan called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnLessThan(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_lessthan_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_LessThan_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_SuperIndex(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QSortFilterProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnIndex(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_index_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_SuperParent(const QSortFilterProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->QSortFilterProxyModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnParent(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_parent_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Parent_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_SuperSibling(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QSortFilterProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSibling(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_sibling_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Sibling_Callback>(slot);
}

// Base class handler implementation
int QSortFilterProxyModel_SuperRowCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRowCount(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_rowcount_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RowCount_Callback>(slot);
}

// Base class handler implementation
int QSortFilterProxyModel_SuperColumnCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnColumnCount(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_columncount_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperHasChildren(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnHasChildren(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_haschildren_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
QVariant* QSortFilterProxyModel_SuperData(const QSortFilterProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->QSortFilterProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_data_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Data_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperSetData(QSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_setdata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetData_Callback>(slot);
}

// Base class handler implementation
QVariant* QSortFilterProxyModel_SuperHeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->QSortFilterProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnHeaderData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_headerdata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperSetHeaderData(QSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetHeaderData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_setheaderdata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetHeaderData_Callback>(slot);
}

// Base class handler implementation
QMimeData* QSortFilterProxyModel_SuperMimeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QSortFilterProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMimeData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_mimedata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperDropMimeData(QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnDropMimeData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_dropmimedata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperInsertRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInsertRows(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_insertrows_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InsertRows_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperInsertColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInsertColumns(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_insertcolumns_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InsertColumns_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperRemoveRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRemoveRows(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_removerows_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RemoveRows_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperRemoveColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRemoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_removecolumns_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RemoveColumns_Callback>(slot);
}

// Base class handler implementation
void QSortFilterProxyModel_SuperFetchMore(QSortFilterProxyModel* self, const QModelIndex* parent) {
    self->QSortFilterProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFetchMore(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_fetchmore_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FetchMore_Callback>(slot);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperCanFetchMore(const QSortFilterProxyModel* self, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCanFetchMore(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_canfetchmore_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CanFetchMore_Callback>(slot);
}

// Base class handler implementation
int QSortFilterProxyModel_SuperFlags(const QSortFilterProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QSortFilterProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFlags(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_flags_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Flags_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_SuperBuddy(const QSortFilterProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QSortFilterProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBuddy(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_buddy_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Buddy_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QSortFilterProxyModel_SuperMatch(const QSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QSortFilterProxyModel_OnMatch(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_match_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Match_Callback>(slot);
}

// Base class handler implementation
QSize* QSortFilterProxyModel_SuperSpan(const QSortFilterProxyModel* self, const QModelIndex* index) {
    return new QSize(self->QSortFilterProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSpan(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_span_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Span_Callback>(slot);
}

// Base class handler implementation
void QSortFilterProxyModel_SuperSort(QSortFilterProxyModel* self, int column, int order) {
    self->QSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSort(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_sort_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Sort_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QSortFilterProxyModel_SuperMimeTypes(const QSortFilterProxyModel* self) {
    QList<QString> _ret = self->QSortFilterProxyModel::mimeTypes();
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
void QSortFilterProxyModel_OnMimeTypes(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_mimetypes_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
int QSortFilterProxyModel_SuperSupportedDropActions(const QSortFilterProxyModel* self) {
    return static_cast<int>(self->QSortFilterProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSupportedDropActions(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
bool QSortFilterProxyModel_Submit(QSortFilterProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperSubmit(QSortFilterProxyModel* self) {
    return self->QSortFilterProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSubmit(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_submit_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QSortFilterProxyModel_Revert(QSortFilterProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void QSortFilterProxyModel_SuperRevert(QSortFilterProxyModel* self) {
    self->QSortFilterProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRevert(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_revert_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QSortFilterProxyModel_ItemData(const QSortFilterProxyModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QSortFilterProxyModel_SuperItemData(const QSortFilterProxyModel* self, const QModelIndex* index) {
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

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnItemData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_itemdata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QSortFilterProxyModel_SetItemData(QSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperSetItemData(QSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QSortFilterProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetItemData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_setitemdata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QSortFilterProxyModel_ClearItemData(QSortFilterProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperClearItemData(QSortFilterProxyModel* self, const QModelIndex* index) {
    return self->QSortFilterProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnClearItemData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_clearitemdata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
bool QSortFilterProxyModel_CanDropMimeData(const QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperCanDropMimeData(const QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCanDropMimeData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_candropmimedata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QSortFilterProxyModel_SupportedDragActions(const QSortFilterProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QSortFilterProxyModel_SuperSupportedDragActions(const QSortFilterProxyModel* self) {
    return static_cast<int>(self->QSortFilterProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSupportedDragActions(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QSortFilterProxyModel_RoleNames(const QSortFilterProxyModel* self) {
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
libqt_map /* of int to libqt_string */ QSortFilterProxyModel_SuperRoleNames(const QSortFilterProxyModel* self) {
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
void QSortFilterProxyModel_OnRoleNames(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_rolenames_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
bool QSortFilterProxyModel_MoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperMoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMoveRows(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_moverows_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QSortFilterProxyModel_MoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperMoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_movecolumns_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QSortFilterProxyModel_MultiData(const QSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QSortFilterProxyModel_SuperMultiData(const QSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QSortFilterProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMultiData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        vqsortfilterproxymodel->qsortfilterproxymodel_multidata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void QSortFilterProxyModel_ResetInternalData(QSortFilterProxyModel* self) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        vqsortfilterproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QSortFilterProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QSortFilterProxyModel_SuperResetInternalData(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->QSortFilterProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnResetInternalData(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QSortFilterProxyModel_Event(QSortFilterProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperEvent(QSortFilterProxyModel* self, QEvent* event) {
    return self->QSortFilterProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEvent(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_event_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSortFilterProxyModel_EventFilter(QSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSortFilterProxyModel_SuperEventFilter(QSortFilterProxyModel* self, QObject* watched, QEvent* event) {
    return self->QSortFilterProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnEventFilter(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_eventfilter_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSortFilterProxyModel_TimerEvent(QSortFilterProxyModel* self, QTimerEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        vqsortfilterproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSortFilterProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSortFilterProxyModel_SuperTimerEvent(QSortFilterProxyModel* self, QTimerEvent* event) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->QSortFilterProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnTimerEvent(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_timerevent_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSortFilterProxyModel_ChildEvent(QSortFilterProxyModel* self, QChildEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        vqsortfilterproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSortFilterProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSortFilterProxyModel_SuperChildEvent(QSortFilterProxyModel* self, QChildEvent* event) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->QSortFilterProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnChildEvent(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_childevent_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSortFilterProxyModel_CustomEvent(QSortFilterProxyModel* self, QEvent* event) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        vqsortfilterproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSortFilterProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSortFilterProxyModel_SuperCustomEvent(QSortFilterProxyModel* self, QEvent* event) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->QSortFilterProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCustomEvent(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_customevent_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSortFilterProxyModel_ConnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        vqsortfilterproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSortFilterProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSortFilterProxyModel_SuperConnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->QSortFilterProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnConnectNotify(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_connectnotify_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSortFilterProxyModel_DisconnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal) {
    auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
    if (vqsortfilterproxymodel) {
        vqsortfilterproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSortFilterProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSortFilterProxyModel_SuperDisconnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->QSortFilterProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSortFilterProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnDisconnectNotify(QSortFilterProxyModel* self, intptr_t slot) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self))
        vqsortfilterproxymodel->qsortfilterproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSortFilterProxyModel_InvalidateFilter(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::invalidateFilter();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::invalidateFilter called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_InvalidateRowsFilter(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::invalidateRowsFilter();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::invalidateRowsFilter called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_InvalidateColumnsFilter(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::invalidateColumnsFilter();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::invalidateColumnsFilter called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_CreateSourceIndex(const QSortFilterProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        return new QModelIndex(vqsortfilterproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method QSortFilterProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QSortFilterProxyModel_CreateIndex(const QSortFilterProxyModel* self, int row, int column) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self)))
        return new QModelIndex(vqsortfilterproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QSortFilterProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_EncodeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSortFilterProxyModel_DecodeData(QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        return vqsortfilterproxymodel->VirtualQSortFilterProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_BeginInsertRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_EndInsertRows(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_BeginRemoveRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_EndRemoveRows(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSortFilterProxyModel_BeginMoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        return vqsortfilterproxymodel->VirtualQSortFilterProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_EndMoveRows(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_BeginInsertColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_EndInsertColumns(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_BeginRemoveColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_EndRemoveColumns(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSortFilterProxyModel_BeginMoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        return vqsortfilterproxymodel->VirtualQSortFilterProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_EndMoveColumns(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_BeginResetModel(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_EndResetModel(QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_ChangePersistentIndex(QSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QSortFilterProxyModel_ChangePersistentIndexList(QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self)) {
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
        vqsortfilterproxymodel->VirtualQSortFilterProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QSortFilterProxyModel_PersistentIndexList(const QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        QList<QModelIndex> _ret = vqsortfilterproxymodel->VirtualQSortFilterProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method QSortFilterProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSortFilterProxyModel_Sender(const QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        return vqsortfilterproxymodel->VirtualQSortFilterProxyModel::sender();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSortFilterProxyModel_SenderSignalIndex(const QSortFilterProxyModel* self) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        return vqsortfilterproxymodel->VirtualQSortFilterProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSortFilterProxyModel_Receivers(const QSortFilterProxyModel* self, const char* signal) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        return vqsortfilterproxymodel->VirtualQSortFilterProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSortFilterProxyModel_IsSignalConnected(const QSortFilterProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqsortfilterproxymodel = const_cast<VirtualQSortFilterProxyModel*>(dynamic_cast<const VirtualQSortFilterProxyModel*>(self))) {
        return vqsortfilterproxymodel->VirtualQSortFilterProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSortFilterProxyModel::isSignalConnected called without a directly constructed type");
}

void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self) {
    delete self;
}
