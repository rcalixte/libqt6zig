#include <QAbstractState>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QString>
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

libqt_string QAbstractState_Tr(const char* s) {
    auto _ret = QAbstractState::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

libqt_string QAbstractState_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractState::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractState_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractState::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
