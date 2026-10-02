#include <QPlace>
#include <QPlaceResult>
#include <QPlaceSearchResult>
#include <qplaceresult.h>
#include "libqplaceresult.h"
#include "libqplaceresult.hxx"

QPlaceResult* QPlaceResult_new() {
    return new QPlaceResult();
}

QPlaceResult* QPlaceResult_new2(const QPlaceSearchResult* other) {
    return new QPlaceResult(*other);
}

QPlaceResult* QPlaceResult_new3(const QPlaceResult* param1) {
    return new QPlaceResult(*param1);
}

double QPlaceResult_Distance(const QPlaceResult* self) {
    return static_cast<double>(self->distance());
}

void QPlaceResult_SetDistance(QPlaceResult* self, double distance) {
    self->setDistance(static_cast<qreal>(distance));
}

QPlace* QPlaceResult_Place(const QPlaceResult* self) {
    return new QPlace(self->place());
}

void QPlaceResult_SetPlace(QPlaceResult* self, const QPlace* place) {
    self->setPlace(*place);
}

bool QPlaceResult_IsSponsored(const QPlaceResult* self) {
    return self->isSponsored();
}

void QPlaceResult_SetSponsored(QPlaceResult* self, bool sponsored) {
    self->setSponsored(sponsored);
}

void QPlaceResult_Delete(QPlaceResult* self) {
    delete self;
}
