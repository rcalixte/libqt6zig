#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QAction>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChart>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCursor>
#include <QEasingCurve>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsTransform>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLegend>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMarginsF>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPen>
#include <QPointF>
#include <QPolarChart>
#include <QRectF>
#include <QRegion>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qpolarchart.h>
#include "libqpolarchart.h"
#include "libqpolarchart.hxx"

QPolarChart* QPolarChart_new() {
    return new VirtualQPolarChart();
}

QPolarChart* QPolarChart_new2(QGraphicsItem* parent) {
    return new VirtualQPolarChart(parent);
}

QPolarChart* QPolarChart_new3(QGraphicsItem* parent, int wFlags) {
    return new VirtualQPolarChart(parent, static_cast<Qt::WindowFlags>(wFlags));
}

QMetaObject* QPolarChart_MetaObject(const QPolarChart* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPolarChart_Metacast(QPolarChart* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPolarChart_Metacall(QPolarChart* self, int param1, int param2, void** param3) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPolarChart_OnMetacall(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_Metacall_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPolarChart_QBaseMetacall(QPolarChart* self, int param1, int param2, void** param3) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_Metacall_IsBase(true);
        return vqpolarchart->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPolarChart_Tr(const char* s) {
    QString _ret = QPolarChart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPolarChart_AddAxis(QPolarChart* self, QAbstractAxis* axis, int polarOrientation) {
    self->addAxis(axis, static_cast<QPolarChart::PolarOrientation>(polarOrientation));
}

libqt_list /* of QAbstractAxis* */ QPolarChart_Axes(const QPolarChart* self) {
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

int QPolarChart_AxisPolarOrientation(QAbstractAxis* axis) {
    return static_cast<int>(QPolarChart::axisPolarOrientation(axis));
}

libqt_string QPolarChart_Tr2(const char* s, const char* c) {
    QString _ret = QPolarChart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPolarChart_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPolarChart::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAbstractAxis* */ QPolarChart_Axes1(const QPolarChart* self, int polarOrientation) {
    QList<QAbstractAxis*> _ret = self->axes(static_cast<QPolarChart::PolarOrientations>(polarOrientation));
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

libqt_list /* of QAbstractAxis* */ QPolarChart_Axes2(const QPolarChart* self, int polarOrientation, QAbstractSeries* series) {
    QList<QAbstractAxis*> _ret = self->axes(static_cast<QPolarChart::PolarOrientations>(polarOrientation), series);
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

// Derived class handler implementation
void QPolarChart_SetGeometry(QPolarChart* self, QRectF* rect) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setGeometry(*rect);
    } else {
        vqpolarchart->setGeometry(*rect);
    }
}

// Base class handler implementation
void QPolarChart_QBaseSetGeometry(QPolarChart* self, QRectF* rect) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SetGeometry_IsBase(true);
        vqpolarchart->setGeometry(*rect);
    } else {
        vqpolarchart->setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSetGeometry(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SetGeometry_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_GetContentsMargins(const QPolarChart* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqpolarchart->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QPolarChart_QBaseGetContentsMargins(const QPolarChart* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_GetContentsMargins_IsBase(true);
        vqpolarchart->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqpolarchart->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnGetContentsMargins(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_GetContentsMargins_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
int QPolarChart_Type(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->type();
    } else {
        return vqpolarchart->type();
    }
}

// Base class handler implementation
int QPolarChart_QBaseType(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Type_IsBase(true);
        return vqpolarchart->type();
    } else {
        return vqpolarchart->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnType(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Type_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_Paint(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->paint(painter, option, widget);
    } else {
        vqpolarchart->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QPolarChart_QBasePaint(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_Paint_IsBase(true);
        vqpolarchart->paint(painter, option, widget);
    } else {
        vqpolarchart->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPaint(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_Paint_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_PaintWindowFrame(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->paintWindowFrame(painter, option, widget);
    } else {
        vqpolarchart->paintWindowFrame(painter, option, widget);
    }
}

// Base class handler implementation
void QPolarChart_QBasePaintWindowFrame(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_PaintWindowFrame_IsBase(true);
        vqpolarchart->paintWindowFrame(painter, option, widget);
    } else {
        vqpolarchart->paintWindowFrame(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPaintWindowFrame(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_PaintWindowFrame_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_PaintWindowFrame_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPolarChart_BoundingRect(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return new QRectF(vqpolarchart->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QPolarChart_QBaseBoundingRect(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_BoundingRect_IsBase(true);
        return new QRectF(vqpolarchart->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnBoundingRect(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_BoundingRect_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QPolarChart_Shape(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return new QPainterPath(vqpolarchart->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QPolarChart_QBaseShape(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Shape_IsBase(true);
        return new QPainterPath(vqpolarchart->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnShape(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Shape_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_InitStyleOption(const QPolarChart* self, QStyleOption* option) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->initStyleOption(option);
    } else {
        vqpolarchart->initStyleOption(option);
    }
}

// Base class handler implementation
void QPolarChart_QBaseInitStyleOption(const QPolarChart* self, QStyleOption* option) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_InitStyleOption_IsBase(true);
        vqpolarchart->initStyleOption(option);
    } else {
        vqpolarchart->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnInitStyleOption(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_InitStyleOption_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QPolarChart_SizeHint(const QPolarChart* self, int which, QSizeF* constraint) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return new QSizeF(vqpolarchart->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QPolarChart_QBaseSizeHint(const QPolarChart* self, int which, QSizeF* constraint) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_SizeHint_IsBase(true);
        return new QSizeF(vqpolarchart->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSizeHint(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_SizeHint_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_UpdateGeometry(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->updateGeometry();
    } else {
        vqpolarchart->updateGeometry();
    }
}

// Base class handler implementation
void QPolarChart_QBaseUpdateGeometry(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_UpdateGeometry_IsBase(true);
        vqpolarchart->updateGeometry();
    } else {
        vqpolarchart->updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnUpdateGeometry(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_UpdateGeometry_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPolarChart_ItemChange(QPolarChart* self, int change, QVariant* value) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return new QVariant(vqpolarchart->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QPolarChart_QBaseItemChange(QPolarChart* self, int change, QVariant* value) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ItemChange_IsBase(true);
        return new QVariant(vqpolarchart->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnItemChange(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ItemChange_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPolarChart_PropertyChange(QPolarChart* self, libqt_string propertyName, QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return new QVariant(vqpolarchart->propertyChange(propertyName_QString, *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QPolarChart_QBasePropertyChange(QPolarChart* self, libqt_string propertyName, QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_PropertyChange_IsBase(true);
        return new QVariant(vqpolarchart->propertyChange(propertyName_QString, *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPropertyChange(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_PropertyChange_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_PropertyChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_SceneEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->sceneEvent(event);
    } else {
        return vqpolarchart->sceneEvent(event);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseSceneEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SceneEvent_IsBase(true);
        return vqpolarchart->sceneEvent(event);
    } else {
        return vqpolarchart->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSceneEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SceneEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_WindowFrameEvent(QPolarChart* self, QEvent* e) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->windowFrameEvent(e);
    } else {
        return vqpolarchart->windowFrameEvent(e);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseWindowFrameEvent(QPolarChart* self, QEvent* e) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_WindowFrameEvent_IsBase(true);
        return vqpolarchart->windowFrameEvent(e);
    } else {
        return vqpolarchart->windowFrameEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnWindowFrameEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_WindowFrameEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_WindowFrameEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPolarChart_WindowFrameSectionAt(const QPolarChart* self, QPointF* pos) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return static_cast<int>(vqpolarchart->windowFrameSectionAt(*pos));
    } else {
        return static_cast<int>(vqpolarchart->windowFrameSectionAt(*pos));
    }
}

// Base class handler implementation
int QPolarChart_QBaseWindowFrameSectionAt(const QPolarChart* self, QPointF* pos) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_WindowFrameSectionAt_IsBase(true);
        return static_cast<int>(vqpolarchart->windowFrameSectionAt(*pos));
    } else {
        return static_cast<int>(vqpolarchart->windowFrameSectionAt(*pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnWindowFrameSectionAt(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_WindowFrameSectionAt_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_WindowFrameSectionAt_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_Event(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->event(event);
    } else {
        return vqpolarchart->event(event);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_Event_IsBase(true);
        return vqpolarchart->event(event);
    } else {
        return vqpolarchart->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_Event_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_ChangeEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->changeEvent(event);
    } else {
        vqpolarchart->changeEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseChangeEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ChangeEvent_IsBase(true);
        vqpolarchart->changeEvent(event);
    } else {
        vqpolarchart->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnChangeEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ChangeEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_CloseEvent(QPolarChart* self, QCloseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->closeEvent(event);
    } else {
        vqpolarchart->closeEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseCloseEvent(QPolarChart* self, QCloseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_CloseEvent_IsBase(true);
        vqpolarchart->closeEvent(event);
    } else {
        vqpolarchart->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnCloseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_CloseEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_FocusInEvent(QPolarChart* self, QFocusEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->focusInEvent(event);
    } else {
        vqpolarchart->focusInEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseFocusInEvent(QPolarChart* self, QFocusEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_FocusInEvent_IsBase(true);
        vqpolarchart->focusInEvent(event);
    } else {
        vqpolarchart->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnFocusInEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_FocusInEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_FocusNextPrevChild(QPolarChart* self, bool next) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->focusNextPrevChild(next);
    } else {
        return vqpolarchart->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseFocusNextPrevChild(QPolarChart* self, bool next) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_FocusNextPrevChild_IsBase(true);
        return vqpolarchart->focusNextPrevChild(next);
    } else {
        return vqpolarchart->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnFocusNextPrevChild(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_FocusOutEvent(QPolarChart* self, QFocusEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->focusOutEvent(event);
    } else {
        vqpolarchart->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseFocusOutEvent(QPolarChart* self, QFocusEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_FocusOutEvent_IsBase(true);
        vqpolarchart->focusOutEvent(event);
    } else {
        vqpolarchart->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnFocusOutEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_FocusOutEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_HideEvent(QPolarChart* self, QHideEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->hideEvent(event);
    } else {
        vqpolarchart->hideEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseHideEvent(QPolarChart* self, QHideEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_HideEvent_IsBase(true);
        vqpolarchart->hideEvent(event);
    } else {
        vqpolarchart->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnHideEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_HideEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_MoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->moveEvent(event);
    } else {
        vqpolarchart->moveEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseMoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MoveEvent_IsBase(true);
        vqpolarchart->moveEvent(event);
    } else {
        vqpolarchart->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMoveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MoveEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_PolishEvent(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->polishEvent();
    } else {
        vqpolarchart->polishEvent();
    }
}

// Base class handler implementation
void QPolarChart_QBasePolishEvent(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_PolishEvent_IsBase(true);
        vqpolarchart->polishEvent();
    } else {
        vqpolarchart->polishEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPolishEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_PolishEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_PolishEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_ResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->resizeEvent(event);
    } else {
        vqpolarchart->resizeEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ResizeEvent_IsBase(true);
        vqpolarchart->resizeEvent(event);
    } else {
        vqpolarchart->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnResizeEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ResizeEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_ShowEvent(QPolarChart* self, QShowEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->showEvent(event);
    } else {
        vqpolarchart->showEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseShowEvent(QPolarChart* self, QShowEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ShowEvent_IsBase(true);
        vqpolarchart->showEvent(event);
    } else {
        vqpolarchart->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnShowEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ShowEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_HoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->hoverMoveEvent(event);
    } else {
        vqpolarchart->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseHoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_HoverMoveEvent_IsBase(true);
        vqpolarchart->hoverMoveEvent(event);
    } else {
        vqpolarchart->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnHoverMoveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_HoverMoveEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_HoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->hoverLeaveEvent(event);
    } else {
        vqpolarchart->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseHoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_HoverLeaveEvent_IsBase(true);
        vqpolarchart->hoverLeaveEvent(event);
    } else {
        vqpolarchart->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnHoverLeaveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_GrabMouseEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->grabMouseEvent(event);
    } else {
        vqpolarchart->grabMouseEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseGrabMouseEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_GrabMouseEvent_IsBase(true);
        vqpolarchart->grabMouseEvent(event);
    } else {
        vqpolarchart->grabMouseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnGrabMouseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_GrabMouseEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_GrabMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_UngrabMouseEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->ungrabMouseEvent(event);
    } else {
        vqpolarchart->ungrabMouseEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseUngrabMouseEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_UngrabMouseEvent_IsBase(true);
        vqpolarchart->ungrabMouseEvent(event);
    } else {
        vqpolarchart->ungrabMouseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnUngrabMouseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_UngrabMouseEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_UngrabMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_GrabKeyboardEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->grabKeyboardEvent(event);
    } else {
        vqpolarchart->grabKeyboardEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseGrabKeyboardEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_GrabKeyboardEvent_IsBase(true);
        vqpolarchart->grabKeyboardEvent(event);
    } else {
        vqpolarchart->grabKeyboardEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnGrabKeyboardEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_GrabKeyboardEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_GrabKeyboardEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_UngrabKeyboardEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->ungrabKeyboardEvent(event);
    } else {
        vqpolarchart->ungrabKeyboardEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseUngrabKeyboardEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_UngrabKeyboardEvent_IsBase(true);
        vqpolarchart->ungrabKeyboardEvent(event);
    } else {
        vqpolarchart->ungrabKeyboardEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnUngrabKeyboardEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_UngrabKeyboardEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_UngrabKeyboardEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_EventFilter(QPolarChart* self, QObject* watched, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->eventFilter(watched, event);
    } else {
        return vqpolarchart->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseEventFilter(QPolarChart* self, QObject* watched, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_EventFilter_IsBase(true);
        return vqpolarchart->eventFilter(watched, event);
    } else {
        return vqpolarchart->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnEventFilter(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_EventFilter_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_TimerEvent(QPolarChart* self, QTimerEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->timerEvent(event);
    } else {
        vqpolarchart->timerEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseTimerEvent(QPolarChart* self, QTimerEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_TimerEvent_IsBase(true);
        vqpolarchart->timerEvent(event);
    } else {
        vqpolarchart->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnTimerEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_TimerEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_ChildEvent(QPolarChart* self, QChildEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->childEvent(event);
    } else {
        vqpolarchart->childEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseChildEvent(QPolarChart* self, QChildEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ChildEvent_IsBase(true);
        vqpolarchart->childEvent(event);
    } else {
        vqpolarchart->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnChildEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ChildEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_CustomEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->customEvent(event);
    } else {
        vqpolarchart->customEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseCustomEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_CustomEvent_IsBase(true);
        vqpolarchart->customEvent(event);
    } else {
        vqpolarchart->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnCustomEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_CustomEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_ConnectNotify(QPolarChart* self, QMetaMethod* signal) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->connectNotify(*signal);
    } else {
        vqpolarchart->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPolarChart_QBaseConnectNotify(QPolarChart* self, QMetaMethod* signal) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ConnectNotify_IsBase(true);
        vqpolarchart->connectNotify(*signal);
    } else {
        vqpolarchart->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnConnectNotify(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ConnectNotify_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_DisconnectNotify(QPolarChart* self, QMetaMethod* signal) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->disconnectNotify(*signal);
    } else {
        vqpolarchart->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPolarChart_QBaseDisconnectNotify(QPolarChart* self, QMetaMethod* signal) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DisconnectNotify_IsBase(true);
        vqpolarchart->disconnectNotify(*signal);
    } else {
        vqpolarchart->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDisconnectNotify(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DisconnectNotify_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_Advance(QPolarChart* self, int phase) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->advance(static_cast<int>(phase));
    } else {
        vqpolarchart->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QPolarChart_QBaseAdvance(QPolarChart* self, int phase) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_Advance_IsBase(true);
        vqpolarchart->advance(static_cast<int>(phase));
    } else {
        vqpolarchart->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnAdvance(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_Advance_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_Contains(const QPolarChart* self, QPointF* point) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->contains(*point);
    } else {
        return vqpolarchart->contains(*point);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseContains(const QPolarChart* self, QPointF* point) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Contains_IsBase(true);
        return vqpolarchart->contains(*point);
    } else {
        return vqpolarchart->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnContains(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Contains_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_CollidesWithItem(const QPolarChart* self, QGraphicsItem* other, int mode) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqpolarchart->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QPolarChart_QBaseCollidesWithItem(const QPolarChart* self, QGraphicsItem* other, int mode) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_CollidesWithItem_IsBase(true);
        return vqpolarchart->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqpolarchart->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnCollidesWithItem(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_CollidesWithItem_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_CollidesWithPath(const QPolarChart* self, QPainterPath* path, int mode) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqpolarchart->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QPolarChart_QBaseCollidesWithPath(const QPolarChart* self, QPainterPath* path, int mode) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_CollidesWithPath_IsBase(true);
        return vqpolarchart->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqpolarchart->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnCollidesWithPath(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_CollidesWithPath_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_IsObscuredBy(const QPolarChart* self, QGraphicsItem* item) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->isObscuredBy(item);
    } else {
        return vqpolarchart->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseIsObscuredBy(const QPolarChart* self, QGraphicsItem* item) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_IsObscuredBy_IsBase(true);
        return vqpolarchart->isObscuredBy(item);
    } else {
        return vqpolarchart->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnIsObscuredBy(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_IsObscuredBy_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QPolarChart_OpaqueArea(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return new QPainterPath(vqpolarchart->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QPolarChart_QBaseOpaqueArea(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_OpaqueArea_IsBase(true);
        return new QPainterPath(vqpolarchart->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnOpaqueArea(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_OpaqueArea_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_SceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->sceneEventFilter(watched, event);
    } else {
        return vqpolarchart->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseSceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SceneEventFilter_IsBase(true);
        return vqpolarchart->sceneEventFilter(watched, event);
    } else {
        return vqpolarchart->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSceneEventFilter(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SceneEventFilter_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_ContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->contextMenuEvent(event);
    } else {
        vqpolarchart->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ContextMenuEvent_IsBase(true);
        vqpolarchart->contextMenuEvent(event);
    } else {
        vqpolarchart->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnContextMenuEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_DragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->dragEnterEvent(event);
    } else {
        vqpolarchart->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseDragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DragEnterEvent_IsBase(true);
        vqpolarchart->dragEnterEvent(event);
    } else {
        vqpolarchart->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDragEnterEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DragEnterEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_DragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->dragLeaveEvent(event);
    } else {
        vqpolarchart->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseDragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DragLeaveEvent_IsBase(true);
        vqpolarchart->dragLeaveEvent(event);
    } else {
        vqpolarchart->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDragLeaveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_DragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->dragMoveEvent(event);
    } else {
        vqpolarchart->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseDragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DragMoveEvent_IsBase(true);
        vqpolarchart->dragMoveEvent(event);
    } else {
        vqpolarchart->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDragMoveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DragMoveEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_DropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->dropEvent(event);
    } else {
        vqpolarchart->dropEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseDropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DropEvent_IsBase(true);
        vqpolarchart->dropEvent(event);
    } else {
        vqpolarchart->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDropEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_DropEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_HoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->hoverEnterEvent(event);
    } else {
        vqpolarchart->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseHoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_HoverEnterEvent_IsBase(true);
        vqpolarchart->hoverEnterEvent(event);
    } else {
        vqpolarchart->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnHoverEnterEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_HoverEnterEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_KeyPressEvent(QPolarChart* self, QKeyEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->keyPressEvent(event);
    } else {
        vqpolarchart->keyPressEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseKeyPressEvent(QPolarChart* self, QKeyEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_KeyPressEvent_IsBase(true);
        vqpolarchart->keyPressEvent(event);
    } else {
        vqpolarchart->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnKeyPressEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_KeyPressEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_KeyReleaseEvent(QPolarChart* self, QKeyEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->keyReleaseEvent(event);
    } else {
        vqpolarchart->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseKeyReleaseEvent(QPolarChart* self, QKeyEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_KeyReleaseEvent_IsBase(true);
        vqpolarchart->keyReleaseEvent(event);
    } else {
        vqpolarchart->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnKeyReleaseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_MousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->mousePressEvent(event);
    } else {
        vqpolarchart->mousePressEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseMousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MousePressEvent_IsBase(true);
        vqpolarchart->mousePressEvent(event);
    } else {
        vqpolarchart->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMousePressEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MousePressEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_MouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->mouseMoveEvent(event);
    } else {
        vqpolarchart->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseMouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MouseMoveEvent_IsBase(true);
        vqpolarchart->mouseMoveEvent(event);
    } else {
        vqpolarchart->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMouseMoveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_MouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->mouseReleaseEvent(event);
    } else {
        vqpolarchart->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseMouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MouseReleaseEvent_IsBase(true);
        vqpolarchart->mouseReleaseEvent(event);
    } else {
        vqpolarchart->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMouseReleaseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_MouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->mouseDoubleClickEvent(event);
    } else {
        vqpolarchart->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseMouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MouseDoubleClickEvent_IsBase(true);
        vqpolarchart->mouseDoubleClickEvent(event);
    } else {
        vqpolarchart->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMouseDoubleClickEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_WheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->wheelEvent(event);
    } else {
        vqpolarchart->wheelEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseWheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_WheelEvent_IsBase(true);
        vqpolarchart->wheelEvent(event);
    } else {
        vqpolarchart->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnWheelEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_WheelEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_InputMethodEvent(QPolarChart* self, QInputMethodEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->inputMethodEvent(event);
    } else {
        vqpolarchart->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QPolarChart_QBaseInputMethodEvent(QPolarChart* self, QInputMethodEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_InputMethodEvent_IsBase(true);
        vqpolarchart->inputMethodEvent(event);
    } else {
        vqpolarchart->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnInputMethodEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_InputMethodEvent_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPolarChart_InputMethodQuery(const QPolarChart* self, int query) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return new QVariant(vqpolarchart->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QPolarChart_QBaseInputMethodQuery(const QPolarChart* self, int query) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_InputMethodQuery_IsBase(true);
        return new QVariant(vqpolarchart->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnInputMethodQuery(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_InputMethodQuery_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_SupportsExtension(const QPolarChart* self, int extension) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->supportsExtension(static_cast<VirtualQPolarChart::Extension>(extension));
    } else {
        return vqpolarchart->supportsExtension(static_cast<VirtualQPolarChart::Extension>(extension));
    }
}

// Base class handler implementation
bool QPolarChart_QBaseSupportsExtension(const QPolarChart* self, int extension) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_SupportsExtension_IsBase(true);
        return vqpolarchart->supportsExtension(static_cast<VirtualQPolarChart::Extension>(extension));
    } else {
        return vqpolarchart->supportsExtension(static_cast<VirtualQPolarChart::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSupportsExtension(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_SupportsExtension_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_SetExtension(QPolarChart* self, int extension, QVariant* variant) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setExtension(static_cast<VirtualQPolarChart::Extension>(extension), *variant);
    } else {
        vqpolarchart->setExtension(static_cast<VirtualQPolarChart::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QPolarChart_QBaseSetExtension(QPolarChart* self, int extension, QVariant* variant) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SetExtension_IsBase(true);
        vqpolarchart->setExtension(static_cast<VirtualQPolarChart::Extension>(extension), *variant);
    } else {
        vqpolarchart->setExtension(static_cast<VirtualQPolarChart::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSetExtension(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SetExtension_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPolarChart_Extension(const QPolarChart* self, QVariant* variant) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return new QVariant(vqpolarchart->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QPolarChart_QBaseExtension(const QPolarChart* self, QVariant* variant) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Extension_IsBase(true);
        return new QVariant(vqpolarchart->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnExtension(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Extension_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_IsEmpty(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->isEmpty();
    } else {
        return vqpolarchart->isEmpty();
    }
}

// Base class handler implementation
bool QPolarChart_QBaseIsEmpty(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_IsEmpty_IsBase(true);
        return vqpolarchart->isEmpty();
    } else {
        return vqpolarchart->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnIsEmpty(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_IsEmpty_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_UpdateMicroFocus(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->updateMicroFocus();
    } else {
        vqpolarchart->updateMicroFocus();
    }
}

// Base class handler implementation
void QPolarChart_QBaseUpdateMicroFocus(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_UpdateMicroFocus_IsBase(true);
        vqpolarchart->updateMicroFocus();
    } else {
        vqpolarchart->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnUpdateMicroFocus(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPolarChart_Sender(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->sender();
    } else {
        return vqpolarchart->sender();
    }
}

// Base class handler implementation
QObject* QPolarChart_QBaseSender(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Sender_IsBase(true);
        return vqpolarchart->sender();
    } else {
        return vqpolarchart->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSender(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Sender_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPolarChart_SenderSignalIndex(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->senderSignalIndex();
    } else {
        return vqpolarchart->senderSignalIndex();
    }
}

// Base class handler implementation
int QPolarChart_QBaseSenderSignalIndex(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_SenderSignalIndex_IsBase(true);
        return vqpolarchart->senderSignalIndex();
    } else {
        return vqpolarchart->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSenderSignalIndex(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPolarChart_Receivers(const QPolarChart* self, const char* signal) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->receivers(signal);
    } else {
        return vqpolarchart->receivers(signal);
    }
}

// Base class handler implementation
int QPolarChart_QBaseReceivers(const QPolarChart* self, const char* signal) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Receivers_IsBase(true);
        return vqpolarchart->receivers(signal);
    } else {
        return vqpolarchart->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnReceivers(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_Receivers_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPolarChart_IsSignalConnected(const QPolarChart* self, QMetaMethod* signal) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->isSignalConnected(*signal);
    } else {
        return vqpolarchart->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPolarChart_QBaseIsSignalConnected(const QPolarChart* self, QMetaMethod* signal) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_IsSignalConnected_IsBase(true);
        return vqpolarchart->isSignalConnected(*signal);
    } else {
        return vqpolarchart->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnIsSignalConnected(const QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->setQPolarChart_IsSignalConnected_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_AddToIndex(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->addToIndex();
    } else {
        vqpolarchart->addToIndex();
    }
}

// Base class handler implementation
void QPolarChart_QBaseAddToIndex(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_AddToIndex_IsBase(true);
        vqpolarchart->addToIndex();
    } else {
        vqpolarchart->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnAddToIndex(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_AddToIndex_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_RemoveFromIndex(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->removeFromIndex();
    } else {
        vqpolarchart->removeFromIndex();
    }
}

// Base class handler implementation
void QPolarChart_QBaseRemoveFromIndex(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_RemoveFromIndex_IsBase(true);
        vqpolarchart->removeFromIndex();
    } else {
        vqpolarchart->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnRemoveFromIndex(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_RemoveFromIndex_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_PrepareGeometryChange(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->prepareGeometryChange();
    } else {
        vqpolarchart->prepareGeometryChange();
    }
}

// Base class handler implementation
void QPolarChart_QBasePrepareGeometryChange(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_PrepareGeometryChange_IsBase(true);
        vqpolarchart->prepareGeometryChange();
    } else {
        vqpolarchart->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPrepareGeometryChange(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_PrepareGeometryChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_SetGraphicsItem(QPolarChart* self, QGraphicsItem* item) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setGraphicsItem(item);
    } else {
        vqpolarchart->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QPolarChart_QBaseSetGraphicsItem(QPolarChart* self, QGraphicsItem* item) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SetGraphicsItem_IsBase(true);
        vqpolarchart->setGraphicsItem(item);
    } else {
        vqpolarchart->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSetGraphicsItem(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SetGraphicsItem_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QPolarChart_SetOwnedByLayout(QPolarChart* self, bool ownedByLayout) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setOwnedByLayout(ownedByLayout);
    } else {
        vqpolarchart->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QPolarChart_QBaseSetOwnedByLayout(QPolarChart* self, bool ownedByLayout) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SetOwnedByLayout_IsBase(true);
        vqpolarchart->setOwnedByLayout(ownedByLayout);
    } else {
        vqpolarchart->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSetOwnedByLayout(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->setQPolarChart_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQPolarChart::QPolarChart_SetOwnedByLayout_Callback>(slot));
    }
}

void QPolarChart_Delete(QPolarChart* self) {
    delete self;
}
