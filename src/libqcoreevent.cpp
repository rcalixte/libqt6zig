#include <QByteArray>
#include <QChildEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include <qcoreevent.h>
#include "libqcoreevent.h"
#include "libqcoreevent.hxx"

QEvent* QEvent_new(int typeVal) {
    return new VirtualQEvent(static_cast<QEvent::Type>(typeVal));
}

int QEvent_Type(const QEvent* self) {
    return static_cast<int>(self->type());
}

bool QEvent_Spontaneous(const QEvent* self) {
    return self->spontaneous();
}

void QEvent_SetAccepted(QEvent* self, bool accepted) {
    auto* vqevent = dynamic_cast<VirtualQEvent*>(self);
    if (vqevent && vqevent->isVirtualQEvent) {
        self->setAccepted(accepted);
    } else {
        ((VirtualQEvent*)self)->setAccepted(accepted);
    }
}

bool QEvent_IsAccepted(const QEvent* self) {
    return self->isAccepted();
}

void QEvent_Accept(QEvent* self) {
    self->accept();
}

void QEvent_Ignore(QEvent* self) {
    self->ignore();
}

bool QEvent_IsInputEvent(const QEvent* self) {
    return self->isInputEvent();
}

bool QEvent_IsPointerEvent(const QEvent* self) {
    return self->isPointerEvent();
}

bool QEvent_IsSinglePointEvent(const QEvent* self) {
    return self->isSinglePointEvent();
}

int QEvent_RegisterEventType() {
    return QEvent::registerEventType();
}

QEvent* QEvent_Clone(const QEvent* self) {
    auto* vqevent = dynamic_cast<const VirtualQEvent*>(self);
    if (vqevent && vqevent->isVirtualQEvent) {
        return self->clone();
    } else {
        return ((VirtualQEvent*)self)->clone();
    }
}

int QEvent_RegisterEventType1(int hint) {
    return QEvent::registerEventType(static_cast<int>(hint));
}

// Base class handler implementation
void QEvent_QBaseSetAccepted(QEvent* self, bool accepted) {
    auto* vqevent = dynamic_cast<VirtualQEvent*>(self);
    if (vqevent && vqevent->isVirtualQEvent) {
        vqevent->setQEvent_SetAccepted_IsBase(true);
        vqevent->setAccepted(accepted);
    } else {
        self->QEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QEvent_OnSetAccepted(QEvent* self, intptr_t slot) {
    auto* vqevent = dynamic_cast<VirtualQEvent*>(self);
    if (vqevent && vqevent->isVirtualQEvent) {
        vqevent->setQEvent_SetAccepted_Callback(reinterpret_cast<VirtualQEvent::QEvent_SetAccepted_Callback>(slot));
    }
}

// Base class handler implementation
QEvent* QEvent_QBaseClone(const QEvent* self) {
    auto* vqevent = const_cast<VirtualQEvent*>(dynamic_cast<const VirtualQEvent*>(self));
    if (vqevent && vqevent->isVirtualQEvent) {
        vqevent->setQEvent_Clone_IsBase(true);
        return vqevent->clone();
    } else {
        return self->QEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QEvent_OnClone(const QEvent* self, intptr_t slot) {
    auto* vqevent = const_cast<VirtualQEvent*>(dynamic_cast<const VirtualQEvent*>(self));
    if (vqevent && vqevent->isVirtualQEvent) {
        vqevent->setQEvent_Clone_Callback(reinterpret_cast<VirtualQEvent::QEvent_Clone_Callback>(slot));
    }
}

void QEvent_Delete(QEvent* self) {
    delete self;
}

QTimerEvent* QTimerEvent_new(int timerId) {
    return new VirtualQTimerEvent(static_cast<int>(timerId));
}

QTimerEvent* QTimerEvent_new2(int timerId) {
    return new VirtualQTimerEvent(static_cast<Qt::TimerId>(timerId));
}

QTimerEvent* QTimerEvent_Clone(const QTimerEvent* self) {
    auto* vqtimerevent = dynamic_cast<const VirtualQTimerEvent*>(self);
    if (vqtimerevent && vqtimerevent->isVirtualQTimerEvent) {
        return self->clone();
    } else {
        return ((VirtualQTimerEvent*)self)->clone();
    }
}

int QTimerEvent_TimerId(const QTimerEvent* self) {
    return self->timerId();
}

int QTimerEvent_Id(const QTimerEvent* self) {
    return static_cast<int>(self->id());
}

// Base class handler implementation
QTimerEvent* QTimerEvent_QBaseClone(const QTimerEvent* self) {
    auto* vqtimerevent = const_cast<VirtualQTimerEvent*>(dynamic_cast<const VirtualQTimerEvent*>(self));
    if (vqtimerevent && vqtimerevent->isVirtualQTimerEvent) {
        vqtimerevent->setQTimerEvent_Clone_IsBase(true);
        return vqtimerevent->clone();
    } else {
        return self->QTimerEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimerEvent_OnClone(const QTimerEvent* self, intptr_t slot) {
    auto* vqtimerevent = const_cast<VirtualQTimerEvent*>(dynamic_cast<const VirtualQTimerEvent*>(self));
    if (vqtimerevent && vqtimerevent->isVirtualQTimerEvent) {
        vqtimerevent->setQTimerEvent_Clone_Callback(reinterpret_cast<VirtualQTimerEvent::QTimerEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimerEvent_SetAccepted(QTimerEvent* self, bool accepted) {
    auto* vqtimerevent = dynamic_cast<VirtualQTimerEvent*>(self);
    if (vqtimerevent && vqtimerevent->isVirtualQTimerEvent) {
        vqtimerevent->setAccepted(accepted);
    } else {
        self->QTimerEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QTimerEvent_QBaseSetAccepted(QTimerEvent* self, bool accepted) {
    auto* vqtimerevent = dynamic_cast<VirtualQTimerEvent*>(self);
    if (vqtimerevent && vqtimerevent->isVirtualQTimerEvent) {
        vqtimerevent->setQTimerEvent_SetAccepted_IsBase(true);
        vqtimerevent->setAccepted(accepted);
    } else {
        self->QTimerEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimerEvent_OnSetAccepted(QTimerEvent* self, intptr_t slot) {
    auto* vqtimerevent = dynamic_cast<VirtualQTimerEvent*>(self);
    if (vqtimerevent && vqtimerevent->isVirtualQTimerEvent) {
        vqtimerevent->setQTimerEvent_SetAccepted_Callback(reinterpret_cast<VirtualQTimerEvent::QTimerEvent_SetAccepted_Callback>(slot));
    }
}

void QTimerEvent_Delete(QTimerEvent* self) {
    delete self;
}

QChildEvent* QChildEvent_new(int typeVal, QObject* child) {
    return new VirtualQChildEvent(static_cast<QEvent::Type>(typeVal), child);
}

QChildEvent* QChildEvent_Clone(const QChildEvent* self) {
    auto* vqchildevent = dynamic_cast<const VirtualQChildEvent*>(self);
    if (vqchildevent && vqchildevent->isVirtualQChildEvent) {
        return self->clone();
    } else {
        return ((VirtualQChildEvent*)self)->clone();
    }
}

QObject* QChildEvent_Child(const QChildEvent* self) {
    return self->child();
}

bool QChildEvent_Added(const QChildEvent* self) {
    return self->added();
}

bool QChildEvent_Polished(const QChildEvent* self) {
    return self->polished();
}

bool QChildEvent_Removed(const QChildEvent* self) {
    return self->removed();
}

// Base class handler implementation
QChildEvent* QChildEvent_QBaseClone(const QChildEvent* self) {
    auto* vqchildevent = const_cast<VirtualQChildEvent*>(dynamic_cast<const VirtualQChildEvent*>(self));
    if (vqchildevent && vqchildevent->isVirtualQChildEvent) {
        vqchildevent->setQChildEvent_Clone_IsBase(true);
        return vqchildevent->clone();
    } else {
        return self->QChildEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QChildEvent_OnClone(const QChildEvent* self, intptr_t slot) {
    auto* vqchildevent = const_cast<VirtualQChildEvent*>(dynamic_cast<const VirtualQChildEvent*>(self));
    if (vqchildevent && vqchildevent->isVirtualQChildEvent) {
        vqchildevent->setQChildEvent_Clone_Callback(reinterpret_cast<VirtualQChildEvent::QChildEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QChildEvent_SetAccepted(QChildEvent* self, bool accepted) {
    auto* vqchildevent = dynamic_cast<VirtualQChildEvent*>(self);
    if (vqchildevent && vqchildevent->isVirtualQChildEvent) {
        vqchildevent->setAccepted(accepted);
    } else {
        self->QChildEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QChildEvent_QBaseSetAccepted(QChildEvent* self, bool accepted) {
    auto* vqchildevent = dynamic_cast<VirtualQChildEvent*>(self);
    if (vqchildevent && vqchildevent->isVirtualQChildEvent) {
        vqchildevent->setQChildEvent_SetAccepted_IsBase(true);
        vqchildevent->setAccepted(accepted);
    } else {
        self->QChildEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QChildEvent_OnSetAccepted(QChildEvent* self, intptr_t slot) {
    auto* vqchildevent = dynamic_cast<VirtualQChildEvent*>(self);
    if (vqchildevent && vqchildevent->isVirtualQChildEvent) {
        vqchildevent->setQChildEvent_SetAccepted_Callback(reinterpret_cast<VirtualQChildEvent::QChildEvent_SetAccepted_Callback>(slot));
    }
}

void QChildEvent_Delete(QChildEvent* self) {
    delete self;
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return new VirtualQDynamicPropertyChangeEvent(name_QByteArray);
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_Clone(const QDynamicPropertyChangeEvent* self) {
    auto* vqdynamicpropertychangeevent = dynamic_cast<const VirtualQDynamicPropertyChangeEvent*>(self);
    if (vqdynamicpropertychangeevent && vqdynamicpropertychangeevent->isVirtualQDynamicPropertyChangeEvent) {
        return self->clone();
    } else {
        return ((VirtualQDynamicPropertyChangeEvent*)self)->clone();
    }
}

libqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self) {
    QByteArray _qb = self->propertyName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_QBaseClone(const QDynamicPropertyChangeEvent* self) {
    auto* vqdynamicpropertychangeevent = const_cast<VirtualQDynamicPropertyChangeEvent*>(dynamic_cast<const VirtualQDynamicPropertyChangeEvent*>(self));
    if (vqdynamicpropertychangeevent && vqdynamicpropertychangeevent->isVirtualQDynamicPropertyChangeEvent) {
        vqdynamicpropertychangeevent->setQDynamicPropertyChangeEvent_Clone_IsBase(true);
        return vqdynamicpropertychangeevent->clone();
    } else {
        return self->QDynamicPropertyChangeEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDynamicPropertyChangeEvent_OnClone(const QDynamicPropertyChangeEvent* self, intptr_t slot) {
    auto* vqdynamicpropertychangeevent = const_cast<VirtualQDynamicPropertyChangeEvent*>(dynamic_cast<const VirtualQDynamicPropertyChangeEvent*>(self));
    if (vqdynamicpropertychangeevent && vqdynamicpropertychangeevent->isVirtualQDynamicPropertyChangeEvent) {
        vqdynamicpropertychangeevent->setQDynamicPropertyChangeEvent_Clone_Callback(reinterpret_cast<VirtualQDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDynamicPropertyChangeEvent_SetAccepted(QDynamicPropertyChangeEvent* self, bool accepted) {
    auto* vqdynamicpropertychangeevent = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>(self);
    if (vqdynamicpropertychangeevent && vqdynamicpropertychangeevent->isVirtualQDynamicPropertyChangeEvent) {
        vqdynamicpropertychangeevent->setAccepted(accepted);
    } else {
        self->QDynamicPropertyChangeEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QDynamicPropertyChangeEvent_QBaseSetAccepted(QDynamicPropertyChangeEvent* self, bool accepted) {
    auto* vqdynamicpropertychangeevent = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>(self);
    if (vqdynamicpropertychangeevent && vqdynamicpropertychangeevent->isVirtualQDynamicPropertyChangeEvent) {
        vqdynamicpropertychangeevent->setQDynamicPropertyChangeEvent_SetAccepted_IsBase(true);
        vqdynamicpropertychangeevent->setAccepted(accepted);
    } else {
        self->QDynamicPropertyChangeEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDynamicPropertyChangeEvent_OnSetAccepted(QDynamicPropertyChangeEvent* self, intptr_t slot) {
    auto* vqdynamicpropertychangeevent = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>(self);
    if (vqdynamicpropertychangeevent && vqdynamicpropertychangeevent->isVirtualQDynamicPropertyChangeEvent) {
        vqdynamicpropertychangeevent->setQDynamicPropertyChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self) {
    delete self;
}
