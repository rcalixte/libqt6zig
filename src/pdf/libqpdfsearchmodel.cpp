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
#include <QPdfSearchModel>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qpdfsearchmodel.h>
#include "libqpdfsearchmodel.h"
#include "libqpdfsearchmodel.hxx"

QPdfSearchModel* QPdfSearchModel_new() {
    return new VirtualQPdfSearchModel();
}

QPdfSearchModel* QPdfSearchModel_new2(QObject* parent) {
    return new VirtualQPdfSearchModel(parent);
}

QMetaObject* QPdfSearchModel_MetaObject(const QPdfSearchModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfSearchModel_Metacast(QPdfSearchModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfSearchModel_Metacall(QPdfSearchModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfSearchModel_Tr(const char* s) {
    auto _ret = QPdfSearchModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QPdfLink* */ QPdfSearchModel_ResultsOnPage(const QPdfSearchModel* self, int page) {
    QList<QPdfLink> _ret = self->resultsOnPage(static_cast<int>(page));
    // Convert QList<> from C++ memory to manually-managed C memory
    QPdfLink** _arr = static_cast<QPdfLink**>(malloc(sizeof(QPdfLink*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPdfLink(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QPdfLink* QPdfSearchModel_ResultAtIndex(const QPdfSearchModel* self, int index) {
    return new QPdfLink(self->resultAtIndex(static_cast<int>(index)));
}

QPdfDocument* QPdfSearchModel_Document(const QPdfSearchModel* self) {
    return self->document();
}

libqt_string QPdfSearchModel_SearchString(const QPdfSearchModel* self) {
    auto _ret = self->searchString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of int to libqt_string */ QPdfSearchModel_RoleNames(const QPdfSearchModel* self) {
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

int QPdfSearchModel_RowCount(const QPdfSearchModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* QPdfSearchModel_Data(const QPdfSearchModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

int QPdfSearchModel_Count(const QPdfSearchModel* self) {
    return self->count();
}

void QPdfSearchModel_SetSearchString(QPdfSearchModel* self, const libqt_string searchString) {
    QString searchString_QString = QString::fromUtf8(searchString.data, searchString.len);
    self->setSearchString(searchString_QString);
}

void QPdfSearchModel_SetDocument(QPdfSearchModel* self, QPdfDocument* document) {
    self->setDocument(document);
}

void QPdfSearchModel_DocumentChanged(QPdfSearchModel* self) {
    self->documentChanged();
}

void QPdfSearchModel_Connect_DocumentChanged(QPdfSearchModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfSearchModel*) = reinterpret_cast<void (*)(QPdfSearchModel*)>(slot);
    QPdfSearchModel::connect(self,
                             static_cast<void (QPdfSearchModel::*)()>(&QPdfSearchModel::documentChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QPdfSearchModel_SearchStringChanged(QPdfSearchModel* self) {
    self->searchStringChanged();
}

void QPdfSearchModel_Connect_SearchStringChanged(QPdfSearchModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfSearchModel*) = reinterpret_cast<void (*)(QPdfSearchModel*)>(slot);
    QPdfSearchModel::connect(self,
                             static_cast<void (QPdfSearchModel::*)()>(&QPdfSearchModel::searchStringChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QPdfSearchModel_CountChanged(QPdfSearchModel* self) {
    self->countChanged();
}

void QPdfSearchModel_Connect_CountChanged(QPdfSearchModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfSearchModel*) = reinterpret_cast<void (*)(QPdfSearchModel*)>(slot);
    QPdfSearchModel::connect(self,
                             static_cast<void (QPdfSearchModel::*)()>(&QPdfSearchModel::countChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QPdfSearchModel_TimerEvent(QPdfSearchModel* self, QTimerEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel) {
        vqpdfsearchmodel->timerEvent(event);
    }
}

libqt_string QPdfSearchModel_Tr2(const char* s, const char* c) {
    auto _ret = QPdfSearchModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfSearchModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfSearchModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPdfSearchModel_SuperMetaObject(const QPdfSearchModel* self) {
    return (QMetaObject*)self->QPdfSearchModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMetaObject(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_metaobject_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfSearchModel_SuperMetacast(QPdfSearchModel* self, const char* param1) {
    return self->QPdfSearchModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMetacast(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_metacast_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfSearchModel_SuperMetacall(QPdfSearchModel* self, int param1, int param2, void** param3) {
    return self->QPdfSearchModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMetacall(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_metacall_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QPdfSearchModel_SuperRoleNames(const QPdfSearchModel* self) {
    QHash<int, QByteArray> _ret = self->QPdfSearchModel::roleNames();
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
void QPdfSearchModel_OnRoleNames(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_rolenames_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
int QPdfSearchModel_SuperRowCount(const QPdfSearchModel* self, const QModelIndex* parent) {
    return self->QPdfSearchModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnRowCount(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_rowcount_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* QPdfSearchModel_SuperData(const QPdfSearchModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->QPdfSearchModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_data_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Data_Callback>(slot);
}

// Base class handler implementation
void QPdfSearchModel_SuperTimerEvent(QPdfSearchModel* self, QTimerEvent* event) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->QPdfSearchModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfSearchModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnTimerEvent(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_timerevent_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfSearchModel_Index(const QPdfSearchModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* QPdfSearchModel_SuperIndex(const QPdfSearchModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QPdfSearchModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnIndex(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_index_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfSearchModel_Sibling(const QPdfSearchModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QPdfSearchModel_SuperSibling(const QPdfSearchModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QPdfSearchModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSibling(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_sibling_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_DropMimeData(QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QPdfSearchModel_SuperDropMimeData(QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QPdfSearchModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnDropMimeData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_dropmimedata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QPdfSearchModel_Flags(const QPdfSearchModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int QPdfSearchModel_SuperFlags(const QPdfSearchModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QPdfSearchModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnFlags(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_flags_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_SetData(QPdfSearchModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool QPdfSearchModel_SuperSetData(QPdfSearchModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QPdfSearchModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSetData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_setdata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPdfSearchModel_HeaderData(const QPdfSearchModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QPdfSearchModel_SuperHeaderData(const QPdfSearchModel* self, int section, int orientation, int role) {
    return new QVariant(self->QPdfSearchModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnHeaderData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_headerdata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_SetHeaderData(QPdfSearchModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QPdfSearchModel_SuperSetHeaderData(QPdfSearchModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QPdfSearchModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSetHeaderData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_setheaderdata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QPdfSearchModel_ItemData(const QPdfSearchModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QPdfSearchModel_SuperItemData(const QPdfSearchModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QPdfSearchModel::itemData(*index);
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
void QPdfSearchModel_OnItemData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_itemdata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_SetItemData(QPdfSearchModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QPdfSearchModel_SuperSetItemData(QPdfSearchModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QPdfSearchModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSetItemData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_setitemdata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_ClearItemData(QPdfSearchModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QPdfSearchModel_SuperClearItemData(QPdfSearchModel* self, const QModelIndex* index) {
    return self->QPdfSearchModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnClearItemData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_clearitemdata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QPdfSearchModel_MimeTypes(const QPdfSearchModel* self) {
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
libqt_list /* of libqt_string */ QPdfSearchModel_SuperMimeTypes(const QPdfSearchModel* self) {
    QList<QString> _ret = self->QPdfSearchModel::mimeTypes();
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
void QPdfSearchModel_OnMimeTypes(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_mimetypes_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QPdfSearchModel_MimeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QPdfSearchModel_SuperMimeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QPdfSearchModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMimeData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_mimedata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_CanDropMimeData(const QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QPdfSearchModel_SuperCanDropMimeData(const QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QPdfSearchModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnCanDropMimeData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_candropmimedata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QPdfSearchModel_SupportedDropActions(const QPdfSearchModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QPdfSearchModel_SuperSupportedDropActions(const QPdfSearchModel* self) {
    return static_cast<int>(self->QPdfSearchModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSupportedDropActions(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_supporteddropactions_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QPdfSearchModel_SupportedDragActions(const QPdfSearchModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QPdfSearchModel_SuperSupportedDragActions(const QPdfSearchModel* self) {
    return static_cast<int>(self->QPdfSearchModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSupportedDragActions(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_supporteddragactions_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_InsertRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfSearchModel_SuperInsertRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent) {
    return self->QPdfSearchModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnInsertRows(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_insertrows_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_InsertColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfSearchModel_SuperInsertColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent) {
    return self->QPdfSearchModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnInsertColumns(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_insertcolumns_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_RemoveRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfSearchModel_SuperRemoveRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent) {
    return self->QPdfSearchModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnRemoveRows(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_removerows_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_RemoveColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QPdfSearchModel_SuperRemoveColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent) {
    return self->QPdfSearchModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnRemoveColumns(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_removecolumns_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_MoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QPdfSearchModel_SuperMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QPdfSearchModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMoveRows(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_moverows_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_MoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QPdfSearchModel_SuperMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QPdfSearchModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMoveColumns(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_movecolumns_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_FetchMore(QPdfSearchModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QPdfSearchModel_SuperFetchMore(QPdfSearchModel* self, const QModelIndex* parent) {
    self->QPdfSearchModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnFetchMore(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_fetchmore_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_CanFetchMore(const QPdfSearchModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QPdfSearchModel_SuperCanFetchMore(const QPdfSearchModel* self, const QModelIndex* parent) {
    return self->QPdfSearchModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnCanFetchMore(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_canfetchmore_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_Sort(QPdfSearchModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QPdfSearchModel_SuperSort(QPdfSearchModel* self, int column, int order) {
    self->QPdfSearchModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSort(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_sort_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QPdfSearchModel_Buddy(const QPdfSearchModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QPdfSearchModel_SuperBuddy(const QPdfSearchModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QPdfSearchModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBuddy(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_buddy_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfSearchModel_Match(const QPdfSearchModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QPdfSearchModel_SuperMatch(const QPdfSearchModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QPdfSearchModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QPdfSearchModel_OnMatch(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_match_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QPdfSearchModel_Span(const QPdfSearchModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QPdfSearchModel_SuperSpan(const QPdfSearchModel* self, const QModelIndex* index) {
    return new QSize(self->QPdfSearchModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSpan(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_span_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Span_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_MultiData(const QPdfSearchModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QPdfSearchModel_SuperMultiData(const QPdfSearchModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QPdfSearchModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMultiData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        vqpdfsearchmodel->qpdfsearchmodel_multidata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_Submit(QPdfSearchModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QPdfSearchModel_SuperSubmit(QPdfSearchModel* self) {
    return self->QPdfSearchModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSubmit(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_submit_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_Revert(QPdfSearchModel* self) {
    self->revert();
}

// Base class handler implementation
void QPdfSearchModel_SuperRevert(QPdfSearchModel* self) {
    self->QPdfSearchModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnRevert(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_revert_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_ResetInternalData(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel) {
        vqpdfsearchmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QPdfSearchModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfSearchModel_SuperResetInternalData(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->QPdfSearchModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QPdfSearchModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnResetInternalData(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_resetinternaldata_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_Event(QPdfSearchModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPdfSearchModel_SuperEvent(QPdfSearchModel* self, QEvent* event) {
    return self->QPdfSearchModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEvent(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_event_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPdfSearchModel_EventFilter(QPdfSearchModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPdfSearchModel_SuperEventFilter(QPdfSearchModel* self, QObject* watched, QEvent* event) {
    return self->QPdfSearchModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEventFilter(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_eventfilter_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_ChildEvent(QPdfSearchModel* self, QChildEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel) {
        vqpdfsearchmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfSearchModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfSearchModel_SuperChildEvent(QPdfSearchModel* self, QChildEvent* event) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->QPdfSearchModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfSearchModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnChildEvent(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_childevent_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_CustomEvent(QPdfSearchModel* self, QEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel) {
        vqpdfsearchmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfSearchModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfSearchModel_SuperCustomEvent(QPdfSearchModel* self, QEvent* event) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->QPdfSearchModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfSearchModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnCustomEvent(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_customevent_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_ConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel) {
        vqpdfsearchmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfSearchModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfSearchModel_SuperConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->QPdfSearchModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfSearchModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnConnectNotify(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_connectnotify_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfSearchModel_DisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel) {
        vqpdfsearchmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfSearchModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfSearchModel_SuperDisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->QPdfSearchModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfSearchModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnDisconnectNotify(QPdfSearchModel* self, intptr_t slot) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self))
        vqpdfsearchmodel->qpdfsearchmodel_disconnectnotify_callback = reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPdfSearchModel_UpdatePage(QPdfSearchModel* self, int page) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::updatePage(static_cast<int>(page));
    } else
        qFatal("Error: Protected method QPdfSearchModel::updatePage called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QPdfSearchModel_CreateIndex(const QPdfSearchModel* self, int row, int column) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self)))
        return new QModelIndex(vqpdfsearchmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QPdfSearchModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_EncodeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqpdfsearchmodel->VirtualQPdfSearchModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QPdfSearchModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfSearchModel_DecodeData(QPdfSearchModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        return vqpdfsearchmodel->VirtualQPdfSearchModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QPdfSearchModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_BeginInsertRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfSearchModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_EndInsertRows(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::endInsertRows();
    } else
        qFatal("Error: Protected method QPdfSearchModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_BeginRemoveRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfSearchModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_EndRemoveRows(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QPdfSearchModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfSearchModel_BeginMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        return vqpdfsearchmodel->VirtualQPdfSearchModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QPdfSearchModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_EndMoveRows(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::endMoveRows();
    } else
        qFatal("Error: Protected method QPdfSearchModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_BeginInsertColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfSearchModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_EndInsertColumns(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QPdfSearchModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_BeginRemoveColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QPdfSearchModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_EndRemoveColumns(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QPdfSearchModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfSearchModel_BeginMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        return vqpdfsearchmodel->VirtualQPdfSearchModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QPdfSearchModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_EndMoveColumns(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QPdfSearchModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_BeginResetModel(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::beginResetModel();
    } else
        qFatal("Error: Protected method QPdfSearchModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_EndResetModel(QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::endResetModel();
    } else
        qFatal("Error: Protected method QPdfSearchModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_ChangePersistentIndex(QPdfSearchModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
        vqpdfsearchmodel->VirtualQPdfSearchModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QPdfSearchModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfSearchModel_ChangePersistentIndexList(QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self)) {
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
        vqpdfsearchmodel->VirtualQPdfSearchModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QPdfSearchModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QPdfSearchModel_PersistentIndexList(const QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self))) {
        QList<QModelIndex> _ret = vqpdfsearchmodel->VirtualQPdfSearchModel::persistentIndexList();
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
        qFatal("Error: Protected method QPdfSearchModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPdfSearchModel_Sender(const QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self))) {
        return vqpdfsearchmodel->VirtualQPdfSearchModel::sender();
    } else
        qFatal("Error: Protected method QPdfSearchModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfSearchModel_SenderSignalIndex(const QPdfSearchModel* self) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self))) {
        return vqpdfsearchmodel->VirtualQPdfSearchModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfSearchModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfSearchModel_Receivers(const QPdfSearchModel* self, const char* signal) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self))) {
        return vqpdfsearchmodel->VirtualQPdfSearchModel::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfSearchModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfSearchModel_IsSignalConnected(const QPdfSearchModel* self, const QMetaMethod* signal) {
    if (auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self))) {
        return vqpdfsearchmodel->VirtualQPdfSearchModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfSearchModel::isSignalConnected called without a directly constructed type");
}

void QPdfSearchModel_Delete(QPdfSearchModel* self) {
    delete self;
}
