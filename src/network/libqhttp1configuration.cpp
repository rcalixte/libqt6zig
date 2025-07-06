#include <QHttp1Configuration>
#include <qhttp1configuration.h>
#include "libqhttp1configuration.h"
#include "libqhttp1configuration.hxx"

QHttp1Configuration* QHttp1Configuration_new() {
    return new QHttp1Configuration();
}

QHttp1Configuration* QHttp1Configuration_new2(const QHttp1Configuration* other) {
    return new QHttp1Configuration(*other);
}

void QHttp1Configuration_OperatorAssign(QHttp1Configuration* self, const QHttp1Configuration* other) {
    self->operator=(*other);
}

void QHttp1Configuration_SetNumberOfConnectionsPerHost(QHttp1Configuration* self, ptrdiff_t amount) {
    self->setNumberOfConnectionsPerHost((qsizetype)(amount));
}

ptrdiff_t QHttp1Configuration_NumberOfConnectionsPerHost(const QHttp1Configuration* self) {
    return static_cast<ptrdiff_t>(self->numberOfConnectionsPerHost());
}

void QHttp1Configuration_Swap(QHttp1Configuration* self, QHttp1Configuration* other) {
    self->swap(*other);
}

void QHttp1Configuration_Delete(QHttp1Configuration* self) {
    delete self;
}
