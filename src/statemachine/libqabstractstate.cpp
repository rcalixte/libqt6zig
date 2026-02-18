#include <QAbstractState>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractstate.h>
#include "libqabstractstate.h"
#include "libqabstractstate.hxx"

QMetaObject* QAbstractState_MetaObject(const QAbstractState* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractState_Metacast(QAbstractState* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractState_Metacall(QAbstractState* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QState* QAbstractState_ParentState(const QAbstractState* self) {
    return self->parentState();
}

QStateMachine* QAbstractState_Machine(const QAbstractState* self) {
    return self->machine();
}

bool QAbstractState_Active(const QAbstractState* self) {
    return self->active();
}

void QAbstractState_ActiveChanged(QAbstractState* self, bool active) {
    self->activeChanged(active);
}

void QAbstractState_Connect_ActiveChanged(QAbstractState* self, intptr_t slot) {
    void (*slotFunc)(QAbstractState*, bool) = reinterpret_cast<void (*)(QAbstractState*, bool)>(slot);
    QAbstractState::connect(self, &QAbstractState::activeChanged, [self, slotFunc](bool active) {
        bool sigval1 = active;
        slotFunc(self, sigval1);
    });
}

void QAbstractState_Connect_Entered(QAbstractState* self, intptr_t slot) {
    void (*slotFunc)(QAbstractState*) = reinterpret_cast<void (*)(QAbstractState*)>(slot);
    QAbstractState::connect(self, &QAbstractState::entered, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractState_Connect_Exited(QAbstractState* self, intptr_t slot) {
    void (*slotFunc)(QAbstractState*) = reinterpret_cast<void (*)(QAbstractState*)>(slot);
    QAbstractState::connect(self, &QAbstractState::exited, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractState_Delete(QAbstractState* self) {
    delete self;
}
