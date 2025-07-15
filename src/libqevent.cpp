#include <QAction>
#include <QActionEvent>
#include <QApplicationStateChangeEvent>
#include <QChildWindowEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QEventPoint>
#include <QExposeEvent>
#include <QFile>
#include <QFileOpenEvent>
#include <QFocusEvent>
#include <QHelpEvent>
#include <QHideEvent>
#include <QHoverEvent>
#include <QIconDragEvent>
#include <QInputDevice>
#include <QInputEvent>
#include <QInputMethodEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute
#include <QInputMethodQueryEvent>
#include <QKeyCombination>
#include <QKeyEvent>
#include <QKeySequence>
#include <QList>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QNativeGestureEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QPointF>
#include <QPointerEvent>
#include <QPointingDevice>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QScreenOrientationChangeEvent>
#include <QScrollEvent>
#include <QScrollPrepareEvent>
#include <QShortcut>
#include <QShortcutEvent>
#include <QShowEvent>
#include <QSinglePointEvent>
#include <QSize>
#include <QSizeF>
#include <QStatusTipEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QToolBarChangeEvent>
#include <QTouchEvent>
#include <QUrl>
#include <QVariant>
#include <QWhatsThisClickedEvent>
#include <QWheelEvent>
#include <QWindow>
#include <QWindowStateChangeEvent>
#include <qevent.h>
#include "libqevent.h"
#include "libqevent.hxx"

QInputEvent* QInputEvent_new(int typeVal, const QInputDevice* m_dev) {
    return new VirtualQInputEvent(static_cast<QEvent::Type>(typeVal), m_dev);
}

QInputEvent* QInputEvent_new2(int typeVal, const QInputDevice* m_dev, int modifiers) {
    return new VirtualQInputEvent(static_cast<QEvent::Type>(typeVal), m_dev, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QInputDevice* QInputEvent_Device(const QInputEvent* self) {
    return (QInputDevice*)self->device();
}

int QInputEvent_DeviceType(const QInputEvent* self) {
    return static_cast<int>(self->deviceType());
}

int QInputEvent_Modifiers(const QInputEvent* self) {
    return static_cast<int>(self->modifiers());
}

void QInputEvent_SetModifiers(QInputEvent* self, int modifiers) {
    self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

unsigned long long QInputEvent_Timestamp(const QInputEvent* self) {
    return static_cast<unsigned long long>(self->timestamp());
}

// Derived class handler implementation
QInputEvent* QInputEvent_Clone(const QInputEvent* self) {
    auto* vqinputevent = const_cast<VirtualQInputEvent*>(dynamic_cast<const VirtualQInputEvent*>(self));
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        return vqinputevent->clone();
    } else {
        return self->QInputEvent::clone();
    }
}

// Base class handler implementation
QInputEvent* QInputEvent_QBaseClone(const QInputEvent* self) {
    auto* vqinputevent = const_cast<VirtualQInputEvent*>(dynamic_cast<const VirtualQInputEvent*>(self));
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        vqinputevent->setQInputEvent_Clone_IsBase(true);
        return vqinputevent->clone();
    } else {
        return self->QInputEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputEvent_OnClone(const QInputEvent* self, intptr_t slot) {
    auto* vqinputevent = const_cast<VirtualQInputEvent*>(dynamic_cast<const VirtualQInputEvent*>(self));
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        vqinputevent->setQInputEvent_Clone_Callback(reinterpret_cast<VirtualQInputEvent::QInputEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long long timestamp) {
    auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self);
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        vqinputevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QInputEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QInputEvent_QBaseSetTimestamp(QInputEvent* self, unsigned long long timestamp) {
    auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self);
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        vqinputevent->setQInputEvent_SetTimestamp_IsBase(true);
        vqinputevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QInputEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QInputEvent_OnSetTimestamp(QInputEvent* self, intptr_t slot) {
    auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self);
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        vqinputevent->setQInputEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQInputEvent::QInputEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputEvent_SetAccepted(QInputEvent* self, bool accepted) {
    auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self);
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        vqinputevent->setAccepted(accepted);
    } else {
        self->QInputEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QInputEvent_QBaseSetAccepted(QInputEvent* self, bool accepted) {
    auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self);
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        vqinputevent->setQInputEvent_SetAccepted_IsBase(true);
        vqinputevent->setAccepted(accepted);
    } else {
        self->QInputEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputEvent_OnSetAccepted(QInputEvent* self, intptr_t slot) {
    auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self);
    if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
        vqinputevent->setQInputEvent_SetAccepted_Callback(reinterpret_cast<VirtualQInputEvent::QInputEvent_SetAccepted_Callback>(slot));
    }
}

void QInputEvent_Delete(QInputEvent* self) {
    delete self;
}

QPointerEvent* QPointerEvent_new(int typeVal, const QPointingDevice* dev) {
    return new VirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev);
}

QPointerEvent* QPointerEvent_new2(int typeVal, const QPointingDevice* dev, int modifiers) {
    return new VirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPointerEvent* QPointerEvent_new3(int typeVal, const QPointingDevice* dev, int modifiers, const libqt_list /* of QEventPoint* */ points) {
    QList<QEventPoint> points_QList;
    points_QList.reserve(points.len);
    QEventPoint** points_arr = static_cast<QEventPoint**>(points.data);
    for (size_t i = 0; i < points.len; ++i) {
        points_QList.push_back(*(points_arr[i]));
    }
    return new VirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev, static_cast<Qt::KeyboardModifiers>(modifiers), points_QList);
}

QPointingDevice* QPointerEvent_PointingDevice(const QPointerEvent* self) {
    return (QPointingDevice*)self->pointingDevice();
}

int QPointerEvent_PointerType(const QPointerEvent* self) {
    return static_cast<int>(self->pointerType());
}

ptrdiff_t QPointerEvent_PointCount(const QPointerEvent* self) {
    return static_cast<ptrdiff_t>(self->pointCount());
}

QEventPoint* QPointerEvent_Point(QPointerEvent* self, ptrdiff_t i) {
    QEventPoint& _ret = self->point((qsizetype)(i));
    // Cast returned reference into pointer
    return &_ret;
}

libqt_list /* of QEventPoint* */ QPointerEvent_Points(const QPointerEvent* self) {
    const QList<QEventPoint>& _ret = self->points();
    // Convert const QList<> from C++ memory to manually-managed C memory
    QEventPoint** _arr = static_cast<QEventPoint**>(malloc(sizeof(QEventPoint*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QEventPoint(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QEventPoint* QPointerEvent_PointById(QPointerEvent* self, int id) {
    return self->pointById(static_cast<int>(id));
}

bool QPointerEvent_AllPointsGrabbed(const QPointerEvent* self) {
    return self->allPointsGrabbed();
}

bool QPointerEvent_AllPointsAccepted(const QPointerEvent* self) {
    return self->allPointsAccepted();
}

QObject* QPointerEvent_ExclusiveGrabber(const QPointerEvent* self, const QEventPoint* point) {
    return self->exclusiveGrabber(*point);
}

void QPointerEvent_SetExclusiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* exclusiveGrabber) {
    self->setExclusiveGrabber(*point, exclusiveGrabber);
}

void QPointerEvent_ClearPassiveGrabbers(QPointerEvent* self, const QEventPoint* point) {
    self->clearPassiveGrabbers(*point);
}

bool QPointerEvent_AddPassiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* grabber) {
    return self->addPassiveGrabber(*point, grabber);
}

bool QPointerEvent_RemovePassiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* grabber) {
    return self->removePassiveGrabber(*point, grabber);
}

// Derived class handler implementation
QPointerEvent* QPointerEvent_Clone(const QPointerEvent* self) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        return vqpointerevent->clone();
    } else {
        return self->QPointerEvent::clone();
    }
}

// Base class handler implementation
QPointerEvent* QPointerEvent_QBaseClone(const QPointerEvent* self) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_Clone_IsBase(true);
        return vqpointerevent->clone();
    } else {
        return self->QPointerEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnClone(const QPointerEvent* self, intptr_t slot) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_Clone_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointerEvent_SetTimestamp(QPointerEvent* self, unsigned long long timestamp) {
    auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QPointerEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QPointerEvent_QBaseSetTimestamp(QPointerEvent* self, unsigned long long timestamp) {
    auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_SetTimestamp_IsBase(true);
        vqpointerevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QPointerEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnSetTimestamp(QPointerEvent* self, intptr_t slot) {
    auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPointerEvent_IsBeginEvent(const QPointerEvent* self) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        return vqpointerevent->isBeginEvent();
    } else {
        return self->QPointerEvent::isBeginEvent();
    }
}

// Base class handler implementation
bool QPointerEvent_QBaseIsBeginEvent(const QPointerEvent* self) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_IsBeginEvent_IsBase(true);
        return vqpointerevent->isBeginEvent();
    } else {
        return self->QPointerEvent::isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsBeginEvent(const QPointerEvent* self, intptr_t slot) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPointerEvent_IsUpdateEvent(const QPointerEvent* self) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        return vqpointerevent->isUpdateEvent();
    } else {
        return self->QPointerEvent::isUpdateEvent();
    }
}

// Base class handler implementation
bool QPointerEvent_QBaseIsUpdateEvent(const QPointerEvent* self) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_IsUpdateEvent_IsBase(true);
        return vqpointerevent->isUpdateEvent();
    } else {
        return self->QPointerEvent::isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsUpdateEvent(const QPointerEvent* self, intptr_t slot) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPointerEvent_IsEndEvent(const QPointerEvent* self) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        return vqpointerevent->isEndEvent();
    } else {
        return self->QPointerEvent::isEndEvent();
    }
}

// Base class handler implementation
bool QPointerEvent_QBaseIsEndEvent(const QPointerEvent* self) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_IsEndEvent_IsBase(true);
        return vqpointerevent->isEndEvent();
    } else {
        return self->QPointerEvent::isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsEndEvent(const QPointerEvent* self, intptr_t slot) {
    auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self));
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointerEvent_SetAccepted(QPointerEvent* self, bool accepted) {
    auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setAccepted(accepted);
    } else {
        self->QPointerEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QPointerEvent_QBaseSetAccepted(QPointerEvent* self, bool accepted) {
    auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_SetAccepted_IsBase(true);
        vqpointerevent->setAccepted(accepted);
    } else {
        self->QPointerEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnSetAccepted(QPointerEvent* self, intptr_t slot) {
    auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
    if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
        vqpointerevent->setQPointerEvent_SetAccepted_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_SetAccepted_Callback>(slot));
    }
}

void QPointerEvent_Delete(QPointerEvent* self) {
    delete self;
}

QSinglePointEvent* QSinglePointEvent_Clone(const QSinglePointEvent* self) {
    return self->clone();
}

int QSinglePointEvent_Button(const QSinglePointEvent* self) {
    return static_cast<int>(self->button());
}

int QSinglePointEvent_Buttons(const QSinglePointEvent* self) {
    return static_cast<int>(self->buttons());
}

QPointF* QSinglePointEvent_Position(const QSinglePointEvent* self) {
    return new QPointF(self->position());
}

QPointF* QSinglePointEvent_ScenePosition(const QSinglePointEvent* self) {
    return new QPointF(self->scenePosition());
}

QPointF* QSinglePointEvent_GlobalPosition(const QSinglePointEvent* self) {
    return new QPointF(self->globalPosition());
}

bool QSinglePointEvent_IsBeginEvent(const QSinglePointEvent* self) {
    return self->isBeginEvent();
}

bool QSinglePointEvent_IsUpdateEvent(const QSinglePointEvent* self) {
    return self->isUpdateEvent();
}

bool QSinglePointEvent_IsEndEvent(const QSinglePointEvent* self) {
    return self->isEndEvent();
}

QObject* QSinglePointEvent_ExclusivePointGrabber(const QSinglePointEvent* self) {
    return self->exclusivePointGrabber();
}

void QSinglePointEvent_SetExclusivePointGrabber(QSinglePointEvent* self, QObject* exclusiveGrabber) {
    self->setExclusivePointGrabber(exclusiveGrabber);
}

void QSinglePointEvent_Delete(QSinglePointEvent* self) {
    delete self;
}

QEnterEvent* QEnterEvent_new(const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos) {
    return new VirtualQEnterEvent(*localPos, *scenePos, *globalPos);
}

QEnterEvent* QEnterEvent_new2(const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, const QPointingDevice* device) {
    return new VirtualQEnterEvent(*localPos, *scenePos, *globalPos, device);
}

QPoint* QEnterEvent_Pos(const QEnterEvent* self) {
    return new QPoint(self->pos());
}

QPoint* QEnterEvent_GlobalPos(const QEnterEvent* self) {
    return new QPoint(self->globalPos());
}

int QEnterEvent_X(const QEnterEvent* self) {
    return self->x();
}

int QEnterEvent_Y(const QEnterEvent* self) {
    return self->y();
}

int QEnterEvent_GlobalX(const QEnterEvent* self) {
    return self->globalX();
}

int QEnterEvent_GlobalY(const QEnterEvent* self) {
    return self->globalY();
}

QPointF* QEnterEvent_LocalPos(const QEnterEvent* self) {
    return new QPointF(self->localPos());
}

QPointF* QEnterEvent_WindowPos(const QEnterEvent* self) {
    return new QPointF(self->windowPos());
}

QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self) {
    return new QPointF(self->screenPos());
}

// Derived class handler implementation
QEnterEvent* QEnterEvent_Clone(const QEnterEvent* self) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        return vqenterevent->clone();
    } else {
        return self->QEnterEvent::clone();
    }
}

// Base class handler implementation
QEnterEvent* QEnterEvent_QBaseClone(const QEnterEvent* self) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_Clone_IsBase(true);
        return vqenterevent->clone();
    } else {
        return self->QEnterEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnClone(const QEnterEvent* self, intptr_t slot) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_Clone_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QEnterEvent_IsBeginEvent(const QEnterEvent* self) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        return vqenterevent->isBeginEvent();
    } else {
        return self->QEnterEvent::isBeginEvent();
    }
}

// Base class handler implementation
bool QEnterEvent_QBaseIsBeginEvent(const QEnterEvent* self) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_IsBeginEvent_IsBase(true);
        return vqenterevent->isBeginEvent();
    } else {
        return self->QEnterEvent::isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnIsBeginEvent(const QEnterEvent* self, intptr_t slot) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QEnterEvent_IsUpdateEvent(const QEnterEvent* self) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        return vqenterevent->isUpdateEvent();
    } else {
        return self->QEnterEvent::isUpdateEvent();
    }
}

// Base class handler implementation
bool QEnterEvent_QBaseIsUpdateEvent(const QEnterEvent* self) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_IsUpdateEvent_IsBase(true);
        return vqenterevent->isUpdateEvent();
    } else {
        return self->QEnterEvent::isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnIsUpdateEvent(const QEnterEvent* self, intptr_t slot) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QEnterEvent_IsEndEvent(const QEnterEvent* self) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        return vqenterevent->isEndEvent();
    } else {
        return self->QEnterEvent::isEndEvent();
    }
}

// Base class handler implementation
bool QEnterEvent_QBaseIsEndEvent(const QEnterEvent* self) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_IsEndEvent_IsBase(true);
        return vqenterevent->isEndEvent();
    } else {
        return self->QEnterEvent::isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnIsEndEvent(const QEnterEvent* self, intptr_t slot) {
    auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self));
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QEnterEvent_SetTimestamp(QEnterEvent* self, unsigned long long timestamp) {
    auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self);
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QEnterEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QEnterEvent_QBaseSetTimestamp(QEnterEvent* self, unsigned long long timestamp) {
    auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self);
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_SetTimestamp_IsBase(true);
        vqenterevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QEnterEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnSetTimestamp(QEnterEvent* self, intptr_t slot) {
    auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self);
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QEnterEvent_SetAccepted(QEnterEvent* self, bool accepted) {
    auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self);
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setAccepted(accepted);
    } else {
        self->QEnterEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QEnterEvent_QBaseSetAccepted(QEnterEvent* self, bool accepted) {
    auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self);
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_SetAccepted_IsBase(true);
        vqenterevent->setAccepted(accepted);
    } else {
        self->QEnterEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnSetAccepted(QEnterEvent* self, intptr_t slot) {
    auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self);
    if (vqenterevent && vqenterevent->isVirtualQEnterEvent) {
        vqenterevent->setQEnterEvent_SetAccepted_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_SetAccepted_Callback>(slot));
    }
}

void QEnterEvent_Delete(QEnterEvent* self) {
    delete self;
}

QMouseEvent* QMouseEvent_new(int typeVal, const QPointF* localPos, int button, int buttons, int modifiers) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new2(int typeVal, const QPointF* localPos, const QPointF* globalPos, int button, int buttons, int modifiers) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new3(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new4(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, int source) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source));
}

QMouseEvent* QMouseEvent_new5(int typeVal, const QPointF* localPos, int button, int buttons, int modifiers, const QPointingDevice* device) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new6(int typeVal, const QPointF* localPos, const QPointF* globalPos, int button, int buttons, int modifiers, const QPointingDevice* device) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new7(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, const QPointingDevice* device) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new8(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, int source, const QPointingDevice* device) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source), device);
}

QPoint* QMouseEvent_Pos(const QMouseEvent* self) {
    return new QPoint(self->pos());
}

QPoint* QMouseEvent_GlobalPos(const QMouseEvent* self) {
    return new QPoint(self->globalPos());
}

int QMouseEvent_X(const QMouseEvent* self) {
    return self->x();
}

int QMouseEvent_Y(const QMouseEvent* self) {
    return self->y();
}

int QMouseEvent_GlobalX(const QMouseEvent* self) {
    return self->globalX();
}

int QMouseEvent_GlobalY(const QMouseEvent* self) {
    return self->globalY();
}

QPointF* QMouseEvent_LocalPos(const QMouseEvent* self) {
    return new QPointF(self->localPos());
}

QPointF* QMouseEvent_WindowPos(const QMouseEvent* self) {
    return new QPointF(self->windowPos());
}

QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self) {
    return new QPointF(self->screenPos());
}

int QMouseEvent_Source(const QMouseEvent* self) {
    return static_cast<int>(self->source());
}

int QMouseEvent_Flags(const QMouseEvent* self) {
    return static_cast<int>(self->flags());
}

// Derived class handler implementation
QMouseEvent* QMouseEvent_Clone(const QMouseEvent* self) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        return vqmouseevent->clone();
    } else {
        return self->QMouseEvent::clone();
    }
}

// Base class handler implementation
QMouseEvent* QMouseEvent_QBaseClone(const QMouseEvent* self) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_Clone_IsBase(true);
        return vqmouseevent->clone();
    } else {
        return self->QMouseEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnClone(const QMouseEvent* self, intptr_t slot) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_Clone_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEvent_IsBeginEvent(const QMouseEvent* self) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        return vqmouseevent->isBeginEvent();
    } else {
        return self->QMouseEvent::isBeginEvent();
    }
}

// Base class handler implementation
bool QMouseEvent_QBaseIsBeginEvent(const QMouseEvent* self) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_IsBeginEvent_IsBase(true);
        return vqmouseevent->isBeginEvent();
    } else {
        return self->QMouseEvent::isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnIsBeginEvent(const QMouseEvent* self, intptr_t slot) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEvent_IsUpdateEvent(const QMouseEvent* self) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        return vqmouseevent->isUpdateEvent();
    } else {
        return self->QMouseEvent::isUpdateEvent();
    }
}

// Base class handler implementation
bool QMouseEvent_QBaseIsUpdateEvent(const QMouseEvent* self) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_IsUpdateEvent_IsBase(true);
        return vqmouseevent->isUpdateEvent();
    } else {
        return self->QMouseEvent::isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnIsUpdateEvent(const QMouseEvent* self, intptr_t slot) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEvent_IsEndEvent(const QMouseEvent* self) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        return vqmouseevent->isEndEvent();
    } else {
        return self->QMouseEvent::isEndEvent();
    }
}

// Base class handler implementation
bool QMouseEvent_QBaseIsEndEvent(const QMouseEvent* self) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_IsEndEvent_IsBase(true);
        return vqmouseevent->isEndEvent();
    } else {
        return self->QMouseEvent::isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnIsEndEvent(const QMouseEvent* self, intptr_t slot) {
    auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self));
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEvent_SetTimestamp(QMouseEvent* self, unsigned long long timestamp) {
    auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self);
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QMouseEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QMouseEvent_QBaseSetTimestamp(QMouseEvent* self, unsigned long long timestamp) {
    auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self);
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_SetTimestamp_IsBase(true);
        vqmouseevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QMouseEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnSetTimestamp(QMouseEvent* self, intptr_t slot) {
    auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self);
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEvent_SetAccepted(QMouseEvent* self, bool accepted) {
    auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self);
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setAccepted(accepted);
    } else {
        self->QMouseEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QMouseEvent_QBaseSetAccepted(QMouseEvent* self, bool accepted) {
    auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self);
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_SetAccepted_IsBase(true);
        vqmouseevent->setAccepted(accepted);
    } else {
        self->QMouseEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnSetAccepted(QMouseEvent* self, intptr_t slot) {
    auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self);
    if (vqmouseevent && vqmouseevent->isVirtualQMouseEvent) {
        vqmouseevent->setQMouseEvent_SetAccepted_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_SetAccepted_Callback>(slot));
    }
}

void QMouseEvent_Delete(QMouseEvent* self) {
    delete self;
}

QHoverEvent* QHoverEvent_new(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos);
}

QHoverEvent* QHoverEvent_new2(int typeVal, const QPointF* pos, const QPointF* oldPos) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos);
}

QHoverEvent* QHoverEvent_new3(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos, int modifiers) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QHoverEvent* QHoverEvent_new4(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos, int modifiers, const QPointingDevice* device) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QHoverEvent* QHoverEvent_new5(int typeVal, const QPointF* pos, const QPointF* oldPos, int modifiers) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QHoverEvent* QHoverEvent_new6(int typeVal, const QPointF* pos, const QPointF* oldPos, int modifiers, const QPointingDevice* device) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QPoint* QHoverEvent_Pos(const QHoverEvent* self) {
    return new QPoint(self->pos());
}

QPointF* QHoverEvent_PosF(const QHoverEvent* self) {
    return new QPointF(self->posF());
}

QPoint* QHoverEvent_OldPos(const QHoverEvent* self) {
    return new QPoint(self->oldPos());
}

QPointF* QHoverEvent_OldPosF(const QHoverEvent* self) {
    return new QPointF(self->oldPosF());
}

// Derived class handler implementation
QHoverEvent* QHoverEvent_Clone(const QHoverEvent* self) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        return vqhoverevent->clone();
    } else {
        return self->QHoverEvent::clone();
    }
}

// Base class handler implementation
QHoverEvent* QHoverEvent_QBaseClone(const QHoverEvent* self) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_Clone_IsBase(true);
        return vqhoverevent->clone();
    } else {
        return self->QHoverEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnClone(const QHoverEvent* self, intptr_t slot) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_Clone_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHoverEvent_IsUpdateEvent(const QHoverEvent* self) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        return vqhoverevent->isUpdateEvent();
    } else {
        return self->QHoverEvent::isUpdateEvent();
    }
}

// Base class handler implementation
bool QHoverEvent_QBaseIsUpdateEvent(const QHoverEvent* self) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_IsUpdateEvent_IsBase(true);
        return vqhoverevent->isUpdateEvent();
    } else {
        return self->QHoverEvent::isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnIsUpdateEvent(const QHoverEvent* self, intptr_t slot) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHoverEvent_IsBeginEvent(const QHoverEvent* self) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        return vqhoverevent->isBeginEvent();
    } else {
        return self->QHoverEvent::isBeginEvent();
    }
}

// Base class handler implementation
bool QHoverEvent_QBaseIsBeginEvent(const QHoverEvent* self) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_IsBeginEvent_IsBase(true);
        return vqhoverevent->isBeginEvent();
    } else {
        return self->QHoverEvent::isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnIsBeginEvent(const QHoverEvent* self, intptr_t slot) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHoverEvent_IsEndEvent(const QHoverEvent* self) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        return vqhoverevent->isEndEvent();
    } else {
        return self->QHoverEvent::isEndEvent();
    }
}

// Base class handler implementation
bool QHoverEvent_QBaseIsEndEvent(const QHoverEvent* self) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_IsEndEvent_IsBase(true);
        return vqhoverevent->isEndEvent();
    } else {
        return self->QHoverEvent::isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnIsEndEvent(const QHoverEvent* self, intptr_t slot) {
    auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self));
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHoverEvent_SetTimestamp(QHoverEvent* self, unsigned long long timestamp) {
    auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self);
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QHoverEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QHoverEvent_QBaseSetTimestamp(QHoverEvent* self, unsigned long long timestamp) {
    auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self);
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_SetTimestamp_IsBase(true);
        vqhoverevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QHoverEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnSetTimestamp(QHoverEvent* self, intptr_t slot) {
    auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self);
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QHoverEvent_SetAccepted(QHoverEvent* self, bool accepted) {
    auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self);
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setAccepted(accepted);
    } else {
        self->QHoverEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QHoverEvent_QBaseSetAccepted(QHoverEvent* self, bool accepted) {
    auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self);
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_SetAccepted_IsBase(true);
        vqhoverevent->setAccepted(accepted);
    } else {
        self->QHoverEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnSetAccepted(QHoverEvent* self, intptr_t slot) {
    auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self);
    if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
        vqhoverevent->setQHoverEvent_SetAccepted_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_SetAccepted_Callback>(slot));
    }
}

void QHoverEvent_Delete(QHoverEvent* self) {
    delete self;
}

QWheelEvent* QWheelEvent_new(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted) {
    return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
}

QWheelEvent* QWheelEvent_new2(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source) {
    return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
}

QWheelEvent* QWheelEvent_new3(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, const QPointingDevice* device) {
    return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source), device);
}

QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self) {
    return new QPoint(self->pixelDelta());
}

QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self) {
    return new QPoint(self->angleDelta());
}

int QWheelEvent_Phase(const QWheelEvent* self) {
    return static_cast<int>(self->phase());
}

bool QWheelEvent_Inverted(const QWheelEvent* self) {
    return self->inverted();
}

bool QWheelEvent_IsInverted(const QWheelEvent* self) {
    return self->isInverted();
}

bool QWheelEvent_HasPixelDelta(const QWheelEvent* self) {
    return self->hasPixelDelta();
}

int QWheelEvent_Source(const QWheelEvent* self) {
    return static_cast<int>(self->source());
}

// Derived class handler implementation
QWheelEvent* QWheelEvent_Clone(const QWheelEvent* self) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        return vqwheelevent->clone();
    } else {
        return self->QWheelEvent::clone();
    }
}

// Base class handler implementation
QWheelEvent* QWheelEvent_QBaseClone(const QWheelEvent* self) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_Clone_IsBase(true);
        return vqwheelevent->clone();
    } else {
        return self->QWheelEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnClone(const QWheelEvent* self, intptr_t slot) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_Clone_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWheelEvent_IsBeginEvent(const QWheelEvent* self) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        return vqwheelevent->isBeginEvent();
    } else {
        return self->QWheelEvent::isBeginEvent();
    }
}

// Base class handler implementation
bool QWheelEvent_QBaseIsBeginEvent(const QWheelEvent* self) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_IsBeginEvent_IsBase(true);
        return vqwheelevent->isBeginEvent();
    } else {
        return self->QWheelEvent::isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsBeginEvent(const QWheelEvent* self, intptr_t slot) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWheelEvent_IsUpdateEvent(const QWheelEvent* self) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        return vqwheelevent->isUpdateEvent();
    } else {
        return self->QWheelEvent::isUpdateEvent();
    }
}

// Base class handler implementation
bool QWheelEvent_QBaseIsUpdateEvent(const QWheelEvent* self) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_IsUpdateEvent_IsBase(true);
        return vqwheelevent->isUpdateEvent();
    } else {
        return self->QWheelEvent::isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsUpdateEvent(const QWheelEvent* self, intptr_t slot) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWheelEvent_IsEndEvent(const QWheelEvent* self) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        return vqwheelevent->isEndEvent();
    } else {
        return self->QWheelEvent::isEndEvent();
    }
}

// Base class handler implementation
bool QWheelEvent_QBaseIsEndEvent(const QWheelEvent* self) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_IsEndEvent_IsBase(true);
        return vqwheelevent->isEndEvent();
    } else {
        return self->QWheelEvent::isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsEndEvent(const QWheelEvent* self, intptr_t slot) {
    auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self));
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWheelEvent_SetTimestamp(QWheelEvent* self, unsigned long long timestamp) {
    auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self);
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QWheelEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QWheelEvent_QBaseSetTimestamp(QWheelEvent* self, unsigned long long timestamp) {
    auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self);
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_SetTimestamp_IsBase(true);
        vqwheelevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QWheelEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnSetTimestamp(QWheelEvent* self, intptr_t slot) {
    auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self);
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QWheelEvent_SetAccepted(QWheelEvent* self, bool accepted) {
    auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self);
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setAccepted(accepted);
    } else {
        self->QWheelEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QWheelEvent_QBaseSetAccepted(QWheelEvent* self, bool accepted) {
    auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self);
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_SetAccepted_IsBase(true);
        vqwheelevent->setAccepted(accepted);
    } else {
        self->QWheelEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnSetAccepted(QWheelEvent* self, intptr_t slot) {
    auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self);
    if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
        vqwheelevent->setQWheelEvent_SetAccepted_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_SetAccepted_Callback>(slot));
    }
}

void QWheelEvent_Delete(QWheelEvent* self) {
    delete self;
}

QTabletEvent* QTabletEvent_new(int t, const QPointingDevice* device, const QPointF* pos, const QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, int button, int buttons) {
    return new VirtualQTabletEvent(static_cast<QEvent::Type>(t), device, *pos, *globalPos, static_cast<qreal>(pressure), static_cast<float>(xTilt), static_cast<float>(yTilt), static_cast<float>(tangentialPressure), static_cast<qreal>(rotation), static_cast<float>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons));
}

QPoint* QTabletEvent_Pos(const QTabletEvent* self) {
    return new QPoint(self->pos());
}

QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self) {
    return new QPoint(self->globalPos());
}

QPointF* QTabletEvent_PosF(const QTabletEvent* self) {
    return new QPointF(self->posF());
}

QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self) {
    return new QPointF(self->globalPosF());
}

int QTabletEvent_X(const QTabletEvent* self) {
    return self->x();
}

int QTabletEvent_Y(const QTabletEvent* self) {
    return self->y();
}

int QTabletEvent_GlobalX(const QTabletEvent* self) {
    return self->globalX();
}

int QTabletEvent_GlobalY(const QTabletEvent* self) {
    return self->globalY();
}

double QTabletEvent_HiResGlobalX(const QTabletEvent* self) {
    return static_cast<double>(self->hiResGlobalX());
}

double QTabletEvent_HiResGlobalY(const QTabletEvent* self) {
    return static_cast<double>(self->hiResGlobalY());
}

long long QTabletEvent_UniqueId(const QTabletEvent* self) {
    return static_cast<long long>(self->uniqueId());
}

double QTabletEvent_Pressure(const QTabletEvent* self) {
    return static_cast<double>(self->pressure());
}

double QTabletEvent_Rotation(const QTabletEvent* self) {
    return static_cast<double>(self->rotation());
}

double QTabletEvent_Z(const QTabletEvent* self) {
    return static_cast<double>(self->z());
}

double QTabletEvent_TangentialPressure(const QTabletEvent* self) {
    return static_cast<double>(self->tangentialPressure());
}

double QTabletEvent_XTilt(const QTabletEvent* self) {
    return static_cast<double>(self->xTilt());
}

double QTabletEvent_YTilt(const QTabletEvent* self) {
    return static_cast<double>(self->yTilt());
}

// Derived class handler implementation
QTabletEvent* QTabletEvent_Clone(const QTabletEvent* self) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        return vqtabletevent->clone();
    } else {
        return self->QTabletEvent::clone();
    }
}

// Base class handler implementation
QTabletEvent* QTabletEvent_QBaseClone(const QTabletEvent* self) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_Clone_IsBase(true);
        return vqtabletevent->clone();
    } else {
        return self->QTabletEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnClone(const QTabletEvent* self, intptr_t slot) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_Clone_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabletEvent_IsBeginEvent(const QTabletEvent* self) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        return vqtabletevent->isBeginEvent();
    } else {
        return self->QTabletEvent::isBeginEvent();
    }
}

// Base class handler implementation
bool QTabletEvent_QBaseIsBeginEvent(const QTabletEvent* self) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_IsBeginEvent_IsBase(true);
        return vqtabletevent->isBeginEvent();
    } else {
        return self->QTabletEvent::isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnIsBeginEvent(const QTabletEvent* self, intptr_t slot) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabletEvent_IsUpdateEvent(const QTabletEvent* self) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        return vqtabletevent->isUpdateEvent();
    } else {
        return self->QTabletEvent::isUpdateEvent();
    }
}

// Base class handler implementation
bool QTabletEvent_QBaseIsUpdateEvent(const QTabletEvent* self) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_IsUpdateEvent_IsBase(true);
        return vqtabletevent->isUpdateEvent();
    } else {
        return self->QTabletEvent::isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnIsUpdateEvent(const QTabletEvent* self, intptr_t slot) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabletEvent_IsEndEvent(const QTabletEvent* self) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        return vqtabletevent->isEndEvent();
    } else {
        return self->QTabletEvent::isEndEvent();
    }
}

// Base class handler implementation
bool QTabletEvent_QBaseIsEndEvent(const QTabletEvent* self) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_IsEndEvent_IsBase(true);
        return vqtabletevent->isEndEvent();
    } else {
        return self->QTabletEvent::isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnIsEndEvent(const QTabletEvent* self, intptr_t slot) {
    auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self));
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabletEvent_SetTimestamp(QTabletEvent* self, unsigned long long timestamp) {
    auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self);
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QTabletEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QTabletEvent_QBaseSetTimestamp(QTabletEvent* self, unsigned long long timestamp) {
    auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self);
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_SetTimestamp_IsBase(true);
        vqtabletevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QTabletEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnSetTimestamp(QTabletEvent* self, intptr_t slot) {
    auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self);
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabletEvent_SetAccepted(QTabletEvent* self, bool accepted) {
    auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self);
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setAccepted(accepted);
    } else {
        self->QTabletEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QTabletEvent_QBaseSetAccepted(QTabletEvent* self, bool accepted) {
    auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self);
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_SetAccepted_IsBase(true);
        vqtabletevent->setAccepted(accepted);
    } else {
        self->QTabletEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnSetAccepted(QTabletEvent* self, intptr_t slot) {
    auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self);
    if (vqtabletevent && vqtabletevent->isVirtualQTabletEvent) {
        vqtabletevent->setQTabletEvent_SetAccepted_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_SetAccepted_Callback>(slot));
    }
}

void QTabletEvent_Delete(QTabletEvent* self) {
    delete self;
}

QNativeGestureEvent* QNativeGestureEvent_new(int typeVal, const QPointingDevice* dev, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument) {
    return new VirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, *localPos, *scenePos, *globalPos, static_cast<qreal>(value), static_cast<quint64>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new2(int typeVal, const QPointingDevice* dev, int fingerCount, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, const QPointF* delta) {
    return new VirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, static_cast<int>(fingerCount), *localPos, *scenePos, *globalPos, static_cast<qreal>(value), *delta);
}

QNativeGestureEvent* QNativeGestureEvent_new3(int typeVal, const QPointingDevice* dev, int fingerCount, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, const QPointF* delta, unsigned long long sequenceId) {
    return new VirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, static_cast<int>(fingerCount), *localPos, *scenePos, *globalPos, static_cast<qreal>(value), *delta, static_cast<quint64>(sequenceId));
}

int QNativeGestureEvent_GestureType(const QNativeGestureEvent* self) {
    return static_cast<int>(self->gestureType());
}

int QNativeGestureEvent_FingerCount(const QNativeGestureEvent* self) {
    return self->fingerCount();
}

double QNativeGestureEvent_Value(const QNativeGestureEvent* self) {
    return static_cast<double>(self->value());
}

QPointF* QNativeGestureEvent_Delta(const QNativeGestureEvent* self) {
    return new QPointF(self->delta());
}

QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self) {
    return new QPoint(self->pos());
}

QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self) {
    return new QPoint(self->globalPos());
}

QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self) {
    return new QPointF(self->localPos());
}

QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self) {
    return new QPointF(self->windowPos());
}

QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self) {
    return new QPointF(self->screenPos());
}

// Derived class handler implementation
QNativeGestureEvent* QNativeGestureEvent_Clone(const QNativeGestureEvent* self) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        return vqnativegestureevent->clone();
    } else {
        return self->QNativeGestureEvent::clone();
    }
}

// Base class handler implementation
QNativeGestureEvent* QNativeGestureEvent_QBaseClone(const QNativeGestureEvent* self) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_Clone_IsBase(true);
        return vqnativegestureevent->clone();
    } else {
        return self->QNativeGestureEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnClone(const QNativeGestureEvent* self, intptr_t slot) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_Clone_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNativeGestureEvent_IsBeginEvent(const QNativeGestureEvent* self) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        return vqnativegestureevent->isBeginEvent();
    } else {
        return self->QNativeGestureEvent::isBeginEvent();
    }
}

// Base class handler implementation
bool QNativeGestureEvent_QBaseIsBeginEvent(const QNativeGestureEvent* self) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_IsBeginEvent_IsBase(true);
        return vqnativegestureevent->isBeginEvent();
    } else {
        return self->QNativeGestureEvent::isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnIsBeginEvent(const QNativeGestureEvent* self, intptr_t slot) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNativeGestureEvent_IsUpdateEvent(const QNativeGestureEvent* self) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        return vqnativegestureevent->isUpdateEvent();
    } else {
        return self->QNativeGestureEvent::isUpdateEvent();
    }
}

// Base class handler implementation
bool QNativeGestureEvent_QBaseIsUpdateEvent(const QNativeGestureEvent* self) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_IsUpdateEvent_IsBase(true);
        return vqnativegestureevent->isUpdateEvent();
    } else {
        return self->QNativeGestureEvent::isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnIsUpdateEvent(const QNativeGestureEvent* self, intptr_t slot) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNativeGestureEvent_IsEndEvent(const QNativeGestureEvent* self) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        return vqnativegestureevent->isEndEvent();
    } else {
        return self->QNativeGestureEvent::isEndEvent();
    }
}

// Base class handler implementation
bool QNativeGestureEvent_QBaseIsEndEvent(const QNativeGestureEvent* self) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_IsEndEvent_IsBase(true);
        return vqnativegestureevent->isEndEvent();
    } else {
        return self->QNativeGestureEvent::isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnIsEndEvent(const QNativeGestureEvent* self, intptr_t slot) {
    auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self));
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNativeGestureEvent_SetTimestamp(QNativeGestureEvent* self, unsigned long long timestamp) {
    auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self);
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QNativeGestureEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QNativeGestureEvent_QBaseSetTimestamp(QNativeGestureEvent* self, unsigned long long timestamp) {
    auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self);
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_SetTimestamp_IsBase(true);
        vqnativegestureevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QNativeGestureEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnSetTimestamp(QNativeGestureEvent* self, intptr_t slot) {
    auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self);
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QNativeGestureEvent_SetAccepted(QNativeGestureEvent* self, bool accepted) {
    auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self);
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setAccepted(accepted);
    } else {
        self->QNativeGestureEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QNativeGestureEvent_QBaseSetAccepted(QNativeGestureEvent* self, bool accepted) {
    auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self);
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_SetAccepted_IsBase(true);
        vqnativegestureevent->setAccepted(accepted);
    } else {
        self->QNativeGestureEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnSetAccepted(QNativeGestureEvent* self, intptr_t slot) {
    auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self);
    if (vqnativegestureevent && vqnativegestureevent->isVirtualQNativeGestureEvent) {
        vqnativegestureevent->setQNativeGestureEvent_SetAccepted_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_SetAccepted_Callback>(slot));
    }
}

void QNativeGestureEvent_Delete(QNativeGestureEvent* self) {
    delete self;
}

QKeyEvent* QKeyEvent_new(int typeVal, int key, int modifiers) {
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyEvent* QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers) {
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers));
}

QKeyEvent* QKeyEvent_new3(int typeVal, int key, int modifiers, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString);
}

QKeyEvent* QKeyEvent_new4(int typeVal, int key, int modifiers, const libqt_string text, bool autorep) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new5(int typeVal, int key, int modifiers, const libqt_string text, bool autorep, uint16_t count) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep, static_cast<quint16>(count));
}

QKeyEvent* QKeyEvent_new6(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString);
}

QKeyEvent* QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep, uint16_t count) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<quint16>(count));
}

QKeyEvent* QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep, uint16_t count, const QInputDevice* device) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<quint16>(count), device);
}

int QKeyEvent_Key(const QKeyEvent* self) {
    return self->key();
}

bool QKeyEvent_Matches(const QKeyEvent* self, int key) {
    return self->matches(static_cast<QKeySequence::StandardKey>(key));
}

int QKeyEvent_Modifiers(const QKeyEvent* self) {
    return static_cast<int>(self->modifiers());
}

QKeyCombination* QKeyEvent_KeyCombination(const QKeyEvent* self) {
    return new QKeyCombination(self->keyCombination());
}

libqt_string QKeyEvent_Text(const QKeyEvent* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QKeyEvent_IsAutoRepeat(const QKeyEvent* self) {
    return self->isAutoRepeat();
}

int QKeyEvent_Count(const QKeyEvent* self) {
    return self->count();
}

unsigned int QKeyEvent_NativeScanCode(const QKeyEvent* self) {
    return static_cast<unsigned int>(self->nativeScanCode());
}

unsigned int QKeyEvent_NativeVirtualKey(const QKeyEvent* self) {
    return static_cast<unsigned int>(self->nativeVirtualKey());
}

unsigned int QKeyEvent_NativeModifiers(const QKeyEvent* self) {
    return static_cast<unsigned int>(self->nativeModifiers());
}

// Derived class handler implementation
QKeyEvent* QKeyEvent_Clone(const QKeyEvent* self) {
    auto* vqkeyevent = const_cast<VirtualQKeyEvent*>(dynamic_cast<const VirtualQKeyEvent*>(self));
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        return vqkeyevent->clone();
    } else {
        return self->QKeyEvent::clone();
    }
}

// Base class handler implementation
QKeyEvent* QKeyEvent_QBaseClone(const QKeyEvent* self) {
    auto* vqkeyevent = const_cast<VirtualQKeyEvent*>(dynamic_cast<const VirtualQKeyEvent*>(self));
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        vqkeyevent->setQKeyEvent_Clone_IsBase(true);
        return vqkeyevent->clone();
    } else {
        return self->QKeyEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEvent_OnClone(const QKeyEvent* self, intptr_t slot) {
    auto* vqkeyevent = const_cast<VirtualQKeyEvent*>(dynamic_cast<const VirtualQKeyEvent*>(self));
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        vqkeyevent->setQKeyEvent_Clone_Callback(reinterpret_cast<VirtualQKeyEvent::QKeyEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEvent_SetTimestamp(QKeyEvent* self, unsigned long long timestamp) {
    auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self);
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        vqkeyevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QKeyEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QKeyEvent_QBaseSetTimestamp(QKeyEvent* self, unsigned long long timestamp) {
    auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self);
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        vqkeyevent->setQKeyEvent_SetTimestamp_IsBase(true);
        vqkeyevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QKeyEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEvent_OnSetTimestamp(QKeyEvent* self, intptr_t slot) {
    auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self);
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        vqkeyevent->setQKeyEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQKeyEvent::QKeyEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEvent_SetAccepted(QKeyEvent* self, bool accepted) {
    auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self);
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        vqkeyevent->setAccepted(accepted);
    } else {
        self->QKeyEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QKeyEvent_QBaseSetAccepted(QKeyEvent* self, bool accepted) {
    auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self);
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        vqkeyevent->setQKeyEvent_SetAccepted_IsBase(true);
        vqkeyevent->setAccepted(accepted);
    } else {
        self->QKeyEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEvent_OnSetAccepted(QKeyEvent* self, intptr_t slot) {
    auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self);
    if (vqkeyevent && vqkeyevent->isVirtualQKeyEvent) {
        vqkeyevent->setQKeyEvent_SetAccepted_Callback(reinterpret_cast<VirtualQKeyEvent::QKeyEvent_SetAccepted_Callback>(slot));
    }
}

void QKeyEvent_Delete(QKeyEvent* self) {
    delete self;
}

QFocusEvent* QFocusEvent_new(int typeVal) {
    return new VirtualQFocusEvent(static_cast<QEvent::Type>(typeVal));
}

QFocusEvent* QFocusEvent_new2(int typeVal, int reason) {
    return new VirtualQFocusEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::FocusReason>(reason));
}

bool QFocusEvent_GotFocus(const QFocusEvent* self) {
    return self->gotFocus();
}

bool QFocusEvent_LostFocus(const QFocusEvent* self) {
    return self->lostFocus();
}

int QFocusEvent_Reason(const QFocusEvent* self) {
    return static_cast<int>(self->reason());
}

// Derived class handler implementation
QFocusEvent* QFocusEvent_Clone(const QFocusEvent* self) {
    auto* vqfocusevent = const_cast<VirtualQFocusEvent*>(dynamic_cast<const VirtualQFocusEvent*>(self));
    if (vqfocusevent && vqfocusevent->isVirtualQFocusEvent) {
        return vqfocusevent->clone();
    } else {
        return self->QFocusEvent::clone();
    }
}

// Base class handler implementation
QFocusEvent* QFocusEvent_QBaseClone(const QFocusEvent* self) {
    auto* vqfocusevent = const_cast<VirtualQFocusEvent*>(dynamic_cast<const VirtualQFocusEvent*>(self));
    if (vqfocusevent && vqfocusevent->isVirtualQFocusEvent) {
        vqfocusevent->setQFocusEvent_Clone_IsBase(true);
        return vqfocusevent->clone();
    } else {
        return self->QFocusEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusEvent_OnClone(const QFocusEvent* self, intptr_t slot) {
    auto* vqfocusevent = const_cast<VirtualQFocusEvent*>(dynamic_cast<const VirtualQFocusEvent*>(self));
    if (vqfocusevent && vqfocusevent->isVirtualQFocusEvent) {
        vqfocusevent->setQFocusEvent_Clone_Callback(reinterpret_cast<VirtualQFocusEvent::QFocusEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusEvent_SetAccepted(QFocusEvent* self, bool accepted) {
    auto* vqfocusevent = dynamic_cast<VirtualQFocusEvent*>(self);
    if (vqfocusevent && vqfocusevent->isVirtualQFocusEvent) {
        vqfocusevent->setAccepted(accepted);
    } else {
        self->QFocusEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QFocusEvent_QBaseSetAccepted(QFocusEvent* self, bool accepted) {
    auto* vqfocusevent = dynamic_cast<VirtualQFocusEvent*>(self);
    if (vqfocusevent && vqfocusevent->isVirtualQFocusEvent) {
        vqfocusevent->setQFocusEvent_SetAccepted_IsBase(true);
        vqfocusevent->setAccepted(accepted);
    } else {
        self->QFocusEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusEvent_OnSetAccepted(QFocusEvent* self, intptr_t slot) {
    auto* vqfocusevent = dynamic_cast<VirtualQFocusEvent*>(self);
    if (vqfocusevent && vqfocusevent->isVirtualQFocusEvent) {
        vqfocusevent->setQFocusEvent_SetAccepted_Callback(reinterpret_cast<VirtualQFocusEvent::QFocusEvent_SetAccepted_Callback>(slot));
    }
}

void QFocusEvent_Delete(QFocusEvent* self) {
    delete self;
}

QPaintEvent* QPaintEvent_new(const QRegion* paintRegion) {
    return new VirtualQPaintEvent(*paintRegion);
}

QPaintEvent* QPaintEvent_new2(const QRect* paintRect) {
    return new VirtualQPaintEvent(*paintRect);
}

QRect* QPaintEvent_Rect(const QPaintEvent* self) {
    const QRect& _ret = self->rect();
    // Cast returned reference into pointer
    return const_cast<QRect*>(&_ret);
}

QRegion* QPaintEvent_Region(const QPaintEvent* self) {
    const QRegion& _ret = self->region();
    // Cast returned reference into pointer
    return const_cast<QRegion*>(&_ret);
}

// Derived class handler implementation
QPaintEvent* QPaintEvent_Clone(const QPaintEvent* self) {
    auto* vqpaintevent = const_cast<VirtualQPaintEvent*>(dynamic_cast<const VirtualQPaintEvent*>(self));
    if (vqpaintevent && vqpaintevent->isVirtualQPaintEvent) {
        return vqpaintevent->clone();
    } else {
        return self->QPaintEvent::clone();
    }
}

// Base class handler implementation
QPaintEvent* QPaintEvent_QBaseClone(const QPaintEvent* self) {
    auto* vqpaintevent = const_cast<VirtualQPaintEvent*>(dynamic_cast<const VirtualQPaintEvent*>(self));
    if (vqpaintevent && vqpaintevent->isVirtualQPaintEvent) {
        vqpaintevent->setQPaintEvent_Clone_IsBase(true);
        return vqpaintevent->clone();
    } else {
        return self->QPaintEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEvent_OnClone(const QPaintEvent* self, intptr_t slot) {
    auto* vqpaintevent = const_cast<VirtualQPaintEvent*>(dynamic_cast<const VirtualQPaintEvent*>(self));
    if (vqpaintevent && vqpaintevent->isVirtualQPaintEvent) {
        vqpaintevent->setQPaintEvent_Clone_Callback(reinterpret_cast<VirtualQPaintEvent::QPaintEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEvent_SetAccepted(QPaintEvent* self, bool accepted) {
    auto* vqpaintevent = dynamic_cast<VirtualQPaintEvent*>(self);
    if (vqpaintevent && vqpaintevent->isVirtualQPaintEvent) {
        vqpaintevent->setAccepted(accepted);
    } else {
        self->QPaintEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QPaintEvent_QBaseSetAccepted(QPaintEvent* self, bool accepted) {
    auto* vqpaintevent = dynamic_cast<VirtualQPaintEvent*>(self);
    if (vqpaintevent && vqpaintevent->isVirtualQPaintEvent) {
        vqpaintevent->setQPaintEvent_SetAccepted_IsBase(true);
        vqpaintevent->setAccepted(accepted);
    } else {
        self->QPaintEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEvent_OnSetAccepted(QPaintEvent* self, intptr_t slot) {
    auto* vqpaintevent = dynamic_cast<VirtualQPaintEvent*>(self);
    if (vqpaintevent && vqpaintevent->isVirtualQPaintEvent) {
        vqpaintevent->setQPaintEvent_SetAccepted_Callback(reinterpret_cast<VirtualQPaintEvent::QPaintEvent_SetAccepted_Callback>(slot));
    }
}

void QPaintEvent_Delete(QPaintEvent* self) {
    delete self;
}

QMoveEvent* QMoveEvent_new(const QPoint* pos, const QPoint* oldPos) {
    return new VirtualQMoveEvent(*pos, *oldPos);
}

QPoint* QMoveEvent_Pos(const QMoveEvent* self) {
    const QPoint& _ret = self->pos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

QPoint* QMoveEvent_OldPos(const QMoveEvent* self) {
    const QPoint& _ret = self->oldPos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

// Derived class handler implementation
QMoveEvent* QMoveEvent_Clone(const QMoveEvent* self) {
    auto* vqmoveevent = const_cast<VirtualQMoveEvent*>(dynamic_cast<const VirtualQMoveEvent*>(self));
    if (vqmoveevent && vqmoveevent->isVirtualQMoveEvent) {
        return vqmoveevent->clone();
    } else {
        return self->QMoveEvent::clone();
    }
}

// Base class handler implementation
QMoveEvent* QMoveEvent_QBaseClone(const QMoveEvent* self) {
    auto* vqmoveevent = const_cast<VirtualQMoveEvent*>(dynamic_cast<const VirtualQMoveEvent*>(self));
    if (vqmoveevent && vqmoveevent->isVirtualQMoveEvent) {
        vqmoveevent->setQMoveEvent_Clone_IsBase(true);
        return vqmoveevent->clone();
    } else {
        return self->QMoveEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QMoveEvent_OnClone(const QMoveEvent* self, intptr_t slot) {
    auto* vqmoveevent = const_cast<VirtualQMoveEvent*>(dynamic_cast<const VirtualQMoveEvent*>(self));
    if (vqmoveevent && vqmoveevent->isVirtualQMoveEvent) {
        vqmoveevent->setQMoveEvent_Clone_Callback(reinterpret_cast<VirtualQMoveEvent::QMoveEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QMoveEvent_SetAccepted(QMoveEvent* self, bool accepted) {
    auto* vqmoveevent = dynamic_cast<VirtualQMoveEvent*>(self);
    if (vqmoveevent && vqmoveevent->isVirtualQMoveEvent) {
        vqmoveevent->setAccepted(accepted);
    } else {
        self->QMoveEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QMoveEvent_QBaseSetAccepted(QMoveEvent* self, bool accepted) {
    auto* vqmoveevent = dynamic_cast<VirtualQMoveEvent*>(self);
    if (vqmoveevent && vqmoveevent->isVirtualQMoveEvent) {
        vqmoveevent->setQMoveEvent_SetAccepted_IsBase(true);
        vqmoveevent->setAccepted(accepted);
    } else {
        self->QMoveEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QMoveEvent_OnSetAccepted(QMoveEvent* self, intptr_t slot) {
    auto* vqmoveevent = dynamic_cast<VirtualQMoveEvent*>(self);
    if (vqmoveevent && vqmoveevent->isVirtualQMoveEvent) {
        vqmoveevent->setQMoveEvent_SetAccepted_Callback(reinterpret_cast<VirtualQMoveEvent::QMoveEvent_SetAccepted_Callback>(slot));
    }
}

void QMoveEvent_Delete(QMoveEvent* self) {
    delete self;
}

QExposeEvent* QExposeEvent_new(const QRegion* m_region) {
    return new VirtualQExposeEvent(*m_region);
}

QRegion* QExposeEvent_Region(const QExposeEvent* self) {
    const QRegion& _ret = self->region();
    // Cast returned reference into pointer
    return const_cast<QRegion*>(&_ret);
}

// Derived class handler implementation
QExposeEvent* QExposeEvent_Clone(const QExposeEvent* self) {
    auto* vqexposeevent = const_cast<VirtualQExposeEvent*>(dynamic_cast<const VirtualQExposeEvent*>(self));
    if (vqexposeevent && vqexposeevent->isVirtualQExposeEvent) {
        return vqexposeevent->clone();
    } else {
        return self->QExposeEvent::clone();
    }
}

// Base class handler implementation
QExposeEvent* QExposeEvent_QBaseClone(const QExposeEvent* self) {
    auto* vqexposeevent = const_cast<VirtualQExposeEvent*>(dynamic_cast<const VirtualQExposeEvent*>(self));
    if (vqexposeevent && vqexposeevent->isVirtualQExposeEvent) {
        vqexposeevent->setQExposeEvent_Clone_IsBase(true);
        return vqexposeevent->clone();
    } else {
        return self->QExposeEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QExposeEvent_OnClone(const QExposeEvent* self, intptr_t slot) {
    auto* vqexposeevent = const_cast<VirtualQExposeEvent*>(dynamic_cast<const VirtualQExposeEvent*>(self));
    if (vqexposeevent && vqexposeevent->isVirtualQExposeEvent) {
        vqexposeevent->setQExposeEvent_Clone_Callback(reinterpret_cast<VirtualQExposeEvent::QExposeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QExposeEvent_SetAccepted(QExposeEvent* self, bool accepted) {
    auto* vqexposeevent = dynamic_cast<VirtualQExposeEvent*>(self);
    if (vqexposeevent && vqexposeevent->isVirtualQExposeEvent) {
        vqexposeevent->setAccepted(accepted);
    } else {
        self->QExposeEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QExposeEvent_QBaseSetAccepted(QExposeEvent* self, bool accepted) {
    auto* vqexposeevent = dynamic_cast<VirtualQExposeEvent*>(self);
    if (vqexposeevent && vqexposeevent->isVirtualQExposeEvent) {
        vqexposeevent->setQExposeEvent_SetAccepted_IsBase(true);
        vqexposeevent->setAccepted(accepted);
    } else {
        self->QExposeEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QExposeEvent_OnSetAccepted(QExposeEvent* self, intptr_t slot) {
    auto* vqexposeevent = dynamic_cast<VirtualQExposeEvent*>(self);
    if (vqexposeevent && vqexposeevent->isVirtualQExposeEvent) {
        vqexposeevent->setQExposeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQExposeEvent::QExposeEvent_SetAccepted_Callback>(slot));
    }
}

void QExposeEvent_Delete(QExposeEvent* self) {
    delete self;
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType) {
    return new VirtualQPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
}

int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self) {
    return static_cast<int>(self->surfaceEventType());
}

// Derived class handler implementation
QPlatformSurfaceEvent* QPlatformSurfaceEvent_Clone(const QPlatformSurfaceEvent* self) {
    auto* vqplatformsurfaceevent = const_cast<VirtualQPlatformSurfaceEvent*>(dynamic_cast<const VirtualQPlatformSurfaceEvent*>(self));
    if (vqplatformsurfaceevent && vqplatformsurfaceevent->isVirtualQPlatformSurfaceEvent) {
        return vqplatformsurfaceevent->clone();
    } else {
        return self->QPlatformSurfaceEvent::clone();
    }
}

// Base class handler implementation
QPlatformSurfaceEvent* QPlatformSurfaceEvent_QBaseClone(const QPlatformSurfaceEvent* self) {
    auto* vqplatformsurfaceevent = const_cast<VirtualQPlatformSurfaceEvent*>(dynamic_cast<const VirtualQPlatformSurfaceEvent*>(self));
    if (vqplatformsurfaceevent && vqplatformsurfaceevent->isVirtualQPlatformSurfaceEvent) {
        vqplatformsurfaceevent->setQPlatformSurfaceEvent_Clone_IsBase(true);
        return vqplatformsurfaceevent->clone();
    } else {
        return self->QPlatformSurfaceEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlatformSurfaceEvent_OnClone(const QPlatformSurfaceEvent* self, intptr_t slot) {
    auto* vqplatformsurfaceevent = const_cast<VirtualQPlatformSurfaceEvent*>(dynamic_cast<const VirtualQPlatformSurfaceEvent*>(self));
    if (vqplatformsurfaceevent && vqplatformsurfaceevent->isVirtualQPlatformSurfaceEvent) {
        vqplatformsurfaceevent->setQPlatformSurfaceEvent_Clone_Callback(reinterpret_cast<VirtualQPlatformSurfaceEvent::QPlatformSurfaceEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlatformSurfaceEvent_SetAccepted(QPlatformSurfaceEvent* self, bool accepted) {
    auto* vqplatformsurfaceevent = dynamic_cast<VirtualQPlatformSurfaceEvent*>(self);
    if (vqplatformsurfaceevent && vqplatformsurfaceevent->isVirtualQPlatformSurfaceEvent) {
        vqplatformsurfaceevent->setAccepted(accepted);
    } else {
        self->QPlatformSurfaceEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QPlatformSurfaceEvent_QBaseSetAccepted(QPlatformSurfaceEvent* self, bool accepted) {
    auto* vqplatformsurfaceevent = dynamic_cast<VirtualQPlatformSurfaceEvent*>(self);
    if (vqplatformsurfaceevent && vqplatformsurfaceevent->isVirtualQPlatformSurfaceEvent) {
        vqplatformsurfaceevent->setQPlatformSurfaceEvent_SetAccepted_IsBase(true);
        vqplatformsurfaceevent->setAccepted(accepted);
    } else {
        self->QPlatformSurfaceEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlatformSurfaceEvent_OnSetAccepted(QPlatformSurfaceEvent* self, intptr_t slot) {
    auto* vqplatformsurfaceevent = dynamic_cast<VirtualQPlatformSurfaceEvent*>(self);
    if (vqplatformsurfaceevent && vqplatformsurfaceevent->isVirtualQPlatformSurfaceEvent) {
        vqplatformsurfaceevent->setQPlatformSurfaceEvent_SetAccepted_Callback(reinterpret_cast<VirtualQPlatformSurfaceEvent::QPlatformSurfaceEvent_SetAccepted_Callback>(slot));
    }
}

void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self) {
    delete self;
}

QResizeEvent* QResizeEvent_new(const QSize* size, const QSize* oldSize) {
    return new VirtualQResizeEvent(*size, *oldSize);
}

QSize* QResizeEvent_Size(const QResizeEvent* self) {
    const QSize& _ret = self->size();
    // Cast returned reference into pointer
    return const_cast<QSize*>(&_ret);
}

QSize* QResizeEvent_OldSize(const QResizeEvent* self) {
    const QSize& _ret = self->oldSize();
    // Cast returned reference into pointer
    return const_cast<QSize*>(&_ret);
}

// Derived class handler implementation
QResizeEvent* QResizeEvent_Clone(const QResizeEvent* self) {
    auto* vqresizeevent = const_cast<VirtualQResizeEvent*>(dynamic_cast<const VirtualQResizeEvent*>(self));
    if (vqresizeevent && vqresizeevent->isVirtualQResizeEvent) {
        return vqresizeevent->clone();
    } else {
        return self->QResizeEvent::clone();
    }
}

// Base class handler implementation
QResizeEvent* QResizeEvent_QBaseClone(const QResizeEvent* self) {
    auto* vqresizeevent = const_cast<VirtualQResizeEvent*>(dynamic_cast<const VirtualQResizeEvent*>(self));
    if (vqresizeevent && vqresizeevent->isVirtualQResizeEvent) {
        vqresizeevent->setQResizeEvent_Clone_IsBase(true);
        return vqresizeevent->clone();
    } else {
        return self->QResizeEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QResizeEvent_OnClone(const QResizeEvent* self, intptr_t slot) {
    auto* vqresizeevent = const_cast<VirtualQResizeEvent*>(dynamic_cast<const VirtualQResizeEvent*>(self));
    if (vqresizeevent && vqresizeevent->isVirtualQResizeEvent) {
        vqresizeevent->setQResizeEvent_Clone_Callback(reinterpret_cast<VirtualQResizeEvent::QResizeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QResizeEvent_SetAccepted(QResizeEvent* self, bool accepted) {
    auto* vqresizeevent = dynamic_cast<VirtualQResizeEvent*>(self);
    if (vqresizeevent && vqresizeevent->isVirtualQResizeEvent) {
        vqresizeevent->setAccepted(accepted);
    } else {
        self->QResizeEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QResizeEvent_QBaseSetAccepted(QResizeEvent* self, bool accepted) {
    auto* vqresizeevent = dynamic_cast<VirtualQResizeEvent*>(self);
    if (vqresizeevent && vqresizeevent->isVirtualQResizeEvent) {
        vqresizeevent->setQResizeEvent_SetAccepted_IsBase(true);
        vqresizeevent->setAccepted(accepted);
    } else {
        self->QResizeEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QResizeEvent_OnSetAccepted(QResizeEvent* self, intptr_t slot) {
    auto* vqresizeevent = dynamic_cast<VirtualQResizeEvent*>(self);
    if (vqresizeevent && vqresizeevent->isVirtualQResizeEvent) {
        vqresizeevent->setQResizeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQResizeEvent::QResizeEvent_SetAccepted_Callback>(slot));
    }
}

void QResizeEvent_Delete(QResizeEvent* self) {
    delete self;
}

QCloseEvent* QCloseEvent_new() {
    return new VirtualQCloseEvent();
}

// Derived class handler implementation
QCloseEvent* QCloseEvent_Clone(const QCloseEvent* self) {
    auto* vqcloseevent = const_cast<VirtualQCloseEvent*>(dynamic_cast<const VirtualQCloseEvent*>(self));
    if (vqcloseevent && vqcloseevent->isVirtualQCloseEvent) {
        return vqcloseevent->clone();
    } else {
        return self->QCloseEvent::clone();
    }
}

// Base class handler implementation
QCloseEvent* QCloseEvent_QBaseClone(const QCloseEvent* self) {
    auto* vqcloseevent = const_cast<VirtualQCloseEvent*>(dynamic_cast<const VirtualQCloseEvent*>(self));
    if (vqcloseevent && vqcloseevent->isVirtualQCloseEvent) {
        vqcloseevent->setQCloseEvent_Clone_IsBase(true);
        return vqcloseevent->clone();
    } else {
        return self->QCloseEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QCloseEvent_OnClone(const QCloseEvent* self, intptr_t slot) {
    auto* vqcloseevent = const_cast<VirtualQCloseEvent*>(dynamic_cast<const VirtualQCloseEvent*>(self));
    if (vqcloseevent && vqcloseevent->isVirtualQCloseEvent) {
        vqcloseevent->setQCloseEvent_Clone_Callback(reinterpret_cast<VirtualQCloseEvent::QCloseEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QCloseEvent_SetAccepted(QCloseEvent* self, bool accepted) {
    auto* vqcloseevent = dynamic_cast<VirtualQCloseEvent*>(self);
    if (vqcloseevent && vqcloseevent->isVirtualQCloseEvent) {
        vqcloseevent->setAccepted(accepted);
    } else {
        self->QCloseEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QCloseEvent_QBaseSetAccepted(QCloseEvent* self, bool accepted) {
    auto* vqcloseevent = dynamic_cast<VirtualQCloseEvent*>(self);
    if (vqcloseevent && vqcloseevent->isVirtualQCloseEvent) {
        vqcloseevent->setQCloseEvent_SetAccepted_IsBase(true);
        vqcloseevent->setAccepted(accepted);
    } else {
        self->QCloseEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QCloseEvent_OnSetAccepted(QCloseEvent* self, intptr_t slot) {
    auto* vqcloseevent = dynamic_cast<VirtualQCloseEvent*>(self);
    if (vqcloseevent && vqcloseevent->isVirtualQCloseEvent) {
        vqcloseevent->setQCloseEvent_SetAccepted_Callback(reinterpret_cast<VirtualQCloseEvent::QCloseEvent_SetAccepted_Callback>(slot));
    }
}

void QCloseEvent_Delete(QCloseEvent* self) {
    delete self;
}

QIconDragEvent* QIconDragEvent_new() {
    return new VirtualQIconDragEvent();
}

// Derived class handler implementation
QIconDragEvent* QIconDragEvent_Clone(const QIconDragEvent* self) {
    auto* vqicondragevent = const_cast<VirtualQIconDragEvent*>(dynamic_cast<const VirtualQIconDragEvent*>(self));
    if (vqicondragevent && vqicondragevent->isVirtualQIconDragEvent) {
        return vqicondragevent->clone();
    } else {
        return self->QIconDragEvent::clone();
    }
}

// Base class handler implementation
QIconDragEvent* QIconDragEvent_QBaseClone(const QIconDragEvent* self) {
    auto* vqicondragevent = const_cast<VirtualQIconDragEvent*>(dynamic_cast<const VirtualQIconDragEvent*>(self));
    if (vqicondragevent && vqicondragevent->isVirtualQIconDragEvent) {
        vqicondragevent->setQIconDragEvent_Clone_IsBase(true);
        return vqicondragevent->clone();
    } else {
        return self->QIconDragEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QIconDragEvent_OnClone(const QIconDragEvent* self, intptr_t slot) {
    auto* vqicondragevent = const_cast<VirtualQIconDragEvent*>(dynamic_cast<const VirtualQIconDragEvent*>(self));
    if (vqicondragevent && vqicondragevent->isVirtualQIconDragEvent) {
        vqicondragevent->setQIconDragEvent_Clone_Callback(reinterpret_cast<VirtualQIconDragEvent::QIconDragEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconDragEvent_SetAccepted(QIconDragEvent* self, bool accepted) {
    auto* vqicondragevent = dynamic_cast<VirtualQIconDragEvent*>(self);
    if (vqicondragevent && vqicondragevent->isVirtualQIconDragEvent) {
        vqicondragevent->setAccepted(accepted);
    } else {
        self->QIconDragEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QIconDragEvent_QBaseSetAccepted(QIconDragEvent* self, bool accepted) {
    auto* vqicondragevent = dynamic_cast<VirtualQIconDragEvent*>(self);
    if (vqicondragevent && vqicondragevent->isVirtualQIconDragEvent) {
        vqicondragevent->setQIconDragEvent_SetAccepted_IsBase(true);
        vqicondragevent->setAccepted(accepted);
    } else {
        self->QIconDragEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconDragEvent_OnSetAccepted(QIconDragEvent* self, intptr_t slot) {
    auto* vqicondragevent = dynamic_cast<VirtualQIconDragEvent*>(self);
    if (vqicondragevent && vqicondragevent->isVirtualQIconDragEvent) {
        vqicondragevent->setQIconDragEvent_SetAccepted_Callback(reinterpret_cast<VirtualQIconDragEvent::QIconDragEvent_SetAccepted_Callback>(slot));
    }
}

void QIconDragEvent_Delete(QIconDragEvent* self) {
    delete self;
}

QShowEvent* QShowEvent_new() {
    return new VirtualQShowEvent();
}

// Derived class handler implementation
QShowEvent* QShowEvent_Clone(const QShowEvent* self) {
    auto* vqshowevent = const_cast<VirtualQShowEvent*>(dynamic_cast<const VirtualQShowEvent*>(self));
    if (vqshowevent && vqshowevent->isVirtualQShowEvent) {
        return vqshowevent->clone();
    } else {
        return self->QShowEvent::clone();
    }
}

// Base class handler implementation
QShowEvent* QShowEvent_QBaseClone(const QShowEvent* self) {
    auto* vqshowevent = const_cast<VirtualQShowEvent*>(dynamic_cast<const VirtualQShowEvent*>(self));
    if (vqshowevent && vqshowevent->isVirtualQShowEvent) {
        vqshowevent->setQShowEvent_Clone_IsBase(true);
        return vqshowevent->clone();
    } else {
        return self->QShowEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QShowEvent_OnClone(const QShowEvent* self, intptr_t slot) {
    auto* vqshowevent = const_cast<VirtualQShowEvent*>(dynamic_cast<const VirtualQShowEvent*>(self));
    if (vqshowevent && vqshowevent->isVirtualQShowEvent) {
        vqshowevent->setQShowEvent_Clone_Callback(reinterpret_cast<VirtualQShowEvent::QShowEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QShowEvent_SetAccepted(QShowEvent* self, bool accepted) {
    auto* vqshowevent = dynamic_cast<VirtualQShowEvent*>(self);
    if (vqshowevent && vqshowevent->isVirtualQShowEvent) {
        vqshowevent->setAccepted(accepted);
    } else {
        self->QShowEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QShowEvent_QBaseSetAccepted(QShowEvent* self, bool accepted) {
    auto* vqshowevent = dynamic_cast<VirtualQShowEvent*>(self);
    if (vqshowevent && vqshowevent->isVirtualQShowEvent) {
        vqshowevent->setQShowEvent_SetAccepted_IsBase(true);
        vqshowevent->setAccepted(accepted);
    } else {
        self->QShowEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QShowEvent_OnSetAccepted(QShowEvent* self, intptr_t slot) {
    auto* vqshowevent = dynamic_cast<VirtualQShowEvent*>(self);
    if (vqshowevent && vqshowevent->isVirtualQShowEvent) {
        vqshowevent->setQShowEvent_SetAccepted_Callback(reinterpret_cast<VirtualQShowEvent::QShowEvent_SetAccepted_Callback>(slot));
    }
}

void QShowEvent_Delete(QShowEvent* self) {
    delete self;
}

QHideEvent* QHideEvent_new() {
    return new VirtualQHideEvent();
}

// Derived class handler implementation
QHideEvent* QHideEvent_Clone(const QHideEvent* self) {
    auto* vqhideevent = const_cast<VirtualQHideEvent*>(dynamic_cast<const VirtualQHideEvent*>(self));
    if (vqhideevent && vqhideevent->isVirtualQHideEvent) {
        return vqhideevent->clone();
    } else {
        return self->QHideEvent::clone();
    }
}

// Base class handler implementation
QHideEvent* QHideEvent_QBaseClone(const QHideEvent* self) {
    auto* vqhideevent = const_cast<VirtualQHideEvent*>(dynamic_cast<const VirtualQHideEvent*>(self));
    if (vqhideevent && vqhideevent->isVirtualQHideEvent) {
        vqhideevent->setQHideEvent_Clone_IsBase(true);
        return vqhideevent->clone();
    } else {
        return self->QHideEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QHideEvent_OnClone(const QHideEvent* self, intptr_t slot) {
    auto* vqhideevent = const_cast<VirtualQHideEvent*>(dynamic_cast<const VirtualQHideEvent*>(self));
    if (vqhideevent && vqhideevent->isVirtualQHideEvent) {
        vqhideevent->setQHideEvent_Clone_Callback(reinterpret_cast<VirtualQHideEvent::QHideEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QHideEvent_SetAccepted(QHideEvent* self, bool accepted) {
    auto* vqhideevent = dynamic_cast<VirtualQHideEvent*>(self);
    if (vqhideevent && vqhideevent->isVirtualQHideEvent) {
        vqhideevent->setAccepted(accepted);
    } else {
        self->QHideEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QHideEvent_QBaseSetAccepted(QHideEvent* self, bool accepted) {
    auto* vqhideevent = dynamic_cast<VirtualQHideEvent*>(self);
    if (vqhideevent && vqhideevent->isVirtualQHideEvent) {
        vqhideevent->setQHideEvent_SetAccepted_IsBase(true);
        vqhideevent->setAccepted(accepted);
    } else {
        self->QHideEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QHideEvent_OnSetAccepted(QHideEvent* self, intptr_t slot) {
    auto* vqhideevent = dynamic_cast<VirtualQHideEvent*>(self);
    if (vqhideevent && vqhideevent->isVirtualQHideEvent) {
        vqhideevent->setQHideEvent_SetAccepted_Callback(reinterpret_cast<VirtualQHideEvent::QHideEvent_SetAccepted_Callback>(slot));
    }
}

void QHideEvent_Delete(QHideEvent* self) {
    delete self;
}

QContextMenuEvent* QContextMenuEvent_new(int reason, const QPoint* pos, const QPoint* globalPos) {
    return new VirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos);
}

QContextMenuEvent* QContextMenuEvent_new2(int reason, const QPoint* pos) {
    return new VirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos);
}

QContextMenuEvent* QContextMenuEvent_new3(int reason, const QPoint* pos, const QPoint* globalPos, int modifiers) {
    return new VirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QContextMenuEvent_X(const QContextMenuEvent* self) {
    return self->x();
}

int QContextMenuEvent_Y(const QContextMenuEvent* self) {
    return self->y();
}

int QContextMenuEvent_GlobalX(const QContextMenuEvent* self) {
    return self->globalX();
}

int QContextMenuEvent_GlobalY(const QContextMenuEvent* self) {
    return self->globalY();
}

QPoint* QContextMenuEvent_Pos(const QContextMenuEvent* self) {
    const QPoint& _ret = self->pos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

QPoint* QContextMenuEvent_GlobalPos(const QContextMenuEvent* self) {
    const QPoint& _ret = self->globalPos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

int QContextMenuEvent_Reason(const QContextMenuEvent* self) {
    return static_cast<int>(self->reason());
}

// Derived class handler implementation
QContextMenuEvent* QContextMenuEvent_Clone(const QContextMenuEvent* self) {
    auto* vqcontextmenuevent = const_cast<VirtualQContextMenuEvent*>(dynamic_cast<const VirtualQContextMenuEvent*>(self));
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        return vqcontextmenuevent->clone();
    } else {
        return self->QContextMenuEvent::clone();
    }
}

// Base class handler implementation
QContextMenuEvent* QContextMenuEvent_QBaseClone(const QContextMenuEvent* self) {
    auto* vqcontextmenuevent = const_cast<VirtualQContextMenuEvent*>(dynamic_cast<const VirtualQContextMenuEvent*>(self));
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        vqcontextmenuevent->setQContextMenuEvent_Clone_IsBase(true);
        return vqcontextmenuevent->clone();
    } else {
        return self->QContextMenuEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QContextMenuEvent_OnClone(const QContextMenuEvent* self, intptr_t slot) {
    auto* vqcontextmenuevent = const_cast<VirtualQContextMenuEvent*>(dynamic_cast<const VirtualQContextMenuEvent*>(self));
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        vqcontextmenuevent->setQContextMenuEvent_Clone_Callback(reinterpret_cast<VirtualQContextMenuEvent::QContextMenuEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QContextMenuEvent_SetTimestamp(QContextMenuEvent* self, unsigned long long timestamp) {
    auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self);
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        vqcontextmenuevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QContextMenuEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QContextMenuEvent_QBaseSetTimestamp(QContextMenuEvent* self, unsigned long long timestamp) {
    auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self);
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        vqcontextmenuevent->setQContextMenuEvent_SetTimestamp_IsBase(true);
        vqcontextmenuevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QContextMenuEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QContextMenuEvent_OnSetTimestamp(QContextMenuEvent* self, intptr_t slot) {
    auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self);
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        vqcontextmenuevent->setQContextMenuEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQContextMenuEvent::QContextMenuEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QContextMenuEvent_SetAccepted(QContextMenuEvent* self, bool accepted) {
    auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self);
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        vqcontextmenuevent->setAccepted(accepted);
    } else {
        self->QContextMenuEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QContextMenuEvent_QBaseSetAccepted(QContextMenuEvent* self, bool accepted) {
    auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self);
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        vqcontextmenuevent->setQContextMenuEvent_SetAccepted_IsBase(true);
        vqcontextmenuevent->setAccepted(accepted);
    } else {
        self->QContextMenuEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QContextMenuEvent_OnSetAccepted(QContextMenuEvent* self, intptr_t slot) {
    auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self);
    if (vqcontextmenuevent && vqcontextmenuevent->isVirtualQContextMenuEvent) {
        vqcontextmenuevent->setQContextMenuEvent_SetAccepted_Callback(reinterpret_cast<VirtualQContextMenuEvent::QContextMenuEvent_SetAccepted_Callback>(slot));
    }
}

void QContextMenuEvent_Delete(QContextMenuEvent* self) {
    delete self;
}

QInputMethodEvent* QInputMethodEvent_new() {
    return new VirtualQInputMethodEvent();
}

QInputMethodEvent* QInputMethodEvent_new2(const libqt_string preeditText, const libqt_list /* of QInputMethodEvent__Attribute* */ attributes) {
    QString preeditText_QString = QString::fromUtf8(preeditText.data, preeditText.len);
    QList<QInputMethodEvent::Attribute> attributes_QList;
    attributes_QList.reserve(attributes.len);
    QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes.data);
    for (size_t i = 0; i < attributes.len; ++i) {
        attributes_QList.push_back(*(attributes_arr[i]));
    }
    return new VirtualQInputMethodEvent(preeditText_QString, attributes_QList);
}

void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, const libqt_string commitString) {
    QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
    self->setCommitString(commitString_QString);
}

libqt_list /* of QInputMethodEvent__Attribute* */ QInputMethodEvent_Attributes(const QInputMethodEvent* self) {
    const QList<QInputMethodEvent::Attribute>& _ret = self->attributes();
    // Convert const QList<> from C++ memory to manually-managed C memory
    QInputMethodEvent__Attribute** _arr = static_cast<QInputMethodEvent__Attribute**>(malloc(sizeof(QInputMethodEvent__Attribute*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QInputMethodEvent::Attribute(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QInputMethodEvent_PreeditString(const QInputMethodEvent* self) {
    const QString _ret = self->preeditString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputMethodEvent_CommitString(const QInputMethodEvent* self) {
    const QString _ret = self->commitString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self) {
    return self->replacementStart();
}

int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self) {
    return self->replacementLength();
}

void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, const libqt_string commitString, int replaceFrom) {
    QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
    self->setCommitString(commitString_QString, static_cast<int>(replaceFrom));
}

void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, const libqt_string commitString, int replaceFrom, int replaceLength) {
    QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
    self->setCommitString(commitString_QString, static_cast<int>(replaceFrom), static_cast<int>(replaceLength));
}

// Derived class handler implementation
QInputMethodEvent* QInputMethodEvent_Clone(const QInputMethodEvent* self) {
    auto* vqinputmethodevent = const_cast<VirtualQInputMethodEvent*>(dynamic_cast<const VirtualQInputMethodEvent*>(self));
    if (vqinputmethodevent && vqinputmethodevent->isVirtualQInputMethodEvent) {
        return vqinputmethodevent->clone();
    } else {
        return self->QInputMethodEvent::clone();
    }
}

// Base class handler implementation
QInputMethodEvent* QInputMethodEvent_QBaseClone(const QInputMethodEvent* self) {
    auto* vqinputmethodevent = const_cast<VirtualQInputMethodEvent*>(dynamic_cast<const VirtualQInputMethodEvent*>(self));
    if (vqinputmethodevent && vqinputmethodevent->isVirtualQInputMethodEvent) {
        vqinputmethodevent->setQInputMethodEvent_Clone_IsBase(true);
        return vqinputmethodevent->clone();
    } else {
        return self->QInputMethodEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputMethodEvent_OnClone(const QInputMethodEvent* self, intptr_t slot) {
    auto* vqinputmethodevent = const_cast<VirtualQInputMethodEvent*>(dynamic_cast<const VirtualQInputMethodEvent*>(self));
    if (vqinputmethodevent && vqinputmethodevent->isVirtualQInputMethodEvent) {
        vqinputmethodevent->setQInputMethodEvent_Clone_Callback(reinterpret_cast<VirtualQInputMethodEvent::QInputMethodEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputMethodEvent_SetAccepted(QInputMethodEvent* self, bool accepted) {
    auto* vqinputmethodevent = dynamic_cast<VirtualQInputMethodEvent*>(self);
    if (vqinputmethodevent && vqinputmethodevent->isVirtualQInputMethodEvent) {
        vqinputmethodevent->setAccepted(accepted);
    } else {
        self->QInputMethodEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QInputMethodEvent_QBaseSetAccepted(QInputMethodEvent* self, bool accepted) {
    auto* vqinputmethodevent = dynamic_cast<VirtualQInputMethodEvent*>(self);
    if (vqinputmethodevent && vqinputmethodevent->isVirtualQInputMethodEvent) {
        vqinputmethodevent->setQInputMethodEvent_SetAccepted_IsBase(true);
        vqinputmethodevent->setAccepted(accepted);
    } else {
        self->QInputMethodEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputMethodEvent_OnSetAccepted(QInputMethodEvent* self, intptr_t slot) {
    auto* vqinputmethodevent = dynamic_cast<VirtualQInputMethodEvent*>(self);
    if (vqinputmethodevent && vqinputmethodevent->isVirtualQInputMethodEvent) {
        vqinputmethodevent->setQInputMethodEvent_SetAccepted_Callback(reinterpret_cast<VirtualQInputMethodEvent::QInputMethodEvent_SetAccepted_Callback>(slot));
    }
}

void QInputMethodEvent_Delete(QInputMethodEvent* self) {
    delete self;
}

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries) {
    return new VirtualQInputMethodQueryEvent(static_cast<Qt::InputMethodQueries>(queries));
}

int QInputMethodQueryEvent_Queries(const QInputMethodQueryEvent* self) {
    return static_cast<int>(self->queries());
}

void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, int query, const QVariant* value) {
    self->setValue(static_cast<Qt::InputMethodQuery>(query), *value);
}

QVariant* QInputMethodQueryEvent_Value(const QInputMethodQueryEvent* self, int query) {
    return new QVariant(self->value(static_cast<Qt::InputMethodQuery>(query)));
}

// Derived class handler implementation
QInputMethodQueryEvent* QInputMethodQueryEvent_Clone(const QInputMethodQueryEvent* self) {
    auto* vqinputmethodqueryevent = const_cast<VirtualQInputMethodQueryEvent*>(dynamic_cast<const VirtualQInputMethodQueryEvent*>(self));
    if (vqinputmethodqueryevent && vqinputmethodqueryevent->isVirtualQInputMethodQueryEvent) {
        return vqinputmethodqueryevent->clone();
    } else {
        return self->QInputMethodQueryEvent::clone();
    }
}

// Base class handler implementation
QInputMethodQueryEvent* QInputMethodQueryEvent_QBaseClone(const QInputMethodQueryEvent* self) {
    auto* vqinputmethodqueryevent = const_cast<VirtualQInputMethodQueryEvent*>(dynamic_cast<const VirtualQInputMethodQueryEvent*>(self));
    if (vqinputmethodqueryevent && vqinputmethodqueryevent->isVirtualQInputMethodQueryEvent) {
        vqinputmethodqueryevent->setQInputMethodQueryEvent_Clone_IsBase(true);
        return vqinputmethodqueryevent->clone();
    } else {
        return self->QInputMethodQueryEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputMethodQueryEvent_OnClone(const QInputMethodQueryEvent* self, intptr_t slot) {
    auto* vqinputmethodqueryevent = const_cast<VirtualQInputMethodQueryEvent*>(dynamic_cast<const VirtualQInputMethodQueryEvent*>(self));
    if (vqinputmethodqueryevent && vqinputmethodqueryevent->isVirtualQInputMethodQueryEvent) {
        vqinputmethodqueryevent->setQInputMethodQueryEvent_Clone_Callback(reinterpret_cast<VirtualQInputMethodQueryEvent::QInputMethodQueryEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputMethodQueryEvent_SetAccepted(QInputMethodQueryEvent* self, bool accepted) {
    auto* vqinputmethodqueryevent = dynamic_cast<VirtualQInputMethodQueryEvent*>(self);
    if (vqinputmethodqueryevent && vqinputmethodqueryevent->isVirtualQInputMethodQueryEvent) {
        vqinputmethodqueryevent->setAccepted(accepted);
    } else {
        self->QInputMethodQueryEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QInputMethodQueryEvent_QBaseSetAccepted(QInputMethodQueryEvent* self, bool accepted) {
    auto* vqinputmethodqueryevent = dynamic_cast<VirtualQInputMethodQueryEvent*>(self);
    if (vqinputmethodqueryevent && vqinputmethodqueryevent->isVirtualQInputMethodQueryEvent) {
        vqinputmethodqueryevent->setQInputMethodQueryEvent_SetAccepted_IsBase(true);
        vqinputmethodqueryevent->setAccepted(accepted);
    } else {
        self->QInputMethodQueryEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputMethodQueryEvent_OnSetAccepted(QInputMethodQueryEvent* self, intptr_t slot) {
    auto* vqinputmethodqueryevent = dynamic_cast<VirtualQInputMethodQueryEvent*>(self);
    if (vqinputmethodqueryevent && vqinputmethodqueryevent->isVirtualQInputMethodQueryEvent) {
        vqinputmethodqueryevent->setQInputMethodQueryEvent_SetAccepted_Callback(reinterpret_cast<VirtualQInputMethodQueryEvent::QInputMethodQueryEvent_SetAccepted_Callback>(slot));
    }
}

void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self) {
    delete self;
}

QDropEvent* QDropEvent_new(const QPointF* pos, int actions, const QMimeData* data, int buttons, int modifiers) {
    return new VirtualQDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDropEvent* QDropEvent_new2(const QPointF* pos, int actions, const QMimeData* data, int buttons, int modifiers, int typeVal) {
    return new VirtualQDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

QPoint* QDropEvent_Pos(const QDropEvent* self) {
    return new QPoint(self->pos());
}

QPointF* QDropEvent_PosF(const QDropEvent* self) {
    return new QPointF(self->posF());
}

int QDropEvent_MouseButtons(const QDropEvent* self) {
    return static_cast<int>(self->mouseButtons());
}

int QDropEvent_KeyboardModifiers(const QDropEvent* self) {
    return static_cast<int>(self->keyboardModifiers());
}

QPointF* QDropEvent_Position(const QDropEvent* self) {
    return new QPointF(self->position());
}

int QDropEvent_Buttons(const QDropEvent* self) {
    return static_cast<int>(self->buttons());
}

int QDropEvent_Modifiers(const QDropEvent* self) {
    return static_cast<int>(self->modifiers());
}

int QDropEvent_PossibleActions(const QDropEvent* self) {
    return static_cast<int>(self->possibleActions());
}

int QDropEvent_ProposedAction(const QDropEvent* self) {
    return static_cast<int>(self->proposedAction());
}

void QDropEvent_AcceptProposedAction(QDropEvent* self) {
    self->acceptProposedAction();
}

int QDropEvent_DropAction(const QDropEvent* self) {
    return static_cast<int>(self->dropAction());
}

void QDropEvent_SetDropAction(QDropEvent* self, int action) {
    self->setDropAction(static_cast<Qt::DropAction>(action));
}

QObject* QDropEvent_Source(const QDropEvent* self) {
    return self->source();
}

QMimeData* QDropEvent_MimeData(const QDropEvent* self) {
    return (QMimeData*)self->mimeData();
}

// Derived class handler implementation
QDropEvent* QDropEvent_Clone(const QDropEvent* self) {
    auto* vqdropevent = const_cast<VirtualQDropEvent*>(dynamic_cast<const VirtualQDropEvent*>(self));
    if (vqdropevent && vqdropevent->isVirtualQDropEvent) {
        return vqdropevent->clone();
    } else {
        return self->QDropEvent::clone();
    }
}

// Base class handler implementation
QDropEvent* QDropEvent_QBaseClone(const QDropEvent* self) {
    auto* vqdropevent = const_cast<VirtualQDropEvent*>(dynamic_cast<const VirtualQDropEvent*>(self));
    if (vqdropevent && vqdropevent->isVirtualQDropEvent) {
        vqdropevent->setQDropEvent_Clone_IsBase(true);
        return vqdropevent->clone();
    } else {
        return self->QDropEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDropEvent_OnClone(const QDropEvent* self, intptr_t slot) {
    auto* vqdropevent = const_cast<VirtualQDropEvent*>(dynamic_cast<const VirtualQDropEvent*>(self));
    if (vqdropevent && vqdropevent->isVirtualQDropEvent) {
        vqdropevent->setQDropEvent_Clone_Callback(reinterpret_cast<VirtualQDropEvent::QDropEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDropEvent_SetAccepted(QDropEvent* self, bool accepted) {
    auto* vqdropevent = dynamic_cast<VirtualQDropEvent*>(self);
    if (vqdropevent && vqdropevent->isVirtualQDropEvent) {
        vqdropevent->setAccepted(accepted);
    } else {
        self->QDropEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QDropEvent_QBaseSetAccepted(QDropEvent* self, bool accepted) {
    auto* vqdropevent = dynamic_cast<VirtualQDropEvent*>(self);
    if (vqdropevent && vqdropevent->isVirtualQDropEvent) {
        vqdropevent->setQDropEvent_SetAccepted_IsBase(true);
        vqdropevent->setAccepted(accepted);
    } else {
        self->QDropEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDropEvent_OnSetAccepted(QDropEvent* self, intptr_t slot) {
    auto* vqdropevent = dynamic_cast<VirtualQDropEvent*>(self);
    if (vqdropevent && vqdropevent->isVirtualQDropEvent) {
        vqdropevent->setQDropEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDropEvent::QDropEvent_SetAccepted_Callback>(slot));
    }
}

void QDropEvent_Delete(QDropEvent* self) {
    delete self;
}

QDragMoveEvent* QDragMoveEvent_new(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers) {
    return new VirtualQDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDragMoveEvent* QDragMoveEvent_new2(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers, int typeVal) {
    return new VirtualQDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

QRect* QDragMoveEvent_AnswerRect(const QDragMoveEvent* self) {
    return new QRect(self->answerRect());
}

void QDragMoveEvent_Accept(QDragMoveEvent* self) {
    self->accept();
}

void QDragMoveEvent_Ignore(QDragMoveEvent* self) {
    self->ignore();
}

void QDragMoveEvent_Accept2(QDragMoveEvent* self, const QRect* r) {
    self->accept(*r);
}

void QDragMoveEvent_Ignore2(QDragMoveEvent* self, const QRect* r) {
    self->ignore(*r);
}

// Derived class handler implementation
QDragMoveEvent* QDragMoveEvent_Clone(const QDragMoveEvent* self) {
    auto* vqdragmoveevent = const_cast<VirtualQDragMoveEvent*>(dynamic_cast<const VirtualQDragMoveEvent*>(self));
    if (vqdragmoveevent && vqdragmoveevent->isVirtualQDragMoveEvent) {
        return vqdragmoveevent->clone();
    } else {
        return self->QDragMoveEvent::clone();
    }
}

// Base class handler implementation
QDragMoveEvent* QDragMoveEvent_QBaseClone(const QDragMoveEvent* self) {
    auto* vqdragmoveevent = const_cast<VirtualQDragMoveEvent*>(dynamic_cast<const VirtualQDragMoveEvent*>(self));
    if (vqdragmoveevent && vqdragmoveevent->isVirtualQDragMoveEvent) {
        vqdragmoveevent->setQDragMoveEvent_Clone_IsBase(true);
        return vqdragmoveevent->clone();
    } else {
        return self->QDragMoveEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDragMoveEvent_OnClone(const QDragMoveEvent* self, intptr_t slot) {
    auto* vqdragmoveevent = const_cast<VirtualQDragMoveEvent*>(dynamic_cast<const VirtualQDragMoveEvent*>(self));
    if (vqdragmoveevent && vqdragmoveevent->isVirtualQDragMoveEvent) {
        vqdragmoveevent->setQDragMoveEvent_Clone_Callback(reinterpret_cast<VirtualQDragMoveEvent::QDragMoveEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDragMoveEvent_SetAccepted(QDragMoveEvent* self, bool accepted) {
    auto* vqdragmoveevent = dynamic_cast<VirtualQDragMoveEvent*>(self);
    if (vqdragmoveevent && vqdragmoveevent->isVirtualQDragMoveEvent) {
        vqdragmoveevent->setAccepted(accepted);
    } else {
        self->QDragMoveEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QDragMoveEvent_QBaseSetAccepted(QDragMoveEvent* self, bool accepted) {
    auto* vqdragmoveevent = dynamic_cast<VirtualQDragMoveEvent*>(self);
    if (vqdragmoveevent && vqdragmoveevent->isVirtualQDragMoveEvent) {
        vqdragmoveevent->setQDragMoveEvent_SetAccepted_IsBase(true);
        vqdragmoveevent->setAccepted(accepted);
    } else {
        self->QDragMoveEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDragMoveEvent_OnSetAccepted(QDragMoveEvent* self, intptr_t slot) {
    auto* vqdragmoveevent = dynamic_cast<VirtualQDragMoveEvent*>(self);
    if (vqdragmoveevent && vqdragmoveevent->isVirtualQDragMoveEvent) {
        vqdragmoveevent->setQDragMoveEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDragMoveEvent::QDragMoveEvent_SetAccepted_Callback>(slot));
    }
}

void QDragMoveEvent_Delete(QDragMoveEvent* self) {
    delete self;
}

QDragEnterEvent* QDragEnterEvent_new(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers) {
    return new VirtualQDragEnterEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

// Derived class handler implementation
QDragEnterEvent* QDragEnterEvent_Clone(const QDragEnterEvent* self) {
    auto* vqdragenterevent = const_cast<VirtualQDragEnterEvent*>(dynamic_cast<const VirtualQDragEnterEvent*>(self));
    if (vqdragenterevent && vqdragenterevent->isVirtualQDragEnterEvent) {
        return vqdragenterevent->clone();
    } else {
        return self->QDragEnterEvent::clone();
    }
}

// Base class handler implementation
QDragEnterEvent* QDragEnterEvent_QBaseClone(const QDragEnterEvent* self) {
    auto* vqdragenterevent = const_cast<VirtualQDragEnterEvent*>(dynamic_cast<const VirtualQDragEnterEvent*>(self));
    if (vqdragenterevent && vqdragenterevent->isVirtualQDragEnterEvent) {
        vqdragenterevent->setQDragEnterEvent_Clone_IsBase(true);
        return vqdragenterevent->clone();
    } else {
        return self->QDragEnterEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDragEnterEvent_OnClone(const QDragEnterEvent* self, intptr_t slot) {
    auto* vqdragenterevent = const_cast<VirtualQDragEnterEvent*>(dynamic_cast<const VirtualQDragEnterEvent*>(self));
    if (vqdragenterevent && vqdragenterevent->isVirtualQDragEnterEvent) {
        vqdragenterevent->setQDragEnterEvent_Clone_Callback(reinterpret_cast<VirtualQDragEnterEvent::QDragEnterEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDragEnterEvent_SetAccepted(QDragEnterEvent* self, bool accepted) {
    auto* vqdragenterevent = dynamic_cast<VirtualQDragEnterEvent*>(self);
    if (vqdragenterevent && vqdragenterevent->isVirtualQDragEnterEvent) {
        vqdragenterevent->setAccepted(accepted);
    } else {
        self->QDragEnterEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QDragEnterEvent_QBaseSetAccepted(QDragEnterEvent* self, bool accepted) {
    auto* vqdragenterevent = dynamic_cast<VirtualQDragEnterEvent*>(self);
    if (vqdragenterevent && vqdragenterevent->isVirtualQDragEnterEvent) {
        vqdragenterevent->setQDragEnterEvent_SetAccepted_IsBase(true);
        vqdragenterevent->setAccepted(accepted);
    } else {
        self->QDragEnterEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDragEnterEvent_OnSetAccepted(QDragEnterEvent* self, intptr_t slot) {
    auto* vqdragenterevent = dynamic_cast<VirtualQDragEnterEvent*>(self);
    if (vqdragenterevent && vqdragenterevent->isVirtualQDragEnterEvent) {
        vqdragenterevent->setQDragEnterEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDragEnterEvent::QDragEnterEvent_SetAccepted_Callback>(slot));
    }
}

void QDragEnterEvent_Delete(QDragEnterEvent* self) {
    delete self;
}

QDragLeaveEvent* QDragLeaveEvent_new() {
    return new VirtualQDragLeaveEvent();
}

// Derived class handler implementation
QDragLeaveEvent* QDragLeaveEvent_Clone(const QDragLeaveEvent* self) {
    auto* vqdragleaveevent = const_cast<VirtualQDragLeaveEvent*>(dynamic_cast<const VirtualQDragLeaveEvent*>(self));
    if (vqdragleaveevent && vqdragleaveevent->isVirtualQDragLeaveEvent) {
        return vqdragleaveevent->clone();
    } else {
        return self->QDragLeaveEvent::clone();
    }
}

// Base class handler implementation
QDragLeaveEvent* QDragLeaveEvent_QBaseClone(const QDragLeaveEvent* self) {
    auto* vqdragleaveevent = const_cast<VirtualQDragLeaveEvent*>(dynamic_cast<const VirtualQDragLeaveEvent*>(self));
    if (vqdragleaveevent && vqdragleaveevent->isVirtualQDragLeaveEvent) {
        vqdragleaveevent->setQDragLeaveEvent_Clone_IsBase(true);
        return vqdragleaveevent->clone();
    } else {
        return self->QDragLeaveEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDragLeaveEvent_OnClone(const QDragLeaveEvent* self, intptr_t slot) {
    auto* vqdragleaveevent = const_cast<VirtualQDragLeaveEvent*>(dynamic_cast<const VirtualQDragLeaveEvent*>(self));
    if (vqdragleaveevent && vqdragleaveevent->isVirtualQDragLeaveEvent) {
        vqdragleaveevent->setQDragLeaveEvent_Clone_Callback(reinterpret_cast<VirtualQDragLeaveEvent::QDragLeaveEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDragLeaveEvent_SetAccepted(QDragLeaveEvent* self, bool accepted) {
    auto* vqdragleaveevent = dynamic_cast<VirtualQDragLeaveEvent*>(self);
    if (vqdragleaveevent && vqdragleaveevent->isVirtualQDragLeaveEvent) {
        vqdragleaveevent->setAccepted(accepted);
    } else {
        self->QDragLeaveEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QDragLeaveEvent_QBaseSetAccepted(QDragLeaveEvent* self, bool accepted) {
    auto* vqdragleaveevent = dynamic_cast<VirtualQDragLeaveEvent*>(self);
    if (vqdragleaveevent && vqdragleaveevent->isVirtualQDragLeaveEvent) {
        vqdragleaveevent->setQDragLeaveEvent_SetAccepted_IsBase(true);
        vqdragleaveevent->setAccepted(accepted);
    } else {
        self->QDragLeaveEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDragLeaveEvent_OnSetAccepted(QDragLeaveEvent* self, intptr_t slot) {
    auto* vqdragleaveevent = dynamic_cast<VirtualQDragLeaveEvent*>(self);
    if (vqdragleaveevent && vqdragleaveevent->isVirtualQDragLeaveEvent) {
        vqdragleaveevent->setQDragLeaveEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDragLeaveEvent::QDragLeaveEvent_SetAccepted_Callback>(slot));
    }
}

void QDragLeaveEvent_Delete(QDragLeaveEvent* self) {
    delete self;
}

QHelpEvent* QHelpEvent_new(int typeVal, const QPoint* pos, const QPoint* globalPos) {
    return new VirtualQHelpEvent(static_cast<QEvent::Type>(typeVal), *pos, *globalPos);
}

int QHelpEvent_X(const QHelpEvent* self) {
    return self->x();
}

int QHelpEvent_Y(const QHelpEvent* self) {
    return self->y();
}

int QHelpEvent_GlobalX(const QHelpEvent* self) {
    return self->globalX();
}

int QHelpEvent_GlobalY(const QHelpEvent* self) {
    return self->globalY();
}

QPoint* QHelpEvent_Pos(const QHelpEvent* self) {
    const QPoint& _ret = self->pos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

QPoint* QHelpEvent_GlobalPos(const QHelpEvent* self) {
    const QPoint& _ret = self->globalPos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

// Derived class handler implementation
QHelpEvent* QHelpEvent_Clone(const QHelpEvent* self) {
    auto* vqhelpevent = const_cast<VirtualQHelpEvent*>(dynamic_cast<const VirtualQHelpEvent*>(self));
    if (vqhelpevent && vqhelpevent->isVirtualQHelpEvent) {
        return vqhelpevent->clone();
    } else {
        return self->QHelpEvent::clone();
    }
}

// Base class handler implementation
QHelpEvent* QHelpEvent_QBaseClone(const QHelpEvent* self) {
    auto* vqhelpevent = const_cast<VirtualQHelpEvent*>(dynamic_cast<const VirtualQHelpEvent*>(self));
    if (vqhelpevent && vqhelpevent->isVirtualQHelpEvent) {
        vqhelpevent->setQHelpEvent_Clone_IsBase(true);
        return vqhelpevent->clone();
    } else {
        return self->QHelpEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QHelpEvent_OnClone(const QHelpEvent* self, intptr_t slot) {
    auto* vqhelpevent = const_cast<VirtualQHelpEvent*>(dynamic_cast<const VirtualQHelpEvent*>(self));
    if (vqhelpevent && vqhelpevent->isVirtualQHelpEvent) {
        vqhelpevent->setQHelpEvent_Clone_Callback(reinterpret_cast<VirtualQHelpEvent::QHelpEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QHelpEvent_SetAccepted(QHelpEvent* self, bool accepted) {
    auto* vqhelpevent = dynamic_cast<VirtualQHelpEvent*>(self);
    if (vqhelpevent && vqhelpevent->isVirtualQHelpEvent) {
        vqhelpevent->setAccepted(accepted);
    } else {
        self->QHelpEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QHelpEvent_QBaseSetAccepted(QHelpEvent* self, bool accepted) {
    auto* vqhelpevent = dynamic_cast<VirtualQHelpEvent*>(self);
    if (vqhelpevent && vqhelpevent->isVirtualQHelpEvent) {
        vqhelpevent->setQHelpEvent_SetAccepted_IsBase(true);
        vqhelpevent->setAccepted(accepted);
    } else {
        self->QHelpEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QHelpEvent_OnSetAccepted(QHelpEvent* self, intptr_t slot) {
    auto* vqhelpevent = dynamic_cast<VirtualQHelpEvent*>(self);
    if (vqhelpevent && vqhelpevent->isVirtualQHelpEvent) {
        vqhelpevent->setQHelpEvent_SetAccepted_Callback(reinterpret_cast<VirtualQHelpEvent::QHelpEvent_SetAccepted_Callback>(slot));
    }
}

void QHelpEvent_Delete(QHelpEvent* self) {
    delete self;
}

QStatusTipEvent* QStatusTipEvent_new(const libqt_string tip) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    return new VirtualQStatusTipEvent(tip_QString);
}

libqt_string QStatusTipEvent_Tip(const QStatusTipEvent* self) {
    QString _ret = self->tip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QStatusTipEvent* QStatusTipEvent_Clone(const QStatusTipEvent* self) {
    auto* vqstatustipevent = const_cast<VirtualQStatusTipEvent*>(dynamic_cast<const VirtualQStatusTipEvent*>(self));
    if (vqstatustipevent && vqstatustipevent->isVirtualQStatusTipEvent) {
        return vqstatustipevent->clone();
    } else {
        return self->QStatusTipEvent::clone();
    }
}

// Base class handler implementation
QStatusTipEvent* QStatusTipEvent_QBaseClone(const QStatusTipEvent* self) {
    auto* vqstatustipevent = const_cast<VirtualQStatusTipEvent*>(dynamic_cast<const VirtualQStatusTipEvent*>(self));
    if (vqstatustipevent && vqstatustipevent->isVirtualQStatusTipEvent) {
        vqstatustipevent->setQStatusTipEvent_Clone_IsBase(true);
        return vqstatustipevent->clone();
    } else {
        return self->QStatusTipEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusTipEvent_OnClone(const QStatusTipEvent* self, intptr_t slot) {
    auto* vqstatustipevent = const_cast<VirtualQStatusTipEvent*>(dynamic_cast<const VirtualQStatusTipEvent*>(self));
    if (vqstatustipevent && vqstatustipevent->isVirtualQStatusTipEvent) {
        vqstatustipevent->setQStatusTipEvent_Clone_Callback(reinterpret_cast<VirtualQStatusTipEvent::QStatusTipEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusTipEvent_SetAccepted(QStatusTipEvent* self, bool accepted) {
    auto* vqstatustipevent = dynamic_cast<VirtualQStatusTipEvent*>(self);
    if (vqstatustipevent && vqstatustipevent->isVirtualQStatusTipEvent) {
        vqstatustipevent->setAccepted(accepted);
    } else {
        self->QStatusTipEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QStatusTipEvent_QBaseSetAccepted(QStatusTipEvent* self, bool accepted) {
    auto* vqstatustipevent = dynamic_cast<VirtualQStatusTipEvent*>(self);
    if (vqstatustipevent && vqstatustipevent->isVirtualQStatusTipEvent) {
        vqstatustipevent->setQStatusTipEvent_SetAccepted_IsBase(true);
        vqstatustipevent->setAccepted(accepted);
    } else {
        self->QStatusTipEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusTipEvent_OnSetAccepted(QStatusTipEvent* self, intptr_t slot) {
    auto* vqstatustipevent = dynamic_cast<VirtualQStatusTipEvent*>(self);
    if (vqstatustipevent && vqstatustipevent->isVirtualQStatusTipEvent) {
        vqstatustipevent->setQStatusTipEvent_SetAccepted_Callback(reinterpret_cast<VirtualQStatusTipEvent::QStatusTipEvent_SetAccepted_Callback>(slot));
    }
}

void QStatusTipEvent_Delete(QStatusTipEvent* self) {
    delete self;
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(const libqt_string href) {
    QString href_QString = QString::fromUtf8(href.data, href.len);
    return new VirtualQWhatsThisClickedEvent(href_QString);
}

libqt_string QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self) {
    QString _ret = self->href();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QWhatsThisClickedEvent* QWhatsThisClickedEvent_Clone(const QWhatsThisClickedEvent* self) {
    auto* vqwhatsthisclickedevent = const_cast<VirtualQWhatsThisClickedEvent*>(dynamic_cast<const VirtualQWhatsThisClickedEvent*>(self));
    if (vqwhatsthisclickedevent && vqwhatsthisclickedevent->isVirtualQWhatsThisClickedEvent) {
        return vqwhatsthisclickedevent->clone();
    } else {
        return self->QWhatsThisClickedEvent::clone();
    }
}

// Base class handler implementation
QWhatsThisClickedEvent* QWhatsThisClickedEvent_QBaseClone(const QWhatsThisClickedEvent* self) {
    auto* vqwhatsthisclickedevent = const_cast<VirtualQWhatsThisClickedEvent*>(dynamic_cast<const VirtualQWhatsThisClickedEvent*>(self));
    if (vqwhatsthisclickedevent && vqwhatsthisclickedevent->isVirtualQWhatsThisClickedEvent) {
        vqwhatsthisclickedevent->setQWhatsThisClickedEvent_Clone_IsBase(true);
        return vqwhatsthisclickedevent->clone();
    } else {
        return self->QWhatsThisClickedEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QWhatsThisClickedEvent_OnClone(const QWhatsThisClickedEvent* self, intptr_t slot) {
    auto* vqwhatsthisclickedevent = const_cast<VirtualQWhatsThisClickedEvent*>(dynamic_cast<const VirtualQWhatsThisClickedEvent*>(self));
    if (vqwhatsthisclickedevent && vqwhatsthisclickedevent->isVirtualQWhatsThisClickedEvent) {
        vqwhatsthisclickedevent->setQWhatsThisClickedEvent_Clone_Callback(reinterpret_cast<VirtualQWhatsThisClickedEvent::QWhatsThisClickedEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QWhatsThisClickedEvent_SetAccepted(QWhatsThisClickedEvent* self, bool accepted) {
    auto* vqwhatsthisclickedevent = dynamic_cast<VirtualQWhatsThisClickedEvent*>(self);
    if (vqwhatsthisclickedevent && vqwhatsthisclickedevent->isVirtualQWhatsThisClickedEvent) {
        vqwhatsthisclickedevent->setAccepted(accepted);
    } else {
        self->QWhatsThisClickedEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QWhatsThisClickedEvent_QBaseSetAccepted(QWhatsThisClickedEvent* self, bool accepted) {
    auto* vqwhatsthisclickedevent = dynamic_cast<VirtualQWhatsThisClickedEvent*>(self);
    if (vqwhatsthisclickedevent && vqwhatsthisclickedevent->isVirtualQWhatsThisClickedEvent) {
        vqwhatsthisclickedevent->setQWhatsThisClickedEvent_SetAccepted_IsBase(true);
        vqwhatsthisclickedevent->setAccepted(accepted);
    } else {
        self->QWhatsThisClickedEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QWhatsThisClickedEvent_OnSetAccepted(QWhatsThisClickedEvent* self, intptr_t slot) {
    auto* vqwhatsthisclickedevent = dynamic_cast<VirtualQWhatsThisClickedEvent*>(self);
    if (vqwhatsthisclickedevent && vqwhatsthisclickedevent->isVirtualQWhatsThisClickedEvent) {
        vqwhatsthisclickedevent->setQWhatsThisClickedEvent_SetAccepted_Callback(reinterpret_cast<VirtualQWhatsThisClickedEvent::QWhatsThisClickedEvent_SetAccepted_Callback>(slot));
    }
}

void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self) {
    delete self;
}

QActionEvent* QActionEvent_new(int typeVal, QAction* action) {
    return new VirtualQActionEvent(static_cast<int>(typeVal), action);
}

QActionEvent* QActionEvent_new2(int typeVal, QAction* action, QAction* before) {
    return new VirtualQActionEvent(static_cast<int>(typeVal), action, before);
}

QAction* QActionEvent_Action(const QActionEvent* self) {
    return self->action();
}

QAction* QActionEvent_Before(const QActionEvent* self) {
    return self->before();
}

// Derived class handler implementation
QActionEvent* QActionEvent_Clone(const QActionEvent* self) {
    auto* vqactionevent = const_cast<VirtualQActionEvent*>(dynamic_cast<const VirtualQActionEvent*>(self));
    if (vqactionevent && vqactionevent->isVirtualQActionEvent) {
        return vqactionevent->clone();
    } else {
        return self->QActionEvent::clone();
    }
}

// Base class handler implementation
QActionEvent* QActionEvent_QBaseClone(const QActionEvent* self) {
    auto* vqactionevent = const_cast<VirtualQActionEvent*>(dynamic_cast<const VirtualQActionEvent*>(self));
    if (vqactionevent && vqactionevent->isVirtualQActionEvent) {
        vqactionevent->setQActionEvent_Clone_IsBase(true);
        return vqactionevent->clone();
    } else {
        return self->QActionEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QActionEvent_OnClone(const QActionEvent* self, intptr_t slot) {
    auto* vqactionevent = const_cast<VirtualQActionEvent*>(dynamic_cast<const VirtualQActionEvent*>(self));
    if (vqactionevent && vqactionevent->isVirtualQActionEvent) {
        vqactionevent->setQActionEvent_Clone_Callback(reinterpret_cast<VirtualQActionEvent::QActionEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QActionEvent_SetAccepted(QActionEvent* self, bool accepted) {
    auto* vqactionevent = dynamic_cast<VirtualQActionEvent*>(self);
    if (vqactionevent && vqactionevent->isVirtualQActionEvent) {
        vqactionevent->setAccepted(accepted);
    } else {
        self->QActionEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QActionEvent_QBaseSetAccepted(QActionEvent* self, bool accepted) {
    auto* vqactionevent = dynamic_cast<VirtualQActionEvent*>(self);
    if (vqactionevent && vqactionevent->isVirtualQActionEvent) {
        vqactionevent->setQActionEvent_SetAccepted_IsBase(true);
        vqactionevent->setAccepted(accepted);
    } else {
        self->QActionEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionEvent_OnSetAccepted(QActionEvent* self, intptr_t slot) {
    auto* vqactionevent = dynamic_cast<VirtualQActionEvent*>(self);
    if (vqactionevent && vqactionevent->isVirtualQActionEvent) {
        vqactionevent->setQActionEvent_SetAccepted_Callback(reinterpret_cast<VirtualQActionEvent::QActionEvent_SetAccepted_Callback>(slot));
    }
}

void QActionEvent_Delete(QActionEvent* self) {
    delete self;
}

QFileOpenEvent* QFileOpenEvent_new(const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new VirtualQFileOpenEvent(file_QString);
}

QFileOpenEvent* QFileOpenEvent_new2(const QUrl* url) {
    return new VirtualQFileOpenEvent(*url);
}

libqt_string QFileOpenEvent_File(const QFileOpenEvent* self) {
    QString _ret = self->file();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self) {
    return new QUrl(self->url());
}

bool QFileOpenEvent_OpenFile(const QFileOpenEvent* self, QFile* file, int flags) {
    return self->openFile(*file, static_cast<QIODevice::OpenMode>(flags));
}

// Derived class handler implementation
QFileOpenEvent* QFileOpenEvent_Clone(const QFileOpenEvent* self) {
    auto* vqfileopenevent = const_cast<VirtualQFileOpenEvent*>(dynamic_cast<const VirtualQFileOpenEvent*>(self));
    if (vqfileopenevent && vqfileopenevent->isVirtualQFileOpenEvent) {
        return vqfileopenevent->clone();
    } else {
        return self->QFileOpenEvent::clone();
    }
}

// Base class handler implementation
QFileOpenEvent* QFileOpenEvent_QBaseClone(const QFileOpenEvent* self) {
    auto* vqfileopenevent = const_cast<VirtualQFileOpenEvent*>(dynamic_cast<const VirtualQFileOpenEvent*>(self));
    if (vqfileopenevent && vqfileopenevent->isVirtualQFileOpenEvent) {
        vqfileopenevent->setQFileOpenEvent_Clone_IsBase(true);
        return vqfileopenevent->clone();
    } else {
        return self->QFileOpenEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileOpenEvent_OnClone(const QFileOpenEvent* self, intptr_t slot) {
    auto* vqfileopenevent = const_cast<VirtualQFileOpenEvent*>(dynamic_cast<const VirtualQFileOpenEvent*>(self));
    if (vqfileopenevent && vqfileopenevent->isVirtualQFileOpenEvent) {
        vqfileopenevent->setQFileOpenEvent_Clone_Callback(reinterpret_cast<VirtualQFileOpenEvent::QFileOpenEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileOpenEvent_SetAccepted(QFileOpenEvent* self, bool accepted) {
    auto* vqfileopenevent = dynamic_cast<VirtualQFileOpenEvent*>(self);
    if (vqfileopenevent && vqfileopenevent->isVirtualQFileOpenEvent) {
        vqfileopenevent->setAccepted(accepted);
    } else {
        self->QFileOpenEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QFileOpenEvent_QBaseSetAccepted(QFileOpenEvent* self, bool accepted) {
    auto* vqfileopenevent = dynamic_cast<VirtualQFileOpenEvent*>(self);
    if (vqfileopenevent && vqfileopenevent->isVirtualQFileOpenEvent) {
        vqfileopenevent->setQFileOpenEvent_SetAccepted_IsBase(true);
        vqfileopenevent->setAccepted(accepted);
    } else {
        self->QFileOpenEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileOpenEvent_OnSetAccepted(QFileOpenEvent* self, intptr_t slot) {
    auto* vqfileopenevent = dynamic_cast<VirtualQFileOpenEvent*>(self);
    if (vqfileopenevent && vqfileopenevent->isVirtualQFileOpenEvent) {
        vqfileopenevent->setQFileOpenEvent_SetAccepted_Callback(reinterpret_cast<VirtualQFileOpenEvent::QFileOpenEvent_SetAccepted_Callback>(slot));
    }
}

void QFileOpenEvent_Delete(QFileOpenEvent* self) {
    delete self;
}

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t) {
    return new VirtualQToolBarChangeEvent(t);
}

bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self) {
    return self->toggle();
}

// Derived class handler implementation
QToolBarChangeEvent* QToolBarChangeEvent_Clone(const QToolBarChangeEvent* self) {
    auto* vqtoolbarchangeevent = const_cast<VirtualQToolBarChangeEvent*>(dynamic_cast<const VirtualQToolBarChangeEvent*>(self));
    if (vqtoolbarchangeevent && vqtoolbarchangeevent->isVirtualQToolBarChangeEvent) {
        return vqtoolbarchangeevent->clone();
    } else {
        return self->QToolBarChangeEvent::clone();
    }
}

// Base class handler implementation
QToolBarChangeEvent* QToolBarChangeEvent_QBaseClone(const QToolBarChangeEvent* self) {
    auto* vqtoolbarchangeevent = const_cast<VirtualQToolBarChangeEvent*>(dynamic_cast<const VirtualQToolBarChangeEvent*>(self));
    if (vqtoolbarchangeevent && vqtoolbarchangeevent->isVirtualQToolBarChangeEvent) {
        vqtoolbarchangeevent->setQToolBarChangeEvent_Clone_IsBase(true);
        return vqtoolbarchangeevent->clone();
    } else {
        return self->QToolBarChangeEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBarChangeEvent_OnClone(const QToolBarChangeEvent* self, intptr_t slot) {
    auto* vqtoolbarchangeevent = const_cast<VirtualQToolBarChangeEvent*>(dynamic_cast<const VirtualQToolBarChangeEvent*>(self));
    if (vqtoolbarchangeevent && vqtoolbarchangeevent->isVirtualQToolBarChangeEvent) {
        vqtoolbarchangeevent->setQToolBarChangeEvent_Clone_Callback(reinterpret_cast<VirtualQToolBarChangeEvent::QToolBarChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBarChangeEvent_SetAccepted(QToolBarChangeEvent* self, bool accepted) {
    auto* vqtoolbarchangeevent = dynamic_cast<VirtualQToolBarChangeEvent*>(self);
    if (vqtoolbarchangeevent && vqtoolbarchangeevent->isVirtualQToolBarChangeEvent) {
        vqtoolbarchangeevent->setAccepted(accepted);
    } else {
        self->QToolBarChangeEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QToolBarChangeEvent_QBaseSetAccepted(QToolBarChangeEvent* self, bool accepted) {
    auto* vqtoolbarchangeevent = dynamic_cast<VirtualQToolBarChangeEvent*>(self);
    if (vqtoolbarchangeevent && vqtoolbarchangeevent->isVirtualQToolBarChangeEvent) {
        vqtoolbarchangeevent->setQToolBarChangeEvent_SetAccepted_IsBase(true);
        vqtoolbarchangeevent->setAccepted(accepted);
    } else {
        self->QToolBarChangeEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBarChangeEvent_OnSetAccepted(QToolBarChangeEvent* self, intptr_t slot) {
    auto* vqtoolbarchangeevent = dynamic_cast<VirtualQToolBarChangeEvent*>(self);
    if (vqtoolbarchangeevent && vqtoolbarchangeevent->isVirtualQToolBarChangeEvent) {
        vqtoolbarchangeevent->setQToolBarChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQToolBarChangeEvent::QToolBarChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self) {
    delete self;
}

QShortcutEvent* QShortcutEvent_new(const QKeySequence* key, int id) {
    return new VirtualQShortcutEvent(*key, static_cast<int>(id));
}

QShortcutEvent* QShortcutEvent_new2(const QKeySequence* key) {
    return new VirtualQShortcutEvent(*key);
}

QShortcutEvent* QShortcutEvent_new3(const QKeySequence* key, int id, bool ambiguous) {
    return new VirtualQShortcutEvent(*key, static_cast<int>(id), ambiguous);
}

QShortcutEvent* QShortcutEvent_new4(const QKeySequence* key, const QShortcut* shortcut) {
    return new VirtualQShortcutEvent(*key, shortcut);
}

QShortcutEvent* QShortcutEvent_new5(const QKeySequence* key, const QShortcut* shortcut, bool ambiguous) {
    return new VirtualQShortcutEvent(*key, shortcut, ambiguous);
}

QKeySequence* QShortcutEvent_Key(const QShortcutEvent* self) {
    const QKeySequence& _ret = self->key();
    // Cast returned reference into pointer
    return const_cast<QKeySequence*>(&_ret);
}

int QShortcutEvent_ShortcutId(const QShortcutEvent* self) {
    return self->shortcutId();
}

bool QShortcutEvent_IsAmbiguous(const QShortcutEvent* self) {
    return self->isAmbiguous();
}

// Derived class handler implementation
QShortcutEvent* QShortcutEvent_Clone(const QShortcutEvent* self) {
    auto* vqshortcutevent = const_cast<VirtualQShortcutEvent*>(dynamic_cast<const VirtualQShortcutEvent*>(self));
    if (vqshortcutevent && vqshortcutevent->isVirtualQShortcutEvent) {
        return vqshortcutevent->clone();
    } else {
        return self->QShortcutEvent::clone();
    }
}

// Base class handler implementation
QShortcutEvent* QShortcutEvent_QBaseClone(const QShortcutEvent* self) {
    auto* vqshortcutevent = const_cast<VirtualQShortcutEvent*>(dynamic_cast<const VirtualQShortcutEvent*>(self));
    if (vqshortcutevent && vqshortcutevent->isVirtualQShortcutEvent) {
        vqshortcutevent->setQShortcutEvent_Clone_IsBase(true);
        return vqshortcutevent->clone();
    } else {
        return self->QShortcutEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcutEvent_OnClone(const QShortcutEvent* self, intptr_t slot) {
    auto* vqshortcutevent = const_cast<VirtualQShortcutEvent*>(dynamic_cast<const VirtualQShortcutEvent*>(self));
    if (vqshortcutevent && vqshortcutevent->isVirtualQShortcutEvent) {
        vqshortcutevent->setQShortcutEvent_Clone_Callback(reinterpret_cast<VirtualQShortcutEvent::QShortcutEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QShortcutEvent_SetAccepted(QShortcutEvent* self, bool accepted) {
    auto* vqshortcutevent = dynamic_cast<VirtualQShortcutEvent*>(self);
    if (vqshortcutevent && vqshortcutevent->isVirtualQShortcutEvent) {
        vqshortcutevent->setAccepted(accepted);
    } else {
        self->QShortcutEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QShortcutEvent_QBaseSetAccepted(QShortcutEvent* self, bool accepted) {
    auto* vqshortcutevent = dynamic_cast<VirtualQShortcutEvent*>(self);
    if (vqshortcutevent && vqshortcutevent->isVirtualQShortcutEvent) {
        vqshortcutevent->setQShortcutEvent_SetAccepted_IsBase(true);
        vqshortcutevent->setAccepted(accepted);
    } else {
        self->QShortcutEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcutEvent_OnSetAccepted(QShortcutEvent* self, intptr_t slot) {
    auto* vqshortcutevent = dynamic_cast<VirtualQShortcutEvent*>(self);
    if (vqshortcutevent && vqshortcutevent->isVirtualQShortcutEvent) {
        vqshortcutevent->setQShortcutEvent_SetAccepted_Callback(reinterpret_cast<VirtualQShortcutEvent::QShortcutEvent_SetAccepted_Callback>(slot));
    }
}

void QShortcutEvent_Delete(QShortcutEvent* self) {
    delete self;
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int oldState) {
    return new VirtualQWindowStateChangeEvent(static_cast<Qt::WindowStates>(oldState));
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new2(int oldState, bool isOverride) {
    return new VirtualQWindowStateChangeEvent(static_cast<Qt::WindowStates>(oldState), isOverride);
}

int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self) {
    return static_cast<int>(self->oldState());
}

bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self) {
    return self->isOverride();
}

// Derived class handler implementation
QWindowStateChangeEvent* QWindowStateChangeEvent_Clone(const QWindowStateChangeEvent* self) {
    auto* vqwindowstatechangeevent = const_cast<VirtualQWindowStateChangeEvent*>(dynamic_cast<const VirtualQWindowStateChangeEvent*>(self));
    if (vqwindowstatechangeevent && vqwindowstatechangeevent->isVirtualQWindowStateChangeEvent) {
        return vqwindowstatechangeevent->clone();
    } else {
        return self->QWindowStateChangeEvent::clone();
    }
}

// Base class handler implementation
QWindowStateChangeEvent* QWindowStateChangeEvent_QBaseClone(const QWindowStateChangeEvent* self) {
    auto* vqwindowstatechangeevent = const_cast<VirtualQWindowStateChangeEvent*>(dynamic_cast<const VirtualQWindowStateChangeEvent*>(self));
    if (vqwindowstatechangeevent && vqwindowstatechangeevent->isVirtualQWindowStateChangeEvent) {
        vqwindowstatechangeevent->setQWindowStateChangeEvent_Clone_IsBase(true);
        return vqwindowstatechangeevent->clone();
    } else {
        return self->QWindowStateChangeEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowStateChangeEvent_OnClone(const QWindowStateChangeEvent* self, intptr_t slot) {
    auto* vqwindowstatechangeevent = const_cast<VirtualQWindowStateChangeEvent*>(dynamic_cast<const VirtualQWindowStateChangeEvent*>(self));
    if (vqwindowstatechangeevent && vqwindowstatechangeevent->isVirtualQWindowStateChangeEvent) {
        vqwindowstatechangeevent->setQWindowStateChangeEvent_Clone_Callback(reinterpret_cast<VirtualQWindowStateChangeEvent::QWindowStateChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindowStateChangeEvent_SetAccepted(QWindowStateChangeEvent* self, bool accepted) {
    auto* vqwindowstatechangeevent = dynamic_cast<VirtualQWindowStateChangeEvent*>(self);
    if (vqwindowstatechangeevent && vqwindowstatechangeevent->isVirtualQWindowStateChangeEvent) {
        vqwindowstatechangeevent->setAccepted(accepted);
    } else {
        self->QWindowStateChangeEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QWindowStateChangeEvent_QBaseSetAccepted(QWindowStateChangeEvent* self, bool accepted) {
    auto* vqwindowstatechangeevent = dynamic_cast<VirtualQWindowStateChangeEvent*>(self);
    if (vqwindowstatechangeevent && vqwindowstatechangeevent->isVirtualQWindowStateChangeEvent) {
        vqwindowstatechangeevent->setQWindowStateChangeEvent_SetAccepted_IsBase(true);
        vqwindowstatechangeevent->setAccepted(accepted);
    } else {
        self->QWindowStateChangeEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowStateChangeEvent_OnSetAccepted(QWindowStateChangeEvent* self, intptr_t slot) {
    auto* vqwindowstatechangeevent = dynamic_cast<VirtualQWindowStateChangeEvent*>(self);
    if (vqwindowstatechangeevent && vqwindowstatechangeevent->isVirtualQWindowStateChangeEvent) {
        vqwindowstatechangeevent->setQWindowStateChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQWindowStateChangeEvent::QWindowStateChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self) {
    delete self;
}

QTouchEvent* QTouchEvent_new(int eventType) {
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType));
}

QTouchEvent* QTouchEvent_new2(int eventType, const QPointingDevice* device, int modifiers, int touchPointStates) {
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEventPoint::States>(touchPointStates));
}

QTouchEvent* QTouchEvent_new3(int eventType, const QPointingDevice* device) {
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device);
}

QTouchEvent* QTouchEvent_new4(int eventType, const QPointingDevice* device, int modifiers) {
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QTouchEvent* QTouchEvent_new5(int eventType, const QPointingDevice* device, int modifiers, const libqt_list /* of QEventPoint* */ touchPoints) {
    QList<QEventPoint> touchPoints_QList;
    touchPoints_QList.reserve(touchPoints.len);
    QEventPoint** touchPoints_arr = static_cast<QEventPoint**>(touchPoints.data);
    for (size_t i = 0; i < touchPoints.len; ++i) {
        touchPoints_QList.push_back(*(touchPoints_arr[i]));
    }
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), touchPoints_QList);
}

QTouchEvent* QTouchEvent_new6(int eventType, const QPointingDevice* device, int modifiers, int touchPointStates, const libqt_list /* of QEventPoint* */ touchPoints) {
    QList<QEventPoint> touchPoints_QList;
    touchPoints_QList.reserve(touchPoints.len);
    QEventPoint** touchPoints_arr = static_cast<QEventPoint**>(touchPoints.data);
    for (size_t i = 0; i < touchPoints.len; ++i) {
        touchPoints_QList.push_back(*(touchPoints_arr[i]));
    }
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEventPoint::States>(touchPointStates), touchPoints_QList);
}

QObject* QTouchEvent_Target(const QTouchEvent* self) {
    return self->target();
}

int QTouchEvent_TouchPointStates(const QTouchEvent* self) {
    return static_cast<int>(self->touchPointStates());
}

libqt_list /* of QEventPoint* */ QTouchEvent_TouchPoints(const QTouchEvent* self) {
    const QList<QEventPoint>& _ret = self->touchPoints();
    // Convert const QList<> from C++ memory to manually-managed C memory
    QEventPoint** _arr = static_cast<QEventPoint**>(malloc(sizeof(QEventPoint*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QEventPoint(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
QTouchEvent* QTouchEvent_Clone(const QTouchEvent* self) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        return vqtouchevent->clone();
    } else {
        return self->QTouchEvent::clone();
    }
}

// Base class handler implementation
QTouchEvent* QTouchEvent_QBaseClone(const QTouchEvent* self) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_Clone_IsBase(true);
        return vqtouchevent->clone();
    } else {
        return self->QTouchEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnClone(const QTouchEvent* self, intptr_t slot) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_Clone_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTouchEvent_IsBeginEvent(const QTouchEvent* self) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        return vqtouchevent->isBeginEvent();
    } else {
        return self->QTouchEvent::isBeginEvent();
    }
}

// Base class handler implementation
bool QTouchEvent_QBaseIsBeginEvent(const QTouchEvent* self) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_IsBeginEvent_IsBase(true);
        return vqtouchevent->isBeginEvent();
    } else {
        return self->QTouchEvent::isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsBeginEvent(const QTouchEvent* self, intptr_t slot) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTouchEvent_IsUpdateEvent(const QTouchEvent* self) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        return vqtouchevent->isUpdateEvent();
    } else {
        return self->QTouchEvent::isUpdateEvent();
    }
}

// Base class handler implementation
bool QTouchEvent_QBaseIsUpdateEvent(const QTouchEvent* self) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_IsUpdateEvent_IsBase(true);
        return vqtouchevent->isUpdateEvent();
    } else {
        return self->QTouchEvent::isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsUpdateEvent(const QTouchEvent* self, intptr_t slot) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTouchEvent_IsEndEvent(const QTouchEvent* self) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        return vqtouchevent->isEndEvent();
    } else {
        return self->QTouchEvent::isEndEvent();
    }
}

// Base class handler implementation
bool QTouchEvent_QBaseIsEndEvent(const QTouchEvent* self) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_IsEndEvent_IsBase(true);
        return vqtouchevent->isEndEvent();
    } else {
        return self->QTouchEvent::isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsEndEvent(const QTouchEvent* self, intptr_t slot) {
    auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self));
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTouchEvent_SetTimestamp(QTouchEvent* self, unsigned long long timestamp) {
    auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self);
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QTouchEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QTouchEvent_QBaseSetTimestamp(QTouchEvent* self, unsigned long long timestamp) {
    auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self);
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_SetTimestamp_IsBase(true);
        vqtouchevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        self->QTouchEvent::setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnSetTimestamp(QTouchEvent* self, intptr_t slot) {
    auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self);
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QTouchEvent_SetAccepted(QTouchEvent* self, bool accepted) {
    auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self);
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setAccepted(accepted);
    } else {
        self->QTouchEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QTouchEvent_QBaseSetAccepted(QTouchEvent* self, bool accepted) {
    auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self);
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_SetAccepted_IsBase(true);
        vqtouchevent->setAccepted(accepted);
    } else {
        self->QTouchEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnSetAccepted(QTouchEvent* self, intptr_t slot) {
    auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self);
    if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
        vqtouchevent->setQTouchEvent_SetAccepted_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_SetAccepted_Callback>(slot));
    }
}

void QTouchEvent_Delete(QTouchEvent* self) {
    delete self;
}

QScrollPrepareEvent* QScrollPrepareEvent_new(const QPointF* startPos) {
    return new VirtualQScrollPrepareEvent(*startPos);
}

QPointF* QScrollPrepareEvent_StartPos(const QScrollPrepareEvent* self) {
    return new QPointF(self->startPos());
}

QSizeF* QScrollPrepareEvent_ViewportSize(const QScrollPrepareEvent* self) {
    return new QSizeF(self->viewportSize());
}

QRectF* QScrollPrepareEvent_ContentPosRange(const QScrollPrepareEvent* self) {
    return new QRectF(self->contentPosRange());
}

QPointF* QScrollPrepareEvent_ContentPos(const QScrollPrepareEvent* self) {
    return new QPointF(self->contentPos());
}

void QScrollPrepareEvent_SetViewportSize(QScrollPrepareEvent* self, const QSizeF* size) {
    self->setViewportSize(*size);
}

void QScrollPrepareEvent_SetContentPosRange(QScrollPrepareEvent* self, const QRectF* rect) {
    self->setContentPosRange(*rect);
}

void QScrollPrepareEvent_SetContentPos(QScrollPrepareEvent* self, const QPointF* pos) {
    self->setContentPos(*pos);
}

// Derived class handler implementation
QScrollPrepareEvent* QScrollPrepareEvent_Clone(const QScrollPrepareEvent* self) {
    auto* vqscrollprepareevent = const_cast<VirtualQScrollPrepareEvent*>(dynamic_cast<const VirtualQScrollPrepareEvent*>(self));
    if (vqscrollprepareevent && vqscrollprepareevent->isVirtualQScrollPrepareEvent) {
        return vqscrollprepareevent->clone();
    } else {
        return self->QScrollPrepareEvent::clone();
    }
}

// Base class handler implementation
QScrollPrepareEvent* QScrollPrepareEvent_QBaseClone(const QScrollPrepareEvent* self) {
    auto* vqscrollprepareevent = const_cast<VirtualQScrollPrepareEvent*>(dynamic_cast<const VirtualQScrollPrepareEvent*>(self));
    if (vqscrollprepareevent && vqscrollprepareevent->isVirtualQScrollPrepareEvent) {
        vqscrollprepareevent->setQScrollPrepareEvent_Clone_IsBase(true);
        return vqscrollprepareevent->clone();
    } else {
        return self->QScrollPrepareEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollPrepareEvent_OnClone(const QScrollPrepareEvent* self, intptr_t slot) {
    auto* vqscrollprepareevent = const_cast<VirtualQScrollPrepareEvent*>(dynamic_cast<const VirtualQScrollPrepareEvent*>(self));
    if (vqscrollprepareevent && vqscrollprepareevent->isVirtualQScrollPrepareEvent) {
        vqscrollprepareevent->setQScrollPrepareEvent_Clone_Callback(reinterpret_cast<VirtualQScrollPrepareEvent::QScrollPrepareEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollPrepareEvent_SetAccepted(QScrollPrepareEvent* self, bool accepted) {
    auto* vqscrollprepareevent = dynamic_cast<VirtualQScrollPrepareEvent*>(self);
    if (vqscrollprepareevent && vqscrollprepareevent->isVirtualQScrollPrepareEvent) {
        vqscrollprepareevent->setAccepted(accepted);
    } else {
        self->QScrollPrepareEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QScrollPrepareEvent_QBaseSetAccepted(QScrollPrepareEvent* self, bool accepted) {
    auto* vqscrollprepareevent = dynamic_cast<VirtualQScrollPrepareEvent*>(self);
    if (vqscrollprepareevent && vqscrollprepareevent->isVirtualQScrollPrepareEvent) {
        vqscrollprepareevent->setQScrollPrepareEvent_SetAccepted_IsBase(true);
        vqscrollprepareevent->setAccepted(accepted);
    } else {
        self->QScrollPrepareEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollPrepareEvent_OnSetAccepted(QScrollPrepareEvent* self, intptr_t slot) {
    auto* vqscrollprepareevent = dynamic_cast<VirtualQScrollPrepareEvent*>(self);
    if (vqscrollprepareevent && vqscrollprepareevent->isVirtualQScrollPrepareEvent) {
        vqscrollprepareevent->setQScrollPrepareEvent_SetAccepted_Callback(reinterpret_cast<VirtualQScrollPrepareEvent::QScrollPrepareEvent_SetAccepted_Callback>(slot));
    }
}

void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self) {
    delete self;
}

QScrollEvent* QScrollEvent_new(const QPointF* contentPos, const QPointF* overshoot, int scrollState) {
    return new VirtualQScrollEvent(*contentPos, *overshoot, static_cast<QScrollEvent::ScrollState>(scrollState));
}

QPointF* QScrollEvent_ContentPos(const QScrollEvent* self) {
    return new QPointF(self->contentPos());
}

QPointF* QScrollEvent_OvershootDistance(const QScrollEvent* self) {
    return new QPointF(self->overshootDistance());
}

int QScrollEvent_ScrollState(const QScrollEvent* self) {
    return static_cast<int>(self->scrollState());
}

// Derived class handler implementation
QScrollEvent* QScrollEvent_Clone(const QScrollEvent* self) {
    auto* vqscrollevent = const_cast<VirtualQScrollEvent*>(dynamic_cast<const VirtualQScrollEvent*>(self));
    if (vqscrollevent && vqscrollevent->isVirtualQScrollEvent) {
        return vqscrollevent->clone();
    } else {
        return self->QScrollEvent::clone();
    }
}

// Base class handler implementation
QScrollEvent* QScrollEvent_QBaseClone(const QScrollEvent* self) {
    auto* vqscrollevent = const_cast<VirtualQScrollEvent*>(dynamic_cast<const VirtualQScrollEvent*>(self));
    if (vqscrollevent && vqscrollevent->isVirtualQScrollEvent) {
        vqscrollevent->setQScrollEvent_Clone_IsBase(true);
        return vqscrollevent->clone();
    } else {
        return self->QScrollEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollEvent_OnClone(const QScrollEvent* self, intptr_t slot) {
    auto* vqscrollevent = const_cast<VirtualQScrollEvent*>(dynamic_cast<const VirtualQScrollEvent*>(self));
    if (vqscrollevent && vqscrollevent->isVirtualQScrollEvent) {
        vqscrollevent->setQScrollEvent_Clone_Callback(reinterpret_cast<VirtualQScrollEvent::QScrollEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollEvent_SetAccepted(QScrollEvent* self, bool accepted) {
    auto* vqscrollevent = dynamic_cast<VirtualQScrollEvent*>(self);
    if (vqscrollevent && vqscrollevent->isVirtualQScrollEvent) {
        vqscrollevent->setAccepted(accepted);
    } else {
        self->QScrollEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QScrollEvent_QBaseSetAccepted(QScrollEvent* self, bool accepted) {
    auto* vqscrollevent = dynamic_cast<VirtualQScrollEvent*>(self);
    if (vqscrollevent && vqscrollevent->isVirtualQScrollEvent) {
        vqscrollevent->setQScrollEvent_SetAccepted_IsBase(true);
        vqscrollevent->setAccepted(accepted);
    } else {
        self->QScrollEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollEvent_OnSetAccepted(QScrollEvent* self, intptr_t slot) {
    auto* vqscrollevent = dynamic_cast<VirtualQScrollEvent*>(self);
    if (vqscrollevent && vqscrollevent->isVirtualQScrollEvent) {
        vqscrollevent->setQScrollEvent_SetAccepted_Callback(reinterpret_cast<VirtualQScrollEvent::QScrollEvent_SetAccepted_Callback>(slot));
    }
}

void QScrollEvent_Delete(QScrollEvent* self) {
    delete self;
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation) {
    return new VirtualQScreenOrientationChangeEvent(screen, static_cast<Qt::ScreenOrientation>(orientation));
}

QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self) {
    return self->screen();
}

int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self) {
    return static_cast<int>(self->orientation());
}

// Derived class handler implementation
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_Clone(const QScreenOrientationChangeEvent* self) {
    auto* vqscreenorientationchangeevent = const_cast<VirtualQScreenOrientationChangeEvent*>(dynamic_cast<const VirtualQScreenOrientationChangeEvent*>(self));
    if (vqscreenorientationchangeevent && vqscreenorientationchangeevent->isVirtualQScreenOrientationChangeEvent) {
        return vqscreenorientationchangeevent->clone();
    } else {
        return self->QScreenOrientationChangeEvent::clone();
    }
}

// Base class handler implementation
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_QBaseClone(const QScreenOrientationChangeEvent* self) {
    auto* vqscreenorientationchangeevent = const_cast<VirtualQScreenOrientationChangeEvent*>(dynamic_cast<const VirtualQScreenOrientationChangeEvent*>(self));
    if (vqscreenorientationchangeevent && vqscreenorientationchangeevent->isVirtualQScreenOrientationChangeEvent) {
        vqscreenorientationchangeevent->setQScreenOrientationChangeEvent_Clone_IsBase(true);
        return vqscreenorientationchangeevent->clone();
    } else {
        return self->QScreenOrientationChangeEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenOrientationChangeEvent_OnClone(const QScreenOrientationChangeEvent* self, intptr_t slot) {
    auto* vqscreenorientationchangeevent = const_cast<VirtualQScreenOrientationChangeEvent*>(dynamic_cast<const VirtualQScreenOrientationChangeEvent*>(self));
    if (vqscreenorientationchangeevent && vqscreenorientationchangeevent->isVirtualQScreenOrientationChangeEvent) {
        vqscreenorientationchangeevent->setQScreenOrientationChangeEvent_Clone_Callback(reinterpret_cast<VirtualQScreenOrientationChangeEvent::QScreenOrientationChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QScreenOrientationChangeEvent_SetAccepted(QScreenOrientationChangeEvent* self, bool accepted) {
    auto* vqscreenorientationchangeevent = dynamic_cast<VirtualQScreenOrientationChangeEvent*>(self);
    if (vqscreenorientationchangeevent && vqscreenorientationchangeevent->isVirtualQScreenOrientationChangeEvent) {
        vqscreenorientationchangeevent->setAccepted(accepted);
    } else {
        self->QScreenOrientationChangeEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QScreenOrientationChangeEvent_QBaseSetAccepted(QScreenOrientationChangeEvent* self, bool accepted) {
    auto* vqscreenorientationchangeevent = dynamic_cast<VirtualQScreenOrientationChangeEvent*>(self);
    if (vqscreenorientationchangeevent && vqscreenorientationchangeevent->isVirtualQScreenOrientationChangeEvent) {
        vqscreenorientationchangeevent->setQScreenOrientationChangeEvent_SetAccepted_IsBase(true);
        vqscreenorientationchangeevent->setAccepted(accepted);
    } else {
        self->QScreenOrientationChangeEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenOrientationChangeEvent_OnSetAccepted(QScreenOrientationChangeEvent* self, intptr_t slot) {
    auto* vqscreenorientationchangeevent = dynamic_cast<VirtualQScreenOrientationChangeEvent*>(self);
    if (vqscreenorientationchangeevent && vqscreenorientationchangeevent->isVirtualQScreenOrientationChangeEvent) {
        vqscreenorientationchangeevent->setQScreenOrientationChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQScreenOrientationChangeEvent::QScreenOrientationChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self) {
    delete self;
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state) {
    return new VirtualQApplicationStateChangeEvent(static_cast<Qt::ApplicationState>(state));
}

int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self) {
    return static_cast<int>(self->applicationState());
}

// Derived class handler implementation
QApplicationStateChangeEvent* QApplicationStateChangeEvent_Clone(const QApplicationStateChangeEvent* self) {
    auto* vqapplicationstatechangeevent = const_cast<VirtualQApplicationStateChangeEvent*>(dynamic_cast<const VirtualQApplicationStateChangeEvent*>(self));
    if (vqapplicationstatechangeevent && vqapplicationstatechangeevent->isVirtualQApplicationStateChangeEvent) {
        return vqapplicationstatechangeevent->clone();
    } else {
        return self->QApplicationStateChangeEvent::clone();
    }
}

// Base class handler implementation
QApplicationStateChangeEvent* QApplicationStateChangeEvent_QBaseClone(const QApplicationStateChangeEvent* self) {
    auto* vqapplicationstatechangeevent = const_cast<VirtualQApplicationStateChangeEvent*>(dynamic_cast<const VirtualQApplicationStateChangeEvent*>(self));
    if (vqapplicationstatechangeevent && vqapplicationstatechangeevent->isVirtualQApplicationStateChangeEvent) {
        vqapplicationstatechangeevent->setQApplicationStateChangeEvent_Clone_IsBase(true);
        return vqapplicationstatechangeevent->clone();
    } else {
        return self->QApplicationStateChangeEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QApplicationStateChangeEvent_OnClone(const QApplicationStateChangeEvent* self, intptr_t slot) {
    auto* vqapplicationstatechangeevent = const_cast<VirtualQApplicationStateChangeEvent*>(dynamic_cast<const VirtualQApplicationStateChangeEvent*>(self));
    if (vqapplicationstatechangeevent && vqapplicationstatechangeevent->isVirtualQApplicationStateChangeEvent) {
        vqapplicationstatechangeevent->setQApplicationStateChangeEvent_Clone_Callback(reinterpret_cast<VirtualQApplicationStateChangeEvent::QApplicationStateChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QApplicationStateChangeEvent_SetAccepted(QApplicationStateChangeEvent* self, bool accepted) {
    auto* vqapplicationstatechangeevent = dynamic_cast<VirtualQApplicationStateChangeEvent*>(self);
    if (vqapplicationstatechangeevent && vqapplicationstatechangeevent->isVirtualQApplicationStateChangeEvent) {
        vqapplicationstatechangeevent->setAccepted(accepted);
    } else {
        self->QApplicationStateChangeEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QApplicationStateChangeEvent_QBaseSetAccepted(QApplicationStateChangeEvent* self, bool accepted) {
    auto* vqapplicationstatechangeevent = dynamic_cast<VirtualQApplicationStateChangeEvent*>(self);
    if (vqapplicationstatechangeevent && vqapplicationstatechangeevent->isVirtualQApplicationStateChangeEvent) {
        vqapplicationstatechangeevent->setQApplicationStateChangeEvent_SetAccepted_IsBase(true);
        vqapplicationstatechangeevent->setAccepted(accepted);
    } else {
        self->QApplicationStateChangeEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplicationStateChangeEvent_OnSetAccepted(QApplicationStateChangeEvent* self, intptr_t slot) {
    auto* vqapplicationstatechangeevent = dynamic_cast<VirtualQApplicationStateChangeEvent*>(self);
    if (vqapplicationstatechangeevent && vqapplicationstatechangeevent->isVirtualQApplicationStateChangeEvent) {
        vqapplicationstatechangeevent->setQApplicationStateChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQApplicationStateChangeEvent::QApplicationStateChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self) {
    delete self;
}

QChildWindowEvent* QChildWindowEvent_new(int typeVal, QWindow* childWindow) {
    return new VirtualQChildWindowEvent(static_cast<QEvent::Type>(typeVal), childWindow);
}

QWindow* QChildWindowEvent_Child(const QChildWindowEvent* self) {
    return self->child();
}

// Derived class handler implementation
QChildWindowEvent* QChildWindowEvent_Clone(const QChildWindowEvent* self) {
    auto* vqchildwindowevent = const_cast<VirtualQChildWindowEvent*>(dynamic_cast<const VirtualQChildWindowEvent*>(self));
    if (vqchildwindowevent && vqchildwindowevent->isVirtualQChildWindowEvent) {
        return vqchildwindowevent->clone();
    } else {
        return self->QChildWindowEvent::clone();
    }
}

// Base class handler implementation
QChildWindowEvent* QChildWindowEvent_QBaseClone(const QChildWindowEvent* self) {
    auto* vqchildwindowevent = const_cast<VirtualQChildWindowEvent*>(dynamic_cast<const VirtualQChildWindowEvent*>(self));
    if (vqchildwindowevent && vqchildwindowevent->isVirtualQChildWindowEvent) {
        vqchildwindowevent->setQChildWindowEvent_Clone_IsBase(true);
        return vqchildwindowevent->clone();
    } else {
        return self->QChildWindowEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QChildWindowEvent_OnClone(const QChildWindowEvent* self, intptr_t slot) {
    auto* vqchildwindowevent = const_cast<VirtualQChildWindowEvent*>(dynamic_cast<const VirtualQChildWindowEvent*>(self));
    if (vqchildwindowevent && vqchildwindowevent->isVirtualQChildWindowEvent) {
        vqchildwindowevent->setQChildWindowEvent_Clone_Callback(reinterpret_cast<VirtualQChildWindowEvent::QChildWindowEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QChildWindowEvent_SetAccepted(QChildWindowEvent* self, bool accepted) {
    auto* vqchildwindowevent = dynamic_cast<VirtualQChildWindowEvent*>(self);
    if (vqchildwindowevent && vqchildwindowevent->isVirtualQChildWindowEvent) {
        vqchildwindowevent->setAccepted(accepted);
    } else {
        self->QChildWindowEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QChildWindowEvent_QBaseSetAccepted(QChildWindowEvent* self, bool accepted) {
    auto* vqchildwindowevent = dynamic_cast<VirtualQChildWindowEvent*>(self);
    if (vqchildwindowevent && vqchildwindowevent->isVirtualQChildWindowEvent) {
        vqchildwindowevent->setQChildWindowEvent_SetAccepted_IsBase(true);
        vqchildwindowevent->setAccepted(accepted);
    } else {
        self->QChildWindowEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QChildWindowEvent_OnSetAccepted(QChildWindowEvent* self, intptr_t slot) {
    auto* vqchildwindowevent = dynamic_cast<VirtualQChildWindowEvent*>(self);
    if (vqchildwindowevent && vqchildwindowevent->isVirtualQChildWindowEvent) {
        vqchildwindowevent->setQChildWindowEvent_SetAccepted_Callback(reinterpret_cast<VirtualQChildWindowEvent::QChildWindowEvent_SetAccepted_Callback>(slot));
    }
}

void QChildWindowEvent_Delete(QChildWindowEvent* self) {
    delete self;
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val) {
    return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l), *val);
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l) {
    return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l));
}

void QInputMethodEvent__Attribute_OperatorAssign(QInputMethodEvent__Attribute* self, const QInputMethodEvent__Attribute* param1) {
    self->operator=(*param1);
}

void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self) {
    delete self;
}
