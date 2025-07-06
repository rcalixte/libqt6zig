#include <QBasicTimer>
#include <QObject>
#include <qbasictimer.h>
#include "libqbasictimer.h"
#include "libqbasictimer.hxx"

QBasicTimer* QBasicTimer_new() {
    return new QBasicTimer();
}

void QBasicTimer_Swap(QBasicTimer* self, QBasicTimer* other) {
    self->swap(*other);
}

bool QBasicTimer_IsActive(const QBasicTimer* self) {
    return self->isActive();
}

int QBasicTimer_TimerId(const QBasicTimer* self) {
    return self->timerId();
}

int QBasicTimer_Id(const QBasicTimer* self) {
    return static_cast<int>(self->id());
}

void QBasicTimer_Start(QBasicTimer* self, int msec, QObject* obj) {
    self->start(static_cast<int>(msec), obj);
}

void QBasicTimer_Start2(QBasicTimer* self, int msec, int timerType, QObject* obj) {
    self->start(static_cast<int>(msec), static_cast<Qt::TimerType>(timerType), obj);
}

void QBasicTimer_Stop(QBasicTimer* self) {
    self->stop();
}

void QBasicTimer_Delete(QBasicTimer* self) {
    delete self;
}
