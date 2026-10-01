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
#include <QPdfDocument>
#include <QPdfLink>
#include <QPdfLinkModel>
#include <QPointF>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qpdflinkmodel.h>
#include "libqpdflinkmodel.h"
#include "libqpdflinkmodel.hxx"

QPdfLinkModel* QPdfLinkModel_new() {
    return new VirtualQPdfLinkModel();
}

QPdfLinkModel* QPdfLinkModel_new2(QObject* parent) {
    return new VirtualQPdfLinkModel(parent);
}

QMetaObject* QPdfLinkModel_MetaObject(const QPdfLinkModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfLinkModel_Metacast(QPdfLinkModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfLinkModel_Metacall(QPdfLinkModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfLinkModel_Tr(const char* s) {
    auto _ret = QPdfLinkModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPdfDocument* QPdfLinkModel_Document(const QPdfLinkModel* self) {
    return self->document();
}

libqt_map /* of int to libqt_string */ QPdfLinkModel_RoleNames(const QPdfLinkModel* self) {
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

int QPdfLinkModel_RowCount(const QPdfLinkModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* QPdfLinkModel_Data(const QPdfLinkModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

int QPdfLinkModel_Page(const QPdfLinkModel* self) {
    return self->page();
}

QPdfLink* QPdfLinkModel_LinkAt(const QPdfLinkModel* self, QPointF* point) {
    return new QPdfLink(self->linkAt(*point));
}

void QPdfLinkModel_SetDocument(QPdfLinkModel* self, QPdfDocument* document) {
    self->setDocument(document);
}

void QPdfLinkModel_SetPage(QPdfLinkModel* self, int page) {
    self->setPage(static_cast<int>(page));
}

void QPdfLinkModel_DocumentChanged(QPdfLinkModel* self) {
    self->documentChanged();
}

void QPdfLinkModel_Connect_DocumentChanged(QPdfLinkModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfLinkModel*) = reinterpret_cast<void (*)(QPdfLinkModel*)>(slot);
    QPdfLinkModel::connect(self,
                           static_cast<void (QPdfLinkModel::*)()>(&QPdfLinkModel::documentChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QPdfLinkModel_PageChanged(QPdfLinkModel* self, int page) {
    self->pageChanged(static_cast<int>(page));
}

void QPdfLinkModel_Connect_PageChanged(QPdfLinkModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfLinkModel*, int) = reinterpret_cast<void (*)(QPdfLinkModel*, int)>(slot);
    QPdfLinkModel::connect(self,
                           static_cast<void (QPdfLinkModel::*)(int)>(&QPdfLinkModel::pageChanged),
                           [self, slotFunc](int page) {
                               int sigval1 = page;
                               slotFunc(self, sigval1);
                           });
}

libqt_string QPdfLinkModel_Tr2(const char* s, const char* c) {
    auto _ret = QPdfLinkModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfLinkModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfLinkModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPdfLinkModel_SuperMetaObject(const QPdfLinkModel* self) {
    return (QMetaObject*)self->QPdfLinkModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMetaObject(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_metaobject_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfLinkModel_SuperMetacast(QPdfLinkModel* self, const char* param1) {
    return self->QPdfLinkModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMetacast(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_metacast_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfLinkModel_SuperMetacall(QPdfLinkModel* self, int param1, int param2, void** param3) {
    return self->QPdfLinkModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMetacall(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_metacall_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QPdfLinkModel_SuperRoleNames(const QPdfLinkModel* self) {
    QHash<int, QByteArray> _ret = self->QPdfLinkModel::roleNames();
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
void QPdfLinkModel_OnRoleNames(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_rolenames_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
int QPdfLinkModel_SuperRowCount(const QPdfLinkModel* self, const QModelIndex* parent) {
    return self->QPdfLinkModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnRowCount(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_rowcount_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* QPdfLinkModel_SuperData(const QPdfLinkModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->QPdfLinkModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_data_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Data_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfLinkModel_Index(const QPdfLinkModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* QPdfLinkModel_SuperIndex(const QPdfLinkModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QPdfLinkModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnIndex(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_index_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfLinkModel_Sibling(const QPdfLinkModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QPdfLinkModel_SuperSibling(const QPdfLinkModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QPdfLinkModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSibling(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_sibling_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_DropMimeData(QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QPdfLinkModel_SuperDropMimeData(QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QPdfLinkModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnDropMimeData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_dropmimedata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QPdfLinkModel_Flags(const QPdfLinkModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int QPdfLinkModel_SuperFlags(const QPdfLinkModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QPdfLinkModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnFlags(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_flags_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_SetData(QPdfLinkModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool QPdfLinkModel_SuperSetData(QPdfLinkModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QPdfLinkModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSetData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_setdata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPdfLinkModel_HeaderData(const QPdfLinkModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QPdfLinkModel_SuperHeaderData(const QPdfLinkModel* self, int section, int orientation, int role) {
    return new QVariant(self->QPdfLinkModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnHeaderData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_headerdata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_SetHeaderData(QPdfLinkModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QPdfLinkModel_SuperSetHeaderData(QPdfLinkModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QPdfLinkModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSetHeaderData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_setheaderdata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QPdfLinkModel_ItemData(const QPdfLinkModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QPdfLinkModel_SuperItemData(const QPdfLinkModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QPdfLinkModel::itemData(*index);
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
void QPdfLinkModel_OnItemData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_itemdata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_SetItemData(QPdfLinkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QPdfLinkModel_SuperSetItemData(QPdfLinkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QPdfLinkModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSetItemData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_setitemdata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_ClearItemData(QPdfLinkModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QPdfLinkModel_SuperClearItemData(QPdfLinkModel* self, const QModelIndex* index) {
    return self->QPdfLinkModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnClearItemData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_clearitemdata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QPdfLinkModel_MimeTypes(const QPdfLinkModel* self) {
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
libqt_list /* of libqt_string */ QPdfLinkModel_SuperMimeTypes(const QPdfLinkModel* self) {
    QList<QString> _ret = self->QPdfLinkModel::mimeTypes();
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
void QPdfLinkModel_OnMimeTypes(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_mimetypes_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QPdfLinkModel_MimeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QPdfLinkModel_SuperMimeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QPdfLinkModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMimeData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_mimedata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_CanDropMimeData(const QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QPdfLinkModel_SuperCanDropMimeData(const QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QPdfLinkModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnCanDropMimeData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_candropmimedata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QPdfLinkModel_SupportedDropActions(const QPdfLinkModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QPdfLinkModel_SuperSupportedDropActions(const QPdfLinkModel* self) {
    return static_cast<int>(self->QPdfLinkModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSupportedDropActions(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_supporteddropactions_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QPdfLinkModel_SupportedDragActions(const QPdfLinkModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QPdfLinkModel_SuperSupportedDragActions(const QPdfLinkModel* self) {
    return static_cast<int>(self->QPdfLinkModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSupportedDragActions(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_supporteddragactions_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_InsertRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfLinkModel_SuperInsertRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent) {
    return self->QPdfLinkModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnInsertRows(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_insertrows_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_InsertColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfLinkModel_SuperInsertColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent) {
    return self->QPdfLinkModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnInsertColumns(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_insertcolumns_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_RemoveRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfLinkModel_SuperRemoveRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent) {
    return self->QPdfLinkModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnRemoveRows(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_removerows_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_RemoveColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfLinkModel_SuperRemoveColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent) {
    return self->QPdfLinkModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnRemoveColumns(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_removecolumns_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_MoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QPdfLinkModel_SuperMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QPdfLinkModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMoveRows(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_moverows_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_MoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QPdfLinkModel_SuperMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QPdfLinkModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMoveColumns(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_movecolumns_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_FetchMore(QPdfLinkModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QPdfLinkModel_SuperFetchMore(QPdfLinkModel* self, const QModelIndex* parent) {
    self->QPdfLinkModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnFetchMore(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_fetchmore_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_CanFetchMore(const QPdfLinkModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QPdfLinkModel_SuperCanFetchMore(const QPdfLinkModel* self, const QModelIndex* parent) {
    return self->QPdfLinkModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnCanFetchMore(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_canfetchmore_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_Sort(QPdfLinkModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QPdfLinkModel_SuperSort(QPdfLinkModel* self, int column, int order) {
    self->QPdfLinkModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSort(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_sort_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfLinkModel_Buddy(const QPdfLinkModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QPdfLinkModel_SuperBuddy(const QPdfLinkModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QPdfLinkModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBuddy(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_buddy_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfLinkModel_Match(const QPdfLinkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QPdfLinkModel_SuperMatch(const QPdfLinkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QPdfLinkModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QPdfLinkModel_OnMatch(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_match_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QPdfLinkModel_Span(const QPdfLinkModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QPdfLinkModel_SuperSpan(const QPdfLinkModel* self, const QModelIndex* index) {
    return new QSize(self->QPdfLinkModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSpan(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_span_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Span_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_MultiData(const QPdfLinkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QPdfLinkModel_SuperMultiData(const QPdfLinkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QPdfLinkModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMultiData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        vqpdflinkmodel->qpdflinkmodel_multidata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_Submit(QPdfLinkModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QPdfLinkModel_SuperSubmit(QPdfLinkModel* self) {
    return self->QPdfLinkModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSubmit(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_submit_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_Revert(QPdfLinkModel* self) {
    self->revert();
}

// Base class handler implementation
void QPdfLinkModel_SuperRevert(QPdfLinkModel* self) {
    self->QPdfLinkModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnRevert(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_revert_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_ResetInternalData(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel) {
        vqpdflinkmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QPdfLinkModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfLinkModel_SuperResetInternalData(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->QPdfLinkModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QPdfLinkModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnResetInternalData(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_resetinternaldata_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_Event(QPdfLinkModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPdfLinkModel_SuperEvent(QPdfLinkModel* self, QEvent* event) {
    return self->QPdfLinkModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEvent(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_event_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPdfLinkModel_EventFilter(QPdfLinkModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPdfLinkModel_SuperEventFilter(QPdfLinkModel* self, QObject* watched, QEvent* event) {
    return self->QPdfLinkModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEventFilter(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_eventfilter_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_TimerEvent(QPdfLinkModel* self, QTimerEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel) {
        vqpdflinkmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfLinkModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfLinkModel_SuperTimerEvent(QPdfLinkModel* self, QTimerEvent* event) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->QPdfLinkModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfLinkModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnTimerEvent(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_timerevent_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_ChildEvent(QPdfLinkModel* self, QChildEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel) {
        vqpdflinkmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfLinkModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfLinkModel_SuperChildEvent(QPdfLinkModel* self, QChildEvent* event) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->QPdfLinkModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfLinkModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnChildEvent(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_childevent_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_CustomEvent(QPdfLinkModel* self, QEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel) {
        vqpdflinkmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfLinkModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfLinkModel_SuperCustomEvent(QPdfLinkModel* self, QEvent* event) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->QPdfLinkModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfLinkModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnCustomEvent(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_customevent_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_ConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel) {
        vqpdflinkmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfLinkModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfLinkModel_SuperConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->QPdfLinkModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfLinkModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnConnectNotify(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_connectnotify_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfLinkModel_DisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel) {
        vqpdflinkmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfLinkModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfLinkModel_SuperDisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->QPdfLinkModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfLinkModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnDisconnectNotify(QPdfLinkModel* self, intptr_t slot) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self))
        vqpdflinkmodel->qpdflinkmodel_disconnectnotify_callback = reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfLinkModel_CreateIndex(const QPdfLinkModel* self, int row, int column) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self)))
        return new QModelIndex(vqpdflinkmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QPdfLinkModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_EncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqpdflinkmodel->VirtualQPdfLinkModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QPdfLinkModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfLinkModel_DecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        return vqpdflinkmodel->VirtualQPdfLinkModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QPdfLinkModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_BeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfLinkModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_EndInsertRows(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::endInsertRows();
    } else
        qFatal("Error: Protected method QPdfLinkModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_BeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfLinkModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_EndRemoveRows(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QPdfLinkModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfLinkModel_BeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        return vqpdflinkmodel->VirtualQPdfLinkModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QPdfLinkModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_EndMoveRows(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::endMoveRows();
    } else
        qFatal("Error: Protected method QPdfLinkModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_BeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfLinkModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_EndInsertColumns(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QPdfLinkModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_BeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfLinkModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_EndRemoveColumns(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QPdfLinkModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfLinkModel_BeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        return vqpdflinkmodel->VirtualQPdfLinkModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QPdfLinkModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_EndMoveColumns(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QPdfLinkModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_BeginResetModel(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::beginResetModel();
    } else
        qFatal("Error: Protected method QPdfLinkModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_EndResetModel(QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::endResetModel();
    } else
        qFatal("Error: Protected method QPdfLinkModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_ChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
        vqpdflinkmodel->VirtualQPdfLinkModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QPdfLinkModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfLinkModel_ChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self)) {
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
        vqpdflinkmodel->VirtualQPdfLinkModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QPdfLinkModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QPdfLinkModel_PersistentIndexList(const QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self))) {
        QList<QModelIndex> _ret = vqpdflinkmodel->VirtualQPdfLinkModel::persistentIndexList();
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
        qFatal("Error: Protected method QPdfLinkModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPdfLinkModel_Sender(const QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self))) {
        return vqpdflinkmodel->VirtualQPdfLinkModel::sender();
    } else
        qFatal("Error: Protected method QPdfLinkModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfLinkModel_SenderSignalIndex(const QPdfLinkModel* self) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self))) {
        return vqpdflinkmodel->VirtualQPdfLinkModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfLinkModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfLinkModel_Receivers(const QPdfLinkModel* self, const char* signal) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self))) {
        return vqpdflinkmodel->VirtualQPdfLinkModel::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfLinkModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfLinkModel_IsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal) {
    if (auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self))) {
        return vqpdflinkmodel->VirtualQPdfLinkModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfLinkModel::isSignalConnected called without a directly constructed type");
}

void QPdfLinkModel_Delete(QPdfLinkModel* self) {
    delete self;
}
