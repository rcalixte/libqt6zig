#include <KPlotObject>
#include <KPlotPoint>
#include <KPlotWidget>
#include <QBrush>
#include <QColor>
#include <QList>
#include <QPainter>
#include <QPen>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kplotobject.h>
#include "libkplotobject.h"
#include "libkplotobject.hxx"

KPlotObject* KPlotObject_new() {
    return new KPlotObject();
}

KPlotObject* KPlotObject_new2(const QColor* color) {
    return new KPlotObject(*color);
}

KPlotObject* KPlotObject_new3(const QColor* color, int otype) {
    return new KPlotObject(*color, static_cast<KPlotObject::PlotType>(otype));
}

KPlotObject* KPlotObject_new4(const QColor* color, int otype, double size) {
    return new KPlotObject(*color, static_cast<KPlotObject::PlotType>(otype), static_cast<double>(size));
}

KPlotObject* KPlotObject_new5(const QColor* color, int otype, double size, int ps) {
    return new KPlotObject(*color, static_cast<KPlotObject::PlotType>(otype), static_cast<double>(size), static_cast<KPlotObject::PointStyle>(ps));
}

int KPlotObject_PlotTypes(const KPlotObject* self) {
    return static_cast<int>(self->plotTypes());
}

void KPlotObject_SetShowPoints(KPlotObject* self, bool b) {
    self->setShowPoints(b);
}

void KPlotObject_SetShowLines(KPlotObject* self, bool b) {
    self->setShowLines(b);
}

void KPlotObject_SetShowBars(KPlotObject* self, bool b) {
    self->setShowBars(b);
}

double KPlotObject_Size(const KPlotObject* self) {
    return self->size();
}

void KPlotObject_SetSize(KPlotObject* self, double s) {
    self->setSize(static_cast<double>(s));
}

int KPlotObject_PointStyle(const KPlotObject* self) {
    return static_cast<int>(self->pointStyle());
}

void KPlotObject_SetPointStyle(KPlotObject* self, int p) {
    self->setPointStyle(static_cast<KPlotObject::PointStyle>(p));
}

QPen* KPlotObject_Pen(const KPlotObject* self) {
    const QPen& _ret = self->pen();
    // Cast returned reference into pointer
    return const_cast<QPen*>(&_ret);
}

void KPlotObject_SetPen(KPlotObject* self, const QPen* p) {
    self->setPen(*p);
}

QPen* KPlotObject_LinePen(const KPlotObject* self) {
    const QPen& _ret = self->linePen();
    // Cast returned reference into pointer
    return const_cast<QPen*>(&_ret);
}

void KPlotObject_SetLinePen(KPlotObject* self, const QPen* p) {
    self->setLinePen(*p);
}

QPen* KPlotObject_BarPen(const KPlotObject* self) {
    const QPen& _ret = self->barPen();
    // Cast returned reference into pointer
    return const_cast<QPen*>(&_ret);
}

void KPlotObject_SetBarPen(KPlotObject* self, const QPen* p) {
    self->setBarPen(*p);
}

QPen* KPlotObject_LabelPen(const KPlotObject* self) {
    const QPen& _ret = self->labelPen();
    // Cast returned reference into pointer
    return const_cast<QPen*>(&_ret);
}

void KPlotObject_SetLabelPen(KPlotObject* self, const QPen* p) {
    self->setLabelPen(*p);
}

QBrush* KPlotObject_Brush(const KPlotObject* self) {
    return new QBrush(self->brush());
}

void KPlotObject_SetBrush(KPlotObject* self, const QBrush* b) {
    self->setBrush(*b);
}

QBrush* KPlotObject_BarBrush(const KPlotObject* self) {
    return new QBrush(self->barBrush());
}

void KPlotObject_SetBarBrush(KPlotObject* self, const QBrush* b) {
    self->setBarBrush(*b);
}

libqt_list /* of KPlotPoint* */ KPlotObject_Points(const KPlotObject* self) {
    QList<KPlotPoint*> _ret = self->points();
    // Convert QList<> from C++ memory to manually-managed C memory
    KPlotPoint** _arr = static_cast<KPlotPoint**>(malloc(sizeof(KPlotPoint*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KPlotObject_AddPoint(KPlotObject* self, const QPointF* p) {
    self->addPoint(*p);
}

void KPlotObject_AddPoint2(KPlotObject* self, KPlotPoint* p) {
    self->addPoint(p);
}

void KPlotObject_AddPoint3(KPlotObject* self, double x, double y) {
    self->addPoint(static_cast<double>(x), static_cast<double>(y));
}

void KPlotObject_RemovePoint(KPlotObject* self, int index) {
    self->removePoint(static_cast<int>(index));
}

void KPlotObject_ClearPoints(KPlotObject* self) {
    self->clearPoints();
}

void KPlotObject_Draw(KPlotObject* self, QPainter* p, KPlotWidget* pw) {
    self->draw(p, pw);
}

void KPlotObject_AddPoint22(KPlotObject* self, const QPointF* p, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->addPoint(*p, label_QString);
}

void KPlotObject_AddPoint32(KPlotObject* self, const QPointF* p, const libqt_string label, double barWidth) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->addPoint(*p, label_QString, static_cast<double>(barWidth));
}

void KPlotObject_AddPoint33(KPlotObject* self, double x, double y, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->addPoint(static_cast<double>(x), static_cast<double>(y), label_QString);
}

void KPlotObject_AddPoint4(KPlotObject* self, double x, double y, const libqt_string label, double barWidth) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->addPoint(static_cast<double>(x), static_cast<double>(y), label_QString, static_cast<double>(barWidth));
}

void KPlotObject_Delete(KPlotObject* self) {
    delete self;
}
