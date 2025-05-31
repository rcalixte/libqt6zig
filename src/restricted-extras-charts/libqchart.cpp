#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QBrush>
#include <QChart>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLegend>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPointF>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qchart.h>
#include "libqchart.h"
#include "libqchart.hxx"

QChart* QChart_new() {
    return new VirtualQChart();
}

QChart* QChart_new2(QGraphicsItem* parent) {
    return new VirtualQChart(parent);
}

QChart* QChart_new3(QGraphicsItem* parent, int wFlags) {
    return new VirtualQChart(parent, static_cast<Qt::WindowFlags>(wFlags));
}

QMetaObject* QChart_MetaObject(const QChart* self) {
    return (QMetaObject*)self->metaObject();
}

void* QChart_Metacast(QChart* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QChart_Metacall(QChart* self, int param1, int param2, void** param3) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQChart*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QChart_OnMetacall(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Metacall_Callback(reinterpret_cast<VirtualQChart::QChart_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QChart_QBaseMetacall(QChart* self, int param1, int param2, void** param3) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Metacall_IsBase(true);
        return vqchart->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQChart*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QChart_Tr(const char* s) {
    QString _ret = QChart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QChart_AddSeries(QChart* self, QAbstractSeries* series) {
    self->addSeries(series);
}

void QChart_RemoveSeries(QChart* self, QAbstractSeries* series) {
    self->removeSeries(series);
}

void QChart_RemoveAllSeries(QChart* self) {
    self->removeAllSeries();
}

libqt_list /* of QAbstractSeries* */ QChart_Series(const QChart* self) {
    QList<QAbstractSeries*> _ret = self->series();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractSeries** _arr = static_cast<QAbstractSeries**>(malloc(sizeof(QAbstractSeries*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QChart_SetAxisX(QChart* self, QAbstractAxis* axis) {
    self->setAxisX(axis);
}

void QChart_SetAxisY(QChart* self, QAbstractAxis* axis) {
    self->setAxisY(axis);
}

QAbstractAxis* QChart_AxisX(const QChart* self) {
    return self->axisX();
}

QAbstractAxis* QChart_AxisY(const QChart* self) {
    return self->axisY();
}

void QChart_AddAxis(QChart* self, QAbstractAxis* axis, int alignment) {
    self->addAxis(axis, static_cast<Qt::Alignment>(alignment));
}

void QChart_RemoveAxis(QChart* self, QAbstractAxis* axis) {
    self->removeAxis(axis);
}

libqt_list /* of QAbstractAxis* */ QChart_Axes(const QChart* self) {
    QList<QAbstractAxis*> _ret = self->axes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QChart_CreateDefaultAxes(QChart* self) {
    self->createDefaultAxes();
}

void QChart_SetTheme(QChart* self, int theme) {
    self->setTheme(static_cast<QChart::ChartTheme>(theme));
}

int QChart_Theme(const QChart* self) {
    return static_cast<int>(self->theme());
}

void QChart_SetTitle(QChart* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QChart_Title(const QChart* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QChart_SetTitleFont(QChart* self, const QFont* font) {
    self->setTitleFont(*font);
}

QFont* QChart_TitleFont(const QChart* self) {
    return new QFont(self->titleFont());
}

void QChart_SetTitleBrush(QChart* self, const QBrush* brush) {
    self->setTitleBrush(*brush);
}

QBrush* QChart_TitleBrush(const QChart* self) {
    return new QBrush(self->titleBrush());
}

void QChart_SetBackgroundBrush(QChart* self, const QBrush* brush) {
    self->setBackgroundBrush(*brush);
}

QBrush* QChart_BackgroundBrush(const QChart* self) {
    return new QBrush(self->backgroundBrush());
}

void QChart_SetBackgroundPen(QChart* self, const QPen* pen) {
    self->setBackgroundPen(*pen);
}

QPen* QChart_BackgroundPen(const QChart* self) {
    return new QPen(self->backgroundPen());
}

void QChart_SetBackgroundVisible(QChart* self) {
    self->setBackgroundVisible();
}

bool QChart_IsBackgroundVisible(const QChart* self) {
    return self->isBackgroundVisible();
}

void QChart_SetDropShadowEnabled(QChart* self) {
    self->setDropShadowEnabled();
}

bool QChart_IsDropShadowEnabled(const QChart* self) {
    return self->isDropShadowEnabled();
}

void QChart_SetBackgroundRoundness(QChart* self, double diameter) {
    self->setBackgroundRoundness(static_cast<qreal>(diameter));
}

double QChart_BackgroundRoundness(const QChart* self) {
    return static_cast<double>(self->backgroundRoundness());
}

void QChart_SetAnimationOptions(QChart* self, int options) {
    self->setAnimationOptions(static_cast<QChart::AnimationOptions>(options));
}

int QChart_AnimationOptions(const QChart* self) {
    return static_cast<int>(self->animationOptions());
}

void QChart_SetAnimationDuration(QChart* self, int msecs) {
    self->setAnimationDuration(static_cast<int>(msecs));
}

int QChart_AnimationDuration(const QChart* self) {
    return self->animationDuration();
}

void QChart_SetAnimationEasingCurve(QChart* self, const QEasingCurve* curve) {
    self->setAnimationEasingCurve(*curve);
}

QEasingCurve* QChart_AnimationEasingCurve(const QChart* self) {
    return new QEasingCurve(self->animationEasingCurve());
}

void QChart_ZoomIn(QChart* self) {
    self->zoomIn();
}

void QChart_ZoomOut(QChart* self) {
    self->zoomOut();
}

void QChart_ZoomInWithRect(QChart* self, const QRectF* rect) {
    self->zoomIn(*rect);
}

void QChart_Zoom(QChart* self, double factor) {
    self->zoom(static_cast<qreal>(factor));
}

void QChart_ZoomReset(QChart* self) {
    self->zoomReset();
}

bool QChart_IsZoomed(QChart* self) {
    return self->isZoomed();
}

void QChart_Scroll(QChart* self, double dx, double dy) {
    self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QLegend* QChart_Legend(const QChart* self) {
    return self->legend();
}

void QChart_SetMargins(QChart* self, const QMargins* margins) {
    self->setMargins(*margins);
}

QMargins* QChart_Margins(const QChart* self) {
    return new QMargins(self->margins());
}

QRectF* QChart_PlotArea(const QChart* self) {
    return new QRectF(self->plotArea());
}

void QChart_SetPlotArea(QChart* self, const QRectF* rect) {
    self->setPlotArea(*rect);
}

void QChart_SetPlotAreaBackgroundBrush(QChart* self, const QBrush* brush) {
    self->setPlotAreaBackgroundBrush(*brush);
}

QBrush* QChart_PlotAreaBackgroundBrush(const QChart* self) {
    return new QBrush(self->plotAreaBackgroundBrush());
}

void QChart_SetPlotAreaBackgroundPen(QChart* self, const QPen* pen) {
    self->setPlotAreaBackgroundPen(*pen);
}

QPen* QChart_PlotAreaBackgroundPen(const QChart* self) {
    return new QPen(self->plotAreaBackgroundPen());
}

void QChart_SetPlotAreaBackgroundVisible(QChart* self) {
    self->setPlotAreaBackgroundVisible();
}

bool QChart_IsPlotAreaBackgroundVisible(const QChart* self) {
    return self->isPlotAreaBackgroundVisible();
}

void QChart_SetLocalizeNumbers(QChart* self, bool localize) {
    self->setLocalizeNumbers(localize);
}

bool QChart_LocalizeNumbers(const QChart* self) {
    return self->localizeNumbers();
}

void QChart_SetLocale(QChart* self, const QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QChart_Locale(const QChart* self) {
    return new QLocale(self->locale());
}

QPointF* QChart_MapToValue(QChart* self, const QPointF* position) {
    return new QPointF(self->mapToValue(*position));
}

QPointF* QChart_MapToPosition(QChart* self, const QPointF* value) {
    return new QPointF(self->mapToPosition(*value));
}

int QChart_ChartType(const QChart* self) {
    return static_cast<int>(self->chartType());
}

void QChart_PlotAreaChanged(QChart* self, const QRectF* plotArea) {
    self->plotAreaChanged(*plotArea);
}

void QChart_Connect_PlotAreaChanged(QChart* self, intptr_t slot) {
    void (*slotFunc)(QChart*, QRectF*) = reinterpret_cast<void (*)(QChart*, QRectF*)>(slot);
    QChart::connect(self, &QChart::plotAreaChanged, [self, slotFunc](const QRectF& plotArea) {
        const QRectF& plotArea_ret = plotArea;
        // Cast returned reference into pointer
        QRectF* sigval1 = const_cast<QRectF*>(&plotArea_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QChart_Tr2(const char* s, const char* c) {
    QString _ret = QChart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QChart_Tr3(const char* s, const char* c, int n) {
    QString _ret = QChart::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QChart_SetAxisX2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series) {
    self->setAxisX(axis, series);
}

void QChart_SetAxisY2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series) {
    self->setAxisY(axis, series);
}

QAbstractAxis* QChart_AxisX1(const QChart* self, QAbstractSeries* series) {
    return self->axisX(series);
}

QAbstractAxis* QChart_AxisY1(const QChart* self, QAbstractSeries* series) {
    return self->axisY(series);
}

libqt_list /* of QAbstractAxis* */ QChart_Axes1(const QChart* self, int orientation) {
    QList<QAbstractAxis*> _ret = self->axes(static_cast<Qt::Orientations>(orientation));
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QAbstractAxis* */ QChart_Axes2(const QChart* self, int orientation, QAbstractSeries* series) {
    QList<QAbstractAxis*> _ret = self->axes(static_cast<Qt::Orientations>(orientation), series);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QChart_SetBackgroundVisible1(QChart* self, bool visible) {
    self->setBackgroundVisible(visible);
}

void QChart_SetDropShadowEnabled1(QChart* self, bool enabled) {
    self->setDropShadowEnabled(enabled);
}

void QChart_SetPlotAreaBackgroundVisible1(QChart* self, bool visible) {
    self->setPlotAreaBackgroundVisible(visible);
}

QPointF* QChart_MapToValue2(QChart* self, const QPointF* position, QAbstractSeries* series) {
    return new QPointF(self->mapToValue(*position, series));
}

QPointF* QChart_MapToPosition2(QChart* self, const QPointF* value, QAbstractSeries* series) {
    return new QPointF(self->mapToPosition(*value, series));
}

// Derived class handler implementation
void QChart_SetGeometry(QChart* self, const QRectF* rect) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setGeometry(*rect);
    } else {
        self->QChart::setGeometry(*rect);
    }
}

// Base class handler implementation
void QChart_QBaseSetGeometry(QChart* self, const QRectF* rect) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SetGeometry_IsBase(true);
        vqchart->setGeometry(*rect);
    } else {
        self->QChart::setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSetGeometry(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SetGeometry_Callback(reinterpret_cast<VirtualQChart::QChart_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_GetContentsMargins(const QChart* self, double* left, double* top, double* right, double* bottom) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QChart::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QChart_QBaseGetContentsMargins(const QChart* self, double* left, double* top, double* right, double* bottom) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_GetContentsMargins_IsBase(true);
        vqchart->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QChart::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnGetContentsMargins(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_GetContentsMargins_Callback(reinterpret_cast<VirtualQChart::QChart_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
int QChart_Type(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->type();
    } else {
        return self->QChart::type();
    }
}

// Base class handler implementation
int QChart_QBaseType(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Type_IsBase(true);
        return vqchart->type();
    } else {
        return self->QChart::type();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnType(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Type_Callback(reinterpret_cast<VirtualQChart::QChart_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_Paint(QChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->paint(painter, option, widget);
    } else {
        self->QChart::paint(painter, option, widget);
    }
}

// Base class handler implementation
void QChart_QBasePaint(QChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Paint_IsBase(true);
        vqchart->paint(painter, option, widget);
    } else {
        self->QChart::paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPaint(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Paint_Callback(reinterpret_cast<VirtualQChart::QChart_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_PaintWindowFrame(QChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->paintWindowFrame(painter, option, widget);
    } else {
        self->QChart::paintWindowFrame(painter, option, widget);
    }
}

// Base class handler implementation
void QChart_QBasePaintWindowFrame(QChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_PaintWindowFrame_IsBase(true);
        vqchart->paintWindowFrame(painter, option, widget);
    } else {
        self->QChart::paintWindowFrame(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPaintWindowFrame(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_PaintWindowFrame_Callback(reinterpret_cast<VirtualQChart::QChart_PaintWindowFrame_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QChart_BoundingRect(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return new QRectF(vqchart->boundingRect());
    } else {
        return new QRectF(((VirtualQChart*)self)->boundingRect());
    }
}

// Base class handler implementation
QRectF* QChart_QBaseBoundingRect(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_BoundingRect_IsBase(true);
        return new QRectF(vqchart->boundingRect());
    } else {
        return new QRectF(((VirtualQChart*)self)->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnBoundingRect(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_BoundingRect_Callback(reinterpret_cast<VirtualQChart::QChart_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QChart_Shape(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return new QPainterPath(vqchart->shape());
    } else {
        return new QPainterPath(((VirtualQChart*)self)->shape());
    }
}

// Base class handler implementation
QPainterPath* QChart_QBaseShape(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Shape_IsBase(true);
        return new QPainterPath(vqchart->shape());
    } else {
        return new QPainterPath(((VirtualQChart*)self)->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnShape(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Shape_Callback(reinterpret_cast<VirtualQChart::QChart_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_InitStyleOption(const QChart* self, QStyleOption* option) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->initStyleOption(option);
    } else {
        ((VirtualQChart*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QChart_QBaseInitStyleOption(const QChart* self, QStyleOption* option) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_InitStyleOption_IsBase(true);
        vqchart->initStyleOption(option);
    } else {
        ((VirtualQChart*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnInitStyleOption(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_InitStyleOption_Callback(reinterpret_cast<VirtualQChart::QChart_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QChart_SizeHint(const QChart* self, int which, const QSizeF* constraint) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return new QSizeF(vqchart->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QChart_QBaseSizeHint(const QChart* self, int which, const QSizeF* constraint) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SizeHint_IsBase(true);
        return new QSizeF(vqchart->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSizeHint(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SizeHint_Callback(reinterpret_cast<VirtualQChart::QChart_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_UpdateGeometry(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->updateGeometry();
    } else {
        ((VirtualQChart*)self)->updateGeometry();
    }
}

// Base class handler implementation
void QChart_QBaseUpdateGeometry(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_UpdateGeometry_IsBase(true);
        vqchart->updateGeometry();
    } else {
        ((VirtualQChart*)self)->updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnUpdateGeometry(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_UpdateGeometry_Callback(reinterpret_cast<VirtualQChart::QChart_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QChart_ItemChange(QChart* self, int change, const QVariant* value) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        return new QVariant(vqchart->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QChart_QBaseItemChange(QChart* self, int change, const QVariant* value) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ItemChange_IsBase(true);
        return new QVariant(vqchart->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QChart_OnItemChange(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ItemChange_Callback(reinterpret_cast<VirtualQChart::QChart_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QChart_PropertyChange(QChart* self, const libqt_string propertyName, const QVariant* value) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqchart && vqchart->isVirtualQChart) {
        return new QVariant(vqchart->propertyChange(propertyName_QString, *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QChart_QBasePropertyChange(QChart* self, const libqt_string propertyName, const QVariant* value) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_PropertyChange_IsBase(true);
        return new QVariant(vqchart->propertyChange(propertyName_QString, *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPropertyChange(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_PropertyChange_Callback(reinterpret_cast<VirtualQChart::QChart_PropertyChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_SceneEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->sceneEvent(event);
    } else {
        return ((VirtualQChart*)self)->sceneEvent(event);
    }
}

// Base class handler implementation
bool QChart_QBaseSceneEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SceneEvent_IsBase(true);
        return vqchart->sceneEvent(event);
    } else {
        return ((VirtualQChart*)self)->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSceneEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SceneEvent_Callback(reinterpret_cast<VirtualQChart::QChart_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_WindowFrameEvent(QChart* self, QEvent* e) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->windowFrameEvent(e);
    } else {
        return ((VirtualQChart*)self)->windowFrameEvent(e);
    }
}

// Base class handler implementation
bool QChart_QBaseWindowFrameEvent(QChart* self, QEvent* e) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_WindowFrameEvent_IsBase(true);
        return vqchart->windowFrameEvent(e);
    } else {
        return ((VirtualQChart*)self)->windowFrameEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnWindowFrameEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_WindowFrameEvent_Callback(reinterpret_cast<VirtualQChart::QChart_WindowFrameEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QChart_WindowFrameSectionAt(const QChart* self, const QPointF* pos) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return static_cast<int>(vqchart->windowFrameSectionAt(*pos));
    } else {
        return static_cast<int>(((VirtualQChart*)self)->windowFrameSectionAt(*pos));
    }
}

// Base class handler implementation
int QChart_QBaseWindowFrameSectionAt(const QChart* self, const QPointF* pos) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_WindowFrameSectionAt_IsBase(true);
        return static_cast<int>(vqchart->windowFrameSectionAt(*pos));
    } else {
        return static_cast<int>(((VirtualQChart*)self)->windowFrameSectionAt(*pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnWindowFrameSectionAt(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_WindowFrameSectionAt_Callback(reinterpret_cast<VirtualQChart::QChart_WindowFrameSectionAt_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_Event(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->event(event);
    } else {
        return ((VirtualQChart*)self)->event(event);
    }
}

// Base class handler implementation
bool QChart_QBaseEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Event_IsBase(true);
        return vqchart->event(event);
    } else {
        return ((VirtualQChart*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Event_Callback(reinterpret_cast<VirtualQChart::QChart_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_ChangeEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->changeEvent(event);
    } else {
        ((VirtualQChart*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseChangeEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ChangeEvent_IsBase(true);
        vqchart->changeEvent(event);
    } else {
        ((VirtualQChart*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnChangeEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ChangeEvent_Callback(reinterpret_cast<VirtualQChart::QChart_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_CloseEvent(QChart* self, QCloseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->closeEvent(event);
    } else {
        ((VirtualQChart*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseCloseEvent(QChart* self, QCloseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_CloseEvent_IsBase(true);
        vqchart->closeEvent(event);
    } else {
        ((VirtualQChart*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnCloseEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_CloseEvent_Callback(reinterpret_cast<VirtualQChart::QChart_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_FocusInEvent(QChart* self, QFocusEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->focusInEvent(event);
    } else {
        ((VirtualQChart*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseFocusInEvent(QChart* self, QFocusEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_FocusInEvent_IsBase(true);
        vqchart->focusInEvent(event);
    } else {
        ((VirtualQChart*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnFocusInEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_FocusInEvent_Callback(reinterpret_cast<VirtualQChart::QChart_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_FocusNextPrevChild(QChart* self, bool next) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->focusNextPrevChild(next);
    } else {
        return ((VirtualQChart*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QChart_QBaseFocusNextPrevChild(QChart* self, bool next) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_FocusNextPrevChild_IsBase(true);
        return vqchart->focusNextPrevChild(next);
    } else {
        return ((VirtualQChart*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnFocusNextPrevChild(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQChart::QChart_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_FocusOutEvent(QChart* self, QFocusEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->focusOutEvent(event);
    } else {
        ((VirtualQChart*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseFocusOutEvent(QChart* self, QFocusEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_FocusOutEvent_IsBase(true);
        vqchart->focusOutEvent(event);
    } else {
        ((VirtualQChart*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnFocusOutEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_FocusOutEvent_Callback(reinterpret_cast<VirtualQChart::QChart_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_HideEvent(QChart* self, QHideEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->hideEvent(event);
    } else {
        ((VirtualQChart*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseHideEvent(QChart* self, QHideEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_HideEvent_IsBase(true);
        vqchart->hideEvent(event);
    } else {
        ((VirtualQChart*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnHideEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_HideEvent_Callback(reinterpret_cast<VirtualQChart::QChart_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_MoveEvent(QChart* self, QGraphicsSceneMoveEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->moveEvent(event);
    } else {
        ((VirtualQChart*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseMoveEvent(QChart* self, QGraphicsSceneMoveEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MoveEvent_IsBase(true);
        vqchart->moveEvent(event);
    } else {
        ((VirtualQChart*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMoveEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MoveEvent_Callback(reinterpret_cast<VirtualQChart::QChart_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_PolishEvent(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->polishEvent();
    } else {
        ((VirtualQChart*)self)->polishEvent();
    }
}

// Base class handler implementation
void QChart_QBasePolishEvent(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_PolishEvent_IsBase(true);
        vqchart->polishEvent();
    } else {
        ((VirtualQChart*)self)->polishEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPolishEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_PolishEvent_Callback(reinterpret_cast<VirtualQChart::QChart_PolishEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_ResizeEvent(QChart* self, QGraphicsSceneResizeEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->resizeEvent(event);
    } else {
        ((VirtualQChart*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseResizeEvent(QChart* self, QGraphicsSceneResizeEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ResizeEvent_IsBase(true);
        vqchart->resizeEvent(event);
    } else {
        ((VirtualQChart*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnResizeEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ResizeEvent_Callback(reinterpret_cast<VirtualQChart::QChart_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_ShowEvent(QChart* self, QShowEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->showEvent(event);
    } else {
        ((VirtualQChart*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseShowEvent(QChart* self, QShowEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ShowEvent_IsBase(true);
        vqchart->showEvent(event);
    } else {
        ((VirtualQChart*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnShowEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ShowEvent_Callback(reinterpret_cast<VirtualQChart::QChart_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_HoverMoveEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->hoverMoveEvent(event);
    } else {
        ((VirtualQChart*)self)->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseHoverMoveEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_HoverMoveEvent_IsBase(true);
        vqchart->hoverMoveEvent(event);
    } else {
        ((VirtualQChart*)self)->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnHoverMoveEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_HoverMoveEvent_Callback(reinterpret_cast<VirtualQChart::QChart_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_HoverLeaveEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->hoverLeaveEvent(event);
    } else {
        ((VirtualQChart*)self)->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseHoverLeaveEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_HoverLeaveEvent_IsBase(true);
        vqchart->hoverLeaveEvent(event);
    } else {
        ((VirtualQChart*)self)->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnHoverLeaveEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQChart::QChart_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_GrabMouseEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->grabMouseEvent(event);
    } else {
        ((VirtualQChart*)self)->grabMouseEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseGrabMouseEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_GrabMouseEvent_IsBase(true);
        vqchart->grabMouseEvent(event);
    } else {
        ((VirtualQChart*)self)->grabMouseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnGrabMouseEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_GrabMouseEvent_Callback(reinterpret_cast<VirtualQChart::QChart_GrabMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_UngrabMouseEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->ungrabMouseEvent(event);
    } else {
        ((VirtualQChart*)self)->ungrabMouseEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseUngrabMouseEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_UngrabMouseEvent_IsBase(true);
        vqchart->ungrabMouseEvent(event);
    } else {
        ((VirtualQChart*)self)->ungrabMouseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnUngrabMouseEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_UngrabMouseEvent_Callback(reinterpret_cast<VirtualQChart::QChart_UngrabMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_GrabKeyboardEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->grabKeyboardEvent(event);
    } else {
        ((VirtualQChart*)self)->grabKeyboardEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseGrabKeyboardEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_GrabKeyboardEvent_IsBase(true);
        vqchart->grabKeyboardEvent(event);
    } else {
        ((VirtualQChart*)self)->grabKeyboardEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnGrabKeyboardEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_GrabKeyboardEvent_Callback(reinterpret_cast<VirtualQChart::QChart_GrabKeyboardEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_UngrabKeyboardEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->ungrabKeyboardEvent(event);
    } else {
        ((VirtualQChart*)self)->ungrabKeyboardEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseUngrabKeyboardEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_UngrabKeyboardEvent_IsBase(true);
        vqchart->ungrabKeyboardEvent(event);
    } else {
        ((VirtualQChart*)self)->ungrabKeyboardEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnUngrabKeyboardEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_UngrabKeyboardEvent_Callback(reinterpret_cast<VirtualQChart::QChart_UngrabKeyboardEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_EventFilter(QChart* self, QObject* watched, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->eventFilter(watched, event);
    } else {
        return self->QChart::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QChart_QBaseEventFilter(QChart* self, QObject* watched, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_EventFilter_IsBase(true);
        return vqchart->eventFilter(watched, event);
    } else {
        return self->QChart::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnEventFilter(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_EventFilter_Callback(reinterpret_cast<VirtualQChart::QChart_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_TimerEvent(QChart* self, QTimerEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->timerEvent(event);
    } else {
        ((VirtualQChart*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseTimerEvent(QChart* self, QTimerEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_TimerEvent_IsBase(true);
        vqchart->timerEvent(event);
    } else {
        ((VirtualQChart*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnTimerEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_TimerEvent_Callback(reinterpret_cast<VirtualQChart::QChart_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_ChildEvent(QChart* self, QChildEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->childEvent(event);
    } else {
        ((VirtualQChart*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseChildEvent(QChart* self, QChildEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ChildEvent_IsBase(true);
        vqchart->childEvent(event);
    } else {
        ((VirtualQChart*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnChildEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ChildEvent_Callback(reinterpret_cast<VirtualQChart::QChart_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_CustomEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->customEvent(event);
    } else {
        ((VirtualQChart*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseCustomEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_CustomEvent_IsBase(true);
        vqchart->customEvent(event);
    } else {
        ((VirtualQChart*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnCustomEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_CustomEvent_Callback(reinterpret_cast<VirtualQChart::QChart_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_ConnectNotify(QChart* self, const QMetaMethod* signal) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->connectNotify(*signal);
    } else {
        ((VirtualQChart*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QChart_QBaseConnectNotify(QChart* self, const QMetaMethod* signal) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ConnectNotify_IsBase(true);
        vqchart->connectNotify(*signal);
    } else {
        ((VirtualQChart*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnConnectNotify(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ConnectNotify_Callback(reinterpret_cast<VirtualQChart::QChart_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_DisconnectNotify(QChart* self, const QMetaMethod* signal) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->disconnectNotify(*signal);
    } else {
        ((VirtualQChart*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QChart_QBaseDisconnectNotify(QChart* self, const QMetaMethod* signal) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DisconnectNotify_IsBase(true);
        vqchart->disconnectNotify(*signal);
    } else {
        ((VirtualQChart*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDisconnectNotify(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DisconnectNotify_Callback(reinterpret_cast<VirtualQChart::QChart_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_Advance(QChart* self, int phase) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->advance(static_cast<int>(phase));
    } else {
        self->QChart::advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QChart_QBaseAdvance(QChart* self, int phase) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Advance_IsBase(true);
        vqchart->advance(static_cast<int>(phase));
    } else {
        self->QChart::advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnAdvance(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Advance_Callback(reinterpret_cast<VirtualQChart::QChart_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_Contains(const QChart* self, const QPointF* point) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->contains(*point);
    } else {
        return self->QChart::contains(*point);
    }
}

// Base class handler implementation
bool QChart_QBaseContains(const QChart* self, const QPointF* point) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Contains_IsBase(true);
        return vqchart->contains(*point);
    } else {
        return self->QChart::contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnContains(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Contains_Callback(reinterpret_cast<VirtualQChart::QChart_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_CollidesWithItem(const QChart* self, const QGraphicsItem* other, int mode) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QChart::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QChart_QBaseCollidesWithItem(const QChart* self, const QGraphicsItem* other, int mode) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_CollidesWithItem_IsBase(true);
        return vqchart->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QChart::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnCollidesWithItem(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_CollidesWithItem_Callback(reinterpret_cast<VirtualQChart::QChart_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_CollidesWithPath(const QChart* self, const QPainterPath* path, int mode) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QChart::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QChart_QBaseCollidesWithPath(const QChart* self, const QPainterPath* path, int mode) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_CollidesWithPath_IsBase(true);
        return vqchart->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QChart::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnCollidesWithPath(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_CollidesWithPath_Callback(reinterpret_cast<VirtualQChart::QChart_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_IsObscuredBy(const QChart* self, const QGraphicsItem* item) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->isObscuredBy(item);
    } else {
        return self->QChart::isObscuredBy(item);
    }
}

// Base class handler implementation
bool QChart_QBaseIsObscuredBy(const QChart* self, const QGraphicsItem* item) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_IsObscuredBy_IsBase(true);
        return vqchart->isObscuredBy(item);
    } else {
        return self->QChart::isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnIsObscuredBy(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_IsObscuredBy_Callback(reinterpret_cast<VirtualQChart::QChart_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QChart_OpaqueArea(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return new QPainterPath(vqchart->opaqueArea());
    } else {
        return new QPainterPath(((VirtualQChart*)self)->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QChart_QBaseOpaqueArea(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_OpaqueArea_IsBase(true);
        return new QPainterPath(vqchart->opaqueArea());
    } else {
        return new QPainterPath(((VirtualQChart*)self)->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnOpaqueArea(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_OpaqueArea_Callback(reinterpret_cast<VirtualQChart::QChart_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_SceneEventFilter(QChart* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->sceneEventFilter(watched, event);
    } else {
        return ((VirtualQChart*)self)->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QChart_QBaseSceneEventFilter(QChart* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SceneEventFilter_IsBase(true);
        return vqchart->sceneEventFilter(watched, event);
    } else {
        return ((VirtualQChart*)self)->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSceneEventFilter(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SceneEventFilter_Callback(reinterpret_cast<VirtualQChart::QChart_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_ContextMenuEvent(QChart* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->contextMenuEvent(event);
    } else {
        ((VirtualQChart*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseContextMenuEvent(QChart* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ContextMenuEvent_IsBase(true);
        vqchart->contextMenuEvent(event);
    } else {
        ((VirtualQChart*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnContextMenuEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_ContextMenuEvent_Callback(reinterpret_cast<VirtualQChart::QChart_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_DragEnterEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->dragEnterEvent(event);
    } else {
        ((VirtualQChart*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseDragEnterEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DragEnterEvent_IsBase(true);
        vqchart->dragEnterEvent(event);
    } else {
        ((VirtualQChart*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDragEnterEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DragEnterEvent_Callback(reinterpret_cast<VirtualQChart::QChart_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_DragLeaveEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->dragLeaveEvent(event);
    } else {
        ((VirtualQChart*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseDragLeaveEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DragLeaveEvent_IsBase(true);
        vqchart->dragLeaveEvent(event);
    } else {
        ((VirtualQChart*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDragLeaveEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DragLeaveEvent_Callback(reinterpret_cast<VirtualQChart::QChart_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_DragMoveEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->dragMoveEvent(event);
    } else {
        ((VirtualQChart*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseDragMoveEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DragMoveEvent_IsBase(true);
        vqchart->dragMoveEvent(event);
    } else {
        ((VirtualQChart*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDragMoveEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DragMoveEvent_Callback(reinterpret_cast<VirtualQChart::QChart_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_DropEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->dropEvent(event);
    } else {
        ((VirtualQChart*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseDropEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DropEvent_IsBase(true);
        vqchart->dropEvent(event);
    } else {
        ((VirtualQChart*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDropEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_DropEvent_Callback(reinterpret_cast<VirtualQChart::QChart_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_HoverEnterEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->hoverEnterEvent(event);
    } else {
        ((VirtualQChart*)self)->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseHoverEnterEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_HoverEnterEvent_IsBase(true);
        vqchart->hoverEnterEvent(event);
    } else {
        ((VirtualQChart*)self)->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnHoverEnterEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_HoverEnterEvent_Callback(reinterpret_cast<VirtualQChart::QChart_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_KeyPressEvent(QChart* self, QKeyEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->keyPressEvent(event);
    } else {
        ((VirtualQChart*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseKeyPressEvent(QChart* self, QKeyEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_KeyPressEvent_IsBase(true);
        vqchart->keyPressEvent(event);
    } else {
        ((VirtualQChart*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnKeyPressEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_KeyPressEvent_Callback(reinterpret_cast<VirtualQChart::QChart_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_KeyReleaseEvent(QChart* self, QKeyEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->keyReleaseEvent(event);
    } else {
        ((VirtualQChart*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseKeyReleaseEvent(QChart* self, QKeyEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_KeyReleaseEvent_IsBase(true);
        vqchart->keyReleaseEvent(event);
    } else {
        ((VirtualQChart*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnKeyReleaseEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQChart::QChart_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_MousePressEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->mousePressEvent(event);
    } else {
        ((VirtualQChart*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseMousePressEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MousePressEvent_IsBase(true);
        vqchart->mousePressEvent(event);
    } else {
        ((VirtualQChart*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMousePressEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MousePressEvent_Callback(reinterpret_cast<VirtualQChart::QChart_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_MouseMoveEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->mouseMoveEvent(event);
    } else {
        ((VirtualQChart*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseMouseMoveEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MouseMoveEvent_IsBase(true);
        vqchart->mouseMoveEvent(event);
    } else {
        ((VirtualQChart*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMouseMoveEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MouseMoveEvent_Callback(reinterpret_cast<VirtualQChart::QChart_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_MouseReleaseEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->mouseReleaseEvent(event);
    } else {
        ((VirtualQChart*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseMouseReleaseEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MouseReleaseEvent_IsBase(true);
        vqchart->mouseReleaseEvent(event);
    } else {
        ((VirtualQChart*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMouseReleaseEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQChart::QChart_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_MouseDoubleClickEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQChart*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseMouseDoubleClickEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MouseDoubleClickEvent_IsBase(true);
        vqchart->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQChart*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMouseDoubleClickEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQChart::QChart_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_WheelEvent(QChart* self, QGraphicsSceneWheelEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->wheelEvent(event);
    } else {
        ((VirtualQChart*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseWheelEvent(QChart* self, QGraphicsSceneWheelEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_WheelEvent_IsBase(true);
        vqchart->wheelEvent(event);
    } else {
        ((VirtualQChart*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnWheelEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_WheelEvent_Callback(reinterpret_cast<VirtualQChart::QChart_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_InputMethodEvent(QChart* self, QInputMethodEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->inputMethodEvent(event);
    } else {
        ((VirtualQChart*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QChart_QBaseInputMethodEvent(QChart* self, QInputMethodEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_InputMethodEvent_IsBase(true);
        vqchart->inputMethodEvent(event);
    } else {
        ((VirtualQChart*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnInputMethodEvent(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_InputMethodEvent_Callback(reinterpret_cast<VirtualQChart::QChart_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QChart_InputMethodQuery(const QChart* self, int query) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return new QVariant(vqchart->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QChart_QBaseInputMethodQuery(const QChart* self, int query) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_InputMethodQuery_IsBase(true);
        return new QVariant(vqchart->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QChart_OnInputMethodQuery(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_InputMethodQuery_Callback(reinterpret_cast<VirtualQChart::QChart_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_SupportsExtension(const QChart* self, int extension) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->supportsExtension(static_cast<VirtualQChart::Extension>(extension));
    } else {
        return ((VirtualQChart*)self)->supportsExtension(static_cast<VirtualQChart::Extension>(extension));
    }
}

// Base class handler implementation
bool QChart_QBaseSupportsExtension(const QChart* self, int extension) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SupportsExtension_IsBase(true);
        return vqchart->supportsExtension(static_cast<VirtualQChart::Extension>(extension));
    } else {
        return ((VirtualQChart*)self)->supportsExtension(static_cast<VirtualQChart::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSupportsExtension(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SupportsExtension_Callback(reinterpret_cast<VirtualQChart::QChart_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_SetExtension(QChart* self, int extension, const QVariant* variant) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setExtension(static_cast<VirtualQChart::Extension>(extension), *variant);
    } else {
        ((VirtualQChart*)self)->setExtension(static_cast<VirtualQChart::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QChart_QBaseSetExtension(QChart* self, int extension, const QVariant* variant) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SetExtension_IsBase(true);
        vqchart->setExtension(static_cast<VirtualQChart::Extension>(extension), *variant);
    } else {
        ((VirtualQChart*)self)->setExtension(static_cast<VirtualQChart::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSetExtension(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SetExtension_Callback(reinterpret_cast<VirtualQChart::QChart_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QChart_Extension(const QChart* self, const QVariant* variant) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return new QVariant(vqchart->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QChart_QBaseExtension(const QChart* self, const QVariant* variant) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Extension_IsBase(true);
        return new QVariant(vqchart->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QChart_OnExtension(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Extension_Callback(reinterpret_cast<VirtualQChart::QChart_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_IsEmpty(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->isEmpty();
    } else {
        return self->QChart::isEmpty();
    }
}

// Base class handler implementation
bool QChart_QBaseIsEmpty(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_IsEmpty_IsBase(true);
        return vqchart->isEmpty();
    } else {
        return self->QChart::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnIsEmpty(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_IsEmpty_Callback(reinterpret_cast<VirtualQChart::QChart_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_UpdateMicroFocus(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->updateMicroFocus();
    } else {
        ((VirtualQChart*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QChart_QBaseUpdateMicroFocus(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_UpdateMicroFocus_IsBase(true);
        vqchart->updateMicroFocus();
    } else {
        ((VirtualQChart*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnUpdateMicroFocus(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQChart::QChart_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QChart_Sender(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->sender();
    } else {
        return ((VirtualQChart*)self)->sender();
    }
}

// Base class handler implementation
QObject* QChart_QBaseSender(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Sender_IsBase(true);
        return vqchart->sender();
    } else {
        return ((VirtualQChart*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSender(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Sender_Callback(reinterpret_cast<VirtualQChart::QChart_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QChart_SenderSignalIndex(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->senderSignalIndex();
    } else {
        return ((VirtualQChart*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QChart_QBaseSenderSignalIndex(const QChart* self) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SenderSignalIndex_IsBase(true);
        return vqchart->senderSignalIndex();
    } else {
        return ((VirtualQChart*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSenderSignalIndex(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SenderSignalIndex_Callback(reinterpret_cast<VirtualQChart::QChart_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QChart_Receivers(const QChart* self, const char* signal) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->receivers(signal);
    } else {
        return ((VirtualQChart*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QChart_QBaseReceivers(const QChart* self, const char* signal) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Receivers_IsBase(true);
        return vqchart->receivers(signal);
    } else {
        return ((VirtualQChart*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnReceivers(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_Receivers_Callback(reinterpret_cast<VirtualQChart::QChart_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChart_IsSignalConnected(const QChart* self, const QMetaMethod* signal) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        return vqchart->isSignalConnected(*signal);
    } else {
        return ((VirtualQChart*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QChart_QBaseIsSignalConnected(const QChart* self, const QMetaMethod* signal) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_IsSignalConnected_IsBase(true);
        return vqchart->isSignalConnected(*signal);
    } else {
        return ((VirtualQChart*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnIsSignalConnected(const QChart* self, intptr_t slot) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_IsSignalConnected_Callback(reinterpret_cast<VirtualQChart::QChart_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_AddToIndex(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->addToIndex();
    } else {
        ((VirtualQChart*)self)->addToIndex();
    }
}

// Base class handler implementation
void QChart_QBaseAddToIndex(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_AddToIndex_IsBase(true);
        vqchart->addToIndex();
    } else {
        ((VirtualQChart*)self)->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnAddToIndex(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_AddToIndex_Callback(reinterpret_cast<VirtualQChart::QChart_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_RemoveFromIndex(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->removeFromIndex();
    } else {
        ((VirtualQChart*)self)->removeFromIndex();
    }
}

// Base class handler implementation
void QChart_QBaseRemoveFromIndex(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_RemoveFromIndex_IsBase(true);
        vqchart->removeFromIndex();
    } else {
        ((VirtualQChart*)self)->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnRemoveFromIndex(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_RemoveFromIndex_Callback(reinterpret_cast<VirtualQChart::QChart_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_PrepareGeometryChange(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->prepareGeometryChange();
    } else {
        ((VirtualQChart*)self)->prepareGeometryChange();
    }
}

// Base class handler implementation
void QChart_QBasePrepareGeometryChange(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_PrepareGeometryChange_IsBase(true);
        vqchart->prepareGeometryChange();
    } else {
        ((VirtualQChart*)self)->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPrepareGeometryChange(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQChart::QChart_PrepareGeometryChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_SetGraphicsItem(QChart* self, QGraphicsItem* item) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setGraphicsItem(item);
    } else {
        ((VirtualQChart*)self)->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QChart_QBaseSetGraphicsItem(QChart* self, QGraphicsItem* item) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SetGraphicsItem_IsBase(true);
        vqchart->setGraphicsItem(item);
    } else {
        ((VirtualQChart*)self)->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSetGraphicsItem(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SetGraphicsItem_Callback(reinterpret_cast<VirtualQChart::QChart_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QChart_SetOwnedByLayout(QChart* self, bool ownedByLayout) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQChart*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QChart_QBaseSetOwnedByLayout(QChart* self, bool ownedByLayout) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SetOwnedByLayout_IsBase(true);
        vqchart->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQChart*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSetOwnedByLayout(QChart* self, intptr_t slot) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart && vqchart->isVirtualQChart) {
        vqchart->setQChart_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQChart::QChart_SetOwnedByLayout_Callback>(slot));
    }
}

void QChart_Delete(QChart* self) {
    delete self;
}
