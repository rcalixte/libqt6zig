#include <QAnyStringView>
#include <QList>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqlquery.h>
#include "libqsqlquery.h"
#include "libqsqlquery.hxx"

QSqlQuery* QSqlQuery_new(QSqlResult* r) {
    return new QSqlQuery(r);
}

QSqlQuery* QSqlQuery_new2() {
    return new QSqlQuery();
}

QSqlQuery* QSqlQuery_new3(const QSqlDatabase* db) {
    return new QSqlQuery(*db);
}

QSqlQuery* QSqlQuery_new4(const QSqlQuery* other) {
    return new QSqlQuery(*other);
}

QSqlQuery* QSqlQuery_new5(const libqt_string query) {
    QString query_QString = QString::fromUtf8(query.data, query.len);
    return new QSqlQuery(query_QString);
}

QSqlQuery* QSqlQuery_new6(const libqt_string query, const QSqlDatabase* db) {
    QString query_QString = QString::fromUtf8(query.data, query.len);
    return new QSqlQuery(query_QString, *db);
}

void QSqlQuery_OperatorAssign(QSqlQuery* self, const QSqlQuery* other) {
    self->operator=(*other);
}

void QSqlQuery_Swap(QSqlQuery* self, QSqlQuery* other) {
    self->swap(*other);
}

bool QSqlQuery_IsValid(const QSqlQuery* self) {
    return self->isValid();
}

bool QSqlQuery_IsActive(const QSqlQuery* self) {
    return self->isActive();
}

bool QSqlQuery_IsNull(const QSqlQuery* self, int field) {
    return self->isNull(static_cast<int>(field));
}

bool QSqlQuery_IsNull2(const QSqlQuery* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->isNull(QAnyStringView(name_QString));
}

int QSqlQuery_At(const QSqlQuery* self) {
    return self->at();
}

libqt_string QSqlQuery_LastQuery(const QSqlQuery* self) {
    QString _ret = self->lastQuery();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSqlQuery_NumRowsAffected(const QSqlQuery* self) {
    return self->numRowsAffected();
}

QSqlError* QSqlQuery_LastError(const QSqlQuery* self) {
    return new QSqlError(self->lastError());
}

bool QSqlQuery_IsSelect(const QSqlQuery* self) {
    return self->isSelect();
}

int QSqlQuery_Size(const QSqlQuery* self) {
    return self->size();
}

QSqlDriver* QSqlQuery_Driver(const QSqlQuery* self) {
    return (QSqlDriver*)self->driver();
}

QSqlResult* QSqlQuery_Result(const QSqlQuery* self) {
    return (QSqlResult*)self->result();
}

bool QSqlQuery_IsForwardOnly(const QSqlQuery* self) {
    return self->isForwardOnly();
}

QSqlRecord* QSqlQuery_Record(const QSqlQuery* self) {
    return new QSqlRecord(self->record());
}

void QSqlQuery_SetForwardOnly(QSqlQuery* self, bool forward) {
    self->setForwardOnly(forward);
}

bool QSqlQuery_Exec(QSqlQuery* self, const libqt_string query) {
    QString query_QString = QString::fromUtf8(query.data, query.len);
    return self->exec(query_QString);
}

QVariant* QSqlQuery_Value(const QSqlQuery* self, int i) {
    return new QVariant(self->value(static_cast<int>(i)));
}

QVariant* QSqlQuery_Value2(const QSqlQuery* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->value(QAnyStringView(name_QString)));
}

void QSqlQuery_SetNumericalPrecisionPolicy(QSqlQuery* self, int precisionPolicy) {
    self->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(precisionPolicy));
}

int QSqlQuery_NumericalPrecisionPolicy(const QSqlQuery* self) {
    return static_cast<int>(self->numericalPrecisionPolicy());
}

void QSqlQuery_SetPositionalBindingEnabled(QSqlQuery* self, bool enable) {
    self->setPositionalBindingEnabled(enable);
}

bool QSqlQuery_IsPositionalBindingEnabled(const QSqlQuery* self) {
    return self->isPositionalBindingEnabled();
}

bool QSqlQuery_Seek(QSqlQuery* self, int i) {
    return self->seek(static_cast<int>(i));
}

bool QSqlQuery_Next(QSqlQuery* self) {
    return self->next();
}

bool QSqlQuery_Previous(QSqlQuery* self) {
    return self->previous();
}

bool QSqlQuery_First(QSqlQuery* self) {
    return self->first();
}

bool QSqlQuery_Last(QSqlQuery* self) {
    return self->last();
}

void QSqlQuery_Clear(QSqlQuery* self) {
    self->clear();
}

bool QSqlQuery_Exec2(QSqlQuery* self) {
    return self->exec();
}

bool QSqlQuery_ExecBatch(QSqlQuery* self) {
    return self->execBatch();
}

bool QSqlQuery_Prepare(QSqlQuery* self, const libqt_string query) {
    QString query_QString = QString::fromUtf8(query.data, query.len);
    return self->prepare(query_QString);
}

void QSqlQuery_BindValue(QSqlQuery* self, const libqt_string placeholder, const QVariant* val) {
    QString placeholder_QString = QString::fromUtf8(placeholder.data, placeholder.len);
    self->bindValue(placeholder_QString, *val);
}

void QSqlQuery_BindValue2(QSqlQuery* self, int pos, const QVariant* val) {
    self->bindValue(static_cast<int>(pos), *val);
}

void QSqlQuery_AddBindValue(QSqlQuery* self, const QVariant* val) {
    self->addBindValue(*val);
}

QVariant* QSqlQuery_BoundValue(const QSqlQuery* self, const libqt_string placeholder) {
    QString placeholder_QString = QString::fromUtf8(placeholder.data, placeholder.len);
    return new QVariant(self->boundValue(placeholder_QString));
}

QVariant* QSqlQuery_BoundValue2(const QSqlQuery* self, int pos) {
    return new QVariant(self->boundValue(static_cast<int>(pos)));
}

libqt_list /* of QVariant* */ QSqlQuery_BoundValues(const QSqlQuery* self) {
    QList<QVariant> _ret = self->boundValues();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QSqlQuery_BoundValueNames(const QSqlQuery* self) {
    QList<QString> _ret = self->boundValueNames();
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

libqt_string QSqlQuery_BoundValueName(const QSqlQuery* self, int pos) {
    QString _ret = self->boundValueName(static_cast<int>(pos));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlQuery_ExecutedQuery(const QSqlQuery* self) {
    QString _ret = self->executedQuery();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QSqlQuery_LastInsertId(const QSqlQuery* self) {
    return new QVariant(self->lastInsertId());
}

void QSqlQuery_Finish(QSqlQuery* self) {
    self->finish();
}

bool QSqlQuery_NextResult(QSqlQuery* self) {
    return self->nextResult();
}

bool QSqlQuery_Seek2(QSqlQuery* self, int i, bool relative) {
    return self->seek(static_cast<int>(i), relative);
}

bool QSqlQuery_ExecBatch1(QSqlQuery* self, int mode) {
    return self->execBatch(static_cast<QSqlQuery::BatchExecutionMode>(mode));
}

void QSqlQuery_BindValue3(QSqlQuery* self, const libqt_string placeholder, const QVariant* val, int typeVal) {
    QString placeholder_QString = QString::fromUtf8(placeholder.data, placeholder.len);
    self->bindValue(placeholder_QString, *val, static_cast<QSql::ParamType>(typeVal));
}

void QSqlQuery_BindValue32(QSqlQuery* self, int pos, const QVariant* val, int typeVal) {
    self->bindValue(static_cast<int>(pos), *val, static_cast<QSql::ParamType>(typeVal));
}

void QSqlQuery_AddBindValue2(QSqlQuery* self, const QVariant* val, int typeVal) {
    self->addBindValue(*val, static_cast<QSql::ParamType>(typeVal));
}

void QSqlQuery_Delete(QSqlQuery* self) {
    delete self;
}
