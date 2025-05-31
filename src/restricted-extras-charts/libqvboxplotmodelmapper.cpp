#include <QAbstractItemModel>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVBoxPlotModelMapper>
#include <qvboxplotmodelmapper.h>
#include "libqvboxplotmodelmapper.h"
#include "libqvboxplotmodelmapper.hxx"

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new() {
    return new VirtualQVBoxPlotModelMapper();
}

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new2(QObject* parent) {
    return new VirtualQVBoxPlotModelMapper(parent);
}

QMetaObject* QVBoxPlotModelMapper_MetaObject(const QVBoxPlotModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVBoxPlotModelMapper_Metacast(QVBoxPlotModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVBoxPlotModelMapper_Metacall(QVBoxPlotModelMapper* self, int param1, int param2, void** param3) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVBoxPlotModelMapper_OnMetacall(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Metacall_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVBoxPlotModelMapper_QBaseMetacall(QVBoxPlotModelMapper* self, int param1, int param2, void** param3) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Metacall_IsBase(true);
        return vqvboxplotmodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVBoxPlotModelMapper_Tr(const char* s) {
    QString _ret = QVBoxPlotModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QVBoxPlotModelMapper_Model(const QVBoxPlotModelMapper* self) {
    return self->model();
}

void QVBoxPlotModelMapper_SetModel(QVBoxPlotModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QBoxPlotSeries* QVBoxPlotModelMapper_Series(const QVBoxPlotModelMapper* self) {
    return self->series();
}

void QVBoxPlotModelMapper_SetSeries(QVBoxPlotModelMapper* self, QBoxPlotSeries* series) {
    self->setSeries(series);
}

int QVBoxPlotModelMapper_FirstBoxSetColumn(const QVBoxPlotModelMapper* self) {
    return self->firstBoxSetColumn();
}

void QVBoxPlotModelMapper_SetFirstBoxSetColumn(QVBoxPlotModelMapper* self, int firstBoxSetColumn) {
    self->setFirstBoxSetColumn(static_cast<int>(firstBoxSetColumn));
}

int QVBoxPlotModelMapper_LastBoxSetColumn(const QVBoxPlotModelMapper* self) {
    return self->lastBoxSetColumn();
}

void QVBoxPlotModelMapper_SetLastBoxSetColumn(QVBoxPlotModelMapper* self, int lastBoxSetColumn) {
    self->setLastBoxSetColumn(static_cast<int>(lastBoxSetColumn));
}

int QVBoxPlotModelMapper_FirstRow(const QVBoxPlotModelMapper* self) {
    return self->firstRow();
}

void QVBoxPlotModelMapper_SetFirstRow(QVBoxPlotModelMapper* self, int firstRow) {
    self->setFirstRow(static_cast<int>(firstRow));
}

int QVBoxPlotModelMapper_RowCount(const QVBoxPlotModelMapper* self) {
    return self->rowCount();
}

void QVBoxPlotModelMapper_SetRowCount(QVBoxPlotModelMapper* self, int rowCount) {
    self->setRowCount(static_cast<int>(rowCount));
}

void QVBoxPlotModelMapper_SeriesReplaced(QVBoxPlotModelMapper* self) {
    self->seriesReplaced();
}

void QVBoxPlotModelMapper_Connect_SeriesReplaced(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBoxPlotModelMapper_ModelReplaced(QVBoxPlotModelMapper* self) {
    self->modelReplaced();
}

void QVBoxPlotModelMapper_Connect_ModelReplaced(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBoxPlotModelMapper_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self) {
    self->firstBoxSetColumnChanged();
}

void QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::firstBoxSetColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBoxPlotModelMapper_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self) {
    self->lastBoxSetColumnChanged();
}

void QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::lastBoxSetColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBoxPlotModelMapper_FirstRowChanged(QVBoxPlotModelMapper* self) {
    self->firstRowChanged();
}

void QVBoxPlotModelMapper_Connect_FirstRowChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::firstRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBoxPlotModelMapper_RowCountChanged(QVBoxPlotModelMapper* self) {
    self->rowCountChanged();
}

void QVBoxPlotModelMapper_Connect_RowCountChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self, &QVBoxPlotModelMapper::rowCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVBoxPlotModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QVBoxPlotModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QVBoxPlotModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVBoxPlotModelMapper::tr(s, c, static_cast<int>(n));
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
bool QVBoxPlotModelMapper_Event(QVBoxPlotModelMapper* self, QEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->event(event);
    } else {
        return self->QVBoxPlotModelMapper::event(event);
    }
}

// Base class handler implementation
bool QVBoxPlotModelMapper_QBaseEvent(QVBoxPlotModelMapper* self, QEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Event_IsBase(true);
        return vqvboxplotmodelmapper->event(event);
    } else {
        return self->QVBoxPlotModelMapper::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnEvent(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Event_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBoxPlotModelMapper_EventFilter(QVBoxPlotModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->eventFilter(watched, event);
    } else {
        return self->QVBoxPlotModelMapper::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVBoxPlotModelMapper_QBaseEventFilter(QVBoxPlotModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_EventFilter_IsBase(true);
        return vqvboxplotmodelmapper->eventFilter(watched, event);
    } else {
        return self->QVBoxPlotModelMapper::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnEventFilter(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_TimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->timerEvent(event);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseTimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_TimerEvent_IsBase(true);
        vqvboxplotmodelmapper->timerEvent(event);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnTimerEvent(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_ChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->childEvent(event);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_ChildEvent_IsBase(true);
        vqvboxplotmodelmapper->childEvent(event);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnChildEvent(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_CustomEvent(QVBoxPlotModelMapper* self, QEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->customEvent(event);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseCustomEvent(QVBoxPlotModelMapper* self, QEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_CustomEvent_IsBase(true);
        vqvboxplotmodelmapper->customEvent(event);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnCustomEvent(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_ConnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseConnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_ConnectNotify_IsBase(true);
        vqvboxplotmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnConnectNotify(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_DisconnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseDisconnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_DisconnectNotify_IsBase(true);
        vqvboxplotmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnDisconnectNotify(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxPlotModelMapper_First(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->first();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->first();
    }
}

// Base class handler implementation
int QVBoxPlotModelMapper_QBaseFirst(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_First_IsBase(true);
        return vqvboxplotmodelmapper->first();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnFirst(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_First_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_SetFirst(QVBoxPlotModelMapper* self, int first) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setFirst(static_cast<int>(first));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseSetFirst(QVBoxPlotModelMapper* self, int first) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetFirst_IsBase(true);
        vqvboxplotmodelmapper->setFirst(static_cast<int>(first));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnSetFirst(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxPlotModelMapper_Count(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->count();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->count();
    }
}

// Base class handler implementation
int QVBoxPlotModelMapper_QBaseCount(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Count_IsBase(true);
        return vqvboxplotmodelmapper->count();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnCount(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Count_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_SetCount(QVBoxPlotModelMapper* self, int count) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setCount(static_cast<int>(count));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseSetCount(QVBoxPlotModelMapper* self, int count) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetCount_IsBase(true);
        vqvboxplotmodelmapper->setCount(static_cast<int>(count));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnSetCount(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetCount_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxPlotModelMapper_FirstBoxSetSection(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->firstBoxSetSection();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->firstBoxSetSection();
    }
}

// Base class handler implementation
int QVBoxPlotModelMapper_QBaseFirstBoxSetSection(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_FirstBoxSetSection_IsBase(true);
        return vqvboxplotmodelmapper->firstBoxSetSection();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->firstBoxSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnFirstBoxSetSection(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_FirstBoxSetSection_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_FirstBoxSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_SetFirstBoxSetSection(QVBoxPlotModelMapper* self, int firstBoxSetSection) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseSetFirstBoxSetSection(QVBoxPlotModelMapper* self, int firstBoxSetSection) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetFirstBoxSetSection_IsBase(true);
        vqvboxplotmodelmapper->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnSetFirstBoxSetSection(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetFirstBoxSetSection_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_SetFirstBoxSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxPlotModelMapper_LastBoxSetSection(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->lastBoxSetSection();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->lastBoxSetSection();
    }
}

// Base class handler implementation
int QVBoxPlotModelMapper_QBaseLastBoxSetSection(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_LastBoxSetSection_IsBase(true);
        return vqvboxplotmodelmapper->lastBoxSetSection();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->lastBoxSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnLastBoxSetSection(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_LastBoxSetSection_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_LastBoxSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_SetLastBoxSetSection(QVBoxPlotModelMapper* self, int lastBoxSetSection) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseSetLastBoxSetSection(QVBoxPlotModelMapper* self, int lastBoxSetSection) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetLastBoxSetSection_IsBase(true);
        vqvboxplotmodelmapper->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnSetLastBoxSetSection(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetLastBoxSetSection_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_SetLastBoxSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxPlotModelMapper_Orientation(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return static_cast<int>(vqvboxplotmodelmapper->orientation());
    } else {
        return static_cast<int>(((VirtualQVBoxPlotModelMapper*)self)->orientation());
    }
}

// Base class handler implementation
int QVBoxPlotModelMapper_QBaseOrientation(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqvboxplotmodelmapper->orientation());
    } else {
        return static_cast<int>(((VirtualQVBoxPlotModelMapper*)self)->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnOrientation(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Orientation_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxPlotModelMapper_SetOrientation(QVBoxPlotModelMapper* self, int orientation) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_QBaseSetOrientation(QVBoxPlotModelMapper* self, int orientation) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetOrientation_IsBase(true);
        vqvboxplotmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        ((VirtualQVBoxPlotModelMapper*)self)->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnSetOrientation(QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVBoxPlotModelMapper_Sender(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->sender();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVBoxPlotModelMapper_QBaseSender(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Sender_IsBase(true);
        return vqvboxplotmodelmapper->sender();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnSender(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Sender_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxPlotModelMapper_SenderSignalIndex(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVBoxPlotModelMapper_QBaseSenderSignalIndex(const QVBoxPlotModelMapper* self) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SenderSignalIndex_IsBase(true);
        return vqvboxplotmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnSenderSignalIndex(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxPlotModelMapper_Receivers(const QVBoxPlotModelMapper* self, const char* signal) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->receivers(signal);
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVBoxPlotModelMapper_QBaseReceivers(const QVBoxPlotModelMapper* self, const char* signal) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Receivers_IsBase(true);
        return vqvboxplotmodelmapper->receivers(signal);
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnReceivers(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_Receivers_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBoxPlotModelMapper_IsSignalConnected(const QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        return vqvboxplotmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVBoxPlotModelMapper_QBaseIsSignalConnected(const QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_IsSignalConnected_IsBase(true);
        return vqvboxplotmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQVBoxPlotModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnIsSignalConnected(const QVBoxPlotModelMapper* self, intptr_t slot) {
    auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self));
    if (vqvboxplotmodelmapper && vqvboxplotmodelmapper->isVirtualQVBoxPlotModelMapper) {
        vqvboxplotmodelmapper->setQVBoxPlotModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QVBoxPlotModelMapper_Delete(QVBoxPlotModelMapper* self) {
    delete self;
}
