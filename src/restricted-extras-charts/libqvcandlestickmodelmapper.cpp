#include <QCandlestickModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVCandlestickModelMapper>
#include <qvcandlestickmodelmapper.h>
#include "libqvcandlestickmodelmapper.h"
#include "libqvcandlestickmodelmapper.hxx"

QVCandlestickModelMapper* QVCandlestickModelMapper_new() {
    return new VirtualQVCandlestickModelMapper();
}

QVCandlestickModelMapper* QVCandlestickModelMapper_new2(QObject* parent) {
    return new VirtualQVCandlestickModelMapper(parent);
}

QMetaObject* QVCandlestickModelMapper_MetaObject(const QVCandlestickModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVCandlestickModelMapper_Metacast(QVCandlestickModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVCandlestickModelMapper_Metacall(QVCandlestickModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVCandlestickModelMapper_Tr(const char* s) {
    auto _ret = QVCandlestickModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QVCandlestickModelMapper_Orientation(const QVCandlestickModelMapper* self) {
    return static_cast<int>(self->orientation());
}

void QVCandlestickModelMapper_SetTimestampRow(QVCandlestickModelMapper* self, int timestampRow) {
    self->setTimestampRow(static_cast<int>(timestampRow));
}

int QVCandlestickModelMapper_TimestampRow(const QVCandlestickModelMapper* self) {
    return self->timestampRow();
}

void QVCandlestickModelMapper_SetOpenRow(QVCandlestickModelMapper* self, int openRow) {
    self->setOpenRow(static_cast<int>(openRow));
}

int QVCandlestickModelMapper_OpenRow(const QVCandlestickModelMapper* self) {
    return self->openRow();
}

void QVCandlestickModelMapper_SetHighRow(QVCandlestickModelMapper* self, int highRow) {
    self->setHighRow(static_cast<int>(highRow));
}

int QVCandlestickModelMapper_HighRow(const QVCandlestickModelMapper* self) {
    return self->highRow();
}

void QVCandlestickModelMapper_SetLowRow(QVCandlestickModelMapper* self, int lowRow) {
    self->setLowRow(static_cast<int>(lowRow));
}

int QVCandlestickModelMapper_LowRow(const QVCandlestickModelMapper* self) {
    return self->lowRow();
}

void QVCandlestickModelMapper_SetCloseRow(QVCandlestickModelMapper* self, int closeRow) {
    self->setCloseRow(static_cast<int>(closeRow));
}

int QVCandlestickModelMapper_CloseRow(const QVCandlestickModelMapper* self) {
    return self->closeRow();
}

void QVCandlestickModelMapper_SetFirstSetColumn(QVCandlestickModelMapper* self, int firstSetColumn) {
    self->setFirstSetColumn(static_cast<int>(firstSetColumn));
}

int QVCandlestickModelMapper_FirstSetColumn(const QVCandlestickModelMapper* self) {
    return self->firstSetColumn();
}

void QVCandlestickModelMapper_SetLastSetColumn(QVCandlestickModelMapper* self, int lastSetColumn) {
    self->setLastSetColumn(static_cast<int>(lastSetColumn));
}

int QVCandlestickModelMapper_LastSetColumn(const QVCandlestickModelMapper* self) {
    return self->lastSetColumn();
}

void QVCandlestickModelMapper_TimestampRowChanged(QVCandlestickModelMapper* self) {
    self->timestampRowChanged();
}

void QVCandlestickModelMapper_Connect_TimestampRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self,
                                      static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::timestampRowChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QVCandlestickModelMapper_OpenRowChanged(QVCandlestickModelMapper* self) {
    self->openRowChanged();
}

void QVCandlestickModelMapper_Connect_OpenRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self,
                                      static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::openRowChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QVCandlestickModelMapper_HighRowChanged(QVCandlestickModelMapper* self) {
    self->highRowChanged();
}

void QVCandlestickModelMapper_Connect_HighRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self,
                                      static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::highRowChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QVCandlestickModelMapper_LowRowChanged(QVCandlestickModelMapper* self) {
    self->lowRowChanged();
}

void QVCandlestickModelMapper_Connect_LowRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self,
                                      static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::lowRowChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QVCandlestickModelMapper_CloseRowChanged(QVCandlestickModelMapper* self) {
    self->closeRowChanged();
}

void QVCandlestickModelMapper_Connect_CloseRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self,
                                      static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::closeRowChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QVCandlestickModelMapper_FirstSetColumnChanged(QVCandlestickModelMapper* self) {
    self->firstSetColumnChanged();
}

void QVCandlestickModelMapper_Connect_FirstSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self,
                                      static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::firstSetColumnChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void QVCandlestickModelMapper_LastSetColumnChanged(QVCandlestickModelMapper* self) {
    self->lastSetColumnChanged();
}

void QVCandlestickModelMapper_Connect_LastSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self,
                                      static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::lastSetColumnChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

libqt_string QVCandlestickModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QVCandlestickModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVCandlestickModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVCandlestickModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVCandlestickModelMapper_SuperMetaObject(const QVCandlestickModelMapper* self) {
    return (QMetaObject*)self->QVCandlestickModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnMetaObject(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self)))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_metaobject_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVCandlestickModelMapper_SuperMetacast(QVCandlestickModelMapper* self, const char* param1) {
    return self->QVCandlestickModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnMetacast(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_metacast_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVCandlestickModelMapper_SuperMetacall(QVCandlestickModelMapper* self, int param1, int param2, void** param3) {
    return self->QVCandlestickModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnMetacall(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_metacall_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Metacall_Callback>(slot);
}

// Base class handler implementation
int QVCandlestickModelMapper_SuperOrientation(const QVCandlestickModelMapper* self) {
    return static_cast<int>(self->QVCandlestickModelMapper::orientation());
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnOrientation(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self)))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_orientation_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Orientation_Callback>(slot);
}

// Derived class handler implementation
bool QVCandlestickModelMapper_Event(QVCandlestickModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVCandlestickModelMapper_SuperEvent(QVCandlestickModelMapper* self, QEvent* event) {
    return self->QVCandlestickModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnEvent(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_event_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVCandlestickModelMapper_EventFilter(QVCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVCandlestickModelMapper_SuperEventFilter(QVCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    return self->QVCandlestickModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnEventFilter(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_eventfilter_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVCandlestickModelMapper_TimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper) {
        vqvcandlestickmodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_SuperTimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->QVCandlestickModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnTimerEvent(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_timerevent_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVCandlestickModelMapper_ChildEvent(QVCandlestickModelMapper* self, QChildEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper) {
        vqvcandlestickmodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_SuperChildEvent(QVCandlestickModelMapper* self, QChildEvent* event) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->QVCandlestickModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnChildEvent(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_childevent_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVCandlestickModelMapper_CustomEvent(QVCandlestickModelMapper* self, QEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper) {
        vqvcandlestickmodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_SuperCustomEvent(QVCandlestickModelMapper* self, QEvent* event) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->QVCandlestickModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnCustomEvent(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_customevent_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVCandlestickModelMapper_ConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper) {
        vqvcandlestickmodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_SuperConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->QVCandlestickModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnConnectNotify(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_connectnotify_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVCandlestickModelMapper_DisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper) {
        vqvcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_SuperDisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->QVCandlestickModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVCandlestickModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnDisconnectNotify(QVCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self))
        vqvcandlestickmodelmapper->qvcandlestickmodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QVCandlestickModelMapper_SetTimestamp(QVCandlestickModelMapper* self, int timestamp) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::setTimestamp(static_cast<int>(timestamp));
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::setTimestamp called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_Timestamp(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::timestamp();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::timestamp called without a directly constructed type");
}

// Derived class protected handler implementation
void QVCandlestickModelMapper_SetOpen(QVCandlestickModelMapper* self, int open) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::setOpen(static_cast<int>(open));
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::setOpen called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_Open(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::open();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::open called without a directly constructed type");
}

// Derived class protected handler implementation
void QVCandlestickModelMapper_SetHigh(QVCandlestickModelMapper* self, int high) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::setHigh(static_cast<int>(high));
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::setHigh called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_High(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::high();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::high called without a directly constructed type");
}

// Derived class protected handler implementation
void QVCandlestickModelMapper_SetLow(QVCandlestickModelMapper* self, int low) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::setLow(static_cast<int>(low));
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::setLow called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_Low(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::low();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::low called without a directly constructed type");
}

// Derived class protected handler implementation
void QVCandlestickModelMapper_SetClose(QVCandlestickModelMapper* self, int close) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::setClose(static_cast<int>(close));
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::setClose called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_Close(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::close();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::close called without a directly constructed type");
}

// Derived class protected handler implementation
void QVCandlestickModelMapper_SetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::setFirstSetSection(static_cast<int>(firstSetSection));
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::setFirstSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_FirstSetSection(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::firstSetSection();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::firstSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVCandlestickModelMapper_SetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection) {
    if (auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self)) {
        vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::setLastSetSection(static_cast<int>(lastSetSection));
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::setLastSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_LastSetSection(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::lastSetSection();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::lastSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QVCandlestickModelMapper_Sender(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::sender();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_SenderSignalIndex(const QVCandlestickModelMapper* self) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVCandlestickModelMapper_Receivers(const QVCandlestickModelMapper* self, const char* signal) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVCandlestickModelMapper_IsSignalConnected(const QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self))) {
        return vqvcandlestickmodelmapper->VirtualQVCandlestickModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVCandlestickModelMapper::isSignalConnected called without a directly constructed type");
}

void QVCandlestickModelMapper_Delete(QVCandlestickModelMapper* self) {
    delete self;
}
