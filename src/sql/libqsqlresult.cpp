#include <QList>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qsqlresult.h>
#include "libqsqlresult.h"
#include "libqsqlresult.hxx"

QVariant* QSqlResult_Handle(const QSqlResult* self) {
    return new QVariant(self->handle());
}

void QSqlResult_Delete(QSqlResult* self) {
    delete self;
}
