#include <QAbstractItemModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHPieModelMapper>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qhpiemodelmapper.h>
#include "libqhpiemodelmapper.h"
#include "libqhpiemodelmapper.hxx"

QHPieModelMapper* QHPieModelMapper_new() {
    return new VirtualQHPieModelMapper();
}

QHPieModelMapper* QHPieModelMapper_new2(QObject* parent) {
    return new VirtualQHPieModelMapper(parent);
}

QMetaObject* QHPieModelMapper_MetaObject(const QHPieModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHPieModelMapper_Metacast(QHPieModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHPieModelMapper_Metacall(QHPieModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHPieModelMapper_OnMetacall(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_Metacall_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHPieModelMapper_QBaseMetacall(QHPieModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_Metacall_IsBase(true);
        return vqhpiemodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHPieModelMapper_Tr(const char* s) {
    QString _ret = QHPieModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QHPieModelMapper_Model(const QHPieModelMapper* self) {
    return self->model();
}

void QHPieModelMapper_SetModel(QHPieModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QPieSeries* QHPieModelMapper_Series(const QHPieModelMapper* self) {
    return self->series();
}

void QHPieModelMapper_SetSeries(QHPieModelMapper* self, QPieSeries* series) {
    self->setSeries(series);
}

int QHPieModelMapper_ValuesRow(const QHPieModelMapper* self) {
    return self->valuesRow();
}

void QHPieModelMapper_SetValuesRow(QHPieModelMapper* self, int valuesRow) {
    self->setValuesRow(static_cast<int>(valuesRow));
}

int QHPieModelMapper_LabelsRow(const QHPieModelMapper* self) {
    return self->labelsRow();
}

void QHPieModelMapper_SetLabelsRow(QHPieModelMapper* self, int labelsRow) {
    self->setLabelsRow(static_cast<int>(labelsRow));
}

int QHPieModelMapper_FirstColumn(const QHPieModelMapper* self) {
    return self->firstColumn();
}

void QHPieModelMapper_SetFirstColumn(QHPieModelMapper* self, int firstColumn) {
    self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHPieModelMapper_ColumnCount(const QHPieModelMapper* self) {
    return self->columnCount();
}

void QHPieModelMapper_SetColumnCount(QHPieModelMapper* self, int columnCount) {
    self->setColumnCount(static_cast<int>(columnCount));
}

void QHPieModelMapper_SeriesReplaced(QHPieModelMapper* self) {
    self->seriesReplaced();
}

void QHPieModelMapper_Connect_SeriesReplaced(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHPieModelMapper_ModelReplaced(QHPieModelMapper* self) {
    self->modelReplaced();
}

void QHPieModelMapper_Connect_ModelReplaced(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHPieModelMapper_ValuesRowChanged(QHPieModelMapper* self) {
    self->valuesRowChanged();
}

void QHPieModelMapper_Connect_ValuesRowChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::valuesRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHPieModelMapper_LabelsRowChanged(QHPieModelMapper* self) {
    self->labelsRowChanged();
}

void QHPieModelMapper_Connect_LabelsRowChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::labelsRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHPieModelMapper_FirstColumnChanged(QHPieModelMapper* self) {
    self->firstColumnChanged();
}

void QHPieModelMapper_Connect_FirstColumnChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::firstColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHPieModelMapper_ColumnCountChanged(QHPieModelMapper* self) {
    self->columnCountChanged();
}

void QHPieModelMapper_Connect_ColumnCountChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self, &QHPieModelMapper::columnCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QHPieModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QHPieModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHPieModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHPieModelMapper::tr(s, c, static_cast<int>(n));
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
bool QHPieModelMapper_Event(QHPieModelMapper* self, QEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        return vqhpiemodelmapper->event(event);
    } else {
        return vqhpiemodelmapper->event(event);
    }
}

// Base class handler implementation
bool QHPieModelMapper_QBaseEvent(QHPieModelMapper* self, QEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_Event_IsBase(true);
        return vqhpiemodelmapper->event(event);
    } else {
        return vqhpiemodelmapper->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnEvent(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_Event_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHPieModelMapper_EventFilter(QHPieModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        return vqhpiemodelmapper->eventFilter(watched, event);
    } else {
        return vqhpiemodelmapper->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHPieModelMapper_QBaseEventFilter(QHPieModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_EventFilter_IsBase(true);
        return vqhpiemodelmapper->eventFilter(watched, event);
    } else {
        return vqhpiemodelmapper->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnEventFilter(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_TimerEvent(QHPieModelMapper* self, QTimerEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->timerEvent(event);
    } else {
        vqhpiemodelmapper->timerEvent(event);
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseTimerEvent(QHPieModelMapper* self, QTimerEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_TimerEvent_IsBase(true);
        vqhpiemodelmapper->timerEvent(event);
    } else {
        vqhpiemodelmapper->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnTimerEvent(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_ChildEvent(QHPieModelMapper* self, QChildEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->childEvent(event);
    } else {
        vqhpiemodelmapper->childEvent(event);
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseChildEvent(QHPieModelMapper* self, QChildEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_ChildEvent_IsBase(true);
        vqhpiemodelmapper->childEvent(event);
    } else {
        vqhpiemodelmapper->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnChildEvent(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_CustomEvent(QHPieModelMapper* self, QEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->customEvent(event);
    } else {
        vqhpiemodelmapper->customEvent(event);
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseCustomEvent(QHPieModelMapper* self, QEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_CustomEvent_IsBase(true);
        vqhpiemodelmapper->customEvent(event);
    } else {
        vqhpiemodelmapper->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnCustomEvent(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_ConnectNotify(QHPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->connectNotify(*signal);
    } else {
        vqhpiemodelmapper->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseConnectNotify(QHPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_ConnectNotify_IsBase(true);
        vqhpiemodelmapper->connectNotify(*signal);
    } else {
        vqhpiemodelmapper->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnConnectNotify(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_DisconnectNotify(QHPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->disconnectNotify(*signal);
    } else {
        vqhpiemodelmapper->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseDisconnectNotify(QHPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_DisconnectNotify_IsBase(true);
        vqhpiemodelmapper->disconnectNotify(*signal);
    } else {
        vqhpiemodelmapper->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnDisconnectNotify(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QHPieModelMapper_First(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->first();
    } else {
        return vqhpiemodelmapper->first();
    }
}

// Base class handler implementation
int QHPieModelMapper_QBaseFirst(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_First_IsBase(true);
        return vqhpiemodelmapper->first();
    } else {
        return vqhpiemodelmapper->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnFirst(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_First_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_SetFirst(QHPieModelMapper* self, int first) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqhpiemodelmapper->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseSetFirst(QHPieModelMapper* self, int first) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetFirst_IsBase(true);
        vqhpiemodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqhpiemodelmapper->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnSetFirst(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QHPieModelMapper_Count(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->count();
    } else {
        return vqhpiemodelmapper->count();
    }
}

// Base class handler implementation
int QHPieModelMapper_QBaseCount(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_Count_IsBase(true);
        return vqhpiemodelmapper->count();
    } else {
        return vqhpiemodelmapper->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnCount(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_Count_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_SetCount(QHPieModelMapper* self, int count) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setCount(static_cast<int>(count));
    } else {
        vqhpiemodelmapper->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseSetCount(QHPieModelMapper* self, int count) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetCount_IsBase(true);
        vqhpiemodelmapper->setCount(static_cast<int>(count));
    } else {
        vqhpiemodelmapper->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnSetCount(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetCount_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QHPieModelMapper_ValuesSection(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->valuesSection();
    } else {
        return vqhpiemodelmapper->valuesSection();
    }
}

// Base class handler implementation
int QHPieModelMapper_QBaseValuesSection(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_ValuesSection_IsBase(true);
        return vqhpiemodelmapper->valuesSection();
    } else {
        return vqhpiemodelmapper->valuesSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnValuesSection(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_ValuesSection_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_ValuesSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_SetValuesSection(QHPieModelMapper* self, int valuesSection) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setValuesSection(static_cast<int>(valuesSection));
    } else {
        vqhpiemodelmapper->setValuesSection(static_cast<int>(valuesSection));
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseSetValuesSection(QHPieModelMapper* self, int valuesSection) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetValuesSection_IsBase(true);
        vqhpiemodelmapper->setValuesSection(static_cast<int>(valuesSection));
    } else {
        vqhpiemodelmapper->setValuesSection(static_cast<int>(valuesSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnSetValuesSection(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetValuesSection_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_SetValuesSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHPieModelMapper_LabelsSection(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->labelsSection();
    } else {
        return vqhpiemodelmapper->labelsSection();
    }
}

// Base class handler implementation
int QHPieModelMapper_QBaseLabelsSection(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_LabelsSection_IsBase(true);
        return vqhpiemodelmapper->labelsSection();
    } else {
        return vqhpiemodelmapper->labelsSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnLabelsSection(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_LabelsSection_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_LabelsSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_SetLabelsSection(QHPieModelMapper* self, int labelsSection) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setLabelsSection(static_cast<int>(labelsSection));
    } else {
        vqhpiemodelmapper->setLabelsSection(static_cast<int>(labelsSection));
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseSetLabelsSection(QHPieModelMapper* self, int labelsSection) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetLabelsSection_IsBase(true);
        vqhpiemodelmapper->setLabelsSection(static_cast<int>(labelsSection));
    } else {
        vqhpiemodelmapper->setLabelsSection(static_cast<int>(labelsSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnSetLabelsSection(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetLabelsSection_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_SetLabelsSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHPieModelMapper_Orientation(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return static_cast<int>(vqhpiemodelmapper->orientation());
    } else {
        return static_cast<int>(vqhpiemodelmapper->orientation());
    }
}

// Base class handler implementation
int QHPieModelMapper_QBaseOrientation(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqhpiemodelmapper->orientation());
    } else {
        return static_cast<int>(vqhpiemodelmapper->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnOrientation(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_Orientation_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QHPieModelMapper_SetOrientation(QHPieModelMapper* self, int orientation) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqhpiemodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QHPieModelMapper_QBaseSetOrientation(QHPieModelMapper* self, int orientation) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetOrientation_IsBase(true);
        vqhpiemodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqhpiemodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnSetOrientation(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->setQHPieModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHPieModelMapper_Sender(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->sender();
    } else {
        return vqhpiemodelmapper->sender();
    }
}

// Base class handler implementation
QObject* QHPieModelMapper_QBaseSender(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_Sender_IsBase(true);
        return vqhpiemodelmapper->sender();
    } else {
        return vqhpiemodelmapper->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnSender(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_Sender_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHPieModelMapper_SenderSignalIndex(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->senderSignalIndex();
    } else {
        return vqhpiemodelmapper->senderSignalIndex();
    }
}

// Base class handler implementation
int QHPieModelMapper_QBaseSenderSignalIndex(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_SenderSignalIndex_IsBase(true);
        return vqhpiemodelmapper->senderSignalIndex();
    } else {
        return vqhpiemodelmapper->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnSenderSignalIndex(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHPieModelMapper_Receivers(const QHPieModelMapper* self, const char* signal) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->receivers(signal);
    } else {
        return vqhpiemodelmapper->receivers(signal);
    }
}

// Base class handler implementation
int QHPieModelMapper_QBaseReceivers(const QHPieModelMapper* self, const char* signal) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_Receivers_IsBase(true);
        return vqhpiemodelmapper->receivers(signal);
    } else {
        return vqhpiemodelmapper->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnReceivers(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_Receivers_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHPieModelMapper_IsSignalConnected(const QHPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->isSignalConnected(*signal);
    } else {
        return vqhpiemodelmapper->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHPieModelMapper_QBaseIsSignalConnected(const QHPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_IsSignalConnected_IsBase(true);
        return vqhpiemodelmapper->isSignalConnected(*signal);
    } else {
        return vqhpiemodelmapper->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnIsSignalConnected(const QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        vqhpiemodelmapper->setQHPieModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QHPieModelMapper_Delete(QHPieModelMapper* self) {
    delete self;
}
