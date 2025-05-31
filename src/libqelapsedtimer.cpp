#include <QElapsedTimer>
#include <qelapsedtimer.h>
#include "libqelapsedtimer.h"
#include "libqelapsedtimer.hxx"

QElapsedTimer* QElapsedTimer_new(const QElapsedTimer* other) {
    return new QElapsedTimer(*other);
}

QElapsedTimer* QElapsedTimer_new2(QElapsedTimer* other) {
    return new QElapsedTimer(std::move(*other));
}

QElapsedTimer* QElapsedTimer_new3() {
    return new QElapsedTimer();
}

void QElapsedTimer_CopyAssign(QElapsedTimer* self, QElapsedTimer* other) {
    *self = *other;
}

void QElapsedTimer_MoveAssign(QElapsedTimer* self, QElapsedTimer* other) {
    *self = std::move(*other);
}

int QElapsedTimer_ClockType() {
    return static_cast<int>(QElapsedTimer::clockType());
}

bool QElapsedTimer_IsMonotonic() {
    return QElapsedTimer::isMonotonic();
}

void QElapsedTimer_Start(QElapsedTimer* self) {
    self->start();
}

long long QElapsedTimer_Restart(QElapsedTimer* self) {
    return static_cast<long long>(self->restart());
}

void QElapsedTimer_Invalidate(QElapsedTimer* self) {
    self->invalidate();
}

bool QElapsedTimer_IsValid(const QElapsedTimer* self) {
    return self->isValid();
}

long long QElapsedTimer_NsecsElapsed(const QElapsedTimer* self) {
    return static_cast<long long>(self->nsecsElapsed());
}

long long QElapsedTimer_Elapsed(const QElapsedTimer* self) {
    return static_cast<long long>(self->elapsed());
}

bool QElapsedTimer_HasExpired(const QElapsedTimer* self, long long timeout) {
    return self->hasExpired(static_cast<qint64>(timeout));
}

long long QElapsedTimer_MsecsSinceReference(const QElapsedTimer* self) {
    return static_cast<long long>(self->msecsSinceReference());
}

long long QElapsedTimer_MsecsTo(const QElapsedTimer* self, const QElapsedTimer* other) {
    return static_cast<long long>(self->msecsTo(*other));
}

long long QElapsedTimer_SecsTo(const QElapsedTimer* self, const QElapsedTimer* other) {
    return static_cast<long long>(self->secsTo(*other));
}

void QElapsedTimer_Delete(QElapsedTimer* self) {
    delete self;
}
