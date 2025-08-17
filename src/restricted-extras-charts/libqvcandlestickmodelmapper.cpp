#include <QCandlestickModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVCandlestickModelMapper_OnMetacall(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Metacall_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVCandlestickModelMapper_QBaseMetacall(QVCandlestickModelMapper* self, int param1, int param2, void** param3) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Metacall_IsBase(true);
        return vqvcandlestickmodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVCandlestickModelMapper_Tr(const char* s) {
    QString _ret = QVCandlestickModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::timestampRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVCandlestickModelMapper_OpenRowChanged(QVCandlestickModelMapper* self) {
    self->openRowChanged();
}

void QVCandlestickModelMapper_Connect_OpenRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::openRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVCandlestickModelMapper_HighRowChanged(QVCandlestickModelMapper* self) {
    self->highRowChanged();
}

void QVCandlestickModelMapper_Connect_HighRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::highRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVCandlestickModelMapper_LowRowChanged(QVCandlestickModelMapper* self) {
    self->lowRowChanged();
}

void QVCandlestickModelMapper_Connect_LowRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::lowRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVCandlestickModelMapper_CloseRowChanged(QVCandlestickModelMapper* self) {
    self->closeRowChanged();
}

void QVCandlestickModelMapper_Connect_CloseRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::closeRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVCandlestickModelMapper_FirstSetColumnChanged(QVCandlestickModelMapper* self) {
    self->firstSetColumnChanged();
}

void QVCandlestickModelMapper_Connect_FirstSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::firstSetColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVCandlestickModelMapper_LastSetColumnChanged(QVCandlestickModelMapper* self) {
    self->lastSetColumnChanged();
}

void QVCandlestickModelMapper_Connect_LastSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVCandlestickModelMapper*) = reinterpret_cast<void (*)(QVCandlestickModelMapper*)>(slot);
    QVCandlestickModelMapper::connect(self, &QVCandlestickModelMapper::lastSetColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVCandlestickModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QVCandlestickModelMapper::tr(s, c);
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
    QString _ret = QVCandlestickModelMapper::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QVCandlestickModelMapper_Orientation(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return static_cast<int>(vqvcandlestickmodelmapper->orientation());
    } else {
        return static_cast<int>(self->QVCandlestickModelMapper::orientation());
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseOrientation(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqvcandlestickmodelmapper->orientation());
    } else {
        return static_cast<int>(self->QVCandlestickModelMapper::orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnOrientation(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Orientation_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVCandlestickModelMapper_Event(QVCandlestickModelMapper* self, QEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->event(event);
    } else {
        return self->QVCandlestickModelMapper::event(event);
    }
}

// Base class handler implementation
bool QVCandlestickModelMapper_QBaseEvent(QVCandlestickModelMapper* self, QEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Event_IsBase(true);
        return vqvcandlestickmodelmapper->event(event);
    } else {
        return self->QVCandlestickModelMapper::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnEvent(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Event_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVCandlestickModelMapper_EventFilter(QVCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->eventFilter(watched, event);
    } else {
        return self->QVCandlestickModelMapper::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVCandlestickModelMapper_QBaseEventFilter(QVCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_EventFilter_IsBase(true);
        return vqvcandlestickmodelmapper->eventFilter(watched, event);
    } else {
        return self->QVCandlestickModelMapper::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnEventFilter(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_TimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->timerEvent(event);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseTimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_TimerEvent_IsBase(true);
        vqvcandlestickmodelmapper->timerEvent(event);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnTimerEvent(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_ChildEvent(QVCandlestickModelMapper* self, QChildEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->childEvent(event);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseChildEvent(QVCandlestickModelMapper* self, QChildEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_ChildEvent_IsBase(true);
        vqvcandlestickmodelmapper->childEvent(event);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnChildEvent(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_CustomEvent(QVCandlestickModelMapper* self, QEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->customEvent(event);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseCustomEvent(QVCandlestickModelMapper* self, QEvent* event) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_CustomEvent_IsBase(true);
        vqvcandlestickmodelmapper->customEvent(event);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnCustomEvent(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_ConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_ConnectNotify_IsBase(true);
        vqvcandlestickmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnConnectNotify(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_DisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseDisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_DisconnectNotify_IsBase(true);
        vqvcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnDisconnectNotify(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_SetTimestamp(QVCandlestickModelMapper* self, int timestamp) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setTimestamp(static_cast<int>(timestamp));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setTimestamp(static_cast<int>(timestamp));
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseSetTimestamp(QVCandlestickModelMapper* self, int timestamp) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetTimestamp_IsBase(true);
        vqvcandlestickmodelmapper->setTimestamp(static_cast<int>(timestamp));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setTimestamp(static_cast<int>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSetTimestamp(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetTimestamp_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_Timestamp(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->timestamp();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->timestamp();
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseTimestamp(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Timestamp_IsBase(true);
        return vqvcandlestickmodelmapper->timestamp();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->timestamp();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnTimestamp(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Timestamp_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Timestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_SetOpen(QVCandlestickModelMapper* self, int open) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setOpen(static_cast<int>(open));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setOpen(static_cast<int>(open));
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseSetOpen(QVCandlestickModelMapper* self, int open) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetOpen_IsBase(true);
        vqvcandlestickmodelmapper->setOpen(static_cast<int>(open));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setOpen(static_cast<int>(open));
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSetOpen(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetOpen_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_SetOpen_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_Open(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->open();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->open();
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseOpen(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Open_IsBase(true);
        return vqvcandlestickmodelmapper->open();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnOpen(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Open_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_SetHigh(QVCandlestickModelMapper* self, int high) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setHigh(static_cast<int>(high));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setHigh(static_cast<int>(high));
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseSetHigh(QVCandlestickModelMapper* self, int high) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetHigh_IsBase(true);
        vqvcandlestickmodelmapper->setHigh(static_cast<int>(high));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setHigh(static_cast<int>(high));
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSetHigh(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetHigh_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_SetHigh_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_High(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->high();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->high();
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseHigh(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_High_IsBase(true);
        return vqvcandlestickmodelmapper->high();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->high();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnHigh(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_High_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_High_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_SetLow(QVCandlestickModelMapper* self, int low) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setLow(static_cast<int>(low));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setLow(static_cast<int>(low));
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseSetLow(QVCandlestickModelMapper* self, int low) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetLow_IsBase(true);
        vqvcandlestickmodelmapper->setLow(static_cast<int>(low));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setLow(static_cast<int>(low));
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSetLow(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetLow_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_SetLow_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_Low(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->low();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->low();
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseLow(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Low_IsBase(true);
        return vqvcandlestickmodelmapper->low();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->low();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnLow(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Low_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Low_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_SetClose(QVCandlestickModelMapper* self, int close) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setClose(static_cast<int>(close));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setClose(static_cast<int>(close));
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseSetClose(QVCandlestickModelMapper* self, int close) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetClose_IsBase(true);
        vqvcandlestickmodelmapper->setClose(static_cast<int>(close));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setClose(static_cast<int>(close));
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSetClose(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetClose_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_SetClose_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_Close(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->close();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->close();
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseClose(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Close_IsBase(true);
        return vqvcandlestickmodelmapper->close();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnClose(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Close_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Close_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_SetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setFirstSetSection(static_cast<int>(firstSetSection));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setFirstSetSection(static_cast<int>(firstSetSection));
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseSetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetFirstSetSection_IsBase(true);
        vqvcandlestickmodelmapper->setFirstSetSection(static_cast<int>(firstSetSection));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setFirstSetSection(static_cast<int>(firstSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSetFirstSetSection(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetFirstSetSection_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_SetFirstSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_FirstSetSection(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->firstSetSection();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->firstSetSection();
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseFirstSetSection(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_FirstSetSection_IsBase(true);
        return vqvcandlestickmodelmapper->firstSetSection();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->firstSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnFirstSetSection(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_FirstSetSection_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_FirstSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVCandlestickModelMapper_SetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setLastSetSection(static_cast<int>(lastSetSection));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setLastSetSection(static_cast<int>(lastSetSection));
    }
}

// Base class handler implementation
void QVCandlestickModelMapper_QBaseSetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetLastSetSection_IsBase(true);
        vqvcandlestickmodelmapper->setLastSetSection(static_cast<int>(lastSetSection));
    } else {
        ((VirtualQVCandlestickModelMapper*)self)->setLastSetSection(static_cast<int>(lastSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSetLastSetSection(QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = dynamic_cast<VirtualQVCandlestickModelMapper*>(self);
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SetLastSetSection_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_SetLastSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_LastSetSection(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->lastSetSection();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->lastSetSection();
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseLastSetSection(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_LastSetSection_IsBase(true);
        return vqvcandlestickmodelmapper->lastSetSection();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->lastSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnLastSetSection(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_LastSetSection_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_LastSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVCandlestickModelMapper_Sender(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->sender();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVCandlestickModelMapper_QBaseSender(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Sender_IsBase(true);
        return vqvcandlestickmodelmapper->sender();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSender(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Sender_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_SenderSignalIndex(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseSenderSignalIndex(const QVCandlestickModelMapper* self) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SenderSignalIndex_IsBase(true);
        return vqvcandlestickmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnSenderSignalIndex(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVCandlestickModelMapper_Receivers(const QVCandlestickModelMapper* self, const char* signal) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->receivers(signal);
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVCandlestickModelMapper_QBaseReceivers(const QVCandlestickModelMapper* self, const char* signal) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Receivers_IsBase(true);
        return vqvcandlestickmodelmapper->receivers(signal);
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnReceivers(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_Receivers_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVCandlestickModelMapper_IsSignalConnected(const QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        return vqvcandlestickmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVCandlestickModelMapper_QBaseIsSignalConnected(const QVCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_IsSignalConnected_IsBase(true);
        return vqvcandlestickmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQVCandlestickModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVCandlestickModelMapper_OnIsSignalConnected(const QVCandlestickModelMapper* self, intptr_t slot) {
    auto* vqvcandlestickmodelmapper = const_cast<VirtualQVCandlestickModelMapper*>(dynamic_cast<const VirtualQVCandlestickModelMapper*>(self));
    if (vqvcandlestickmodelmapper && vqvcandlestickmodelmapper->isVirtualQVCandlestickModelMapper) {
        vqvcandlestickmodelmapper->setQVCandlestickModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQVCandlestickModelMapper::QVCandlestickModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QVCandlestickModelMapper_Delete(QVCandlestickModelMapper* self) {
    delete self;
}
