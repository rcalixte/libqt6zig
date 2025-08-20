#include <QSqlField>
#include <QSqlIndex>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsqlindex.h>
#include "libqsqlindex.h"
#include "libqsqlindex.hxx"

QSqlIndex* QSqlIndex_new() {
    return new QSqlIndex();
}

QSqlIndex* QSqlIndex_new2(const QSqlIndex* other) {
    return new QSqlIndex(*other);
}

QSqlIndex* QSqlIndex_new3(const libqt_string cursorName) {
    QString cursorName_QString = QString::fromUtf8(cursorName.data, cursorName.len);
    return new QSqlIndex(cursorName_QString);
}

QSqlIndex* QSqlIndex_new4(const libqt_string cursorName, const libqt_string name) {
    QString cursorName_QString = QString::fromUtf8(cursorName.data, cursorName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QSqlIndex(cursorName_QString, name_QString);
}

void QSqlIndex_OperatorAssign(QSqlIndex* self, const QSqlIndex* other) {
    self->operator=(*other);
}

void QSqlIndex_Swap(QSqlIndex* self, QSqlIndex* other) {
    self->swap(*other);
}

void QSqlIndex_SetCursorName(QSqlIndex* self, const libqt_string cursorName) {
    QString cursorName_QString = QString::fromUtf8(cursorName.data, cursorName.len);
    self->setCursorName(cursorName_QString);
}

libqt_string QSqlIndex_CursorName(const QSqlIndex* self) {
    QString _ret = self->cursorName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSqlIndex_SetName(QSqlIndex* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string QSqlIndex_Name(const QSqlIndex* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSqlIndex_Append(QSqlIndex* self, const QSqlField* field) {
    self->append(*field);
}

void QSqlIndex_Append2(QSqlIndex* self, const QSqlField* field, bool desc) {
    self->append(*field, desc);
}

bool QSqlIndex_IsDescending(const QSqlIndex* self, int i) {
    return self->isDescending(static_cast<int>(i));
}

void QSqlIndex_SetDescending(QSqlIndex* self, int i, bool desc) {
    self->setDescending(static_cast<int>(i), desc);
}

void QSqlIndex_Delete(QSqlIndex* self) {
    delete self;
}
