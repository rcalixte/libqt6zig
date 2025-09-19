#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Utils
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <atticautils.h>
#include "libatticautils.h"
#include "libatticautils.hxx"

Attica__Utils* Attica__Utils_new(const Attica__Utils* other) {
    return new Attica::Utils(*other);
}

Attica__Utils* Attica__Utils_new2(Attica__Utils* other) {
    return new Attica::Utils(std::move(*other));
}

void Attica__Utils_CopyAssign(Attica__Utils* self, Attica__Utils* other) {
    *self = *other;
}

void Attica__Utils_MoveAssign(Attica__Utils* self, Attica__Utils* other) {
    *self = std::move(*other);
}

QDateTime* Attica__Utils_ParseQtDateTimeIso8601(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QDateTime(Attica::Utils::parseQtDateTimeIso8601(str_QString));
}

const char* Attica__Utils_ToString(int operation) {
    return (const char*)Attica::Utils::toString(static_cast<QNetworkAccessManager::Operation>(operation));
}

void Attica__Utils_Delete(Attica__Utils* self) {
    delete self;
}
