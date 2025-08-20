#include <QAnyStringView>
#include <QSqlField>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqlrecord.h>
#include "libqsqlrecord.h"
#include "libqsqlrecord.hxx"

QSqlRecord* QSqlRecord_new() {
    return new QSqlRecord();
}

QSqlRecord* QSqlRecord_new2(const QSqlRecord* other) {
    return new QSqlRecord(*other);
}

void QSqlRecord_OperatorAssign(QSqlRecord* self, const QSqlRecord* other) {
    self->operator=(*other);
}

void QSqlRecord_Swap(QSqlRecord* self, QSqlRecord* other) {
    self->swap(*other);
}

bool QSqlRecord_OperatorEqual(const QSqlRecord* self, const QSqlRecord* other) {
    return (*self == *other);
}

bool QSqlRecord_OperatorNotEqual(const QSqlRecord* self, const QSqlRecord* other) {
    return (*self != *other);
}

QVariant* QSqlRecord_Value(const QSqlRecord* self, int i) {
    return new QVariant(self->value(static_cast<int>(i)));
}

QVariant* QSqlRecord_Value2(const QSqlRecord* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->value(QAnyStringView(name_QString)));
}

void QSqlRecord_SetValue(QSqlRecord* self, int i, const QVariant* val) {
    self->setValue(static_cast<int>(i), *val);
}

void QSqlRecord_SetValue2(QSqlRecord* self, libqt_string name, const QVariant* val) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setValue(QAnyStringView(name_QString), *val);
}

void QSqlRecord_SetNull(QSqlRecord* self, int i) {
    self->setNull(static_cast<int>(i));
}

void QSqlRecord_SetNull2(QSqlRecord* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setNull(QAnyStringView(name_QString));
}

bool QSqlRecord_IsNull(const QSqlRecord* self, int i) {
    return self->isNull(static_cast<int>(i));
}

bool QSqlRecord_IsNull2(const QSqlRecord* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->isNull(QAnyStringView(name_QString));
}

int QSqlRecord_IndexOf(const QSqlRecord* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->indexOf(QAnyStringView(name_QString));
}

libqt_string QSqlRecord_FieldName(const QSqlRecord* self, int i) {
    QString _ret = self->fieldName(static_cast<int>(i));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSqlField* QSqlRecord_Field(const QSqlRecord* self, int i) {
    return new QSqlField(self->field(static_cast<int>(i)));
}

QSqlField* QSqlRecord_Field2(const QSqlRecord* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QSqlField(self->field(QAnyStringView(name_QString)));
}

bool QSqlRecord_IsGenerated(const QSqlRecord* self, int i) {
    return self->isGenerated(static_cast<int>(i));
}

bool QSqlRecord_IsGenerated2(const QSqlRecord* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->isGenerated(QAnyStringView(name_QString));
}

void QSqlRecord_SetGenerated(QSqlRecord* self, libqt_string name, bool generated) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setGenerated(QAnyStringView(name_QString), generated);
}

void QSqlRecord_SetGenerated2(QSqlRecord* self, int i, bool generated) {
    self->setGenerated(static_cast<int>(i), generated);
}

void QSqlRecord_Append(QSqlRecord* self, const QSqlField* field) {
    self->append(*field);
}

void QSqlRecord_Replace(QSqlRecord* self, int pos, const QSqlField* field) {
    self->replace(static_cast<int>(pos), *field);
}

void QSqlRecord_Insert(QSqlRecord* self, int pos, const QSqlField* field) {
    self->insert(static_cast<int>(pos), *field);
}

void QSqlRecord_Remove(QSqlRecord* self, int pos) {
    self->remove(static_cast<int>(pos));
}

bool QSqlRecord_IsEmpty(const QSqlRecord* self) {
    return self->isEmpty();
}

bool QSqlRecord_Contains(const QSqlRecord* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->contains(QAnyStringView(name_QString));
}

void QSqlRecord_Clear(QSqlRecord* self) {
    self->clear();
}

void QSqlRecord_ClearValues(QSqlRecord* self) {
    self->clearValues();
}

int QSqlRecord_Count(const QSqlRecord* self) {
    return self->count();
}

QSqlRecord* QSqlRecord_KeyValues(const QSqlRecord* self, const QSqlRecord* keyFields) {
    return new QSqlRecord(self->keyValues(*keyFields));
}

void QSqlRecord_Delete(QSqlRecord* self) {
    delete self;
}
