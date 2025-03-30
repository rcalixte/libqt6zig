#include <QAbstractItemModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
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
#include <QVPieModelMapper>
#include <QVariant>
#include <qvpiemodelmapper.h>
#include "libqvpiemodelmapper.h"
#include "libqvpiemodelmapper.hxx"

QVPieModelMapper* QVPieModelMapper_new() {
    return new VirtualQVPieModelMapper();
}

QVPieModelMapper* QVPieModelMapper_new2(QObject* parent) {
    return new VirtualQVPieModelMapper(parent);
}

QMetaObject* QVPieModelMapper_MetaObject(const QVPieModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVPieModelMapper_Metacast(QVPieModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVPieModelMapper_Metacall(QVPieModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVPieModelMapper_OnMetacall(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_Metacall_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVPieModelMapper_QBaseMetacall(QVPieModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_Metacall_IsBase(true);
        return vqvpiemodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVPieModelMapper_Tr(const char* s) {
    QString _ret = QVPieModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QVPieModelMapper_Model(const QVPieModelMapper* self) {
    return self->model();
}

void QVPieModelMapper_SetModel(QVPieModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QPieSeries* QVPieModelMapper_Series(const QVPieModelMapper* self) {
    return self->series();
}

void QVPieModelMapper_SetSeries(QVPieModelMapper* self, QPieSeries* series) {
    self->setSeries(series);
}

int QVPieModelMapper_ValuesColumn(const QVPieModelMapper* self) {
    return self->valuesColumn();
}

void QVPieModelMapper_SetValuesColumn(QVPieModelMapper* self, int valuesColumn) {
    self->setValuesColumn(static_cast<int>(valuesColumn));
}

int QVPieModelMapper_LabelsColumn(const QVPieModelMapper* self) {
    return self->labelsColumn();
}

void QVPieModelMapper_SetLabelsColumn(QVPieModelMapper* self, int labelsColumn) {
    self->setLabelsColumn(static_cast<int>(labelsColumn));
}

int QVPieModelMapper_FirstRow(const QVPieModelMapper* self) {
    return self->firstRow();
}

void QVPieModelMapper_SetFirstRow(QVPieModelMapper* self, int firstRow) {
    self->setFirstRow(static_cast<int>(firstRow));
}

int QVPieModelMapper_RowCount(const QVPieModelMapper* self) {
    return self->rowCount();
}

void QVPieModelMapper_SetRowCount(QVPieModelMapper* self, int rowCount) {
    self->setRowCount(static_cast<int>(rowCount));
}

void QVPieModelMapper_SeriesReplaced(QVPieModelMapper* self) {
    self->seriesReplaced();
}

void QVPieModelMapper_Connect_SeriesReplaced(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVPieModelMapper_ModelReplaced(QVPieModelMapper* self) {
    self->modelReplaced();
}

void QVPieModelMapper_Connect_ModelReplaced(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVPieModelMapper_ValuesColumnChanged(QVPieModelMapper* self) {
    self->valuesColumnChanged();
}

void QVPieModelMapper_Connect_ValuesColumnChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::valuesColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVPieModelMapper_LabelsColumnChanged(QVPieModelMapper* self) {
    self->labelsColumnChanged();
}

void QVPieModelMapper_Connect_LabelsColumnChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::labelsColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVPieModelMapper_FirstRowChanged(QVPieModelMapper* self) {
    self->firstRowChanged();
}

void QVPieModelMapper_Connect_FirstRowChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::firstRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVPieModelMapper_RowCountChanged(QVPieModelMapper* self) {
    self->rowCountChanged();
}

void QVPieModelMapper_Connect_RowCountChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self, &QVPieModelMapper::rowCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVPieModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QVPieModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QVPieModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVPieModelMapper::tr(s, c, static_cast<int>(n));
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
bool QVPieModelMapper_Event(QVPieModelMapper* self, QEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        return vqvpiemodelmapper->event(event);
    } else {
        return vqvpiemodelmapper->event(event);
    }
}

// Base class handler implementation
bool QVPieModelMapper_QBaseEvent(QVPieModelMapper* self, QEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_Event_IsBase(true);
        return vqvpiemodelmapper->event(event);
    } else {
        return vqvpiemodelmapper->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnEvent(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_Event_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVPieModelMapper_EventFilter(QVPieModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        return vqvpiemodelmapper->eventFilter(watched, event);
    } else {
        return vqvpiemodelmapper->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVPieModelMapper_QBaseEventFilter(QVPieModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_EventFilter_IsBase(true);
        return vqvpiemodelmapper->eventFilter(watched, event);
    } else {
        return vqvpiemodelmapper->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnEventFilter(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_TimerEvent(QVPieModelMapper* self, QTimerEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->timerEvent(event);
    } else {
        vqvpiemodelmapper->timerEvent(event);
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseTimerEvent(QVPieModelMapper* self, QTimerEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_TimerEvent_IsBase(true);
        vqvpiemodelmapper->timerEvent(event);
    } else {
        vqvpiemodelmapper->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnTimerEvent(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_ChildEvent(QVPieModelMapper* self, QChildEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->childEvent(event);
    } else {
        vqvpiemodelmapper->childEvent(event);
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseChildEvent(QVPieModelMapper* self, QChildEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_ChildEvent_IsBase(true);
        vqvpiemodelmapper->childEvent(event);
    } else {
        vqvpiemodelmapper->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnChildEvent(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_CustomEvent(QVPieModelMapper* self, QEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->customEvent(event);
    } else {
        vqvpiemodelmapper->customEvent(event);
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseCustomEvent(QVPieModelMapper* self, QEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_CustomEvent_IsBase(true);
        vqvpiemodelmapper->customEvent(event);
    } else {
        vqvpiemodelmapper->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnCustomEvent(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_ConnectNotify(QVPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->connectNotify(*signal);
    } else {
        vqvpiemodelmapper->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseConnectNotify(QVPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_ConnectNotify_IsBase(true);
        vqvpiemodelmapper->connectNotify(*signal);
    } else {
        vqvpiemodelmapper->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnConnectNotify(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_DisconnectNotify(QVPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->disconnectNotify(*signal);
    } else {
        vqvpiemodelmapper->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseDisconnectNotify(QVPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_DisconnectNotify_IsBase(true);
        vqvpiemodelmapper->disconnectNotify(*signal);
    } else {
        vqvpiemodelmapper->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnDisconnectNotify(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QVPieModelMapper_First(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->first();
    } else {
        return vqvpiemodelmapper->first();
    }
}

// Base class handler implementation
int QVPieModelMapper_QBaseFirst(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_First_IsBase(true);
        return vqvpiemodelmapper->first();
    } else {
        return vqvpiemodelmapper->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnFirst(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_First_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_SetFirst(QVPieModelMapper* self, int first) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqvpiemodelmapper->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseSetFirst(QVPieModelMapper* self, int first) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetFirst_IsBase(true);
        vqvpiemodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqvpiemodelmapper->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnSetFirst(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QVPieModelMapper_Count(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->count();
    } else {
        return vqvpiemodelmapper->count();
    }
}

// Base class handler implementation
int QVPieModelMapper_QBaseCount(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_Count_IsBase(true);
        return vqvpiemodelmapper->count();
    } else {
        return vqvpiemodelmapper->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnCount(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_Count_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_SetCount(QVPieModelMapper* self, int count) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setCount(static_cast<int>(count));
    } else {
        vqvpiemodelmapper->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseSetCount(QVPieModelMapper* self, int count) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetCount_IsBase(true);
        vqvpiemodelmapper->setCount(static_cast<int>(count));
    } else {
        vqvpiemodelmapper->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnSetCount(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetCount_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QVPieModelMapper_ValuesSection(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->valuesSection();
    } else {
        return vqvpiemodelmapper->valuesSection();
    }
}

// Base class handler implementation
int QVPieModelMapper_QBaseValuesSection(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_ValuesSection_IsBase(true);
        return vqvpiemodelmapper->valuesSection();
    } else {
        return vqvpiemodelmapper->valuesSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnValuesSection(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_ValuesSection_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_ValuesSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_SetValuesSection(QVPieModelMapper* self, int valuesSection) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setValuesSection(static_cast<int>(valuesSection));
    } else {
        vqvpiemodelmapper->setValuesSection(static_cast<int>(valuesSection));
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseSetValuesSection(QVPieModelMapper* self, int valuesSection) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetValuesSection_IsBase(true);
        vqvpiemodelmapper->setValuesSection(static_cast<int>(valuesSection));
    } else {
        vqvpiemodelmapper->setValuesSection(static_cast<int>(valuesSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnSetValuesSection(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetValuesSection_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_SetValuesSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVPieModelMapper_LabelsSection(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->labelsSection();
    } else {
        return vqvpiemodelmapper->labelsSection();
    }
}

// Base class handler implementation
int QVPieModelMapper_QBaseLabelsSection(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_LabelsSection_IsBase(true);
        return vqvpiemodelmapper->labelsSection();
    } else {
        return vqvpiemodelmapper->labelsSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnLabelsSection(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_LabelsSection_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_LabelsSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_SetLabelsSection(QVPieModelMapper* self, int labelsSection) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setLabelsSection(static_cast<int>(labelsSection));
    } else {
        vqvpiemodelmapper->setLabelsSection(static_cast<int>(labelsSection));
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseSetLabelsSection(QVPieModelMapper* self, int labelsSection) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetLabelsSection_IsBase(true);
        vqvpiemodelmapper->setLabelsSection(static_cast<int>(labelsSection));
    } else {
        vqvpiemodelmapper->setLabelsSection(static_cast<int>(labelsSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnSetLabelsSection(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetLabelsSection_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_SetLabelsSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVPieModelMapper_Orientation(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return static_cast<int>(vqvpiemodelmapper->orientation());
    } else {
        return static_cast<int>(vqvpiemodelmapper->orientation());
    }
}

// Base class handler implementation
int QVPieModelMapper_QBaseOrientation(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqvpiemodelmapper->orientation());
    } else {
        return static_cast<int>(vqvpiemodelmapper->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnOrientation(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_Orientation_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QVPieModelMapper_SetOrientation(QVPieModelMapper* self, int orientation) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqvpiemodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QVPieModelMapper_QBaseSetOrientation(QVPieModelMapper* self, int orientation) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetOrientation_IsBase(true);
        vqvpiemodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqvpiemodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnSetOrientation(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->setQVPieModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVPieModelMapper_Sender(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->sender();
    } else {
        return vqvpiemodelmapper->sender();
    }
}

// Base class handler implementation
QObject* QVPieModelMapper_QBaseSender(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_Sender_IsBase(true);
        return vqvpiemodelmapper->sender();
    } else {
        return vqvpiemodelmapper->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnSender(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_Sender_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVPieModelMapper_SenderSignalIndex(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->senderSignalIndex();
    } else {
        return vqvpiemodelmapper->senderSignalIndex();
    }
}

// Base class handler implementation
int QVPieModelMapper_QBaseSenderSignalIndex(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_SenderSignalIndex_IsBase(true);
        return vqvpiemodelmapper->senderSignalIndex();
    } else {
        return vqvpiemodelmapper->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnSenderSignalIndex(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVPieModelMapper_Receivers(const QVPieModelMapper* self, const char* signal) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->receivers(signal);
    } else {
        return vqvpiemodelmapper->receivers(signal);
    }
}

// Base class handler implementation
int QVPieModelMapper_QBaseReceivers(const QVPieModelMapper* self, const char* signal) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_Receivers_IsBase(true);
        return vqvpiemodelmapper->receivers(signal);
    } else {
        return vqvpiemodelmapper->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnReceivers(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_Receivers_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVPieModelMapper_IsSignalConnected(const QVPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->isSignalConnected(*signal);
    } else {
        return vqvpiemodelmapper->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVPieModelMapper_QBaseIsSignalConnected(const QVPieModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_IsSignalConnected_IsBase(true);
        return vqvpiemodelmapper->isSignalConnected(*signal);
    } else {
        return vqvpiemodelmapper->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnIsSignalConnected(const QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        vqvpiemodelmapper->setQVPieModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QVPieModelMapper_Delete(QVPieModelMapper* self) {
    delete self;
}
