#include <QBrush>
#include <QColor>
#include <QList>
#include <QPen>
#include <QVariant>
#include <qpen.h>
#include "libqpen.h"
#include "libqpen.hxx"

QPen* QPen_new() {
    return new QPen();
}

QPen* QPen_new2(int param1) {
    return new QPen(static_cast<Qt::PenStyle>(param1));
}

QPen* QPen_new3(const QColor* color) {
    return new QPen(*color);
}

QPen* QPen_new4(const QBrush* brush, double width) {
    return new QPen(*brush, static_cast<qreal>(width));
}

QPen* QPen_new5(const QPen* pen) {
    return new QPen(*pen);
}

QPen* QPen_new6(const QBrush* brush, double width, int s) {
    return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s));
}

QPen* QPen_new7(const QBrush* brush, double width, int s, int c) {
    return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c));
}

QPen* QPen_new8(const QBrush* brush, double width, int s, int c, int j) {
    return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c), static_cast<Qt::PenJoinStyle>(j));
}

void QPen_OperatorAssign(QPen* self, const QPen* pen) {
    self->operator=(*pen);
}

void QPen_Swap(QPen* self, QPen* other) {
    self->swap(*other);
}

int QPen_Style(const QPen* self) {
    return static_cast<int>(self->style());
}

void QPen_SetStyle(QPen* self, int style) {
    self->setStyle(static_cast<Qt::PenStyle>(style));
}

libqt_list /* of double */ QPen_DashPattern(const QPen* self) {
    QList<double> _ret = self->dashPattern();
    // Convert QList<> from C++ memory to manually-managed C memory
    double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPen_SetDashPattern(QPen* self, const libqt_list /* of double */ pattern) {
    QList<double> pattern_QList;
    pattern_QList.reserve(pattern.len);
    double* pattern_arr = static_cast<double*>(pattern.data);
    for (size_t i = 0; i < pattern.len; ++i) {
        pattern_QList.push_back(static_cast<double>(pattern_arr[i]));
    }
    self->setDashPattern(pattern_QList);
}

double QPen_DashOffset(const QPen* self) {
    return static_cast<double>(self->dashOffset());
}

void QPen_SetDashOffset(QPen* self, double doffset) {
    self->setDashOffset(static_cast<qreal>(doffset));
}

double QPen_MiterLimit(const QPen* self) {
    return static_cast<double>(self->miterLimit());
}

void QPen_SetMiterLimit(QPen* self, double limit) {
    self->setMiterLimit(static_cast<qreal>(limit));
}

double QPen_WidthF(const QPen* self) {
    return static_cast<double>(self->widthF());
}

void QPen_SetWidthF(QPen* self, double width) {
    self->setWidthF(static_cast<qreal>(width));
}

int QPen_Width(const QPen* self) {
    return self->width();
}

void QPen_SetWidth(QPen* self, int width) {
    self->setWidth(static_cast<int>(width));
}

QColor* QPen_Color(const QPen* self) {
    return new QColor(self->color());
}

void QPen_SetColor(QPen* self, const QColor* color) {
    self->setColor(*color);
}

QBrush* QPen_Brush(const QPen* self) {
    return new QBrush(self->brush());
}

void QPen_SetBrush(QPen* self, const QBrush* brush) {
    self->setBrush(*brush);
}

bool QPen_IsSolid(const QPen* self) {
    return self->isSolid();
}

int QPen_CapStyle(const QPen* self) {
    return static_cast<int>(self->capStyle());
}

void QPen_SetCapStyle(QPen* self, int pcs) {
    self->setCapStyle(static_cast<Qt::PenCapStyle>(pcs));
}

int QPen_JoinStyle(const QPen* self) {
    return static_cast<int>(self->joinStyle());
}

void QPen_SetJoinStyle(QPen* self, int pcs) {
    self->setJoinStyle(static_cast<Qt::PenJoinStyle>(pcs));
}

bool QPen_IsCosmetic(const QPen* self) {
    return self->isCosmetic();
}

void QPen_SetCosmetic(QPen* self, bool cosmetic) {
    self->setCosmetic(cosmetic);
}

bool QPen_OperatorEqual(const QPen* self, const QPen* p) {
    return (*self == *p);
}

bool QPen_OperatorNotEqual(const QPen* self, const QPen* p) {
    return (*self != *p);
}

QVariant* QPen_ToQVariant(const QPen* self) {
    return new QVariant(self->operator QVariant());
}

bool QPen_IsDetached(QPen* self) {
    return self->isDetached();
}

void QPen_Delete(QPen* self) {
    delete self;
}
