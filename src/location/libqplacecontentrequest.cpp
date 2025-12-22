#include <QPlaceContentRequest>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qplacecontentrequest.h>
#include "libqplacecontentrequest.h"
#include "libqplacecontentrequest.hxx"

QPlaceContentRequest* QPlaceContentRequest_new() {
    return new QPlaceContentRequest();
}

QPlaceContentRequest* QPlaceContentRequest_new2(const QPlaceContentRequest* other) {
    return new QPlaceContentRequest(*other);
}

void QPlaceContentRequest_OperatorAssign(QPlaceContentRequest* self, const QPlaceContentRequest* other) {
    self->operator=(*other);
}

void QPlaceContentRequest_Swap(QPlaceContentRequest* self, QPlaceContentRequest* other) {
    self->swap(*other);
}

int QPlaceContentRequest_ContentType(const QPlaceContentRequest* self) {
    return static_cast<int>(self->contentType());
}

void QPlaceContentRequest_SetContentType(QPlaceContentRequest* self, int typeVal) {
    self->setContentType(static_cast<QPlaceContent::Type>(typeVal));
}

libqt_string QPlaceContentRequest_PlaceId(const QPlaceContentRequest* self) {
    QString _ret = self->placeId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceContentRequest_SetPlaceId(QPlaceContentRequest* self, const libqt_string identifier) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    self->setPlaceId(identifier_QString);
}

QVariant* QPlaceContentRequest_ContentContext(const QPlaceContentRequest* self) {
    return new QVariant(self->contentContext());
}

void QPlaceContentRequest_SetContentContext(QPlaceContentRequest* self, const QVariant* context) {
    self->setContentContext(*context);
}

int QPlaceContentRequest_Limit(const QPlaceContentRequest* self) {
    return self->limit();
}

void QPlaceContentRequest_SetLimit(QPlaceContentRequest* self, int limit) {
    self->setLimit(static_cast<int>(limit));
}

void QPlaceContentRequest_Clear(QPlaceContentRequest* self) {
    self->clear();
}

void QPlaceContentRequest_Delete(QPlaceContentRequest* self) {
    delete self;
}
