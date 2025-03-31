#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QAnyStringView>
#include <QBarModelMapper>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
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
#include <QVBarModelMapper>
#include <QVariant>
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
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVBarModelMapper_OnMetacall(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_Metacall_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVBarModelMapper_QBaseMetacall(QVBarModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_Metacall_IsBase(true);
        return vqvbarmodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVBarModelMapper_Tr(const char* s) {
    QString _ret = QVBarModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QVBarModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVBarModelMapper::tr(s, c, static_cast<int>(n));
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
bool QVBarModelMapper_Event(QVBarModelMapper* self, QEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        return vqvbarmodelmapper->event(event);
    } else {
        return vqvbarmodelmapper->event(event);
    }
}

// Base class handler implementation
bool QVBarModelMapper_QBaseEvent(QVBarModelMapper* self, QEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_Event_IsBase(true);
        return vqvbarmodelmapper->event(event);
    } else {
        return vqvbarmodelmapper->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnEvent(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_Event_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBarModelMapper_EventFilter(QVBarModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        return vqvbarmodelmapper->eventFilter(watched, event);
    } else {
        return vqvbarmodelmapper->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVBarModelMapper_QBaseEventFilter(QVBarModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_EventFilter_IsBase(true);
        return vqvbarmodelmapper->eventFilter(watched, event);
    } else {
        return vqvbarmodelmapper->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnEventFilter(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_TimerEvent(QVBarModelMapper* self, QTimerEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->timerEvent(event);
    } else {
        vqvbarmodelmapper->timerEvent(event);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseTimerEvent(QVBarModelMapper* self, QTimerEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_TimerEvent_IsBase(true);
        vqvbarmodelmapper->timerEvent(event);
    } else {
        vqvbarmodelmapper->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnTimerEvent(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_ChildEvent(QVBarModelMapper* self, QChildEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->childEvent(event);
    } else {
        vqvbarmodelmapper->childEvent(event);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseChildEvent(QVBarModelMapper* self, QChildEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_ChildEvent_IsBase(true);
        vqvbarmodelmapper->childEvent(event);
    } else {
        vqvbarmodelmapper->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnChildEvent(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_CustomEvent(QVBarModelMapper* self, QEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->customEvent(event);
    } else {
        vqvbarmodelmapper->customEvent(event);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseCustomEvent(QVBarModelMapper* self, QEvent* event) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_CustomEvent_IsBase(true);
        vqvbarmodelmapper->customEvent(event);
    } else {
        vqvbarmodelmapper->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnCustomEvent(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_ConnectNotify(QVBarModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->connectNotify(*signal);
    } else {
        vqvbarmodelmapper->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseConnectNotify(QVBarModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_ConnectNotify_IsBase(true);
        vqvbarmodelmapper->connectNotify(*signal);
    } else {
        vqvbarmodelmapper->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnConnectNotify(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_DisconnectNotify(QVBarModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->disconnectNotify(*signal);
    } else {
        vqvbarmodelmapper->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseDisconnectNotify(QVBarModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_DisconnectNotify_IsBase(true);
        vqvbarmodelmapper->disconnectNotify(*signal);
    } else {
        vqvbarmodelmapper->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnDisconnectNotify(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_First(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->first();
    } else {
        return vqvbarmodelmapper->first();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseFirst(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_First_IsBase(true);
        return vqvbarmodelmapper->first();
    } else {
        return vqvbarmodelmapper->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnFirst(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_First_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetFirst(QVBarModelMapper* self, int first) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqvbarmodelmapper->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetFirst(QVBarModelMapper* self, int first) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetFirst_IsBase(true);
        vqvbarmodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqvbarmodelmapper->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetFirst(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_Count(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->count();
    } else {
        return vqvbarmodelmapper->count();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseCount(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_Count_IsBase(true);
        return vqvbarmodelmapper->count();
    } else {
        return vqvbarmodelmapper->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnCount(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_Count_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetCount(QVBarModelMapper* self, int count) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setCount(static_cast<int>(count));
    } else {
        vqvbarmodelmapper->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetCount(QVBarModelMapper* self, int count) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetCount_IsBase(true);
        vqvbarmodelmapper->setCount(static_cast<int>(count));
    } else {
        vqvbarmodelmapper->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetCount(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetCount_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_FirstBarSetSection(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->firstBarSetSection();
    } else {
        return vqvbarmodelmapper->firstBarSetSection();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseFirstBarSetSection(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_FirstBarSetSection_IsBase(true);
        return vqvbarmodelmapper->firstBarSetSection();
    } else {
        return vqvbarmodelmapper->firstBarSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnFirstBarSetSection(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_FirstBarSetSection_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_FirstBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    } else {
        vqvbarmodelmapper->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetFirstBarSetSection_IsBase(true);
        vqvbarmodelmapper->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    } else {
        vqvbarmodelmapper->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetFirstBarSetSection(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetFirstBarSetSection_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetFirstBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_LastBarSetSection(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->lastBarSetSection();
    } else {
        return vqvbarmodelmapper->lastBarSetSection();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseLastBarSetSection(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_LastBarSetSection_IsBase(true);
        return vqvbarmodelmapper->lastBarSetSection();
    } else {
        return vqvbarmodelmapper->lastBarSetSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnLastBarSetSection(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_LastBarSetSection_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_LastBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    } else {
        vqvbarmodelmapper->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetLastBarSetSection_IsBase(true);
        vqvbarmodelmapper->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    } else {
        vqvbarmodelmapper->setLastBarSetSection(static_cast<int>(lastBarSetSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetLastBarSetSection(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetLastBarSetSection_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetLastBarSetSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_Orientation(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return static_cast<int>(vqvbarmodelmapper->orientation());
    } else {
        return static_cast<int>(vqvbarmodelmapper->orientation());
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseOrientation(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqvbarmodelmapper->orientation());
    } else {
        return static_cast<int>(vqvbarmodelmapper->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnOrientation(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_Orientation_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBarModelMapper_SetOrientation(QVBarModelMapper* self, int orientation) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqvbarmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QVBarModelMapper_QBaseSetOrientation(QVBarModelMapper* self, int orientation) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetOrientation_IsBase(true);
        vqvbarmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqvbarmodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSetOrientation(QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = dynamic_cast<VirtualQVBarModelMapper*>(self)) {
        vqvbarmodelmapper->setQVBarModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVBarModelMapper_Sender(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->sender();
    } else {
        return vqvbarmodelmapper->sender();
    }
}

// Base class handler implementation
QObject* QVBarModelMapper_QBaseSender(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_Sender_IsBase(true);
        return vqvbarmodelmapper->sender();
    } else {
        return vqvbarmodelmapper->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSender(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_Sender_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_SenderSignalIndex(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->senderSignalIndex();
    } else {
        return vqvbarmodelmapper->senderSignalIndex();
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseSenderSignalIndex(const QVBarModelMapper* self) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_SenderSignalIndex_IsBase(true);
        return vqvbarmodelmapper->senderSignalIndex();
    } else {
        return vqvbarmodelmapper->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnSenderSignalIndex(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBarModelMapper_Receivers(const QVBarModelMapper* self, const char* signal) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->receivers(signal);
    } else {
        return vqvbarmodelmapper->receivers(signal);
    }
}

// Base class handler implementation
int QVBarModelMapper_QBaseReceivers(const QVBarModelMapper* self, const char* signal) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_Receivers_IsBase(true);
        return vqvbarmodelmapper->receivers(signal);
    } else {
        return vqvbarmodelmapper->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnReceivers(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_Receivers_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBarModelMapper_IsSignalConnected(const QVBarModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        return vqvbarmodelmapper->isSignalConnected(*signal);
    } else {
        return vqvbarmodelmapper->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVBarModelMapper_QBaseIsSignalConnected(const QVBarModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_IsSignalConnected_IsBase(true);
        return vqvbarmodelmapper->isSignalConnected(*signal);
    } else {
        return vqvbarmodelmapper->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBarModelMapper_OnIsSignalConnected(const QVBarModelMapper* self, intptr_t slot) {
    if (auto* vqvbarmodelmapper = const_cast<VirtualQVBarModelMapper*>(dynamic_cast<const VirtualQVBarModelMapper*>(self))) {
        vqvbarmodelmapper->setQVBarModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQVBarModelMapper::QVBarModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QVBarModelMapper_Delete(QVBarModelMapper* self) {
    delete self;
}
