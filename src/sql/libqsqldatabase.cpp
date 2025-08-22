#include <QList>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlDriverCreatorBase>
#include <QSqlError>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <qsqldatabase.h>
#include "libqsqldatabase.h"
#include "libqsqldatabase.hxx"

QSqlDriver* QSqlDriverCreatorBase_CreateObject(const QSqlDriverCreatorBase* self) {
    return self->createObject();
}

void QSqlDriverCreatorBase_OperatorAssign(QSqlDriverCreatorBase* self, const QSqlDriverCreatorBase* param1) {
    self->operator=(*param1);
}

void QSqlDriverCreatorBase_Delete(QSqlDriverCreatorBase* self) {
    delete self;
}

QSqlDatabase* QSqlDatabase_new() {
    return new QSqlDatabase();
}

QSqlDatabase* QSqlDatabase_new2(const QSqlDatabase* other) {
    return new QSqlDatabase(*other);
}

void QSqlDatabase_OperatorAssign(QSqlDatabase* self, const QSqlDatabase* other) {
    self->operator=(*other);
}

bool QSqlDatabase_Open(QSqlDatabase* self) {
    return self->open();
}

bool QSqlDatabase_Open2(QSqlDatabase* self, const libqt_string user, const libqt_string password) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return self->open(user_QString, password_QString);
}

void QSqlDatabase_Close(QSqlDatabase* self) {
    self->close();
}

bool QSqlDatabase_IsOpen(const QSqlDatabase* self) {
    return self->isOpen();
}

bool QSqlDatabase_IsOpenError(const QSqlDatabase* self) {
    return self->isOpenError();
}

libqt_list /* of libqt_string */ QSqlDatabase_Tables(const QSqlDatabase* self) {
    QList<QString> _ret = self->tables();
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

QSqlIndex* QSqlDatabase_PrimaryIndex(const QSqlDatabase* self, const libqt_string tablename) {
    QString tablename_QString = QString::fromUtf8(tablename.data, tablename.len);
    return new QSqlIndex(self->primaryIndex(tablename_QString));
}

QSqlRecord* QSqlDatabase_Record(const QSqlDatabase* self, const libqt_string tablename) {
    QString tablename_QString = QString::fromUtf8(tablename.data, tablename.len);
    return new QSqlRecord(self->record(tablename_QString));
}

QSqlQuery* QSqlDatabase_Exec(const QSqlDatabase* self) {
    return new QSqlQuery(self->exec());
}

QSqlError* QSqlDatabase_LastError(const QSqlDatabase* self) {
    return new QSqlError(self->lastError());
}

bool QSqlDatabase_IsValid(const QSqlDatabase* self) {
    return self->isValid();
}

bool QSqlDatabase_Transaction(QSqlDatabase* self) {
    return self->transaction();
}

bool QSqlDatabase_Commit(QSqlDatabase* self) {
    return self->commit();
}

bool QSqlDatabase_Rollback(QSqlDatabase* self) {
    return self->rollback();
}

void QSqlDatabase_SetDatabaseName(QSqlDatabase* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setDatabaseName(name_QString);
}

void QSqlDatabase_SetUserName(QSqlDatabase* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setUserName(name_QString);
}

void QSqlDatabase_SetPassword(QSqlDatabase* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

void QSqlDatabase_SetHostName(QSqlDatabase* self, const libqt_string host) {
    QString host_QString = QString::fromUtf8(host.data, host.len);
    self->setHostName(host_QString);
}

void QSqlDatabase_SetPort(QSqlDatabase* self, int p) {
    self->setPort(static_cast<int>(p));
}

void QSqlDatabase_SetConnectOptions(QSqlDatabase* self) {
    self->setConnectOptions();
}

libqt_string QSqlDatabase_DatabaseName(const QSqlDatabase* self) {
    QString _ret = self->databaseName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlDatabase_UserName(const QSqlDatabase* self) {
    QString _ret = self->userName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlDatabase_Password(const QSqlDatabase* self) {
    QString _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlDatabase_HostName(const QSqlDatabase* self) {
    QString _ret = self->hostName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlDatabase_DriverName(const QSqlDatabase* self) {
    QString _ret = self->driverName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSqlDatabase_Port(const QSqlDatabase* self) {
    return self->port();
}

libqt_string QSqlDatabase_ConnectOptions(const QSqlDatabase* self) {
    QString _ret = self->connectOptions();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlDatabase_ConnectionName(const QSqlDatabase* self) {
    QString _ret = self->connectionName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSqlDatabase_SetNumericalPrecisionPolicy(QSqlDatabase* self, int precisionPolicy) {
    self->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(precisionPolicy));
}

int QSqlDatabase_NumericalPrecisionPolicy(const QSqlDatabase* self) {
    return static_cast<int>(self->numericalPrecisionPolicy());
}

bool QSqlDatabase_MoveToThread(QSqlDatabase* self, QThread* targetThread) {
    return self->moveToThread(targetThread);
}

QThread* QSqlDatabase_Thread(const QSqlDatabase* self) {
    return self->thread();
}

QSqlDriver* QSqlDatabase_Driver(const QSqlDatabase* self) {
    return self->driver();
}

QSqlDatabase* QSqlDatabase_AddDatabase(const libqt_string typeVal) {
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    return new QSqlDatabase(QSqlDatabase::addDatabase(typeVal_QString));
}

QSqlDatabase* QSqlDatabase_AddDatabase2(QSqlDriver* driver) {
    return new QSqlDatabase(QSqlDatabase::addDatabase(driver));
}

QSqlDatabase* QSqlDatabase_CloneDatabase(const QSqlDatabase* other, const libqt_string connectionName) {
    QString connectionName_QString = QString::fromUtf8(connectionName.data, connectionName.len);
    return new QSqlDatabase(QSqlDatabase::cloneDatabase(*other, connectionName_QString));
}

QSqlDatabase* QSqlDatabase_CloneDatabase2(const libqt_string other, const libqt_string connectionName) {
    QString other_QString = QString::fromUtf8(other.data, other.len);
    QString connectionName_QString = QString::fromUtf8(connectionName.data, connectionName.len);
    return new QSqlDatabase(QSqlDatabase::cloneDatabase(other_QString, connectionName_QString));
}

QSqlDatabase* QSqlDatabase_Database() {
    return new QSqlDatabase(QSqlDatabase::database());
}

void QSqlDatabase_RemoveDatabase(const libqt_string connectionName) {
    QString connectionName_QString = QString::fromUtf8(connectionName.data, connectionName.len);
    QSqlDatabase::removeDatabase(connectionName_QString);
}

bool QSqlDatabase_Contains() {
    return QSqlDatabase::contains();
}

libqt_list /* of libqt_string */ QSqlDatabase_Drivers() {
    QList<QString> _ret = QSqlDatabase::drivers();
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

libqt_list /* of libqt_string */ QSqlDatabase_ConnectionNames() {
    QList<QString> _ret = QSqlDatabase::connectionNames();
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

void QSqlDatabase_RegisterSqlDriver(const libqt_string name, QSqlDriverCreatorBase* creator) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QSqlDatabase::registerSqlDriver(name_QString, creator);
}

bool QSqlDatabase_IsDriverAvailable(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return QSqlDatabase::isDriverAvailable(name_QString);
}

libqt_list /* of libqt_string */ QSqlDatabase_Tables1(const QSqlDatabase* self, int typeVal) {
    QList<QString> _ret = self->tables(static_cast<QSql::TableType>(typeVal));
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

QSqlQuery* QSqlDatabase_Exec1(const QSqlDatabase* self, const libqt_string query) {
    QString query_QString = QString::fromUtf8(query.data, query.len);
    return new QSqlQuery(self->exec(query_QString));
}

void QSqlDatabase_SetConnectOptions1(QSqlDatabase* self, const libqt_string options) {
    QString options_QString = QString::fromUtf8(options.data, options.len);
    self->setConnectOptions(options_QString);
}

QSqlDatabase* QSqlDatabase_AddDatabase22(const libqt_string typeVal, const libqt_string connectionName) {
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    QString connectionName_QString = QString::fromUtf8(connectionName.data, connectionName.len);
    return new QSqlDatabase(QSqlDatabase::addDatabase(typeVal_QString, connectionName_QString));
}

QSqlDatabase* QSqlDatabase_AddDatabase23(QSqlDriver* driver, const libqt_string connectionName) {
    QString connectionName_QString = QString::fromUtf8(connectionName.data, connectionName.len);
    return new QSqlDatabase(QSqlDatabase::addDatabase(driver, connectionName_QString));
}

QSqlDatabase* QSqlDatabase_Database1(const libqt_string connectionName) {
    QString connectionName_QString = QString::fromUtf8(connectionName.data, connectionName.len);
    return new QSqlDatabase(QSqlDatabase::database(connectionName_QString));
}

QSqlDatabase* QSqlDatabase_Database2(const libqt_string connectionName, bool open) {
    QString connectionName_QString = QString::fromUtf8(connectionName.data, connectionName.len);
    return new QSqlDatabase(QSqlDatabase::database(connectionName_QString, open));
}

bool QSqlDatabase_Contains1(const libqt_string connectionName) {
    QString connectionName_QString = QString::fromUtf8(connectionName.data, connectionName.len);
    return QSqlDatabase::contains(connectionName_QString);
}

void QSqlDatabase_Delete(QSqlDatabase* self) {
    delete self;
}
