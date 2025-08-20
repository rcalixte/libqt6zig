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
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
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
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlQueryModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlQueryModel_OnMetacall(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Metacall_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSqlQueryModel_QBaseMetacall(QSqlQueryModel* self, int param1, int param2, void** param3) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Metacall_IsBase(true);
        return vqsqlquerymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlQueryModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSqlQueryModel_Tr(const char* s) {
    QString _ret = QSqlQueryModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSqlRecord* QSqlQueryModel_Record(const QSqlQueryModel* self, int row) {
    return new QSqlRecord(self->record(static_cast<int>(row)));
}

QSqlRecord* QSqlQueryModel_Record2(const QSqlQueryModel* self) {
    return new QSqlRecord(self->record());
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

QSqlError* QSqlQueryModel_LastError(const QSqlQueryModel* self) {
    return new QSqlError(self->lastError());
}

libqt_string QSqlQueryModel_Tr2(const char* s, const char* c) {
    QString _ret = QSqlQueryModel::tr(s, c);
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
    QString _ret = QSqlQueryModel::tr(s, c, static_cast<int>(n));
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

QSqlQuery* QSqlQueryModel_Query1(const QSqlQueryModel* self, Disambiguated_t* param1) {
    const QSqlQuery& _ret = self->query(*param1);
    // Cast returned reference into pointer
    return const_cast<QSqlQuery*>(&_ret);
}

// Derived class handler implementation
int QSqlQueryModel_RowCount(const QSqlQueryModel* self, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->rowCount(*parent);
    } else {
        return self->QSqlQueryModel::rowCount(*parent);
    }
}

// Base class handler implementation
int QSqlQueryModel_QBaseRowCount(const QSqlQueryModel* self, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_RowCount_IsBase(true);
        return vqsqlquerymodel->rowCount(*parent);
    } else {
        return self->QSqlQueryModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRowCount(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_RowCount_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlQueryModel_ColumnCount(const QSqlQueryModel* self, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->columnCount(*parent);
    } else {
        return self->QSqlQueryModel::columnCount(*parent);
    }
}

// Base class handler implementation
int QSqlQueryModel_QBaseColumnCount(const QSqlQueryModel* self, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ColumnCount_IsBase(true);
        return vqsqlquerymodel->columnCount(*parent);
    } else {
        return self->QSqlQueryModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnColumnCount(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ColumnCount_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSqlQueryModel_Data(const QSqlQueryModel* self, const QModelIndex* item, int role) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return new QVariant(vqsqlquerymodel->data(*item, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlQueryModel*)self)->data(*item, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QSqlQueryModel_QBaseData(const QSqlQueryModel* self, const QModelIndex* item, int role) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Data_IsBase(true);
        return new QVariant(vqsqlquerymodel->data(*item, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlQueryModel*)self)->data(*item, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnData(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Data_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSqlQueryModel_HeaderData(const QSqlQueryModel* self, int section, int orientation, int role) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return new QVariant(vqsqlquerymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlQueryModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QSqlQueryModel_QBaseHeaderData(const QSqlQueryModel* self, int section, int orientation, int role) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_HeaderData_IsBase(true);
        return new QVariant(vqsqlquerymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlQueryModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnHeaderData(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_HeaderData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_SetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QSqlQueryModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseSetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SetHeaderData_IsBase(true);
        return vqsqlquerymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QSqlQueryModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetHeaderData(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SetHeaderData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_InsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlQueryModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseInsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_InsertColumns_IsBase(true);
        return vqsqlquerymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlQueryModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnInsertColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_InsertColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_RemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlQueryModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseRemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_RemoveColumns_IsBase(true);
        return vqsqlquerymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlQueryModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRemoveColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_RemoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_Clear(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->clear();
    } else {
        self->QSqlQueryModel::clear();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseClear(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Clear_IsBase(true);
        vqsqlquerymodel->clear();
    } else {
        self->QSqlQueryModel::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnClear(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Clear_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_FetchMore(QSqlQueryModel* self, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->fetchMore(*parent);
    } else {
        self->QSqlQueryModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseFetchMore(QSqlQueryModel* self, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_FetchMore_IsBase(true);
        vqsqlquerymodel->fetchMore(*parent);
    } else {
        self->QSqlQueryModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnFetchMore(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_FetchMore_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_CanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->canFetchMore(*parent);
    } else {
        return self->QSqlQueryModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseCanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_CanFetchMore_IsBase(true);
        return vqsqlquerymodel->canFetchMore(*parent);
    } else {
        return self->QSqlQueryModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnCanFetchMore(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_CanFetchMore_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QSqlQueryModel_RoleNames(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        QHash<int, QByteArray> _ret = vqsqlquerymodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
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
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QSqlQueryModel_QBaseRoleNames(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqsqlquerymodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
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
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRoleNames(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_RoleNames_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_QueryChange(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->queryChange();
    } else {
        ((VirtualQSqlQueryModel*)self)->queryChange();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseQueryChange(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_QueryChange_IsBase(true);
        vqsqlquerymodel->queryChange();
    } else {
        ((VirtualQSqlQueryModel*)self)->queryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnQueryChange(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_QueryChange_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_QueryChange_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_IndexInQuery(const QSqlQueryModel* self, const QModelIndex* item) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return new QModelIndex(vqsqlquerymodel->indexInQuery(*item));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_QBaseIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_IndexInQuery_IsBase(true);
        return new QModelIndex(vqsqlquerymodel->indexInQuery(*item));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnIndexInQuery(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_IndexInQuery_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_IndexInQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_Index(const QSqlQueryModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return new QModelIndex(vqsqlquerymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQSqlQueryModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_QBaseIndex(const QSqlQueryModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Index_IsBase(true);
        return new QModelIndex(vqsqlquerymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQSqlQueryModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnIndex(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Index_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_Sibling(const QSqlQueryModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return new QModelIndex(vqsqlquerymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQSqlQueryModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_QBaseSibling(const QSqlQueryModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Sibling_IsBase(true);
        return new QModelIndex(vqsqlquerymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQSqlQueryModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSibling(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Sibling_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_DropMimeData(QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlQueryModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseDropMimeData(QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_DropMimeData_IsBase(true);
        return vqsqlquerymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlQueryModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnDropMimeData(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_DropMimeData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlQueryModel_Flags(const QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return static_cast<int>(vqsqlquerymodel->flags(*index));
    } else {
        return static_cast<int>(self->QSqlQueryModel::flags(*index));
    }
}

// Base class handler implementation
int QSqlQueryModel_QBaseFlags(const QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Flags_IsBase(true);
        return static_cast<int>(vqsqlquerymodel->flags(*index));
    } else {
        return static_cast<int>(self->QSqlQueryModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnFlags(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Flags_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_SetData(QSqlQueryModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QSqlQueryModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseSetData(QSqlQueryModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SetData_IsBase(true);
        return vqsqlquerymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QSqlQueryModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetData(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SetData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QSqlQueryModel_ItemData(const QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        QMap<int, QVariant> _ret = vqsqlquerymodel->itemData(*index);
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
    } else {
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QSqlQueryModel_QBaseItemData(const QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqsqlquerymodel->itemData(*index);
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
    } else {
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
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnItemData(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ItemData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_SetItemData(QSqlQueryModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->setItemData(*index, roles_QMap);
    } else {
        return self->QSqlQueryModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseSetItemData(QSqlQueryModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SetItemData_IsBase(true);
        return vqsqlquerymodel->setItemData(*index, roles_QMap);
    } else {
        return self->QSqlQueryModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetItemData(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SetItemData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_ClearItemData(QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->clearItemData(*index);
    } else {
        return self->QSqlQueryModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseClearItemData(QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ClearItemData_IsBase(true);
        return vqsqlquerymodel->clearItemData(*index);
    } else {
        return self->QSqlQueryModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnClearItemData(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ClearItemData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSqlQueryModel_MimeTypes(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        QList<QString> _ret = vqsqlquerymodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->QSqlQueryModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QSqlQueryModel_QBaseMimeTypes(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqsqlquerymodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->QSqlQueryModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMimeTypes(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MimeTypes_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QSqlQueryModel_MimeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->mimeData(indexes_QList);
    } else {
        return self->QSqlQueryModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QSqlQueryModel_QBaseMimeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MimeData_IsBase(true);
        return vqsqlquerymodel->mimeData(indexes_QList);
    } else {
        return self->QSqlQueryModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMimeData(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MimeData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_CanDropMimeData(const QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlQueryModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseCanDropMimeData(const QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_CanDropMimeData_IsBase(true);
        return vqsqlquerymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlQueryModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnCanDropMimeData(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlQueryModel_SupportedDropActions(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return static_cast<int>(vqsqlquerymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QSqlQueryModel::supportedDropActions());
    }
}

// Base class handler implementation
int QSqlQueryModel_QBaseSupportedDropActions(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqsqlquerymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QSqlQueryModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSupportedDropActions(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlQueryModel_SupportedDragActions(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return static_cast<int>(vqsqlquerymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QSqlQueryModel::supportedDragActions());
    }
}

// Base class handler implementation
int QSqlQueryModel_QBaseSupportedDragActions(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqsqlquerymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QSqlQueryModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSupportedDragActions(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_InsertRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlQueryModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseInsertRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_InsertRows_IsBase(true);
        return vqsqlquerymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlQueryModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnInsertRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_InsertRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_RemoveRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlQueryModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseRemoveRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_RemoveRows_IsBase(true);
        return vqsqlquerymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlQueryModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRemoveRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_RemoveRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_MoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlQueryModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MoveRows_IsBase(true);
        return vqsqlquerymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlQueryModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMoveRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MoveRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_MoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlQueryModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MoveColumns_IsBase(true);
        return vqsqlquerymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlQueryModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMoveColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_Sort(QSqlQueryModel* self, int column, int order) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlQueryModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseSort(QSqlQueryModel* self, int column, int order) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Sort_IsBase(true);
        vqsqlquerymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlQueryModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSort(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Sort_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_Buddy(const QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return new QModelIndex(vqsqlquerymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQSqlQueryModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_QBaseBuddy(const QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Buddy_IsBase(true);
        return new QModelIndex(vqsqlquerymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQSqlQueryModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBuddy(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Buddy_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlQueryModel_Match(const QSqlQueryModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        QList<QModelIndex> _ret = vqsqlquerymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QSqlQueryModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QSqlQueryModel_QBaseMatch(const QSqlQueryModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqsqlquerymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QSqlQueryModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMatch(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Match_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSqlQueryModel_Span(const QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return new QSize(vqsqlquerymodel->span(*index));
    } else {
        return new QSize(((VirtualQSqlQueryModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QSqlQueryModel_QBaseSpan(const QSqlQueryModel* self, const QModelIndex* index) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Span_IsBase(true);
        return new QSize(vqsqlquerymodel->span(*index));
    } else {
        return new QSize(((VirtualQSqlQueryModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSpan(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Span_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_MultiData(const QSqlQueryModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QSqlQueryModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseMultiData(const QSqlQueryModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MultiData_IsBase(true);
        vqsqlquerymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QSqlQueryModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnMultiData(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_MultiData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_Submit(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->submit();
    } else {
        return self->QSqlQueryModel::submit();
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseSubmit(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Submit_IsBase(true);
        return vqsqlquerymodel->submit();
    } else {
        return self->QSqlQueryModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSubmit(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Submit_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_Revert(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->revert();
    } else {
        self->QSqlQueryModel::revert();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseRevert(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Revert_IsBase(true);
        vqsqlquerymodel->revert();
    } else {
        self->QSqlQueryModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRevert(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Revert_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_ResetInternalData(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->resetInternalData();
    } else {
        ((VirtualQSqlQueryModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseResetInternalData(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ResetInternalData_IsBase(true);
        vqsqlquerymodel->resetInternalData();
    } else {
        ((VirtualQSqlQueryModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnResetInternalData(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ResetInternalData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_Event(QSqlQueryModel* self, QEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->event(event);
    } else {
        return self->QSqlQueryModel::event(event);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseEvent(QSqlQueryModel* self, QEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Event_IsBase(true);
        return vqsqlquerymodel->event(event);
    } else {
        return self->QSqlQueryModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEvent(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Event_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_EventFilter(QSqlQueryModel* self, QObject* watched, QEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->eventFilter(watched, event);
    } else {
        return self->QSqlQueryModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseEventFilter(QSqlQueryModel* self, QObject* watched, QEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EventFilter_IsBase(true);
        return vqsqlquerymodel->eventFilter(watched, event);
    } else {
        return self->QSqlQueryModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEventFilter(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EventFilter_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_TimerEvent(QSqlQueryModel* self, QTimerEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->timerEvent(event);
    } else {
        ((VirtualQSqlQueryModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseTimerEvent(QSqlQueryModel* self, QTimerEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_TimerEvent_IsBase(true);
        vqsqlquerymodel->timerEvent(event);
    } else {
        ((VirtualQSqlQueryModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnTimerEvent(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_TimerEvent_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_ChildEvent(QSqlQueryModel* self, QChildEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->childEvent(event);
    } else {
        ((VirtualQSqlQueryModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseChildEvent(QSqlQueryModel* self, QChildEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ChildEvent_IsBase(true);
        vqsqlquerymodel->childEvent(event);
    } else {
        ((VirtualQSqlQueryModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnChildEvent(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ChildEvent_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_CustomEvent(QSqlQueryModel* self, QEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->customEvent(event);
    } else {
        ((VirtualQSqlQueryModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseCustomEvent(QSqlQueryModel* self, QEvent* event) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_CustomEvent_IsBase(true);
        vqsqlquerymodel->customEvent(event);
    } else {
        ((VirtualQSqlQueryModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnCustomEvent(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_CustomEvent_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_ConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->connectNotify(*signal);
    } else {
        ((VirtualQSqlQueryModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ConnectNotify_IsBase(true);
        vqsqlquerymodel->connectNotify(*signal);
    } else {
        ((VirtualQSqlQueryModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnConnectNotify(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ConnectNotify_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_DisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlQueryModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseDisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_DisconnectNotify_IsBase(true);
        vqsqlquerymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlQueryModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnDisconnectNotify(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_BeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlQueryModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginInsertRows_IsBase(true);
        vqsqlquerymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlQueryModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginInsertRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_EndInsertRows(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->endInsertRows();
    } else {
        ((VirtualQSqlQueryModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndInsertRows(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndInsertRows_IsBase(true);
        vqsqlquerymodel->endInsertRows();
    } else {
        ((VirtualQSqlQueryModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndInsertRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndInsertRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_BeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlQueryModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginRemoveRows_IsBase(true);
        vqsqlquerymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlQueryModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginRemoveRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_EndRemoveRows(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->endRemoveRows();
    } else {
        ((VirtualQSqlQueryModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndRemoveRows(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndRemoveRows_IsBase(true);
        vqsqlquerymodel->endRemoveRows();
    } else {
        ((VirtualQSqlQueryModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndRemoveRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_BeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlQueryModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginInsertColumns_IsBase(true);
        vqsqlquerymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlQueryModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginInsertColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_EndInsertColumns(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->endInsertColumns();
    } else {
        ((VirtualQSqlQueryModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndInsertColumns(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndInsertColumns_IsBase(true);
        vqsqlquerymodel->endInsertColumns();
    } else {
        ((VirtualQSqlQueryModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndInsertColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_BeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlQueryModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginRemoveColumns_IsBase(true);
        vqsqlquerymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlQueryModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginRemoveColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_EndRemoveColumns(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->endRemoveColumns();
    } else {
        ((VirtualQSqlQueryModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndRemoveColumns(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndRemoveColumns_IsBase(true);
        vqsqlquerymodel->endRemoveColumns();
    } else {
        ((VirtualQSqlQueryModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndRemoveColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_BeginResetModel(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->beginResetModel();
    } else {
        ((VirtualQSqlQueryModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginResetModel(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginResetModel_IsBase(true);
        vqsqlquerymodel->beginResetModel();
    } else {
        ((VirtualQSqlQueryModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginResetModel(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginResetModel_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_EndResetModel(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->endResetModel();
    } else {
        ((VirtualQSqlQueryModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndResetModel(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndResetModel_IsBase(true);
        vqsqlquerymodel->endResetModel();
    } else {
        ((VirtualQSqlQueryModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndResetModel(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndResetModel_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_SetLastError(QSqlQueryModel* self, const QSqlError* errorVal) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setLastError(*errorVal);
    } else {
        ((VirtualQSqlQueryModel*)self)->setLastError(*errorVal);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseSetLastError(QSqlQueryModel* self, const QSqlError* errorVal) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SetLastError_IsBase(true);
        vqsqlquerymodel->setLastError(*errorVal);
    } else {
        ((VirtualQSqlQueryModel*)self)->setLastError(*errorVal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetLastError(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SetLastError_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetLastError_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_CreateIndex(const QSqlQueryModel* self, int row, int column) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return new QModelIndex(vqsqlquerymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_QBaseCreateIndex(const QSqlQueryModel* self, int row, int column) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqsqlquerymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnCreateIndex(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_CreateIndex_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_EncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQSqlQueryModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseEncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EncodeData_IsBase(true);
        vqsqlquerymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQSqlQueryModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEncodeData(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EncodeData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_DecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQSqlQueryModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseDecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_DecodeData_IsBase(true);
        return vqsqlquerymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQSqlQueryModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnDecodeData(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_DecodeData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_BeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQSqlQueryModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseBeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginMoveRows_IsBase(true);
        return vqsqlquerymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQSqlQueryModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginMoveRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_EndMoveRows(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->endMoveRows();
    } else {
        ((VirtualQSqlQueryModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndMoveRows(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndMoveRows_IsBase(true);
        vqsqlquerymodel->endMoveRows();
    } else {
        ((VirtualQSqlQueryModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndMoveRows(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndMoveRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_BeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQSqlQueryModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseBeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginMoveColumns_IsBase(true);
        return vqsqlquerymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQSqlQueryModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginMoveColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_EndMoveColumns(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->endMoveColumns();
    } else {
        ((VirtualQSqlQueryModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndMoveColumns(QSqlQueryModel* self) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndMoveColumns_IsBase(true);
        vqsqlquerymodel->endMoveColumns();
    } else {
        ((VirtualQSqlQueryModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndMoveColumns(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_ChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQSqlQueryModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ChangePersistentIndex_IsBase(true);
        vqsqlquerymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQSqlQueryModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnChangePersistentIndex(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlQueryModel_ChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
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
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQSqlQueryModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QSqlQueryModel_QBaseChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
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
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ChangePersistentIndexList_IsBase(true);
        vqsqlquerymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQSqlQueryModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnChangePersistentIndexList(QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlQueryModel_PersistentIndexList(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        QList<QModelIndex> _ret = vqsqlquerymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQSqlQueryModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QSqlQueryModel_QBasePersistentIndexList(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqsqlquerymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQSqlQueryModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnPersistentIndexList(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSqlQueryModel_Sender(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->sender();
    } else {
        return ((VirtualQSqlQueryModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSqlQueryModel_QBaseSender(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Sender_IsBase(true);
        return vqsqlquerymodel->sender();
    } else {
        return ((VirtualQSqlQueryModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSender(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Sender_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlQueryModel_SenderSignalIndex(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->senderSignalIndex();
    } else {
        return ((VirtualQSqlQueryModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSqlQueryModel_QBaseSenderSignalIndex(const QSqlQueryModel* self) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SenderSignalIndex_IsBase(true);
        return vqsqlquerymodel->senderSignalIndex();
    } else {
        return ((VirtualQSqlQueryModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSenderSignalIndex(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlQueryModel_Receivers(const QSqlQueryModel* self, const char* signal) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->receivers(signal);
    } else {
        return ((VirtualQSqlQueryModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSqlQueryModel_QBaseReceivers(const QSqlQueryModel* self, const char* signal) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Receivers_IsBase(true);
        return vqsqlquerymodel->receivers(signal);
    } else {
        return ((VirtualQSqlQueryModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnReceivers(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_Receivers_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlQueryModel_IsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        return vqsqlquerymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlQueryModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSqlQueryModel_QBaseIsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_IsSignalConnected_IsBase(true);
        return vqsqlquerymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlQueryModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnIsSignalConnected(const QSqlQueryModel* self, intptr_t slot) {
    auto* vqsqlquerymodel = const_cast<VirtualQSqlQueryModel*>(dynamic_cast<const VirtualQSqlQueryModel*>(self));
    if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
        vqsqlquerymodel->setQSqlQueryModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_IsSignalConnected_Callback>(slot));
    }
}

void QSqlQueryModel_Delete(QSqlQueryModel* self) {
    delete self;
}
