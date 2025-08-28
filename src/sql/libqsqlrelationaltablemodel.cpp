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
#include <QByteArray>
#include <cstring>
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

libqt_string QSqlRelation_IndexColumn(const QSqlRelation* self) {
    QString _ret = self->indexColumn();
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
    QString _ret = self->displayColumn();
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
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnMetacall(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Metacall_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSqlRelationalTableModel_QBaseMetacall(QSqlRelationalTableModel* self, int param1, int param2, void** param3) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Metacall_IsBase(true);
        return vqsqlrelationaltablemodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSqlRelationalTableModel_Tr(const char* s) {
    QString _ret = QSqlRelationalTableModel::tr(s);
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
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QVariant(self->data(*item, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlRelationalTableModel*)self)->data(*item, static_cast<int>(role)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnData(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Data_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Data_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QSqlRelationalTableModel_QBaseData(const QSqlRelationalTableModel* self, const QModelIndex* item, int role) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Data_IsBase(true);
        return new QVariant(vqsqlrelationaltablemodel->data(*item, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlRelationalTableModel*)self)->data(*item, static_cast<int>(role)));
    }
}

bool QSqlRelationalTableModel_SetData(QSqlRelationalTableModel* self, const QModelIndex* item, const QVariant* value, int role) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return self->setData(*item, *value, static_cast<int>(role));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->setData(*item, *value, static_cast<int>(role));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnSetData(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QSqlRelationalTableModel_QBaseSetData(QSqlRelationalTableModel* self, const QModelIndex* item, const QVariant* value, int role) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetData_IsBase(true);
        return vqsqlrelationaltablemodel->setData(*item, *value, static_cast<int>(role));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->setData(*item, *value, static_cast<int>(role));
    }
}

bool QSqlRelationalTableModel_RemoveColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnRemoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RemoveColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RemoveColumns_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QSqlRelationalTableModel_QBaseRemoveColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RemoveColumns_IsBase(true);
        return vqsqlrelationaltablemodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

void QSqlRelationalTableModel_Clear(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        self->clear();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->clear();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnClear(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Clear_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Clear_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QSqlRelationalTableModel_QBaseClear(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Clear_IsBase(true);
        vqsqlrelationaltablemodel->clear();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->clear();
    }
}

bool QSqlRelationalTableModel_Select(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return self->select();
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->select();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnSelect(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Select_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Select_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QSqlRelationalTableModel_QBaseSelect(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Select_IsBase(true);
        return vqsqlrelationaltablemodel->select();
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->select();
    }
}

void QSqlRelationalTableModel_SetTable(QSqlRelationalTableModel* self, const libqt_string tableName) {
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        self->setTable(tableName_QString);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->setTable(tableName_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnSetTable(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetTable_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetTable_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QSqlRelationalTableModel_QBaseSetTable(QSqlRelationalTableModel* self, const libqt_string tableName) {
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetTable_IsBase(true);
        vqsqlrelationaltablemodel->setTable(tableName_QString);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->setTable(tableName_QString);
    }
}

void QSqlRelationalTableModel_SetRelation(QSqlRelationalTableModel* self, int column, const QSqlRelation* relation) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        self->setRelation(static_cast<int>(column), *relation);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->setRelation(static_cast<int>(column), *relation);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnSetRelation(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetRelation_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetRelation_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QSqlRelationalTableModel_QBaseSetRelation(QSqlRelationalTableModel* self, int column, const QSqlRelation* relation) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetRelation_IsBase(true);
        vqsqlrelationaltablemodel->setRelation(static_cast<int>(column), *relation);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->setRelation(static_cast<int>(column), *relation);
    }
}

QSqlRelation* QSqlRelationalTableModel_Relation(const QSqlRelationalTableModel* self, int column) {
    return new QSqlRelation(self->relation(static_cast<int>(column)));
}

QSqlTableModel* QSqlRelationalTableModel_RelationModel(const QSqlRelationalTableModel* self, int column) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return self->relationModel(static_cast<int>(column));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->relationModel(static_cast<int>(column));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnRelationModel(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RelationModel_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RelationModel_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSqlTableModel* QSqlRelationalTableModel_QBaseRelationModel(const QSqlRelationalTableModel* self, int column) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RelationModel_IsBase(true);
        return vqsqlrelationaltablemodel->relationModel(static_cast<int>(column));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->relationModel(static_cast<int>(column));
    }
}

void QSqlRelationalTableModel_SetJoinMode(QSqlRelationalTableModel* self, int joinMode) {
    self->setJoinMode(static_cast<QSqlRelationalTableModel::JoinMode>(joinMode));
}

void QSqlRelationalTableModel_RevertRow(QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        self->revertRow(static_cast<int>(row));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->revertRow(static_cast<int>(row));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnRevertRow(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RevertRow_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RevertRow_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QSqlRelationalTableModel_QBaseRevertRow(QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RevertRow_IsBase(true);
        vqsqlrelationaltablemodel->revertRow(static_cast<int>(row));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->revertRow(static_cast<int>(row));
    }
}

libqt_string QSqlRelationalTableModel_SelectStatement(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        QString _ret = vqsqlrelationaltablemodel->selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnSelectStatement(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SelectStatement_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SelectStatement_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_string QSqlRelationalTableModel_QBaseSelectStatement(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SelectStatement_IsBase(true);
        QString _ret = vqsqlrelationaltablemodel->selectStatement();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

bool QSqlRelationalTableModel_UpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->updateRowInTable(static_cast<int>(row), *values);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnUpdateRowInTable(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_UpdateRowInTable_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_UpdateRowInTable_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QSqlRelationalTableModel_QBaseUpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_UpdateRowInTable_IsBase(true);
        return vqsqlrelationaltablemodel->updateRowInTable(static_cast<int>(row), *values);
    }
    return {};
}

bool QSqlRelationalTableModel_InsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->insertRowIntoTable(*values);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnInsertRowIntoTable(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_InsertRowIntoTable_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_InsertRowIntoTable_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QSqlRelationalTableModel_QBaseInsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_InsertRowIntoTable_IsBase(true);
        return vqsqlrelationaltablemodel->insertRowIntoTable(*values);
    }
    return {};
}

libqt_string QSqlRelationalTableModel_OrderByClause(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        QString _ret = vqsqlrelationaltablemodel->orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlRelationalTableModel_OnOrderByClause(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_OrderByClause_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_OrderByClause_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_string QSqlRelationalTableModel_QBaseOrderByClause(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_OrderByClause_IsBase(true);
        QString _ret = vqsqlrelationaltablemodel->orderByClause();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

libqt_string QSqlRelationalTableModel_Tr2(const char* s, const char* c) {
    QString _ret = QSqlRelationalTableModel::tr(s, c);
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
    QString _ret = QSqlRelationalTableModel::tr(s, c, static_cast<int>(n));
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
int QSqlRelationalTableModel_Flags(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return static_cast<int>(vqsqlrelationaltablemodel->flags(*index));
    } else {
        return static_cast<int>(self->QSqlRelationalTableModel::flags(*index));
    }
}

// Base class handler implementation
int QSqlRelationalTableModel_QBaseFlags(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Flags_IsBase(true);
        return static_cast<int>(vqsqlrelationaltablemodel->flags(*index));
    } else {
        return static_cast<int>(self->QSqlRelationalTableModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnFlags(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Flags_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_ClearItemData(QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->clearItemData(*index);
    } else {
        return self->QSqlRelationalTableModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseClearItemData(QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ClearItemData_IsBase(true);
        return vqsqlrelationaltablemodel->clearItemData(*index);
    } else {
        return self->QSqlRelationalTableModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnClearItemData(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ClearItemData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSqlRelationalTableModel_HeaderData(const QSqlRelationalTableModel* self, int section, int orientation, int role) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QVariant(vqsqlrelationaltablemodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlRelationalTableModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QSqlRelationalTableModel_QBaseHeaderData(const QSqlRelationalTableModel* self, int section, int orientation, int role) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_HeaderData_IsBase(true);
        return new QVariant(vqsqlrelationaltablemodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQSqlRelationalTableModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnHeaderData(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_HeaderData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_SetEditStrategy(QSqlRelationalTableModel* self, int strategy) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
    } else {
        self->QSqlRelationalTableModel::setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseSetEditStrategy(QSqlRelationalTableModel* self, int strategy) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetEditStrategy_IsBase(true);
        vqsqlrelationaltablemodel->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
    } else {
        self->QSqlRelationalTableModel::setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetEditStrategy(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetEditStrategy_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetEditStrategy_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_Sort(QSqlRelationalTableModel* self, int column, int order) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlRelationalTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseSort(QSqlRelationalTableModel* self, int column, int order) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Sort_IsBase(true);
        vqsqlrelationaltablemodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlRelationalTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSort(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Sort_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_SetSort(QSqlRelationalTableModel* self, int column, int order) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlRelationalTableModel::setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseSetSort(QSqlRelationalTableModel* self, int column, int order) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetSort_IsBase(true);
        vqsqlrelationaltablemodel->setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QSqlRelationalTableModel::setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetSort(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetSort_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetSort_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_SetFilter(QSqlRelationalTableModel* self, const libqt_string filter) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setFilter(filter_QString);
    } else {
        self->QSqlRelationalTableModel::setFilter(filter_QString);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseSetFilter(QSqlRelationalTableModel* self, const libqt_string filter) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetFilter_IsBase(true);
        vqsqlrelationaltablemodel->setFilter(filter_QString);
    } else {
        self->QSqlRelationalTableModel::setFilter(filter_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetFilter(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetFilter_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlRelationalTableModel_RowCount(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->rowCount(*parent);
    } else {
        return self->QSqlRelationalTableModel::rowCount(*parent);
    }
}

// Base class handler implementation
int QSqlRelationalTableModel_QBaseRowCount(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RowCount_IsBase(true);
        return vqsqlrelationaltablemodel->rowCount(*parent);
    } else {
        return self->QSqlRelationalTableModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRowCount(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RowCount_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_RemoveRows(QSqlRelationalTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlRelationalTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseRemoveRows(QSqlRelationalTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RemoveRows_IsBase(true);
        return vqsqlrelationaltablemodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlRelationalTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRemoveRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RemoveRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_InsertRows(QSqlRelationalTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlRelationalTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseInsertRows(QSqlRelationalTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_InsertRows_IsBase(true);
        return vqsqlrelationaltablemodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QSqlRelationalTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnInsertRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_InsertRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_SelectRow(QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->selectRow(static_cast<int>(row));
    } else {
        return self->QSqlRelationalTableModel::selectRow(static_cast<int>(row));
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseSelectRow(QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SelectRow_IsBase(true);
        return vqsqlrelationaltablemodel->selectRow(static_cast<int>(row));
    } else {
        return self->QSqlRelationalTableModel::selectRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSelectRow(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SelectRow_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SelectRow_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_Submit(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->submit();
    } else {
        return self->QSqlRelationalTableModel::submit();
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseSubmit(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Submit_IsBase(true);
        return vqsqlrelationaltablemodel->submit();
    } else {
        return self->QSqlRelationalTableModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSubmit(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Submit_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_Revert(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->revert();
    } else {
        self->QSqlRelationalTableModel::revert();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseRevert(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Revert_IsBase(true);
        vqsqlrelationaltablemodel->revert();
    } else {
        self->QSqlRelationalTableModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRevert(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Revert_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_DeleteRowFromTable(QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->deleteRowFromTable(static_cast<int>(row));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->deleteRowFromTable(static_cast<int>(row));
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseDeleteRowFromTable(QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_DeleteRowFromTable_IsBase(true);
        return vqsqlrelationaltablemodel->deleteRowFromTable(static_cast<int>(row));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->deleteRowFromTable(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnDeleteRowFromTable(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_DeleteRowFromTable_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_DeleteRowFromTable_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_IndexInQuery(const QSqlRelationalTableModel* self, const QModelIndex* item) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QModelIndex(vqsqlrelationaltablemodel->indexInQuery(*item));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_QBaseIndexInQuery(const QSqlRelationalTableModel* self, const QModelIndex* item) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_IndexInQuery_IsBase(true);
        return new QModelIndex(vqsqlrelationaltablemodel->indexInQuery(*item));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnIndexInQuery(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_IndexInQuery_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_IndexInQuery_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlRelationalTableModel_ColumnCount(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->columnCount(*parent);
    } else {
        return self->QSqlRelationalTableModel::columnCount(*parent);
    }
}

// Base class handler implementation
int QSqlRelationalTableModel_QBaseColumnCount(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ColumnCount_IsBase(true);
        return vqsqlrelationaltablemodel->columnCount(*parent);
    } else {
        return self->QSqlRelationalTableModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnColumnCount(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ColumnCount_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_SetHeaderData(QSqlRelationalTableModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QSqlRelationalTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseSetHeaderData(QSqlRelationalTableModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetHeaderData_IsBase(true);
        return vqsqlrelationaltablemodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QSqlRelationalTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetHeaderData(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetHeaderData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_InsertColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlRelationalTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseInsertColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_InsertColumns_IsBase(true);
        return vqsqlrelationaltablemodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QSqlRelationalTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnInsertColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_InsertColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_FetchMore(QSqlRelationalTableModel* self, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->fetchMore(*parent);
    } else {
        self->QSqlRelationalTableModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseFetchMore(QSqlRelationalTableModel* self, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_FetchMore_IsBase(true);
        vqsqlrelationaltablemodel->fetchMore(*parent);
    } else {
        self->QSqlRelationalTableModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnFetchMore(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_FetchMore_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_CanFetchMore(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->canFetchMore(*parent);
    } else {
        return self->QSqlRelationalTableModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseCanFetchMore(const QSqlRelationalTableModel* self, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_CanFetchMore_IsBase(true);
        return vqsqlrelationaltablemodel->canFetchMore(*parent);
    } else {
        return self->QSqlRelationalTableModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnCanFetchMore(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_CanFetchMore_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QSqlRelationalTableModel_RoleNames(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        QHash<int, QByteArray> _ret = vqsqlrelationaltablemodel->roleNames();
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
libqt_map /* of int to libqt_string */ QSqlRelationalTableModel_QBaseRoleNames(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqsqlrelationaltablemodel->roleNames();
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
void QSqlRelationalTableModel_OnRoleNames(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RoleNames_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_QueryChange(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->queryChange();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->queryChange();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseQueryChange(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_QueryChange_IsBase(true);
        vqsqlrelationaltablemodel->queryChange();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->queryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnQueryChange(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_QueryChange_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_QueryChange_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_Index(const QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QModelIndex(vqsqlrelationaltablemodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQSqlRelationalTableModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_QBaseIndex(const QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Index_IsBase(true);
        return new QModelIndex(vqsqlrelationaltablemodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQSqlRelationalTableModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnIndex(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Index_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_Sibling(const QSqlRelationalTableModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QModelIndex(vqsqlrelationaltablemodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQSqlRelationalTableModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_QBaseSibling(const QSqlRelationalTableModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Sibling_IsBase(true);
        return new QModelIndex(vqsqlrelationaltablemodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQSqlRelationalTableModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSibling(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Sibling_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_DropMimeData(QSqlRelationalTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlRelationalTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseDropMimeData(QSqlRelationalTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_DropMimeData_IsBase(true);
        return vqsqlrelationaltablemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlRelationalTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnDropMimeData(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_DropMimeData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QSqlRelationalTableModel_ItemData(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        QMap<int, QVariant> _ret = vqsqlrelationaltablemodel->itemData(*index);
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QSqlRelationalTableModel_QBaseItemData(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqsqlrelationaltablemodel->itemData(*index);
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
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnItemData(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ItemData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_SetItemData(QSqlRelationalTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->setItemData(*index, roles_QMap);
    } else {
        return self->QSqlRelationalTableModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseSetItemData(QSqlRelationalTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetItemData_IsBase(true);
        return vqsqlrelationaltablemodel->setItemData(*index, roles_QMap);
    } else {
        return self->QSqlRelationalTableModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetItemData(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetItemData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSqlRelationalTableModel_MimeTypes(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        QList<QString> _ret = vqsqlrelationaltablemodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
        QList<QString> _ret = self->QSqlRelationalTableModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
libqt_list /* of libqt_string */ QSqlRelationalTableModel_QBaseMimeTypes(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqsqlrelationaltablemodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
        QList<QString> _ret = self->QSqlRelationalTableModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
void QSqlRelationalTableModel_OnMimeTypes(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MimeTypes_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QSqlRelationalTableModel_MimeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->mimeData(indexes_QList);
    } else {
        return self->QSqlRelationalTableModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QSqlRelationalTableModel_QBaseMimeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MimeData_IsBase(true);
        return vqsqlrelationaltablemodel->mimeData(indexes_QList);
    } else {
        return self->QSqlRelationalTableModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMimeData(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MimeData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_CanDropMimeData(const QSqlRelationalTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlRelationalTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseCanDropMimeData(const QSqlRelationalTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_CanDropMimeData_IsBase(true);
        return vqsqlrelationaltablemodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QSqlRelationalTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnCanDropMimeData(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlRelationalTableModel_SupportedDropActions(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return static_cast<int>(vqsqlrelationaltablemodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QSqlRelationalTableModel::supportedDropActions());
    }
}

// Base class handler implementation
int QSqlRelationalTableModel_QBaseSupportedDropActions(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqsqlrelationaltablemodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QSqlRelationalTableModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSupportedDropActions(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlRelationalTableModel_SupportedDragActions(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return static_cast<int>(vqsqlrelationaltablemodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QSqlRelationalTableModel::supportedDragActions());
    }
}

// Base class handler implementation
int QSqlRelationalTableModel_QBaseSupportedDragActions(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqsqlrelationaltablemodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QSqlRelationalTableModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSupportedDragActions(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_MoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlRelationalTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseMoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MoveRows_IsBase(true);
        return vqsqlrelationaltablemodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlRelationalTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMoveRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MoveRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_MoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlRelationalTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseMoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MoveColumns_IsBase(true);
        return vqsqlrelationaltablemodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QSqlRelationalTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MoveColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_Buddy(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QModelIndex(vqsqlrelationaltablemodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQSqlRelationalTableModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_QBaseBuddy(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Buddy_IsBase(true);
        return new QModelIndex(vqsqlrelationaltablemodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQSqlRelationalTableModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBuddy(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Buddy_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_Match(const QSqlRelationalTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        QList<QModelIndex> _ret = vqsqlrelationaltablemodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QSqlRelationalTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_QBaseMatch(const QSqlRelationalTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqsqlrelationaltablemodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QSqlRelationalTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
void QSqlRelationalTableModel_OnMatch(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Match_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSqlRelationalTableModel_Span(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QSize(vqsqlrelationaltablemodel->span(*index));
    } else {
        return new QSize(((VirtualQSqlRelationalTableModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QSqlRelationalTableModel_QBaseSpan(const QSqlRelationalTableModel* self, const QModelIndex* index) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Span_IsBase(true);
        return new QSize(vqsqlrelationaltablemodel->span(*index));
    } else {
        return new QSize(((VirtualQSqlRelationalTableModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSpan(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Span_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_MultiData(const QSqlRelationalTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->multiData(*index, *roleDataSpan);
    } else {
        self->QSqlRelationalTableModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseMultiData(const QSqlRelationalTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MultiData_IsBase(true);
        vqsqlrelationaltablemodel->multiData(*index, *roleDataSpan);
    } else {
        self->QSqlRelationalTableModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnMultiData(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_MultiData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_ResetInternalData(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->resetInternalData();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseResetInternalData(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ResetInternalData_IsBase(true);
        vqsqlrelationaltablemodel->resetInternalData();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnResetInternalData(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ResetInternalData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_Event(QSqlRelationalTableModel* self, QEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->event(event);
    } else {
        return self->QSqlRelationalTableModel::event(event);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseEvent(QSqlRelationalTableModel* self, QEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Event_IsBase(true);
        return vqsqlrelationaltablemodel->event(event);
    } else {
        return self->QSqlRelationalTableModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEvent(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Event_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_EventFilter(QSqlRelationalTableModel* self, QObject* watched, QEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->eventFilter(watched, event);
    } else {
        return self->QSqlRelationalTableModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseEventFilter(QSqlRelationalTableModel* self, QObject* watched, QEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EventFilter_IsBase(true);
        return vqsqlrelationaltablemodel->eventFilter(watched, event);
    } else {
        return self->QSqlRelationalTableModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEventFilter(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EventFilter_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_TimerEvent(QSqlRelationalTableModel* self, QTimerEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->timerEvent(event);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseTimerEvent(QSqlRelationalTableModel* self, QTimerEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_TimerEvent_IsBase(true);
        vqsqlrelationaltablemodel->timerEvent(event);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnTimerEvent(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_TimerEvent_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_ChildEvent(QSqlRelationalTableModel* self, QChildEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->childEvent(event);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseChildEvent(QSqlRelationalTableModel* self, QChildEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ChildEvent_IsBase(true);
        vqsqlrelationaltablemodel->childEvent(event);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnChildEvent(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ChildEvent_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_CustomEvent(QSqlRelationalTableModel* self, QEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->customEvent(event);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseCustomEvent(QSqlRelationalTableModel* self, QEvent* event) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_CustomEvent_IsBase(true);
        vqsqlrelationaltablemodel->customEvent(event);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnCustomEvent(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_CustomEvent_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_ConnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->connectNotify(*signal);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseConnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ConnectNotify_IsBase(true);
        vqsqlrelationaltablemodel->connectNotify(*signal);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnConnectNotify(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ConnectNotify_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_DisconnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseDisconnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_DisconnectNotify_IsBase(true);
        vqsqlrelationaltablemodel->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnDisconnectNotify(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_SetPrimaryKey(QSqlRelationalTableModel* self, const QSqlIndex* key) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setPrimaryKey(*key);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->setPrimaryKey(*key);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseSetPrimaryKey(QSqlRelationalTableModel* self, const QSqlIndex* key) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetPrimaryKey_IsBase(true);
        vqsqlrelationaltablemodel->setPrimaryKey(*key);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->setPrimaryKey(*key);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetPrimaryKey(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetPrimaryKey_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetPrimaryKey_Callback>(slot));
    }
}

// Derived class handler implementation
QSqlRecord* QSqlRelationalTableModel_PrimaryValues(const QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QSqlRecord(vqsqlrelationaltablemodel->primaryValues(static_cast<int>(row)));
    }
    return {};
}

// Base class handler implementation
QSqlRecord* QSqlRelationalTableModel_QBasePrimaryValues(const QSqlRelationalTableModel* self, int row) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_PrimaryValues_IsBase(true);
        return new QSqlRecord(vqsqlrelationaltablemodel->primaryValues(static_cast<int>(row)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnPrimaryValues(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_PrimaryValues_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_PrimaryValues_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_BeginInsertRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseBeginInsertRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginInsertRows_IsBase(true);
        vqsqlrelationaltablemodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBeginInsertRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_EndInsertRows(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->endInsertRows();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseEndInsertRows(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndInsertRows_IsBase(true);
        vqsqlrelationaltablemodel->endInsertRows();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEndInsertRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndInsertRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_BeginRemoveRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseBeginRemoveRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginRemoveRows_IsBase(true);
        vqsqlrelationaltablemodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBeginRemoveRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_EndRemoveRows(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->endRemoveRows();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseEndRemoveRows(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndRemoveRows_IsBase(true);
        vqsqlrelationaltablemodel->endRemoveRows();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEndRemoveRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_BeginInsertColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseBeginInsertColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginInsertColumns_IsBase(true);
        vqsqlrelationaltablemodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBeginInsertColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_EndInsertColumns(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->endInsertColumns();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseEndInsertColumns(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndInsertColumns_IsBase(true);
        vqsqlrelationaltablemodel->endInsertColumns();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEndInsertColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_BeginRemoveColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseBeginRemoveColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginRemoveColumns_IsBase(true);
        vqsqlrelationaltablemodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBeginRemoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_EndRemoveColumns(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->endRemoveColumns();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseEndRemoveColumns(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndRemoveColumns_IsBase(true);
        vqsqlrelationaltablemodel->endRemoveColumns();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEndRemoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_BeginResetModel(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->beginResetModel();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseBeginResetModel(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginResetModel_IsBase(true);
        vqsqlrelationaltablemodel->beginResetModel();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBeginResetModel(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginResetModel_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_EndResetModel(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->endResetModel();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseEndResetModel(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndResetModel_IsBase(true);
        vqsqlrelationaltablemodel->endResetModel();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEndResetModel(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndResetModel_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_SetLastError(QSqlRelationalTableModel* self, const QSqlError* errorVal) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setLastError(*errorVal);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->setLastError(*errorVal);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseSetLastError(QSqlRelationalTableModel* self, const QSqlError* errorVal) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetLastError_IsBase(true);
        vqsqlrelationaltablemodel->setLastError(*errorVal);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->setLastError(*errorVal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetLastError(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetLastError_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetLastError_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QSqlRelationalTableModel_CreateIndex(const QSqlRelationalTableModel* self, int row, int column) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return new QModelIndex(vqsqlrelationaltablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QSqlRelationalTableModel_QBaseCreateIndex(const QSqlRelationalTableModel* self, int row, int column) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqsqlrelationaltablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnCreateIndex(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_CreateIndex_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_EncodeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseEncodeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EncodeData_IsBase(true);
        vqsqlrelationaltablemodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEncodeData(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EncodeData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_DecodeData(QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseDecodeData(QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_DecodeData_IsBase(true);
        return vqsqlrelationaltablemodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnDecodeData(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_DecodeData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_BeginMoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseBeginMoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginMoveRows_IsBase(true);
        return vqsqlrelationaltablemodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBeginMoveRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_EndMoveRows(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->endMoveRows();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseEndMoveRows(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndMoveRows_IsBase(true);
        vqsqlrelationaltablemodel->endMoveRows();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEndMoveRows(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndMoveRows_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_BeginMoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseBeginMoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginMoveColumns_IsBase(true);
        return vqsqlrelationaltablemodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnBeginMoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_EndMoveColumns(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->endMoveColumns();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseEndMoveColumns(QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndMoveColumns_IsBase(true);
        vqsqlrelationaltablemodel->endMoveColumns();
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnEndMoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_ChangePersistentIndex(QSqlRelationalTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseChangePersistentIndex(QSqlRelationalTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ChangePersistentIndex_IsBase(true);
        vqsqlrelationaltablemodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnChangePersistentIndex(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlRelationalTableModel_ChangePersistentIndexList(QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
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
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseChangePersistentIndexList(QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
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
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ChangePersistentIndexList_IsBase(true);
        vqsqlrelationaltablemodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQSqlRelationalTableModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnChangePersistentIndexList(QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_PersistentIndexList(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        QList<QModelIndex> _ret = vqsqlrelationaltablemodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQSqlRelationalTableModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_QBasePersistentIndexList(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqsqlrelationaltablemodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQSqlRelationalTableModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
void QSqlRelationalTableModel_OnPersistentIndexList(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSqlRelationalTableModel_Sender(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->sender();
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSqlRelationalTableModel_QBaseSender(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Sender_IsBase(true);
        return vqsqlrelationaltablemodel->sender();
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSender(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Sender_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlRelationalTableModel_SenderSignalIndex(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->senderSignalIndex();
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSqlRelationalTableModel_QBaseSenderSignalIndex(const QSqlRelationalTableModel* self) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SenderSignalIndex_IsBase(true);
        return vqsqlrelationaltablemodel->senderSignalIndex();
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSenderSignalIndex(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlRelationalTableModel_Receivers(const QSqlRelationalTableModel* self, const char* signal) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->receivers(signal);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSqlRelationalTableModel_QBaseReceivers(const QSqlRelationalTableModel* self, const char* signal) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Receivers_IsBase(true);
        return vqsqlrelationaltablemodel->receivers(signal);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnReceivers(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Receivers_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlRelationalTableModel_IsSignalConnected(const QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        return vqsqlrelationaltablemodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseIsSignalConnected(const QSqlRelationalTableModel* self, const QMetaMethod* signal) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_IsSignalConnected_IsBase(true);
        return vqsqlrelationaltablemodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlRelationalTableModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnIsSignalConnected(const QSqlRelationalTableModel* self, intptr_t slot) {
    auto* vqsqlrelationaltablemodel = const_cast<VirtualQSqlRelationalTableModel*>(dynamic_cast<const VirtualQSqlRelationalTableModel*>(self));
    if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
        vqsqlrelationaltablemodel->setQSqlRelationalTableModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_IsSignalConnected_Callback>(slot));
    }
}

void QSqlRelationalTableModel_Delete(QSqlRelationalTableModel* self) {
    delete self;
}
