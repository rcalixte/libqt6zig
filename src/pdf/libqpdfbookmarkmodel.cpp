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
#include <QPdfBookmarkModel>
#include <QPdfDocument>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qpdfbookmarkmodel.h>
#include "libqpdfbookmarkmodel.h"
#include "libqpdfbookmarkmodel.hxx"

QPdfBookmarkModel* QPdfBookmarkModel_new() {
    return new VirtualQPdfBookmarkModel();
}

QPdfBookmarkModel* QPdfBookmarkModel_new2(QObject* parent) {
    return new VirtualQPdfBookmarkModel(parent);
}

QMetaObject* QPdfBookmarkModel_MetaObject(const QPdfBookmarkModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfBookmarkModel_Metacast(QPdfBookmarkModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfBookmarkModel_Metacall(QPdfBookmarkModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfBookmarkModel_Tr(const char* s) {
    auto _ret = QPdfBookmarkModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPdfDocument* QPdfBookmarkModel_Document(const QPdfBookmarkModel* self) {
    return self->document();
}

void QPdfBookmarkModel_SetDocument(QPdfBookmarkModel* self, QPdfDocument* document) {
    self->setDocument(document);
}

QVariant* QPdfBookmarkModel_Data(const QPdfBookmarkModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

QModelIndex* QPdfBookmarkModel_Index(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QPdfBookmarkModel_Parent(const QPdfBookmarkModel* self, const QModelIndex* index) {
    return new QModelIndex(self->parent(*index));
}

int QPdfBookmarkModel_RowCount(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int QPdfBookmarkModel_ColumnCount(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

libqt_map /* of int to libqt_string */ QPdfBookmarkModel_RoleNames(const QPdfBookmarkModel* self) {
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

void QPdfBookmarkModel_DocumentChanged(QPdfBookmarkModel* self, QPdfDocument* document) {
    self->documentChanged(document);
}

void QPdfBookmarkModel_Connect_DocumentChanged(QPdfBookmarkModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfBookmarkModel*, QPdfDocument*) = reinterpret_cast<void (*)(QPdfBookmarkModel*, QPdfDocument*)>(slot);
    QPdfBookmarkModel::connect(self,
                               static_cast<void (QPdfBookmarkModel::*)(QPdfDocument*)>(&QPdfBookmarkModel::documentChanged),
                               [self, slotFunc](QPdfDocument* document) {
                                   QPdfDocument* sigval1 = document;
                                   slotFunc(self, sigval1);
                               });
}

libqt_string QPdfBookmarkModel_Tr2(const char* s, const char* c) {
    auto _ret = QPdfBookmarkModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfBookmarkModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfBookmarkModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPdfBookmarkModel_SuperMetaObject(const QPdfBookmarkModel* self) {
    return (QMetaObject*)self->QPdfBookmarkModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMetaObject(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_metaobject_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfBookmarkModel_SuperMetacast(QPdfBookmarkModel* self, const char* param1) {
    return self->QPdfBookmarkModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMetacast(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_metacast_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfBookmarkModel_SuperMetacall(QPdfBookmarkModel* self, int param1, int param2, void** param3) {
    return self->QPdfBookmarkModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMetacall(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_metacall_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* QPdfBookmarkModel_SuperData(const QPdfBookmarkModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->QPdfBookmarkModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_data_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Data_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_SuperIndex(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QPdfBookmarkModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnIndex(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_index_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_SuperParent(const QPdfBookmarkModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QPdfBookmarkModel::parent(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnParent(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_parent_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Parent_Callback>(slot);
}

// Base class handler implementation
int QPdfBookmarkModel_SuperRowCount(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnRowCount(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_rowcount_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_RowCount_Callback>(slot);
}

// Base class handler implementation
int QPdfBookmarkModel_SuperColumnCount(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnColumnCount(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_columncount_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QPdfBookmarkModel_SuperRoleNames(const QPdfBookmarkModel* self) {
    QHash<int, QByteArray> _ret = self->QPdfBookmarkModel::roleNames();
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
void QPdfBookmarkModel_OnRoleNames(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_rolenames_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfBookmarkModel_Sibling(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_SuperSibling(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QPdfBookmarkModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSibling(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_sibling_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_HasChildren(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperHasChildren(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnHasChildren(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_haschildren_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_SetData(QPdfBookmarkModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperSetData(QPdfBookmarkModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QPdfBookmarkModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSetData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_setdata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPdfBookmarkModel_HeaderData(const QPdfBookmarkModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QPdfBookmarkModel_SuperHeaderData(const QPdfBookmarkModel* self, int section, int orientation, int role) {
    return new QVariant(self->QPdfBookmarkModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnHeaderData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_headerdata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_SetHeaderData(QPdfBookmarkModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperSetHeaderData(QPdfBookmarkModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QPdfBookmarkModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSetHeaderData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_setheaderdata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QPdfBookmarkModel_ItemData(const QPdfBookmarkModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QPdfBookmarkModel_SuperItemData(const QPdfBookmarkModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QPdfBookmarkModel::itemData(*index);
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
void QPdfBookmarkModel_OnItemData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_itemdata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_SetItemData(QPdfBookmarkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperSetItemData(QPdfBookmarkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QPdfBookmarkModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSetItemData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_setitemdata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_ClearItemData(QPdfBookmarkModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperClearItemData(QPdfBookmarkModel* self, const QModelIndex* index) {
    return self->QPdfBookmarkModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnClearItemData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_clearitemdata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QPdfBookmarkModel_MimeTypes(const QPdfBookmarkModel* self) {
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
libqt_list /* of libqt_string */ QPdfBookmarkModel_SuperMimeTypes(const QPdfBookmarkModel* self) {
    QList<QString> _ret = self->QPdfBookmarkModel::mimeTypes();
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
void QPdfBookmarkModel_OnMimeTypes(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_mimetypes_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QPdfBookmarkModel_MimeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QPdfBookmarkModel_SuperMimeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QPdfBookmarkModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMimeData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_mimedata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_CanDropMimeData(const QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperCanDropMimeData(const QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnCanDropMimeData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_candropmimedata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_DropMimeData(QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperDropMimeData(QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnDropMimeData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_dropmimedata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QPdfBookmarkModel_SupportedDropActions(const QPdfBookmarkModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QPdfBookmarkModel_SuperSupportedDropActions(const QPdfBookmarkModel* self) {
    return static_cast<int>(self->QPdfBookmarkModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSupportedDropActions(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_supporteddropactions_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QPdfBookmarkModel_SupportedDragActions(const QPdfBookmarkModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QPdfBookmarkModel_SuperSupportedDragActions(const QPdfBookmarkModel* self) {
    return static_cast<int>(self->QPdfBookmarkModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSupportedDragActions(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_supporteddragactions_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_InsertRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperInsertRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnInsertRows(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_insertrows_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_InsertColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperInsertColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnInsertColumns(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_insertcolumns_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_RemoveRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperRemoveRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnRemoveRows(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_removerows_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_RemoveColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperRemoveColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnRemoveColumns(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_removecolumns_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_MoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QPdfBookmarkModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMoveRows(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_moverows_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_MoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QPdfBookmarkModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMoveColumns(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_movecolumns_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_FetchMore(QPdfBookmarkModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QPdfBookmarkModel_SuperFetchMore(QPdfBookmarkModel* self, const QModelIndex* parent) {
    self->QPdfBookmarkModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnFetchMore(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_fetchmore_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_CanFetchMore(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperCanFetchMore(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    return self->QPdfBookmarkModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnCanFetchMore(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_canfetchmore_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
int QPdfBookmarkModel_Flags(const QPdfBookmarkModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int QPdfBookmarkModel_SuperFlags(const QPdfBookmarkModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QPdfBookmarkModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnFlags(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_flags_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Flags_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_Sort(QPdfBookmarkModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QPdfBookmarkModel_SuperSort(QPdfBookmarkModel* self, int column, int order) {
    self->QPdfBookmarkModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSort(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_sort_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfBookmarkModel_Buddy(const QPdfBookmarkModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_SuperBuddy(const QPdfBookmarkModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QPdfBookmarkModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBuddy(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_buddy_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_Match(const QPdfBookmarkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_SuperMatch(const QPdfBookmarkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QPdfBookmarkModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QPdfBookmarkModel_OnMatch(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_match_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QPdfBookmarkModel_Span(const QPdfBookmarkModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QPdfBookmarkModel_SuperSpan(const QPdfBookmarkModel* self, const QModelIndex* index) {
    return new QSize(self->QPdfBookmarkModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSpan(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_span_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Span_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_MultiData(const QPdfBookmarkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QPdfBookmarkModel_SuperMultiData(const QPdfBookmarkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QPdfBookmarkModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMultiData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_multidata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_Submit(QPdfBookmarkModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperSubmit(QPdfBookmarkModel* self) {
    return self->QPdfBookmarkModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSubmit(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_submit_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_Revert(QPdfBookmarkModel* self) {
    self->revert();
}

// Base class handler implementation
void QPdfBookmarkModel_SuperRevert(QPdfBookmarkModel* self) {
    self->QPdfBookmarkModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnRevert(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_revert_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_ResetInternalData(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel) {
        vqpdfbookmarkmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QPdfBookmarkModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfBookmarkModel_SuperResetInternalData(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->QPdfBookmarkModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QPdfBookmarkModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnResetInternalData(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_resetinternaldata_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_Event(QPdfBookmarkModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperEvent(QPdfBookmarkModel* self, QEvent* event) {
    return self->QPdfBookmarkModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEvent(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_event_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPdfBookmarkModel_EventFilter(QPdfBookmarkModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPdfBookmarkModel_SuperEventFilter(QPdfBookmarkModel* self, QObject* watched, QEvent* event) {
    return self->QPdfBookmarkModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEventFilter(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_eventfilter_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_TimerEvent(QPdfBookmarkModel* self, QTimerEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel) {
        vqpdfbookmarkmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfBookmarkModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfBookmarkModel_SuperTimerEvent(QPdfBookmarkModel* self, QTimerEvent* event) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->QPdfBookmarkModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfBookmarkModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnTimerEvent(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_timerevent_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_ChildEvent(QPdfBookmarkModel* self, QChildEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel) {
        vqpdfbookmarkmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfBookmarkModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfBookmarkModel_SuperChildEvent(QPdfBookmarkModel* self, QChildEvent* event) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->QPdfBookmarkModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfBookmarkModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnChildEvent(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_childevent_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_CustomEvent(QPdfBookmarkModel* self, QEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel) {
        vqpdfbookmarkmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfBookmarkModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfBookmarkModel_SuperCustomEvent(QPdfBookmarkModel* self, QEvent* event) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->QPdfBookmarkModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfBookmarkModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnCustomEvent(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_customevent_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_ConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel) {
        vqpdfbookmarkmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfBookmarkModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfBookmarkModel_SuperConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->QPdfBookmarkModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfBookmarkModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnConnectNotify(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_connectnotify_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfBookmarkModel_DisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel) {
        vqpdfbookmarkmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfBookmarkModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfBookmarkModel_SuperDisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->QPdfBookmarkModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfBookmarkModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnDisconnectNotify(QPdfBookmarkModel* self, intptr_t slot) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self))
        vqpdfbookmarkmodel->qpdfbookmarkmodel_disconnectnotify_callback = reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfBookmarkModel_CreateIndex(const QPdfBookmarkModel* self, int row, int column) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self)))
        return new QModelIndex(vqpdfbookmarkmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QPdfBookmarkModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_EncodeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfBookmarkModel_DecodeData(QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        return vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_BeginInsertRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_EndInsertRows(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::endInsertRows();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_BeginRemoveRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_EndRemoveRows(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfBookmarkModel_BeginMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        return vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_EndMoveRows(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::endMoveRows();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_BeginInsertColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_EndInsertColumns(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_BeginRemoveColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_EndRemoveColumns(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfBookmarkModel_BeginMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        return vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_EndMoveColumns(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_BeginResetModel(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::beginResetModel();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_EndResetModel(QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::endResetModel();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_ChangePersistentIndex(QPdfBookmarkModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfBookmarkModel_ChangePersistentIndexList(QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self)) {
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
        vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_PersistentIndexList(const QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self))) {
        QList<QModelIndex> _ret = vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::persistentIndexList();
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
        qFatal("Error: Protected method QPdfBookmarkModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPdfBookmarkModel_Sender(const QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self))) {
        return vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::sender();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfBookmarkModel_SenderSignalIndex(const QPdfBookmarkModel* self) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self))) {
        return vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfBookmarkModel_Receivers(const QPdfBookmarkModel* self, const char* signal) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self))) {
        return vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfBookmarkModel_IsSignalConnected(const QPdfBookmarkModel* self, const QMetaMethod* signal) {
    if (auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self))) {
        return vqpdfbookmarkmodel->VirtualQPdfBookmarkModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfBookmarkModel::isSignalConnected called without a directly constructed type");
}

void QPdfBookmarkModel_Delete(QPdfBookmarkModel* self) {
    delete self;
}
