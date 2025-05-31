#include <QFont>
#include <QList>
#include <QPainterPath>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPainterPath__Element
#include <QPainterPathStroker>
#include <QPen>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpainterpath.h>
#include "libqpainterpath.h"
#include "libqpainterpath.hxx"

QPainterPath* QPainterPath_new() {
    return new QPainterPath();
}

QPainterPath* QPainterPath_new2(const QPointF* startPoint) {
    return new QPainterPath(*startPoint);
}

QPainterPath* QPainterPath_new3(const QPainterPath* other) {
    return new QPainterPath(*other);
}

void QPainterPath_OperatorAssign(QPainterPath* self, const QPainterPath* other) {
    self->operator=(*other);
}

void QPainterPath_Swap(QPainterPath* self, QPainterPath* other) {
    self->swap(*other);
}

void QPainterPath_Clear(QPainterPath* self) {
    self->clear();
}

void QPainterPath_Reserve(QPainterPath* self, int size) {
    self->reserve(static_cast<int>(size));
}

int QPainterPath_Capacity(const QPainterPath* self) {
    return self->capacity();
}

void QPainterPath_CloseSubpath(QPainterPath* self) {
    self->closeSubpath();
}

void QPainterPath_MoveTo(QPainterPath* self, const QPointF* p) {
    self->moveTo(*p);
}

void QPainterPath_MoveTo2(QPainterPath* self, double x, double y) {
    self->moveTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QPainterPath_LineTo(QPainterPath* self, const QPointF* p) {
    self->lineTo(*p);
}

void QPainterPath_LineTo2(QPainterPath* self, double x, double y) {
    self->lineTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QPainterPath_ArcMoveTo(QPainterPath* self, const QRectF* rect, double angle) {
    self->arcMoveTo(*rect, static_cast<qreal>(angle));
}

void QPainterPath_ArcMoveTo2(QPainterPath* self, double x, double y, double w, double h, double angle) {
    self->arcMoveTo(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(angle));
}

void QPainterPath_ArcTo(QPainterPath* self, const QRectF* rect, double startAngle, double arcLength) {
    self->arcTo(*rect, static_cast<qreal>(startAngle), static_cast<qreal>(arcLength));
}

void QPainterPath_ArcTo2(QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength) {
    self->arcTo(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(startAngle), static_cast<qreal>(arcLength));
}

void QPainterPath_CubicTo(QPainterPath* self, const QPointF* ctrlPt1, const QPointF* ctrlPt2, const QPointF* endPt) {
    self->cubicTo(*ctrlPt1, *ctrlPt2, *endPt);
}

void QPainterPath_CubicTo2(QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
    self->cubicTo(static_cast<qreal>(ctrlPt1x), static_cast<qreal>(ctrlPt1y), static_cast<qreal>(ctrlPt2x), static_cast<qreal>(ctrlPt2y), static_cast<qreal>(endPtx), static_cast<qreal>(endPty));
}

void QPainterPath_QuadTo(QPainterPath* self, const QPointF* ctrlPt, const QPointF* endPt) {
    self->quadTo(*ctrlPt, *endPt);
}

void QPainterPath_QuadTo2(QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
    self->quadTo(static_cast<qreal>(ctrlPtx), static_cast<qreal>(ctrlPty), static_cast<qreal>(endPtx), static_cast<qreal>(endPty));
}

QPointF* QPainterPath_CurrentPosition(const QPainterPath* self) {
    return new QPointF(self->currentPosition());
}

void QPainterPath_AddRect(QPainterPath* self, const QRectF* rect) {
    self->addRect(*rect);
}

void QPainterPath_AddRect2(QPainterPath* self, double x, double y, double w, double h) {
    self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QPainterPath_AddEllipse(QPainterPath* self, const QRectF* rect) {
    self->addEllipse(*rect);
}

void QPainterPath_AddEllipse2(QPainterPath* self, double x, double y, double w, double h) {
    self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QPainterPath_AddEllipse3(QPainterPath* self, const QPointF* center, double rx, double ry) {
    self->addEllipse(*center, static_cast<qreal>(rx), static_cast<qreal>(ry));
}

void QPainterPath_AddText(QPainterPath* self, const QPointF* point, const QFont* f, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addText(*point, *f, text_QString);
}

void QPainterPath_AddText2(QPainterPath* self, double x, double y, const QFont* f, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addText(static_cast<qreal>(x), static_cast<qreal>(y), *f, text_QString);
}

void QPainterPath_AddPath(QPainterPath* self, const QPainterPath* path) {
    self->addPath(*path);
}

void QPainterPath_AddRegion(QPainterPath* self, const QRegion* region) {
    self->addRegion(*region);
}

void QPainterPath_AddRoundedRect(QPainterPath* self, const QRectF* rect, double xRadius, double yRadius) {
    self->addRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainterPath_AddRoundedRect2(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius) {
    self->addRoundedRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainterPath_ConnectPath(QPainterPath* self, const QPainterPath* path) {
    self->connectPath(*path);
}

bool QPainterPath_Contains(const QPainterPath* self, const QPointF* pt) {
    return self->contains(*pt);
}

bool QPainterPath_ContainsWithRect(const QPainterPath* self, const QRectF* rect) {
    return self->contains(*rect);
}

bool QPainterPath_Intersects(const QPainterPath* self, const QRectF* rect) {
    return self->intersects(*rect);
}

void QPainterPath_Translate(QPainterPath* self, double dx, double dy) {
    self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QPainterPath_TranslateWithOffset(QPainterPath* self, const QPointF* offset) {
    self->translate(*offset);
}

QPainterPath* QPainterPath_Translated(const QPainterPath* self, double dx, double dy) {
    return new QPainterPath(self->translated(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

QPainterPath* QPainterPath_TranslatedWithOffset(const QPainterPath* self, const QPointF* offset) {
    return new QPainterPath(self->translated(*offset));
}

QRectF* QPainterPath_BoundingRect(const QPainterPath* self) {
    return new QRectF(self->boundingRect());
}

QRectF* QPainterPath_ControlPointRect(const QPainterPath* self) {
    return new QRectF(self->controlPointRect());
}

int QPainterPath_FillRule(const QPainterPath* self) {
    return static_cast<int>(self->fillRule());
}

void QPainterPath_SetFillRule(QPainterPath* self, int fillRule) {
    self->setFillRule(static_cast<Qt::FillRule>(fillRule));
}

bool QPainterPath_IsEmpty(const QPainterPath* self) {
    return self->isEmpty();
}

QPainterPath* QPainterPath_ToReversed(const QPainterPath* self) {
    return new QPainterPath(self->toReversed());
}

int QPainterPath_ElementCount(const QPainterPath* self) {
    return self->elementCount();
}

QPainterPath__Element* QPainterPath_ElementAt(const QPainterPath* self, int i) {
    return new QPainterPath::Element(self->elementAt(static_cast<int>(i)));
}

void QPainterPath_SetElementPositionAt(QPainterPath* self, int i, double x, double y) {
    self->setElementPositionAt(static_cast<int>(i), static_cast<qreal>(x), static_cast<qreal>(y));
}

double QPainterPath_Length(const QPainterPath* self) {
    return static_cast<double>(self->length());
}

double QPainterPath_PercentAtLength(const QPainterPath* self, double t) {
    return static_cast<double>(self->percentAtLength(static_cast<qreal>(t)));
}

QPointF* QPainterPath_PointAtPercent(const QPainterPath* self, double t) {
    return new QPointF(self->pointAtPercent(static_cast<qreal>(t)));
}

double QPainterPath_AngleAtPercent(const QPainterPath* self, double t) {
    return static_cast<double>(self->angleAtPercent(static_cast<qreal>(t)));
}

double QPainterPath_SlopeAtPercent(const QPainterPath* self, double t) {
    return static_cast<double>(self->slopeAtPercent(static_cast<qreal>(t)));
}

bool QPainterPath_IntersectsWithQPainterPath(const QPainterPath* self, const QPainterPath* p) {
    return self->intersects(*p);
}

bool QPainterPath_ContainsWithQPainterPath(const QPainterPath* self, const QPainterPath* p) {
    return self->contains(*p);
}

QPainterPath* QPainterPath_United(const QPainterPath* self, const QPainterPath* r) {
    return new QPainterPath(self->united(*r));
}

QPainterPath* QPainterPath_Intersected(const QPainterPath* self, const QPainterPath* r) {
    return new QPainterPath(self->intersected(*r));
}

QPainterPath* QPainterPath_Subtracted(const QPainterPath* self, const QPainterPath* r) {
    return new QPainterPath(self->subtracted(*r));
}

QPainterPath* QPainterPath_Simplified(const QPainterPath* self) {
    return new QPainterPath(self->simplified());
}

bool QPainterPath_OperatorEqual(const QPainterPath* self, const QPainterPath* other) {
    return (*self == *other);
}

bool QPainterPath_OperatorNotEqual(const QPainterPath* self, const QPainterPath* other) {
    return (*self != *other);
}

QPainterPath* QPainterPath_OperatorBitwiseAnd(const QPainterPath* self, const QPainterPath* other) {
    return new QPainterPath(self->operator&(*other));
}

QPainterPath* QPainterPath_OperatorBitwiseOr(const QPainterPath* self, const QPainterPath* other) {
    return new QPainterPath(self->operator|(*other));
}

QPainterPath* QPainterPath_OperatorPlus(const QPainterPath* self, const QPainterPath* other) {
    return new QPainterPath(self->operator+(*other));
}

QPainterPath* QPainterPath_OperatorMinus(const QPainterPath* self, const QPainterPath* other) {
    return new QPainterPath(self->operator-(*other));
}

void QPainterPath_OperatorBitwiseAndAssign(QPainterPath* self, const QPainterPath* other) {
    self->operator&=(*other);
}

void QPainterPath_OperatorBitwiseOrAssign(QPainterPath* self, const QPainterPath* other) {
    self->operator|=(*other);
}

QPainterPath* QPainterPath_OperatorPlusAssign(QPainterPath* self, const QPainterPath* other) {
    QPainterPath& _ret = self->operator+=(*other);
    // Cast returned reference into pointer
    return &_ret;
}

QPainterPath* QPainterPath_OperatorMinusAssign(QPainterPath* self, const QPainterPath* other) {
    QPainterPath& _ret = self->operator-=(*other);
    // Cast returned reference into pointer
    return &_ret;
}

void QPainterPath_AddRoundedRect4(QPainterPath* self, const QRectF* rect, double xRadius, double yRadius, int mode) {
    self->addRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainterPath_AddRoundedRect7(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius, int mode) {
    self->addRoundedRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainterPath_Delete(QPainterPath* self) {
    delete self;
}

QPainterPathStroker* QPainterPathStroker_new() {
    return new QPainterPathStroker();
}

QPainterPathStroker* QPainterPathStroker_new2(const QPen* pen) {
    return new QPainterPathStroker(*pen);
}

void QPainterPathStroker_SetWidth(QPainterPathStroker* self, double width) {
    self->setWidth(static_cast<qreal>(width));
}

double QPainterPathStroker_Width(const QPainterPathStroker* self) {
    return static_cast<double>(self->width());
}

void QPainterPathStroker_SetCapStyle(QPainterPathStroker* self, int style) {
    self->setCapStyle(static_cast<Qt::PenCapStyle>(style));
}

int QPainterPathStroker_CapStyle(const QPainterPathStroker* self) {
    return static_cast<int>(self->capStyle());
}

void QPainterPathStroker_SetJoinStyle(QPainterPathStroker* self, int style) {
    self->setJoinStyle(static_cast<Qt::PenJoinStyle>(style));
}

int QPainterPathStroker_JoinStyle(const QPainterPathStroker* self) {
    return static_cast<int>(self->joinStyle());
}

void QPainterPathStroker_SetMiterLimit(QPainterPathStroker* self, double length) {
    self->setMiterLimit(static_cast<qreal>(length));
}

double QPainterPathStroker_MiterLimit(const QPainterPathStroker* self) {
    return static_cast<double>(self->miterLimit());
}

void QPainterPathStroker_SetCurveThreshold(QPainterPathStroker* self, double threshold) {
    self->setCurveThreshold(static_cast<qreal>(threshold));
}

double QPainterPathStroker_CurveThreshold(const QPainterPathStroker* self) {
    return static_cast<double>(self->curveThreshold());
}

void QPainterPathStroker_SetDashPattern(QPainterPathStroker* self, int dashPattern) {
    self->setDashPattern(static_cast<Qt::PenStyle>(dashPattern));
}

void QPainterPathStroker_SetDashPatternWithDashPattern(QPainterPathStroker* self, const libqt_list /* of double */ dashPattern) {
    QList<qreal> dashPattern_QList;
    dashPattern_QList.reserve(dashPattern.len);
    double* dashPattern_arr = static_cast<double*>(dashPattern.data);
    for (size_t i = 0; i < dashPattern.len; ++i) {
        dashPattern_QList.push_back(static_cast<double>(dashPattern_arr[i]));
    }
    self->setDashPattern(dashPattern_QList);
}

libqt_list /* of double */ QPainterPathStroker_DashPattern(const QPainterPathStroker* self) {
    QList<qreal> _ret = self->dashPattern();
    // Convert QList<> from C++ memory to manually-managed C memory
    double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPainterPathStroker_SetDashOffset(QPainterPathStroker* self, double offset) {
    self->setDashOffset(static_cast<qreal>(offset));
}

double QPainterPathStroker_DashOffset(const QPainterPathStroker* self) {
    return static_cast<double>(self->dashOffset());
}

QPainterPath* QPainterPathStroker_CreateStroke(const QPainterPathStroker* self, const QPainterPath* path) {
    return new QPainterPath(self->createStroke(*path));
}

void QPainterPathStroker_Delete(QPainterPathStroker* self) {
    delete self;
}

bool QPainterPath__Element_IsMoveTo(const QPainterPath__Element* self) {
    return self->isMoveTo();
}

bool QPainterPath__Element_IsLineTo(const QPainterPath__Element* self) {
    return self->isLineTo();
}

bool QPainterPath__Element_IsCurveTo(const QPainterPath__Element* self) {
    return self->isCurveTo();
}

QPointF* QPainterPath__Element_ToQPointF(const QPainterPath__Element* self) {
    return new QPointF(self->operator QPointF());
}

bool QPainterPath__Element_OperatorEqual(const QPainterPath__Element* self, const QPainterPath__Element* e) {
    return (*self == *e);
}

bool QPainterPath__Element_OperatorNotEqual(const QPainterPath__Element* self, const QPainterPath__Element* e) {
    return (*self != *e);
}

void QPainterPath__Element_Delete(QPainterPath__Element* self) {
    delete self;
}
