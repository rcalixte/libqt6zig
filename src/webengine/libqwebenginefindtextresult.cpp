#include <QWebEngineFindTextResult>
#include <qwebenginefindtextresult.h>
#include "libqwebenginefindtextresult.h"
#include "libqwebenginefindtextresult.hxx"

QWebEngineFindTextResult* QWebEngineFindTextResult_new() {
    return new QWebEngineFindTextResult();
}

QWebEngineFindTextResult* QWebEngineFindTextResult_new2(const QWebEngineFindTextResult* other) {
    return new QWebEngineFindTextResult(*other);
}

int QWebEngineFindTextResult_NumberOfMatches(const QWebEngineFindTextResult* self) {
    return self->numberOfMatches();
}

int QWebEngineFindTextResult_ActiveMatch(const QWebEngineFindTextResult* self) {
    return self->activeMatch();
}

void QWebEngineFindTextResult_OperatorAssign(QWebEngineFindTextResult* self, const QWebEngineFindTextResult* other) {
    self->operator=(*other);
}

void QWebEngineFindTextResult_Delete(QWebEngineFindTextResult* self) {
    delete self;
}
