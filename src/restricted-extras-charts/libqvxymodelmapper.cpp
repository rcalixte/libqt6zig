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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVXYModelMapper>
#include <QVariant>
#include <QXYModelMapper>
#include <QXYSeries>
#include <qvxymodelmapper.h>
#include "libqvxymodelmapper.h"
#include "libqvxymodelmapper.hxx"

QVXYModelMapper* QVXYModelMapper_new() {
    return new VirtualQVXYModelMapper();
}

QVXYModelMapper* QVXYModelMapper_new2(QObject* parent) {
    return new VirtualQVXYModelMapper(parent);
}

QMetaObject* QVXYModelMapper_MetaObject(const QVXYModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVXYModelMapper_Metacast(QVXYModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVXYModelMapper_Metacall(QVXYModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVXYModelMapper_OnMetacall(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_Metacall_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVXYModelMapper_QBaseMetacall(QVXYModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_Metacall_IsBase(true);
        return vqvxymodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVXYModelMapper_Tr(const char* s) {
    QString _ret = QVXYModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QVXYModelMapper_Model(const QVXYModelMapper* self) {
    return self->model();
}

void QVXYModelMapper_SetModel(QVXYModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QXYSeries* QVXYModelMapper_Series(const QVXYModelMapper* self) {
    return self->series();
}

void QVXYModelMapper_SetSeries(QVXYModelMapper* self, QXYSeries* series) {
    self->setSeries(series);
}

int QVXYModelMapper_XColumn(const QVXYModelMapper* self) {
    return self->xColumn();
}

void QVXYModelMapper_SetXColumn(QVXYModelMapper* self, int xColumn) {
    self->setXColumn(static_cast<int>(xColumn));
}

int QVXYModelMapper_YColumn(const QVXYModelMapper* self) {
    return self->yColumn();
}

void QVXYModelMapper_SetYColumn(QVXYModelMapper* self, int yColumn) {
    self->setYColumn(static_cast<int>(yColumn));
}

int QVXYModelMapper_FirstRow(const QVXYModelMapper* self) {
    return self->firstRow();
}

void QVXYModelMapper_SetFirstRow(QVXYModelMapper* self, int firstRow) {
    self->setFirstRow(static_cast<int>(firstRow));
}

int QVXYModelMapper_RowCount(const QVXYModelMapper* self) {
    return self->rowCount();
}

void QVXYModelMapper_SetRowCount(QVXYModelMapper* self, int rowCount) {
    self->setRowCount(static_cast<int>(rowCount));
}

void QVXYModelMapper_SeriesReplaced(QVXYModelMapper* self) {
    self->seriesReplaced();
}

void QVXYModelMapper_Connect_SeriesReplaced(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVXYModelMapper_ModelReplaced(QVXYModelMapper* self) {
    self->modelReplaced();
}

void QVXYModelMapper_Connect_ModelReplaced(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVXYModelMapper_XColumnChanged(QVXYModelMapper* self) {
    self->xColumnChanged();
}

void QVXYModelMapper_Connect_XColumnChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::xColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVXYModelMapper_YColumnChanged(QVXYModelMapper* self) {
    self->yColumnChanged();
}

void QVXYModelMapper_Connect_YColumnChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::yColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVXYModelMapper_FirstRowChanged(QVXYModelMapper* self) {
    self->firstRowChanged();
}

void QVXYModelMapper_Connect_FirstRowChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::firstRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVXYModelMapper_RowCountChanged(QVXYModelMapper* self) {
    self->rowCountChanged();
}

void QVXYModelMapper_Connect_RowCountChanged(QVXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVXYModelMapper*) = reinterpret_cast<void (*)(QVXYModelMapper*)>(slot);
    QVXYModelMapper::connect(self, &QVXYModelMapper::rowCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVXYModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QVXYModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QVXYModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVXYModelMapper::tr(s, c, static_cast<int>(n));
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
bool QVXYModelMapper_Event(QVXYModelMapper* self, QEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        return vqvxymodelmapper->event(event);
    } else {
        return vqvxymodelmapper->event(event);
    }
}

// Base class handler implementation
bool QVXYModelMapper_QBaseEvent(QVXYModelMapper* self, QEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_Event_IsBase(true);
        return vqvxymodelmapper->event(event);
    } else {
        return vqvxymodelmapper->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnEvent(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_Event_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVXYModelMapper_EventFilter(QVXYModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        return vqvxymodelmapper->eventFilter(watched, event);
    } else {
        return vqvxymodelmapper->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVXYModelMapper_QBaseEventFilter(QVXYModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_EventFilter_IsBase(true);
        return vqvxymodelmapper->eventFilter(watched, event);
    } else {
        return vqvxymodelmapper->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnEventFilter(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_TimerEvent(QVXYModelMapper* self, QTimerEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->timerEvent(event);
    } else {
        vqvxymodelmapper->timerEvent(event);
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseTimerEvent(QVXYModelMapper* self, QTimerEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_TimerEvent_IsBase(true);
        vqvxymodelmapper->timerEvent(event);
    } else {
        vqvxymodelmapper->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnTimerEvent(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_ChildEvent(QVXYModelMapper* self, QChildEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->childEvent(event);
    } else {
        vqvxymodelmapper->childEvent(event);
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseChildEvent(QVXYModelMapper* self, QChildEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_ChildEvent_IsBase(true);
        vqvxymodelmapper->childEvent(event);
    } else {
        vqvxymodelmapper->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnChildEvent(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_CustomEvent(QVXYModelMapper* self, QEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->customEvent(event);
    } else {
        vqvxymodelmapper->customEvent(event);
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseCustomEvent(QVXYModelMapper* self, QEvent* event) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_CustomEvent_IsBase(true);
        vqvxymodelmapper->customEvent(event);
    } else {
        vqvxymodelmapper->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnCustomEvent(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_ConnectNotify(QVXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->connectNotify(*signal);
    } else {
        vqvxymodelmapper->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseConnectNotify(QVXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_ConnectNotify_IsBase(true);
        vqvxymodelmapper->connectNotify(*signal);
    } else {
        vqvxymodelmapper->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnConnectNotify(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_DisconnectNotify(QVXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->disconnectNotify(*signal);
    } else {
        vqvxymodelmapper->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseDisconnectNotify(QVXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_DisconnectNotify_IsBase(true);
        vqvxymodelmapper->disconnectNotify(*signal);
    } else {
        vqvxymodelmapper->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnDisconnectNotify(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QVXYModelMapper_First(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->first();
    } else {
        return vqvxymodelmapper->first();
    }
}

// Base class handler implementation
int QVXYModelMapper_QBaseFirst(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_First_IsBase(true);
        return vqvxymodelmapper->first();
    } else {
        return vqvxymodelmapper->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnFirst(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_First_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_SetFirst(QVXYModelMapper* self, int first) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqvxymodelmapper->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseSetFirst(QVXYModelMapper* self, int first) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetFirst_IsBase(true);
        vqvxymodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqvxymodelmapper->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnSetFirst(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QVXYModelMapper_Count(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->count();
    } else {
        return vqvxymodelmapper->count();
    }
}

// Base class handler implementation
int QVXYModelMapper_QBaseCount(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_Count_IsBase(true);
        return vqvxymodelmapper->count();
    } else {
        return vqvxymodelmapper->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnCount(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_Count_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_SetCount(QVXYModelMapper* self, int count) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setCount(static_cast<int>(count));
    } else {
        vqvxymodelmapper->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseSetCount(QVXYModelMapper* self, int count) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetCount_IsBase(true);
        vqvxymodelmapper->setCount(static_cast<int>(count));
    } else {
        vqvxymodelmapper->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnSetCount(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetCount_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QVXYModelMapper_Orientation(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return static_cast<int>(vqvxymodelmapper->orientation());
    } else {
        return static_cast<int>(vqvxymodelmapper->orientation());
    }
}

// Base class handler implementation
int QVXYModelMapper_QBaseOrientation(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqvxymodelmapper->orientation());
    } else {
        return static_cast<int>(vqvxymodelmapper->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnOrientation(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_Orientation_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_SetOrientation(QVXYModelMapper* self, int orientation) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqvxymodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseSetOrientation(QVXYModelMapper* self, int orientation) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetOrientation_IsBase(true);
        vqvxymodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqvxymodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnSetOrientation(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
int QVXYModelMapper_XSection(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->xSection();
    } else {
        return vqvxymodelmapper->xSection();
    }
}

// Base class handler implementation
int QVXYModelMapper_QBaseXSection(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_XSection_IsBase(true);
        return vqvxymodelmapper->xSection();
    } else {
        return vqvxymodelmapper->xSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnXSection(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_XSection_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_XSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_SetXSection(QVXYModelMapper* self, int xSection) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setXSection(static_cast<int>(xSection));
    } else {
        vqvxymodelmapper->setXSection(static_cast<int>(xSection));
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseSetXSection(QVXYModelMapper* self, int xSection) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetXSection_IsBase(true);
        vqvxymodelmapper->setXSection(static_cast<int>(xSection));
    } else {
        vqvxymodelmapper->setXSection(static_cast<int>(xSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnSetXSection(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetXSection_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_SetXSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QVXYModelMapper_YSection(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->ySection();
    } else {
        return vqvxymodelmapper->ySection();
    }
}

// Base class handler implementation
int QVXYModelMapper_QBaseYSection(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_YSection_IsBase(true);
        return vqvxymodelmapper->ySection();
    } else {
        return vqvxymodelmapper->ySection();
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnYSection(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_YSection_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_YSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QVXYModelMapper_SetYSection(QVXYModelMapper* self, int ySection) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setYSection(static_cast<int>(ySection));
    } else {
        vqvxymodelmapper->setYSection(static_cast<int>(ySection));
    }
}

// Base class handler implementation
void QVXYModelMapper_QBaseSetYSection(QVXYModelMapper* self, int ySection) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetYSection_IsBase(true);
        vqvxymodelmapper->setYSection(static_cast<int>(ySection));
    } else {
        vqvxymodelmapper->setYSection(static_cast<int>(ySection));
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnSetYSection(QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = dynamic_cast<VirtualQVXYModelMapper*>(self)) {
        vqvxymodelmapper->setQVXYModelMapper_SetYSection_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_SetYSection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVXYModelMapper_Sender(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->sender();
    } else {
        return vqvxymodelmapper->sender();
    }
}

// Base class handler implementation
QObject* QVXYModelMapper_QBaseSender(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_Sender_IsBase(true);
        return vqvxymodelmapper->sender();
    } else {
        return vqvxymodelmapper->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnSender(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_Sender_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVXYModelMapper_SenderSignalIndex(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->senderSignalIndex();
    } else {
        return vqvxymodelmapper->senderSignalIndex();
    }
}

// Base class handler implementation
int QVXYModelMapper_QBaseSenderSignalIndex(const QVXYModelMapper* self) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_SenderSignalIndex_IsBase(true);
        return vqvxymodelmapper->senderSignalIndex();
    } else {
        return vqvxymodelmapper->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnSenderSignalIndex(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVXYModelMapper_Receivers(const QVXYModelMapper* self, const char* signal) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->receivers(signal);
    } else {
        return vqvxymodelmapper->receivers(signal);
    }
}

// Base class handler implementation
int QVXYModelMapper_QBaseReceivers(const QVXYModelMapper* self, const char* signal) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_Receivers_IsBase(true);
        return vqvxymodelmapper->receivers(signal);
    } else {
        return vqvxymodelmapper->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnReceivers(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_Receivers_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVXYModelMapper_IsSignalConnected(const QVXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        return vqvxymodelmapper->isSignalConnected(*signal);
    } else {
        return vqvxymodelmapper->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVXYModelMapper_QBaseIsSignalConnected(const QVXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_IsSignalConnected_IsBase(true);
        return vqvxymodelmapper->isSignalConnected(*signal);
    } else {
        return vqvxymodelmapper->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVXYModelMapper_OnIsSignalConnected(const QVXYModelMapper* self, intptr_t slot) {
    if (auto* vqvxymodelmapper = const_cast<VirtualQVXYModelMapper*>(dynamic_cast<const VirtualQVXYModelMapper*>(self))) {
        vqvxymodelmapper->setQVXYModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQVXYModelMapper::QVXYModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QVXYModelMapper_Delete(QVXYModelMapper* self) {
    delete self;
}
