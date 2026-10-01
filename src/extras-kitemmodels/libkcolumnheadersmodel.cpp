#include <KColumnHeadersModel>
#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
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
#include <kcolumnheadersmodel.h>
#include "libkcolumnheadersmodel.h"
#include "libkcolumnheadersmodel.hxx"

KColumnHeadersModel* KColumnHeadersModel_new() {
    return new VirtualKColumnHeadersModel();
}

KColumnHeadersModel* KColumnHeadersModel_new2(QObject* parent) {
    return new VirtualKColumnHeadersModel(parent);
}

QMetaObject* KColumnHeadersModel_MetaObject(const KColumnHeadersModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColumnHeadersModel_Metacast(KColumnHeadersModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColumnHeadersModel_Metacall(KColumnHeadersModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KColumnHeadersModel_Tr(const char* s) {
    auto _ret = KColumnHeadersModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KColumnHeadersModel_RowCount(const KColumnHeadersModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* KColumnHeadersModel_Data(const KColumnHeadersModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

libqt_map /* of int to libqt_string */ KColumnHeadersModel_RoleNames(const KColumnHeadersModel* self) {
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

QAbstractItemModel* KColumnHeadersModel_SourceModel(const KColumnHeadersModel* self) {
    return self->sourceModel();
}

void KColumnHeadersModel_SetSourceModel(KColumnHeadersModel* self, QAbstractItemModel* newSourceModel) {
    self->setSourceModel(newSourceModel);
}

int KColumnHeadersModel_SortColumn(const KColumnHeadersModel* self) {
    return self->sortColumn();
}

void KColumnHeadersModel_SetSortColumn(KColumnHeadersModel* self, int newSortColumn) {
    self->setSortColumn(static_cast<int>(newSortColumn));
}

int KColumnHeadersModel_SortOrder(const KColumnHeadersModel* self) {
    return static_cast<int>(self->sortOrder());
}

void KColumnHeadersModel_SetSortOrder(KColumnHeadersModel* self, int newSortOrder) {
    self->setSortOrder(static_cast<Qt::SortOrder>(newSortOrder));
}

void KColumnHeadersModel_SourceModelChanged(KColumnHeadersModel* self) {
    self->sourceModelChanged();
}

void KColumnHeadersModel_Connect_SourceModelChanged(KColumnHeadersModel* self, intptr_t slot) {
    void (*slotFunc)(KColumnHeadersModel*) = reinterpret_cast<void (*)(KColumnHeadersModel*)>(slot);
    KColumnHeadersModel::connect(self,
                                 static_cast<void (KColumnHeadersModel::*)()>(&KColumnHeadersModel::sourceModelChanged),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

void KColumnHeadersModel_SortColumnChanged(KColumnHeadersModel* self) {
    self->sortColumnChanged();
}

void KColumnHeadersModel_Connect_SortColumnChanged(KColumnHeadersModel* self, intptr_t slot) {
    void (*slotFunc)(KColumnHeadersModel*) = reinterpret_cast<void (*)(KColumnHeadersModel*)>(slot);
    KColumnHeadersModel::connect(self,
                                 static_cast<void (KColumnHeadersModel::*)()>(&KColumnHeadersModel::sortColumnChanged),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

void KColumnHeadersModel_SortOrderChanged(KColumnHeadersModel* self) {
    self->sortOrderChanged();
}

void KColumnHeadersModel_Connect_SortOrderChanged(KColumnHeadersModel* self, intptr_t slot) {
    void (*slotFunc)(KColumnHeadersModel*) = reinterpret_cast<void (*)(KColumnHeadersModel*)>(slot);
    KColumnHeadersModel::connect(self,
                                 static_cast<void (KColumnHeadersModel::*)()>(&KColumnHeadersModel::sortOrderChanged),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

libqt_string KColumnHeadersModel_Tr2(const char* s, const char* c) {
    auto _ret = KColumnHeadersModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColumnHeadersModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KColumnHeadersModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KColumnHeadersModel_SuperMetaObject(const KColumnHeadersModel* self) {
    return (QMetaObject*)self->KColumnHeadersModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMetaObject(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_metaobject_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KColumnHeadersModel_SuperMetacast(KColumnHeadersModel* self, const char* param1) {
    return self->KColumnHeadersModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMetacast(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_metacast_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KColumnHeadersModel_SuperMetacall(KColumnHeadersModel* self, int param1, int param2, void** param3) {
    return self->KColumnHeadersModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMetacall(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_metacall_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int KColumnHeadersModel_SuperRowCount(const KColumnHeadersModel* self, const QModelIndex* parent) {
    return self->KColumnHeadersModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnRowCount(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_rowcount_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* KColumnHeadersModel_SuperData(const KColumnHeadersModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KColumnHeadersModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_data_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Data_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KColumnHeadersModel_SuperRoleNames(const KColumnHeadersModel* self) {
    QHash<int, QByteArray> _ret = self->KColumnHeadersModel::roleNames();
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
void KColumnHeadersModel_OnRoleNames(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_rolenames_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KColumnHeadersModel_Index(const KColumnHeadersModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* KColumnHeadersModel_SuperIndex(const KColumnHeadersModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KColumnHeadersModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnIndex(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_index_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KColumnHeadersModel_Sibling(const KColumnHeadersModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KColumnHeadersModel_SuperSibling(const KColumnHeadersModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KColumnHeadersModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSibling(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_sibling_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_DropMimeData(KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperDropMimeData(KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KColumnHeadersModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnDropMimeData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_dropmimedata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KColumnHeadersModel_Flags(const KColumnHeadersModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KColumnHeadersModel_SuperFlags(const KColumnHeadersModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KColumnHeadersModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnFlags(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_flags_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_SetData(KColumnHeadersModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KColumnHeadersModel_SuperSetData(KColumnHeadersModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KColumnHeadersModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSetData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_setdata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KColumnHeadersModel_HeaderData(const KColumnHeadersModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KColumnHeadersModel_SuperHeaderData(const KColumnHeadersModel* self, int section, int orientation, int role) {
    return new QVariant(self->KColumnHeadersModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnHeaderData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_headerdata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_SetHeaderData(KColumnHeadersModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KColumnHeadersModel_SuperSetHeaderData(KColumnHeadersModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KColumnHeadersModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSetHeaderData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_setheaderdata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KColumnHeadersModel_ItemData(const KColumnHeadersModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KColumnHeadersModel_SuperItemData(const KColumnHeadersModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KColumnHeadersModel::itemData(*index);
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
void KColumnHeadersModel_OnItemData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_itemdata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_SetItemData(KColumnHeadersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperSetItemData(KColumnHeadersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KColumnHeadersModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSetItemData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_setitemdata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_ClearItemData(KColumnHeadersModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperClearItemData(KColumnHeadersModel* self, const QModelIndex* index) {
    return self->KColumnHeadersModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnClearItemData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_clearitemdata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KColumnHeadersModel_MimeTypes(const KColumnHeadersModel* self) {
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
libqt_list /* of libqt_string */ KColumnHeadersModel_SuperMimeTypes(const KColumnHeadersModel* self) {
    QList<QString> _ret = self->KColumnHeadersModel::mimeTypes();
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
void KColumnHeadersModel_OnMimeTypes(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_mimetypes_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KColumnHeadersModel_MimeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KColumnHeadersModel_SuperMimeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KColumnHeadersModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMimeData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_mimedata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_CanDropMimeData(const KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperCanDropMimeData(const KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KColumnHeadersModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnCanDropMimeData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_candropmimedata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KColumnHeadersModel_SupportedDropActions(const KColumnHeadersModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KColumnHeadersModel_SuperSupportedDropActions(const KColumnHeadersModel* self) {
    return static_cast<int>(self->KColumnHeadersModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSupportedDropActions(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_supporteddropactions_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int KColumnHeadersModel_SupportedDragActions(const KColumnHeadersModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KColumnHeadersModel_SuperSupportedDragActions(const KColumnHeadersModel* self) {
    return static_cast<int>(self->KColumnHeadersModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSupportedDragActions(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_supporteddragactions_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_InsertRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperInsertRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent) {
    return self->KColumnHeadersModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnInsertRows(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_insertrows_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_InsertColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperInsertColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent) {
    return self->KColumnHeadersModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnInsertColumns(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_insertcolumns_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_RemoveRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperRemoveRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent) {
    return self->KColumnHeadersModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnRemoveRows(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_removerows_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_RemoveColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperRemoveColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent) {
    return self->KColumnHeadersModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnRemoveColumns(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_removecolumns_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_MoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KColumnHeadersModel_SuperMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KColumnHeadersModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMoveRows(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_moverows_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_MoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KColumnHeadersModel_SuperMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KColumnHeadersModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMoveColumns(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_movecolumns_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_FetchMore(KColumnHeadersModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KColumnHeadersModel_SuperFetchMore(KColumnHeadersModel* self, const QModelIndex* parent) {
    self->KColumnHeadersModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnFetchMore(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_fetchmore_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_CanFetchMore(const KColumnHeadersModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperCanFetchMore(const KColumnHeadersModel* self, const QModelIndex* parent) {
    return self->KColumnHeadersModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnCanFetchMore(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_canfetchmore_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_Sort(KColumnHeadersModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KColumnHeadersModel_SuperSort(KColumnHeadersModel* self, int column, int order) {
    self->KColumnHeadersModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSort(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_sort_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KColumnHeadersModel_Buddy(const KColumnHeadersModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KColumnHeadersModel_SuperBuddy(const KColumnHeadersModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KColumnHeadersModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBuddy(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_buddy_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KColumnHeadersModel_Match(const KColumnHeadersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KColumnHeadersModel_SuperMatch(const KColumnHeadersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KColumnHeadersModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KColumnHeadersModel_OnMatch(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_match_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KColumnHeadersModel_Span(const KColumnHeadersModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KColumnHeadersModel_SuperSpan(const KColumnHeadersModel* self, const QModelIndex* index) {
    return new QSize(self->KColumnHeadersModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSpan(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_span_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Span_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_MultiData(const KColumnHeadersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KColumnHeadersModel_SuperMultiData(const KColumnHeadersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KColumnHeadersModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMultiData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        vkcolumnheadersmodel->kcolumnheadersmodel_multidata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_Submit(KColumnHeadersModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KColumnHeadersModel_SuperSubmit(KColumnHeadersModel* self) {
    return self->KColumnHeadersModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSubmit(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_submit_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_Revert(KColumnHeadersModel* self) {
    self->revert();
}

// Base class handler implementation
void KColumnHeadersModel_SuperRevert(KColumnHeadersModel* self) {
    self->KColumnHeadersModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnRevert(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_revert_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_ResetInternalData(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel) {
        vkcolumnheadersmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KColumnHeadersModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnHeadersModel_SuperResetInternalData(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->KColumnHeadersModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KColumnHeadersModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnResetInternalData(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_resetinternaldata_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_Event(KColumnHeadersModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperEvent(KColumnHeadersModel* self, QEvent* event) {
    return self->KColumnHeadersModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEvent(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_event_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KColumnHeadersModel_EventFilter(KColumnHeadersModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KColumnHeadersModel_SuperEventFilter(KColumnHeadersModel* self, QObject* watched, QEvent* event) {
    return self->KColumnHeadersModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEventFilter(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_eventfilter_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_TimerEvent(KColumnHeadersModel* self, QTimerEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel) {
        vkcolumnheadersmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColumnHeadersModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnHeadersModel_SuperTimerEvent(KColumnHeadersModel* self, QTimerEvent* event) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->KColumnHeadersModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KColumnHeadersModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnTimerEvent(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_timerevent_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_ChildEvent(KColumnHeadersModel* self, QChildEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel) {
        vkcolumnheadersmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColumnHeadersModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnHeadersModel_SuperChildEvent(KColumnHeadersModel* self, QChildEvent* event) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->KColumnHeadersModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KColumnHeadersModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnChildEvent(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_childevent_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_CustomEvent(KColumnHeadersModel* self, QEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel) {
        vkcolumnheadersmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColumnHeadersModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnHeadersModel_SuperCustomEvent(KColumnHeadersModel* self, QEvent* event) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->KColumnHeadersModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KColumnHeadersModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnCustomEvent(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_customevent_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_ConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel) {
        vkcolumnheadersmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColumnHeadersModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnHeadersModel_SuperConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->KColumnHeadersModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColumnHeadersModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnConnectNotify(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_connectnotify_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KColumnHeadersModel_DisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel) {
        vkcolumnheadersmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColumnHeadersModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnHeadersModel_SuperDisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->KColumnHeadersModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColumnHeadersModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnDisconnectNotify(KColumnHeadersModel* self, intptr_t slot) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self))
        vkcolumnheadersmodel->kcolumnheadersmodel_disconnectnotify_callback = reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KColumnHeadersModel_CreateIndex(const KColumnHeadersModel* self, int row, int column) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self)))
        return new QModelIndex(vkcolumnheadersmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KColumnHeadersModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_EncodeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KColumnHeadersModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColumnHeadersModel_DecodeData(KColumnHeadersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        return vkcolumnheadersmodel->VirtualKColumnHeadersModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KColumnHeadersModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_BeginInsertRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KColumnHeadersModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_EndInsertRows(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::endInsertRows();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_BeginRemoveRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KColumnHeadersModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_EndRemoveRows(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColumnHeadersModel_BeginMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        return vkcolumnheadersmodel->VirtualKColumnHeadersModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KColumnHeadersModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_EndMoveRows(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::endMoveRows();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_BeginInsertColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KColumnHeadersModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_EndInsertColumns(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_BeginRemoveColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KColumnHeadersModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_EndRemoveColumns(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColumnHeadersModel_BeginMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        return vkcolumnheadersmodel->VirtualKColumnHeadersModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KColumnHeadersModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_EndMoveColumns(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_BeginResetModel(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::beginResetModel();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_EndResetModel(KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::endResetModel();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_ChangePersistentIndex(KColumnHeadersModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KColumnHeadersModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KColumnHeadersModel_ChangePersistentIndexList(KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self)) {
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
        vkcolumnheadersmodel->VirtualKColumnHeadersModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KColumnHeadersModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KColumnHeadersModel_PersistentIndexList(const KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self))) {
        QList<QModelIndex> _ret = vkcolumnheadersmodel->VirtualKColumnHeadersModel::persistentIndexList();
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
        qFatal("Error: Protected method KColumnHeadersModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KColumnHeadersModel_Sender(const KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self))) {
        return vkcolumnheadersmodel->VirtualKColumnHeadersModel::sender();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KColumnHeadersModel_SenderSignalIndex(const KColumnHeadersModel* self) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self))) {
        return vkcolumnheadersmodel->VirtualKColumnHeadersModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KColumnHeadersModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KColumnHeadersModel_Receivers(const KColumnHeadersModel* self, const char* signal) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self))) {
        return vkcolumnheadersmodel->VirtualKColumnHeadersModel::receivers(signal);
    } else
        qFatal("Error: Protected method KColumnHeadersModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColumnHeadersModel_IsSignalConnected(const KColumnHeadersModel* self, const QMetaMethod* signal) {
    if (auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self))) {
        return vkcolumnheadersmodel->VirtualKColumnHeadersModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KColumnHeadersModel::isSignalConnected called without a directly constructed type");
}

void KColumnHeadersModel_Delete(KColumnHeadersModel* self) {
    delete self;
}
