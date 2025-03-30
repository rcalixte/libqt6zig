#include <QAbstractItemModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHBoxPlotModelMapper>
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
#include <qhboxplotmodelmapper.h>
#include "libqhboxplotmodelmapper.h"
#include "libqhboxplotmodelmapper.hxx"

QHBoxPlotModelMapper* QHBoxPlotModelMapper_new() {
    return new VirtualQHBoxPlotModelMapper();
}

QHBoxPlotModelMapper* QHBoxPlotModelMapper_new2(QObject* parent) {
    return new VirtualQHBoxPlotModelMapper(parent);
}

QMetaObject* QHBoxPlotModelMapper_MetaObject(const QHBoxPlotModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHBoxPlotModelMapper_Metacast(QHBoxPlotModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHBoxPlotModelMapper_Metacall(QHBoxPlotModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHBoxPlotModelMapper_OnMetacall(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Metacall_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHBoxPlotModelMapper_QBaseMetacall(QHBoxPlotModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Metacall_IsBase(true);
        return vqhboxplotmodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHBoxPlotModelMapper_Tr(const char* s) {
    QString _ret = QHBoxPlotModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QHBoxPlotModelMapper_Model(const QHBoxPlotModelMapper* self) {
    return self->model();
}

void QHBoxPlotModelMapper_SetModel(QHBoxPlotModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QBoxPlotSeries* QHBoxPlotModelMapper_Series(const QHBoxPlotModelMapper* self) {
    return self->series();
}

void QHBoxPlotModelMapper_SetSeries(QHBoxPlotModelMapper* self, QBoxPlotSeries* series) {
    self->setSeries(series);
}

int QHBoxPlotModelMapper_FirstBoxSetRow(const QHBoxPlotModelMapper* self) {
    return self->firstBoxSetRow();
}

void QHBoxPlotModelMapper_SetFirstBoxSetRow(QHBoxPlotModelMapper* self, int firstBoxSetRow) {
    self->setFirstBoxSetRow(static_cast<int>(firstBoxSetRow));
}

int QHBoxPlotModelMapper_LastBoxSetRow(const QHBoxPlotModelMapper* self) {
    return self->lastBoxSetRow();
}

void QHBoxPlotModelMapper_SetLastBoxSetRow(QHBoxPlotModelMapper* self, int lastBoxSetRow) {
    self->setLastBoxSetRow(static_cast<int>(lastBoxSetRow));
}

int QHBoxPlotModelMapper_FirstColumn(const QHBoxPlotModelMapper* self) {
    return self->firstColumn();
}

void QHBoxPlotModelMapper_SetFirstColumn(QHBoxPlotModelMapper* self, int firstColumn) {
    self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHBoxPlotModelMapper_ColumnCount(const QHBoxPlotModelMapper* self) {
    return self->columnCount();
}

void QHBoxPlotModelMapper_SetColumnCount(QHBoxPlotModelMapper* self, int rowCount) {
    self->setColumnCount(static_cast<int>(rowCount));
}

void QHBoxPlotModelMapper_SeriesReplaced(QHBoxPlotModelMapper* self) {
    self->seriesReplaced();
}

void QHBoxPlotModelMapper_Connect_SeriesReplaced(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBoxPlotModelMapper_ModelReplaced(QHBoxPlotModelMapper* self) {
    self->modelReplaced();
}

void QHBoxPlotModelMapper_Connect_ModelReplaced(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBoxPlotModelMapper_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self) {
    self->firstBoxSetRowChanged();
}

void QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::firstBoxSetRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBoxPlotModelMapper_LastBoxSetRowChanged(QHBoxPlotModelMapper* self) {
    self->lastBoxSetRowChanged();
}

void QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::lastBoxSetRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBoxPlotModelMapper_FirstColumnChanged(QHBoxPlotModelMapper* self) {
    self->firstColumnChanged();
}

void QHBoxPlotModelMapper_Connect_FirstColumnChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::firstColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHBoxPlotModelMapper_ColumnCountChanged(QHBoxPlotModelMapper* self) {
    self->columnCountChanged();
}

void QHBoxPlotModelMapper_Connect_ColumnCountChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self, &QHBoxPlotModelMapper::columnCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QHBoxPlotModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QHBoxPlotModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHBoxPlotModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHBoxPlotModelMapper::tr(s, c, static_cast<int>(n));
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
bool QHBoxPlotModelMapper_Event(QHBoxPlotModelMapper* self, QEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        return vqhboxplotmodelmapper->event(event);
    } else {
        return vqhboxplotmodelmapper->event(event);
    }
}

// Base class handler implementation
bool QHBoxPlotModelMapper_QBaseEvent(QHBoxPlotModelMapper* self, QEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Event_IsBase(true);
        return vqhboxplotmodelmapper->event(event);
    } else {
        return vqhboxplotmodelmapper->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnEvent(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Event_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBoxPlotModelMapper_EventFilter(QHBoxPlotModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        return vqhboxplotmodelmapper->eventFilter(watched, event);
    } else {
        return vqhboxplotmodelmapper->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHBoxPlotModelMapper_QBaseEventFilter(QHBoxPlotModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_EventFilter_IsBase(true);
        return vqhboxplotmodelmapper->eventFilter(watched, event);
    } else {
        return vqhboxplotmodelmapper->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnEventFilter(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_TimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->timerEvent(event);
    } else {
        vqhboxplotmodelmapper->timerEvent(event);
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseTimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_TimerEvent_IsBase(true);
        vqhboxplotmodelmapper->timerEvent(event);
    } else {
        vqhboxplotmodelmapper->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnTimerEvent(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_ChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->childEvent(event);
    } else {
        vqhboxplotmodelmapper->childEvent(event);
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_ChildEvent_IsBase(true);
        vqhboxplotmodelmapper->childEvent(event);
    } else {
        vqhboxplotmodelmapper->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnChildEvent(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_CustomEvent(QHBoxPlotModelMapper* self, QEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->customEvent(event);
    } else {
        vqhboxplotmodelmapper->customEvent(event);
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseCustomEvent(QHBoxPlotModelMapper* self, QEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_CustomEvent_IsBase(true);
        vqhboxplotmodelmapper->customEvent(event);
    } else {
        vqhboxplotmodelmapper->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnCustomEvent(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_ConnectNotify(QHBoxPlotModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->connectNotify(*signal);
    } else {
        vqhboxplotmodelmapper->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseConnectNotify(QHBoxPlotModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_ConnectNotify_IsBase(true);
        vqhboxplotmodelmapper->connectNotify(*signal);
    } else {
        vqhboxplotmodelmapper->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnConnectNotify(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_DisconnectNotify(QHBoxPlotModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->disconnectNotify(*signal);
    } else {
        vqhboxplotmodelmapper->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseDisconnectNotify(QHBoxPlotModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_DisconnectNotify_IsBase(true);
        vqhboxplotmodelmapper->disconnectNotify(*signal);
    } else {
        vqhboxplotmodelmapper->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnDisconnectNotify(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxPlotModelMapper_First(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->first();
    } else {
        return vqhboxplotmodelmapper->first();
    }
}

// Base class handler implementation
int QHBoxPlotModelMapper_QBaseFirst(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_First_IsBase(true);
        return vqhboxplotmodelmapper->first();
    } else {
        return vqhboxplotmodelmapper->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnFirst(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_First_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_SetFirst(QHBoxPlotModelMapper* self, int first) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqhboxplotmodelmapper->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseSetFirst(QHBoxPlotModelMapper* self, int first) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetFirst_IsBase(true);
        vqhboxplotmodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqhboxplotmodelmapper->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnSetFirst(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxPlotModelMapper_Count(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->count();
    } else {
        return vqhboxplotmodelmapper->count();
    }
}

// Base class handler implementation
int QHBoxPlotModelMapper_QBaseCount(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Count_IsBase(true);
        return vqhboxplotmodelmapper->count();
    } else {
        return vqhboxplotmodelmapper->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnCount(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Count_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_SetCount(QHBoxPlotModelMapper* self, int count) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setCount(static_cast<int>(count));
    } else {
        vqhboxplotmodelmapper->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseSetCount(QHBoxPlotModelMapper* self, int count) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetCount_IsBase(true);
        vqhboxplotmodelmapper->setCount(static_cast<int>(count));
    } else {
        vqhboxplotmodelmapper->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnSetCount(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetCount_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxPlotModelMapper_FirstBoxSetSection(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->firstBoxSetSection();
    } else {
        return vqhboxplotmodelmapper->firstBoxSetSection();
    }
}

// Base class handler implementation
int QHBoxPlotModelMapper_QBaseFirstBoxSetSection(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_FirstBoxSetSection_IsBase(true);
        return vqhboxplotmodelmapper->firstBoxSetSection();
    } else {
        return vqhboxplotmodelmapper->firstBoxSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnFirstBoxSetSection(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_FirstBoxSetSection_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_FirstBoxSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_SetFirstBoxSetSection(QHBoxPlotModelMapper* self, int firstBoxSetSection) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    } else {
        vqhboxplotmodelmapper->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseSetFirstBoxSetSection(QHBoxPlotModelMapper* self, int firstBoxSetSection) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetFirstBoxSetSection_IsBase(true);
        vqhboxplotmodelmapper->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    } else {
        vqhboxplotmodelmapper->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnSetFirstBoxSetSection(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetFirstBoxSetSection_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_SetFirstBoxSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxPlotModelMapper_LastBoxSetSection(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->lastBoxSetSection();
    } else {
        return vqhboxplotmodelmapper->lastBoxSetSection();
    }
}

// Base class handler implementation
int QHBoxPlotModelMapper_QBaseLastBoxSetSection(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_LastBoxSetSection_IsBase(true);
        return vqhboxplotmodelmapper->lastBoxSetSection();
    } else {
        return vqhboxplotmodelmapper->lastBoxSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnLastBoxSetSection(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_LastBoxSetSection_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_LastBoxSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_SetLastBoxSetSection(QHBoxPlotModelMapper* self, int lastBoxSetSection) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    } else {
        vqhboxplotmodelmapper->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseSetLastBoxSetSection(QHBoxPlotModelMapper* self, int lastBoxSetSection) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetLastBoxSetSection_IsBase(true);
        vqhboxplotmodelmapper->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    } else {
        vqhboxplotmodelmapper->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnSetLastBoxSetSection(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetLastBoxSetSection_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_SetLastBoxSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxPlotModelMapper_Orientation(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return static_cast<int>(vqhboxplotmodelmapper->orientation());
    } else {
        return static_cast<int>(vqhboxplotmodelmapper->orientation());
    }
}

// Base class handler implementation
int QHBoxPlotModelMapper_QBaseOrientation(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqhboxplotmodelmapper->orientation());
    } else {
        return static_cast<int>(vqhboxplotmodelmapper->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnOrientation(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Orientation_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxPlotModelMapper_SetOrientation(QHBoxPlotModelMapper* self, int orientation) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqhboxplotmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_QBaseSetOrientation(QHBoxPlotModelMapper* self, int orientation) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetOrientation_IsBase(true);
        vqhboxplotmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqhboxplotmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnSetOrientation(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHBoxPlotModelMapper_Sender(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->sender();
    } else {
        return vqhboxplotmodelmapper->sender();
    }
}

// Base class handler implementation
QObject* QHBoxPlotModelMapper_QBaseSender(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Sender_IsBase(true);
        return vqhboxplotmodelmapper->sender();
    } else {
        return vqhboxplotmodelmapper->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnSender(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Sender_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxPlotModelMapper_SenderSignalIndex(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->senderSignalIndex();
    } else {
        return vqhboxplotmodelmapper->senderSignalIndex();
    }
}

// Base class handler implementation
int QHBoxPlotModelMapper_QBaseSenderSignalIndex(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SenderSignalIndex_IsBase(true);
        return vqhboxplotmodelmapper->senderSignalIndex();
    } else {
        return vqhboxplotmodelmapper->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnSenderSignalIndex(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxPlotModelMapper_Receivers(const QHBoxPlotModelMapper* self, const char* signal) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->receivers(signal);
    } else {
        return vqhboxplotmodelmapper->receivers(signal);
    }
}

// Base class handler implementation
int QHBoxPlotModelMapper_QBaseReceivers(const QHBoxPlotModelMapper* self, const char* signal) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Receivers_IsBase(true);
        return vqhboxplotmodelmapper->receivers(signal);
    } else {
        return vqhboxplotmodelmapper->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnReceivers(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_Receivers_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBoxPlotModelMapper_IsSignalConnected(const QHBoxPlotModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->isSignalConnected(*signal);
    } else {
        return vqhboxplotmodelmapper->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHBoxPlotModelMapper_QBaseIsSignalConnected(const QHBoxPlotModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_IsSignalConnected_IsBase(true);
        return vqhboxplotmodelmapper->isSignalConnected(*signal);
    } else {
        return vqhboxplotmodelmapper->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnIsSignalConnected(const QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        vqhboxplotmodelmapper->setQHBoxPlotModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QHBoxPlotModelMapper_Delete(QHBoxPlotModelMapper* self) {
    delete self;
}
