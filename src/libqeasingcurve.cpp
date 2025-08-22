#include <QEasingCurve>
#include <QList>
#include <QPointF>
#include <qeasingcurve.h>
#include "libqeasingcurve.h"
#include "libqeasingcurve.hxx"

QEasingCurve* QEasingCurve_new() {
    return new QEasingCurve();
}

QEasingCurve* QEasingCurve_new2(const QEasingCurve* other) {
    return new QEasingCurve(*other);
}

QEasingCurve* QEasingCurve_new3(int typeVal) {
    return new QEasingCurve(static_cast<QEasingCurve::Type>(typeVal));
}

void QEasingCurve_OperatorAssign(QEasingCurve* self, const QEasingCurve* other) {
    self->operator=(*other);
}

void QEasingCurve_Swap(QEasingCurve* self, QEasingCurve* other) {
    self->swap(*other);
}

double QEasingCurve_Amplitude(const QEasingCurve* self) {
    return static_cast<double>(self->amplitude());
}

void QEasingCurve_SetAmplitude(QEasingCurve* self, double amplitude) {
    self->setAmplitude(static_cast<qreal>(amplitude));
}

double QEasingCurve_Period(const QEasingCurve* self) {
    return static_cast<double>(self->period());
}

void QEasingCurve_SetPeriod(QEasingCurve* self, double period) {
    self->setPeriod(static_cast<qreal>(period));
}

double QEasingCurve_Overshoot(const QEasingCurve* self) {
    return static_cast<double>(self->overshoot());
}

void QEasingCurve_SetOvershoot(QEasingCurve* self, double overshoot) {
    self->setOvershoot(static_cast<qreal>(overshoot));
}

void QEasingCurve_AddCubicBezierSegment(QEasingCurve* self, const QPointF* c1, const QPointF* c2, const QPointF* endPoint) {
    self->addCubicBezierSegment(*c1, *c2, *endPoint);
}

void QEasingCurve_AddTCBSegment(QEasingCurve* self, const QPointF* nextPoint, double t, double c, double b) {
    self->addTCBSegment(*nextPoint, static_cast<qreal>(t), static_cast<qreal>(c), static_cast<qreal>(b));
}

libqt_list /* of QPointF* */ QEasingCurve_ToCubicSpline(const QEasingCurve* self) {
    QList<QPointF> _ret = self->toCubicSpline();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPointF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QEasingCurve_Type(const QEasingCurve* self) {
    return static_cast<int>(self->type());
}

void QEasingCurve_SetType(QEasingCurve* self, int typeVal) {
    self->setType(static_cast<QEasingCurve::Type>(typeVal));
}

double QEasingCurve_ValueForProgress(const QEasingCurve* self, double progress) {
    return static_cast<double>(self->valueForProgress(static_cast<qreal>(progress)));
}

void QEasingCurve_Delete(QEasingCurve* self) {
    delete self;
}
