#include <QEvent>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneEvent>
#include <QGraphicsSceneHelpEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QMimeData>
#include <QPoint>
#include <QPointF>
#include <QSizeF>
#include <QWidget>
#include <qgraphicssceneevent.h>
#include "libqgraphicssceneevent.h"
#include "libqgraphicssceneevent.hxx"

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int typeVal) {
    return new VirtualQGraphicsSceneEvent(static_cast<QEvent::Type>(typeVal));
}

QWidget* QGraphicsSceneEvent_Widget(const QGraphicsSceneEvent* self) {
    return self->widget();
}

void QGraphicsSceneEvent_SetWidget(QGraphicsSceneEvent* self, QWidget* widget) {
    self->setWidget(widget);
}

unsigned long long QGraphicsSceneEvent_Timestamp(const QGraphicsSceneEvent* self) {
    return static_cast<unsigned long long>(self->timestamp());
}

void QGraphicsSceneEvent_SetTimestamp(QGraphicsSceneEvent* self, unsigned long long ts) {
    self->setTimestamp(static_cast<quint64>(ts));
}

// Derived class handler implementation
void QGraphicsSceneEvent_SetAccepted(QGraphicsSceneEvent* self, bool accepted) {
    auto* vqgraphicssceneevent = dynamic_cast<VirtualQGraphicsSceneEvent*>(self);
    if (vqgraphicssceneevent && vqgraphicssceneevent->isVirtualQGraphicsSceneEvent) {
        vqgraphicssceneevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneEvent_QBaseSetAccepted(QGraphicsSceneEvent* self, bool accepted) {
    auto* vqgraphicssceneevent = dynamic_cast<VirtualQGraphicsSceneEvent*>(self);
    if (vqgraphicssceneevent && vqgraphicssceneevent->isVirtualQGraphicsSceneEvent) {
        vqgraphicssceneevent->setQGraphicsSceneEvent_SetAccepted_IsBase(true);
        vqgraphicssceneevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneEvent_OnSetAccepted(QGraphicsSceneEvent* self, intptr_t slot) {
    auto* vqgraphicssceneevent = dynamic_cast<VirtualQGraphicsSceneEvent*>(self);
    if (vqgraphicssceneevent && vqgraphicssceneevent->isVirtualQGraphicsSceneEvent) {
        vqgraphicssceneevent->setQGraphicsSceneEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneEvent::QGraphicsSceneEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneEvent_Clone(const QGraphicsSceneEvent* self) {
    auto* vqgraphicssceneevent = const_cast<VirtualQGraphicsSceneEvent*>(dynamic_cast<const VirtualQGraphicsSceneEvent*>(self));
    if (vqgraphicssceneevent && vqgraphicssceneevent->isVirtualQGraphicsSceneEvent) {
        return vqgraphicssceneevent->clone();
    } else {
        return self->QGraphicsSceneEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneEvent_QBaseClone(const QGraphicsSceneEvent* self) {
    auto* vqgraphicssceneevent = const_cast<VirtualQGraphicsSceneEvent*>(dynamic_cast<const VirtualQGraphicsSceneEvent*>(self));
    if (vqgraphicssceneevent && vqgraphicssceneevent->isVirtualQGraphicsSceneEvent) {
        vqgraphicssceneevent->setQGraphicsSceneEvent_Clone_IsBase(true);
        return vqgraphicssceneevent->clone();
    } else {
        return self->QGraphicsSceneEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneEvent_OnClone(const QGraphicsSceneEvent* self, intptr_t slot) {
    auto* vqgraphicssceneevent = const_cast<VirtualQGraphicsSceneEvent*>(dynamic_cast<const VirtualQGraphicsSceneEvent*>(self));
    if (vqgraphicssceneevent && vqgraphicssceneevent->isVirtualQGraphicsSceneEvent) {
        vqgraphicssceneevent->setQGraphicsSceneEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneEvent::QGraphicsSceneEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self) {
    delete self;
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new() {
    return new VirtualQGraphicsSceneMouseEvent();
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int typeVal) {
    return new VirtualQGraphicsSceneMouseEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneMouseEvent_Pos(const QGraphicsSceneMouseEvent* self) {
    return new QPointF(self->pos());
}

void QGraphicsSceneMouseEvent_SetPos(QGraphicsSceneMouseEvent* self, const QPointF* pos) {
    self->setPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ScenePos(const QGraphicsSceneMouseEvent* self) {
    return new QPointF(self->scenePos());
}

void QGraphicsSceneMouseEvent_SetScenePos(QGraphicsSceneMouseEvent* self, const QPointF* pos) {
    self->setScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_ScreenPos(const QGraphicsSceneMouseEvent* self) {
    return new QPoint(self->screenPos());
}

void QGraphicsSceneMouseEvent_SetScreenPos(QGraphicsSceneMouseEvent* self, const QPoint* pos) {
    self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ButtonDownPos(const QGraphicsSceneMouseEvent* self, int button) {
    return new QPointF(self->buttonDownPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownPos(QGraphicsSceneMouseEvent* self, int button, const QPointF* pos) {
    self->setButtonDownPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_ButtonDownScenePos(const QGraphicsSceneMouseEvent* self, int button) {
    return new QPointF(self->buttonDownScenePos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownScenePos(QGraphicsSceneMouseEvent* self, int button, const QPointF* pos) {
    self->setButtonDownScenePos(static_cast<Qt::MouseButton>(button), *pos);
}

QPoint* QGraphicsSceneMouseEvent_ButtonDownScreenPos(const QGraphicsSceneMouseEvent* self, int button) {
    return new QPoint(self->buttonDownScreenPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownScreenPos(QGraphicsSceneMouseEvent* self, int button, const QPoint* pos) {
    self->setButtonDownScreenPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_LastPos(const QGraphicsSceneMouseEvent* self) {
    return new QPointF(self->lastPos());
}

void QGraphicsSceneMouseEvent_SetLastPos(QGraphicsSceneMouseEvent* self, const QPointF* pos) {
    self->setLastPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_LastScenePos(const QGraphicsSceneMouseEvent* self) {
    return new QPointF(self->lastScenePos());
}

void QGraphicsSceneMouseEvent_SetLastScenePos(QGraphicsSceneMouseEvent* self, const QPointF* pos) {
    self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_LastScreenPos(const QGraphicsSceneMouseEvent* self) {
    return new QPoint(self->lastScreenPos());
}

void QGraphicsSceneMouseEvent_SetLastScreenPos(QGraphicsSceneMouseEvent* self, const QPoint* pos) {
    self->setLastScreenPos(*pos);
}

int QGraphicsSceneMouseEvent_Buttons(const QGraphicsSceneMouseEvent* self) {
    return static_cast<int>(self->buttons());
}

void QGraphicsSceneMouseEvent_SetButtons(QGraphicsSceneMouseEvent* self, int buttons) {
    self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneMouseEvent_Button(const QGraphicsSceneMouseEvent* self) {
    return static_cast<int>(self->button());
}

void QGraphicsSceneMouseEvent_SetButton(QGraphicsSceneMouseEvent* self, int button) {
    self->setButton(static_cast<Qt::MouseButton>(button));
}

int QGraphicsSceneMouseEvent_Modifiers(const QGraphicsSceneMouseEvent* self) {
    return static_cast<int>(self->modifiers());
}

void QGraphicsSceneMouseEvent_SetModifiers(QGraphicsSceneMouseEvent* self, int modifiers) {
    self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneMouseEvent_Source(const QGraphicsSceneMouseEvent* self) {
    return static_cast<int>(self->source());
}

void QGraphicsSceneMouseEvent_SetSource(QGraphicsSceneMouseEvent* self, int source) {
    self->setSource(static_cast<Qt::MouseEventSource>(source));
}

int QGraphicsSceneMouseEvent_Flags(const QGraphicsSceneMouseEvent* self) {
    return static_cast<int>(self->flags());
}

void QGraphicsSceneMouseEvent_SetFlags(QGraphicsSceneMouseEvent* self, int flags) {
    self->setFlags(static_cast<QFlags<Qt::MouseEventFlag>>(flags));
}

// Derived class handler implementation
void QGraphicsSceneMouseEvent_SetAccepted(QGraphicsSceneMouseEvent* self, bool accepted) {
    auto* vqgraphicsscenemouseevent = dynamic_cast<VirtualQGraphicsSceneMouseEvent*>(self);
    if (vqgraphicsscenemouseevent && vqgraphicsscenemouseevent->isVirtualQGraphicsSceneMouseEvent) {
        vqgraphicsscenemouseevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneMouseEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneMouseEvent_QBaseSetAccepted(QGraphicsSceneMouseEvent* self, bool accepted) {
    auto* vqgraphicsscenemouseevent = dynamic_cast<VirtualQGraphicsSceneMouseEvent*>(self);
    if (vqgraphicsscenemouseevent && vqgraphicsscenemouseevent->isVirtualQGraphicsSceneMouseEvent) {
        vqgraphicsscenemouseevent->setQGraphicsSceneMouseEvent_SetAccepted_IsBase(true);
        vqgraphicsscenemouseevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneMouseEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneMouseEvent_OnSetAccepted(QGraphicsSceneMouseEvent* self, intptr_t slot) {
    auto* vqgraphicsscenemouseevent = dynamic_cast<VirtualQGraphicsSceneMouseEvent*>(self);
    if (vqgraphicsscenemouseevent && vqgraphicsscenemouseevent->isVirtualQGraphicsSceneMouseEvent) {
        vqgraphicsscenemouseevent->setQGraphicsSceneMouseEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneMouseEvent::QGraphicsSceneMouseEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneMouseEvent_Clone(const QGraphicsSceneMouseEvent* self) {
    auto* vqgraphicsscenemouseevent = const_cast<VirtualQGraphicsSceneMouseEvent*>(dynamic_cast<const VirtualQGraphicsSceneMouseEvent*>(self));
    if (vqgraphicsscenemouseevent && vqgraphicsscenemouseevent->isVirtualQGraphicsSceneMouseEvent) {
        return vqgraphicsscenemouseevent->clone();
    } else {
        return self->QGraphicsSceneMouseEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneMouseEvent_QBaseClone(const QGraphicsSceneMouseEvent* self) {
    auto* vqgraphicsscenemouseevent = const_cast<VirtualQGraphicsSceneMouseEvent*>(dynamic_cast<const VirtualQGraphicsSceneMouseEvent*>(self));
    if (vqgraphicsscenemouseevent && vqgraphicsscenemouseevent->isVirtualQGraphicsSceneMouseEvent) {
        vqgraphicsscenemouseevent->setQGraphicsSceneMouseEvent_Clone_IsBase(true);
        return vqgraphicsscenemouseevent->clone();
    } else {
        return self->QGraphicsSceneMouseEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneMouseEvent_OnClone(const QGraphicsSceneMouseEvent* self, intptr_t slot) {
    auto* vqgraphicsscenemouseevent = const_cast<VirtualQGraphicsSceneMouseEvent*>(dynamic_cast<const VirtualQGraphicsSceneMouseEvent*>(self));
    if (vqgraphicsscenemouseevent && vqgraphicsscenemouseevent->isVirtualQGraphicsSceneMouseEvent) {
        vqgraphicsscenemouseevent->setQGraphicsSceneMouseEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneMouseEvent::QGraphicsSceneMouseEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneMouseEvent_Delete(QGraphicsSceneMouseEvent* self) {
    delete self;
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new() {
    return new VirtualQGraphicsSceneWheelEvent();
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int typeVal) {
    return new VirtualQGraphicsSceneWheelEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneWheelEvent_Pos(const QGraphicsSceneWheelEvent* self) {
    return new QPointF(self->pos());
}

void QGraphicsSceneWheelEvent_SetPos(QGraphicsSceneWheelEvent* self, const QPointF* pos) {
    self->setPos(*pos);
}

QPointF* QGraphicsSceneWheelEvent_ScenePos(const QGraphicsSceneWheelEvent* self) {
    return new QPointF(self->scenePos());
}

void QGraphicsSceneWheelEvent_SetScenePos(QGraphicsSceneWheelEvent* self, const QPointF* pos) {
    self->setScenePos(*pos);
}

QPoint* QGraphicsSceneWheelEvent_ScreenPos(const QGraphicsSceneWheelEvent* self) {
    return new QPoint(self->screenPos());
}

void QGraphicsSceneWheelEvent_SetScreenPos(QGraphicsSceneWheelEvent* self, const QPoint* pos) {
    self->setScreenPos(*pos);
}

int QGraphicsSceneWheelEvent_Buttons(const QGraphicsSceneWheelEvent* self) {
    return static_cast<int>(self->buttons());
}

void QGraphicsSceneWheelEvent_SetButtons(QGraphicsSceneWheelEvent* self, int buttons) {
    self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneWheelEvent_Modifiers(const QGraphicsSceneWheelEvent* self) {
    return static_cast<int>(self->modifiers());
}

void QGraphicsSceneWheelEvent_SetModifiers(QGraphicsSceneWheelEvent* self, int modifiers) {
    self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneWheelEvent_Delta(const QGraphicsSceneWheelEvent* self) {
    return self->delta();
}

void QGraphicsSceneWheelEvent_SetDelta(QGraphicsSceneWheelEvent* self, int delta) {
    self->setDelta(static_cast<int>(delta));
}

int QGraphicsSceneWheelEvent_Orientation(const QGraphicsSceneWheelEvent* self) {
    return static_cast<int>(self->orientation());
}

void QGraphicsSceneWheelEvent_SetOrientation(QGraphicsSceneWheelEvent* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QGraphicsSceneWheelEvent_Phase(const QGraphicsSceneWheelEvent* self) {
    return static_cast<int>(self->phase());
}

void QGraphicsSceneWheelEvent_SetPhase(QGraphicsSceneWheelEvent* self, int scrollPhase) {
    self->setPhase(static_cast<Qt::ScrollPhase>(scrollPhase));
}

QPoint* QGraphicsSceneWheelEvent_PixelDelta(const QGraphicsSceneWheelEvent* self) {
    return new QPoint(self->pixelDelta());
}

void QGraphicsSceneWheelEvent_SetPixelDelta(QGraphicsSceneWheelEvent* self, QPoint* delta) {
    self->setPixelDelta(*delta);
}

bool QGraphicsSceneWheelEvent_IsInverted(const QGraphicsSceneWheelEvent* self) {
    return self->isInverted();
}

void QGraphicsSceneWheelEvent_SetInverted(QGraphicsSceneWheelEvent* self, bool inverted) {
    self->setInverted(inverted);
}

// Derived class handler implementation
void QGraphicsSceneWheelEvent_SetAccepted(QGraphicsSceneWheelEvent* self, bool accepted) {
    auto* vqgraphicsscenewheelevent = dynamic_cast<VirtualQGraphicsSceneWheelEvent*>(self);
    if (vqgraphicsscenewheelevent && vqgraphicsscenewheelevent->isVirtualQGraphicsSceneWheelEvent) {
        vqgraphicsscenewheelevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneWheelEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneWheelEvent_QBaseSetAccepted(QGraphicsSceneWheelEvent* self, bool accepted) {
    auto* vqgraphicsscenewheelevent = dynamic_cast<VirtualQGraphicsSceneWheelEvent*>(self);
    if (vqgraphicsscenewheelevent && vqgraphicsscenewheelevent->isVirtualQGraphicsSceneWheelEvent) {
        vqgraphicsscenewheelevent->setQGraphicsSceneWheelEvent_SetAccepted_IsBase(true);
        vqgraphicsscenewheelevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneWheelEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneWheelEvent_OnSetAccepted(QGraphicsSceneWheelEvent* self, intptr_t slot) {
    auto* vqgraphicsscenewheelevent = dynamic_cast<VirtualQGraphicsSceneWheelEvent*>(self);
    if (vqgraphicsscenewheelevent && vqgraphicsscenewheelevent->isVirtualQGraphicsSceneWheelEvent) {
        vqgraphicsscenewheelevent->setQGraphicsSceneWheelEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneWheelEvent::QGraphicsSceneWheelEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneWheelEvent_Clone(const QGraphicsSceneWheelEvent* self) {
    auto* vqgraphicsscenewheelevent = const_cast<VirtualQGraphicsSceneWheelEvent*>(dynamic_cast<const VirtualQGraphicsSceneWheelEvent*>(self));
    if (vqgraphicsscenewheelevent && vqgraphicsscenewheelevent->isVirtualQGraphicsSceneWheelEvent) {
        return vqgraphicsscenewheelevent->clone();
    } else {
        return self->QGraphicsSceneWheelEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneWheelEvent_QBaseClone(const QGraphicsSceneWheelEvent* self) {
    auto* vqgraphicsscenewheelevent = const_cast<VirtualQGraphicsSceneWheelEvent*>(dynamic_cast<const VirtualQGraphicsSceneWheelEvent*>(self));
    if (vqgraphicsscenewheelevent && vqgraphicsscenewheelevent->isVirtualQGraphicsSceneWheelEvent) {
        vqgraphicsscenewheelevent->setQGraphicsSceneWheelEvent_Clone_IsBase(true);
        return vqgraphicsscenewheelevent->clone();
    } else {
        return self->QGraphicsSceneWheelEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneWheelEvent_OnClone(const QGraphicsSceneWheelEvent* self, intptr_t slot) {
    auto* vqgraphicsscenewheelevent = const_cast<VirtualQGraphicsSceneWheelEvent*>(dynamic_cast<const VirtualQGraphicsSceneWheelEvent*>(self));
    if (vqgraphicsscenewheelevent && vqgraphicsscenewheelevent->isVirtualQGraphicsSceneWheelEvent) {
        vqgraphicsscenewheelevent->setQGraphicsSceneWheelEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneWheelEvent::QGraphicsSceneWheelEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self) {
    delete self;
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new() {
    return new VirtualQGraphicsSceneContextMenuEvent();
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int typeVal) {
    return new VirtualQGraphicsSceneContextMenuEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneContextMenuEvent_Pos(const QGraphicsSceneContextMenuEvent* self) {
    return new QPointF(self->pos());
}

void QGraphicsSceneContextMenuEvent_SetPos(QGraphicsSceneContextMenuEvent* self, const QPointF* pos) {
    self->setPos(*pos);
}

QPointF* QGraphicsSceneContextMenuEvent_ScenePos(const QGraphicsSceneContextMenuEvent* self) {
    return new QPointF(self->scenePos());
}

void QGraphicsSceneContextMenuEvent_SetScenePos(QGraphicsSceneContextMenuEvent* self, const QPointF* pos) {
    self->setScenePos(*pos);
}

QPoint* QGraphicsSceneContextMenuEvent_ScreenPos(const QGraphicsSceneContextMenuEvent* self) {
    return new QPoint(self->screenPos());
}

void QGraphicsSceneContextMenuEvent_SetScreenPos(QGraphicsSceneContextMenuEvent* self, const QPoint* pos) {
    self->setScreenPos(*pos);
}

int QGraphicsSceneContextMenuEvent_Modifiers(const QGraphicsSceneContextMenuEvent* self) {
    return static_cast<int>(self->modifiers());
}

void QGraphicsSceneContextMenuEvent_SetModifiers(QGraphicsSceneContextMenuEvent* self, int modifiers) {
    self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneContextMenuEvent_Reason(const QGraphicsSceneContextMenuEvent* self) {
    return static_cast<int>(self->reason());
}

void QGraphicsSceneContextMenuEvent_SetReason(QGraphicsSceneContextMenuEvent* self, int reason) {
    self->setReason(static_cast<QGraphicsSceneContextMenuEvent::Reason>(reason));
}

// Derived class handler implementation
void QGraphicsSceneContextMenuEvent_SetAccepted(QGraphicsSceneContextMenuEvent* self, bool accepted) {
    auto* vqgraphicsscenecontextmenuevent = dynamic_cast<VirtualQGraphicsSceneContextMenuEvent*>(self);
    if (vqgraphicsscenecontextmenuevent && vqgraphicsscenecontextmenuevent->isVirtualQGraphicsSceneContextMenuEvent) {
        vqgraphicsscenecontextmenuevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneContextMenuEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneContextMenuEvent_QBaseSetAccepted(QGraphicsSceneContextMenuEvent* self, bool accepted) {
    auto* vqgraphicsscenecontextmenuevent = dynamic_cast<VirtualQGraphicsSceneContextMenuEvent*>(self);
    if (vqgraphicsscenecontextmenuevent && vqgraphicsscenecontextmenuevent->isVirtualQGraphicsSceneContextMenuEvent) {
        vqgraphicsscenecontextmenuevent->setQGraphicsSceneContextMenuEvent_SetAccepted_IsBase(true);
        vqgraphicsscenecontextmenuevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneContextMenuEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneContextMenuEvent_OnSetAccepted(QGraphicsSceneContextMenuEvent* self, intptr_t slot) {
    auto* vqgraphicsscenecontextmenuevent = dynamic_cast<VirtualQGraphicsSceneContextMenuEvent*>(self);
    if (vqgraphicsscenecontextmenuevent && vqgraphicsscenecontextmenuevent->isVirtualQGraphicsSceneContextMenuEvent) {
        vqgraphicsscenecontextmenuevent->setQGraphicsSceneContextMenuEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneContextMenuEvent::QGraphicsSceneContextMenuEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneContextMenuEvent_Clone(const QGraphicsSceneContextMenuEvent* self) {
    auto* vqgraphicsscenecontextmenuevent = const_cast<VirtualQGraphicsSceneContextMenuEvent*>(dynamic_cast<const VirtualQGraphicsSceneContextMenuEvent*>(self));
    if (vqgraphicsscenecontextmenuevent && vqgraphicsscenecontextmenuevent->isVirtualQGraphicsSceneContextMenuEvent) {
        return vqgraphicsscenecontextmenuevent->clone();
    } else {
        return self->QGraphicsSceneContextMenuEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneContextMenuEvent_QBaseClone(const QGraphicsSceneContextMenuEvent* self) {
    auto* vqgraphicsscenecontextmenuevent = const_cast<VirtualQGraphicsSceneContextMenuEvent*>(dynamic_cast<const VirtualQGraphicsSceneContextMenuEvent*>(self));
    if (vqgraphicsscenecontextmenuevent && vqgraphicsscenecontextmenuevent->isVirtualQGraphicsSceneContextMenuEvent) {
        vqgraphicsscenecontextmenuevent->setQGraphicsSceneContextMenuEvent_Clone_IsBase(true);
        return vqgraphicsscenecontextmenuevent->clone();
    } else {
        return self->QGraphicsSceneContextMenuEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneContextMenuEvent_OnClone(const QGraphicsSceneContextMenuEvent* self, intptr_t slot) {
    auto* vqgraphicsscenecontextmenuevent = const_cast<VirtualQGraphicsSceneContextMenuEvent*>(dynamic_cast<const VirtualQGraphicsSceneContextMenuEvent*>(self));
    if (vqgraphicsscenecontextmenuevent && vqgraphicsscenecontextmenuevent->isVirtualQGraphicsSceneContextMenuEvent) {
        vqgraphicsscenecontextmenuevent->setQGraphicsSceneContextMenuEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneContextMenuEvent::QGraphicsSceneContextMenuEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self) {
    delete self;
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new() {
    return new VirtualQGraphicsSceneHoverEvent();
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int typeVal) {
    return new VirtualQGraphicsSceneHoverEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneHoverEvent_Pos(const QGraphicsSceneHoverEvent* self) {
    return new QPointF(self->pos());
}

void QGraphicsSceneHoverEvent_SetPos(QGraphicsSceneHoverEvent* self, const QPointF* pos) {
    self->setPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_ScenePos(const QGraphicsSceneHoverEvent* self) {
    return new QPointF(self->scenePos());
}

void QGraphicsSceneHoverEvent_SetScenePos(QGraphicsSceneHoverEvent* self, const QPointF* pos) {
    self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_ScreenPos(const QGraphicsSceneHoverEvent* self) {
    return new QPoint(self->screenPos());
}

void QGraphicsSceneHoverEvent_SetScreenPos(QGraphicsSceneHoverEvent* self, const QPoint* pos) {
    self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastPos(const QGraphicsSceneHoverEvent* self) {
    return new QPointF(self->lastPos());
}

void QGraphicsSceneHoverEvent_SetLastPos(QGraphicsSceneHoverEvent* self, const QPointF* pos) {
    self->setLastPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastScenePos(const QGraphicsSceneHoverEvent* self) {
    return new QPointF(self->lastScenePos());
}

void QGraphicsSceneHoverEvent_SetLastScenePos(QGraphicsSceneHoverEvent* self, const QPointF* pos) {
    self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_LastScreenPos(const QGraphicsSceneHoverEvent* self) {
    return new QPoint(self->lastScreenPos());
}

void QGraphicsSceneHoverEvent_SetLastScreenPos(QGraphicsSceneHoverEvent* self, const QPoint* pos) {
    self->setLastScreenPos(*pos);
}

int QGraphicsSceneHoverEvent_Modifiers(const QGraphicsSceneHoverEvent* self) {
    return static_cast<int>(self->modifiers());
}

void QGraphicsSceneHoverEvent_SetModifiers(QGraphicsSceneHoverEvent* self, int modifiers) {
    self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

// Derived class handler implementation
void QGraphicsSceneHoverEvent_SetAccepted(QGraphicsSceneHoverEvent* self, bool accepted) {
    auto* vqgraphicsscenehoverevent = dynamic_cast<VirtualQGraphicsSceneHoverEvent*>(self);
    if (vqgraphicsscenehoverevent && vqgraphicsscenehoverevent->isVirtualQGraphicsSceneHoverEvent) {
        vqgraphicsscenehoverevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneHoverEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneHoverEvent_QBaseSetAccepted(QGraphicsSceneHoverEvent* self, bool accepted) {
    auto* vqgraphicsscenehoverevent = dynamic_cast<VirtualQGraphicsSceneHoverEvent*>(self);
    if (vqgraphicsscenehoverevent && vqgraphicsscenehoverevent->isVirtualQGraphicsSceneHoverEvent) {
        vqgraphicsscenehoverevent->setQGraphicsSceneHoverEvent_SetAccepted_IsBase(true);
        vqgraphicsscenehoverevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneHoverEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneHoverEvent_OnSetAccepted(QGraphicsSceneHoverEvent* self, intptr_t slot) {
    auto* vqgraphicsscenehoverevent = dynamic_cast<VirtualQGraphicsSceneHoverEvent*>(self);
    if (vqgraphicsscenehoverevent && vqgraphicsscenehoverevent->isVirtualQGraphicsSceneHoverEvent) {
        vqgraphicsscenehoverevent->setQGraphicsSceneHoverEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneHoverEvent::QGraphicsSceneHoverEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneHoverEvent_Clone(const QGraphicsSceneHoverEvent* self) {
    auto* vqgraphicsscenehoverevent = const_cast<VirtualQGraphicsSceneHoverEvent*>(dynamic_cast<const VirtualQGraphicsSceneHoverEvent*>(self));
    if (vqgraphicsscenehoverevent && vqgraphicsscenehoverevent->isVirtualQGraphicsSceneHoverEvent) {
        return vqgraphicsscenehoverevent->clone();
    } else {
        return self->QGraphicsSceneHoverEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneHoverEvent_QBaseClone(const QGraphicsSceneHoverEvent* self) {
    auto* vqgraphicsscenehoverevent = const_cast<VirtualQGraphicsSceneHoverEvent*>(dynamic_cast<const VirtualQGraphicsSceneHoverEvent*>(self));
    if (vqgraphicsscenehoverevent && vqgraphicsscenehoverevent->isVirtualQGraphicsSceneHoverEvent) {
        vqgraphicsscenehoverevent->setQGraphicsSceneHoverEvent_Clone_IsBase(true);
        return vqgraphicsscenehoverevent->clone();
    } else {
        return self->QGraphicsSceneHoverEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneHoverEvent_OnClone(const QGraphicsSceneHoverEvent* self, intptr_t slot) {
    auto* vqgraphicsscenehoverevent = const_cast<VirtualQGraphicsSceneHoverEvent*>(dynamic_cast<const VirtualQGraphicsSceneHoverEvent*>(self));
    if (vqgraphicsscenehoverevent && vqgraphicsscenehoverevent->isVirtualQGraphicsSceneHoverEvent) {
        vqgraphicsscenehoverevent->setQGraphicsSceneHoverEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneHoverEvent::QGraphicsSceneHoverEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneHoverEvent_Delete(QGraphicsSceneHoverEvent* self) {
    delete self;
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new() {
    return new VirtualQGraphicsSceneHelpEvent();
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int typeVal) {
    return new VirtualQGraphicsSceneHelpEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneHelpEvent_ScenePos(const QGraphicsSceneHelpEvent* self) {
    return new QPointF(self->scenePos());
}

void QGraphicsSceneHelpEvent_SetScenePos(QGraphicsSceneHelpEvent* self, const QPointF* pos) {
    self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHelpEvent_ScreenPos(const QGraphicsSceneHelpEvent* self) {
    return new QPoint(self->screenPos());
}

void QGraphicsSceneHelpEvent_SetScreenPos(QGraphicsSceneHelpEvent* self, const QPoint* pos) {
    self->setScreenPos(*pos);
}

// Derived class handler implementation
void QGraphicsSceneHelpEvent_SetAccepted(QGraphicsSceneHelpEvent* self, bool accepted) {
    auto* vqgraphicsscenehelpevent = dynamic_cast<VirtualQGraphicsSceneHelpEvent*>(self);
    if (vqgraphicsscenehelpevent && vqgraphicsscenehelpevent->isVirtualQGraphicsSceneHelpEvent) {
        vqgraphicsscenehelpevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneHelpEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneHelpEvent_QBaseSetAccepted(QGraphicsSceneHelpEvent* self, bool accepted) {
    auto* vqgraphicsscenehelpevent = dynamic_cast<VirtualQGraphicsSceneHelpEvent*>(self);
    if (vqgraphicsscenehelpevent && vqgraphicsscenehelpevent->isVirtualQGraphicsSceneHelpEvent) {
        vqgraphicsscenehelpevent->setQGraphicsSceneHelpEvent_SetAccepted_IsBase(true);
        vqgraphicsscenehelpevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneHelpEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneHelpEvent_OnSetAccepted(QGraphicsSceneHelpEvent* self, intptr_t slot) {
    auto* vqgraphicsscenehelpevent = dynamic_cast<VirtualQGraphicsSceneHelpEvent*>(self);
    if (vqgraphicsscenehelpevent && vqgraphicsscenehelpevent->isVirtualQGraphicsSceneHelpEvent) {
        vqgraphicsscenehelpevent->setQGraphicsSceneHelpEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneHelpEvent::QGraphicsSceneHelpEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneHelpEvent_Clone(const QGraphicsSceneHelpEvent* self) {
    auto* vqgraphicsscenehelpevent = const_cast<VirtualQGraphicsSceneHelpEvent*>(dynamic_cast<const VirtualQGraphicsSceneHelpEvent*>(self));
    if (vqgraphicsscenehelpevent && vqgraphicsscenehelpevent->isVirtualQGraphicsSceneHelpEvent) {
        return vqgraphicsscenehelpevent->clone();
    } else {
        return self->QGraphicsSceneHelpEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneHelpEvent_QBaseClone(const QGraphicsSceneHelpEvent* self) {
    auto* vqgraphicsscenehelpevent = const_cast<VirtualQGraphicsSceneHelpEvent*>(dynamic_cast<const VirtualQGraphicsSceneHelpEvent*>(self));
    if (vqgraphicsscenehelpevent && vqgraphicsscenehelpevent->isVirtualQGraphicsSceneHelpEvent) {
        vqgraphicsscenehelpevent->setQGraphicsSceneHelpEvent_Clone_IsBase(true);
        return vqgraphicsscenehelpevent->clone();
    } else {
        return self->QGraphicsSceneHelpEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneHelpEvent_OnClone(const QGraphicsSceneHelpEvent* self, intptr_t slot) {
    auto* vqgraphicsscenehelpevent = const_cast<VirtualQGraphicsSceneHelpEvent*>(dynamic_cast<const VirtualQGraphicsSceneHelpEvent*>(self));
    if (vqgraphicsscenehelpevent && vqgraphicsscenehelpevent->isVirtualQGraphicsSceneHelpEvent) {
        vqgraphicsscenehelpevent->setQGraphicsSceneHelpEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneHelpEvent::QGraphicsSceneHelpEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneHelpEvent_Delete(QGraphicsSceneHelpEvent* self) {
    delete self;
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new() {
    return new VirtualQGraphicsSceneDragDropEvent();
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int typeVal) {
    return new VirtualQGraphicsSceneDragDropEvent(static_cast<QEvent::Type>(typeVal));
}

QPointF* QGraphicsSceneDragDropEvent_Pos(const QGraphicsSceneDragDropEvent* self) {
    return new QPointF(self->pos());
}

void QGraphicsSceneDragDropEvent_SetPos(QGraphicsSceneDragDropEvent* self, const QPointF* pos) {
    self->setPos(*pos);
}

QPointF* QGraphicsSceneDragDropEvent_ScenePos(const QGraphicsSceneDragDropEvent* self) {
    return new QPointF(self->scenePos());
}

void QGraphicsSceneDragDropEvent_SetScenePos(QGraphicsSceneDragDropEvent* self, const QPointF* pos) {
    self->setScenePos(*pos);
}

QPoint* QGraphicsSceneDragDropEvent_ScreenPos(const QGraphicsSceneDragDropEvent* self) {
    return new QPoint(self->screenPos());
}

void QGraphicsSceneDragDropEvent_SetScreenPos(QGraphicsSceneDragDropEvent* self, const QPoint* pos) {
    self->setScreenPos(*pos);
}

int QGraphicsSceneDragDropEvent_Buttons(const QGraphicsSceneDragDropEvent* self) {
    return static_cast<int>(self->buttons());
}

void QGraphicsSceneDragDropEvent_SetButtons(QGraphicsSceneDragDropEvent* self, int buttons) {
    self->setButtons(static_cast<Qt::MouseButtons>(buttons));
}

int QGraphicsSceneDragDropEvent_Modifiers(const QGraphicsSceneDragDropEvent* self) {
    return static_cast<int>(self->modifiers());
}

void QGraphicsSceneDragDropEvent_SetModifiers(QGraphicsSceneDragDropEvent* self, int modifiers) {
    self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QGraphicsSceneDragDropEvent_PossibleActions(const QGraphicsSceneDragDropEvent* self) {
    return static_cast<int>(self->possibleActions());
}

void QGraphicsSceneDragDropEvent_SetPossibleActions(QGraphicsSceneDragDropEvent* self, int actions) {
    self->setPossibleActions(static_cast<Qt::DropActions>(actions));
}

int QGraphicsSceneDragDropEvent_ProposedAction(const QGraphicsSceneDragDropEvent* self) {
    return static_cast<int>(self->proposedAction());
}

void QGraphicsSceneDragDropEvent_SetProposedAction(QGraphicsSceneDragDropEvent* self, int action) {
    self->setProposedAction(static_cast<Qt::DropAction>(action));
}

void QGraphicsSceneDragDropEvent_AcceptProposedAction(QGraphicsSceneDragDropEvent* self) {
    self->acceptProposedAction();
}

int QGraphicsSceneDragDropEvent_DropAction(const QGraphicsSceneDragDropEvent* self) {
    return static_cast<int>(self->dropAction());
}

void QGraphicsSceneDragDropEvent_SetDropAction(QGraphicsSceneDragDropEvent* self, int action) {
    self->setDropAction(static_cast<Qt::DropAction>(action));
}

QWidget* QGraphicsSceneDragDropEvent_Source(const QGraphicsSceneDragDropEvent* self) {
    return self->source();
}

void QGraphicsSceneDragDropEvent_SetSource(QGraphicsSceneDragDropEvent* self, QWidget* source) {
    self->setSource(source);
}

QMimeData* QGraphicsSceneDragDropEvent_MimeData(const QGraphicsSceneDragDropEvent* self) {
    return (QMimeData*)self->mimeData();
}

void QGraphicsSceneDragDropEvent_SetMimeData(QGraphicsSceneDragDropEvent* self, const QMimeData* data) {
    self->setMimeData(data);
}

// Derived class handler implementation
void QGraphicsSceneDragDropEvent_SetAccepted(QGraphicsSceneDragDropEvent* self, bool accepted) {
    auto* vqgraphicsscenedragdropevent = dynamic_cast<VirtualQGraphicsSceneDragDropEvent*>(self);
    if (vqgraphicsscenedragdropevent && vqgraphicsscenedragdropevent->isVirtualQGraphicsSceneDragDropEvent) {
        vqgraphicsscenedragdropevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneDragDropEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneDragDropEvent_QBaseSetAccepted(QGraphicsSceneDragDropEvent* self, bool accepted) {
    auto* vqgraphicsscenedragdropevent = dynamic_cast<VirtualQGraphicsSceneDragDropEvent*>(self);
    if (vqgraphicsscenedragdropevent && vqgraphicsscenedragdropevent->isVirtualQGraphicsSceneDragDropEvent) {
        vqgraphicsscenedragdropevent->setQGraphicsSceneDragDropEvent_SetAccepted_IsBase(true);
        vqgraphicsscenedragdropevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneDragDropEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneDragDropEvent_OnSetAccepted(QGraphicsSceneDragDropEvent* self, intptr_t slot) {
    auto* vqgraphicsscenedragdropevent = dynamic_cast<VirtualQGraphicsSceneDragDropEvent*>(self);
    if (vqgraphicsscenedragdropevent && vqgraphicsscenedragdropevent->isVirtualQGraphicsSceneDragDropEvent) {
        vqgraphicsscenedragdropevent->setQGraphicsSceneDragDropEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneDragDropEvent::QGraphicsSceneDragDropEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneDragDropEvent_Clone(const QGraphicsSceneDragDropEvent* self) {
    auto* vqgraphicsscenedragdropevent = const_cast<VirtualQGraphicsSceneDragDropEvent*>(dynamic_cast<const VirtualQGraphicsSceneDragDropEvent*>(self));
    if (vqgraphicsscenedragdropevent && vqgraphicsscenedragdropevent->isVirtualQGraphicsSceneDragDropEvent) {
        return vqgraphicsscenedragdropevent->clone();
    } else {
        return self->QGraphicsSceneDragDropEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneDragDropEvent_QBaseClone(const QGraphicsSceneDragDropEvent* self) {
    auto* vqgraphicsscenedragdropevent = const_cast<VirtualQGraphicsSceneDragDropEvent*>(dynamic_cast<const VirtualQGraphicsSceneDragDropEvent*>(self));
    if (vqgraphicsscenedragdropevent && vqgraphicsscenedragdropevent->isVirtualQGraphicsSceneDragDropEvent) {
        vqgraphicsscenedragdropevent->setQGraphicsSceneDragDropEvent_Clone_IsBase(true);
        return vqgraphicsscenedragdropevent->clone();
    } else {
        return self->QGraphicsSceneDragDropEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneDragDropEvent_OnClone(const QGraphicsSceneDragDropEvent* self, intptr_t slot) {
    auto* vqgraphicsscenedragdropevent = const_cast<VirtualQGraphicsSceneDragDropEvent*>(dynamic_cast<const VirtualQGraphicsSceneDragDropEvent*>(self));
    if (vqgraphicsscenedragdropevent && vqgraphicsscenedragdropevent->isVirtualQGraphicsSceneDragDropEvent) {
        vqgraphicsscenedragdropevent->setQGraphicsSceneDragDropEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneDragDropEvent::QGraphicsSceneDragDropEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneDragDropEvent_Delete(QGraphicsSceneDragDropEvent* self) {
    delete self;
}

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new() {
    return new VirtualQGraphicsSceneResizeEvent();
}

QSizeF* QGraphicsSceneResizeEvent_OldSize(const QGraphicsSceneResizeEvent* self) {
    return new QSizeF(self->oldSize());
}

void QGraphicsSceneResizeEvent_SetOldSize(QGraphicsSceneResizeEvent* self, const QSizeF* size) {
    self->setOldSize(*size);
}

QSizeF* QGraphicsSceneResizeEvent_NewSize(const QGraphicsSceneResizeEvent* self) {
    return new QSizeF(self->newSize());
}

void QGraphicsSceneResizeEvent_SetNewSize(QGraphicsSceneResizeEvent* self, const QSizeF* size) {
    self->setNewSize(*size);
}

// Derived class handler implementation
void QGraphicsSceneResizeEvent_SetAccepted(QGraphicsSceneResizeEvent* self, bool accepted) {
    auto* vqgraphicssceneresizeevent = dynamic_cast<VirtualQGraphicsSceneResizeEvent*>(self);
    if (vqgraphicssceneresizeevent && vqgraphicssceneresizeevent->isVirtualQGraphicsSceneResizeEvent) {
        vqgraphicssceneresizeevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneResizeEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneResizeEvent_QBaseSetAccepted(QGraphicsSceneResizeEvent* self, bool accepted) {
    auto* vqgraphicssceneresizeevent = dynamic_cast<VirtualQGraphicsSceneResizeEvent*>(self);
    if (vqgraphicssceneresizeevent && vqgraphicssceneresizeevent->isVirtualQGraphicsSceneResizeEvent) {
        vqgraphicssceneresizeevent->setQGraphicsSceneResizeEvent_SetAccepted_IsBase(true);
        vqgraphicssceneresizeevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneResizeEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneResizeEvent_OnSetAccepted(QGraphicsSceneResizeEvent* self, intptr_t slot) {
    auto* vqgraphicssceneresizeevent = dynamic_cast<VirtualQGraphicsSceneResizeEvent*>(self);
    if (vqgraphicssceneresizeevent && vqgraphicssceneresizeevent->isVirtualQGraphicsSceneResizeEvent) {
        vqgraphicssceneresizeevent->setQGraphicsSceneResizeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneResizeEvent::QGraphicsSceneResizeEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneResizeEvent_Clone(const QGraphicsSceneResizeEvent* self) {
    auto* vqgraphicssceneresizeevent = const_cast<VirtualQGraphicsSceneResizeEvent*>(dynamic_cast<const VirtualQGraphicsSceneResizeEvent*>(self));
    if (vqgraphicssceneresizeevent && vqgraphicssceneresizeevent->isVirtualQGraphicsSceneResizeEvent) {
        return vqgraphicssceneresizeevent->clone();
    } else {
        return self->QGraphicsSceneResizeEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneResizeEvent_QBaseClone(const QGraphicsSceneResizeEvent* self) {
    auto* vqgraphicssceneresizeevent = const_cast<VirtualQGraphicsSceneResizeEvent*>(dynamic_cast<const VirtualQGraphicsSceneResizeEvent*>(self));
    if (vqgraphicssceneresizeevent && vqgraphicssceneresizeevent->isVirtualQGraphicsSceneResizeEvent) {
        vqgraphicssceneresizeevent->setQGraphicsSceneResizeEvent_Clone_IsBase(true);
        return vqgraphicssceneresizeevent->clone();
    } else {
        return self->QGraphicsSceneResizeEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneResizeEvent_OnClone(const QGraphicsSceneResizeEvent* self, intptr_t slot) {
    auto* vqgraphicssceneresizeevent = const_cast<VirtualQGraphicsSceneResizeEvent*>(dynamic_cast<const VirtualQGraphicsSceneResizeEvent*>(self));
    if (vqgraphicssceneresizeevent && vqgraphicssceneresizeevent->isVirtualQGraphicsSceneResizeEvent) {
        vqgraphicssceneresizeevent->setQGraphicsSceneResizeEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneResizeEvent::QGraphicsSceneResizeEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneResizeEvent_Delete(QGraphicsSceneResizeEvent* self) {
    delete self;
}

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new() {
    return new VirtualQGraphicsSceneMoveEvent();
}

QPointF* QGraphicsSceneMoveEvent_OldPos(const QGraphicsSceneMoveEvent* self) {
    return new QPointF(self->oldPos());
}

void QGraphicsSceneMoveEvent_SetOldPos(QGraphicsSceneMoveEvent* self, const QPointF* pos) {
    self->setOldPos(*pos);
}

QPointF* QGraphicsSceneMoveEvent_NewPos(const QGraphicsSceneMoveEvent* self) {
    return new QPointF(self->newPos());
}

void QGraphicsSceneMoveEvent_SetNewPos(QGraphicsSceneMoveEvent* self, const QPointF* pos) {
    self->setNewPos(*pos);
}

// Derived class handler implementation
void QGraphicsSceneMoveEvent_SetAccepted(QGraphicsSceneMoveEvent* self, bool accepted) {
    auto* vqgraphicsscenemoveevent = dynamic_cast<VirtualQGraphicsSceneMoveEvent*>(self);
    if (vqgraphicsscenemoveevent && vqgraphicsscenemoveevent->isVirtualQGraphicsSceneMoveEvent) {
        vqgraphicsscenemoveevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneMoveEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QGraphicsSceneMoveEvent_QBaseSetAccepted(QGraphicsSceneMoveEvent* self, bool accepted) {
    auto* vqgraphicsscenemoveevent = dynamic_cast<VirtualQGraphicsSceneMoveEvent*>(self);
    if (vqgraphicsscenemoveevent && vqgraphicsscenemoveevent->isVirtualQGraphicsSceneMoveEvent) {
        vqgraphicsscenemoveevent->setQGraphicsSceneMoveEvent_SetAccepted_IsBase(true);
        vqgraphicsscenemoveevent->setAccepted(accepted);
    } else {
        self->QGraphicsSceneMoveEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneMoveEvent_OnSetAccepted(QGraphicsSceneMoveEvent* self, intptr_t slot) {
    auto* vqgraphicsscenemoveevent = dynamic_cast<VirtualQGraphicsSceneMoveEvent*>(self);
    if (vqgraphicsscenemoveevent && vqgraphicsscenemoveevent->isVirtualQGraphicsSceneMoveEvent) {
        vqgraphicsscenemoveevent->setQGraphicsSceneMoveEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGraphicsSceneMoveEvent::QGraphicsSceneMoveEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGraphicsSceneMoveEvent_Clone(const QGraphicsSceneMoveEvent* self) {
    auto* vqgraphicsscenemoveevent = const_cast<VirtualQGraphicsSceneMoveEvent*>(dynamic_cast<const VirtualQGraphicsSceneMoveEvent*>(self));
    if (vqgraphicsscenemoveevent && vqgraphicsscenemoveevent->isVirtualQGraphicsSceneMoveEvent) {
        return vqgraphicsscenemoveevent->clone();
    } else {
        return self->QGraphicsSceneMoveEvent::clone();
    }
}

// Base class handler implementation
QEvent* QGraphicsSceneMoveEvent_QBaseClone(const QGraphicsSceneMoveEvent* self) {
    auto* vqgraphicsscenemoveevent = const_cast<VirtualQGraphicsSceneMoveEvent*>(dynamic_cast<const VirtualQGraphicsSceneMoveEvent*>(self));
    if (vqgraphicsscenemoveevent && vqgraphicsscenemoveevent->isVirtualQGraphicsSceneMoveEvent) {
        vqgraphicsscenemoveevent->setQGraphicsSceneMoveEvent_Clone_IsBase(true);
        return vqgraphicsscenemoveevent->clone();
    } else {
        return self->QGraphicsSceneMoveEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSceneMoveEvent_OnClone(const QGraphicsSceneMoveEvent* self, intptr_t slot) {
    auto* vqgraphicsscenemoveevent = const_cast<VirtualQGraphicsSceneMoveEvent*>(dynamic_cast<const VirtualQGraphicsSceneMoveEvent*>(self));
    if (vqgraphicsscenemoveevent && vqgraphicsscenemoveevent->isVirtualQGraphicsSceneMoveEvent) {
        vqgraphicsscenemoveevent->setQGraphicsSceneMoveEvent_Clone_Callback(reinterpret_cast<VirtualQGraphicsSceneMoveEvent::QGraphicsSceneMoveEvent_Clone_Callback>(slot));
    }
}

void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self) {
    delete self;
}
