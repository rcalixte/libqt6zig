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
#include <QStringListModel>
#include <QTimerEvent>
#include <QVariant>
#include <qstringlistmodel.h>
#include "libqstringlistmodel.h"
#include "libqstringlistmodel.hxx"

QStringListModel* QStringListModel_new() {
    return new VirtualQStringListModel();
}

QStringListModel* QStringListModel_new2(const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQStringListModel(strings_QList);
}

QStringListModel* QStringListModel_new3(QObject* parent) {
    return new VirtualQStringListModel(parent);
}

QStringListModel* QStringListModel_new4(const libqt_list /* of libqt_string */ strings, QObject* parent) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQStringListModel(strings_QList, parent);
}

QMetaObject* QStringListModel_MetaObject(const QStringListModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStringListModel_Metacast(QStringListModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStringListModel_Metacall(QStringListModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStringListModel_Tr(const char* s) {
    auto _ret = QStringListModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QStringListModel_RowCount(const QStringListModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QVariant* QStringListModel_Data(const QStringListModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QStringListModel_SetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

bool QStringListModel_ClearItemData(QStringListModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

int QStringListModel_Flags(const QStringListModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStringListModel_MoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

libqt_map /* of int to QVariant* */ QStringListModel_ItemData(const QStringListModel* self, const QModelIndex* index) {
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

bool QStringListModel_SetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

void QStringListModel_Sort(QStringListModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

libqt_list /* of libqt_string */ QStringListModel_StringList(const QStringListModel* self) {
    QList<QString> _ret = self->stringList();
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

void QStringListModel_SetStringList(QStringListModel* self, const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    self->setStringList(strings_QList);
}

int QStringListModel_SupportedDropActions(const QStringListModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

libqt_string QStringListModel_Tr2(const char* s, const char* c) {
    auto _ret = QStringListModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStringListModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QStringListModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QStringListModel_SuperMetaObject(const QStringListModel* self) {
    return (QMetaObject*)self->QStringListModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMetaObject(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_metaobject_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStringListModel_SuperMetacast(QStringListModel* self, const char* param1) {
    return self->QStringListModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMetacast(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_metacast_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStringListModel_SuperMetacall(QStringListModel* self, int param1, int param2, void** param3) {
    return self->QStringListModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMetacall(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_metacall_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int QStringListModel_SuperRowCount(const QStringListModel* self, const QModelIndex* parent) {
    return self->QStringListModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRowCount(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_rowcount_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QStringListModel_SuperSibling(const QStringListModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QStringListModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSibling(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_sibling_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Sibling_Callback>(slot);
}

// Base class handler implementation
QVariant* QStringListModel_SuperData(const QStringListModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->QStringListModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_data_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Data_Callback>(slot);
}

// Base class handler implementation
bool QStringListModel_SuperSetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QStringListModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_setdata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_SetData_Callback>(slot);
}

// Base class handler implementation
bool QStringListModel_SuperClearItemData(QStringListModel* self, const QModelIndex* index) {
    return self->QStringListModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnClearItemData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_clearitemdata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_ClearItemData_Callback>(slot);
}

// Base class handler implementation
int QStringListModel_SuperFlags(const QStringListModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QStringListModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnFlags(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_flags_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Flags_Callback>(slot);
}

// Base class handler implementation
bool QStringListModel_SuperInsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
    return self->QStringListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnInsertRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_insertrows_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_InsertRows_Callback>(slot);
}

// Base class handler implementation
bool QStringListModel_SuperRemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
    return self->QStringListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRemoveRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_removerows_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_RemoveRows_Callback>(slot);
}

// Base class handler implementation
bool QStringListModel_SuperMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QStringListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMoveRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_moverows_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_MoveRows_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QStringListModel_SuperItemData(const QStringListModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QStringListModel::itemData(*index);
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
void QStringListModel_OnItemData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_itemdata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_ItemData_Callback>(slot);
}

// Base class handler implementation
bool QStringListModel_SuperSetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QStringListModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetItemData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_setitemdata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_SetItemData_Callback>(slot);
}

// Base class handler implementation
void QStringListModel_SuperSort(QStringListModel* self, int column, int order) {
    self->QStringListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSort(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_sort_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Sort_Callback>(slot);
}

// Base class handler implementation
int QStringListModel_SuperSupportedDropActions(const QStringListModel* self) {
    return static_cast<int>(self->QStringListModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSupportedDropActions(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_supporteddropactions_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QStringListModel_Index(const QStringListModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* QStringListModel_SuperIndex(const QStringListModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QStringListModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnIndex(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_index_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Index_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_DropMimeData(QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QStringListModel_SuperDropMimeData(QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QStringListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnDropMimeData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_dropmimedata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
QVariant* QStringListModel_HeaderData(const QStringListModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QStringListModel_SuperHeaderData(const QStringListModel* self, int section, int orientation, int role) {
    return new QVariant(self->QStringListModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnHeaderData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_headerdata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_SetHeaderData(QStringListModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QStringListModel_SuperSetHeaderData(QStringListModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QStringListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetHeaderData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_setheaderdata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QStringListModel_MimeTypes(const QStringListModel* self) {
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
libqt_list /* of libqt_string */ QStringListModel_SuperMimeTypes(const QStringListModel* self) {
    QList<QString> _ret = self->QStringListModel::mimeTypes();
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
void QStringListModel_OnMimeTypes(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_mimetypes_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QStringListModel_MimeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QStringListModel_SuperMimeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QStringListModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMimeData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_mimedata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_CanDropMimeData(const QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QStringListModel_SuperCanDropMimeData(const QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QStringListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCanDropMimeData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_candropmimedata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QStringListModel_SupportedDragActions(const QStringListModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QStringListModel_SuperSupportedDragActions(const QStringListModel* self) {
    return static_cast<int>(self->QStringListModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSupportedDragActions(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_supporteddragactions_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_InsertColumns(QStringListModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QStringListModel_SuperInsertColumns(QStringListModel* self, int column, int count, const QModelIndex* parent) {
    return self->QStringListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnInsertColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_insertcolumns_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_RemoveColumns(QStringListModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QStringListModel_SuperRemoveColumns(QStringListModel* self, int column, int count, const QModelIndex* parent) {
    return self->QStringListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRemoveColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_removecolumns_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_MoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QStringListModel_SuperMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QStringListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMoveColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_movecolumns_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_FetchMore(QStringListModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QStringListModel_SuperFetchMore(QStringListModel* self, const QModelIndex* parent) {
    self->QStringListModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnFetchMore(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_fetchmore_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_CanFetchMore(const QStringListModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QStringListModel_SuperCanFetchMore(const QStringListModel* self, const QModelIndex* parent) {
    return self->QStringListModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCanFetchMore(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_canfetchmore_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QStringListModel_Buddy(const QStringListModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QStringListModel_SuperBuddy(const QStringListModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QStringListModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBuddy(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_buddy_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QStringListModel_Match(const QStringListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QStringListModel_SuperMatch(const QStringListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QStringListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QStringListModel_OnMatch(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_match_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QStringListModel_Span(const QStringListModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QStringListModel_SuperSpan(const QStringListModel* self, const QModelIndex* index) {
    return new QSize(self->QStringListModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSpan(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_span_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QStringListModel_RoleNames(const QStringListModel* self) {
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
libqt_map /* of int to libqt_string */ QStringListModel_SuperRoleNames(const QStringListModel* self) {
    QHash<int, QByteArray> _ret = self->QStringListModel::roleNames();
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
void QStringListModel_OnRoleNames(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_rolenames_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_MultiData(const QStringListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QStringListModel_SuperMultiData(const QStringListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QStringListModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMultiData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        vqstringlistmodel->qstringlistmodel_multidata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_Submit(QStringListModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QStringListModel_SuperSubmit(QStringListModel* self) {
    return self->QStringListModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSubmit(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_submit_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_Revert(QStringListModel* self) {
    self->revert();
}

// Base class handler implementation
void QStringListModel_SuperRevert(QStringListModel* self) {
    self->QStringListModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRevert(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_revert_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_ResetInternalData(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel) {
        vqstringlistmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QStringListModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QStringListModel_SuperResetInternalData(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->QStringListModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QStringListModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnResetInternalData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_resetinternaldata_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_Event(QStringListModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QStringListModel_SuperEvent(QStringListModel* self, QEvent* event) {
    return self->QStringListModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEvent(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_event_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QStringListModel_EventFilter(QStringListModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QStringListModel_SuperEventFilter(QStringListModel* self, QObject* watched, QEvent* event) {
    return self->QStringListModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEventFilter(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_eventfilter_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_TimerEvent(QStringListModel* self, QTimerEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel) {
        vqstringlistmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStringListModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStringListModel_SuperTimerEvent(QStringListModel* self, QTimerEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->QStringListModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStringListModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnTimerEvent(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_timerevent_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_ChildEvent(QStringListModel* self, QChildEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel) {
        vqstringlistmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStringListModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStringListModel_SuperChildEvent(QStringListModel* self, QChildEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->QStringListModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStringListModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnChildEvent(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_childevent_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_CustomEvent(QStringListModel* self, QEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel) {
        vqstringlistmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStringListModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStringListModel_SuperCustomEvent(QStringListModel* self, QEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->QStringListModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStringListModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCustomEvent(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_customevent_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_ConnectNotify(QStringListModel* self, const QMetaMethod* signal) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel) {
        vqstringlistmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStringListModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStringListModel_SuperConnectNotify(QStringListModel* self, const QMetaMethod* signal) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->QStringListModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStringListModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnConnectNotify(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_connectnotify_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStringListModel_DisconnectNotify(QStringListModel* self, const QMetaMethod* signal) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel) {
        vqstringlistmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStringListModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStringListModel_SuperDisconnectNotify(QStringListModel* self, const QMetaMethod* signal) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->QStringListModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStringListModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnDisconnectNotify(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self))
        vqstringlistmodel->qstringlistmodel_disconnectnotify_callback = reinterpret_cast<VirtualQStringListModel::QStringListModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QStringListModel_CreateIndex(const QStringListModel* self, int row, int column) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self)))
        return new QModelIndex(vqstringlistmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QStringListModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_EncodeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqstringlistmodel->VirtualQStringListModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QStringListModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStringListModel_DecodeData(QStringListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->VirtualQStringListModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QStringListModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_BeginInsertRows(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QStringListModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_EndInsertRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::endInsertRows();
    } else
        qFatal("Error: Protected method QStringListModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_BeginRemoveRows(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QStringListModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_EndRemoveRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QStringListModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStringListModel_BeginMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->VirtualQStringListModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QStringListModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_EndMoveRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::endMoveRows();
    } else
        qFatal("Error: Protected method QStringListModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_BeginInsertColumns(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QStringListModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_EndInsertColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QStringListModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_BeginRemoveColumns(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QStringListModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_EndRemoveColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QStringListModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStringListModel_BeginMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->VirtualQStringListModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QStringListModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_EndMoveColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QStringListModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_BeginResetModel(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::beginResetModel();
    } else
        qFatal("Error: Protected method QStringListModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_EndResetModel(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::endResetModel();
    } else
        qFatal("Error: Protected method QStringListModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_ChangePersistentIndex(QStringListModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->VirtualQStringListModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QStringListModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QStringListModel_ChangePersistentIndexList(QStringListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
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
        vqstringlistmodel->VirtualQStringListModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QStringListModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QStringListModel_PersistentIndexList(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        QList<QModelIndex> _ret = vqstringlistmodel->VirtualQStringListModel::persistentIndexList();
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
        qFatal("Error: Protected method QStringListModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QStringListModel_Sender(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->VirtualQStringListModel::sender();
    } else
        qFatal("Error: Protected method QStringListModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStringListModel_SenderSignalIndex(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->VirtualQStringListModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStringListModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStringListModel_Receivers(const QStringListModel* self, const char* signal) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->VirtualQStringListModel::receivers(signal);
    } else
        qFatal("Error: Protected method QStringListModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStringListModel_IsSignalConnected(const QStringListModel* self, const QMetaMethod* signal) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->VirtualQStringListModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStringListModel::isSignalConnected called without a directly constructed type");
}

void QStringListModel_Delete(QStringListModel* self) {
    delete self;
}
