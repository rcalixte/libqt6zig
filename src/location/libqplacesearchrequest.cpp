#include <QGeoShape>
#include <QList>
#include <QPlaceCategory>
#include <QPlaceSearchRequest>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qplacesearchrequest.h>
#include "libqplacesearchrequest.h"
#include "libqplacesearchrequest.hxx"

QPlaceSearchRequest* QPlaceSearchRequest_new() {
    return new QPlaceSearchRequest();
}

QPlaceSearchRequest* QPlaceSearchRequest_new2(const QPlaceSearchRequest* other) {
    return new QPlaceSearchRequest(*other);
}

void QPlaceSearchRequest_OperatorAssign(QPlaceSearchRequest* self, const QPlaceSearchRequest* other) {
    self->operator=(*other);
}

void QPlaceSearchRequest_Swap(QPlaceSearchRequest* self, QPlaceSearchRequest* other) {
    self->swap(*other);
}

libqt_string QPlaceSearchRequest_SearchTerm(const QPlaceSearchRequest* self) {
    QString _ret = self->searchTerm();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceSearchRequest_SetSearchTerm(QPlaceSearchRequest* self, const libqt_string term) {
    QString term_QString = QString::fromUtf8(term.data, term.len);
    self->setSearchTerm(term_QString);
}

libqt_list /* of QPlaceCategory* */ QPlaceSearchRequest_Categories(const QPlaceSearchRequest* self) {
    QList<QPlaceCategory> _ret = self->categories();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceCategory** _arr = static_cast<QPlaceCategory**>(malloc(sizeof(QPlaceCategory*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPlaceSearchRequest_SetCategory(QPlaceSearchRequest* self, const QPlaceCategory* category) {
    self->setCategory(*category);
}

void QPlaceSearchRequest_SetCategories(QPlaceSearchRequest* self, const libqt_list /* of QPlaceCategory* */ categories) {
    QList<QPlaceCategory> categories_QList;
    categories_QList.reserve(categories.len);
    QPlaceCategory** categories_arr = static_cast<QPlaceCategory**>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        categories_QList.push_back(*(categories_arr[i]));
    }
    self->setCategories(categories_QList);
}

QGeoShape* QPlaceSearchRequest_SearchArea(const QPlaceSearchRequest* self) {
    return new QGeoShape(self->searchArea());
}

void QPlaceSearchRequest_SetSearchArea(QPlaceSearchRequest* self, const QGeoShape* area) {
    self->setSearchArea(*area);
}

libqt_string QPlaceSearchRequest_RecommendationId(const QPlaceSearchRequest* self) {
    QString _ret = self->recommendationId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceSearchRequest_SetRecommendationId(QPlaceSearchRequest* self, const libqt_string recommendationId) {
    QString recommendationId_QString = QString::fromUtf8(recommendationId.data, recommendationId.len);
    self->setRecommendationId(recommendationId_QString);
}

QVariant* QPlaceSearchRequest_SearchContext(const QPlaceSearchRequest* self) {
    return new QVariant(self->searchContext());
}

void QPlaceSearchRequest_SetSearchContext(QPlaceSearchRequest* self, const QVariant* context) {
    self->setSearchContext(*context);
}

int QPlaceSearchRequest_VisibilityScope(const QPlaceSearchRequest* self) {
    return static_cast<int>(self->visibilityScope());
}

void QPlaceSearchRequest_SetVisibilityScope(QPlaceSearchRequest* self, int visibilityScopes) {
    self->setVisibilityScope(static_cast<QLocation::VisibilityScope>(visibilityScopes));
}

int QPlaceSearchRequest_RelevanceHint(const QPlaceSearchRequest* self) {
    return static_cast<int>(self->relevanceHint());
}

void QPlaceSearchRequest_SetRelevanceHint(QPlaceSearchRequest* self, int hint) {
    self->setRelevanceHint(static_cast<QPlaceSearchRequest::RelevanceHint>(hint));
}

int QPlaceSearchRequest_Limit(const QPlaceSearchRequest* self) {
    return self->limit();
}

void QPlaceSearchRequest_SetLimit(QPlaceSearchRequest* self, int limit) {
    self->setLimit(static_cast<int>(limit));
}

void QPlaceSearchRequest_Clear(QPlaceSearchRequest* self) {
    self->clear();
}

void QPlaceSearchRequest_Delete(QPlaceSearchRequest* self) {
    delete self;
}
