#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVBarModelMapper>
#include <qvbarmodelmapper.h>
#include "libqvbarmodelmapper.h"
#include "libqvbarmodelmapper.hxx"

QVBarModelMapper* QVBarModelMapper_new() {
    return new VirtualQVBarModelMapper();
}

QVBarModelMapper* QVBarModelMapper_new2(QObject* parent) {
    return new VirtualQVBarModelMapper(parent);
}

QMetaObject* QVBarModelMapper_MetaObject(const QVBarModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVBarModelMapper_Metacast(QVBarModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVBarModelMapper_Metacall(QVBarModelMapper* self, int param1, int param2, void** param3) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVBarModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVBarModelMapper_OnMetacall(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Metacall_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVBarModelMapper_QBaseMetacall(QVBarModelMapper* self, int param1, int param2, void** param3) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Metacall_IsBase(true);
        return vqvbarmodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVBarModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVBarModelMapper_Tr(const char* s) {
    QString _ret = QVBarModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QVBarModelMapper_Model(const QVBarModelMapper* self) {
    return self->model();
}

void QVBarModelMapper_SetModel(QVBarModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractBarSeries* QVBarModelMapper_Series(const QVBarModelMapper* self) {
    return self->series();
}

void QVBarModelMapper_SetSeries(QVBarModelMapper* self, QAbstractBarSeries* series) {
    self->setSeries(series);
}

int QVBarModelMapper_FirstBarSetColumn(const QVBarModelMapper* self) {
    return self->firstBarSetColumn();
}

void QVBarModelMapper_SetFirstBarSetColumn(QVBarModelMapper* self, int firstBarSetColumn) {
    self->setFirstBarSetColumn(static_cast<int>(firstBarSetColumn));
}

int QVBarModelMapper_LastBarSetColumn(const QVBarModelMapper* self) {
    return self->lastBarSetColumn();
}

void QVBarModelMapper_SetLastBarSetColumn(QVBarModelMapper* self, int lastBarSetColumn) {
    self->setLastBarSetColumn(static_cast<int>(lastBarSetColumn));
}

int QVBarModelMapper_FirstRow(const QVBarModelMapper* self) {
    return self->firstRow();
}

void QVBarModelMapper_SetFirstRow(QVBarModelMapper* self, int firstRow) {
    self->setFirstRow(static_cast<int>(firstRow));
}

int QVBarModelMapper_RowCount(const QVBarModelMapper* self) {
    return self->rowCount();
}

void QVBarModelMapper_SetRowCount(QVBarModelMapper* self, int rowCount) {
    self->setRowCount(static_cast<int>(rowCount));
}

void QVBarModelMapper_SeriesReplaced(QVBarModelMapper* self) {
    self->seriesReplaced();
}

void QVBarModelMapper_Connect_SeriesReplaced(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBarModelMapper_ModelReplaced(QVBarModelMapper* self) {
    self->modelReplaced();
}

void QVBarModelMapper_Connect_ModelReplaced(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBarModelMapper_FirstBarSetColumnChanged(QVBarModelMapper* self) {
    self->firstBarSetColumnChanged();
}

void QVBarModelMapper_Connect_FirstBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::firstBarSetColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBarModelMapper_LastBarSetColumnChanged(QVBarModelMapper* self) {
    self->lastBarSetColumnChanged();
}

void QVBarModelMapper_Connect_LastBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::lastBarSetColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBarModelMapper_FirstRowChanged(QVBarModelMapper* self) {
    self->firstRowChanged();
}

void QVBarModelMapper_Connect_FirstRowChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::firstRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVBarModelMapper_RowCountChanged(QVBarModelMapper* self) {
    self->rowCountChanged();
}

void QVBarModelMapper_Connect_RowCountChanged(QVBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBarModelMapper*) = reinterpret_cast<void (*)(QVBarModelMapper*)>(slot);
    QVBarModelMapper::connect(self, &QVBarModelMapper::rowCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVBarModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QVBarModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVBarModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVBarModelMapper::tr(s, c, static_cast<int>(n));
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
bool QVBarModelMapper_Event(QVBarModelMapper* self, QEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->event(event);
    } else {
        return self->QVBarModelMapper::event(event);
    }
}

// Base class handler implementation
bool QVBarModelMapper_QBaseEvent(QVBarModelMapper* self, QEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Event_IsBase(true);
        return vqvbarmodelmapper->event(event);
    } else {
        return self->QVBarModelMapper::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnEvent(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Event_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBarModelMapper_EventFilter(QVBarModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->eventFilter(watched, event);
    } else {
        return self->QVBarModelMapper::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVBarModelMapper_QBaseEventFilter(QVBarModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_EventFilter_IsBase(true);
        return vqvbarmodelmapper->eventFilter(watched, event);
    } else {
        return self->QVBarModelMapper::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnEventFilter(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_TimerEvent(QVBarModelMapper* self, QTimerEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->timerEvent(event);
    } else {
        ((VirtualQVBarModelMapper*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseTimerEvent(QVBarModelMapper* self, QTimerEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_TimerEvent_IsBase(true);
        vqvbarmodelmapper->timerEvent(event);
    } else {
        ((VirtualQVBarModelMapper*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnTimerEvent(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_ChildEvent(QVBarModelMapper* self, QChildEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->childEvent(event);
    } else {
        ((VirtualQVBarModelMapper*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseChildEvent(QVBarModelMapper* self, QChildEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_ChildEvent_IsBase(true);
        vqvbarmodelmapper->childEvent(event);
    } else {
        ((VirtualQVBarModelMapper*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnChildEvent(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_CustomEvent(QVBarModelMapper* self, QEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->customEvent(event);
    } else {
        ((VirtualQVBarModelMapper*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseCustomEvent(QVBarModelMapper* self, QEvent* event) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_CustomEvent_IsBase(true);
        vqvbarmodelmapper->customEvent(event);
    } else {
        ((VirtualQVBarModelMapper*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnCustomEvent(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_ConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQVBarModelMapper*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_ConnectNotify_IsBase(true);
        vqvbarmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQVBarModelMapper*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnConnectNotify(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_DisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQVBarModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseDisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_DisconnectNotify_IsBase(true);
        vqvbarmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQVBarModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnDisconnectNotify(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_First(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->first();
    } else {
        return ((VirtualQVBarModelMapper*)self)->first();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseFirst(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_First_IsBase(true);
        return vqvbarmodelmapper->first();
    } else {
        return ((VirtualQVBarModelMapper*)self)->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnFirst(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_First_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetFirst(QVBarModelMapper* self, int first) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setFirst(static_cast<int>(first));
    } else {
        ((VirtualQVBarModelMapper*)self)->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetFirst(QVBarModelMapper* self, int first) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetFirst_IsBase(true);
        vqvbarmodelmapper->setFirst(static_cast<int>(first));
    } else {
        ((VirtualQVBarModelMapper*)self)->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetFirst(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_Count(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->count();
    } else {
        return ((VirtualQVBarModelMapper*)self)->count();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseCount(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Count_IsBase(true);
        return vqvbarmodelmapper->count();
    } else {
        return ((VirtualQVBarModelMapper*)self)->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnCount(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Count_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetCount(QVBarModelMapper* self, int count) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setCount(static_cast<int>(count));
    } else {
        ((VirtualQVBarModelMapper*)self)->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetCount(QVBarModelMapper* self, int count) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetCount_IsBase(true);
        vqvbarmodelmapper->setCount(static_cast<int>(count));
    } else {
        ((VirtualQVBarModelMapper*)self)->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetCount(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetCount_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_FirstBarSetSection(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->firstBarSetSection();
    } else {
        return ((VirtualQVBarModelMapper*)self)->firstBarSetSection();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseFirstBarSetSection(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_FirstBarSetSection_IsBase(true);
        return vqvbarmodelmapper->firstBarSetSection();
    } else {
        return ((VirtualQVBarModelMapper*)self)->firstBarSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnFirstBarSetSection(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_FirstBarSetSection_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_FirstBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    } else {
        ((VirtualQVBarModelMapper*)self)->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetFirstBarSetSection_IsBase(true);
        vqvbarmodelmapper->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    } else {
        ((VirtualQVBarModelMapper*)self)->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetFirstBarSetSection(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetFirstBarSetSection_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetFirstBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_LastBarSetSection(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->lastBarSetSection();
    } else {
        return ((VirtualQVBarModelMapper*)self)->lastBarSetSection();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseLastBarSetSection(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_LastBarSetSection_IsBase(true);
        return vqvbarmodelmapper->lastBarSetSection();
    } else {
        return ((VirtualQVBarModelMapper*)self)->lastBarSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnLastBarSetSection(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_LastBarSetSection_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_LastBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    } else {
        ((VirtualQVBarModelMapper*)self)->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetLastBarSetSection_IsBase(true);
        vqvbarmodelmapper->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    } else {
        ((VirtualQVBarModelMapper*)self)->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetLastBarSetSection(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetLastBarSetSection_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetLastBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_Orientation(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return static_cast<int>(vqvbarmodelmapper->orientation());
    } else {
        return static_cast<int>(((VirtualQVBarModelMapper*)self)->orientation());
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseOrientation(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqvbarmodelmapper->orientation());
    } else {
        return static_cast<int>(((VirtualQVBarModelMapper*)self)->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnOrientation(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Orientation_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetOrientation(QVBarModelMapper* self, int orientation) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        ((VirtualQVBarModelMapper*)self)->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetOrientation(QVBarModelMapper* self, int orientation) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetOrientation_IsBase(true);
        vqvbarmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        ((VirtualQVBarModelMapper*)self)->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetOrientation(QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self);
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVBarModelMapper_Sender(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->sender();
    } else {
        return ((VirtualQVBarModelMapper*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVBarModelMapper_QBaseSender(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Sender_IsBase(true);
        return vqvbarmodelmapper->sender();
    } else {
        return ((VirtualQVBarModelMapper*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSender(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Sender_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_SenderSignalIndex(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQVBarModelMapper*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseSenderSignalIndex(const QVBarModelMapper* self) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SenderSignalIndex_IsBase(true);
        return vqvbarmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQVBarModelMapper*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSenderSignalIndex(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_Receivers(const QVBarModelMapper* self, const char* signal) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->receivers(signal);
    } else {
        return ((VirtualQVBarModelMapper*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseReceivers(const QVBarModelMapper* self, const char* signal) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Receivers_IsBase(true);
        return vqvbarmodelmapper->receivers(signal);
    } else {
        return ((VirtualQVBarModelMapper*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnReceivers(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_Receivers_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBarModelMapper_IsSignalConnected(const QVBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        return vqvbarmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQVBarModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVBarModelMapper_QBaseIsSignalConnected(const QVBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_IsSignalConnected_IsBase(true);
        return vqvbarmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQVBarModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnIsSignalConnected(const QVBarModelMapper* self, intptr_t slot) {
    auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self));
    if (vqvbarmodelmapper && vqvbarmodelmapper->isVirtualQVBarModelMapper) {
        vqvbarmodelmapper->setQVBarModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QVBarModelMapper_Delete(QVBarModelMapper* self) {
    delete self;
}
