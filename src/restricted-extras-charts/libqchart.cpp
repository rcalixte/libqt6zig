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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QChart_Tr(const char* s) {
    auto _ret = QChart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QAbstractSeries** _arr = static_cast<QAbstractSeries**>(malloc(sizeof(QAbstractSeries*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
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
    QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
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
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

void QChart_ZoomIn2(QChart* self, const QRectF* rect) {
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
    QChart::connect(self,
                    static_cast<void (QChart::*)(const QRectF&)>(&QChart::plotAreaChanged),
                    [self, slotFunc](const QRectF& plotArea) {
                        const QRectF& plotArea_ret = plotArea;
                        // Cast returned reference into pointer
                        QRectF* sigval1 = const_cast<QRectF*>(&plotArea_ret);
                        slotFunc(self, sigval1);
                    });
}

libqt_string QChart_Tr2(const char* s, const char* c) {
    auto _ret = QChart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QChart_Tr3(const char* s, const char* c, int n) {
    auto _ret = QChart::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QAbstractAxis* */ QChart_Axes2(const QChart* self, int orientation, QAbstractSeries* series) {
    QList<QAbstractAxis*> _ret = self->axes(static_cast<Qt::Orientations>(orientation), series);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
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

// Base class handler implementation
QMetaObject* QChart_SuperMetaObject(const QChart* self) {
    return (QMetaObject*)self->QChart::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMetaObject(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_metaobject_callback = reinterpret_cast<VirtualQChart::QChart_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QChart_SuperMetacast(QChart* self, const char* param1) {
    return self->QChart::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMetacast(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_metacast_callback = reinterpret_cast<VirtualQChart::QChart_Metacast_Callback>(slot);
}

// Base class handler implementation
int QChart_SuperMetacall(QChart* self, int param1, int param2, void** param3) {
    return self->QChart::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMetacall(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_metacall_callback = reinterpret_cast<VirtualQChart::QChart_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QChart_SetGeometry(QChart* self, const QRectF* rect) {
    self->setGeometry(*rect);
}

// Base class handler implementation
void QChart_SuperSetGeometry(QChart* self, const QRectF* rect) {
    self->QChart::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSetGeometry(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_setgeometry_callback = reinterpret_cast<VirtualQChart::QChart_SetGeometry_Callback>(slot);
}

// Derived class handler implementation
void QChart_GetContentsMargins(const QChart* self, double* left, double* top, double* right, double* bottom) {
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Base class handler implementation
void QChart_SuperGetContentsMargins(const QChart* self, double* left, double* top, double* right, double* bottom) {
    self->QChart::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Auxiliary method to allow providing re-implementation
void QChart_OnGetContentsMargins(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_getcontentsmargins_callback = reinterpret_cast<VirtualQChart::QChart_GetContentsMargins_Callback>(slot);
}

// Derived class handler implementation
int QChart_Type(const QChart* self) {
    return self->type();
}

// Base class handler implementation
int QChart_SuperType(const QChart* self) {
    return self->QChart::type();
}

// Auxiliary method to allow providing re-implementation
void QChart_OnType(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_type_callback = reinterpret_cast<VirtualQChart::QChart_Type_Callback>(slot);
}

// Derived class handler implementation
void QChart_Paint(QChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

// Base class handler implementation
void QChart_SuperPaint(QChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QChart::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPaint(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_paint_callback = reinterpret_cast<VirtualQChart::QChart_Paint_Callback>(slot);
}

// Derived class handler implementation
void QChart_PaintWindowFrame(QChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paintWindowFrame(painter, option, widget);
}

// Base class handler implementation
void QChart_SuperPaintWindowFrame(QChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QChart::paintWindowFrame(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPaintWindowFrame(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_paintwindowframe_callback = reinterpret_cast<VirtualQChart::QChart_PaintWindowFrame_Callback>(slot);
}

// Derived class handler implementation
QRectF* QChart_BoundingRect(const QChart* self) {
    return new QRectF(self->boundingRect());
}

// Base class handler implementation
QRectF* QChart_SuperBoundingRect(const QChart* self) {
    return new QRectF(self->QChart::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QChart_OnBoundingRect(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_boundingrect_callback = reinterpret_cast<VirtualQChart::QChart_BoundingRect_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QChart_Shape(const QChart* self) {
    return new QPainterPath(self->shape());
}

// Base class handler implementation
QPainterPath* QChart_SuperShape(const QChart* self) {
    return new QPainterPath(self->QChart::shape());
}

// Auxiliary method to allow providing re-implementation
void QChart_OnShape(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_shape_callback = reinterpret_cast<VirtualQChart::QChart_Shape_Callback>(slot);
}

// Derived class handler implementation
void QChart_InitStyleOption(const QChart* self, QStyleOption* option) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart) {
        vqchart->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QChart::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperInitStyleOption(const QChart* self, QStyleOption* option) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self))) {
        vqchart->QChart::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QChart::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnInitStyleOption(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_initstyleoption_callback = reinterpret_cast<VirtualQChart::QChart_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
QSizeF* QChart_SizeHint(const QChart* self, int which, const QSizeF* constraint) {
    return new QSizeF((self->*&VirtualQChart::Base::sizeHint)(static_cast<Qt::SizeHint>(which), *constraint));
}

// Base class handler implementation
QSizeF* QChart_SuperSizeHint(const QChart* self, int which, const QSizeF* constraint) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        return new QSizeF(vqchart->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    qFatal("Error: Protected virtual method QChart::sizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSizeHint(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_sizehint_callback = reinterpret_cast<VirtualQChart::QChart_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QChart_UpdateGeometry(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->updateGeometry();
    } else {
        qFatal("Error: Protected virtual method QChart::updateGeometry called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperUpdateGeometry(QChart* self) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::updateGeometry();
    } else
        qFatal("Error: Protected virtual method QChart::updateGeometry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnUpdateGeometry(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_updategeometry_callback = reinterpret_cast<VirtualQChart::QChart_UpdateGeometry_Callback>(slot);
}

// Derived class handler implementation
QVariant* QChart_ItemChange(QChart* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQChart::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QChart_SuperItemChange(QChart* self, int change, const QVariant* value) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        return new QVariant(vqchart->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QChart::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnItemChange(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_itemchange_callback = reinterpret_cast<VirtualQChart::QChart_ItemChange_Callback>(slot);
}

// Derived class handler implementation
QVariant* QChart_PropertyChange(QChart* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    return new QVariant((self->*&VirtualQChart::Base::propertyChange)(propertyName_QString, *value));
}

// Base class handler implementation
QVariant* QChart_SuperPropertyChange(QChart* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        return new QVariant(vqchart->propertyChange(propertyName_QString, *value));
    qFatal("Error: Protected virtual method QChart::propertyChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPropertyChange(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_propertychange_callback = reinterpret_cast<VirtualQChart::QChart_PropertyChange_Callback>(slot);
}

// Derived class handler implementation
bool QChart_SceneEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        return vqchart->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChart_SuperSceneEvent(QChart* self, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        return vqchart->QChart::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSceneEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_sceneevent_callback = reinterpret_cast<VirtualQChart::QChart_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
bool QChart_WindowFrameEvent(QChart* self, QEvent* e) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        return vqchart->windowFrameEvent(e);
    } else {
        qFatal("Error: Protected virtual method QChart::windowFrameEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChart_SuperWindowFrameEvent(QChart* self, QEvent* e) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        return vqchart->QChart::windowFrameEvent(e);
    } else
        qFatal("Error: Protected virtual method QChart::windowFrameEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnWindowFrameEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_windowframeevent_callback = reinterpret_cast<VirtualQChart::QChart_WindowFrameEvent_Callback>(slot);
}

// Derived class handler implementation
int QChart_WindowFrameSectionAt(const QChart* self, const QPointF* pos) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart) {
        return static_cast<int>(vqchart->windowFrameSectionAt(*pos));
    } else {
        qFatal("Error: Protected virtual method QChart::windowFrameSectionAt called without a directly constructed type");
    }
}

// Base class handler implementation
int QChart_SuperWindowFrameSectionAt(const QChart* self, const QPointF* pos) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self))) {
        return static_cast<int>(vqchart->QChart::windowFrameSectionAt(*pos));
    } else
        qFatal("Error: Protected virtual method QChart::windowFrameSectionAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnWindowFrameSectionAt(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_windowframesectionat_callback = reinterpret_cast<VirtualQChart::QChart_WindowFrameSectionAt_Callback>(slot);
}

// Derived class handler implementation
bool QChart_Event(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        return vqchart->event(event);
    } else {
        qFatal("Error: Protected virtual method QChart::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChart_SuperEvent(QChart* self, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        return vqchart->QChart::event(event);
    } else
        qFatal("Error: Protected virtual method QChart::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_event_callback = reinterpret_cast<VirtualQChart::QChart_Event_Callback>(slot);
}

// Derived class handler implementation
void QChart_ChangeEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperChangeEvent(QChart* self, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnChangeEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_changeevent_callback = reinterpret_cast<VirtualQChart::QChart_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_CloseEvent(QChart* self, QCloseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperCloseEvent(QChart* self, QCloseEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnCloseEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_closeevent_callback = reinterpret_cast<VirtualQChart::QChart_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_FocusInEvent(QChart* self, QFocusEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperFocusInEvent(QChart* self, QFocusEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnFocusInEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_focusinevent_callback = reinterpret_cast<VirtualQChart::QChart_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
bool QChart_FocusNextPrevChild(QChart* self, bool next) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        return vqchart->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QChart::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChart_SuperFocusNextPrevChild(QChart* self, bool next) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        return vqchart->QChart::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QChart::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnFocusNextPrevChild(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_focusnextprevchild_callback = reinterpret_cast<VirtualQChart::QChart_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QChart_FocusOutEvent(QChart* self, QFocusEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperFocusOutEvent(QChart* self, QFocusEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnFocusOutEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_focusoutevent_callback = reinterpret_cast<VirtualQChart::QChart_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_HideEvent(QChart* self, QHideEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperHideEvent(QChart* self, QHideEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnHideEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_hideevent_callback = reinterpret_cast<VirtualQChart::QChart_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_MoveEvent(QChart* self, QGraphicsSceneMoveEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperMoveEvent(QChart* self, QGraphicsSceneMoveEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMoveEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_moveevent_callback = reinterpret_cast<VirtualQChart::QChart_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_PolishEvent(QChart* self) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->polishEvent();
    } else {
        qFatal("Error: Protected virtual method QChart::polishEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperPolishEvent(QChart* self) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::polishEvent();
    } else
        qFatal("Error: Protected virtual method QChart::polishEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnPolishEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_polishevent_callback = reinterpret_cast<VirtualQChart::QChart_PolishEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_ResizeEvent(QChart* self, QGraphicsSceneResizeEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperResizeEvent(QChart* self, QGraphicsSceneResizeEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnResizeEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_resizeevent_callback = reinterpret_cast<VirtualQChart::QChart_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_ShowEvent(QChart* self, QShowEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperShowEvent(QChart* self, QShowEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnShowEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_showevent_callback = reinterpret_cast<VirtualQChart::QChart_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_HoverMoveEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperHoverMoveEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnHoverMoveEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_hovermoveevent_callback = reinterpret_cast<VirtualQChart::QChart_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_HoverLeaveEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperHoverLeaveEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnHoverLeaveEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_hoverleaveevent_callback = reinterpret_cast<VirtualQChart::QChart_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_GrabMouseEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->grabMouseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::grabMouseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperGrabMouseEvent(QChart* self, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::grabMouseEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::grabMouseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnGrabMouseEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_grabmouseevent_callback = reinterpret_cast<VirtualQChart::QChart_GrabMouseEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_UngrabMouseEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->ungrabMouseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::ungrabMouseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperUngrabMouseEvent(QChart* self, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::ungrabMouseEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::ungrabMouseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnUngrabMouseEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_ungrabmouseevent_callback = reinterpret_cast<VirtualQChart::QChart_UngrabMouseEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_GrabKeyboardEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->grabKeyboardEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::grabKeyboardEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperGrabKeyboardEvent(QChart* self, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::grabKeyboardEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::grabKeyboardEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnGrabKeyboardEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_grabkeyboardevent_callback = reinterpret_cast<VirtualQChart::QChart_GrabKeyboardEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_UngrabKeyboardEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->ungrabKeyboardEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::ungrabKeyboardEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperUngrabKeyboardEvent(QChart* self, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::ungrabKeyboardEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::ungrabKeyboardEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnUngrabKeyboardEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_ungrabkeyboardevent_callback = reinterpret_cast<VirtualQChart::QChart_UngrabKeyboardEvent_Callback>(slot);
}

// Derived class handler implementation
bool QChart_EventFilter(QChart* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QChart_SuperEventFilter(QChart* self, QObject* watched, QEvent* event) {
    return self->QChart::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QChart_OnEventFilter(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_eventfilter_callback = reinterpret_cast<VirtualQChart::QChart_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QChart_TimerEvent(QChart* self, QTimerEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperTimerEvent(QChart* self, QTimerEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnTimerEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_timerevent_callback = reinterpret_cast<VirtualQChart::QChart_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_ChildEvent(QChart* self, QChildEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperChildEvent(QChart* self, QChildEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnChildEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_childevent_callback = reinterpret_cast<VirtualQChart::QChart_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_CustomEvent(QChart* self, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperCustomEvent(QChart* self, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnCustomEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_customevent_callback = reinterpret_cast<VirtualQChart::QChart_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_ConnectNotify(QChart* self, const QMetaMethod* signal) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QChart::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperConnectNotify(QChart* self, const QMetaMethod* signal) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QChart::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnConnectNotify(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_connectnotify_callback = reinterpret_cast<VirtualQChart::QChart_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QChart_DisconnectNotify(QChart* self, const QMetaMethod* signal) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QChart::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperDisconnectNotify(QChart* self, const QMetaMethod* signal) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QChart::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDisconnectNotify(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_disconnectnotify_callback = reinterpret_cast<VirtualQChart::QChart_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QChart_Advance(QChart* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QChart_SuperAdvance(QChart* self, int phase) {
    self->QChart::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QChart_OnAdvance(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_advance_callback = reinterpret_cast<VirtualQChart::QChart_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QChart_Contains(const QChart* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QChart_SuperContains(const QChart* self, const QPointF* point) {
    return self->QChart::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QChart_OnContains(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_contains_callback = reinterpret_cast<VirtualQChart::QChart_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QChart_CollidesWithItem(const QChart* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QChart_SuperCollidesWithItem(const QChart* self, const QGraphicsItem* other, int mode) {
    return self->QChart::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QChart_OnCollidesWithItem(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_collideswithitem_callback = reinterpret_cast<VirtualQChart::QChart_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QChart_CollidesWithPath(const QChart* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QChart_SuperCollidesWithPath(const QChart* self, const QPainterPath* path, int mode) {
    return self->QChart::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QChart_OnCollidesWithPath(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_collideswithpath_callback = reinterpret_cast<VirtualQChart::QChart_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QChart_IsObscuredBy(const QChart* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

// Base class handler implementation
bool QChart_SuperIsObscuredBy(const QChart* self, const QGraphicsItem* item) {
    return self->QChart::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QChart_OnIsObscuredBy(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_isobscuredby_callback = reinterpret_cast<VirtualQChart::QChart_IsObscuredBy_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QChart_OpaqueArea(const QChart* self) {
    return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
QPainterPath* QChart_SuperOpaqueArea(const QChart* self) {
    return new QPainterPath(self->QChart::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QChart_OnOpaqueArea(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_opaquearea_callback = reinterpret_cast<VirtualQChart::QChart_OpaqueArea_Callback>(slot);
}

// Derived class handler implementation
bool QChart_SceneEventFilter(QChart* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        return vqchart->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QChart::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChart_SuperSceneEventFilter(QChart* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        return vqchart->QChart::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QChart::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSceneEventFilter(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_sceneeventfilter_callback = reinterpret_cast<VirtualQChart::QChart_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
void QChart_ContextMenuEvent(QChart* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperContextMenuEvent(QChart* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnContextMenuEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_contextmenuevent_callback = reinterpret_cast<VirtualQChart::QChart_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_DragEnterEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperDragEnterEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDragEnterEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_dragenterevent_callback = reinterpret_cast<VirtualQChart::QChart_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_DragLeaveEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperDragLeaveEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDragLeaveEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_dragleaveevent_callback = reinterpret_cast<VirtualQChart::QChart_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_DragMoveEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperDragMoveEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDragMoveEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_dragmoveevent_callback = reinterpret_cast<VirtualQChart::QChart_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_DropEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperDropEvent(QChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnDropEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_dropevent_callback = reinterpret_cast<VirtualQChart::QChart_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_HoverEnterEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperHoverEnterEvent(QChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnHoverEnterEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_hoverenterevent_callback = reinterpret_cast<VirtualQChart::QChart_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_KeyPressEvent(QChart* self, QKeyEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperKeyPressEvent(QChart* self, QKeyEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnKeyPressEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_keypressevent_callback = reinterpret_cast<VirtualQChart::QChart_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_KeyReleaseEvent(QChart* self, QKeyEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperKeyReleaseEvent(QChart* self, QKeyEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnKeyReleaseEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_keyreleaseevent_callback = reinterpret_cast<VirtualQChart::QChart_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_MousePressEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperMousePressEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMousePressEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_mousepressevent_callback = reinterpret_cast<VirtualQChart::QChart_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_MouseMoveEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperMouseMoveEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMouseMoveEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_mousemoveevent_callback = reinterpret_cast<VirtualQChart::QChart_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_MouseReleaseEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperMouseReleaseEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMouseReleaseEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_mousereleaseevent_callback = reinterpret_cast<VirtualQChart::QChart_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_MouseDoubleClickEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperMouseDoubleClickEvent(QChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnMouseDoubleClickEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_mousedoubleclickevent_callback = reinterpret_cast<VirtualQChart::QChart_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_WheelEvent(QChart* self, QGraphicsSceneWheelEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperWheelEvent(QChart* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnWheelEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_wheelevent_callback = reinterpret_cast<VirtualQChart::QChart_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QChart_InputMethodEvent(QChart* self, QInputMethodEvent* event) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChart::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperInputMethodEvent(QChart* self, QInputMethodEvent* event) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QChart::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnInputMethodEvent(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_inputmethodevent_callback = reinterpret_cast<VirtualQChart::QChart_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QChart_InputMethodQuery(const QChart* self, int query) {
    return new QVariant((self->*&VirtualQChart::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QChart_SuperInputMethodQuery(const QChart* self, int query) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        return new QVariant(vqchart->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QChart::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnInputMethodQuery(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_inputmethodquery_callback = reinterpret_cast<VirtualQChart::QChart_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QChart_SupportsExtension(const QChart* self, int extension) {
    auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self));
    if (vqchart) {
        return vqchart->supportsExtension(static_cast<VirtualQChart::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QChart::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QChart_SuperSupportsExtension(const QChart* self, int extension) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self))) {
        return vqchart->QChart::supportsExtension(static_cast<VirtualQChart::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QChart::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSupportsExtension(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_supportsextension_callback = reinterpret_cast<VirtualQChart::QChart_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QChart_SetExtension(QChart* self, int extension, const QVariant* variant) {
    auto* vqchart = dynamic_cast<VirtualQChart*>(self);
    if (vqchart) {
        vqchart->setExtension(static_cast<VirtualQChart::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QChart::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QChart_SuperSetExtension(QChart* self, int extension, const QVariant* variant) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->QChart::setExtension(static_cast<VirtualQChart::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QChart::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnSetExtension(QChart* self, intptr_t slot) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self))
        vqchart->qchart_setextension_callback = reinterpret_cast<VirtualQChart::QChart_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QChart_Extension(const QChart* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQChart::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QChart_SuperExtension(const QChart* self, const QVariant* variant) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        return new QVariant(vqchart->extension(*variant));
    qFatal("Error: Protected virtual method QChart::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChart_OnExtension(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_extension_callback = reinterpret_cast<VirtualQChart::QChart_Extension_Callback>(slot);
}

// Derived class handler implementation
bool QChart_IsEmpty(const QChart* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QChart_SuperIsEmpty(const QChart* self) {
    return self->QChart::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QChart_OnIsEmpty(QChart* self, intptr_t slot) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self)))
        vqchart->qchart_isempty_callback = reinterpret_cast<VirtualQChart::QChart_IsEmpty_Callback>(slot);
}

// Derived class protected handler implementation
void QChart_UpdateMicroFocus(QChart* self) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->VirtualQChart::updateMicroFocus();
    } else
        qFatal("Error: Protected method QChart::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QChart_Sender(const QChart* self) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self))) {
        return vqchart->VirtualQChart::sender();
    } else
        qFatal("Error: Protected method QChart::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QChart_SenderSignalIndex(const QChart* self) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self))) {
        return vqchart->VirtualQChart::senderSignalIndex();
    } else
        qFatal("Error: Protected method QChart::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QChart_Receivers(const QChart* self, const char* signal) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self))) {
        return vqchart->VirtualQChart::receivers(signal);
    } else
        qFatal("Error: Protected method QChart::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QChart_IsSignalConnected(const QChart* self, const QMetaMethod* signal) {
    if (auto* vqchart = const_cast<VirtualQChart*>(dynamic_cast<const VirtualQChart*>(self))) {
        return vqchart->VirtualQChart::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QChart::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
void QChart_AddToIndex(QChart* self) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->VirtualQChart::addToIndex();
    } else
        qFatal("Error: Protected method QChart::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QChart_RemoveFromIndex(QChart* self) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->VirtualQChart::removeFromIndex();
    } else
        qFatal("Error: Protected method QChart::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QChart_PrepareGeometryChange(QChart* self) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->VirtualQChart::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QChart::prepareGeometryChange called without a directly constructed type");
}

// Derived class protected handler implementation
void QChart_SetGraphicsItem(QChart* self, QGraphicsItem* item) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->VirtualQChart::setGraphicsItem(item);
    } else
        qFatal("Error: Protected method QChart::setGraphicsItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QChart_SetOwnedByLayout(QChart* self, bool ownedByLayout) {
    if (auto* vqchart = dynamic_cast<VirtualQChart*>(self)) {
        vqchart->VirtualQChart::setOwnedByLayout(ownedByLayout);
    } else
        qFatal("Error: Protected method QChart::setOwnedByLayout called without a directly constructed type");
}

void QChart_Delete(QChart* self) {
    delete self;
}
