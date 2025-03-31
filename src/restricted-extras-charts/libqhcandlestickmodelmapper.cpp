#include <QAbstractItemModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QCandlestickModelMapper>
#include <QCandlestickSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHCandlestickModelMapper>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
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
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHCandlestickModelMapper_OnMetacall(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Metacall_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHCandlestickModelMapper_QBaseMetacall(QHCandlestickModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Metacall_IsBase(true);
        return vqhcandlestickmodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHCandlestickModelMapper_Tr(const char* s) {
    QString _ret = QHCandlestickModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
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
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::timestampColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHCandlestickModelMapper_OpenColumnChanged(QHCandlestickModelMapper* self) {
    self->openColumnChanged();
}

void QHCandlestickModelMapper_Connect_OpenColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::openColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHCandlestickModelMapper_HighColumnChanged(QHCandlestickModelMapper* self) {
    self->highColumnChanged();
}

void QHCandlestickModelMapper_Connect_HighColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::highColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHCandlestickModelMapper_LowColumnChanged(QHCandlestickModelMapper* self) {
    self->lowColumnChanged();
}

void QHCandlestickModelMapper_Connect_LowColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::lowColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHCandlestickModelMapper_CloseColumnChanged(QHCandlestickModelMapper* self) {
    self->closeColumnChanged();
}

void QHCandlestickModelMapper_Connect_CloseColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::closeColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHCandlestickModelMapper_FirstSetRowChanged(QHCandlestickModelMapper* self) {
    self->firstSetRowChanged();
}

void QHCandlestickModelMapper_Connect_FirstSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::firstSetRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHCandlestickModelMapper_LastSetRowChanged(QHCandlestickModelMapper* self) {
    self->lastSetRowChanged();
}

void QHCandlestickModelMapper_Connect_LastSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHCandlestickModelMapper*) = reinterpret_cast<void (*)(QHCandlestickModelMapper*)>(slot);
    QHCandlestickModelMapper::connect(self, &QHCandlestickModelMapper::lastSetRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QHCandlestickModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QHCandlestickModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHCandlestickModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHCandlestickModelMapper::tr(s, c, static_cast<int>(n));
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
int QHCandlestickModelMapper_Orientation(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return static_cast<int>(vqhcandlestickmodelmapper->orientation());
    } else {
        return static_cast<int>(vqhcandlestickmodelmapper->orientation());
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseOrientation(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqhcandlestickmodelmapper->orientation());
    } else {
        return static_cast<int>(vqhcandlestickmodelmapper->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnOrientation(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Orientation_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHCandlestickModelMapper_Event(QHCandlestickModelMapper* self, QEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        return vqhcandlestickmodelmapper->event(event);
    } else {
        return vqhcandlestickmodelmapper->event(event);
    }
}

// Base class handler implementation
bool QHCandlestickModelMapper_QBaseEvent(QHCandlestickModelMapper* self, QEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Event_IsBase(true);
        return vqhcandlestickmodelmapper->event(event);
    } else {
        return vqhcandlestickmodelmapper->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnEvent(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Event_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHCandlestickModelMapper_EventFilter(QHCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        return vqhcandlestickmodelmapper->eventFilter(watched, event);
    } else {
        return vqhcandlestickmodelmapper->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHCandlestickModelMapper_QBaseEventFilter(QHCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_EventFilter_IsBase(true);
        return vqhcandlestickmodelmapper->eventFilter(watched, event);
    } else {
        return vqhcandlestickmodelmapper->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnEventFilter(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_TimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->timerEvent(event);
    } else {
        vqhcandlestickmodelmapper->timerEvent(event);
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseTimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_TimerEvent_IsBase(true);
        vqhcandlestickmodelmapper->timerEvent(event);
    } else {
        vqhcandlestickmodelmapper->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnTimerEvent(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_ChildEvent(QHCandlestickModelMapper* self, QChildEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->childEvent(event);
    } else {
        vqhcandlestickmodelmapper->childEvent(event);
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseChildEvent(QHCandlestickModelMapper* self, QChildEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_ChildEvent_IsBase(true);
        vqhcandlestickmodelmapper->childEvent(event);
    } else {
        vqhcandlestickmodelmapper->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnChildEvent(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_CustomEvent(QHCandlestickModelMapper* self, QEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->customEvent(event);
    } else {
        vqhcandlestickmodelmapper->customEvent(event);
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseCustomEvent(QHCandlestickModelMapper* self, QEvent* event) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_CustomEvent_IsBase(true);
        vqhcandlestickmodelmapper->customEvent(event);
    } else {
        vqhcandlestickmodelmapper->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnCustomEvent(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_ConnectNotify(QHCandlestickModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->connectNotify(*signal);
    } else {
        vqhcandlestickmodelmapper->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseConnectNotify(QHCandlestickModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_ConnectNotify_IsBase(true);
        vqhcandlestickmodelmapper->connectNotify(*signal);
    } else {
        vqhcandlestickmodelmapper->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnConnectNotify(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_DisconnectNotify(QHCandlestickModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        vqhcandlestickmodelmapper->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseDisconnectNotify(QHCandlestickModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_DisconnectNotify_IsBase(true);
        vqhcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        vqhcandlestickmodelmapper->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnDisconnectNotify(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_SetTimestamp(QHCandlestickModelMapper* self, int timestamp) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setTimestamp(static_cast<int>(timestamp));
    } else {
        vqhcandlestickmodelmapper->setTimestamp(static_cast<int>(timestamp));
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseSetTimestamp(QHCandlestickModelMapper* self, int timestamp) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetTimestamp_IsBase(true);
        vqhcandlestickmodelmapper->setTimestamp(static_cast<int>(timestamp));
    } else {
        vqhcandlestickmodelmapper->setTimestamp(static_cast<int>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSetTimestamp(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetTimestamp_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_Timestamp(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->timestamp();
    } else {
        return vqhcandlestickmodelmapper->timestamp();
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseTimestamp(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Timestamp_IsBase(true);
        return vqhcandlestickmodelmapper->timestamp();
    } else {
        return vqhcandlestickmodelmapper->timestamp();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnTimestamp(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Timestamp_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Timestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_SetOpen(QHCandlestickModelMapper* self, int open) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setOpen(static_cast<int>(open));
    } else {
        vqhcandlestickmodelmapper->setOpen(static_cast<int>(open));
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseSetOpen(QHCandlestickModelMapper* self, int open) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetOpen_IsBase(true);
        vqhcandlestickmodelmapper->setOpen(static_cast<int>(open));
    } else {
        vqhcandlestickmodelmapper->setOpen(static_cast<int>(open));
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSetOpen(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetOpen_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_SetOpen_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_Open(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->open();
    } else {
        return vqhcandlestickmodelmapper->open();
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseOpen(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Open_IsBase(true);
        return vqhcandlestickmodelmapper->open();
    } else {
        return vqhcandlestickmodelmapper->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnOpen(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Open_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_SetHigh(QHCandlestickModelMapper* self, int high) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setHigh(static_cast<int>(high));
    } else {
        vqhcandlestickmodelmapper->setHigh(static_cast<int>(high));
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseSetHigh(QHCandlestickModelMapper* self, int high) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetHigh_IsBase(true);
        vqhcandlestickmodelmapper->setHigh(static_cast<int>(high));
    } else {
        vqhcandlestickmodelmapper->setHigh(static_cast<int>(high));
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSetHigh(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetHigh_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_SetHigh_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_High(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->high();
    } else {
        return vqhcandlestickmodelmapper->high();
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseHigh(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_High_IsBase(true);
        return vqhcandlestickmodelmapper->high();
    } else {
        return vqhcandlestickmodelmapper->high();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnHigh(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_High_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_High_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_SetLow(QHCandlestickModelMapper* self, int low) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setLow(static_cast<int>(low));
    } else {
        vqhcandlestickmodelmapper->setLow(static_cast<int>(low));
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseSetLow(QHCandlestickModelMapper* self, int low) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetLow_IsBase(true);
        vqhcandlestickmodelmapper->setLow(static_cast<int>(low));
    } else {
        vqhcandlestickmodelmapper->setLow(static_cast<int>(low));
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSetLow(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetLow_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_SetLow_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_Low(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->low();
    } else {
        return vqhcandlestickmodelmapper->low();
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseLow(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Low_IsBase(true);
        return vqhcandlestickmodelmapper->low();
    } else {
        return vqhcandlestickmodelmapper->low();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnLow(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Low_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Low_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_SetClose(QHCandlestickModelMapper* self, int close) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setClose(static_cast<int>(close));
    } else {
        vqhcandlestickmodelmapper->setClose(static_cast<int>(close));
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseSetClose(QHCandlestickModelMapper* self, int close) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetClose_IsBase(true);
        vqhcandlestickmodelmapper->setClose(static_cast<int>(close));
    } else {
        vqhcandlestickmodelmapper->setClose(static_cast<int>(close));
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSetClose(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetClose_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_SetClose_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_Close(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->close();
    } else {
        return vqhcandlestickmodelmapper->close();
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseClose(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Close_IsBase(true);
        return vqhcandlestickmodelmapper->close();
    } else {
        return vqhcandlestickmodelmapper->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnClose(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Close_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Close_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_SetFirstSetSection(QHCandlestickModelMapper* self, int firstSetSection) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setFirstSetSection(static_cast<int>(firstSetSection));
    } else {
        vqhcandlestickmodelmapper->setFirstSetSection(static_cast<int>(firstSetSection));
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseSetFirstSetSection(QHCandlestickModelMapper* self, int firstSetSection) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetFirstSetSection_IsBase(true);
        vqhcandlestickmodelmapper->setFirstSetSection(static_cast<int>(firstSetSection));
    } else {
        vqhcandlestickmodelmapper->setFirstSetSection(static_cast<int>(firstSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSetFirstSetSection(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetFirstSetSection_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_SetFirstSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_FirstSetSection(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->firstSetSection();
    } else {
        return vqhcandlestickmodelmapper->firstSetSection();
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseFirstSetSection(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_FirstSetSection_IsBase(true);
        return vqhcandlestickmodelmapper->firstSetSection();
    } else {
        return vqhcandlestickmodelmapper->firstSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnFirstSetSection(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_FirstSetSection_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_FirstSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHCandlestickModelMapper_SetLastSetSection(QHCandlestickModelMapper* self, int lastSetSection) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setLastSetSection(static_cast<int>(lastSetSection));
    } else {
        vqhcandlestickmodelmapper->setLastSetSection(static_cast<int>(lastSetSection));
    }
}

// Base class handler implementation
void QHCandlestickModelMapper_QBaseSetLastSetSection(QHCandlestickModelMapper* self, int lastSetSection) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetLastSetSection_IsBase(true);
        vqhcandlestickmodelmapper->setLastSetSection(static_cast<int>(lastSetSection));
    } else {
        vqhcandlestickmodelmapper->setLastSetSection(static_cast<int>(lastSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSetLastSetSection(QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = dynamic_cast<VirtualQHCandlestickModelMapper*>(self)) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SetLastSetSection_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_SetLastSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_LastSetSection(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->lastSetSection();
    } else {
        return vqhcandlestickmodelmapper->lastSetSection();
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseLastSetSection(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_LastSetSection_IsBase(true);
        return vqhcandlestickmodelmapper->lastSetSection();
    } else {
        return vqhcandlestickmodelmapper->lastSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnLastSetSection(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_LastSetSection_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_LastSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHCandlestickModelMapper_Sender(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->sender();
    } else {
        return vqhcandlestickmodelmapper->sender();
    }
}

// Base class handler implementation
QObject* QHCandlestickModelMapper_QBaseSender(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Sender_IsBase(true);
        return vqhcandlestickmodelmapper->sender();
    } else {
        return vqhcandlestickmodelmapper->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSender(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Sender_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_SenderSignalIndex(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->senderSignalIndex();
    } else {
        return vqhcandlestickmodelmapper->senderSignalIndex();
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseSenderSignalIndex(const QHCandlestickModelMapper* self) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SenderSignalIndex_IsBase(true);
        return vqhcandlestickmodelmapper->senderSignalIndex();
    } else {
        return vqhcandlestickmodelmapper->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnSenderSignalIndex(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHCandlestickModelMapper_Receivers(const QHCandlestickModelMapper* self, const char* signal) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->receivers(signal);
    } else {
        return vqhcandlestickmodelmapper->receivers(signal);
    }
}

// Base class handler implementation
int QHCandlestickModelMapper_QBaseReceivers(const QHCandlestickModelMapper* self, const char* signal) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Receivers_IsBase(true);
        return vqhcandlestickmodelmapper->receivers(signal);
    } else {
        return vqhcandlestickmodelmapper->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnReceivers(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_Receivers_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHCandlestickModelMapper_IsSignalConnected(const QHCandlestickModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        return vqhcandlestickmodelmapper->isSignalConnected(*signal);
    } else {
        return vqhcandlestickmodelmapper->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHCandlestickModelMapper_QBaseIsSignalConnected(const QHCandlestickModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_IsSignalConnected_IsBase(true);
        return vqhcandlestickmodelmapper->isSignalConnected(*signal);
    } else {
        return vqhcandlestickmodelmapper->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHCandlestickModelMapper_OnIsSignalConnected(const QHCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqhcandlestickmodelmapper = const_cast<VirtualQHCandlestickModelMapper*>(dynamic_cast<const VirtualQHCandlestickModelMapper*>(self))) {
        vqhcandlestickmodelmapper->setQHCandlestickModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQHCandlestickModelMapper::QHCandlestickModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QHCandlestickModelMapper_Delete(QHCandlestickModelMapper* self) {
    delete self;
}
