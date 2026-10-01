#include <QCandlestickModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QHCandlestickModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qhcandlestickmodelmapper.h>
#include "libqhcandlestickmodelmapper.h"
#include "libqhcandlestickmodelmapper.hxx"

QHCandlestickModelMapper* QHCandlestickModelMapper_new() {
    return new VirtualQHCandlestickModelMapper();
}

QHCandlestickModelMapper* QHCandlestickModelMapper_new2(QObject* parent) {
    return new VirtualQHCandlestickModelMapper(parent);
}

QMetaObject* QHCandlestickModelMapper_MetaObject(const QHCandlestickModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHCandlestickModelMapper_Metacast(QHCandlestickModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHCandlestickModelMapper_Metacall(QHCandlestickModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHCandlestickModelMapper_Tr(const char* s) {
    auto _ret = QHCandlestickModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QHCandlestickModelMapper_Orientation(const QHCandlestickModelMapper* self) {
    return static_cast<int>(self->orientation());
}

void QHCandlestickModelMapper_SetTimestampColumn(QHCandlestickModelMapper* self, int timestampColumn) {
    self->setTimestampColumn(static_cast<int>(timestampColumn));
}

int QHCandlestickModelMapper_TimestampColumn(const QHCandlestickModelMapper* self) {
    return self->timestampColumn();
}

void QHCandlestickModelMapper_SetOpenColumn(QHCandlestickModelMapper* self, int openColumn) {
    self->setOpenColumn(static_cast<int>(openColumn));
}

int QHCandlestickModelMapper_OpenColumn(const QHCandlestickModelMapper* self) {
    return self->openColumn();
}

void QHCandlestickModelMapper_SetHighColumn(QHCandlestickModelMapper* self, int highColumn) {
    self->setHighColumn(static_cast<int>(highColumn));
}

int QHCandlestickModelMapper_HighColumn(const QHCandlestickModelMapper* self) {
    return self->highColumn();
}

void QHCandlestickModelMapper_SetLowColumn(QHCandlestickModelMapper* self, int lowColumn) {
    self->setLowColumn(static_cast<int>(lowColumn));
}

int QHCandlestickModelMapper_LowColumn(const QHCandlestickModelMapper* self) {
    return self->lowColumn();
}

void QHCandlestickModelMapper_SetCloseColumn(QHCandlestickModelMapper* self, int closeColumn) {
    self->setCloseColumn(static_cast<int>(closeColumn));
}

int QHCandlestickModelMapper_CloseColumn(const QHCandlestickModelMapper* self) {
    return self->closeColumn();
}

void QHCandlestickModelMapper_SetFirstSetRow(QHCandlestickModelMapper* self, int firstSetRow) {
    self->setFirstSetRow(static_cast<int>(firstSetRow));
}

int QHCandlestickModelMapper_FirstSetRow(const QHCandlestickModelMapper* self) {
    return self->firstSetRow();
}

void QHCandlestickModelMapper_SetLastSetRow(QHCandlestickModelMapper* self, int lastSetRow) {
    self->setLastSetRow(static_cast<int>(lastSetRow));
}

int QHCandlestickModelMapper_LastSetRow(const QHCandlestickModelMapper* self) {
    return self->lastSetRow();
}

void QHCandlestickModelMapper_TimestampColumnChanged(QHCandlestickModelMapper* self) {
    self->timestampColumnChanged();
}

void QHCandlestickModelMapper_Connect_TimestampColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self,
                                      static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::timestampColumnChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QHCandlestickModelMapper_OpenColumnChanged(QHCandlestickModelMapper* self) {
    self->openColumnChanged();
}

void QHCandlestickModelMapper_Connect_OpenColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self,
                                      static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::openColumnChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QHCandlestickModelMapper_HighColumnChanged(QHCandlestickModelMapper* self) {
    self->highColumnChanged();
}

void QHCandlestickModelMapper_Connect_HighColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self,
                                      static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::highColumnChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QHCandlestickModelMapper_LowColumnChanged(QHCandlestickModelMapper* self) {
    self->lowColumnChanged();
}

void QHCandlestickModelMapper_Connect_LowColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self,
                                      static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::lowColumnChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QHCandlestickModelMapper_CloseColumnChanged(QHCandlestickModelMapper* self) {
    self->closeColumnChanged();
}

void QHCandlestickModelMapper_Connect_CloseColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self,
                                      static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::closeColumnChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QHCandlestickModelMapper_FirstSetRowChanged(QHCandlestickModelMapper* self) {
    self->firstSetRowChanged();
}

void QHCandlestickModelMapper_Connect_FirstSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self,
                                      static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::firstSetRowChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QHCandlestickModelMapper_LastSetRowChanged(QHCandlestickModelMapper* self) {
    self->lastSetRowChanged();
}

void QHCandlestickModelMapper_Connect_LastSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self,
                                      static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::lastSetRowChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

libqt_string QHCandlestickModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QHCandlestickModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHCandlestickModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHCandlestickModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHCandlestickModelMapper_SuperMetaObject(const QHCandlestickModelMapper* self) {
    return (QMetaObject*)self->QHCandlestickModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnMetaObject(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self)))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_metaobject_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHCandlestickModelMapper_SuperMetacast(QHCandlestickModelMapper* self, const char* param1) {
    return self->QHCandlestickModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnMetacast(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_metacast_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHCandlestickModelMapper_SuperMetacall(QHCandlestickModelMapper* self, int param1, int param2, void** param3) {
    return self->QHCandlestickModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnMetacall(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_metacall_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Metacall_Callback>(slot);
}

// Base class handler implementation
int QHCandlestickModelMapper_SuperOrientation(const QHCandlestickModelMapper* self) {
    return static_cast<int>(self->QHCandlestickModelMapper::orientation());
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnOrientation(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self)))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_orientation_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Orientation_Callback>(slot);
}

// Derived class handler implementation
bool QHCandlestickModelMapper_Event(QHCandlestickModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHCandlestickModelMapper_SuperEvent(QHCandlestickModelMapper* self, QEvent* event) {
    return self->QHCandlestickModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnEvent(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_event_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHCandlestickModelMapper_EventFilter(QHCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHCandlestickModelMapper_SuperEventFilter(QHCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    return self->QHCandlestickModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnEventFilter(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_eventfilter_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHCandlestickModelMapper_TimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event) {
    auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self);
    if (vqhcandlestickmodelmapper) {
        vqhcandlestickmodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_SuperTimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->QHCandlestickModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnTimerEvent(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_timerevent_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHCandlestickModelMapper_ChildEvent(QHCandlestickModelMapper* self, QChildEvent* event) {
    auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self);
    if (vqhcandlestickmodelmapper) {
        vqhcandlestickmodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_SuperChildEvent(QHCandlestickModelMapper* self, QChildEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->QHCandlestickModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnChildEvent(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_childevent_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHCandlestickModelMapper_CustomEvent(QHCandlestickModelMapper* self, QEvent* event) {
    auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self);
    if (vqhcandlestickmodelmapper) {
        vqhcandlestickmodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_SuperCustomEvent(QHCandlestickModelMapper* self, QEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->QHCandlestickModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnCustomEvent(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_customevent_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHCandlestickModelMapper_ConnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self);
    if (vqhcandlestickmodelmapper) {
        vqhcandlestickmodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_SuperConnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->QHCandlestickModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnConnectNotify(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_connectnotify_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHCandlestickModelMapper_DisconnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self);
    if (vqhcandlestickmodelmapper) {
        vqhcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_SuperDisconnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->QHCandlestickModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHCandlestickModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnDisconnectNotify(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self))
        vqhcandlestickmodelmapper->qhcandlestickmodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QHCandlestickModelMapper_SetTimestamp(QHCandlestickModelMapper* self, int timestamp) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::setTimestamp(static_cast<int>(timestamp));
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::setTimestamp called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_Timestamp(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::timestamp();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::timestamp called without a directly constructed type");
}

// Derived class protected handler implementation
void QHCandlestickModelMapper_SetOpen(QHCandlestickModelMapper* self, int open) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::setOpen(static_cast<int>(open));
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::setOpen called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_Open(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::open();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::open called without a directly constructed type");
}

// Derived class protected handler implementation
void QHCandlestickModelMapper_SetHigh(QHCandlestickModelMapper* self, int high) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::setHigh(static_cast<int>(high));
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::setHigh called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_High(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::high();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::high called without a directly constructed type");
}

// Derived class protected handler implementation
void QHCandlestickModelMapper_SetLow(QHCandlestickModelMapper* self, int low) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::setLow(static_cast<int>(low));
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::setLow called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_Low(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::low();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::low called without a directly constructed type");
}

// Derived class protected handler implementation
void QHCandlestickModelMapper_SetClose(QHCandlestickModelMapper* self, int close) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::setClose(static_cast<int>(close));
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::setClose called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_Close(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::close();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::close called without a directly constructed type");
}

// Derived class protected handler implementation
void QHCandlestickModelMapper_SetFirstSetSection(QHCandlestickModelMapper* self, int firstSetSection) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::setFirstSetSection(static_cast<int>(firstSetSection));
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::setFirstSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_FirstSetSection(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::firstSetSection();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::firstSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHCandlestickModelMapper_SetLastSetSection(QHCandlestickModelMapper* self, int lastSetSection) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::setLastSetSection(static_cast<int>(lastSetSection));
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::setLastSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_LastSetSection(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::lastSetSection();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::lastSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QHCandlestickModelMapper_Sender(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::sender();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_SenderSignalIndex(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHCandlestickModelMapper_Receivers(const QHCandlestickModelMapper* self, const char* signal) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHCandlestickModelMapper_IsSignalConnected(const QHCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->VirtualQHCandlestickModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHCandlestickModelMapper::isSignalConnected called without a directly constructed type");
}

void QHCandlestickModelMapper_Delete(QHCandlestickModelMapper* self) {
    delete self;
}
