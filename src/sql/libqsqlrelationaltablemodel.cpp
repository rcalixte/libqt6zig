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
#include <QSqlIndex>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlRelation>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qsqlrelationaltablemodel.h>
#include "libqsqlrelationaltablemodel.h"
#include "libqsqlrelationaltablemodel.hxx"

QSqlRelation* QSqlRelation_new() {
    return new QSqlRelation();
}

QSqlRelation* QSqlRelation_new2(const libqt_string aTableName, const libqt_string indexCol, const libqt_string displayCol) {
    QString aTableName_QString = QString::fromUtf8(aTableName.data, aTableName.len);
    QString indexCol_QString = QString::fromUtf8(indexCol.data, indexCol.len);
    QString displayCol_QString = QString::fromUtf8(displayCol.data, displayCol.len);
    return new QSqlRelation(aTableName_QString, indexCol_QString, displayCol_QString);
}

QSqlRelation* QSqlRelation_new3(const QSqlRelation* param1) {
    return new QSqlRelation(*param1);
}

void QSqlRelation_Swap(QSqlRelation* self, QSqlRelation* other) {
    self->swap(*other);
}

libqt_string QSqlRelation_TableName(const QSqlRelation* self) {
    auto _ret = self->tableName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlRelation_IndexColumn(const QSqlRelation* self) {
    auto _ret = self->indexColumn();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlRelation_DisplayColumn(const QSqlRelation* self) {
    auto _ret = self->displayColumn();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSqlRelation_IsValid(const QSqlRelation* self) {
    return self->isValid();
}

void QSqlRelation_OperatorAssign(QSqlRelation* self, const QSqlRelation* param1) {
    self->operator=(*param1);
}

void QSqlRelation_Delete(QSqlRelation* self) {
    delete self;
}

QSqlRelationalTableModel* QSqlRelationalTableModel_new() {
    return new VirtualQSqlRelationalTableModel();
}

QSqlRelationalTableModel* QSqlRelationalTableModel_new2(QObject* parent) {
    return new VirtualQSqlRelationalTableModel(parent);
}

QSqlRelationalTableModel* QSqlRelationalTableModel_new3(QObject* parent, const QSqlDatabase* db) {
    return new VirtualQSqlRelationalTableModel(parent, *db);
}

QMetaObject* QSqlRelationalTableModel_MetaObject(const QSqlRelationalTableModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSqlRelationalTableModel_Metacast(QSqlRelationalTableModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSqlRelationalTableModel_Metacall(QSqlRelationalTableModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSqlRelationalTableModel_Tr(const char* s) {
    auto _ret = QSqlRelationalTableModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QSqlRelationalTableModel_Data(const QSqlRelationalTableModel* self, const QModelIndex* item, int role) {
    return new QVariant(self->data(*item, static_cast<int>(role)));
}

bool QSqlRelationalTableModel_SetData(QSqlRelationalTableModel* self, const QModelIndex* item, const QVariant* value, int role) {
    return self->setData(*item, *value, static_cast<int>(role));
}

bool QSqlRelationalTableModel_RemoveColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QSqlRelationalTableModel_Clear(QSqlRelationalTableModel* self) {
    self->clear();
}

bool QSqlRelationalTableModel_Select(QSqlRelationalTableModel* self) {
    return self->select();
}

void QSqlRelationalTableModel_SetTable(QSqlRelationalTableModel* self, const libqt_string tableName) {
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    self->setTable(tableName_QString);
}

void QSqlRelationalTableModel_SetRelation(QSqlRelationalTableModel* self, int column, const QSqlRelation* relation) {
    self->setRelation(static_cast<int>(column), *relation);
}

QSqlRelation* QSqlRelationalTableModel_Relation(const QSqlRelationalTableModel* self, int column) {
    return new QSqlRelation(self->relation(static_cast<int>(column)));
}

QSqlTableModel* QSqlRelationalTableModel_RelationModel(const QSqlRelationalTableModel* self, int column) {
    return self->relationModel(static_cast<int>(column));
}

void QSqlRelationalTableModel_SetJoinMode(QSqlRelationalTableModel* self, int joinMode) {
    self->setJoinMode(static_cast<QSqlRelationalTableModel::JoinMode>(joinMode));
}

void QSqlRelationalTableModel_RevertRow(QSqlRelationalTableModel* self, int row) {
    self->revertRow(static_cast<int>(row));
}

libqt_string QSqlRelationalTableModel_SelectStatement(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        auto _ret = vqsqlrelationaltablemodel->selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method QSqlRelationalTableModel::selectStatement called without a directly constructed type");
}

bool QSqlRelationalTableModel_UpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        return vqsqlrelationaltablemodel->updateRowInTable(static_cast<int>(row), *values);
    }
    qFatal("Error: Protected method QSqlRelationalTableModel::updateRowInTable called without a directly constructed type");
}

bool QSqlRelationalTableModel_InsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        return vqsqlrelationaltablemodel->insertRowIntoTable(*values);
    }
    qFatal("Error: Protected method QSqlRelationalTableModel::insertRowIntoTable called without a directly constructed type");
}

libqt_string QSqlRelationalTableModel_OrderByClause(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        auto _ret = vqsqlrelationaltablemodel->orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method QSqlRelationalTableModel::orderByClause called without a directly constructed type");
}

libqt_string QSqlRelationalTableModel_Tr2(const char* s, const char* c) {
    auto _ret = QSqlRelationalTableModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlRelationalTableModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSqlRelationalTableModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSqlRelationalTableModel_SuperMetaObject(const QSqlRelationalTableModel* self) {
    return (QMetaObject*)self->QSqlRelationalTableModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMetaObject(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_metaobject_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSqlRelationalTableModel_SuperMetacast(QSqlRelationalTableModel* self, const char* param1) {
    return self->QSqlRelationalTableModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMetacast(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_metacast_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSqlRelationalTableModel_SuperMetacall(QSqlRelationalTableModel* self, int param1, int param2, void** param3) {
    return self->QSqlRelationalTableModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMetacall(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_metacall_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* QSqlRelationalTableModel_SuperData(const QSqlRelationalTableModel* self, const QModelIndex* item, int role) {
    return new QVariant(self->QSqlRelationalTableModel::data(*item, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_data_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Data_Callback>(slot);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperSetData(QSqlRelationalTableModel* self, const QModelIndex* item, const QVariant* value, int role) {
    return self->QSqlRelationalTableModel::setData(*item, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_setdata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetData_Callback>(slot);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperRemoveColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRemoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_removecolumns_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RemoveColumns_Callback>(slot);
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperClear(QSqlRelationalTableModel* self) {
    self->QSqlRelationalTableModel::clear();
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnClear(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_clear_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Clear_Callback>(slot);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperSelect(QSqlRelationalTableModel* self) {
    return self->QSqlRelationalTableModel::select();
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSelect(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_select_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Select_Callback>(slot);
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperSetTable(QSqlRelationalTableModel* self, const libqt_string tableName) {
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    self->QSqlRelationalTableModel::setTable(tableName_QString);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetTable(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_settable_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetTable_Callback>(slot);
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperSetRelation(QSqlRelationalTableModel* self, int column, const QSqlRelation* relation) {
    self->QSqlRelationalTableModel::setRelation(static_cast<int>(column), *relation);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetRelation(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_setrelation_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetRelation_Callback>(slot);
}

// Base class handler implementation
QSqlTableModel* QSqlRelationalTableModel_SuperRelationModel(const QSqlRelationalTableModel* self, int column) {
    return self->QSqlRelationalTableModel::relationModel(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRelationModel(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_relationmodel_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RelationModel_Callback>(slot);
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperRevertRow(QSqlRelationalTableModel* self, int row) {
    self->QSqlRelationalTableModel::revertRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRevertRow(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_revertrow_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RevertRow_Callback>(slot);
}

// Base class handler implementation
libqt_string QSqlRelationalTableModel_SuperSelectStatement(const QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self))) {
        auto _ret = vqsqlrelationaltablemodel->QSqlRelationalTableModel::selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::selectStatement called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSelectStatement(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_selectstatement_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SelectStatement_Callback>(slot);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperUpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        return vqsqlrelationaltablemodel->QSqlRelationalTableModel::updateRowInTable(static_cast<int>(row), *values);
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::updateRowInTable called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnUpdateRowInTable(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_updaterowintable_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_UpdateRowInTable_Callback>(slot);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperInsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        return vqsqlrelationaltablemodel->QSqlRelationalTableModel::insertRowIntoTable(*values);
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::insertRowIntoTable called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnInsertRowIntoTable(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_insertrowintotable_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_InsertRowIntoTable_Callback>(slot);
}

// Base class handler implementation
libqt_string QSqlRelationalTableModel_SuperOrderByClause(const QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self))) {
        auto _ret = vqsqlrelationaltablemodel->QSqlRelationalTableModel::orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::orderByClause called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnOrderByClause(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_orderbyclause_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_OrderByClause_Callback>(slot);
}

// Derived class handler implementation
int QSqlRelationalTableModel_Flags(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int QSqlRelationalTableModel_SuperFlags(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QSqlRelationalTableModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnFlags(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_flags_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_ClearItemData(QSqlRelationalTableModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperClearItemData(QSqlRelationalTableModel* self, const QModelIndex* index) {
    return self->QSqlRelationalTableModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnClearItemData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_clearitemdata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSqlRelationalTableModel_HeaderData(const QSqlRelationalTableModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QSqlRelationalTableModel_SuperHeaderData(const QSqlRelationalTableModel* self, int section, int orientation, int role) {
    return new QVariant(self->QSqlRelationalTableModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnHeaderData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_headerdata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_SetEditStrategy(QSqlRelationalTableModel* self, int strategy) {
    self->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperSetEditStrategy(QSqlRelationalTableModel* self, int strategy) {
    self->QSqlRelationalTableModel::setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetEditStrategy(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_seteditstrategy_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetEditStrategy_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_Sort(QSqlRelationalTableModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperSort(QSqlRelationalTableModel* self, int column, int order) {
    self->QSqlRelationalTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSort(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_sort_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Sort_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_SetSort(QSqlRelationalTableModel* self, int column, int order) {
    self->setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperSetSort(QSqlRelationalTableModel* self, int column, int order) {
    self->QSqlRelationalTableModel::setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetSort(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_setsort_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetSort_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_SetFilter(QSqlRelationalTableModel* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->setFilter(filter_QString);
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperSetFilter(QSqlRelationalTableModel* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->QSqlRelationalTableModel::setFilter(filter_QString);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetFilter(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_setfilter_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetFilter_Callback>(slot);
}

// Derived class handler implementation
int QSqlRelationalTableModel_RowCount(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Base class handler implementation
int QSqlRelationalTableModel_SuperRowCount(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRowCount(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_rowcount_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_RemoveRows(QSqlRelationalTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperRemoveRows(QSqlRelationalTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRemoveRows(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_removerows_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_InsertRows(QSqlRelationalTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperInsertRows(QSqlRelationalTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnInsertRows(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_insertrows_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_SelectRow(QSqlRelationalTableModel* self, int row) {
    return self->selectRow(static_cast<int>(row));
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperSelectRow(QSqlRelationalTableModel* self, int row) {
    return self->QSqlRelationalTableModel::selectRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSelectRow(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_selectrow_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SelectRow_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_Submit(QSqlRelationalTableModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperSubmit(QSqlRelationalTableModel* self) {
    return self->QSqlRelationalTableModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSubmit(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_submit_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_Revert(QSqlRelationalTableModel* self) {
    self->revert();
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperRevert(QSqlRelationalTableModel* self) {
    self->QSqlRelationalTableModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRevert(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_revert_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Revert_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_DeleteRowFromTable(QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        return vqsqlrelationaltablemodel->deleteRowFromTable(static_cast<int>(row));
    } else {
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::deleteRowFromTable called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperDeleteRowFromTable(QSqlRelationalTableModel* self, int row) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        return vqsqlrelationaltablemodel->QSqlRelationalTableModel::deleteRowFromTable(static_cast<int>(row));
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::deleteRowFromTable called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnDeleteRowFromTable(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_deleterowfromtable_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_DeleteRowFromTable_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_IndexInQuery(const QSqlRelationalTableModel* self, const QModelIndex* item) {
    return new QModelIndex((self->*&VirtualQSqlRelationalTableModel::Base::indexInQuery)(*item));
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_SuperIndexInQuery(const QSqlRelationalTableModel* self, const QModelIndex* item) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        return new QModelIndex(vqsqlrelationaltablemodel->indexInQuery(*item));
    qFatal("Error: Protected virtual method QSqlRelationalTableModel::indexInQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnIndexInQuery(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_indexinquery_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_IndexInQuery_Callback>(slot);
}

// Derived class handler implementation
int QSqlRelationalTableModel_ColumnCount(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Base class handler implementation
int QSqlRelationalTableModel_SuperColumnCount(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnColumnCount(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_columncount_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_SetHeaderData(QSqlRelationalTableModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperSetHeaderData(QSqlRelationalTableModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QSqlRelationalTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetHeaderData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_setheaderdata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_InsertColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperInsertColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnInsertColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_insertcolumns_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_FetchMore(QSqlRelationalTableModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperFetchMore(QSqlRelationalTableModel* self, const QModelIndex* parent) {
    self->QSqlRelationalTableModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnFetchMore(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_fetchmore_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_CanFetchMore(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperCanFetchMore(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnCanFetchMore(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_canfetchmore_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QSqlRelationalTableModel_RoleNames(const QSqlRelationalTableModel* self) {
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
libqt_map /* of int to libqt_string */ QSqlRelationalTableModel_SuperRoleNames(const QSqlRelationalTableModel* self) {
    QHash<int, QByteArray> _ret = self->QSqlRelationalTableModel::roleNames();
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
void QSqlRelationalTableModel_OnRoleNames(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_rolenames_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_QueryChange(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        vqsqlrelationaltablemodel->queryChange();
    } else {
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::queryChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperQueryChange(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->QSqlRelationalTableModel::queryChange();
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::queryChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnQueryChange(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_querychange_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_QueryChange_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_Index(const QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_SuperIndex(const QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QSqlRelationalTableModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnIndex(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_index_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_Sibling(const QSqlRelationalTableModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_SuperSibling(const QSqlRelationalTableModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QSqlRelationalTableModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSibling(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_sibling_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_DropMimeData(QSqlRelationalTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperDropMimeData(QSqlRelationalTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnDropMimeData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_dropmimedata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QSqlRelationalTableModel_ItemData(const QSqlRelationalTableModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QSqlRelationalTableModel_SuperItemData(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QSqlRelationalTableModel::itemData(*index);
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
void QSqlRelationalTableModel_OnItemData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_itemdata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_SetItemData(QSqlRelationalTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperSetItemData(QSqlRelationalTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QSqlRelationalTableModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetItemData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_setitemdata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSqlRelationalTableModel_MimeTypes(const QSqlRelationalTableModel* self) {
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
libqt_list /* of libqt_string */ QSqlRelationalTableModel_SuperMimeTypes(const QSqlRelationalTableModel* self) {
    QList<QString> _ret = self->QSqlRelationalTableModel::mimeTypes();
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
void QSqlRelationalTableModel_OnMimeTypes(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_mimetypes_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QSqlRelationalTableModel_MimeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QSqlRelationalTableModel_SuperMimeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QSqlRelationalTableModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMimeData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_mimedata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_CanDropMimeData(const QSqlRelationalTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperCanDropMimeData(const QSqlRelationalTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QSqlRelationalTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnCanDropMimeData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_candropmimedata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QSqlRelationalTableModel_SupportedDropActions(const QSqlRelationalTableModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QSqlRelationalTableModel_SuperSupportedDropActions(const QSqlRelationalTableModel* self) {
    return static_cast<int>(self->QSqlRelationalTableModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSupportedDropActions(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_supporteddropactions_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QSqlRelationalTableModel_SupportedDragActions(const QSqlRelationalTableModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QSqlRelationalTableModel_SuperSupportedDragActions(const QSqlRelationalTableModel* self) {
    return static_cast<int>(self->QSqlRelationalTableModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSupportedDragActions(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_supporteddragactions_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_MoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperMoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QSqlRelationalTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMoveRows(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_moverows_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_MoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperMoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QSqlRelationalTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_movecolumns_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_Buddy(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_SuperBuddy(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QSqlRelationalTableModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBuddy(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_buddy_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_Match(const QSqlRelationalTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_SuperMatch(const QSqlRelationalTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QSqlRelationalTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QSqlRelationalTableModel_OnMatch(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_match_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QSqlRelationalTableModel_Span(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QSqlRelationalTableModel_SuperSpan(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    return new QSize(self->QSqlRelationalTableModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSpan(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_span_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Span_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_MultiData(const QSqlRelationalTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperMultiData(const QSqlRelationalTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QSqlRelationalTableModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMultiData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_multidata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_ResetInternalData(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        vqsqlrelationaltablemodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperResetInternalData(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->QSqlRelationalTableModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnResetInternalData(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_resetinternaldata_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_Event(QSqlRelationalTableModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperEvent(QSqlRelationalTableModel* self, QEvent* event) {
    return self->QSqlRelationalTableModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEvent(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_event_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSqlRelationalTableModel_EventFilter(QSqlRelationalTableModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSqlRelationalTableModel_SuperEventFilter(QSqlRelationalTableModel* self, QObject* watched, QEvent* event) {
    return self->QSqlRelationalTableModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEventFilter(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_eventfilter_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_TimerEvent(QSqlRelationalTableModel* self, QTimerEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        vqsqlrelationaltablemodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperTimerEvent(QSqlRelationalTableModel* self, QTimerEvent* event) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->QSqlRelationalTableModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnTimerEvent(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_timerevent_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_ChildEvent(QSqlRelationalTableModel* self, QChildEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        vqsqlrelationaltablemodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperChildEvent(QSqlRelationalTableModel* self, QChildEvent* event) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->QSqlRelationalTableModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnChildEvent(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_childevent_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_CustomEvent(QSqlRelationalTableModel* self, QEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        vqsqlrelationaltablemodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperCustomEvent(QSqlRelationalTableModel* self, QEvent* event) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->QSqlRelationalTableModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnCustomEvent(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_customevent_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_ConnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        vqsqlrelationaltablemodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperConnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->QSqlRelationalTableModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnConnectNotify(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_connectnotify_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSqlRelationalTableModel_DisconnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel) {
        vqsqlrelationaltablemodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_SuperDisconnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->QSqlRelationalTableModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSqlRelationalTableModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnDisconnectNotify(QSqlRelationalTableModel* self, intptr_t slot) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self))
        vqsqlrelationaltablemodel->qsqlrelationaltablemodel_disconnectnotify_callback = reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_SetPrimaryKey(QSqlRelationalTableModel* self, const QSqlIndex* key) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::setPrimaryKey(*key);
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::setPrimaryKey called without a directly constructed type");
}

// Derived class handler implementation
QSqlRecord* QSqlRelationalTableModel_PrimaryValues(const QSqlRelationalTableModel* self, int row) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        return new QSqlRecord(vqsqlrelationaltablemodel->primaryValues(static_cast<int>(row)));
    qFatal("Error: Protected method QSqlRelationalTableModel::primaryValues called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_BeginInsertRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_EndInsertRows(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::endInsertRows();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_BeginRemoveRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_EndRemoveRows(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_BeginInsertColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_EndInsertColumns(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_BeginRemoveColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_EndRemoveColumns(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_BeginResetModel(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::beginResetModel();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_EndResetModel(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::endResetModel();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_SetLastError(QSqlRelationalTableModel* self, const QSqlError* errorVal) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::setLastError(*errorVal);
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::setLastError called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_CreateIndex(const QSqlRelationalTableModel* self, int row, int column) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self)))
        return new QModelIndex(vqsqlrelationaltablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QSqlRelationalTableModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_EncodeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlRelationalTableModel_DecodeData(QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        return vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlRelationalTableModel_BeginMoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        return vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_EndMoveRows(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::endMoveRows();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlRelationalTableModel_BeginMoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        return vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_EndMoveColumns(QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_ChangePersistentIndex(QSqlRelationalTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlRelationalTableModel_ChangePersistentIndexList(QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self)) {
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
        vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_PersistentIndexList(const QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self))) {
        QList<QModelIndex> _ret = vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::persistentIndexList();
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
        qFatal("Error: Protected method QSqlRelationalTableModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSqlRelationalTableModel_Sender(const QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self))) {
        return vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::sender();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSqlRelationalTableModel_SenderSignalIndex(const QSqlRelationalTableModel* self) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self))) {
        return vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSqlRelationalTableModel_Receivers(const QSqlRelationalTableModel* self, const char* signal) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self))) {
        return vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::receivers(signal);
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlRelationalTableModel_IsSignalConnected(const QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    if (auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self))) {
        return vqsqlrelationaltablemodel->VirtualQSqlRelationalTableModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSqlRelationalTableModel::isSignalConnected called without a directly constructed type");
}

void QSqlRelationalTableModel_Delete(QSqlRelationalTableModel* self) {
    delete self;
}
