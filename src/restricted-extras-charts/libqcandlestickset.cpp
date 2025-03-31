#include <QAnyStringView>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QCandlestickSet>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qcandlestickset.h>
#include "libqcandlestickset.h"
#include "libqcandlestickset.hxx"

QCandlestickSet* QCandlestickSet_new() {
    return new VirtualQCandlestickSet();
}

QCandlestickSet* QCandlestickSet_new2(double open, double high, double low, double close) {
    return new VirtualQCandlestickSet(static_cast<qreal>(open), static_cast<qreal>(high), static_cast<qreal>(low), static_cast<qreal>(close));
}

QCandlestickSet* QCandlestickSet_new3(double timestamp) {
    return new VirtualQCandlestickSet(static_cast<qreal>(timestamp));
}

QCandlestickSet* QCandlestickSet_new4(double timestamp, QObject* parent) {
    return new VirtualQCandlestickSet(static_cast<qreal>(timestamp), parent);
}

QCandlestickSet* QCandlestickSet_new5(double open, double high, double low, double close, double timestamp) {
    return new VirtualQCandlestickSet(static_cast<qreal>(open), static_cast<qreal>(high), static_cast<qreal>(low), static_cast<qreal>(close), static_cast<qreal>(timestamp));
}

QCandlestickSet* QCandlestickSet_new6(double open, double high, double low, double close, double timestamp, QObject* parent) {
    return new VirtualQCandlestickSet(static_cast<qreal>(open), static_cast<qreal>(high), static_cast<qreal>(low), static_cast<qreal>(close), static_cast<qreal>(timestamp), parent);
}

QMetaObject* QCandlestickSet_MetaObject(const QCandlestickSet* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCandlestickSet_Metacast(QCandlestickSet* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCandlestickSet_Metacall(QCandlestickSet* self, int param1, int param2, void** param3) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCandlestickSet_OnMetacall(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_Metacall_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCandlestickSet_QBaseMetacall(QCandlestickSet* self, int param1, int param2, void** param3) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_Metacall_IsBase(true);
        return vqcandlestickset->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCandlestickSet_Tr(const char* s) {
    QString _ret = QCandlestickSet::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCandlestickSet_SetTimestamp(QCandlestickSet* self, double timestamp) {
    self->setTimestamp(static_cast<qreal>(timestamp));
}

double QCandlestickSet_Timestamp(const QCandlestickSet* self) {
    return static_cast<double>(self->timestamp());
}

void QCandlestickSet_SetOpen(QCandlestickSet* self, double open) {
    self->setOpen(static_cast<qreal>(open));
}

double QCandlestickSet_Open(const QCandlestickSet* self) {
    return static_cast<double>(self->open());
}

void QCandlestickSet_SetHigh(QCandlestickSet* self, double high) {
    self->setHigh(static_cast<qreal>(high));
}

double QCandlestickSet_High(const QCandlestickSet* self) {
    return static_cast<double>(self->high());
}

void QCandlestickSet_SetLow(QCandlestickSet* self, double low) {
    self->setLow(static_cast<qreal>(low));
}

double QCandlestickSet_Low(const QCandlestickSet* self) {
    return static_cast<double>(self->low());
}

void QCandlestickSet_SetClose(QCandlestickSet* self, double close) {
    self->setClose(static_cast<qreal>(close));
}

double QCandlestickSet_Close(const QCandlestickSet* self) {
    return static_cast<double>(self->close());
}

void QCandlestickSet_SetBrush(QCandlestickSet* self, QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QCandlestickSet_Brush(const QCandlestickSet* self) {
    return new QBrush(self->brush());
}

void QCandlestickSet_SetPen(QCandlestickSet* self, QPen* pen) {
    self->setPen(*pen);
}

QPen* QCandlestickSet_Pen(const QCandlestickSet* self) {
    return new QPen(self->pen());
}

void QCandlestickSet_Clicked(QCandlestickSet* self) {
    self->clicked();
}

void QCandlestickSet_Connect_Clicked(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::clicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_Hovered(QCandlestickSet* self, bool status) {
    self->hovered(status);
}

void QCandlestickSet_Connect_Hovered(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*, bool) = reinterpret_cast<void (*)(QCandlestickSet*, bool)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::hovered, [self, slotFunc](bool status) {
        bool sigval1 = status;
        slotFunc(self, sigval1);
    });
}

void QCandlestickSet_Pressed(QCandlestickSet* self) {
    self->pressed();
}

void QCandlestickSet_Connect_Pressed(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::pressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_Released(QCandlestickSet* self) {
    self->released();
}

void QCandlestickSet_Connect_Released(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::released, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_DoubleClicked(QCandlestickSet* self) {
    self->doubleClicked();
}

void QCandlestickSet_Connect_DoubleClicked(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::doubleClicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_TimestampChanged(QCandlestickSet* self) {
    self->timestampChanged();
}

void QCandlestickSet_Connect_TimestampChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::timestampChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_OpenChanged(QCandlestickSet* self) {
    self->openChanged();
}

void QCandlestickSet_Connect_OpenChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::openChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_HighChanged(QCandlestickSet* self) {
    self->highChanged();
}

void QCandlestickSet_Connect_HighChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::highChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_LowChanged(QCandlestickSet* self) {
    self->lowChanged();
}

void QCandlestickSet_Connect_LowChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::lowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_CloseChanged(QCandlestickSet* self) {
    self->closeChanged();
}

void QCandlestickSet_Connect_CloseChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::closeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_BrushChanged(QCandlestickSet* self) {
    self->brushChanged();
}

void QCandlestickSet_Connect_BrushChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::brushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSet_PenChanged(QCandlestickSet* self) {
    self->penChanged();
}

void QCandlestickSet_Connect_PenChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self, &QCandlestickSet::penChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QCandlestickSet_Tr2(const char* s, const char* c) {
    QString _ret = QCandlestickSet::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCandlestickSet_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCandlestickSet::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QCandlestickSet_Event(QCandlestickSet* self, QEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        return vqcandlestickset->event(event);
    } else {
        return vqcandlestickset->event(event);
    }
}

// Base class handler implementation
bool QCandlestickSet_QBaseEvent(QCandlestickSet* self, QEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_Event_IsBase(true);
        return vqcandlestickset->event(event);
    } else {
        return vqcandlestickset->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnEvent(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_Event_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickSet_EventFilter(QCandlestickSet* self, QObject* watched, QEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        return vqcandlestickset->eventFilter(watched, event);
    } else {
        return vqcandlestickset->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCandlestickSet_QBaseEventFilter(QCandlestickSet* self, QObject* watched, QEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_EventFilter_IsBase(true);
        return vqcandlestickset->eventFilter(watched, event);
    } else {
        return vqcandlestickset->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnEventFilter(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_EventFilter_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSet_TimerEvent(QCandlestickSet* self, QTimerEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->timerEvent(event);
    } else {
        vqcandlestickset->timerEvent(event);
    }
}

// Base class handler implementation
void QCandlestickSet_QBaseTimerEvent(QCandlestickSet* self, QTimerEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_TimerEvent_IsBase(true);
        vqcandlestickset->timerEvent(event);
    } else {
        vqcandlestickset->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnTimerEvent(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_TimerEvent_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSet_ChildEvent(QCandlestickSet* self, QChildEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->childEvent(event);
    } else {
        vqcandlestickset->childEvent(event);
    }
}

// Base class handler implementation
void QCandlestickSet_QBaseChildEvent(QCandlestickSet* self, QChildEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_ChildEvent_IsBase(true);
        vqcandlestickset->childEvent(event);
    } else {
        vqcandlestickset->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnChildEvent(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_ChildEvent_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSet_CustomEvent(QCandlestickSet* self, QEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->customEvent(event);
    } else {
        vqcandlestickset->customEvent(event);
    }
}

// Base class handler implementation
void QCandlestickSet_QBaseCustomEvent(QCandlestickSet* self, QEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_CustomEvent_IsBase(true);
        vqcandlestickset->customEvent(event);
    } else {
        vqcandlestickset->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnCustomEvent(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_CustomEvent_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSet_ConnectNotify(QCandlestickSet* self, QMetaMethod* signal) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->connectNotify(*signal);
    } else {
        vqcandlestickset->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCandlestickSet_QBaseConnectNotify(QCandlestickSet* self, QMetaMethod* signal) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_ConnectNotify_IsBase(true);
        vqcandlestickset->connectNotify(*signal);
    } else {
        vqcandlestickset->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnConnectNotify(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_ConnectNotify_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSet_DisconnectNotify(QCandlestickSet* self, QMetaMethod* signal) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->disconnectNotify(*signal);
    } else {
        vqcandlestickset->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCandlestickSet_QBaseDisconnectNotify(QCandlestickSet* self, QMetaMethod* signal) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_DisconnectNotify_IsBase(true);
        vqcandlestickset->disconnectNotify(*signal);
    } else {
        vqcandlestickset->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnDisconnectNotify(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->setQCandlestickSet_DisconnectNotify_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCandlestickSet_Sender(const QCandlestickSet* self) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        return vqcandlestickset->sender();
    } else {
        return vqcandlestickset->sender();
    }
}

// Base class handler implementation
QObject* QCandlestickSet_QBaseSender(const QCandlestickSet* self) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        vqcandlestickset->setQCandlestickSet_Sender_IsBase(true);
        return vqcandlestickset->sender();
    } else {
        return vqcandlestickset->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnSender(const QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        vqcandlestickset->setQCandlestickSet_Sender_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickSet_SenderSignalIndex(const QCandlestickSet* self) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        return vqcandlestickset->senderSignalIndex();
    } else {
        return vqcandlestickset->senderSignalIndex();
    }
}

// Base class handler implementation
int QCandlestickSet_QBaseSenderSignalIndex(const QCandlestickSet* self) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        vqcandlestickset->setQCandlestickSet_SenderSignalIndex_IsBase(true);
        return vqcandlestickset->senderSignalIndex();
    } else {
        return vqcandlestickset->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnSenderSignalIndex(const QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        vqcandlestickset->setQCandlestickSet_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickSet_Receivers(const QCandlestickSet* self, const char* signal) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        return vqcandlestickset->receivers(signal);
    } else {
        return vqcandlestickset->receivers(signal);
    }
}

// Base class handler implementation
int QCandlestickSet_QBaseReceivers(const QCandlestickSet* self, const char* signal) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        vqcandlestickset->setQCandlestickSet_Receivers_IsBase(true);
        return vqcandlestickset->receivers(signal);
    } else {
        return vqcandlestickset->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnReceivers(const QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        vqcandlestickset->setQCandlestickSet_Receivers_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickSet_IsSignalConnected(const QCandlestickSet* self, QMetaMethod* signal) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        return vqcandlestickset->isSignalConnected(*signal);
    } else {
        return vqcandlestickset->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCandlestickSet_QBaseIsSignalConnected(const QCandlestickSet* self, QMetaMethod* signal) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        vqcandlestickset->setQCandlestickSet_IsSignalConnected_IsBase(true);
        return vqcandlestickset->isSignalConnected(*signal);
    } else {
        return vqcandlestickset->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnIsSignalConnected(const QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        vqcandlestickset->setQCandlestickSet_IsSignalConnected_Callback(reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_IsSignalConnected_Callback>(slot));
    }
}

void QCandlestickSet_Delete(QCandlestickSet* self) {
    delete self;
}
