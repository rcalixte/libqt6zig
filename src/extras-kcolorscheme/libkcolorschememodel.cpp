#include <KColorSchemeModel>
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
#include <kcolorschememodel.h>
#include "libkcolorschememodel.h"
#include "libkcolorschememodel.hxx"

KColorSchemeModel* KColorSchemeModel_new() {
    return new VirtualKColorSchemeModel();
}

KColorSchemeModel* KColorSchemeModel_new2(QObject* parent) {
    return new VirtualKColorSchemeModel(parent);
}

QMetaObject* KColorSchemeModel_MetaObject(const KColorSchemeModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColorSchemeModel_Metacast(KColorSchemeModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColorSchemeModel_Metacall(KColorSchemeModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KColorSchemeModel_Tr(const char* s) {
    auto _ret = KColorSchemeModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* KColorSchemeModel_Data(const KColorSchemeModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

int KColorSchemeModel_RowCount(const KColorSchemeModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

libqt_string KColorSchemeModel_Tr2(const char* s, const char* c) {
    auto _ret = KColorSchemeModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorSchemeModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KColorSchemeModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KColorSchemeModel_SuperMetaObject(const KColorSchemeModel* self) {
    return (QMetaObject*)self->KColorSchemeModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMetaObject(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_metaobject_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KColorSchemeModel_SuperMetacast(KColorSchemeModel* self, const char* param1) {
    return self->KColorSchemeModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMetacast(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_metacast_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KColorSchemeModel_SuperMetacall(KColorSchemeModel* self, int param1, int param2, void** param3) {
    return self->KColorSchemeModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMetacall(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_metacall_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* KColorSchemeModel_SuperData(const KColorSchemeModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KColorSchemeModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_data_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Data_Callback>(slot);
}

// Base class handler implementation
int KColorSchemeModel_SuperRowCount(const KColorSchemeModel* self, const QModelIndex* parent) {
    return self->KColorSchemeModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnRowCount(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_rowcount_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KColorSchemeModel_Index(const KColorSchemeModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* KColorSchemeModel_SuperIndex(const KColorSchemeModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KColorSchemeModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnIndex(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_index_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KColorSchemeModel_Sibling(const KColorSchemeModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KColorSchemeModel_SuperSibling(const KColorSchemeModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KColorSchemeModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSibling(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_sibling_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_DropMimeData(KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KColorSchemeModel_SuperDropMimeData(KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KColorSchemeModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnDropMimeData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_dropmimedata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KColorSchemeModel_Flags(const KColorSchemeModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KColorSchemeModel_SuperFlags(const KColorSchemeModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KColorSchemeModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnFlags(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_flags_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_SetData(KColorSchemeModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KColorSchemeModel_SuperSetData(KColorSchemeModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KColorSchemeModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSetData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_setdata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KColorSchemeModel_HeaderData(const KColorSchemeModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KColorSchemeModel_SuperHeaderData(const KColorSchemeModel* self, int section, int orientation, int role) {
    return new QVariant(self->KColorSchemeModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnHeaderData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_headerdata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_SetHeaderData(KColorSchemeModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KColorSchemeModel_SuperSetHeaderData(KColorSchemeModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KColorSchemeModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSetHeaderData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_setheaderdata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KColorSchemeModel_ItemData(const KColorSchemeModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KColorSchemeModel_SuperItemData(const KColorSchemeModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KColorSchemeModel::itemData(*index);
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
void KColorSchemeModel_OnItemData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_itemdata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_SetItemData(KColorSchemeModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KColorSchemeModel_SuperSetItemData(KColorSchemeModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KColorSchemeModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSetItemData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_setitemdata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_ClearItemData(KColorSchemeModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KColorSchemeModel_SuperClearItemData(KColorSchemeModel* self, const QModelIndex* index) {
    return self->KColorSchemeModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnClearItemData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_clearitemdata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KColorSchemeModel_MimeTypes(const KColorSchemeModel* self) {
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
libqt_list /* of libqt_string */ KColorSchemeModel_SuperMimeTypes(const KColorSchemeModel* self) {
    QList<QString> _ret = self->KColorSchemeModel::mimeTypes();
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
void KColorSchemeModel_OnMimeTypes(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_mimetypes_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KColorSchemeModel_MimeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KColorSchemeModel_SuperMimeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KColorSchemeModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMimeData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_mimedata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_CanDropMimeData(const KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KColorSchemeModel_SuperCanDropMimeData(const KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KColorSchemeModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnCanDropMimeData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_candropmimedata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KColorSchemeModel_SupportedDropActions(const KColorSchemeModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KColorSchemeModel_SuperSupportedDropActions(const KColorSchemeModel* self) {
    return static_cast<int>(self->KColorSchemeModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSupportedDropActions(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_supporteddropactions_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int KColorSchemeModel_SupportedDragActions(const KColorSchemeModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KColorSchemeModel_SuperSupportedDragActions(const KColorSchemeModel* self) {
    return static_cast<int>(self->KColorSchemeModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSupportedDragActions(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_supporteddragactions_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_InsertRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KColorSchemeModel_SuperInsertRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent) {
    return self->KColorSchemeModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnInsertRows(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_insertrows_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_InsertColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KColorSchemeModel_SuperInsertColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent) {
    return self->KColorSchemeModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnInsertColumns(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_insertcolumns_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_RemoveRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KColorSchemeModel_SuperRemoveRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent) {
    return self->KColorSchemeModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnRemoveRows(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_removerows_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_RemoveColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KColorSchemeModel_SuperRemoveColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent) {
    return self->KColorSchemeModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnRemoveColumns(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_removecolumns_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_MoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KColorSchemeModel_SuperMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KColorSchemeModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMoveRows(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_moverows_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_MoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KColorSchemeModel_SuperMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KColorSchemeModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMoveColumns(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_movecolumns_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_FetchMore(KColorSchemeModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KColorSchemeModel_SuperFetchMore(KColorSchemeModel* self, const QModelIndex* parent) {
    self->KColorSchemeModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnFetchMore(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_fetchmore_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_CanFetchMore(const KColorSchemeModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KColorSchemeModel_SuperCanFetchMore(const KColorSchemeModel* self, const QModelIndex* parent) {
    return self->KColorSchemeModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnCanFetchMore(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_canfetchmore_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_Sort(KColorSchemeModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KColorSchemeModel_SuperSort(KColorSchemeModel* self, int column, int order) {
    self->KColorSchemeModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSort(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_sort_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KColorSchemeModel_Buddy(const KColorSchemeModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KColorSchemeModel_SuperBuddy(const KColorSchemeModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KColorSchemeModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBuddy(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_buddy_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KColorSchemeModel_Match(const KColorSchemeModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KColorSchemeModel_SuperMatch(const KColorSchemeModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KColorSchemeModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KColorSchemeModel_OnMatch(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_match_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KColorSchemeModel_Span(const KColorSchemeModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KColorSchemeModel_SuperSpan(const KColorSchemeModel* self, const QModelIndex* index) {
    return new QSize(self->KColorSchemeModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSpan(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_span_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KColorSchemeModel_RoleNames(const KColorSchemeModel* self) {
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
libqt_map /* of int to libqt_string */ KColorSchemeModel_SuperRoleNames(const KColorSchemeModel* self) {
    QHash<int, QByteArray> _ret = self->KColorSchemeModel::roleNames();
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
void KColorSchemeModel_OnRoleNames(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_rolenames_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_MultiData(const KColorSchemeModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KColorSchemeModel_SuperMultiData(const KColorSchemeModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KColorSchemeModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMultiData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        vkcolorschememodel->kcolorschememodel_multidata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_Submit(KColorSchemeModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KColorSchemeModel_SuperSubmit(KColorSchemeModel* self) {
    return self->KColorSchemeModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSubmit(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_submit_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_Revert(KColorSchemeModel* self) {
    self->revert();
}

// Base class handler implementation
void KColorSchemeModel_SuperRevert(KColorSchemeModel* self) {
    self->KColorSchemeModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnRevert(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_revert_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_ResetInternalData(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel) {
        vkcolorschememodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KColorSchemeModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeModel_SuperResetInternalData(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->KColorSchemeModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KColorSchemeModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnResetInternalData(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_resetinternaldata_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_Event(KColorSchemeModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KColorSchemeModel_SuperEvent(KColorSchemeModel* self, QEvent* event) {
    return self->KColorSchemeModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEvent(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_event_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeModel_EventFilter(KColorSchemeModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KColorSchemeModel_SuperEventFilter(KColorSchemeModel* self, QObject* watched, QEvent* event) {
    return self->KColorSchemeModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEventFilter(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_eventfilter_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_TimerEvent(KColorSchemeModel* self, QTimerEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel) {
        vkcolorschememodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeModel_SuperTimerEvent(KColorSchemeModel* self, QTimerEvent* event) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->KColorSchemeModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnTimerEvent(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_timerevent_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_ChildEvent(KColorSchemeModel* self, QChildEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel) {
        vkcolorschememodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeModel_SuperChildEvent(KColorSchemeModel* self, QChildEvent* event) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->KColorSchemeModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnChildEvent(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_childevent_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_CustomEvent(KColorSchemeModel* self, QEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel) {
        vkcolorschememodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeModel_SuperCustomEvent(KColorSchemeModel* self, QEvent* event) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->KColorSchemeModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnCustomEvent(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_customevent_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_ConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel) {
        vkcolorschememodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeModel_SuperConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->KColorSchemeModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorSchemeModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnConnectNotify(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_connectnotify_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeModel_DisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel) {
        vkcolorschememodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeModel_SuperDisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->KColorSchemeModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorSchemeModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnDisconnectNotify(KColorSchemeModel* self, intptr_t slot) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self))
        vkcolorschememodel->kcolorschememodel_disconnectnotify_callback = reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KColorSchemeModel_CreateIndex(const KColorSchemeModel* self, int row, int column) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self)))
        return new QModelIndex(vkcolorschememodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KColorSchemeModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_EncodeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkcolorschememodel->VirtualKColorSchemeModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KColorSchemeModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorSchemeModel_DecodeData(KColorSchemeModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        return vkcolorschememodel->VirtualKColorSchemeModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KColorSchemeModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_BeginInsertRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KColorSchemeModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_EndInsertRows(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::endInsertRows();
    } else
        qFatal("Error: Protected method KColorSchemeModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_BeginRemoveRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KColorSchemeModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_EndRemoveRows(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KColorSchemeModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorSchemeModel_BeginMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        return vkcolorschememodel->VirtualKColorSchemeModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KColorSchemeModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_EndMoveRows(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::endMoveRows();
    } else
        qFatal("Error: Protected method KColorSchemeModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_BeginInsertColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KColorSchemeModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_EndInsertColumns(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KColorSchemeModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_BeginRemoveColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KColorSchemeModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_EndRemoveColumns(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KColorSchemeModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorSchemeModel_BeginMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        return vkcolorschememodel->VirtualKColorSchemeModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KColorSchemeModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_EndMoveColumns(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KColorSchemeModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_BeginResetModel(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::beginResetModel();
    } else
        qFatal("Error: Protected method KColorSchemeModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_EndResetModel(KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::endResetModel();
    } else
        qFatal("Error: Protected method KColorSchemeModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_ChangePersistentIndex(KColorSchemeModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
        vkcolorschememodel->VirtualKColorSchemeModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KColorSchemeModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorSchemeModel_ChangePersistentIndexList(KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self)) {
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
        vkcolorschememodel->VirtualKColorSchemeModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KColorSchemeModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KColorSchemeModel_PersistentIndexList(const KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self))) {
        QList<QModelIndex> _ret = vkcolorschememodel->VirtualKColorSchemeModel::persistentIndexList();
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
        qFatal("Error: Protected method KColorSchemeModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KColorSchemeModel_Sender(const KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self))) {
        return vkcolorschememodel->VirtualKColorSchemeModel::sender();
    } else
        qFatal("Error: Protected method KColorSchemeModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorSchemeModel_SenderSignalIndex(const KColorSchemeModel* self) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self))) {
        return vkcolorschememodel->VirtualKColorSchemeModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KColorSchemeModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorSchemeModel_Receivers(const KColorSchemeModel* self, const char* signal) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self))) {
        return vkcolorschememodel->VirtualKColorSchemeModel::receivers(signal);
    } else
        qFatal("Error: Protected method KColorSchemeModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorSchemeModel_IsSignalConnected(const KColorSchemeModel* self, const QMetaMethod* signal) {
    if (auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self))) {
        return vkcolorschememodel->VirtualKColorSchemeModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KColorSchemeModel::isSignalConnected called without a directly constructed type");
}

void KColorSchemeModel_Delete(KColorSchemeModel* self) {
    delete self;
}
