#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ProvidersModel
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
#include <providersmodel.h>
#include "libprovidersmodel.h"
#include "libprovidersmodel.hxx"

KNSCore__ProvidersModel* KNSCore__ProvidersModel_new() {
    return new VirtualKNSCoreProvidersModel();
}

KNSCore__ProvidersModel* KNSCore__ProvidersModel_new2(QObject* parent) {
    return new VirtualKNSCoreProvidersModel(parent);
}

QMetaObject* KNSCore__ProvidersModel_MetaObject(const KNSCore__ProvidersModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__ProvidersModel_Metacast(KNSCore__ProvidersModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__ProvidersModel_Metacall(KNSCore__ProvidersModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSCore__ProvidersModel_Tr(const char* s) {
    auto _ret = KNSCore::ProvidersModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of int to libqt_string */ KNSCore__ProvidersModel_RoleNames(const KNSCore__ProvidersModel* self) {
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

QVariant* KNSCore__ProvidersModel_Data(const KNSCore__ProvidersModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

int KNSCore__ProvidersModel_RowCount(const KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QObject* KNSCore__ProvidersModel_Engine(const KNSCore__ProvidersModel* self) {
    return self->engine();
}

void KNSCore__ProvidersModel_SetEngine(KNSCore__ProvidersModel* self, QObject* engine) {
    self->setEngine(engine);
}

void KNSCore__ProvidersModel_EngineChanged(KNSCore__ProvidersModel* self) {
    self->engineChanged();
}

libqt_string KNSCore__ProvidersModel_Tr2(const char* s, const char* c) {
    auto _ret = KNSCore::ProvidersModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__ProvidersModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNSCore::ProvidersModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNSCore__ProvidersModel_SuperMetaObject(const KNSCore__ProvidersModel* self) {
    return (QMetaObject*)self->KNSCore::ProvidersModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMetaObject(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_metaobject_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNSCore__ProvidersModel_SuperMetacast(KNSCore__ProvidersModel* self, const char* param1) {
    return self->KNSCore::ProvidersModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMetacast(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_metacast_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNSCore__ProvidersModel_SuperMetacall(KNSCore__ProvidersModel* self, int param1, int param2, void** param3) {
    return self->KNSCore::ProvidersModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMetacall(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_metacall_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KNSCore__ProvidersModel_SuperRoleNames(const KNSCore__ProvidersModel* self) {
    QHash<int, QByteArray> _ret = self->KNSCore::ProvidersModel::roleNames();
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
void KNSCore__ProvidersModel_OnRoleNames(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_rolenames_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
QVariant* KNSCore__ProvidersModel_SuperData(const KNSCore__ProvidersModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KNSCore::ProvidersModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_data_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Data_Callback>(slot);
}

// Base class handler implementation
int KNSCore__ProvidersModel_SuperRowCount(const KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    return self->KNSCore::ProvidersModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnRowCount(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_rowcount_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNSCore__ProvidersModel_Index(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* KNSCore__ProvidersModel_SuperIndex(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KNSCore::ProvidersModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnIndex(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_index_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNSCore__ProvidersModel_Sibling(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KNSCore__ProvidersModel_SuperSibling(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KNSCore::ProvidersModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSibling(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_sibling_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_DropMimeData(KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperDropMimeData(KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KNSCore::ProvidersModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnDropMimeData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_dropmimedata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KNSCore__ProvidersModel_Flags(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KNSCore__ProvidersModel_SuperFlags(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KNSCore::ProvidersModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnFlags(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_flags_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_SetData(KNSCore__ProvidersModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperSetData(KNSCore__ProvidersModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KNSCore::ProvidersModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSetData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_setdata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KNSCore__ProvidersModel_HeaderData(const KNSCore__ProvidersModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KNSCore__ProvidersModel_SuperHeaderData(const KNSCore__ProvidersModel* self, int section, int orientation, int role) {
    return new QVariant(self->KNSCore::ProvidersModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnHeaderData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_headerdata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_SetHeaderData(KNSCore__ProvidersModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperSetHeaderData(KNSCore__ProvidersModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KNSCore::ProvidersModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSetHeaderData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_setheaderdata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KNSCore__ProvidersModel_ItemData(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KNSCore__ProvidersModel_SuperItemData(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KNSCore::ProvidersModel::itemData(*index);
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
void KNSCore__ProvidersModel_OnItemData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_itemdata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_SetItemData(KNSCore__ProvidersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperSetItemData(KNSCore__ProvidersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KNSCore::ProvidersModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSetItemData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_setitemdata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_ClearItemData(KNSCore__ProvidersModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperClearItemData(KNSCore__ProvidersModel* self, const QModelIndex* index) {
    return self->KNSCore::ProvidersModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnClearItemData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_clearitemdata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KNSCore__ProvidersModel_MimeTypes(const KNSCore__ProvidersModel* self) {
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
libqt_list /* of libqt_string */ KNSCore__ProvidersModel_SuperMimeTypes(const KNSCore__ProvidersModel* self) {
    QList<QString> _ret = self->KNSCore::ProvidersModel::mimeTypes();
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
void KNSCore__ProvidersModel_OnMimeTypes(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_mimetypes_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KNSCore__ProvidersModel_MimeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KNSCore__ProvidersModel_SuperMimeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KNSCore::ProvidersModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMimeData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_mimedata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_CanDropMimeData(const KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperCanDropMimeData(const KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KNSCore::ProvidersModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnCanDropMimeData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_candropmimedata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KNSCore__ProvidersModel_SupportedDropActions(const KNSCore__ProvidersModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KNSCore__ProvidersModel_SuperSupportedDropActions(const KNSCore__ProvidersModel* self) {
    return static_cast<int>(self->KNSCore::ProvidersModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSupportedDropActions(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_supporteddropactions_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int KNSCore__ProvidersModel_SupportedDragActions(const KNSCore__ProvidersModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KNSCore__ProvidersModel_SuperSupportedDragActions(const KNSCore__ProvidersModel* self) {
    return static_cast<int>(self->KNSCore::ProvidersModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSupportedDragActions(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_supporteddragactions_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_InsertRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperInsertRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent) {
    return self->KNSCore::ProvidersModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnInsertRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_insertrows_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_InsertColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperInsertColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent) {
    return self->KNSCore::ProvidersModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_insertcolumns_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_RemoveRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperRemoveRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent) {
    return self->KNSCore::ProvidersModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_removerows_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_RemoveColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperRemoveColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent) {
    return self->KNSCore::ProvidersModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_removecolumns_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_MoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KNSCore::ProvidersModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMoveRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_moverows_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_MoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KNSCore::ProvidersModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_movecolumns_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_FetchMore(KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperFetchMore(KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    self->KNSCore::ProvidersModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnFetchMore(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_fetchmore_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_CanFetchMore(const KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperCanFetchMore(const KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    return self->KNSCore::ProvidersModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnCanFetchMore(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_canfetchmore_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_Sort(KNSCore__ProvidersModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperSort(KNSCore__ProvidersModel* self, int column, int order) {
    self->KNSCore::ProvidersModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSort(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_sort_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNSCore__ProvidersModel_Buddy(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KNSCore__ProvidersModel_SuperBuddy(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KNSCore::ProvidersModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBuddy(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_buddy_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_Match(const KNSCore__ProvidersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_SuperMatch(const KNSCore__ProvidersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KNSCore::ProvidersModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KNSCore__ProvidersModel_OnMatch(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_match_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KNSCore__ProvidersModel_Span(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KNSCore__ProvidersModel_SuperSpan(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    return new QSize(self->KNSCore::ProvidersModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSpan(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_span_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Span_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_MultiData(const KNSCore__ProvidersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperMultiData(const KNSCore__ProvidersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KNSCore::ProvidersModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMultiData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        vknscoreprovidersmodel->knscore__providersmodel_multidata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_Submit(KNSCore__ProvidersModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperSubmit(KNSCore__ProvidersModel* self) {
    return self->KNSCore::ProvidersModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSubmit(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_submit_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_Revert(KNSCore__ProvidersModel* self) {
    self->revert();
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperRevert(KNSCore__ProvidersModel* self) {
    self->KNSCore::ProvidersModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnRevert(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_revert_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_ResetInternalData(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel) {
        vknscoreprovidersmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperResetInternalData(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->KNSCore::ProvidersModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnResetInternalData(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_resetinternaldata_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_Event(KNSCore__ProvidersModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperEvent(KNSCore__ProvidersModel* self, QEvent* event) {
    return self->KNSCore::ProvidersModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEvent(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_event_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_EventFilter(KNSCore__ProvidersModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNSCore__ProvidersModel_SuperEventFilter(KNSCore__ProvidersModel* self, QObject* watched, QEvent* event) {
    return self->KNSCore::ProvidersModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEventFilter(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_eventfilter_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_TimerEvent(KNSCore__ProvidersModel* self, QTimerEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel) {
        vknscoreprovidersmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperTimerEvent(KNSCore__ProvidersModel* self, QTimerEvent* event) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->KNSCore::ProvidersModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnTimerEvent(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_timerevent_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_ChildEvent(KNSCore__ProvidersModel* self, QChildEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel) {
        vknscoreprovidersmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperChildEvent(KNSCore__ProvidersModel* self, QChildEvent* event) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->KNSCore::ProvidersModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnChildEvent(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_childevent_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_CustomEvent(KNSCore__ProvidersModel* self, QEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel) {
        vknscoreprovidersmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperCustomEvent(KNSCore__ProvidersModel* self, QEvent* event) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->KNSCore::ProvidersModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnCustomEvent(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_customevent_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_ConnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel) {
        vknscoreprovidersmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperConnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->KNSCore::ProvidersModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnConnectNotify(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_connectnotify_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ProvidersModel_DisconnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel) {
        vknscoreprovidersmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_SuperDisconnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->KNSCore::ProvidersModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSCore::ProvidersModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnDisconnectNotify(KNSCore__ProvidersModel* self, intptr_t slot) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self))
        vknscoreprovidersmodel->knscore__providersmodel_disconnectnotify_callback = reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNSCore__ProvidersModel_CreateIndex(const KNSCore__ProvidersModel* self, int row, int column) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self)))
        return new QModelIndex(vknscoreprovidersmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KNSCore::ProvidersModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_EncodeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__ProvidersModel_DecodeData(KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        return vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_BeginInsertRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_EndInsertRows(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::endInsertRows();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_BeginRemoveRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_EndRemoveRows(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__ProvidersModel_BeginMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        return vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_EndMoveRows(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::endMoveRows();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_BeginInsertColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_EndInsertColumns(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_BeginRemoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_EndRemoveColumns(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__ProvidersModel_BeginMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        return vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_EndMoveColumns(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_BeginResetModel(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::beginResetModel();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_EndResetModel(KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::endResetModel();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_ChangePersistentIndex(KNSCore__ProvidersModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ProvidersModel_ChangePersistentIndexList(KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self)) {
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
        vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_PersistentIndexList(const KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self))) {
        QList<QModelIndex> _ret = vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::persistentIndexList();
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
        qFatal("Error: Protected method KNSCore::ProvidersModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNSCore__ProvidersModel_Sender(const KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self))) {
        return vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::sender();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSCore__ProvidersModel_SenderSignalIndex(const KNSCore__ProvidersModel* self) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self))) {
        return vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSCore__ProvidersModel_Receivers(const KNSCore__ProvidersModel* self, const char* signal) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self))) {
        return vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::receivers(signal);
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__ProvidersModel_IsSignalConnected(const KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    if (auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self))) {
        return vknscoreprovidersmodel->VirtualKNSCoreProvidersModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNSCore::ProvidersModel::isSignalConnected called without a directly constructed type");
}

void KNSCore__ProvidersModel_Delete(KNSCore__ProvidersModel* self) {
    delete self;
}
