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
#include <QSqlTableModel>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qsqltablemodel.h>
#include "libqsqltablemodel.h"
#include "libqsqltablemodel.hxx"

QSqlTableModel* QSqlTableModel_new() {
    return new VirtualQSqlTableModel();
}

QSqlTableModel* QSqlTableModel_new2(QObject* parent) {
    return new VirtualQSqlTableModel(parent);
}

QSqlTableModel* QSqlTableModel_new3(QObject* parent, const QSqlDatabase* db) {
    return new VirtualQSqlTableModel(parent, *db);
}

QMetaObject* QSqlTableModel_MetaObject(const QSqlTableModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSqlTableModel_Metacast(QSqlTableModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSqlTableModel_Metacall(QSqlTableModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSqlTableModel_Tr(const char* s) {
    auto _ret = QSqlTableModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSqlTableModel_SetTable(QSqlTableModel* self, const libqt_string tableName) {
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    self->setTable(tableName_QString);
}

libqt_string QSqlTableModel_TableName(const QSqlTableModel* self) {
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

int QSqlTableModel_Flags(const QSqlTableModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

QSqlRecord* QSqlTableModel_Record(const QSqlTableModel* self) {
    return new QSqlRecord(self->record());
}

QSqlRecord* QSqlTableModel_Record2(const QSqlTableModel* self, int row) {
    return new QSqlRecord(self->record(static_cast<int>(row)));
}

QVariant* QSqlTableModel_Data(const QSqlTableModel* self, const QModelIndex* idx, int role) {
    return new QVariant(self->data(*idx, static_cast<int>(role)));
}

bool QSqlTableModel_SetData(QSqlTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

bool QSqlTableModel_ClearItemData(QSqlTableModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

QVariant* QSqlTableModel_HeaderData(const QSqlTableModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QSqlTableModel_IsDirty(const QSqlTableModel* self) {
    return self->isDirty();
}

bool QSqlTableModel_IsDirty2(const QSqlTableModel* self, const QModelIndex* index) {
    return self->isDirty(*index);
}

void QSqlTableModel_Clear(QSqlTableModel* self) {
    self->clear();
}

void QSqlTableModel_SetEditStrategy(QSqlTableModel* self, int strategy) {
    self->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
}

int QSqlTableModel_EditStrategy(const QSqlTableModel* self) {
    return static_cast<int>(self->editStrategy());
}

QSqlIndex* QSqlTableModel_PrimaryKey(const QSqlTableModel* self) {
    return new QSqlIndex(self->primaryKey());
}

QSqlDatabase* QSqlTableModel_Database(const QSqlTableModel* self) {
    return new QSqlDatabase(self->database());
}

int QSqlTableModel_FieldIndex(const QSqlTableModel* self, const libqt_string fieldName) {
    QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
    return self->fieldIndex(fieldName_QString);
}

void QSqlTableModel_Sort(QSqlTableModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QSqlTableModel_SetSort(QSqlTableModel* self, int column, int order) {
    self->setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

libqt_string QSqlTableModel_Filter(const QSqlTableModel* self) {
    auto _ret = self->filter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSqlTableModel_SetFilter(QSqlTableModel* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->setFilter(filter_QString);
}

int QSqlTableModel_RowCount(const QSqlTableModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

bool QSqlTableModel_RemoveColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSqlTableModel_RemoveRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSqlTableModel_InsertRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSqlTableModel_InsertRecord(QSqlTableModel* self, int row, const QSqlRecord* record) {
    return self->insertRecord(static_cast<int>(row), *record);
}

bool QSqlTableModel_SetRecord(QSqlTableModel* self, int row, const QSqlRecord* record) {
    return self->setRecord(static_cast<int>(row), *record);
}

void QSqlTableModel_RevertRow(QSqlTableModel* self, int row) {
    self->revertRow(static_cast<int>(row));
}

bool QSqlTableModel_Select(QSqlTableModel* self) {
    return self->select();
}

bool QSqlTableModel_SelectRow(QSqlTableModel* self, int row) {
    return self->selectRow(static_cast<int>(row));
}

bool QSqlTableModel_Submit(QSqlTableModel* self) {
    return self->submit();
}

void QSqlTableModel_Revert(QSqlTableModel* self) {
    self->revert();
}

bool QSqlTableModel_SubmitAll(QSqlTableModel* self) {
    return self->submitAll();
}

void QSqlTableModel_RevertAll(QSqlTableModel* self) {
    self->revertAll();
}

void QSqlTableModel_PrimeInsert(QSqlTableModel* self, int row, QSqlRecord* record) {
    self->primeInsert(static_cast<int>(row), *record);
}

void QSqlTableModel_Connect_PrimeInsert(QSqlTableModel* self, intptr_t slot) {
    void (*slotFunc)(QSqlTableModel*, int, QSqlRecord*) = reinterpret_cast<void (*)(QSqlTableModel*, int, QSqlRecord*)>(slot);
    QSqlTableModel::connect(self,
                            static_cast<void (QSqlTableModel::*)(int, QSqlRecord&)>(&QSqlTableModel::primeInsert),
                            [self, slotFunc](int row, QSqlRecord& record) {
                                int sigval1 = row;
                                QSqlRecord& record_ret = record;
                                // Cast returned reference into pointer
                                QSqlRecord* sigval2 = &record_ret;
                                slotFunc(self, sigval1, sigval2);
                            });
}

void QSqlTableModel_BeforeInsert(QSqlTableModel* self, QSqlRecord* record) {
    self->beforeInsert(*record);
}

void QSqlTableModel_Connect_BeforeInsert(QSqlTableModel* self, intptr_t slot) {
    void (*slotFunc)(QSqlTableModel*, QSqlRecord*) = reinterpret_cast<void (*)(QSqlTableModel*, QSqlRecord*)>(slot);
    QSqlTableModel::connect(self,
                            static_cast<void (QSqlTableModel::*)(QSqlRecord&)>(&QSqlTableModel::beforeInsert),
                            [self, slotFunc](QSqlRecord& record) {
                                QSqlRecord& record_ret = record;
                                // Cast returned reference into pointer
                                QSqlRecord* sigval1 = &record_ret;
                                slotFunc(self, sigval1);
                            });
}

void QSqlTableModel_BeforeUpdate(QSqlTableModel* self, int row, QSqlRecord* record) {
    self->beforeUpdate(static_cast<int>(row), *record);
}

void QSqlTableModel_Connect_BeforeUpdate(QSqlTableModel* self, intptr_t slot) {
    void (*slotFunc)(QSqlTableModel*, int, QSqlRecord*) = reinterpret_cast<void (*)(QSqlTableModel*, int, QSqlRecord*)>(slot);
    QSqlTableModel::connect(self,
                            static_cast<void (QSqlTableModel::*)(int, QSqlRecord&)>(&QSqlTableModel::beforeUpdate),
                            [self, slotFunc](int row, QSqlRecord& record) {
                                int sigval1 = row;
                                QSqlRecord& record_ret = record;
                                // Cast returned reference into pointer
                                QSqlRecord* sigval2 = &record_ret;
                                slotFunc(self, sigval1, sigval2);
                            });
}

void QSqlTableModel_BeforeDelete(QSqlTableModel* self, int row) {
    self->beforeDelete(static_cast<int>(row));
}

void QSqlTableModel_Connect_BeforeDelete(QSqlTableModel* self, intptr_t slot) {
    void (*slotFunc)(QSqlTableModel*, int) = reinterpret_cast<void (*)(QSqlTableModel*, int)>(slot);
    QSqlTableModel::connect(self,
                            static_cast<void (QSqlTableModel::*)(int)>(&QSqlTableModel::beforeDelete),
                            [self, slotFunc](int row) {
                                int sigval1 = row;
                                slotFunc(self, sigval1);
                            });
}

bool QSqlTableModel_UpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        return vqsqltablemodel->updateRowInTable(static_cast<int>(row), *values);
    }
    qFatal("Error: Protected method QSqlTableModel::updateRowInTable called without a directly constructed type");
}

bool QSqlTableModel_InsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        return vqsqltablemodel->insertRowIntoTable(*values);
    }
    qFatal("Error: Protected method QSqlTableModel::insertRowIntoTable called without a directly constructed type");
}

bool QSqlTableModel_DeleteRowFromTable(QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        return vqsqltablemodel->deleteRowFromTable(static_cast<int>(row));
    }
    qFatal("Error: Protected method QSqlTableModel::deleteRowFromTable called without a directly constructed type");
}

libqt_string QSqlTableModel_OrderByClause(const QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        auto _ret = vqsqltablemodel->orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method QSqlTableModel::orderByClause called without a directly constructed type");
}

libqt_string QSqlTableModel_SelectStatement(const QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        auto _ret = vqsqltablemodel->selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method QSqlTableModel::selectStatement called without a directly constructed type");
}

QModelIndex* QSqlTableModel_IndexInQuery(const QSqlTableModel* self, const QModelIndex* item) {
    auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        return new QModelIndex(vqsqltablemodel->indexInQuery(*item));
    }
    qFatal("Error: Protected method QSqlTableModel::indexInQuery called without a directly constructed type");
}

libqt_string QSqlTableModel_Tr2(const char* s, const char* c) {
    auto _ret = QSqlTableModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlTableModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSqlTableModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSqlTableModel_SuperMetaObject(const QSqlTableModel* self) {
    return (QMetaObject*)self->QSqlTableModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMetaObject(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_metaobject_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSqlTableModel_SuperMetacast(QSqlTableModel* self, const char* param1) {
    return self->QSqlTableModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMetacast(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_metacast_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSqlTableModel_SuperMetacall(QSqlTableModel* self, int param1, int param2, void** param3) {
    return self->QSqlTableModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMetacall(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_metacall_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void QSqlTableModel_SuperSetTable(QSqlTableModel* self, const libqt_string tableName) {
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    self->QSqlTableModel::setTable(tableName_QString);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetTable(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_settable_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetTable_Callback>(slot);
}

// Base class handler implementation
int QSqlTableModel_SuperFlags(const QSqlTableModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QSqlTableModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnFlags(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_flags_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Flags_Callback>(slot);
}

// Base class handler implementation
QVariant* QSqlTableModel_SuperData(const QSqlTableModel* self, const QModelIndex* idx, int role) {
    return new QVariant(self->QSqlTableModel::data(*idx, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_data_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Data_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperSetData(QSqlTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QSqlTableModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_setdata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetData_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperClearItemData(QSqlTableModel* self, const QModelIndex* index) {
    return self->QSqlTableModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnClearItemData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_clearitemdata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ClearItemData_Callback>(slot);
}

// Base class handler implementation
QVariant* QSqlTableModel_SuperHeaderData(const QSqlTableModel* self, int section, int orientation, int role) {
    return new QVariant(self->QSqlTableModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnHeaderData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_headerdata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
void QSqlTableModel_SuperClear(QSqlTableModel* self) {
    self->QSqlTableModel::clear();
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnClear(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_clear_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Clear_Callback>(slot);
}

// Base class handler implementation
void QSqlTableModel_SuperSetEditStrategy(QSqlTableModel* self, int strategy) {
    self->QSqlTableModel::setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetEditStrategy(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_seteditstrategy_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetEditStrategy_Callback>(slot);
}

// Base class handler implementation
void QSqlTableModel_SuperSort(QSqlTableModel* self, int column, int order) {
    self->QSqlTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSort(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_sort_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Sort_Callback>(slot);
}

// Base class handler implementation
void QSqlTableModel_SuperSetSort(QSqlTableModel* self, int column, int order) {
    self->QSqlTableModel::setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetSort(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_setsort_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetSort_Callback>(slot);
}

// Base class handler implementation
void QSqlTableModel_SuperSetFilter(QSqlTableModel* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->QSqlTableModel::setFilter(filter_QString);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetFilter(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_setfilter_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetFilter_Callback>(slot);
}

// Base class handler implementation
int QSqlTableModel_SuperRowCount(const QSqlTableModel* self, const QModelIndex* parent) {
    return self->QSqlTableModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRowCount(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_rowcount_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RowCount_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperRemoveColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->QSqlTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRemoveColumns(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_removecolumns_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RemoveColumns_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperRemoveRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->QSqlTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRemoveRows(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_removerows_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RemoveRows_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperInsertRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->QSqlTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnInsertRows(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_insertrows_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_InsertRows_Callback>(slot);
}

// Base class handler implementation
void QSqlTableModel_SuperRevertRow(QSqlTableModel* self, int row) {
    self->QSqlTableModel::revertRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRevertRow(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_revertrow_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RevertRow_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperSelect(QSqlTableModel* self) {
    return self->QSqlTableModel::select();
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSelect(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_select_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Select_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperSelectRow(QSqlTableModel* self, int row) {
    return self->QSqlTableModel::selectRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSelectRow(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_selectrow_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SelectRow_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperSubmit(QSqlTableModel* self) {
    return self->QSqlTableModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSubmit(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_submit_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Submit_Callback>(slot);
}

// Base class handler implementation
void QSqlTableModel_SuperRevert(QSqlTableModel* self) {
    self->QSqlTableModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRevert(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_revert_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Revert_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperUpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        return vqsqltablemodel->QSqlTableModel::updateRowInTable(static_cast<int>(row), *values);
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::updateRowInTable called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnUpdateRowInTable(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_updaterowintable_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_UpdateRowInTable_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperInsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        return vqsqltablemodel->QSqlTableModel::insertRowIntoTable(*values);
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::insertRowIntoTable called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnInsertRowIntoTable(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_insertrowintotable_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_InsertRowIntoTable_Callback>(slot);
}

// Base class handler implementation
bool QSqlTableModel_SuperDeleteRowFromTable(QSqlTableModel* self, int row) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        return vqsqltablemodel->QSqlTableModel::deleteRowFromTable(static_cast<int>(row));
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::deleteRowFromTable called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnDeleteRowFromTable(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_deleterowfromtable_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_DeleteRowFromTable_Callback>(slot);
}

// Base class handler implementation
libqt_string QSqlTableModel_SuperOrderByClause(const QSqlTableModel* self) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self))) {
        auto _ret = vqsqltablemodel->QSqlTableModel::orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::orderByClause called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnOrderByClause(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_orderbyclause_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_OrderByClause_Callback>(slot);
}

// Base class handler implementation
libqt_string QSqlTableModel_SuperSelectStatement(const QSqlTableModel* self) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self))) {
        auto _ret = vqsqltablemodel->QSqlTableModel::selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::selectStatement called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSelectStatement(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_selectstatement_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SelectStatement_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QSqlTableModel_SuperIndexInQuery(const QSqlTableModel* self, const QModelIndex* item) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        return new QModelIndex(vqsqltablemodel->indexInQuery(*item));
    qFatal("Error: Protected virtual method QSqlTableModel::indexInQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnIndexInQuery(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_indexinquery_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_IndexInQuery_Callback>(slot);
}

// Derived class handler implementation
int QSqlTableModel_ColumnCount(const QSqlTableModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Base class handler implementation
int QSqlTableModel_SuperColumnCount(const QSqlTableModel* self, const QModelIndex* parent) {
    return self->QSqlTableModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnColumnCount(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_columncount_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_SetHeaderData(QSqlTableModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QSqlTableModel_SuperSetHeaderData(QSqlTableModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QSqlTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetHeaderData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_setheaderdata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_InsertColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QSqlTableModel_SuperInsertColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->QSqlTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnInsertColumns(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_insertcolumns_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_FetchMore(QSqlTableModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QSqlTableModel_SuperFetchMore(QSqlTableModel* self, const QModelIndex* parent) {
    self->QSqlTableModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnFetchMore(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_fetchmore_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_CanFetchMore(const QSqlTableModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QSqlTableModel_SuperCanFetchMore(const QSqlTableModel* self, const QModelIndex* parent) {
    return self->QSqlTableModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnCanFetchMore(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_canfetchmore_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QSqlTableModel_RoleNames(const QSqlTableModel* self) {
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
libqt_map /* of int to libqt_string */ QSqlTableModel_SuperRoleNames(const QSqlTableModel* self) {
    QHash<int, QByteArray> _ret = self->QSqlTableModel::roleNames();
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
void QSqlTableModel_OnRoleNames(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_rolenames_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_QueryChange(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        vqsqltablemodel->queryChange();
    } else {
        qFatal("Error: Protected virtual method QSqlTableModel::queryChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlTableModel_SuperQueryChange(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->QSqlTableModel::queryChange();
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::queryChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnQueryChange(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_querychange_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_QueryChange_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_Index(const QSqlTableModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* QSqlTableModel_SuperIndex(const QSqlTableModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QSqlTableModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnIndex(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_index_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_Sibling(const QSqlTableModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QSqlTableModel_SuperSibling(const QSqlTableModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QSqlTableModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSibling(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_sibling_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_DropMimeData(QSqlTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QSqlTableModel_SuperDropMimeData(QSqlTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QSqlTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnDropMimeData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_dropmimedata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QSqlTableModel_ItemData(const QSqlTableModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QSqlTableModel_SuperItemData(const QSqlTableModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QSqlTableModel::itemData(*index);
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
void QSqlTableModel_OnItemData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_itemdata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_SetItemData(QSqlTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QSqlTableModel_SuperSetItemData(QSqlTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QSqlTableModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetItemData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_setitemdata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSqlTableModel_MimeTypes(const QSqlTableModel* self) {
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
libqt_list /* of libqt_string */ QSqlTableModel_SuperMimeTypes(const QSqlTableModel* self) {
    QList<QString> _ret = self->QSqlTableModel::mimeTypes();
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
void QSqlTableModel_OnMimeTypes(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_mimetypes_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QSqlTableModel_MimeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QSqlTableModel_SuperMimeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QSqlTableModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMimeData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_mimedata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_CanDropMimeData(const QSqlTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QSqlTableModel_SuperCanDropMimeData(const QSqlTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QSqlTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnCanDropMimeData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_candropmimedata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QSqlTableModel_SupportedDropActions(const QSqlTableModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QSqlTableModel_SuperSupportedDropActions(const QSqlTableModel* self) {
    return static_cast<int>(self->QSqlTableModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSupportedDropActions(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_supporteddropactions_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QSqlTableModel_SupportedDragActions(const QSqlTableModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QSqlTableModel_SuperSupportedDragActions(const QSqlTableModel* self) {
    return static_cast<int>(self->QSqlTableModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSupportedDragActions(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_supporteddragactions_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_MoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QSqlTableModel_SuperMoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QSqlTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMoveRows(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_moverows_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_MoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QSqlTableModel_SuperMoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QSqlTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMoveColumns(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_movecolumns_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_Buddy(const QSqlTableModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QSqlTableModel_SuperBuddy(const QSqlTableModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QSqlTableModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBuddy(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_buddy_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlTableModel_Match(const QSqlTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QSqlTableModel_SuperMatch(const QSqlTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QSqlTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QSqlTableModel_OnMatch(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_match_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QSqlTableModel_Span(const QSqlTableModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QSqlTableModel_SuperSpan(const QSqlTableModel* self, const QModelIndex* index) {
    return new QSize(self->QSqlTableModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSpan(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_span_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Span_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_MultiData(const QSqlTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QSqlTableModel_SuperMultiData(const QSqlTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QSqlTableModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMultiData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        vqsqltablemodel->qsqltablemodel_multidata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_ResetInternalData(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        vqsqltablemodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QSqlTableModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlTableModel_SuperResetInternalData(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->QSqlTableModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnResetInternalData(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_resetinternaldata_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_Event(QSqlTableModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSqlTableModel_SuperEvent(QSqlTableModel* self, QEvent* event) {
    return self->QSqlTableModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEvent(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_event_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSqlTableModel_EventFilter(QSqlTableModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSqlTableModel_SuperEventFilter(QSqlTableModel* self, QObject* watched, QEvent* event) {
    return self->QSqlTableModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEventFilter(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_eventfilter_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_TimerEvent(QSqlTableModel* self, QTimerEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        vqsqltablemodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlTableModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlTableModel_SuperTimerEvent(QSqlTableModel* self, QTimerEvent* event) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->QSqlTableModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnTimerEvent(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_timerevent_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_ChildEvent(QSqlTableModel* self, QChildEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        vqsqltablemodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlTableModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlTableModel_SuperChildEvent(QSqlTableModel* self, QChildEvent* event) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->QSqlTableModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnChildEvent(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_childevent_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_CustomEvent(QSqlTableModel* self, QEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        vqsqltablemodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlTableModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlTableModel_SuperCustomEvent(QSqlTableModel* self, QEvent* event) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->QSqlTableModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnCustomEvent(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_customevent_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_ConnectNotify(QSqlTableModel* self, const QMetaMethod* signal) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        vqsqltablemodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSqlTableModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlTableModel_SuperConnectNotify(QSqlTableModel* self, const QMetaMethod* signal) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->QSqlTableModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnConnectNotify(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_connectnotify_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSqlTableModel_DisconnectNotify(QSqlTableModel* self, const QMetaMethod* signal) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel) {
        vqsqltablemodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSqlTableModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlTableModel_SuperDisconnectNotify(QSqlTableModel* self, const QMetaMethod* signal) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->QSqlTableModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSqlTableModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnDisconnectNotify(QSqlTableModel* self, intptr_t slot) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self))
        vqsqltablemodel->qsqltablemodel_disconnectnotify_callback = reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSqlTableModel_SetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::setPrimaryKey(*key);
    } else
        qFatal("Error: Protected method QSqlTableModel::setPrimaryKey called without a directly constructed type");
}

// Derived class handler implementation
QSqlRecord* QSqlTableModel_PrimaryValues(const QSqlTableModel* self, int row) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        return new QSqlRecord(vqsqltablemodel->primaryValues(static_cast<int>(row)));
    qFatal("Error: Protected method QSqlTableModel::primaryValues called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_BeginInsertRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlTableModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_EndInsertRows(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::endInsertRows();
    } else
        qFatal("Error: Protected method QSqlTableModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_BeginRemoveRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlTableModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_EndRemoveRows(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QSqlTableModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_BeginInsertColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlTableModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_EndInsertColumns(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QSqlTableModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_BeginRemoveColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QSqlTableModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_EndRemoveColumns(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QSqlTableModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_BeginResetModel(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::beginResetModel();
    } else
        qFatal("Error: Protected method QSqlTableModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_EndResetModel(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::endResetModel();
    } else
        qFatal("Error: Protected method QSqlTableModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_SetLastError(QSqlTableModel* self, const QSqlError* errorVal) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::setLastError(*errorVal);
    } else
        qFatal("Error: Protected method QSqlTableModel::setLastError called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_CreateIndex(const QSqlTableModel* self, int row, int column) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self)))
        return new QModelIndex(vqsqltablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QSqlTableModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_EncodeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqsqltablemodel->VirtualQSqlTableModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QSqlTableModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlTableModel_DecodeData(QSqlTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        return vqsqltablemodel->VirtualQSqlTableModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QSqlTableModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlTableModel_BeginMoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        return vqsqltablemodel->VirtualQSqlTableModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QSqlTableModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_EndMoveRows(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::endMoveRows();
    } else
        qFatal("Error: Protected method QSqlTableModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlTableModel_BeginMoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        return vqsqltablemodel->VirtualQSqlTableModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QSqlTableModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_EndMoveColumns(QSqlTableModel* self) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QSqlTableModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_ChangePersistentIndex(QSqlTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
        vqsqltablemodel->VirtualQSqlTableModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QSqlTableModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QSqlTableModel_ChangePersistentIndexList(QSqlTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self)) {
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
        vqsqltablemodel->VirtualQSqlTableModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QSqlTableModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QSqlTableModel_PersistentIndexList(const QSqlTableModel* self) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self))) {
        QList<QModelIndex> _ret = vqsqltablemodel->VirtualQSqlTableModel::persistentIndexList();
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
        qFatal("Error: Protected method QSqlTableModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSqlTableModel_Sender(const QSqlTableModel* self) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self))) {
        return vqsqltablemodel->VirtualQSqlTableModel::sender();
    } else
        qFatal("Error: Protected method QSqlTableModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSqlTableModel_SenderSignalIndex(const QSqlTableModel* self) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self))) {
        return vqsqltablemodel->VirtualQSqlTableModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSqlTableModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSqlTableModel_Receivers(const QSqlTableModel* self, const char* signal) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self))) {
        return vqsqltablemodel->VirtualQSqlTableModel::receivers(signal);
    } else
        qFatal("Error: Protected method QSqlTableModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlTableModel_IsSignalConnected(const QSqlTableModel* self, const QMetaMethod* signal) {
    if (auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self))) {
        return vqsqltablemodel->VirtualQSqlTableModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSqlTableModel::isSignalConnected called without a directly constructed type");
}

void QSqlTableModel_Delete(QSqlTableModel* self) {
    delete self;
}
