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
    self->setAccepted(accepted);
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
    return self->clone();
}

int QEvent_RegisterEventType1(int hint) {
    return QEvent::registerEventType(static_cast<int>(hint));
}

// Base class handler implementation
void QEvent_SuperSetAccepted(QEvent* self, bool accepted) {
    self->QEvent::setAccepted(accepted);
}

// Auxiliary method to allow providing re-implementation
void QEvent_OnSetAccepted(QEvent* self, intptr_t slot) {
    if (auto* vqevent = dynamic_cast<VirtualQEvent*>(self))
        vqevent->qevent_setaccepted_callback = reinterpret_cast<VirtualQEvent::QEvent_SetAccepted_Callback>(slot);
}

// Base class handler implementation
QEvent* QEvent_SuperClone(const QEvent* self) {
    return self->QEvent::clone();
}

// Auxiliary method to allow providing re-implementation
void QEvent_OnClone(QEvent* self, intptr_t slot) {
    if (auto* vqevent = const_cast<VirtualQEvent*>(dynamic_cast<const VirtualQEvent*>(self)))
        vqevent->qevent_clone_callback = reinterpret_cast<VirtualQEvent::QEvent_Clone_Callback>(slot);
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
    return self->clone();
}

int QTimerEvent_TimerId(const QTimerEvent* self) {
    return self->timerId();
}

int QTimerEvent_Id(const QTimerEvent* self) {
    return static_cast<int>(self->id());
}

// Base class handler implementation
QTimerEvent* QTimerEvent_SuperClone(const QTimerEvent* self) {
    return self->QTimerEvent::clone();
}

// Auxiliary method to allow providing re-implementation
void QTimerEvent_OnClone(QTimerEvent* self, intptr_t slot) {
    if (auto* vqtimerevent = const_cast<VirtualQTimerEvent*>(dynamic_cast<const VirtualQTimerEvent*>(self)))
        vqtimerevent->qtimerevent_clone_callback = reinterpret_cast<VirtualQTimerEvent::QTimerEvent_Clone_Callback>(slot);
}

// Derived class handler implementation
void QTimerEvent_SetAccepted(QTimerEvent* self, bool accepted) {
    self->setAccepted(accepted);
}

// Base class handler implementation
void QTimerEvent_SuperSetAccepted(QTimerEvent* self, bool accepted) {
    self->QTimerEvent::setAccepted(accepted);
}

// Auxiliary method to allow providing re-implementation
void QTimerEvent_OnSetAccepted(QTimerEvent* self, intptr_t slot) {
    if (auto* vqtimerevent = dynamic_cast<VirtualQTimerEvent*>(self))
        vqtimerevent->qtimerevent_setaccepted_callback = reinterpret_cast<VirtualQTimerEvent::QTimerEvent_SetAccepted_Callback>(slot);
}

void QTimerEvent_Delete(QTimerEvent* self) {
    delete self;
}

QChildEvent* QChildEvent_new(int typeVal, QObject* child) {
    return new VirtualQChildEvent(static_cast<QEvent::Type>(typeVal), child);
}

QChildEvent* QChildEvent_Clone(const QChildEvent* self) {
    return self->clone();
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
QChildEvent* QChildEvent_SuperClone(const QChildEvent* self) {
    return self->QChildEvent::clone();
}

// Auxiliary method to allow providing re-implementation
void QChildEvent_OnClone(QChildEvent* self, intptr_t slot) {
    if (auto* vqchildevent = const_cast<VirtualQChildEvent*>(dynamic_cast<const VirtualQChildEvent*>(self)))
        vqchildevent->qchildevent_clone_callback = reinterpret_cast<VirtualQChildEvent::QChildEvent_Clone_Callback>(slot);
}

// Derived class handler implementation
void QChildEvent_SetAccepted(QChildEvent* self, bool accepted) {
    self->setAccepted(accepted);
}

// Base class handler implementation
void QChildEvent_SuperSetAccepted(QChildEvent* self, bool accepted) {
    self->QChildEvent::setAccepted(accepted);
}

// Auxiliary method to allow providing re-implementation
void QChildEvent_OnSetAccepted(QChildEvent* self, intptr_t slot) {
    if (auto* vqchildevent = dynamic_cast<VirtualQChildEvent*>(self))
        vqchildevent->qchildevent_setaccepted_callback = reinterpret_cast<VirtualQChildEvent::QChildEvent_SetAccepted_Callback>(slot);
}

void QChildEvent_Delete(QChildEvent* self) {
    delete self;
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return new VirtualQDynamicPropertyChangeEvent(name_QByteArray);
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_Clone(const QDynamicPropertyChangeEvent* self) {
    return self->clone();
}

libqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self) {
    QByteArray _qb = self->propertyName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

// Base class handler implementation
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_SuperClone(const QDynamicPropertyChangeEvent* self) {
    return self->QDynamicPropertyChangeEvent::clone();
}

// Auxiliary method to allow providing re-implementation
void QDynamicPropertyChangeEvent_OnClone(QDynamicPropertyChangeEvent* self, intptr_t slot) {
    if (auto* vqdynamicpropertychangeevent = const_cast<VirtualQDynamicPropertyChangeEvent*>(dynamic_cast<const VirtualQDynamicPropertyChangeEvent*>(self)))
        vqdynamicpropertychangeevent->qdynamicpropertychangeevent_clone_callback = reinterpret_cast<VirtualQDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent_Clone_Callback>(slot);
}

// Derived class handler implementation
void QDynamicPropertyChangeEvent_SetAccepted(QDynamicPropertyChangeEvent* self, bool accepted) {
    self->setAccepted(accepted);
}

// Base class handler implementation
void QDynamicPropertyChangeEvent_SuperSetAccepted(QDynamicPropertyChangeEvent* self, bool accepted) {
    self->QDynamicPropertyChangeEvent::setAccepted(accepted);
}

// Auxiliary method to allow providing re-implementation
void QDynamicPropertyChangeEvent_OnSetAccepted(QDynamicPropertyChangeEvent* self, intptr_t slot) {
    if (auto* vqdynamicpropertychangeevent = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>(self))
        vqdynamicpropertychangeevent->qdynamicpropertychangeevent_setaccepted_callback = reinterpret_cast<VirtualQDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent_SetAccepted_Callback>(slot);
}

void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self) {
    delete self;
}
