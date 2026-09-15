#include <QJSListForInIterator>
#include <QJSListForOfIterator>
#include <QJSListIndexClamp>
#include <qjslist.h>
#include "libqjslist.h"
#include "libqjslist.hxx"

QJSListIndexClamp* QJSListIndexClamp_new(const QJSListIndexClamp* other) {
    return new QJSListIndexClamp(*other);
}

QJSListIndexClamp* QJSListIndexClamp_new2(QJSListIndexClamp* other) {
    return new QJSListIndexClamp(std::move(*other));
}

QJSListIndexClamp* QJSListIndexClamp_new3(const QJSListIndexClamp* param1) {
    return new QJSListIndexClamp(*param1);
}

QJSListIndexClamp* QJSListIndexClamp_new4() {
    return new QJSListIndexClamp();
}

void QJSListIndexClamp_CopyAssign(QJSListIndexClamp* self, QJSListIndexClamp* other) {
    *self = *other;
}

void QJSListIndexClamp_MoveAssign(QJSListIndexClamp* self, QJSListIndexClamp* other) {
    *self = std::move(*other);
}

ptrdiff_t QJSListIndexClamp_Clamp(ptrdiff_t start, ptrdiff_t max) {
    return static_cast<ptrdiff_t>(QJSListIndexClamp::clamp((qsizetype)(start), (qsizetype)(max)));
}

void QJSListIndexClamp_OperatorAssign(QJSListIndexClamp* self, const QJSListIndexClamp* param1) {
    self->operator=(*param1);
}

ptrdiff_t QJSListIndexClamp_Clamp3(ptrdiff_t start, ptrdiff_t max, ptrdiff_t min) {
    return static_cast<ptrdiff_t>(QJSListIndexClamp::clamp((qsizetype)(start), (qsizetype)(max), (qsizetype)(min)));
}

void QJSListIndexClamp_Delete(QJSListIndexClamp* self) {
    delete self;
}

bool QJSListForInIterator_HasNext(const QJSListForInIterator* self) {
    return self->hasNext();
}

ptrdiff_t QJSListForInIterator_Next(QJSListForInIterator* self) {
    return static_cast<ptrdiff_t>(self->next());
}

void QJSListForInIterator_Delete(QJSListForInIterator* self) {
    delete self;
}

void QJSListForOfIterator_Init(QJSListForOfIterator* self) {
    self->init();
}

void QJSListForOfIterator_Delete(QJSListForOfIterator* self) {
    delete self;
}
