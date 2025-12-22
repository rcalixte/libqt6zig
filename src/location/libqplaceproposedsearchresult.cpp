#include <QPlaceProposedSearchResult>
#include <QPlaceSearchRequest>
#include <QPlaceSearchResult>
#include <qplaceproposedsearchresult.h>
#include "libqplaceproposedsearchresult.h"
#include "libqplaceproposedsearchresult.hxx"

QPlaceProposedSearchResult* QPlaceProposedSearchResult_new() {
    return new QPlaceProposedSearchResult();
}

QPlaceProposedSearchResult* QPlaceProposedSearchResult_new2(const QPlaceSearchResult* other) {
    return new QPlaceProposedSearchResult(*other);
}

QPlaceProposedSearchResult* QPlaceProposedSearchResult_new3(const QPlaceProposedSearchResult* param1) {
    return new QPlaceProposedSearchResult(*param1);
}

QPlaceSearchRequest* QPlaceProposedSearchResult_SearchRequest(const QPlaceProposedSearchResult* self) {
    return new QPlaceSearchRequest(self->searchRequest());
}

void QPlaceProposedSearchResult_SetSearchRequest(QPlaceProposedSearchResult* self, const QPlaceSearchRequest* request) {
    self->setSearchRequest(*request);
}

void QPlaceProposedSearchResult_Delete(QPlaceProposedSearchResult* self) {
    delete self;
}
