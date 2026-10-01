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
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractproxymodel.h>
#include "libqabstractproxymodel.h"
#include "libqabstractproxymodel.hxx"

QAbstractProxyModel* QAbstractProxyModel_new() {
    return new VirtualQAbstractProxyModel();
}

QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent) {
    return new VirtualQAbstractProxyModel(parent);
}

QMetaObject* QAbstractProxyModel_MetaObject(const QAbstractProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractProxyModel_Metacast(QAbstractProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractProxyModel_Metacall(QAbstractProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractProxyModel_Tr(const char* s) {
    auto _ret = QAbstractProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self) {
    return self->sourceModel();
}

QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QAbstractProxyModel_MapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionToSource(*selection));
}

QItemSelection* QAbstractProxyModel_MapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionFromSource(*selection));
}

bool QAbstractProxyModel_Submit(QAbstractProxyModel* self) {
    return self->submit();
}

void QAbstractProxyModel_Revert(QAbstractProxyModel* self) {
    self->revert();
}

QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role) {
    return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
}

QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

libqt_map /* of int to QVariant* */ QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, const QModelIndex* index) {
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

int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractProxyModel_ClearItemData(QAbstractProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

libqt_list /* of libqt_string */ QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self) {
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

int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

libqt_map /* of int to libqt_string */ QAbstractProxyModel_RoleNames(const QAbstractProxyModel* self) {
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

libqt_string QAbstractProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractProxyModel_SuperMetaObject(const QAbstractProxyModel* self) {
    return (QMetaObject*)self->QAbstractProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMetaObject(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_metaobject_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractProxyModel_SuperMetacast(QAbstractProxyModel* self, const char* param1) {
    return self->QAbstractProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMetacast(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_metacast_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractProxyModel_SuperMetacall(QAbstractProxyModel* self, int param1, int param2, void** param3) {
    return self->QAbstractProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMetacall(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_metacall_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void QAbstractProxyModel_SuperSetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
    self->QAbstractProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetSourceModel(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetSourceModel_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapToSource(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_maptosource_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapToSource_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapFromSource(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_mapfromsource_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapFromSource_Callback>(slot);
}

// Base class handler implementation
QItemSelection* QAbstractProxyModel_SuperMapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->QAbstractProxyModel::mapSelectionToSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapSelectionToSource(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapSelectionToSource_Callback>(slot);
}

// Base class handler implementation
QItemSelection* QAbstractProxyModel_SuperMapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->QAbstractProxyModel::mapSelectionFromSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapSelectionFromSource(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperSubmit(QAbstractProxyModel* self) {
    return self->QAbstractProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSubmit(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_submit_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Submit_Callback>(slot);
}

// Base class handler implementation
void QAbstractProxyModel_SuperRevert(QAbstractProxyModel* self) {
    self->QAbstractProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRevert(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_revert_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Revert_Callback>(slot);
}

// Base class handler implementation
QVariant* QAbstractProxyModel_SuperData(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role) {
    return new QVariant(self->QAbstractProxyModel::data(*proxyIndex, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_data_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Data_Callback>(slot);
}

// Base class handler implementation
QVariant* QAbstractProxyModel_SuperHeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->QAbstractProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnHeaderData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_headerdata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QAbstractProxyModel_SuperItemData(const QAbstractProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QAbstractProxyModel::itemData(*index);
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
void QAbstractProxyModel_OnItemData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_itemdata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ItemData_Callback>(slot);
}

// Base class handler implementation
int QAbstractProxyModel_SuperFlags(const QAbstractProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QAbstractProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnFlags(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_flags_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Flags_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperSetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QAbstractProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_setdata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperSetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QAbstractProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetItemData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_setitemdata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetItemData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperSetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QAbstractProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetHeaderData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_setheaderdata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetHeaderData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperClearItemData(QAbstractProxyModel* self, const QModelIndex* index) {
    return self->QAbstractProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnClearItemData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_clearitemdata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ClearItemData_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_SuperBuddy(const QAbstractProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QAbstractProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBuddy(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_buddy_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Buddy_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperCanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent) {
    return self->QAbstractProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCanFetchMore(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_canfetchmore_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CanFetchMore_Callback>(slot);
}

// Base class handler implementation
void QAbstractProxyModel_SuperFetchMore(QAbstractProxyModel* self, const QModelIndex* parent) {
    self->QAbstractProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnFetchMore(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_fetchmore_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_FetchMore_Callback>(slot);
}

// Base class handler implementation
void QAbstractProxyModel_SuperSort(QAbstractProxyModel* self, int column, int order) {
    self->QAbstractProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSort(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_sort_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sort_Callback>(slot);
}

// Base class handler implementation
QSize* QAbstractProxyModel_SuperSpan(const QAbstractProxyModel* self, const QModelIndex* index) {
    return new QSize(self->QAbstractProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSpan(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_span_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Span_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperHasChildren(const QAbstractProxyModel* self, const QModelIndex* parent) {
    return self->QAbstractProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnHasChildren(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_haschildren_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_SuperSibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QAbstractProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSibling(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_sibling_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sibling_Callback>(slot);
}

// Base class handler implementation
QMimeData* QAbstractProxyModel_SuperMimeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QAbstractProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMimeData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_mimedata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperCanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QAbstractProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCanDropMimeData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_candropmimedata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CanDropMimeData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperDropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QAbstractProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnDropMimeData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_dropmimedata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAbstractProxyModel_SuperMimeTypes(const QAbstractProxyModel* self) {
    QList<QString> _ret = self->QAbstractProxyModel::mimeTypes();
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
void QAbstractProxyModel_OnMimeTypes(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_mimetypes_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
int QAbstractProxyModel_SuperSupportedDragActions(const QAbstractProxyModel* self) {
    return static_cast<int>(self->QAbstractProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSupportedDragActions(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SupportedDragActions_Callback>(slot);
}

// Base class handler implementation
int QAbstractProxyModel_SuperSupportedDropActions(const QAbstractProxyModel* self) {
    return static_cast<int>(self->QAbstractProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSupportedDropActions(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QAbstractProxyModel_SuperRoleNames(const QAbstractProxyModel* self) {
    QHash<int, QByteArray> _ret = self->QAbstractProxyModel::roleNames();
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
void QAbstractProxyModel_OnRoleNames(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_rolenames_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_Index(const QAbstractProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnIndex(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_index_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_Parent(const QAbstractProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnParent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_parent_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Parent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractProxyModel_RowCount(const QAbstractProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRowCount(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_rowcount_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
int QAbstractProxyModel_ColumnCount(const QAbstractProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnColumnCount(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_columncount_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractProxyModel_InsertRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperInsertRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QAbstractProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnInsertRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_insertrows_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractProxyModel_InsertColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperInsertColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QAbstractProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnInsertColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_insertcolumns_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractProxyModel_RemoveRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperRemoveRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QAbstractProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRemoveRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_removerows_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractProxyModel_RemoveColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperRemoveColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QAbstractProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRemoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_removecolumns_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractProxyModel_MoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QAbstractProxyModel_SuperMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QAbstractProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMoveRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_moverows_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractProxyModel_MoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QAbstractProxyModel_SuperMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QAbstractProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_movecolumns_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractProxyModel_Match(const QAbstractProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QAbstractProxyModel_SuperMatch(const QAbstractProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QAbstractProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QAbstractProxyModel_OnMatch(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_match_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
void QAbstractProxyModel_MultiData(const QAbstractProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QAbstractProxyModel_SuperMultiData(const QAbstractProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QAbstractProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMultiData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        vqabstractproxymodel->qabstractproxymodel_multidata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void QAbstractProxyModel_ResetInternalData(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel) {
        vqabstractproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QAbstractProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractProxyModel_SuperResetInternalData(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->QAbstractProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QAbstractProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnResetInternalData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractProxyModel_Event(QAbstractProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperEvent(QAbstractProxyModel* self, QEvent* event) {
    return self->QAbstractProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEvent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_event_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractProxyModel_EventFilter(QAbstractProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractProxyModel_SuperEventFilter(QAbstractProxyModel* self, QObject* watched, QEvent* event) {
    return self->QAbstractProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEventFilter(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_eventfilter_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractProxyModel_TimerEvent(QAbstractProxyModel* self, QTimerEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel) {
        vqabstractproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractProxyModel_SuperTimerEvent(QAbstractProxyModel* self, QTimerEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->QAbstractProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnTimerEvent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_timerevent_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractProxyModel_ChildEvent(QAbstractProxyModel* self, QChildEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel) {
        vqabstractproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractProxyModel_SuperChildEvent(QAbstractProxyModel* self, QChildEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->QAbstractProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnChildEvent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_childevent_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractProxyModel_CustomEvent(QAbstractProxyModel* self, QEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel) {
        vqabstractproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractProxyModel_SuperCustomEvent(QAbstractProxyModel* self, QEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->QAbstractProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCustomEvent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_customevent_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractProxyModel_ConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel) {
        vqabstractproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractProxyModel_SuperConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->QAbstractProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnConnectNotify(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_connectnotify_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractProxyModel_DisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel) {
        vqabstractproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractProxyModel_SuperDisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->QAbstractProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnDisconnectNotify(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self))
        vqabstractproxymodel->qabstractproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_CreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        return new QModelIndex(vqabstractproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method QAbstractProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_CreateIndex(const QAbstractProxyModel* self, int row, int column) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self)))
        return new QModelIndex(vqabstractproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QAbstractProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_EncodeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqabstractproxymodel->VirtualQAbstractProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QAbstractProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractProxyModel_DecodeData(QAbstractProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->VirtualQAbstractProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QAbstractProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_BeginInsertRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_EndInsertRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_BeginRemoveRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_EndRemoveRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractProxyModel_BeginMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->VirtualQAbstractProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QAbstractProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_EndMoveRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_BeginInsertColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_EndInsertColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_BeginRemoveColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_EndRemoveColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractProxyModel_BeginMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->VirtualQAbstractProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QAbstractProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_EndMoveColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_BeginResetModel(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_EndResetModel(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_ChangePersistentIndex(QAbstractProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->VirtualQAbstractProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QAbstractProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractProxyModel_ChangePersistentIndexList(QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
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
        vqabstractproxymodel->VirtualQAbstractProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QAbstractProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QAbstractProxyModel_PersistentIndexList(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        QList<QModelIndex> _ret = vqabstractproxymodel->VirtualQAbstractProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method QAbstractProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractProxyModel_Sender(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->VirtualQAbstractProxyModel::sender();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractProxyModel_SenderSignalIndex(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->VirtualQAbstractProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractProxyModel_Receivers(const QAbstractProxyModel* self, const char* signal) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->VirtualQAbstractProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractProxyModel_IsSignalConnected(const QAbstractProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->VirtualQAbstractProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractProxyModel::isSignalConnected called without a directly constructed type");
}

void QAbstractProxyModel_Connect_SourceModelChanged(QAbstractProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractProxyModel*) = reinterpret_cast<void (*)(QAbstractProxyModel*)>(slot);
    QAbstractProxyModel::connect(self, &QAbstractProxyModel::sourceModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractProxyModel_Delete(QAbstractProxyModel* self) {
    delete self;
}
