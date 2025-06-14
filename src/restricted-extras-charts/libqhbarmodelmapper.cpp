#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QHBarModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhbarmodelmapper.h>
#include "libqhbarmodelmapper.h"
#include "libqhbarmodelmapper.hxx"

QHBarModelMapper* QHBarModelMapper_new() {
    return new VirtualQHBarModelMapper();
}

QHBarModelMapper* QHBarModelMapper_new2(QObject* parent) {
    return new VirtualQHBarModelMapper(parent);
}

QMetaObject* QHBarModelMapper_MetaObject(const QHBarModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHBarModelMapper_Metacast(QHBarModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHBarModelMapper_Metacall(QHBarModelMapper* self, int param1, int param2, void** param3) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHBarModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHBarModelMapper_OnMetacall(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Metacall_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHBarModelMapper_QBaseMetacall(QHBarModelMapper* self, int param1, int param2, void** param3) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Metacall_IsBase(true);
        return vqhbarmodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHBarModelMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHBarModelMapper_Tr(const char* s) {
    QString _ret = QHBarModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QHBarModelMapper_Model(const QHBarModelMapper* self) {
    return self->model();
}

void QHBarModelMapper_SetModel(QHBarModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractBarSeries* QHBarModelMapper_Series(const QHBarModelMapper* self) {
    return self->series();
}

void QHBarModelMapper_SetSeries(QHBarModelMapper* self, QAbstractBarSeries* series) {
    self->setSeries(series);
}

int QHBarModelMapper_FirstBarSetRow(const QHBarModelMapper* self) {
    return self->firstBarSetRow();
}

void QHBarModelMapper_SetFirstBarSetRow(QHBarModelMapper* self, int firstBarSetRow) {
    self->setFirstBarSetRow(static_cast<int>(firstBarSetRow));
}

int QHBarModelMapper_LastBarSetRow(const QHBarModelMapper* self) {
    return self->lastBarSetRow();
}

void QHBarModelMapper_SetLastBarSetRow(QHBarModelMapper* self, int lastBarSetRow) {
    self->setLastBarSetRow(static_cast<int>(lastBarSetRow));
}

int QHBarModelMapper_FirstColumn(const QHBarModelMapper* self) {
    return self->firstColumn();
}

void QHBarModelMapper_SetFirstColumn(QHBarModelMapper* self, int firstColumn) {
    self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHBarModelMapper_ColumnCount(const QHBarModelMapper* self) {
    return self->columnCount();
}

void QHBarModelMapper_SetColumnCount(QHBarModelMapper* self, int columnCount) {
    self->setColumnCount(static_cast<int>(columnCount));
}

void QHBarModelMapper_SeriesReplaced(QHBarModelMapper* self) {
    self->seriesReplaced();
}

void QHBarModelMapper_Connect_SeriesReplaced(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBarModelMapper_ModelReplaced(QHBarModelMapper* self) {
    self->modelReplaced();
}

void QHBarModelMapper_Connect_ModelReplaced(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBarModelMapper_FirstBarSetRowChanged(QHBarModelMapper* self) {
    self->firstBarSetRowChanged();
}

void QHBarModelMapper_Connect_FirstBarSetRowChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::firstBarSetRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBarModelMapper_LastBarSetRowChanged(QHBarModelMapper* self) {
    self->lastBarSetRowChanged();
}

void QHBarModelMapper_Connect_LastBarSetRowChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::lastBarSetRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBarModelMapper_FirstColumnChanged(QHBarModelMapper* self) {
    self->firstColumnChanged();
}

void QHBarModelMapper_Connect_FirstColumnChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::firstColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBarModelMapper_ColumnCountChanged(QHBarModelMapper* self) {
    self->columnCountChanged();
}

void QHBarModelMapper_Connect_ColumnCountChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self, &QHBarModelMapper::columnCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QHBarModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QHBarModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHBarModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHBarModelMapper::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QHBarModelMapper_Event(QHBarModelMapper* self, QEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->event(event);
    } else {
        return self->QHBarModelMapper::event(event);
    }
}

// Base class handler implementation
bool QHBarModelMapper_QBaseEvent(QHBarModelMapper* self, QEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Event_IsBase(true);
        return vqhbarmodelmapper->event(event);
    } else {
        return self->QHBarModelMapper::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnEvent(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Event_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBarModelMapper_EventFilter(QHBarModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->eventFilter(watched, event);
    } else {
        return self->QHBarModelMapper::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHBarModelMapper_QBaseEventFilter(QHBarModelMapper* self, QObject* watched, QEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_EventFilter_IsBase(true);
        return vqhbarmodelmapper->eventFilter(watched, event);
    } else {
        return self->QHBarModelMapper::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnEventFilter(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_TimerEvent(QHBarModelMapper* self, QTimerEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->timerEvent(event);
    } else {
        ((VirtualQHBarModelMapper*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseTimerEvent(QHBarModelMapper* self, QTimerEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_TimerEvent_IsBase(true);
        vqhbarmodelmapper->timerEvent(event);
    } else {
        ((VirtualQHBarModelMapper*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnTimerEvent(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_ChildEvent(QHBarModelMapper* self, QChildEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->childEvent(event);
    } else {
        ((VirtualQHBarModelMapper*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseChildEvent(QHBarModelMapper* self, QChildEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_ChildEvent_IsBase(true);
        vqhbarmodelmapper->childEvent(event);
    } else {
        ((VirtualQHBarModelMapper*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnChildEvent(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_CustomEvent(QHBarModelMapper* self, QEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->customEvent(event);
    } else {
        ((VirtualQHBarModelMapper*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseCustomEvent(QHBarModelMapper* self, QEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_CustomEvent_IsBase(true);
        vqhbarmodelmapper->customEvent(event);
    } else {
        ((VirtualQHBarModelMapper*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnCustomEvent(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_ConnectNotify(QHBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQHBarModelMapper*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseConnectNotify(QHBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_ConnectNotify_IsBase(true);
        vqhbarmodelmapper->connectNotify(*signal);
    } else {
        ((VirtualQHBarModelMapper*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnConnectNotify(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_DisconnectNotify(QHBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQHBarModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseDisconnectNotify(QHBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_DisconnectNotify_IsBase(true);
        vqhbarmodelmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQHBarModelMapper*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnDisconnectNotify(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBarModelMapper_First(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->first();
    } else {
        return ((VirtualQHBarModelMapper*)self)->first();
    }
}

// Base class handler implementation
int QHBarModelMapper_QBaseFirst(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_First_IsBase(true);
        return vqhbarmodelmapper->first();
    } else {
        return ((VirtualQHBarModelMapper*)self)->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnFirst(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_First_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_SetFirst(QHBarModelMapper* self, int first) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setFirst(static_cast<int>(first));
    } else {
        ((VirtualQHBarModelMapper*)self)->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseSetFirst(QHBarModelMapper* self, int first) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetFirst_IsBase(true);
        vqhbarmodelmapper->setFirst(static_cast<int>(first));
    } else {
        ((VirtualQHBarModelMapper*)self)->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnSetFirst(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBarModelMapper_Count(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->count();
    } else {
        return ((VirtualQHBarModelMapper*)self)->count();
    }
}

// Base class handler implementation
int QHBarModelMapper_QBaseCount(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Count_IsBase(true);
        return vqhbarmodelmapper->count();
    } else {
        return ((VirtualQHBarModelMapper*)self)->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnCount(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Count_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_SetCount(QHBarModelMapper* self, int count) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setCount(static_cast<int>(count));
    } else {
        ((VirtualQHBarModelMapper*)self)->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseSetCount(QHBarModelMapper* self, int count) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetCount_IsBase(true);
        vqhbarmodelmapper->setCount(static_cast<int>(count));
    } else {
        ((VirtualQHBarModelMapper*)self)->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnSetCount(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetCount_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBarModelMapper_FirstBarSetSection(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->firstBarSetSection();
    } else {
        return ((VirtualQHBarModelMapper*)self)->firstBarSetSection();
    }
}

// Base class handler implementation
int QHBarModelMapper_QBaseFirstBarSetSection(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_FirstBarSetSection_IsBase(true);
        return vqhbarmodelmapper->firstBarSetSection();
    } else {
        return ((VirtualQHBarModelMapper*)self)->firstBarSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnFirstBarSetSection(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_FirstBarSetSection_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_FirstBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_SetFirstBarSetSection(QHBarModelMapper* self, int firstBarSetSection) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    } else {
        ((VirtualQHBarModelMapper*)self)->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseSetFirstBarSetSection(QHBarModelMapper* self, int firstBarSetSection) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetFirstBarSetSection_IsBase(true);
        vqhbarmodelmapper->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    } else {
        ((VirtualQHBarModelMapper*)self)->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnSetFirstBarSetSection(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetFirstBarSetSection_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_SetFirstBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBarModelMapper_LastBarSetSection(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->lastBarSetSection();
    } else {
        return ((VirtualQHBarModelMapper*)self)->lastBarSetSection();
    }
}

// Base class handler implementation
int QHBarModelMapper_QBaseLastBarSetSection(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_LastBarSetSection_IsBase(true);
        return vqhbarmodelmapper->lastBarSetSection();
    } else {
        return ((VirtualQHBarModelMapper*)self)->lastBarSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnLastBarSetSection(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_LastBarSetSection_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_LastBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_SetLastBarSetSection(QHBarModelMapper* self, int lastBarSetSection) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    } else {
        ((VirtualQHBarModelMapper*)self)->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseSetLastBarSetSection(QHBarModelMapper* self, int lastBarSetSection) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetLastBarSetSection_IsBase(true);
        vqhbarmodelmapper->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    } else {
        ((VirtualQHBarModelMapper*)self)->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnSetLastBarSetSection(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetLastBarSetSection_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_SetLastBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBarModelMapper_Orientation(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return static_cast<int>(vqhbarmodelmapper->orientation());
    } else {
        return static_cast<int>(((VirtualQHBarModelMapper*)self)->orientation());
    }
}

// Base class handler implementation
int QHBarModelMapper_QBaseOrientation(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqhbarmodelmapper->orientation());
    } else {
        return static_cast<int>(((VirtualQHBarModelMapper*)self)->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnOrientation(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Orientation_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBarModelMapper_SetOrientation(QHBarModelMapper* self, int orientation) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        ((VirtualQHBarModelMapper*)self)->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QHBarModelMapper_QBaseSetOrientation(QHBarModelMapper* self, int orientation) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetOrientation_IsBase(true);
        vqhbarmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        ((VirtualQHBarModelMapper*)self)->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnSetOrientation(QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHBarModelMapper_Sender(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->sender();
    } else {
        return ((VirtualQHBarModelMapper*)self)->sender();
    }
}

// Base class handler implementation
QObject* QHBarModelMapper_QBaseSender(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Sender_IsBase(true);
        return vqhbarmodelmapper->sender();
    } else {
        return ((VirtualQHBarModelMapper*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnSender(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Sender_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBarModelMapper_SenderSignalIndex(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQHBarModelMapper*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QHBarModelMapper_QBaseSenderSignalIndex(const QHBarModelMapper* self) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SenderSignalIndex_IsBase(true);
        return vqhbarmodelmapper->senderSignalIndex();
    } else {
        return ((VirtualQHBarModelMapper*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnSenderSignalIndex(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBarModelMapper_Receivers(const QHBarModelMapper* self, const char* signal) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->receivers(signal);
    } else {
        return ((VirtualQHBarModelMapper*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QHBarModelMapper_QBaseReceivers(const QHBarModelMapper* self, const char* signal) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Receivers_IsBase(true);
        return vqhbarmodelmapper->receivers(signal);
    } else {
        return ((VirtualQHBarModelMapper*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnReceivers(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_Receivers_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBarModelMapper_IsSignalConnected(const QHBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        return vqhbarmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQHBarModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHBarModelMapper_QBaseIsSignalConnected(const QHBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_IsSignalConnected_IsBase(true);
        return vqhbarmodelmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQHBarModelMapper*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnIsSignalConnected(const QHBarModelMapper* self, intptr_t slot) {
    auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self));
    if (vqhbarmodelmapper && vqhbarmodelmapper->isVirtualQHBarModelMapper) {
        vqhbarmodelmapper->setQHBarModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QHBarModelMapper_Delete(QHBarModelMapper* self) {
    delete self;
}
