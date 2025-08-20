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
#include <QByteArray>
#include <cstring>
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
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlTableModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlTableModel_OnMetacall(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Metacall_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSqlTableModel_QBaseMetacall(QSqlTableModel* self, int param1, int param2, void** param3) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Metacall_IsBase(true);
        return vqsqltablemodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlTableModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSqlTableModel_Tr(const char* s) {
    QString _ret = QSqlTableModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlTableModel_TableName(const QSqlTableModel* self) {
    QString _ret = self->tableName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSqlRecord* QSqlTableModel_Record(const QSqlTableModel* self) {
    return new QSqlRecord(self->record());
}

QSqlRecord* QSqlTableModel_Record2(const QSqlTableModel* self, int row) {
    return new QSqlRecord(self->record(static_cast<int>(row)));
}

bool QSqlTableModel_IsDirty(const QSqlTableModel* self) {
    return self->isDirty();
}

bool QSqlTableModel_IsDirty2(const QSqlTableModel* self, const QModelIndex* index) {
    return self->isDirty(*index);
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

libqt_string QSqlTableModel_Filter(const QSqlTableModel* self) {
    QString _ret = self->filter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSqlTableModel_InsertRecord(QSqlTableModel* self, int row, const QSqlRecord* record) {
    return self->insertRecord(static_cast<int>(row), *record);
}

bool QSqlTableModel_SetRecord(QSqlTableModel* self, int row, const QSqlRecord* record) {
    return self->setRecord(static_cast<int>(row), *record);
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
    QSqlTableModel::connect(self, &QSqlTableModel::primeInsert, [self, slotFunc](int row, QSqlRecord& record) {
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
    QSqlTableModel::connect(self, &QSqlTableModel::beforeInsert, [self, slotFunc](QSqlRecord& record) {
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
    QSqlTableModel::connect(self, &QSqlTableModel::beforeUpdate, [self, slotFunc](int row, QSqlRecord& record) {
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
    QSqlTableModel::connect(self, &QSqlTableModel::beforeDelete, [self, slotFunc](int row) {
        int sigval1 = row;
        slotFunc(self, sigval1);
    });
}

libqt_string QSqlTableModel_Tr2(const char* s, const char* c) {
    QString _ret = QSqlTableModel::tr(s, c);
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
    QString _ret = QSqlTableModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QSqlTableModel_SetTable(QSqlTableModel* self, const libqt_string tableName) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setTable(tableName_QString);
    } else {
        self->QSqlTableModel::setTable(tableName_QString);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseSetTable(QSqlTableModel* self, const libqt_string tableName) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetTable_IsBase(true);
        vqsqltablemodel->setTable(tableName_QString);
    } else {
        self->QSqlTableModel::setTable(tableName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetTable(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetTable_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetTable_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlTableModel_Flags(const QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return static_cast<int>(vqsqltablemodel->flags(*index));
    } else {
        return static_cast<int>(self->QSqlTableModel::flags(*index));
    }
}

// Base class handler implementation
int QSqlTableModel_QBaseFlags(const QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Flags_IsBase(true);
        return static_cast<int>(vqsqltablemodel->flags(*index));
    } else {
        return static_cast<int>(self->QSqlTableModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnFlags(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Flags_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSqlTableModel_Data(const QSqlTableModel* self, const QModelIndex* idx, int role) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QVariant(vqsqltablemodel->data(*idx, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlTableModel*)self)->data(*idx, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QSqlTableModel_QBaseData(const QSqlTableModel* self, const QModelIndex* idx, int role) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Data_IsBase(true);
        return new QVariant(vqsqltablemodel->data(*idx, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlTableModel*)self)->data(*idx, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnData(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Data_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_SetData(QSqlTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QSqlTableModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseSetData(QSqlTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetData_IsBase(true);
        return vqsqltablemodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QSqlTableModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetData(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_ClearItemData(QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->clearItemData(*index);
    } else {
        return self->QSqlTableModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseClearItemData(QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ClearItemData_IsBase(true);
        return vqsqltablemodel->clearItemData(*index);
    } else {
        return self->QSqlTableModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnClearItemData(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ClearItemData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSqlTableModel_HeaderData(const QSqlTableModel* self, int section, int orientation, int role) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QVariant(vqsqltablemodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlTableModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QSqlTableModel_QBaseHeaderData(const QSqlTableModel* self, int section, int orientation, int role) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_HeaderData_IsBase(true);
        return new QVariant(vqsqltablemodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlTableModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnHeaderData(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_HeaderData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_Clear(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->clear();
    } else {
        self->QSqlTableModel::clear();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseClear(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Clear_IsBase(true);
        vqsqltablemodel->clear();
    } else {
        self->QSqlTableModel::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnClear(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Clear_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_SetEditStrategy(QSqlTableModel* self, int strategy) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
    } else {
        self->QSqlTableModel::setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseSetEditStrategy(QSqlTableModel* self, int strategy) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetEditStrategy_IsBase(true);
        vqsqltablemodel->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
    } else {
        self->QSqlTableModel::setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetEditStrategy(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetEditStrategy_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetEditStrategy_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_Sort(QSqlTableModel* self, int column, int order) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseSort(QSqlTableModel* self, int column, int order) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Sort_IsBase(true);
        vqsqltablemodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSort(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Sort_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_SetSort(QSqlTableModel* self, int column, int order) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlTableModel::setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseSetSort(QSqlTableModel* self, int column, int order) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetSort_IsBase(true);
        vqsqltablemodel->setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlTableModel::setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetSort(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetSort_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetSort_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_SetFilter(QSqlTableModel* self, const libqt_string filter) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setFilter(filter_QString);
    } else {
        self->QSqlTableModel::setFilter(filter_QString);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseSetFilter(QSqlTableModel* self, const libqt_string filter) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetFilter_IsBase(true);
        vqsqltablemodel->setFilter(filter_QString);
    } else {
        self->QSqlTableModel::setFilter(filter_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetFilter(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetFilter_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlTableModel_RowCount(const QSqlTableModel* self, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->rowCount(*parent);
    } else {
        return self->QSqlTableModel::rowCount(*parent);
    }
}

// Base class handler implementation
int QSqlTableModel_QBaseRowCount(const QSqlTableModel* self, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RowCount_IsBase(true);
        return vqsqltablemodel->rowCount(*parent);
    } else {
        return self->QSqlTableModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRowCount(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RowCount_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_RemoveColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseRemoveColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RemoveColumns_IsBase(true);
        return vqsqltablemodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRemoveColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RemoveColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_RemoveRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseRemoveRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RemoveRows_IsBase(true);
        return vqsqltablemodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRemoveRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RemoveRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_InsertRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseInsertRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_InsertRows_IsBase(true);
        return vqsqltablemodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnInsertRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_InsertRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_RevertRow(QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->revertRow(static_cast<int>(row));
    } else {
        self->QSqlTableModel::revertRow(static_cast<int>(row));
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseRevertRow(QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RevertRow_IsBase(true);
        vqsqltablemodel->revertRow(static_cast<int>(row));
    } else {
        self->QSqlTableModel::revertRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRevertRow(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RevertRow_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RevertRow_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_Select(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->select();
    } else {
        return self->QSqlTableModel::select();
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseSelect(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Select_IsBase(true);
        return vqsqltablemodel->select();
    } else {
        return self->QSqlTableModel::select();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSelect(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Select_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Select_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_SelectRow(QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->selectRow(static_cast<int>(row));
    } else {
        return self->QSqlTableModel::selectRow(static_cast<int>(row));
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseSelectRow(QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SelectRow_IsBase(true);
        return vqsqltablemodel->selectRow(static_cast<int>(row));
    } else {
        return self->QSqlTableModel::selectRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSelectRow(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SelectRow_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SelectRow_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_Submit(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->submit();
    } else {
        return self->QSqlTableModel::submit();
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseSubmit(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Submit_IsBase(true);
        return vqsqltablemodel->submit();
    } else {
        return self->QSqlTableModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSubmit(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Submit_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_Revert(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->revert();
    } else {
        self->QSqlTableModel::revert();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseRevert(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Revert_IsBase(true);
        vqsqltablemodel->revert();
    } else {
        self->QSqlTableModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRevert(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Revert_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_UpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->updateRowInTable(static_cast<int>(row), *values);
    } else {
        return ((VirtualQSqlTableModel*)self)->updateRowInTable(static_cast<int>(row), *values);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseUpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_UpdateRowInTable_IsBase(true);
        return vqsqltablemodel->updateRowInTable(static_cast<int>(row), *values);
    } else {
        return ((VirtualQSqlTableModel*)self)->updateRowInTable(static_cast<int>(row), *values);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnUpdateRowInTable(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_UpdateRowInTable_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_UpdateRowInTable_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_InsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->insertRowIntoTable(*values);
    } else {
        return ((VirtualQSqlTableModel*)self)->insertRowIntoTable(*values);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseInsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_InsertRowIntoTable_IsBase(true);
        return vqsqltablemodel->insertRowIntoTable(*values);
    } else {
        return ((VirtualQSqlTableModel*)self)->insertRowIntoTable(*values);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnInsertRowIntoTable(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_InsertRowIntoTable_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_InsertRowIntoTable_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_DeleteRowFromTable(QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->deleteRowFromTable(static_cast<int>(row));
    } else {
        return ((VirtualQSqlTableModel*)self)->deleteRowFromTable(static_cast<int>(row));
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseDeleteRowFromTable(QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_DeleteRowFromTable_IsBase(true);
        return vqsqltablemodel->deleteRowFromTable(static_cast<int>(row));
    } else {
        return ((VirtualQSqlTableModel*)self)->deleteRowFromTable(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnDeleteRowFromTable(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_DeleteRowFromTable_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_DeleteRowFromTable_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QSqlTableModel_OrderByClause(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        QString _ret = vqsqltablemodel->orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQSqlTableModel*)self)->orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QSqlTableModel_QBaseOrderByClause(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_OrderByClause_IsBase(true);
        QString _ret = vqsqltablemodel->orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQSqlTableModel*)self)->orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnOrderByClause(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_OrderByClause_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_OrderByClause_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QSqlTableModel_SelectStatement(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        QString _ret = vqsqltablemodel->selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQSqlTableModel*)self)->selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QSqlTableModel_QBaseSelectStatement(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SelectStatement_IsBase(true);
        QString _ret = vqsqltablemodel->selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQSqlTableModel*)self)->selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSelectStatement(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SelectStatement_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SelectStatement_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_IndexInQuery(const QSqlTableModel* self, const QModelIndex* item) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QModelIndex(vqsqltablemodel->indexInQuery(*item));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QSqlTableModel_QBaseIndexInQuery(const QSqlTableModel* self, const QModelIndex* item) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_IndexInQuery_IsBase(true);
        return new QModelIndex(vqsqltablemodel->indexInQuery(*item));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnIndexInQuery(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_IndexInQuery_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_IndexInQuery_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlTableModel_ColumnCount(const QSqlTableModel* self, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->columnCount(*parent);
    } else {
        return self->QSqlTableModel::columnCount(*parent);
    }
}

// Base class handler implementation
int QSqlTableModel_QBaseColumnCount(const QSqlTableModel* self, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ColumnCount_IsBase(true);
        return vqsqltablemodel->columnCount(*parent);
    } else {
        return self->QSqlTableModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnColumnCount(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ColumnCount_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_SetHeaderData(QSqlTableModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QSqlTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseSetHeaderData(QSqlTableModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetHeaderData_IsBase(true);
        return vqsqltablemodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QSqlTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetHeaderData(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetHeaderData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_InsertColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseInsertColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_InsertColumns_IsBase(true);
        return vqsqltablemodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnInsertColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_InsertColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_FetchMore(QSqlTableModel* self, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->fetchMore(*parent);
    } else {
        self->QSqlTableModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseFetchMore(QSqlTableModel* self, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_FetchMore_IsBase(true);
        vqsqltablemodel->fetchMore(*parent);
    } else {
        self->QSqlTableModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnFetchMore(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_FetchMore_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_CanFetchMore(const QSqlTableModel* self, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->canFetchMore(*parent);
    } else {
        return self->QSqlTableModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseCanFetchMore(const QSqlTableModel* self, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_CanFetchMore_IsBase(true);
        return vqsqltablemodel->canFetchMore(*parent);
    } else {
        return self->QSqlTableModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnCanFetchMore(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_CanFetchMore_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QSqlTableModel_RoleNames(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        QHash<int, QByteArray> _ret = vqsqltablemodel->roleNames();
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
libqt_map /* of int to libqt_string */ QSqlTableModel_QBaseRoleNames(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqsqltablemodel->roleNames();
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
void QSqlTableModel_OnRoleNames(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_RoleNames_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_QueryChange(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->queryChange();
    } else {
        ((VirtualQSqlTableModel*)self)->queryChange();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseQueryChange(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_QueryChange_IsBase(true);
        vqsqltablemodel->queryChange();
    } else {
        ((VirtualQSqlTableModel*)self)->queryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnQueryChange(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_QueryChange_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_QueryChange_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_Index(const QSqlTableModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QModelIndex(vqsqltablemodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQSqlTableModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QSqlTableModel_QBaseIndex(const QSqlTableModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Index_IsBase(true);
        return new QModelIndex(vqsqltablemodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQSqlTableModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnIndex(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Index_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_Sibling(const QSqlTableModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QModelIndex(vqsqltablemodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQSqlTableModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QSqlTableModel_QBaseSibling(const QSqlTableModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Sibling_IsBase(true);
        return new QModelIndex(vqsqltablemodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQSqlTableModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSibling(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Sibling_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_DropMimeData(QSqlTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseDropMimeData(QSqlTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_DropMimeData_IsBase(true);
        return vqsqltablemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnDropMimeData(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_DropMimeData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QSqlTableModel_ItemData(const QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        QMap<int, QVariant> _ret = vqsqltablemodel->itemData(*index);
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QSqlTableModel_QBaseItemData(const QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqsqltablemodel->itemData(*index);
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
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnItemData(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ItemData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_SetItemData(QSqlTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->setItemData(*index, roles_QMap);
    } else {
        return self->QSqlTableModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseSetItemData(QSqlTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetItemData_IsBase(true);
        return vqsqltablemodel->setItemData(*index, roles_QMap);
    } else {
        return self->QSqlTableModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetItemData(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetItemData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSqlTableModel_MimeTypes(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        QList<QString> _ret = vqsqltablemodel->mimeTypes();
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
        QList<QString> _ret = self->QSqlTableModel::mimeTypes();
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
libqt_list /* of libqt_string */ QSqlTableModel_QBaseMimeTypes(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqsqltablemodel->mimeTypes();
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
        QList<QString> _ret = self->QSqlTableModel::mimeTypes();
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
void QSqlTableModel_OnMimeTypes(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MimeTypes_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QSqlTableModel_MimeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->mimeData(indexes_QList);
    } else {
        return self->QSqlTableModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QSqlTableModel_QBaseMimeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MimeData_IsBase(true);
        return vqsqltablemodel->mimeData(indexes_QList);
    } else {
        return self->QSqlTableModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMimeData(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MimeData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_CanDropMimeData(const QSqlTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseCanDropMimeData(const QSqlTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_CanDropMimeData_IsBase(true);
        return vqsqltablemodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnCanDropMimeData(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlTableModel_SupportedDropActions(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return static_cast<int>(vqsqltablemodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QSqlTableModel::supportedDropActions());
    }
}

// Base class handler implementation
int QSqlTableModel_QBaseSupportedDropActions(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqsqltablemodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QSqlTableModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSupportedDropActions(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlTableModel_SupportedDragActions(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return static_cast<int>(vqsqltablemodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QSqlTableModel::supportedDragActions());
    }
}

// Base class handler implementation
int QSqlTableModel_QBaseSupportedDragActions(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqsqltablemodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QSqlTableModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSupportedDragActions(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_MoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseMoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MoveRows_IsBase(true);
        return vqsqltablemodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMoveRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MoveRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_MoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseMoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MoveColumns_IsBase(true);
        return vqsqltablemodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMoveColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MoveColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_Buddy(const QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QModelIndex(vqsqltablemodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQSqlTableModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QSqlTableModel_QBaseBuddy(const QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Buddy_IsBase(true);
        return new QModelIndex(vqsqltablemodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQSqlTableModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBuddy(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Buddy_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlTableModel_Match(const QSqlTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        QList<QModelIndex> _ret = vqsqltablemodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QSqlTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QSqlTableModel_QBaseMatch(const QSqlTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqsqltablemodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QSqlTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QSqlTableModel_OnMatch(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Match_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSqlTableModel_Span(const QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QSize(vqsqltablemodel->span(*index));
    } else {
        return new QSize(((VirtualQSqlTableModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QSqlTableModel_QBaseSpan(const QSqlTableModel* self, const QModelIndex* index) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Span_IsBase(true);
        return new QSize(vqsqltablemodel->span(*index));
    } else {
        return new QSize(((VirtualQSqlTableModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSpan(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Span_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_MultiData(const QSqlTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->multiData(*index, *roleDataSpan);
    } else {
        self->QSqlTableModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseMultiData(const QSqlTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MultiData_IsBase(true);
        vqsqltablemodel->multiData(*index, *roleDataSpan);
    } else {
        self->QSqlTableModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnMultiData(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_MultiData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_ResetInternalData(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->resetInternalData();
    } else {
        ((VirtualQSqlTableModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseResetInternalData(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ResetInternalData_IsBase(true);
        vqsqltablemodel->resetInternalData();
    } else {
        ((VirtualQSqlTableModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnResetInternalData(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ResetInternalData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_Event(QSqlTableModel* self, QEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->event(event);
    } else {
        return self->QSqlTableModel::event(event);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseEvent(QSqlTableModel* self, QEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Event_IsBase(true);
        return vqsqltablemodel->event(event);
    } else {
        return self->QSqlTableModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEvent(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Event_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_EventFilter(QSqlTableModel* self, QObject* watched, QEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->eventFilter(watched, event);
    } else {
        return self->QSqlTableModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseEventFilter(QSqlTableModel* self, QObject* watched, QEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EventFilter_IsBase(true);
        return vqsqltablemodel->eventFilter(watched, event);
    } else {
        return self->QSqlTableModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEventFilter(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EventFilter_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_TimerEvent(QSqlTableModel* self, QTimerEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->timerEvent(event);
    } else {
        ((VirtualQSqlTableModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseTimerEvent(QSqlTableModel* self, QTimerEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_TimerEvent_IsBase(true);
        vqsqltablemodel->timerEvent(event);
    } else {
        ((VirtualQSqlTableModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnTimerEvent(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_TimerEvent_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_ChildEvent(QSqlTableModel* self, QChildEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->childEvent(event);
    } else {
        ((VirtualQSqlTableModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseChildEvent(QSqlTableModel* self, QChildEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ChildEvent_IsBase(true);
        vqsqltablemodel->childEvent(event);
    } else {
        ((VirtualQSqlTableModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnChildEvent(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ChildEvent_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_CustomEvent(QSqlTableModel* self, QEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->customEvent(event);
    } else {
        ((VirtualQSqlTableModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseCustomEvent(QSqlTableModel* self, QEvent* event) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_CustomEvent_IsBase(true);
        vqsqltablemodel->customEvent(event);
    } else {
        ((VirtualQSqlTableModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnCustomEvent(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_CustomEvent_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_ConnectNotify(QSqlTableModel* self, const QMetaMethod* signal) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->connectNotify(*signal);
    } else {
        ((VirtualQSqlTableModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseConnectNotify(QSqlTableModel* self, const QMetaMethod* signal) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ConnectNotify_IsBase(true);
        vqsqltablemodel->connectNotify(*signal);
    } else {
        ((VirtualQSqlTableModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnConnectNotify(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ConnectNotify_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_DisconnectNotify(QSqlTableModel* self, const QMetaMethod* signal) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlTableModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseDisconnectNotify(QSqlTableModel* self, const QMetaMethod* signal) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_DisconnectNotify_IsBase(true);
        vqsqltablemodel->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlTableModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnDisconnectNotify(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_SetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setPrimaryKey(*key);
    } else {
        ((VirtualQSqlTableModel*)self)->setPrimaryKey(*key);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseSetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetPrimaryKey_IsBase(true);
        vqsqltablemodel->setPrimaryKey(*key);
    } else {
        ((VirtualQSqlTableModel*)self)->setPrimaryKey(*key);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetPrimaryKey(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetPrimaryKey_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetPrimaryKey_Callback>(slot));
    }
}

// Derived class handler implementation
QSqlRecord* QSqlTableModel_PrimaryValues(const QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QSqlRecord(vqsqltablemodel->primaryValues(static_cast<int>(row)));
    }
    return {};
}

// Base class handler implementation
QSqlRecord* QSqlTableModel_QBasePrimaryValues(const QSqlTableModel* self, int row) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_PrimaryValues_IsBase(true);
        return new QSqlRecord(vqsqltablemodel->primaryValues(static_cast<int>(row)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnPrimaryValues(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_PrimaryValues_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_PrimaryValues_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_BeginInsertRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlTableModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseBeginInsertRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginInsertRows_IsBase(true);
        vqsqltablemodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlTableModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBeginInsertRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_EndInsertRows(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->endInsertRows();
    } else {
        ((VirtualQSqlTableModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseEndInsertRows(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndInsertRows_IsBase(true);
        vqsqltablemodel->endInsertRows();
    } else {
        ((VirtualQSqlTableModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEndInsertRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndInsertRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_BeginRemoveRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlTableModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseBeginRemoveRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginRemoveRows_IsBase(true);
        vqsqltablemodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlTableModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBeginRemoveRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_EndRemoveRows(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->endRemoveRows();
    } else {
        ((VirtualQSqlTableModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseEndRemoveRows(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndRemoveRows_IsBase(true);
        vqsqltablemodel->endRemoveRows();
    } else {
        ((VirtualQSqlTableModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEndRemoveRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_BeginInsertColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlTableModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseBeginInsertColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginInsertColumns_IsBase(true);
        vqsqltablemodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlTableModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBeginInsertColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_EndInsertColumns(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->endInsertColumns();
    } else {
        ((VirtualQSqlTableModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseEndInsertColumns(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndInsertColumns_IsBase(true);
        vqsqltablemodel->endInsertColumns();
    } else {
        ((VirtualQSqlTableModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEndInsertColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_BeginRemoveColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlTableModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseBeginRemoveColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginRemoveColumns_IsBase(true);
        vqsqltablemodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlTableModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBeginRemoveColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_EndRemoveColumns(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->endRemoveColumns();
    } else {
        ((VirtualQSqlTableModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseEndRemoveColumns(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndRemoveColumns_IsBase(true);
        vqsqltablemodel->endRemoveColumns();
    } else {
        ((VirtualQSqlTableModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEndRemoveColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_BeginResetModel(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->beginResetModel();
    } else {
        ((VirtualQSqlTableModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseBeginResetModel(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginResetModel_IsBase(true);
        vqsqltablemodel->beginResetModel();
    } else {
        ((VirtualQSqlTableModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBeginResetModel(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginResetModel_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_EndResetModel(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->endResetModel();
    } else {
        ((VirtualQSqlTableModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseEndResetModel(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndResetModel_IsBase(true);
        vqsqltablemodel->endResetModel();
    } else {
        ((VirtualQSqlTableModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEndResetModel(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndResetModel_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_SetLastError(QSqlTableModel* self, const QSqlError* errorVal) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setLastError(*errorVal);
    } else {
        ((VirtualQSqlTableModel*)self)->setLastError(*errorVal);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseSetLastError(QSqlTableModel* self, const QSqlError* errorVal) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetLastError_IsBase(true);
        vqsqltablemodel->setLastError(*errorVal);
    } else {
        ((VirtualQSqlTableModel*)self)->setLastError(*errorVal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetLastError(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SetLastError_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetLastError_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlTableModel_CreateIndex(const QSqlTableModel* self, int row, int column) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return new QModelIndex(vqsqltablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QSqlTableModel_QBaseCreateIndex(const QSqlTableModel* self, int row, int column) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqsqltablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnCreateIndex(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_CreateIndex_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_EncodeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQSqlTableModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseEncodeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EncodeData_IsBase(true);
        vqsqltablemodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQSqlTableModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEncodeData(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EncodeData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_DecodeData(QSqlTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQSqlTableModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseDecodeData(QSqlTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_DecodeData_IsBase(true);
        return vqsqltablemodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQSqlTableModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnDecodeData(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_DecodeData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_BeginMoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQSqlTableModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseBeginMoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginMoveRows_IsBase(true);
        return vqsqltablemodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQSqlTableModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBeginMoveRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_EndMoveRows(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->endMoveRows();
    } else {
        ((VirtualQSqlTableModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseEndMoveRows(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndMoveRows_IsBase(true);
        vqsqltablemodel->endMoveRows();
    } else {
        ((VirtualQSqlTableModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEndMoveRows(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndMoveRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_BeginMoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQSqlTableModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseBeginMoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginMoveColumns_IsBase(true);
        return vqsqltablemodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQSqlTableModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnBeginMoveColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_EndMoveColumns(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->endMoveColumns();
    } else {
        ((VirtualQSqlTableModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseEndMoveColumns(QSqlTableModel* self) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndMoveColumns_IsBase(true);
        vqsqltablemodel->endMoveColumns();
    } else {
        ((VirtualQSqlTableModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnEndMoveColumns(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_ChangePersistentIndex(QSqlTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQSqlTableModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseChangePersistentIndex(QSqlTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ChangePersistentIndex_IsBase(true);
        vqsqltablemodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQSqlTableModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnChangePersistentIndex(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlTableModel_ChangePersistentIndexList(QSqlTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
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
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQSqlTableModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QSqlTableModel_QBaseChangePersistentIndexList(QSqlTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
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
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ChangePersistentIndexList_IsBase(true);
        vqsqltablemodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQSqlTableModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnChangePersistentIndexList(QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlTableModel_PersistentIndexList(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        QList<QModelIndex> _ret = vqsqltablemodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQSqlTableModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QSqlTableModel_QBasePersistentIndexList(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqsqltablemodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQSqlTableModel*)self)->persistentIndexList();
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
void QSqlTableModel_OnPersistentIndexList(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSqlTableModel_Sender(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->sender();
    } else {
        return ((VirtualQSqlTableModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSqlTableModel_QBaseSender(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Sender_IsBase(true);
        return vqsqltablemodel->sender();
    } else {
        return ((VirtualQSqlTableModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSender(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Sender_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlTableModel_SenderSignalIndex(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->senderSignalIndex();
    } else {
        return ((VirtualQSqlTableModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSqlTableModel_QBaseSenderSignalIndex(const QSqlTableModel* self) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SenderSignalIndex_IsBase(true);
        return vqsqltablemodel->senderSignalIndex();
    } else {
        return ((VirtualQSqlTableModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSenderSignalIndex(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlTableModel_Receivers(const QSqlTableModel* self, const char* signal) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->receivers(signal);
    } else {
        return ((VirtualQSqlTableModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSqlTableModel_QBaseReceivers(const QSqlTableModel* self, const char* signal) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Receivers_IsBase(true);
        return vqsqltablemodel->receivers(signal);
    } else {
        return ((VirtualQSqlTableModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnReceivers(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_Receivers_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlTableModel_IsSignalConnected(const QSqlTableModel* self, const QMetaMethod* signal) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        return vqsqltablemodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlTableModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSqlTableModel_QBaseIsSignalConnected(const QSqlTableModel* self, const QMetaMethod* signal) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_IsSignalConnected_IsBase(true);
        return vqsqltablemodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlTableModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnIsSignalConnected(const QSqlTableModel* self, intptr_t slot) {
    auto* vqsqltablemodel = const_cast<VirtualQSqlTableModel*>(dynamic_cast<const VirtualQSqlTableModel*>(self));
    if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
        vqsqltablemodel->setQSqlTableModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_IsSignalConnected_Callback>(slot));
    }
}

void QSqlTableModel_Delete(QSqlTableModel* self) {
    delete self;
}
