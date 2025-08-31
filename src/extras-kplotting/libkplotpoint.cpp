#include <KPlotPoint>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kplotpoint.h>
#include "libkplotpoint.h"
#include "libkplotpoint.hxx"

KPlotPoint* KPlotPoint_new() {
    return new KPlotPoint();
}

KPlotPoint* KPlotPoint_new2(double x, double y) {
    return new KPlotPoint(static_cast<double>(x), static_cast<double>(y));
}

KPlotPoint* KPlotPoint_new3(const QPointF* p) {
    return new KPlotPoint(*p);
}

KPlotPoint* KPlotPoint_new4(double x, double y, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new KPlotPoint(static_cast<double>(x), static_cast<double>(y), label_QString);
}

KPlotPoint* KPlotPoint_new5(double x, double y, const libqt_string label, double width) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new KPlotPoint(static_cast<double>(x), static_cast<double>(y), label_QString, static_cast<double>(width));
}

KPlotPoint* KPlotPoint_new6(const QPointF* p, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new KPlotPoint(*p, label_QString);
}

KPlotPoint* KPlotPoint_new7(const QPointF* p, const libqt_string label, double width) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new KPlotPoint(*p, label_QString, static_cast<double>(width));
}

QPointF* KPlotPoint_Position(const KPlotPoint* self) {
    return new QPointF(self->position());
}

void KPlotPoint_SetPosition(KPlotPoint* self, const QPointF* pos) {
    self->setPosition(*pos);
}

double KPlotPoint_X(const KPlotPoint* self) {
    return self->x();
}

void KPlotPoint_SetX(KPlotPoint* self, double x) {
    self->setX(static_cast<double>(x));
}

double KPlotPoint_Y(const KPlotPoint* self) {
    return self->y();
}

void KPlotPoint_SetY(KPlotPoint* self, double y) {
    self->setY(static_cast<double>(y));
}

libqt_string KPlotPoint_Label(const KPlotPoint* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPlotPoint_SetLabel(KPlotPoint* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

double KPlotPoint_BarWidth(const KPlotPoint* self) {
    return self->barWidth();
}

void KPlotPoint_SetBarWidth(KPlotPoint* self, double w) {
    self->setBarWidth(static_cast<double>(w));
}

void KPlotPoint_Delete(KPlotPoint* self) {
    delete self;
}
