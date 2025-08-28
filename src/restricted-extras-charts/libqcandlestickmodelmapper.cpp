#include <QAbstractItemModel>
#include <QCandlestickModelMapper>
#include <QCandlestickSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qcandlestickmodelmapper.h>
#include "libqcandlestickmodelmapper.h"
#include "libqcandlestickmodelmapper.hxx"

QCandlestickModelMapper* QCandlestickModelMapper_new() {
    return new VirtualQCandlestickModelMapper();
}

QCandlestickModelMapper* QCandlestickModelMapper_new2(QObject* parent) {
    return new VirtualQCandlestickModelMapper(parent);
}

QMetaObject* QCandlestickModelMapper_MetaObject(const QCandlestickModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCandlestickModelMapper_Metacast(QCandlestickModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCandlestickModelMapper_Metacall(QCandlestickModelMapper* self, int param1, int param2, void** param3) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCandlestickModelMapper_Tr(const char* s) {
    QString _ret = QCandlestickModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCandlestickModelMapper_SetModel(QCandlestickModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractItemModel* QCandlestickModelMapper_Model(const QCandlestickModelMapper* self) {
    return self->model();
}

void QCandlestickModelMapper_SetSeries(QCandlestickModelMapper* self, QCandlestickSeries* series) {
    self->setSeries(series);
}

QCandlestickSeries* QCandlestickModelMapper_Series(const QCandlestickModelMapper* self) {
    return self->series();
}

int QCandlestickModelMapper_Orientation(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = dynamic_cast<const VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return static_cast<int>(vqcandlestickmodelmapper->orientation());
    } else {
        return static_cast<int>(((VirtualQCandlestickModelMapper*)self)->orientation());
    }
}

void QCandlestickModelMapper_ModelReplaced(QCandlestickModelMapper* self) {
    self->modelReplaced();
}

void QCandlestickModelMapper_Connect_ModelReplaced(QCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickModelMapper*) = reinterpret_cast<void (*)(QCandlestickModelMapper*)>(slot);
    QCandlestickModelMapper::connect(self, &QCandlestickModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickModelMapper_SeriesReplaced(QCandlestickModelMapper* self) {
    self->seriesReplaced();
}

void QCandlestickModelMapper_Connect_SeriesReplaced(QCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickModelMapper*) = reinterpret_cast<void (*)(QCandlestickModelMapper*)>(slot);
    QCandlestickModelMapper::connect(self, &QCandlestickModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QCandlestickModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QCandlestickModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCandlestickModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCandlestickModelMapper::tr(s, c, static_cast<int>(n));
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
int QCandlestickModelMapper_QBaseMetacall(QCandlestickModelMapper* self, int param1, int param2, void** param3) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Metacall_IsBase(true);
        return vqcandlestickmodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QCandlestickModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnMetacall(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Metacall_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseOrientation(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqcandlestickmodelmapper->orientation());
    } else {
        return static_cast<int>(((VirtualQCandlestickModelMapper*)self)->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnOrientation(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Orientation_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickModelMapper_Event(QCandlestickModelMapper* self, QEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->event(event);
    } else {
        return self->QCandlestickModelMapper::event(event);
    }
}

// Base class handler implementation
bool QCandlestickModelMapper_QBaseEvent(QCandlestickModelMapper* self, QEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Event_IsBase(true);
        return vqcandlestickmodelmapper->event(event);
    } else {
        return self->QCandlestickModelMapper::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnEvent(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Event_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickModelMapper_EventFilter(QCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->eventFilter(watched, event);
    } else {
        return self->QCandlestickModelMapper::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCandlestickModelMapper_QBaseEventFilter(QCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_EventFilter_IsBase(true);
        return vqcandlestickmodelmapper->eventFilter(watched, event);
    } else {
        return self->QCandlestickModelMapper::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnEventFilter(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_TimerEvent(QCandlestickModelMapper* self, QTimerEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->timerEvent(event);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseTimerEvent(QCandlestickModelMapper* self, QTimerEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_TimerEvent_IsBase(true);
        vqcandlestickmodelmapper->timerEvent(event);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnTimerEvent(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_ChildEvent(QCandlestickModelMapper* self, QChildEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->childEvent(event);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseChildEvent(QCandlestickModelMapper* self, QChildEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_ChildEvent_IsBase(true);
        vqcandlestickmodelmapper->childEvent(event);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnChildEvent(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_CustomEvent(QCandlestickModelMapper* self, QEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->customEvent(event);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseCustomEvent(QCandlestickModelMapper* self, QEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_CustomEvent_IsBase(true);
        vqcandlestickmodelmapper->customEvent(event);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnCustomEvent(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_ConnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseConnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_ConnectNotify_IsBase(true);
        vqcandlestickmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnConnectNotify(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_DisconnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseDisconnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_DisconnectNotify_IsBase(true);
        vqcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQCandlestickModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnDisconnectNotify(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_SetTimestamp(QCandlestickModelMapper* self, int timestamp) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setTimestamp(static_cast<int>(timestamp));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setTimestamp(static_cast<int>(timestamp));
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetTimestamp(QCandlestickModelMapper* self, int timestamp) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetTimestamp_IsBase(true);
        vqcandlestickmodelmapper->setTimestamp(static_cast<int>(timestamp));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setTimestamp(static_cast<int>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetTimestamp(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetTimestamp_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_Timestamp(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->timestamp();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->timestamp();
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseTimestamp(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Timestamp_IsBase(true);
        return vqcandlestickmodelmapper->timestamp();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->timestamp();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnTimestamp(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Timestamp_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Timestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_SetOpen(QCandlestickModelMapper* self, int open) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setOpen(static_cast<int>(open));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setOpen(static_cast<int>(open));
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetOpen(QCandlestickModelMapper* self, int open) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetOpen_IsBase(true);
        vqcandlestickmodelmapper->setOpen(static_cast<int>(open));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setOpen(static_cast<int>(open));
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetOpen(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetOpen_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetOpen_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_Open(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->open();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->open();
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseOpen(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Open_IsBase(true);
        return vqcandlestickmodelmapper->open();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnOpen(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Open_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_SetHigh(QCandlestickModelMapper* self, int high) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setHigh(static_cast<int>(high));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setHigh(static_cast<int>(high));
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetHigh(QCandlestickModelMapper* self, int high) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetHigh_IsBase(true);
        vqcandlestickmodelmapper->setHigh(static_cast<int>(high));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setHigh(static_cast<int>(high));
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetHigh(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetHigh_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetHigh_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_High(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->high();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->high();
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseHigh(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_High_IsBase(true);
        return vqcandlestickmodelmapper->high();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->high();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnHigh(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_High_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_High_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_SetLow(QCandlestickModelMapper* self, int low) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setLow(static_cast<int>(low));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setLow(static_cast<int>(low));
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetLow(QCandlestickModelMapper* self, int low) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetLow_IsBase(true);
        vqcandlestickmodelmapper->setLow(static_cast<int>(low));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setLow(static_cast<int>(low));
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetLow(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetLow_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetLow_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_Low(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->low();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->low();
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseLow(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Low_IsBase(true);
        return vqcandlestickmodelmapper->low();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->low();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnLow(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Low_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Low_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_SetClose(QCandlestickModelMapper* self, int close) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setClose(static_cast<int>(close));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setClose(static_cast<int>(close));
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetClose(QCandlestickModelMapper* self, int close) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetClose_IsBase(true);
        vqcandlestickmodelmapper->setClose(static_cast<int>(close));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setClose(static_cast<int>(close));
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetClose(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetClose_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetClose_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_Close(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->close();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->close();
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseClose(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Close_IsBase(true);
        return vqcandlestickmodelmapper->close();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnClose(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Close_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Close_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_SetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setFirstSetSection(static_cast<int>(firstSetSection));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setFirstSetSection(static_cast<int>(firstSetSection));
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetFirstSetSection_IsBase(true);
        vqcandlestickmodelmapper->setFirstSetSection(static_cast<int>(firstSetSection));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setFirstSetSection(static_cast<int>(firstSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetFirstSetSection(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetFirstSetSection_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetFirstSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_FirstSetSection(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->firstSetSection();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->firstSetSection();
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseFirstSetSection(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_FirstSetSection_IsBase(true);
        return vqcandlestickmodelmapper->firstSetSection();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->firstSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnFirstSetSection(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_FirstSetSection_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_FirstSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickModelMapper_SetLastSetSection(QCandlestickModelMapper* self, int lastSetSection) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setLastSetSection(static_cast<int>(lastSetSection));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setLastSetSection(static_cast<int>(lastSetSection));
    }
}

// Base class handler implementation
void QCandlestickModelMapper_QBaseSetLastSetSection(QCandlestickModelMapper* self, int lastSetSection) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetLastSetSection_IsBase(true);
        vqcandlestickmodelmapper->setLastSetSection(static_cast<int>(lastSetSection));
    } else {
        ((VirtualQCandlestickModelMapper*)self)->setLastSetSection(static_cast<int>(lastSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSetLastSetSection(QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SetLastSetSection_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SetLastSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_LastSetSection(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->lastSetSection();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->lastSetSection();
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseLastSetSection(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_LastSetSection_IsBase(true);
        return vqcandlestickmodelmapper->lastSetSection();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->lastSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnLastSetSection(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_LastSetSection_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_LastSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCandlestickModelMapper_Sender(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->sender();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->sender();
    }
}

// Base class handler implementation
QObject* QCandlestickModelMapper_QBaseSender(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Sender_IsBase(true);
        return vqcandlestickmodelmapper->sender();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSender(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Sender_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_SenderSignalIndex(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseSenderSignalIndex(const QCandlestickModelMapper* self) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SenderSignalIndex_IsBase(true);
        return vqcandlestickmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnSenderSignalIndex(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickModelMapper_Receivers(const QCandlestickModelMapper* self, const char* signal) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->receivers(signal);
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QCandlestickModelMapper_QBaseReceivers(const QCandlestickModelMapper* self, const char* signal) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Receivers_IsBase(true);
        return vqcandlestickmodelmapper->receivers(signal);
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnReceivers(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_Receivers_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickModelMapper_IsSignalConnected(const QCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        return vqcandlestickmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCandlestickModelMapper_QBaseIsSignalConnected(const QCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_IsSignalConnected_IsBase(true);
        return vqcandlestickmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQCandlestickModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnIsSignalConnected(const QCandlestickModelMapper* self, intptr_t slot) {
    auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self));
    if (vqcandlestickmodelmapper && vqcandlestickmodelmapper->isVirtualQCandlestickModelMapper) {
        vqcandlestickmodelmapper->setQCandlestickModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QCandlestickModelMapper_Delete(QCandlestickModelMapper* self) {
    delete self;
}
