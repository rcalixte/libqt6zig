#include <KPageModel>
#include <QAbstractItemModel>
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
#include <kpagemodel.h>
#include "libkpagemodel.h"
#include "libkpagemodel.hxx"

KPageModel* KPageModel_new() {
    return new VirtualKPageModel();
}

KPageModel* KPageModel_new2(QObject* parent) {
    return new VirtualKPageModel(parent);
}

QMetaObject* KPageModel_MetaObject(const KPageModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageModel_Metacast(KPageModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageModel_Metacall(KPageModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPageModel_Tr(const char* s) {
    auto _ret = KPageModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageModel_Tr2(const char* s, const char* c) {
    auto _ret = KPageModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPageModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPageModel_SuperMetaObject(const KPageModel* self) {
    return (QMetaObject*)self->KPageModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMetaObject(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_metaobject_callback = reinterpret_cast<VirtualKPageModel::KPageModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPageModel_SuperMetacast(KPageModel* self, const char* param1) {
    return self->KPageModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMetacast(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_metacast_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPageModel_SuperMetacall(KPageModel* self, int param1, int param2, void** param3) {
    return self->KPageModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMetacall(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_metacall_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Metacall_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KPageModel_Index(const KPageModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnIndex(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_index_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KPageModel_Parent(const KPageModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnParent(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_parent_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Parent_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KPageModel_Sibling(const KPageModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KPageModel_SuperSibling(const KPageModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KPageModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSibling(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_sibling_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
int KPageModel_RowCount(const KPageModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnRowCount(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_rowcount_callback = reinterpret_cast<VirtualKPageModel::KPageModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
int KPageModel_ColumnCount(const KPageModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnColumnCount(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_columncount_callback = reinterpret_cast<VirtualKPageModel::KPageModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_HasChildren(const KPageModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool KPageModel_SuperHasChildren(const KPageModel* self, const QModelIndex* parent) {
    return self->KPageModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnHasChildren(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_haschildren_callback = reinterpret_cast<VirtualKPageModel::KPageModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPageModel_Data(const KPageModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_data_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Data_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_SetData(KPageModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KPageModel_SuperSetData(KPageModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KPageModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSetData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_setdata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPageModel_HeaderData(const KPageModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KPageModel_SuperHeaderData(const KPageModel* self, int section, int orientation, int role) {
    return new QVariant(self->KPageModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnHeaderData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_headerdata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_SetHeaderData(KPageModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KPageModel_SuperSetHeaderData(KPageModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KPageModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSetHeaderData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_setheaderdata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KPageModel_ItemData(const KPageModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KPageModel_SuperItemData(const KPageModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KPageModel::itemData(*index);
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
void KPageModel_OnItemData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_itemdata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_SetItemData(KPageModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KPageModel_SuperSetItemData(KPageModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KPageModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSetItemData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_setitemdata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_ClearItemData(KPageModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KPageModel_SuperClearItemData(KPageModel* self, const QModelIndex* index) {
    return self->KPageModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnClearItemData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_clearitemdata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KPageModel_MimeTypes(const KPageModel* self) {
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
libqt_list /* of libqt_string */ KPageModel_SuperMimeTypes(const KPageModel* self) {
    QList<QString> _ret = self->KPageModel::mimeTypes();
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
void KPageModel_OnMimeTypes(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_mimetypes_callback = reinterpret_cast<VirtualKPageModel::KPageModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KPageModel_MimeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KPageModel_SuperMimeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KPageModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMimeData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_mimedata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_CanDropMimeData(const KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KPageModel_SuperCanDropMimeData(const KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KPageModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnCanDropMimeData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_candropmimedata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_DropMimeData(KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KPageModel_SuperDropMimeData(KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KPageModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnDropMimeData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_dropmimedata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KPageModel_SupportedDropActions(const KPageModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KPageModel_SuperSupportedDropActions(const KPageModel* self) {
    return static_cast<int>(self->KPageModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSupportedDropActions(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_supporteddropactions_callback = reinterpret_cast<VirtualKPageModel::KPageModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int KPageModel_SupportedDragActions(const KPageModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KPageModel_SuperSupportedDragActions(const KPageModel* self) {
    return static_cast<int>(self->KPageModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSupportedDragActions(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_supporteddragactions_callback = reinterpret_cast<VirtualKPageModel::KPageModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_InsertRows(KPageModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KPageModel_SuperInsertRows(KPageModel* self, int row, int count, const QModelIndex* parent) {
    return self->KPageModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnInsertRows(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_insertrows_callback = reinterpret_cast<VirtualKPageModel::KPageModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_InsertColumns(KPageModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KPageModel_SuperInsertColumns(KPageModel* self, int column, int count, const QModelIndex* parent) {
    return self->KPageModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnInsertColumns(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_insertcolumns_callback = reinterpret_cast<VirtualKPageModel::KPageModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_RemoveRows(KPageModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KPageModel_SuperRemoveRows(KPageModel* self, int row, int count, const QModelIndex* parent) {
    return self->KPageModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnRemoveRows(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_removerows_callback = reinterpret_cast<VirtualKPageModel::KPageModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_RemoveColumns(KPageModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KPageModel_SuperRemoveColumns(KPageModel* self, int column, int count, const QModelIndex* parent) {
    return self->KPageModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnRemoveColumns(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_removecolumns_callback = reinterpret_cast<VirtualKPageModel::KPageModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_MoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KPageModel_SuperMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KPageModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMoveRows(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_moverows_callback = reinterpret_cast<VirtualKPageModel::KPageModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_MoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KPageModel_SuperMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KPageModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMoveColumns(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_movecolumns_callback = reinterpret_cast<VirtualKPageModel::KPageModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_FetchMore(KPageModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KPageModel_SuperFetchMore(KPageModel* self, const QModelIndex* parent) {
    self->KPageModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnFetchMore(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_fetchmore_callback = reinterpret_cast<VirtualKPageModel::KPageModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_CanFetchMore(const KPageModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KPageModel_SuperCanFetchMore(const KPageModel* self, const QModelIndex* parent) {
    return self->KPageModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnCanFetchMore(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_canfetchmore_callback = reinterpret_cast<VirtualKPageModel::KPageModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
int KPageModel_Flags(const KPageModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KPageModel_SuperFlags(const KPageModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KPageModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnFlags(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_flags_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Flags_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_Sort(KPageModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KPageModel_SuperSort(KPageModel* self, int column, int order) {
    self->KPageModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSort(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_sort_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KPageModel_Buddy(const KPageModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KPageModel_SuperBuddy(const KPageModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KPageModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBuddy(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_buddy_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KPageModel_Match(const KPageModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KPageModel_SuperMatch(const KPageModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KPageModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KPageModel_OnMatch(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_match_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KPageModel_Span(const KPageModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KPageModel_SuperSpan(const KPageModel* self, const QModelIndex* index) {
    return new QSize(self->KPageModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSpan(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_span_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KPageModel_RoleNames(const KPageModel* self) {
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
libqt_map /* of int to libqt_string */ KPageModel_SuperRoleNames(const KPageModel* self) {
    QHash<int, QByteArray> _ret = self->KPageModel::roleNames();
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
void KPageModel_OnRoleNames(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_rolenames_callback = reinterpret_cast<VirtualKPageModel::KPageModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_MultiData(const KPageModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KPageModel_SuperMultiData(const KPageModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KPageModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMultiData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        vkpagemodel->kpagemodel_multidata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_Submit(KPageModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KPageModel_SuperSubmit(KPageModel* self) {
    return self->KPageModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSubmit(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_submit_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_Revert(KPageModel* self) {
    self->revert();
}

// Base class handler implementation
void KPageModel_SuperRevert(KPageModel* self) {
    self->KPageModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnRevert(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_revert_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_ResetInternalData(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel) {
        vkpagemodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KPageModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageModel_SuperResetInternalData(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->KPageModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KPageModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnResetInternalData(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_resetinternaldata_callback = reinterpret_cast<VirtualKPageModel::KPageModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_Event(KPageModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KPageModel_SuperEvent(KPageModel* self, QEvent* event) {
    return self->KPageModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEvent(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_event_callback = reinterpret_cast<VirtualKPageModel::KPageModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KPageModel_EventFilter(KPageModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPageModel_SuperEventFilter(KPageModel* self, QObject* watched, QEvent* event) {
    return self->KPageModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEventFilter(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_eventfilter_callback = reinterpret_cast<VirtualKPageModel::KPageModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_TimerEvent(KPageModel* self, QTimerEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel) {
        vkpagemodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageModel_SuperTimerEvent(KPageModel* self, QTimerEvent* event) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->KPageModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnTimerEvent(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_timerevent_callback = reinterpret_cast<VirtualKPageModel::KPageModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_ChildEvent(KPageModel* self, QChildEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel) {
        vkpagemodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageModel_SuperChildEvent(KPageModel* self, QChildEvent* event) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->KPageModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnChildEvent(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_childevent_callback = reinterpret_cast<VirtualKPageModel::KPageModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_CustomEvent(KPageModel* self, QEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel) {
        vkpagemodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageModel_SuperCustomEvent(KPageModel* self, QEvent* event) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->KPageModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnCustomEvent(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_customevent_callback = reinterpret_cast<VirtualKPageModel::KPageModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_ConnectNotify(KPageModel* self, const QMetaMethod* signal) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel) {
        vkpagemodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageModel_SuperConnectNotify(KPageModel* self, const QMetaMethod* signal) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->KPageModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnConnectNotify(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_connectnotify_callback = reinterpret_cast<VirtualKPageModel::KPageModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPageModel_DisconnectNotify(KPageModel* self, const QMetaMethod* signal) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel) {
        vkpagemodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageModel_SuperDisconnectNotify(KPageModel* self, const QMetaMethod* signal) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->KPageModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnDisconnectNotify(KPageModel* self, intptr_t slot) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self))
        vkpagemodel->kpagemodel_disconnectnotify_callback = reinterpret_cast<VirtualKPageModel::KPageModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KPageModel_CreateIndex(const KPageModel* self, int row, int column) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self)))
        return new QModelIndex(vkpagemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KPageModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_EncodeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkpagemodel->VirtualKPageModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KPageModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageModel_DecodeData(KPageModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        return vkpagemodel->VirtualKPageModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KPageModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_BeginInsertRows(KPageModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KPageModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_EndInsertRows(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::endInsertRows();
    } else
        qFatal("Error: Protected method KPageModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_BeginRemoveRows(KPageModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KPageModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_EndRemoveRows(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KPageModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageModel_BeginMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        return vkpagemodel->VirtualKPageModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KPageModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_EndMoveRows(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::endMoveRows();
    } else
        qFatal("Error: Protected method KPageModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_BeginInsertColumns(KPageModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KPageModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_EndInsertColumns(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KPageModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_BeginRemoveColumns(KPageModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KPageModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_EndRemoveColumns(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KPageModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageModel_BeginMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        return vkpagemodel->VirtualKPageModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KPageModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_EndMoveColumns(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KPageModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_BeginResetModel(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::beginResetModel();
    } else
        qFatal("Error: Protected method KPageModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_EndResetModel(KPageModel* self) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::endResetModel();
    } else
        qFatal("Error: Protected method KPageModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_ChangePersistentIndex(KPageModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
        vkpagemodel->VirtualKPageModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KPageModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageModel_ChangePersistentIndexList(KPageModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self)) {
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
        vkpagemodel->VirtualKPageModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KPageModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KPageModel_PersistentIndexList(const KPageModel* self) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self))) {
        QList<QModelIndex> _ret = vkpagemodel->VirtualKPageModel::persistentIndexList();
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
        qFatal("Error: Protected method KPageModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPageModel_Sender(const KPageModel* self) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self))) {
        return vkpagemodel->VirtualKPageModel::sender();
    } else
        qFatal("Error: Protected method KPageModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageModel_SenderSignalIndex(const KPageModel* self) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self))) {
        return vkpagemodel->VirtualKPageModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPageModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageModel_Receivers(const KPageModel* self, const char* signal) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self))) {
        return vkpagemodel->VirtualKPageModel::receivers(signal);
    } else
        qFatal("Error: Protected method KPageModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageModel_IsSignalConnected(const KPageModel* self, const QMetaMethod* signal) {
    if (auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self))) {
        return vkpagemodel->VirtualKPageModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPageModel::isSignalConnected called without a directly constructed type");
}

void KPageModel_Delete(KPageModel* self) {
    delete self;
}
