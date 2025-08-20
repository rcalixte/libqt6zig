#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlField>
#include <QSqlIndex>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qsqldriver.h>
#include "libqsqldriver.h"
#include "libqsqldriver.hxx"

QSqlDriver* QSqlDriver_new() {
    return new VirtualQSqlDriver();
}

QSqlDriver* QSqlDriver_new2(QObject* parent) {
    return new VirtualQSqlDriver(parent);
}

QMetaObject* QSqlDriver_MetaObject(const QSqlDriver* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSqlDriver_Metacast(QSqlDriver* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSqlDriver_Metacall(QSqlDriver* self, int param1, int param2, void** param3) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlDriver*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlDriver_OnMetacall(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Metacall_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSqlDriver_QBaseMetacall(QSqlDriver* self, int param1, int param2, void** param3) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Metacall_IsBase(true);
        return vqsqldriver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlDriver*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSqlDriver_Tr(const char* s) {
    QString _ret = QSqlDriver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSqlDriver_IsOpenError(const QSqlDriver* self) {
    return self->isOpenError();
}

QSqlError* QSqlDriver_LastError(const QSqlDriver* self) {
    return new QSqlError(self->lastError());
}

void QSqlDriver_SetNumericalPrecisionPolicy(QSqlDriver* self, int precisionPolicy) {
    self->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(precisionPolicy));
}

int QSqlDriver_NumericalPrecisionPolicy(const QSqlDriver* self) {
    return static_cast<int>(self->numericalPrecisionPolicy());
}

int QSqlDriver_DbmsType(const QSqlDriver* self) {
    return static_cast<int>(self->dbmsType());
}

void QSqlDriver_Notification(QSqlDriver* self, const libqt_string name, int source, const QVariant* payload) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->notification(name_QString, static_cast<QSqlDriver::NotificationSource>(source), *payload);
}

void QSqlDriver_Connect_Notification(QSqlDriver* self, intptr_t slot) {
    void (*slotFunc)(QSqlDriver*, libqt_string, int, QVariant*) = reinterpret_cast<void (*)(QSqlDriver*, libqt_string, int, QVariant*)>(slot);
    QSqlDriver::connect(self, &QSqlDriver::notification, [self, slotFunc](const QString& name, QSqlDriver::NotificationSource source, const QVariant& payload) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        libqt_string name_str;
        name_str.len = name_b.length();
        name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
        memcpy((void*)name_str.data, name_b.data(), name_str.len);
        ((char*)name_str.data)[name_str.len] = '\0';
        libqt_string sigval1 = name_str;
        int sigval2 = static_cast<int>(source);
        const QVariant& payload_ret = payload;
        // Cast returned reference into pointer
        QVariant* sigval3 = const_cast<QVariant*>(&payload_ret);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

libqt_string QSqlDriver_Tr2(const char* s, const char* c) {
    QString _ret = QSqlDriver::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlDriver_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSqlDriver::tr(s, c, static_cast<int>(n));
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
bool QSqlDriver_IsOpen(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->isOpen();
    } else {
        return self->QSqlDriver::isOpen();
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseIsOpen(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_IsOpen_IsBase(true);
        return vqsqldriver->isOpen();
    } else {
        return self->QSqlDriver::isOpen();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnIsOpen(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_IsOpen_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_IsOpen_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_BeginTransaction(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->beginTransaction();
    } else {
        return self->QSqlDriver::beginTransaction();
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseBeginTransaction(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_BeginTransaction_IsBase(true);
        return vqsqldriver->beginTransaction();
    } else {
        return self->QSqlDriver::beginTransaction();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnBeginTransaction(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_BeginTransaction_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_BeginTransaction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_CommitTransaction(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->commitTransaction();
    } else {
        return self->QSqlDriver::commitTransaction();
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseCommitTransaction(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_CommitTransaction_IsBase(true);
        return vqsqldriver->commitTransaction();
    } else {
        return self->QSqlDriver::commitTransaction();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnCommitTransaction(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_CommitTransaction_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_CommitTransaction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_RollbackTransaction(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->rollbackTransaction();
    } else {
        return self->QSqlDriver::rollbackTransaction();
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseRollbackTransaction(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_RollbackTransaction_IsBase(true);
        return vqsqldriver->rollbackTransaction();
    } else {
        return self->QSqlDriver::rollbackTransaction();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnRollbackTransaction(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_RollbackTransaction_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_RollbackTransaction_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSqlDriver_Tables(const QSqlDriver* self, int tableType) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        QList<QString> _ret = vqsqldriver->tables(static_cast<QSql::TableType>(tableType));
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
        QList<QString> _ret = self->QSqlDriver::tables(static_cast<QSql::TableType>(tableType));
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
libqt_list /* of libqt_string */ QSqlDriver_QBaseTables(const QSqlDriver* self, int tableType) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Tables_IsBase(true);
        QList<QString> _ret = vqsqldriver->tables(static_cast<QSql::TableType>(tableType));
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
        QList<QString> _ret = self->QSqlDriver::tables(static_cast<QSql::TableType>(tableType));
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
void QSqlDriver_OnTables(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Tables_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Tables_Callback>(slot));
    }
}

// Derived class handler implementation
QSqlIndex* QSqlDriver_PrimaryIndex(const QSqlDriver* self, const libqt_string tableName) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return new QSqlIndex(vqsqldriver->primaryIndex(tableName_QString));
    } else {
        return new QSqlIndex(((VirtualQSqlDriver*)self)->primaryIndex(tableName_QString));
    }
}

// Base class handler implementation
QSqlIndex* QSqlDriver_QBasePrimaryIndex(const QSqlDriver* self, const libqt_string tableName) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_PrimaryIndex_IsBase(true);
        return new QSqlIndex(vqsqldriver->primaryIndex(tableName_QString));
    } else {
        return new QSqlIndex(((VirtualQSqlDriver*)self)->primaryIndex(tableName_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnPrimaryIndex(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_PrimaryIndex_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_PrimaryIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QSqlRecord* QSqlDriver_Record(const QSqlDriver* self, const libqt_string tableName) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return new QSqlRecord(vqsqldriver->record(tableName_QString));
    } else {
        return new QSqlRecord(((VirtualQSqlDriver*)self)->record(tableName_QString));
    }
}

// Base class handler implementation
QSqlRecord* QSqlDriver_QBaseRecord(const QSqlDriver* self, const libqt_string tableName) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Record_IsBase(true);
        return new QSqlRecord(vqsqldriver->record(tableName_QString));
    } else {
        return new QSqlRecord(((VirtualQSqlDriver*)self)->record(tableName_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnRecord(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Record_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Record_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QSqlDriver_FormatValue(const QSqlDriver* self, const QSqlField* field, bool trimStrings) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        QString _ret = vqsqldriver->formatValue(*field, trimStrings);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSqlDriver::formatValue(*field, trimStrings);
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
libqt_string QSqlDriver_QBaseFormatValue(const QSqlDriver* self, const QSqlField* field, bool trimStrings) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_FormatValue_IsBase(true);
        QString _ret = vqsqldriver->formatValue(*field, trimStrings);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSqlDriver::formatValue(*field, trimStrings);
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
void QSqlDriver_OnFormatValue(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_FormatValue_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_FormatValue_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QSqlDriver_EscapeIdentifier(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        QString _ret = vqsqldriver->escapeIdentifier(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSqlDriver::escapeIdentifier(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
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
libqt_string QSqlDriver_QBaseEscapeIdentifier(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_EscapeIdentifier_IsBase(true);
        QString _ret = vqsqldriver->escapeIdentifier(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSqlDriver::escapeIdentifier(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
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
void QSqlDriver_OnEscapeIdentifier(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_EscapeIdentifier_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_EscapeIdentifier_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QSqlDriver_SqlStatement(const QSqlDriver* self, int typeVal, const libqt_string tableName, const QSqlRecord* rec, bool preparedStatement) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        QString _ret = vqsqldriver->sqlStatement(static_cast<QSqlDriver::StatementType>(typeVal), tableName_QString, *rec, preparedStatement);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSqlDriver::sqlStatement(static_cast<QSqlDriver::StatementType>(typeVal), tableName_QString, *rec, preparedStatement);
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
libqt_string QSqlDriver_QBaseSqlStatement(const QSqlDriver* self, int typeVal, const libqt_string tableName, const QSqlRecord* rec, bool preparedStatement) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SqlStatement_IsBase(true);
        QString _ret = vqsqldriver->sqlStatement(static_cast<QSqlDriver::StatementType>(typeVal), tableName_QString, *rec, preparedStatement);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSqlDriver::sqlStatement(static_cast<QSqlDriver::StatementType>(typeVal), tableName_QString, *rec, preparedStatement);
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
void QSqlDriver_OnSqlStatement(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SqlStatement_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SqlStatement_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSqlDriver_Handle(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return new QVariant(vqsqldriver->handle());
    } else {
        return new QVariant(((VirtualQSqlDriver*)self)->handle());
    }
}

// Base class handler implementation
QVariant* QSqlDriver_QBaseHandle(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Handle_IsBase(true);
        return new QVariant(vqsqldriver->handle());
    } else {
        return new QVariant(((VirtualQSqlDriver*)self)->handle());
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnHandle(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Handle_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Handle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_HasFeature(const QSqlDriver* self, int f) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->hasFeature(static_cast<QSqlDriver::DriverFeature>(f));
    } else {
        return ((VirtualQSqlDriver*)self)->hasFeature(static_cast<QSqlDriver::DriverFeature>(f));
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseHasFeature(const QSqlDriver* self, int f) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_HasFeature_IsBase(true);
        return vqsqldriver->hasFeature(static_cast<QSqlDriver::DriverFeature>(f));
    } else {
        return ((VirtualQSqlDriver*)self)->hasFeature(static_cast<QSqlDriver::DriverFeature>(f));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnHasFeature(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_HasFeature_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_HasFeature_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_Close(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->close();
    } else {
        ((VirtualQSqlDriver*)self)->close();
    }
}

// Base class handler implementation
void QSqlDriver_QBaseClose(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Close_IsBase(true);
        vqsqldriver->close();
    } else {
        ((VirtualQSqlDriver*)self)->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnClose(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Close_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Close_Callback>(slot));
    }
}

// Derived class handler implementation
QSqlResult* QSqlDriver_CreateResult(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->createResult();
    } else {
        return ((VirtualQSqlDriver*)self)->createResult();
    }
}

// Base class handler implementation
QSqlResult* QSqlDriver_QBaseCreateResult(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_CreateResult_IsBase(true);
        return vqsqldriver->createResult();
    } else {
        return ((VirtualQSqlDriver*)self)->createResult();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnCreateResult(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_CreateResult_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_CreateResult_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_Open(QSqlDriver* self, const libqt_string db, const libqt_string user, const libqt_string password, const libqt_string host, int port, const libqt_string connOpts) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    QString db_QString = QString::fromUtf8(db.data, db.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString connOpts_QString = QString::fromUtf8(connOpts.data, connOpts.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->open(db_QString, user_QString, password_QString, host_QString, static_cast<int>(port), connOpts_QString);
    } else {
        return ((VirtualQSqlDriver*)self)->open(db_QString, user_QString, password_QString, host_QString, static_cast<int>(port), connOpts_QString);
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseOpen(QSqlDriver* self, const libqt_string db, const libqt_string user, const libqt_string password, const libqt_string host, int port, const libqt_string connOpts) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    QString db_QString = QString::fromUtf8(db.data, db.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString connOpts_QString = QString::fromUtf8(connOpts.data, connOpts.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Open_IsBase(true);
        return vqsqldriver->open(db_QString, user_QString, password_QString, host_QString, static_cast<int>(port), connOpts_QString);
    } else {
        return ((VirtualQSqlDriver*)self)->open(db_QString, user_QString, password_QString, host_QString, static_cast<int>(port), connOpts_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnOpen(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Open_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Open_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_SubscribeToNotification(QSqlDriver* self, const libqt_string name) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->subscribeToNotification(name_QString);
    } else {
        return self->QSqlDriver::subscribeToNotification(name_QString);
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseSubscribeToNotification(QSqlDriver* self, const libqt_string name) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SubscribeToNotification_IsBase(true);
        return vqsqldriver->subscribeToNotification(name_QString);
    } else {
        return self->QSqlDriver::subscribeToNotification(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSubscribeToNotification(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SubscribeToNotification_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SubscribeToNotification_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_UnsubscribeFromNotification(QSqlDriver* self, const libqt_string name) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->unsubscribeFromNotification(name_QString);
    } else {
        return self->QSqlDriver::unsubscribeFromNotification(name_QString);
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseUnsubscribeFromNotification(QSqlDriver* self, const libqt_string name) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_UnsubscribeFromNotification_IsBase(true);
        return vqsqldriver->unsubscribeFromNotification(name_QString);
    } else {
        return self->QSqlDriver::unsubscribeFromNotification(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnUnsubscribeFromNotification(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_UnsubscribeFromNotification_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_UnsubscribeFromNotification_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QSqlDriver_SubscribedToNotifications(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        QList<QString> _ret = vqsqldriver->subscribedToNotifications();
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
        QList<QString> _ret = self->QSqlDriver::subscribedToNotifications();
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
libqt_list /* of libqt_string */ QSqlDriver_QBaseSubscribedToNotifications(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SubscribedToNotifications_IsBase(true);
        QList<QString> _ret = vqsqldriver->subscribedToNotifications();
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
        QList<QString> _ret = self->QSqlDriver::subscribedToNotifications();
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
void QSqlDriver_OnSubscribedToNotifications(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SubscribedToNotifications_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SubscribedToNotifications_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_IsIdentifierEscaped(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->isIdentifierEscaped(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
    } else {
        return self->QSqlDriver::isIdentifierEscaped(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseIsIdentifierEscaped(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_IsIdentifierEscaped_IsBase(true);
        return vqsqldriver->isIdentifierEscaped(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
    } else {
        return self->QSqlDriver::isIdentifierEscaped(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnIsIdentifierEscaped(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_IsIdentifierEscaped_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_IsIdentifierEscaped_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QSqlDriver_StripDelimiters(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        QString _ret = vqsqldriver->stripDelimiters(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSqlDriver::stripDelimiters(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
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
libqt_string QSqlDriver_QBaseStripDelimiters(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_StripDelimiters_IsBase(true);
        QString _ret = vqsqldriver->stripDelimiters(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSqlDriver::stripDelimiters(identifier_QString, static_cast<QSqlDriver::IdentifierType>(typeVal));
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
void QSqlDriver_OnStripDelimiters(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_StripDelimiters_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_StripDelimiters_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlDriver_MaximumIdentifierLength(const QSqlDriver* self, int typeVal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->maximumIdentifierLength(static_cast<QSqlDriver::IdentifierType>(typeVal));
    } else {
        return self->QSqlDriver::maximumIdentifierLength(static_cast<QSqlDriver::IdentifierType>(typeVal));
    }
}

// Base class handler implementation
int QSqlDriver_QBaseMaximumIdentifierLength(const QSqlDriver* self, int typeVal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_MaximumIdentifierLength_IsBase(true);
        return vqsqldriver->maximumIdentifierLength(static_cast<QSqlDriver::IdentifierType>(typeVal));
    } else {
        return self->QSqlDriver::maximumIdentifierLength(static_cast<QSqlDriver::IdentifierType>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnMaximumIdentifierLength(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_MaximumIdentifierLength_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_MaximumIdentifierLength_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_CancelQuery(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->cancelQuery();
    } else {
        return self->QSqlDriver::cancelQuery();
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseCancelQuery(QSqlDriver* self) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_CancelQuery_IsBase(true);
        return vqsqldriver->cancelQuery();
    } else {
        return self->QSqlDriver::cancelQuery();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnCancelQuery(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_CancelQuery_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_CancelQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_SetOpen(QSqlDriver* self, bool o) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setOpen(o);
    } else {
        ((VirtualQSqlDriver*)self)->setOpen(o);
    }
}

// Base class handler implementation
void QSqlDriver_QBaseSetOpen(QSqlDriver* self, bool o) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SetOpen_IsBase(true);
        vqsqldriver->setOpen(o);
    } else {
        ((VirtualQSqlDriver*)self)->setOpen(o);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSetOpen(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SetOpen_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SetOpen_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_SetOpenError(QSqlDriver* self, bool e) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setOpenError(e);
    } else {
        ((VirtualQSqlDriver*)self)->setOpenError(e);
    }
}

// Base class handler implementation
void QSqlDriver_QBaseSetOpenError(QSqlDriver* self, bool e) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SetOpenError_IsBase(true);
        vqsqldriver->setOpenError(e);
    } else {
        ((VirtualQSqlDriver*)self)->setOpenError(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSetOpenError(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SetOpenError_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SetOpenError_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_SetLastError(QSqlDriver* self, const QSqlError* e) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setLastError(*e);
    } else {
        ((VirtualQSqlDriver*)self)->setLastError(*e);
    }
}

// Base class handler implementation
void QSqlDriver_QBaseSetLastError(QSqlDriver* self, const QSqlError* e) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SetLastError_IsBase(true);
        vqsqldriver->setLastError(*e);
    } else {
        ((VirtualQSqlDriver*)self)->setLastError(*e);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSetLastError(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SetLastError_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SetLastError_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_Event(QSqlDriver* self, QEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->event(event);
    } else {
        return self->QSqlDriver::event(event);
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseEvent(QSqlDriver* self, QEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Event_IsBase(true);
        return vqsqldriver->event(event);
    } else {
        return self->QSqlDriver::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnEvent(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Event_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_EventFilter(QSqlDriver* self, QObject* watched, QEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->eventFilter(watched, event);
    } else {
        return self->QSqlDriver::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseEventFilter(QSqlDriver* self, QObject* watched, QEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_EventFilter_IsBase(true);
        return vqsqldriver->eventFilter(watched, event);
    } else {
        return self->QSqlDriver::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnEventFilter(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_EventFilter_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_TimerEvent(QSqlDriver* self, QTimerEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->timerEvent(event);
    } else {
        ((VirtualQSqlDriver*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSqlDriver_QBaseTimerEvent(QSqlDriver* self, QTimerEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_TimerEvent_IsBase(true);
        vqsqldriver->timerEvent(event);
    } else {
        ((VirtualQSqlDriver*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnTimerEvent(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_TimerEvent_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_ChildEvent(QSqlDriver* self, QChildEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->childEvent(event);
    } else {
        ((VirtualQSqlDriver*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSqlDriver_QBaseChildEvent(QSqlDriver* self, QChildEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_ChildEvent_IsBase(true);
        vqsqldriver->childEvent(event);
    } else {
        ((VirtualQSqlDriver*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnChildEvent(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_ChildEvent_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_CustomEvent(QSqlDriver* self, QEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->customEvent(event);
    } else {
        ((VirtualQSqlDriver*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSqlDriver_QBaseCustomEvent(QSqlDriver* self, QEvent* event) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_CustomEvent_IsBase(true);
        vqsqldriver->customEvent(event);
    } else {
        ((VirtualQSqlDriver*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnCustomEvent(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_CustomEvent_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_ConnectNotify(QSqlDriver* self, const QMetaMethod* signal) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->connectNotify(*signal);
    } else {
        ((VirtualQSqlDriver*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlDriver_QBaseConnectNotify(QSqlDriver* self, const QMetaMethod* signal) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_ConnectNotify_IsBase(true);
        vqsqldriver->connectNotify(*signal);
    } else {
        ((VirtualQSqlDriver*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnConnectNotify(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_ConnectNotify_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriver_DisconnectNotify(QSqlDriver* self, const QMetaMethod* signal) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlDriver*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlDriver_QBaseDisconnectNotify(QSqlDriver* self, const QMetaMethod* signal) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_DisconnectNotify_IsBase(true);
        vqsqldriver->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlDriver*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnDisconnectNotify(QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_DisconnectNotify_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSqlDriver_Sender(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->sender();
    } else {
        return ((VirtualQSqlDriver*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSqlDriver_QBaseSender(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Sender_IsBase(true);
        return vqsqldriver->sender();
    } else {
        return ((VirtualQSqlDriver*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSender(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Sender_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlDriver_SenderSignalIndex(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->senderSignalIndex();
    } else {
        return ((VirtualQSqlDriver*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSqlDriver_QBaseSenderSignalIndex(const QSqlDriver* self) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SenderSignalIndex_IsBase(true);
        return vqsqldriver->senderSignalIndex();
    } else {
        return ((VirtualQSqlDriver*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSenderSignalIndex(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlDriver_Receivers(const QSqlDriver* self, const char* signal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->receivers(signal);
    } else {
        return ((VirtualQSqlDriver*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSqlDriver_QBaseReceivers(const QSqlDriver* self, const char* signal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Receivers_IsBase(true);
        return vqsqldriver->receivers(signal);
    } else {
        return ((VirtualQSqlDriver*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnReceivers(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_Receivers_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriver_IsSignalConnected(const QSqlDriver* self, const QMetaMethod* signal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        return vqsqldriver->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlDriver*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSqlDriver_QBaseIsSignalConnected(const QSqlDriver* self, const QMetaMethod* signal) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_IsSignalConnected_IsBase(true);
        return vqsqldriver->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlDriver*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnIsSignalConnected(const QSqlDriver* self, intptr_t slot) {
    auto* vqsqldriver = const_cast<VirtualQSqlDriver*>(dynamic_cast<const VirtualQSqlDriver*>(self));
    if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
        vqsqldriver->setQSqlDriver_IsSignalConnected_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_IsSignalConnected_Callback>(slot));
    }
}

void QSqlDriver_Delete(QSqlDriver* self) {
    delete self;
}
