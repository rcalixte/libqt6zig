#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QChart>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
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
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QPolarChart>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPolarChart_Tr(const char* s) {
    auto _ret = QPolarChart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPolarChart_AddAxis(QPolarChart* self, QAbstractAxis* axis, int polarOrientation) {
    self->addAxis(axis, static_cast<QPolarChart::PolarOrientation>(polarOrientation));
}

libqt_list /* of QAbstractAxis* */ QPolarChart_Axes(const QPolarChart* self) {
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

int QPolarChart_AxisPolarOrientation(QAbstractAxis* axis) {
    return static_cast<int>(QPolarChart::axisPolarOrientation(axis));
}

libqt_string QPolarChart_Tr2(const char* s, const char* c) {
    auto _ret = QPolarChart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPolarChart_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPolarChart::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAbstractAxis* */ QPolarChart_Axes1(const QPolarChart* self, int polarOrientation) {
    QList<QAbstractAxis*> _ret = self->axes(static_cast<QPolarChart::PolarOrientations>(polarOrientation));
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

libqt_list /* of QAbstractAxis* */ QPolarChart_Axes2(const QPolarChart* self, int polarOrientation, QAbstractSeries* series) {
    QList<QAbstractAxis*> _ret = self->axes(static_cast<QPolarChart::PolarOrientations>(polarOrientation), series);
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

// Base class handler implementation
QMetaObject* QPolarChart_SuperMetaObject(const QPolarChart* self) {
    return (QMetaObject*)self->QPolarChart::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMetaObject(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_metaobject_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPolarChart_SuperMetacast(QPolarChart* self, const char* param1) {
    return self->QPolarChart::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMetacast(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_metacast_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPolarChart_SuperMetacall(QPolarChart* self, int param1, int param2, void** param3) {
    return self->QPolarChart::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMetacall(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_metacall_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_SetGeometry(QPolarChart* self, const QRectF* rect) {
    self->setGeometry(*rect);
}

// Base class handler implementation
void QPolarChart_SuperSetGeometry(QPolarChart* self, const QRectF* rect) {
    self->QPolarChart::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSetGeometry(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_setgeometry_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_SetGeometry_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_GetContentsMargins(const QPolarChart* self, double* left, double* top, double* right, double* bottom) {
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Base class handler implementation
void QPolarChart_SuperGetContentsMargins(const QPolarChart* self, double* left, double* top, double* right, double* bottom) {
    self->QPolarChart::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnGetContentsMargins(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_getcontentsmargins_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_GetContentsMargins_Callback>(slot);
}

// Derived class handler implementation
int QPolarChart_Type(const QPolarChart* self) {
    return self->type();
}

// Base class handler implementation
int QPolarChart_SuperType(const QPolarChart* self) {
    return self->QPolarChart::type();
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnType(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_type_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Type_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_Paint(QPolarChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

// Base class handler implementation
void QPolarChart_SuperPaint(QPolarChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QPolarChart::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPaint(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_paint_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Paint_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_PaintWindowFrame(QPolarChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paintWindowFrame(painter, option, widget);
}

// Base class handler implementation
void QPolarChart_SuperPaintWindowFrame(QPolarChart* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QPolarChart::paintWindowFrame(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPaintWindowFrame(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_paintwindowframe_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_PaintWindowFrame_Callback>(slot);
}

// Derived class handler implementation
QRectF* QPolarChart_BoundingRect(const QPolarChart* self) {
    return new QRectF(self->boundingRect());
}

// Base class handler implementation
QRectF* QPolarChart_SuperBoundingRect(const QPolarChart* self) {
    return new QRectF(self->QPolarChart::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnBoundingRect(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_boundingrect_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_BoundingRect_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QPolarChart_Shape(const QPolarChart* self) {
    return new QPainterPath(self->shape());
}

// Base class handler implementation
QPainterPath* QPolarChart_SuperShape(const QPolarChart* self) {
    return new QPainterPath(self->QPolarChart::shape());
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnShape(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_shape_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Shape_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_InitStyleOption(const QPolarChart* self, QStyleOption* option) {
    auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self));
    if (vqpolarchart) {
        vqpolarchart->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperInitStyleOption(const QPolarChart* self, QStyleOption* option) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        vqpolarchart->QPolarChart::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QPolarChart::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnInitStyleOption(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_initstyleoption_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
QSizeF* QPolarChart_SizeHint(const QPolarChart* self, int which, const QSizeF* constraint) {
    return new QSizeF((self->*&VirtualQPolarChart::Base::sizeHint)(static_cast<Qt::SizeHint>(which), *constraint));
}

// Base class handler implementation
QSizeF* QPolarChart_SuperSizeHint(const QPolarChart* self, int which, const QSizeF* constraint) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        return new QSizeF(vqpolarchart->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    qFatal("Error: Protected virtual method QPolarChart::sizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSizeHint(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_sizehint_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_UpdateGeometry(QPolarChart* self) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->updateGeometry();
    } else {
        qFatal("Error: Protected virtual method QPolarChart::updateGeometry called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperUpdateGeometry(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::updateGeometry();
    } else
        qFatal("Error: Protected virtual method QPolarChart::updateGeometry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnUpdateGeometry(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_updategeometry_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_UpdateGeometry_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPolarChart_ItemChange(QPolarChart* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQPolarChart::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QPolarChart_SuperItemChange(QPolarChart* self, int change, const QVariant* value) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        return new QVariant(vqpolarchart->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QPolarChart::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnItemChange(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_itemchange_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_ItemChange_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPolarChart_PropertyChange(QPolarChart* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    return new QVariant((self->*&VirtualQPolarChart::Base::propertyChange)(propertyName_QString, *value));
}

// Base class handler implementation
QVariant* QPolarChart_SuperPropertyChange(QPolarChart* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        return new QVariant(vqpolarchart->propertyChange(propertyName_QString, *value));
    qFatal("Error: Protected virtual method QPolarChart::propertyChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPropertyChange(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_propertychange_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_PropertyChange_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_SceneEvent(QPolarChart* self, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        return vqpolarchart->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPolarChart_SuperSceneEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->QPolarChart::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSceneEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_sceneevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_WindowFrameEvent(QPolarChart* self, QEvent* e) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        return vqpolarchart->windowFrameEvent(e);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::windowFrameEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPolarChart_SuperWindowFrameEvent(QPolarChart* self, QEvent* e) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->QPolarChart::windowFrameEvent(e);
    } else
        qFatal("Error: Protected virtual method QPolarChart::windowFrameEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnWindowFrameEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_windowframeevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_WindowFrameEvent_Callback>(slot);
}

// Derived class handler implementation
int QPolarChart_WindowFrameSectionAt(const QPolarChart* self, const QPointF* pos) {
    auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self));
    if (vqpolarchart) {
        return static_cast<int>(vqpolarchart->windowFrameSectionAt(*pos));
    } else {
        qFatal("Error: Protected virtual method QPolarChart::windowFrameSectionAt called without a directly constructed type");
    }
}

// Base class handler implementation
int QPolarChart_SuperWindowFrameSectionAt(const QPolarChart* self, const QPointF* pos) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return static_cast<int>(vqpolarchart->QPolarChart::windowFrameSectionAt(*pos));
    } else
        qFatal("Error: Protected virtual method QPolarChart::windowFrameSectionAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnWindowFrameSectionAt(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_windowframesectionat_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_WindowFrameSectionAt_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_Event(QPolarChart* self, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        return vqpolarchart->event(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPolarChart_SuperEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->QPolarChart::event(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_event_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Event_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_ChangeEvent(QPolarChart* self, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperChangeEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnChangeEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_changeevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_CloseEvent(QPolarChart* self, QCloseEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperCloseEvent(QPolarChart* self, QCloseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnCloseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_closeevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_FocusInEvent(QPolarChart* self, QFocusEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperFocusInEvent(QPolarChart* self, QFocusEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnFocusInEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_focusinevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_FocusNextPrevChild(QPolarChart* self, bool next) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        return vqpolarchart->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPolarChart_SuperFocusNextPrevChild(QPolarChart* self, bool next) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->QPolarChart::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPolarChart::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnFocusNextPrevChild(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_focusnextprevchild_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_FocusOutEvent(QPolarChart* self, QFocusEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperFocusOutEvent(QPolarChart* self, QFocusEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnFocusOutEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_focusoutevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_HideEvent(QPolarChart* self, QHideEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperHideEvent(QPolarChart* self, QHideEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnHideEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_hideevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_MoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperMoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMoveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_moveevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_PolishEvent(QPolarChart* self) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->polishEvent();
    } else {
        qFatal("Error: Protected virtual method QPolarChart::polishEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperPolishEvent(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::polishEvent();
    } else
        qFatal("Error: Protected virtual method QPolarChart::polishEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnPolishEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_polishevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_PolishEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_ResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnResizeEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_resizeevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_ShowEvent(QPolarChart* self, QShowEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperShowEvent(QPolarChart* self, QShowEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnShowEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_showevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_HoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperHoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnHoverMoveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_hovermoveevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_HoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperHoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnHoverLeaveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_hoverleaveevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_GrabMouseEvent(QPolarChart* self, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->grabMouseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::grabMouseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperGrabMouseEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::grabMouseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::grabMouseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnGrabMouseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_grabmouseevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_GrabMouseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_UngrabMouseEvent(QPolarChart* self, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->ungrabMouseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::ungrabMouseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperUngrabMouseEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::ungrabMouseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::ungrabMouseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnUngrabMouseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_ungrabmouseevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_UngrabMouseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_GrabKeyboardEvent(QPolarChart* self, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->grabKeyboardEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::grabKeyboardEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperGrabKeyboardEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::grabKeyboardEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::grabKeyboardEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnGrabKeyboardEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_grabkeyboardevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_GrabKeyboardEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_UngrabKeyboardEvent(QPolarChart* self, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->ungrabKeyboardEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::ungrabKeyboardEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperUngrabKeyboardEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::ungrabKeyboardEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::ungrabKeyboardEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnUngrabKeyboardEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_ungrabkeyboardevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_UngrabKeyboardEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_EventFilter(QPolarChart* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPolarChart_SuperEventFilter(QPolarChart* self, QObject* watched, QEvent* event) {
    return self->QPolarChart::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnEventFilter(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_eventfilter_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_TimerEvent(QPolarChart* self, QTimerEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperTimerEvent(QPolarChart* self, QTimerEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnTimerEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_timerevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_ChildEvent(QPolarChart* self, QChildEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperChildEvent(QPolarChart* self, QChildEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnChildEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_childevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_CustomEvent(QPolarChart* self, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperCustomEvent(QPolarChart* self, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnCustomEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_customevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_ConnectNotify(QPolarChart* self, const QMetaMethod* signal) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperConnectNotify(QPolarChart* self, const QMetaMethod* signal) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPolarChart::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnConnectNotify(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_connectnotify_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_DisconnectNotify(QPolarChart* self, const QMetaMethod* signal) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperDisconnectNotify(QPolarChart* self, const QMetaMethod* signal) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPolarChart::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDisconnectNotify(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_disconnectnotify_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_Advance(QPolarChart* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QPolarChart_SuperAdvance(QPolarChart* self, int phase) {
    self->QPolarChart::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnAdvance(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_advance_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_Contains(const QPolarChart* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QPolarChart_SuperContains(const QPolarChart* self, const QPointF* point) {
    return self->QPolarChart::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnContains(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_contains_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_CollidesWithItem(const QPolarChart* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QPolarChart_SuperCollidesWithItem(const QPolarChart* self, const QGraphicsItem* other, int mode) {
    return self->QPolarChart::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnCollidesWithItem(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_collideswithitem_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_CollidesWithPath(const QPolarChart* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QPolarChart_SuperCollidesWithPath(const QPolarChart* self, const QPainterPath* path, int mode) {
    return self->QPolarChart::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnCollidesWithPath(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_collideswithpath_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_IsObscuredBy(const QPolarChart* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

// Base class handler implementation
bool QPolarChart_SuperIsObscuredBy(const QPolarChart* self, const QGraphicsItem* item) {
    return self->QPolarChart::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnIsObscuredBy(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_isobscuredby_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_IsObscuredBy_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QPolarChart_OpaqueArea(const QPolarChart* self) {
    return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
QPainterPath* QPolarChart_SuperOpaqueArea(const QPolarChart* self) {
    return new QPainterPath(self->QPolarChart::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnOpaqueArea(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_opaquearea_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_OpaqueArea_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_SceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        return vqpolarchart->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPolarChart_SuperSceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        return vqpolarchart->QPolarChart::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSceneEventFilter(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_sceneeventfilter_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_ContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnContextMenuEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_contextmenuevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_DragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperDragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDragEnterEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_dragenterevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_DragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperDragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDragLeaveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_dragleaveevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_DragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperDragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDragMoveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_dragmoveevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_DropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperDropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnDropEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_dropevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_HoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperHoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnHoverEnterEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_hoverenterevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_KeyPressEvent(QPolarChart* self, QKeyEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperKeyPressEvent(QPolarChart* self, QKeyEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnKeyPressEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_keypressevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_KeyReleaseEvent(QPolarChart* self, QKeyEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperKeyReleaseEvent(QPolarChart* self, QKeyEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnKeyReleaseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_keyreleaseevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_MousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperMousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMousePressEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_mousepressevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_MouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperMouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMouseMoveEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_mousemoveevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_MouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperMouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMouseReleaseEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_mousereleaseevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_MouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperMouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnMouseDoubleClickEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_WheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperWheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnWheelEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_wheelevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_InputMethodEvent(QPolarChart* self, QInputMethodEvent* event) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperInputMethodEvent(QPolarChart* self, QInputMethodEvent* event) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QPolarChart::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnInputMethodEvent(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_inputmethodevent_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPolarChart_InputMethodQuery(const QPolarChart* self, int query) {
    return new QVariant((self->*&VirtualQPolarChart::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QPolarChart_SuperInputMethodQuery(const QPolarChart* self, int query) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        return new QVariant(vqpolarchart->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QPolarChart::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnInputMethodQuery(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_inputmethodquery_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_SupportsExtension(const QPolarChart* self, int extension) {
    auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self));
    if (vqpolarchart) {
        return vqpolarchart->supportsExtension(static_cast<VirtualQPolarChart::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QPolarChart::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPolarChart_SuperSupportsExtension(const QPolarChart* self, int extension) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->QPolarChart::supportsExtension(static_cast<VirtualQPolarChart::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QPolarChart::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSupportsExtension(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_supportsextension_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QPolarChart_SetExtension(QPolarChart* self, int extension, const QVariant* variant) {
    auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self);
    if (vqpolarchart) {
        vqpolarchart->setExtension(static_cast<VirtualQPolarChart::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QPolarChart::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QPolarChart_SuperSetExtension(QPolarChart* self, int extension, const QVariant* variant) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->QPolarChart::setExtension(static_cast<VirtualQPolarChart::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QPolarChart::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnSetExtension(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self))
        vqpolarchart->qpolarchart_setextension_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPolarChart_Extension(const QPolarChart* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQPolarChart::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QPolarChart_SuperExtension(const QPolarChart* self, const QVariant* variant) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        return new QVariant(vqpolarchart->extension(*variant));
    qFatal("Error: Protected virtual method QPolarChart::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnExtension(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_extension_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_Extension_Callback>(slot);
}

// Derived class handler implementation
bool QPolarChart_IsEmpty(const QPolarChart* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QPolarChart_SuperIsEmpty(const QPolarChart* self) {
    return self->QPolarChart::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QPolarChart_OnIsEmpty(QPolarChart* self, intptr_t slot) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self)))
        vqpolarchart->qpolarchart_isempty_callback = reinterpret_cast<VirtualQPolarChart::QPolarChart_IsEmpty_Callback>(slot);
}

// Derived class protected handler implementation
void QPolarChart_UpdateMicroFocus(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->VirtualQPolarChart::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPolarChart::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPolarChart_Sender(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->VirtualQPolarChart::sender();
    } else
        qFatal("Error: Protected method QPolarChart::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPolarChart_SenderSignalIndex(const QPolarChart* self) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->VirtualQPolarChart::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPolarChart::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPolarChart_Receivers(const QPolarChart* self, const char* signal) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->VirtualQPolarChart::receivers(signal);
    } else
        qFatal("Error: Protected method QPolarChart::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPolarChart_IsSignalConnected(const QPolarChart* self, const QMetaMethod* signal) {
    if (auto* vqpolarchart = const_cast<VirtualQPolarChart*>(dynamic_cast<const VirtualQPolarChart*>(self))) {
        return vqpolarchart->VirtualQPolarChart::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPolarChart::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
void QPolarChart_AddToIndex(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->VirtualQPolarChart::addToIndex();
    } else
        qFatal("Error: Protected method QPolarChart::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QPolarChart_RemoveFromIndex(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->VirtualQPolarChart::removeFromIndex();
    } else
        qFatal("Error: Protected method QPolarChart::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QPolarChart_PrepareGeometryChange(QPolarChart* self) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->VirtualQPolarChart::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QPolarChart::prepareGeometryChange called without a directly constructed type");
}

// Derived class protected handler implementation
void QPolarChart_SetGraphicsItem(QPolarChart* self, QGraphicsItem* item) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->VirtualQPolarChart::setGraphicsItem(item);
    } else
        qFatal("Error: Protected method QPolarChart::setGraphicsItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QPolarChart_SetOwnedByLayout(QPolarChart* self, bool ownedByLayout) {
    if (auto* vqpolarchart = dynamic_cast<VirtualQPolarChart*>(self)) {
        vqpolarchart->VirtualQPolarChart::setOwnedByLayout(ownedByLayout);
    } else
        qFatal("Error: Protected method QPolarChart::setOwnedByLayout called without a directly constructed type");
}

void QPolarChart_Delete(QPolarChart* self) {
    delete self;
}
