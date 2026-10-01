#include <QBrush>
#include <QCandlestickSet>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCandlestickSet_Tr(const char* s) {
    auto _ret = QCandlestickSet::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

void QCandlestickSet_SetBrush(QCandlestickSet* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QCandlestickSet_Brush(const QCandlestickSet* self) {
    return new QBrush(self->brush());
}

void QCandlestickSet_SetPen(QCandlestickSet* self, const QPen* pen) {
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
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::clicked),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_Hovered(QCandlestickSet* self, bool status) {
    self->hovered(status);
}

void QCandlestickSet_Connect_Hovered(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*, bool) = reinterpret_cast<void (*)(QCandlestickSet*, bool)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)(bool)>(&QCandlestickSet::hovered),
                             [self, slotFunc](bool status) {
                                 bool sigval1 = status;
                                 slotFunc(self, sigval1);
                             });
}

void QCandlestickSet_Pressed(QCandlestickSet* self) {
    self->pressed();
}

void QCandlestickSet_Connect_Pressed(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::pressed),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_Released(QCandlestickSet* self) {
    self->released();
}

void QCandlestickSet_Connect_Released(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::released),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_DoubleClicked(QCandlestickSet* self) {
    self->doubleClicked();
}

void QCandlestickSet_Connect_DoubleClicked(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::doubleClicked),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_TimestampChanged(QCandlestickSet* self) {
    self->timestampChanged();
}

void QCandlestickSet_Connect_TimestampChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::timestampChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_OpenChanged(QCandlestickSet* self) {
    self->openChanged();
}

void QCandlestickSet_Connect_OpenChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::openChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_HighChanged(QCandlestickSet* self) {
    self->highChanged();
}

void QCandlestickSet_Connect_HighChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::highChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_LowChanged(QCandlestickSet* self) {
    self->lowChanged();
}

void QCandlestickSet_Connect_LowChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::lowChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_CloseChanged(QCandlestickSet* self) {
    self->closeChanged();
}

void QCandlestickSet_Connect_CloseChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::closeChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_BrushChanged(QCandlestickSet* self) {
    self->brushChanged();
}

void QCandlestickSet_Connect_BrushChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::brushChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCandlestickSet_PenChanged(QCandlestickSet* self) {
    self->penChanged();
}

void QCandlestickSet_Connect_PenChanged(QCandlestickSet* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSet*)>(slot);
    QCandlestickSet::connect(self,
                             static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::penChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

libqt_string QCandlestickSet_Tr2(const char* s, const char* c) {
    auto _ret = QCandlestickSet::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCandlestickSet_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCandlestickSet::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QCandlestickSet_SuperMetaObject(const QCandlestickSet* self) {
    return (QMetaObject*)self->QCandlestickSet::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnMetaObject(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self)))
        vqcandlestickset->qcandlestickset_metaobject_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCandlestickSet_SuperMetacast(QCandlestickSet* self, const char* param1) {
    return self->QCandlestickSet::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnMetacast(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_metacast_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCandlestickSet_SuperMetacall(QCandlestickSet* self, int param1, int param2, void** param3) {
    return self->QCandlestickSet::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnMetacall(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_metacall_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QCandlestickSet_Event(QCandlestickSet* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCandlestickSet_SuperEvent(QCandlestickSet* self, QEvent* event) {
    return self->QCandlestickSet::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnEvent(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_event_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCandlestickSet_EventFilter(QCandlestickSet* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCandlestickSet_SuperEventFilter(QCandlestickSet* self, QObject* watched, QEvent* event) {
    return self->QCandlestickSet::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnEventFilter(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_eventfilter_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickSet_TimerEvent(QCandlestickSet* self, QTimerEvent* event) {
    auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self);
    if (vqcandlestickset) {
        vqcandlestickset->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickSet::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickSet_SuperTimerEvent(QCandlestickSet* self, QTimerEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->QCandlestickSet::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickSet::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnTimerEvent(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_timerevent_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickSet_ChildEvent(QCandlestickSet* self, QChildEvent* event) {
    auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self);
    if (vqcandlestickset) {
        vqcandlestickset->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickSet::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickSet_SuperChildEvent(QCandlestickSet* self, QChildEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->QCandlestickSet::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickSet::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnChildEvent(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_childevent_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickSet_CustomEvent(QCandlestickSet* self, QEvent* event) {
    auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self);
    if (vqcandlestickset) {
        vqcandlestickset->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickSet::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickSet_SuperCustomEvent(QCandlestickSet* self, QEvent* event) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->QCandlestickSet::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickSet::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnCustomEvent(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_customevent_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickSet_ConnectNotify(QCandlestickSet* self, const QMetaMethod* signal) {
    auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self);
    if (vqcandlestickset) {
        vqcandlestickset->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCandlestickSet::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickSet_SuperConnectNotify(QCandlestickSet* self, const QMetaMethod* signal) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->QCandlestickSet::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCandlestickSet::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnConnectNotify(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_connectnotify_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickSet_DisconnectNotify(QCandlestickSet* self, const QMetaMethod* signal) {
    auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self);
    if (vqcandlestickset) {
        vqcandlestickset->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCandlestickSet::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickSet_SuperDisconnectNotify(QCandlestickSet* self, const QMetaMethod* signal) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self)) {
        vqcandlestickset->QCandlestickSet::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCandlestickSet::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSet_OnDisconnectNotify(QCandlestickSet* self, intptr_t slot) {
    if (auto* vqcandlestickset = dynamic_cast<VirtualQCandlestickSet*>(self))
        vqcandlestickset->qcandlestickset_disconnectnotify_callback = reinterpret_cast<VirtualQCandlestickSet::QCandlestickSet_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCandlestickSet_Sender(const QCandlestickSet* self) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        return vqcandlestickset->VirtualQCandlestickSet::sender();
    } else
        qFatal("Error: Protected method QCandlestickSet::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickSet_SenderSignalIndex(const QCandlestickSet* self) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        return vqcandlestickset->VirtualQCandlestickSet::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCandlestickSet::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickSet_Receivers(const QCandlestickSet* self, const char* signal) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        return vqcandlestickset->VirtualQCandlestickSet::receivers(signal);
    } else
        qFatal("Error: Protected method QCandlestickSet::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCandlestickSet_IsSignalConnected(const QCandlestickSet* self, const QMetaMethod* signal) {
    if (auto* vqcandlestickset = const_cast<VirtualQCandlestickSet*>(dynamic_cast<const VirtualQCandlestickSet*>(self))) {
        return vqcandlestickset->VirtualQCandlestickSet::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCandlestickSet::isSignalConnected called without a directly constructed type");
}

void QCandlestickSet_Delete(QCandlestickSet* self) {
    delete self;
}
