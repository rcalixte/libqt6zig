#include <QAbstractItemModel>
#include <QAbstractTableModel>
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
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qsqlquerymodel.h>
#include "libqsqlquerymodel.h"
#include "libqsqlquerymodel.hxx"

QSqlQueryModel* QSqlQueryModel_new() {
    return new VirtualQSqlQueryModel();
}

QSqlQueryModel* QSqlQueryModel_new2(QObject* parent) {
    return new VirtualQSqlQueryModel(parent);
}

QMetaObject* QSqlQueryModel_MetaObject(const QSqlQueryModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSqlQueryModel_Metacast(QSqlQueryModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSqlQueryModel_Metacall(QSqlQueryModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSqlQueryModel_Tr(const char* s) {
    auto _ret = QSqlQueryModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSqlQueryModel_RowCount(const QSqlQueryModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int QSqlQueryModel_ColumnCount(const QSqlQueryModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QSqlRecord* QSqlQueryModel_Record(const QSqlQueryModel* self, int row) {
    return new QSqlRecord(self->record(static_cast<int>(row)));
}

QSqlRecord* QSqlQueryModel_Record2(const QSqlQueryModel* self) {
    return new QSqlRecord(self->record());
}

QVariant* QSqlQueryModel_Data(const QSqlQueryModel* self, const QModelIndex* item, int role) {
    return new QVariant(self->data(*item, static_cast<int>(role)));
}

QVariant* QSqlQueryModel_HeaderData(const QSqlQueryModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QSqlQueryModel_SetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QSqlQueryModel_InsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSqlQueryModel_RemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QSqlQueryModel_SetQuery(QSqlQueryModel* self, const QSqlQuery* query) {
    self->setQuery(*query);
}

void QSqlQueryModel_SetQuery2(QSqlQueryModel* self, const libqt_string query) {
    QString query_QString = QString::fromUtf8(query.data, query.len);
    self->setQuery(query_QString);
}

QSqlQuery* QSqlQueryModel_Query(const QSqlQueryModel* self) {
    const QSqlQuery& _ret = self->query();
    // Cast returned reference into pointer
    return const_cast<QSqlQuery*>(&_ret);
}

void QSqlQueryModel_Clear(QSqlQueryModel* self) {
    self->clear();
}

QSqlError* QSqlQueryModel_LastError(const QSqlQueryModel* self) {
    return new QSqlError(self->lastError());
}

void QSqlQueryModel_FetchMore(QSqlQueryModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

bool QSqlQueryModel_CanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

libqt_map /* of int to libqt_string */ QSqlQueryModel_RoleNames(const QSqlQueryModel* self) {
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

void QSqlQueryModel_QueryChange(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel) {
        vqsqlquerymodel->queryChange();
    }
}

QModelIndex* QSqlQueryModel_IndexInQuery(const QSqlQueryModel* self, const QModelIndex* item) {
    auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel) {
        return new QModelIndex(vqsqlquerymodel->indexInQuery(*item));
    }
    qFatal("Error: Protected method QSqlQueryModel::indexInQuery called without a directly constructed type");
}

libqt_string QSqlQueryModel_Tr2(const char* s, const char* c) {
    auto _ret = QSqlQueryModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlQueryModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSqlQueryModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSqlQueryModel_SetQuery22(QSqlQueryModel* self, const libqt_string query, const QSqlDatabase* db) {
    QString query_QString = QString::fromUtf8(query.data, query.len);
    self->setQuery(query_QString, *db);
}

// Base class handler implementation
QMetaObject* QSqlQueryModel_SuperMetaObject(const QSqlQueryModel* self) {
    return (QMetaObject*)self->QSqlQueryModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMetaObject(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_metaobject_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSqlQueryModel_SuperMetacast(QSqlQueryModel* self, const char* param1) {
    return self->QSqlQueryModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMetacast(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_metacast_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSqlQueryModel_SuperMetacall(QSqlQueryModel* self, int param1, int param2, void** param3) {
    return self->QSqlQueryModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMetacall(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_metacall_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int QSqlQueryModel_SuperRowCount(const QSqlQueryModel* self, const QModelIndex* parent) {
    return self->QSqlQueryModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRowCount(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_rowcount_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RowCount_Callback>(slot);
}

// Base class handler implementation
int QSqlQueryModel_SuperColumnCount(const QSqlQueryModel* self, const QModelIndex* parent) {
    return self->QSqlQueryModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnColumnCount(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_columncount_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
QVariant* QSqlQueryModel_SuperData(const QSqlQueryModel* self, const QModelIndex* item, int role) {
    return new QVariant(self->QSqlQueryModel::data(*item, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_data_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Data_Callback>(slot);
}

// Base class handler implementation
QVariant* QSqlQueryModel_SuperHeaderData(const QSqlQueryModel* self, int section, int orientation, int role) {
    return new QVariant(self->QSqlQueryModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnHeaderData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_headerdata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
bool QSqlQueryModel_SuperSetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QSqlQueryModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetHeaderData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_setheaderdata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetHeaderData_Callback>(slot);
}

// Base class handler implementation
bool QSqlQueryModel_SuperInsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
    return self->QSqlQueryModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnInsertColumns(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_insertcolumns_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_InsertColumns_Callback>(slot);
}

// Base class handler implementation
bool QSqlQueryModel_SuperRemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
    return self->QSqlQueryModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRemoveColumns(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_removecolumns_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RemoveColumns_Callback>(slot);
}

// Base class handler implementation
void QSqlQueryModel_SuperClear(QSqlQueryModel* self) {
    self->QSqlQueryModel::clear();
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnClear(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_clear_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Clear_Callback>(slot);
}

// Base class handler implementation
void QSqlQueryModel_SuperFetchMore(QSqlQueryModel* self, const QModelIndex* parent) {
    self->QSqlQueryModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnFetchMore(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_fetchmore_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_FetchMore_Callback>(slot);
}

// Base class handler implementation
bool QSqlQueryModel_SuperCanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent) {
    return self->QSqlQueryModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnCanFetchMore(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_canfetchmore_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_CanFetchMore_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QSqlQueryModel_SuperRoleNames(const QSqlQueryModel* self) {
    QHash<int, QByteArray> _ret = self->QSqlQueryModel::roleNames();
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
void QSqlQueryModel_OnRoleNames(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_rolenames_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
void QSqlQueryModel_SuperQueryChange(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->QSqlQueryModel::queryChange();
    } else
        qFatal("Error: Protected virtual method QSqlQueryModel::queryChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnQueryChange(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_querychange_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_QueryChange_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_SuperIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        return new QModelIndex(vqsqlquerymodel->QSqlQueryModel::indexInQuery(*item));
    qFatal("Error: Protected virtual method QSqlQueryModel::indexInQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnIndexInQuery(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_indexinquery_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_IndexInQuery_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_Index(const QSqlQueryModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_SuperIndex(const QSqlQueryModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QSqlQueryModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnIndex(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_index_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_Sibling(const QSqlQueryModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_SuperSibling(const QSqlQueryModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QSqlQueryModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSibling(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_sibling_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_DropMimeData(QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QSqlQueryModel_SuperDropMimeData(QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QSqlQueryModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnDropMimeData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_dropmimedata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QSqlQueryModel_Flags(const QSqlQueryModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int QSqlQueryModel_SuperFlags(const QSqlQueryModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QSqlQueryModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnFlags(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_flags_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_SetData(QSqlQueryModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool QSqlQueryModel_SuperSetData(QSqlQueryModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QSqlQueryModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_setdata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QSqlQueryModel_ItemData(const QSqlQueryModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QSqlQueryModel_SuperItemData(const QSqlQueryModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QSqlQueryModel::itemData(*index);
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
void QSqlQueryModel_OnItemData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_itemdata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_SetItemData(QSqlQueryModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QSqlQueryModel_SuperSetItemData(QSqlQueryModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QSqlQueryModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetItemData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_setitemdata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_ClearItemData(QSqlQueryModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QSqlQueryModel_SuperClearItemData(QSqlQueryModel* self, const QModelIndex* index) {
    return self->QSqlQueryModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnClearItemData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_clearitemdata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSqlQueryModel_MimeTypes(const QSqlQueryModel* self) {
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
libqt_list /* of libqt_string */ QSqlQueryModel_SuperMimeTypes(const QSqlQueryModel* self) {
    QList<QString> _ret = self->QSqlQueryModel::mimeTypes();
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
void QSqlQueryModel_OnMimeTypes(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_mimetypes_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QSqlQueryModel_MimeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QSqlQueryModel_SuperMimeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QSqlQueryModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMimeData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_mimedata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_CanDropMimeData(const QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QSqlQueryModel_SuperCanDropMimeData(const QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QSqlQueryModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnCanDropMimeData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_candropmimedata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QSqlQueryModel_SupportedDropActions(const QSqlQueryModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QSqlQueryModel_SuperSupportedDropActions(const QSqlQueryModel* self) {
    return static_cast<int>(self->QSqlQueryModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSupportedDropActions(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_supporteddropactions_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QSqlQueryModel_SupportedDragActions(const QSqlQueryModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QSqlQueryModel_SuperSupportedDragActions(const QSqlQueryModel* self) {
    return static_cast<int>(self->QSqlQueryModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSupportedDragActions(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_supporteddragactions_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_InsertRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QSqlQueryModel_SuperInsertRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent) {
    return self->QSqlQueryModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnInsertRows(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_insertrows_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_RemoveRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QSqlQueryModel_SuperRemoveRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent) {
    return self->QSqlQueryModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRemoveRows(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_removerows_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_MoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QSqlQueryModel_SuperMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QSqlQueryModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMoveRows(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_moverows_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_MoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QSqlQueryModel_SuperMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QSqlQueryModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMoveColumns(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_movecolumns_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_Sort(QSqlQueryModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QSqlQueryModel_SuperSort(QSqlQueryModel* self, int column, int order) {
    self->QSqlQueryModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSort(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_sort_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_Buddy(const QSqlQueryModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_SuperBuddy(const QSqlQueryModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QSqlQueryModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBuddy(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_buddy_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlQueryModel_Match(const QSqlQueryModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QSqlQueryModel_SuperMatch(const QSqlQueryModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QSqlQueryModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QSqlQueryModel_OnMatch(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_match_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QSqlQueryModel_Span(const QSqlQueryModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QSqlQueryModel_SuperSpan(const QSqlQueryModel* self, const QModelIndex* index) {
    return new QSize(self->QSqlQueryModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSpan(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_span_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Span_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_MultiData(const QSqlQueryModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QSqlQueryModel_SuperMultiData(const QSqlQueryModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QSqlQueryModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMultiData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        vqsqlquerymodel->qsqlquerymodel_multidata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_Submit(QSqlQueryModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QSqlQueryModel_SuperSubmit(QSqlQueryModel* self) {
    return self->QSqlQueryModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSubmit(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_submit_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_Revert(QSqlQueryModel* self) {
    self->revert();
}

// Base class handler implementation
void QSqlQueryModel_SuperRevert(QSqlQueryModel* self) {
    self->QSqlQueryModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRevert(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_revert_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_ResetInternalData(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel) {
        vqsqlquerymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QSqlQueryModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlQueryModel_SuperResetInternalData(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->QSqlQueryModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QSqlQueryModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnResetInternalData(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_resetinternaldata_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_Event(QSqlQueryModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSqlQueryModel_SuperEvent(QSqlQueryModel* self, QEvent* event) {
    return self->QSqlQueryModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEvent(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_event_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSqlQueryModel_EventFilter(QSqlQueryModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSqlQueryModel_SuperEventFilter(QSqlQueryModel* self, QObject* watched, QEvent* event) {
    return self->QSqlQueryModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEventFilter(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_eventfilter_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_TimerEvent(QSqlQueryModel* self, QTimerEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel) {
        vqsqlquerymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlQueryModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlQueryModel_SuperTimerEvent(QSqlQueryModel* self, QTimerEvent* event) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->QSqlQueryModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlQueryModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnTimerEvent(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_timerevent_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_ChildEvent(QSqlQueryModel* self, QChildEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel) {
        vqsqlquerymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlQueryModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlQueryModel_SuperChildEvent(QSqlQueryModel* self, QChildEvent* event) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->QSqlQueryModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlQueryModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnChildEvent(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_childevent_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_CustomEvent(QSqlQueryModel* self, QEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel) {
        vqsqlquerymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlQueryModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlQueryModel_SuperCustomEvent(QSqlQueryModel* self, QEvent* event) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->QSqlQueryModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlQueryModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnCustomEvent(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_customevent_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_ConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel) {
        vqsqlquerymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSqlQueryModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlQueryModel_SuperConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->QSqlQueryModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSqlQueryModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnConnectNotify(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_connectnotify_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSqlQueryModel_DisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel) {
        vqsqlquerymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSqlQueryModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlQueryModel_SuperDisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->QSqlQueryModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSqlQueryModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnDisconnectNotify(QSqlQueryModel* self, intptr_t slot) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self))
        vqsqlquerymodel->qsqlquerymodel_disconnectnotify_callback = reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSqlQueryModel_BeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlQueryModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_EndInsertRows(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::endInsertRows();
    } else
        qFatal("Error: Protected method QSqlQueryModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_BeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlQueryModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_EndRemoveRows(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QSqlQueryModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_BeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlQueryModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_EndInsertColumns(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QSqlQueryModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_BeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlQueryModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_EndRemoveColumns(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QSqlQueryModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_BeginResetModel(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::beginResetModel();
    } else
        qFatal("Error: Protected method QSqlQueryModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_EndResetModel(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::endResetModel();
    } else
        qFatal("Error: Protected method QSqlQueryModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_SetLastError(QSqlQueryModel* self, const QSqlError* errorVal) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::setLastError(*errorVal);
    } else
        qFatal("Error: Protected method QSqlQueryModel::setLastError called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_CreateIndex(const QSqlQueryModel* self, int row, int column) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self)))
        return new QModelIndex(vqsqlquerymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QSqlQueryModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_EncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqsqlquerymodel->VirtualQSqlQueryModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QSqlQueryModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlQueryModel_DecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        return vqsqlquerymodel->VirtualQSqlQueryModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QSqlQueryModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlQueryModel_BeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        return vqsqlquerymodel->VirtualQSqlQueryModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QSqlQueryModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_EndMoveRows(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::endMoveRows();
    } else
        qFatal("Error: Protected method QSqlQueryModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlQueryModel_BeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        return vqsqlquerymodel->VirtualQSqlQueryModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QSqlQueryModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_EndMoveColumns(QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QSqlQueryModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_ChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
        vqsqlquerymodel->VirtualQSqlQueryModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QSqlQueryModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlQueryModel_ChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self)) {
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
        vqsqlquerymodel->VirtualQSqlQueryModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QSqlQueryModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QSqlQueryModel_PersistentIndexList(const QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self))) {
        QList<QModelIndex> _ret = vqsqlquerymodel->VirtualQSqlQueryModel::persistentIndexList();
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
        qFatal("Error: Protected method QSqlQueryModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSqlQueryModel_Sender(const QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self))) {
        return vqsqlquerymodel->VirtualQSqlQueryModel::sender();
    } else
        qFatal("Error: Protected method QSqlQueryModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSqlQueryModel_SenderSignalIndex(const QSqlQueryModel* self) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self))) {
        return vqsqlquerymodel->VirtualQSqlQueryModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSqlQueryModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSqlQueryModel_Receivers(const QSqlQueryModel* self, const char* signal) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self))) {
        return vqsqlquerymodel->VirtualQSqlQueryModel::receivers(signal);
    } else
        qFatal("Error: Protected method QSqlQueryModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlQueryModel_IsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal) {
    if (auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self))) {
        return vqsqlquerymodel->VirtualQSqlQueryModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSqlQueryModel::isSignalConnected called without a directly constructed type");
}

void QSqlQueryModel_Delete(QSqlQueryModel* self) {
    delete self;
}
