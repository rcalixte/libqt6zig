#include <QAbstractItemModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHXYModelMapper>
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
#include <QXYModelMapper>
#include <QXYSeries>
#include <qhxymodelmapper.h>
#include "libqhxymodelmapper.h"
#include "libqhxymodelmapper.hxx"

QHXYModelMapper* QHXYModelMapper_new() {
    return new VirtualQHXYModelMapper();
}

QHXYModelMapper* QHXYModelMapper_new2(QObject* parent) {
    return new VirtualQHXYModelMapper(parent);
}

QMetaObject* QHXYModelMapper_MetaObject(const QHXYModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHXYModelMapper_Metacast(QHXYModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHXYModelMapper_Metacall(QHXYModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHXYModelMapper_OnMetacall(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_Metacall_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHXYModelMapper_QBaseMetacall(QHXYModelMapper* self, int param1, int param2, void** param3) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_Metacall_IsBase(true);
        return vqhxymodelmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHXYModelMapper_Tr(const char* s) {
    QString _ret = QHXYModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QHXYModelMapper_Model(const QHXYModelMapper* self) {
    return self->model();
}

void QHXYModelMapper_SetModel(QHXYModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QXYSeries* QHXYModelMapper_Series(const QHXYModelMapper* self) {
    return self->series();
}

void QHXYModelMapper_SetSeries(QHXYModelMapper* self, QXYSeries* series) {
    self->setSeries(series);
}

int QHXYModelMapper_XRow(const QHXYModelMapper* self) {
    return self->xRow();
}

void QHXYModelMapper_SetXRow(QHXYModelMapper* self, int xRow) {
    self->setXRow(static_cast<int>(xRow));
}

int QHXYModelMapper_YRow(const QHXYModelMapper* self) {
    return self->yRow();
}

void QHXYModelMapper_SetYRow(QHXYModelMapper* self, int yRow) {
    self->setYRow(static_cast<int>(yRow));
}

int QHXYModelMapper_FirstColumn(const QHXYModelMapper* self) {
    return self->firstColumn();
}

void QHXYModelMapper_SetFirstColumn(QHXYModelMapper* self, int firstColumn) {
    self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHXYModelMapper_ColumnCount(const QHXYModelMapper* self) {
    return self->columnCount();
}

void QHXYModelMapper_SetColumnCount(QHXYModelMapper* self, int columnCount) {
    self->setColumnCount(static_cast<int>(columnCount));
}

void QHXYModelMapper_SeriesReplaced(QHXYModelMapper* self) {
    self->seriesReplaced();
}

void QHXYModelMapper_Connect_SeriesReplaced(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::seriesReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHXYModelMapper_ModelReplaced(QHXYModelMapper* self) {
    self->modelReplaced();
}

void QHXYModelMapper_Connect_ModelReplaced(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::modelReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHXYModelMapper_XRowChanged(QHXYModelMapper* self) {
    self->xRowChanged();
}

void QHXYModelMapper_Connect_XRowChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::xRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHXYModelMapper_YRowChanged(QHXYModelMapper* self) {
    self->yRowChanged();
}

void QHXYModelMapper_Connect_YRowChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::yRowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHXYModelMapper_FirstColumnChanged(QHXYModelMapper* self) {
    self->firstColumnChanged();
}

void QHXYModelMapper_Connect_FirstColumnChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::firstColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHXYModelMapper_ColumnCountChanged(QHXYModelMapper* self) {
    self->columnCountChanged();
}

void QHXYModelMapper_Connect_ColumnCountChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self, &QHXYModelMapper::columnCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QHXYModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QHXYModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHXYModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHXYModelMapper::tr(s, c, static_cast<int>(n));
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
bool QHXYModelMapper_Event(QHXYModelMapper* self, QEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        return vqhxymodelmapper->event(event);
    } else {
        return vqhxymodelmapper->event(event);
    }
}

// Base class handler implementation
bool QHXYModelMapper_QBaseEvent(QHXYModelMapper* self, QEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_Event_IsBase(true);
        return vqhxymodelmapper->event(event);
    } else {
        return vqhxymodelmapper->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnEvent(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_Event_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHXYModelMapper_EventFilter(QHXYModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        return vqhxymodelmapper->eventFilter(watched, event);
    } else {
        return vqhxymodelmapper->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHXYModelMapper_QBaseEventFilter(QHXYModelMapper* self, QObject* watched, QEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_EventFilter_IsBase(true);
        return vqhxymodelmapper->eventFilter(watched, event);
    } else {
        return vqhxymodelmapper->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnEventFilter(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_EventFilter_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_TimerEvent(QHXYModelMapper* self, QTimerEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->timerEvent(event);
    } else {
        vqhxymodelmapper->timerEvent(event);
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseTimerEvent(QHXYModelMapper* self, QTimerEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_TimerEvent_IsBase(true);
        vqhxymodelmapper->timerEvent(event);
    } else {
        vqhxymodelmapper->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnTimerEvent(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_TimerEvent_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_ChildEvent(QHXYModelMapper* self, QChildEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->childEvent(event);
    } else {
        vqhxymodelmapper->childEvent(event);
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseChildEvent(QHXYModelMapper* self, QChildEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_ChildEvent_IsBase(true);
        vqhxymodelmapper->childEvent(event);
    } else {
        vqhxymodelmapper->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnChildEvent(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_ChildEvent_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_CustomEvent(QHXYModelMapper* self, QEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->customEvent(event);
    } else {
        vqhxymodelmapper->customEvent(event);
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseCustomEvent(QHXYModelMapper* self, QEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_CustomEvent_IsBase(true);
        vqhxymodelmapper->customEvent(event);
    } else {
        vqhxymodelmapper->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnCustomEvent(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_CustomEvent_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_ConnectNotify(QHXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->connectNotify(*signal);
    } else {
        vqhxymodelmapper->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseConnectNotify(QHXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_ConnectNotify_IsBase(true);
        vqhxymodelmapper->connectNotify(*signal);
    } else {
        vqhxymodelmapper->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnConnectNotify(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_DisconnectNotify(QHXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->disconnectNotify(*signal);
    } else {
        vqhxymodelmapper->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseDisconnectNotify(QHXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_DisconnectNotify_IsBase(true);
        vqhxymodelmapper->disconnectNotify(*signal);
    } else {
        vqhxymodelmapper->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnDisconnectNotify(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QHXYModelMapper_First(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->first();
    } else {
        return vqhxymodelmapper->first();
    }
}

// Base class handler implementation
int QHXYModelMapper_QBaseFirst(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_First_IsBase(true);
        return vqhxymodelmapper->first();
    } else {
        return vqhxymodelmapper->first();
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnFirst(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_First_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_First_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_SetFirst(QHXYModelMapper* self, int first) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqhxymodelmapper->setFirst(static_cast<int>(first));
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseSetFirst(QHXYModelMapper* self, int first) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetFirst_IsBase(true);
        vqhxymodelmapper->setFirst(static_cast<int>(first));
    } else {
        vqhxymodelmapper->setFirst(static_cast<int>(first));
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnSetFirst(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetFirst_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_SetFirst_Callback>(slot));
    }
}

// Derived class handler implementation
int QHXYModelMapper_Count(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->count();
    } else {
        return vqhxymodelmapper->count();
    }
}

// Base class handler implementation
int QHXYModelMapper_QBaseCount(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_Count_IsBase(true);
        return vqhxymodelmapper->count();
    } else {
        return vqhxymodelmapper->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnCount(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_Count_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_SetCount(QHXYModelMapper* self, int count) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setCount(static_cast<int>(count));
    } else {
        vqhxymodelmapper->setCount(static_cast<int>(count));
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseSetCount(QHXYModelMapper* self, int count) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetCount_IsBase(true);
        vqhxymodelmapper->setCount(static_cast<int>(count));
    } else {
        vqhxymodelmapper->setCount(static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnSetCount(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetCount_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_SetCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QHXYModelMapper_Orientation(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return static_cast<int>(vqhxymodelmapper->orientation());
    } else {
        return static_cast<int>(vqhxymodelmapper->orientation());
    }
}

// Base class handler implementation
int QHXYModelMapper_QBaseOrientation(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_Orientation_IsBase(true);
        return static_cast<int>(vqhxymodelmapper->orientation());
    } else {
        return static_cast<int>(vqhxymodelmapper->orientation());
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnOrientation(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_Orientation_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Orientation_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_SetOrientation(QHXYModelMapper* self, int orientation) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqhxymodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseSetOrientation(QHXYModelMapper* self, int orientation) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetOrientation_IsBase(true);
        vqhxymodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    } else {
        vqhxymodelmapper->setOrientation(static_cast<Qt::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnSetOrientation(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetOrientation_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_SetOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
int QHXYModelMapper_XSection(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->xSection();
    } else {
        return vqhxymodelmapper->xSection();
    }
}

// Base class handler implementation
int QHXYModelMapper_QBaseXSection(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_XSection_IsBase(true);
        return vqhxymodelmapper->xSection();
    } else {
        return vqhxymodelmapper->xSection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnXSection(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_XSection_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_XSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_SetXSection(QHXYModelMapper* self, int xSection) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setXSection(static_cast<int>(xSection));
    } else {
        vqhxymodelmapper->setXSection(static_cast<int>(xSection));
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseSetXSection(QHXYModelMapper* self, int xSection) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetXSection_IsBase(true);
        vqhxymodelmapper->setXSection(static_cast<int>(xSection));
    } else {
        vqhxymodelmapper->setXSection(static_cast<int>(xSection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnSetXSection(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetXSection_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_SetXSection_Callback>(slot));
    }
}

// Derived class handler implementation
int QHXYModelMapper_YSection(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->ySection();
    } else {
        return vqhxymodelmapper->ySection();
    }
}

// Base class handler implementation
int QHXYModelMapper_QBaseYSection(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_YSection_IsBase(true);
        return vqhxymodelmapper->ySection();
    } else {
        return vqhxymodelmapper->ySection();
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnYSection(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_YSection_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_YSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHXYModelMapper_SetYSection(QHXYModelMapper* self, int ySection) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setYSection(static_cast<int>(ySection));
    } else {
        vqhxymodelmapper->setYSection(static_cast<int>(ySection));
    }
}

// Base class handler implementation
void QHXYModelMapper_QBaseSetYSection(QHXYModelMapper* self, int ySection) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetYSection_IsBase(true);
        vqhxymodelmapper->setYSection(static_cast<int>(ySection));
    } else {
        vqhxymodelmapper->setYSection(static_cast<int>(ySection));
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnSetYSection(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->setQHXYModelMapper_SetYSection_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_SetYSection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHXYModelMapper_Sender(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->sender();
    } else {
        return vqhxymodelmapper->sender();
    }
}

// Base class handler implementation
QObject* QHXYModelMapper_QBaseSender(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_Sender_IsBase(true);
        return vqhxymodelmapper->sender();
    } else {
        return vqhxymodelmapper->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnSender(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_Sender_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHXYModelMapper_SenderSignalIndex(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->senderSignalIndex();
    } else {
        return vqhxymodelmapper->senderSignalIndex();
    }
}

// Base class handler implementation
int QHXYModelMapper_QBaseSenderSignalIndex(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_SenderSignalIndex_IsBase(true);
        return vqhxymodelmapper->senderSignalIndex();
    } else {
        return vqhxymodelmapper->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnSenderSignalIndex(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHXYModelMapper_Receivers(const QHXYModelMapper* self, const char* signal) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->receivers(signal);
    } else {
        return vqhxymodelmapper->receivers(signal);
    }
}

// Base class handler implementation
int QHXYModelMapper_QBaseReceivers(const QHXYModelMapper* self, const char* signal) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_Receivers_IsBase(true);
        return vqhxymodelmapper->receivers(signal);
    } else {
        return vqhxymodelmapper->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnReceivers(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_Receivers_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHXYModelMapper_IsSignalConnected(const QHXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->isSignalConnected(*signal);
    } else {
        return vqhxymodelmapper->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHXYModelMapper_QBaseIsSignalConnected(const QHXYModelMapper* self, QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_IsSignalConnected_IsBase(true);
        return vqhxymodelmapper->isSignalConnected(*signal);
    } else {
        return vqhxymodelmapper->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnIsSignalConnected(const QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        vqhxymodelmapper->setQHXYModelMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_IsSignalConnected_Callback>(slot));
    }
}

void QHXYModelMapper_Delete(QHXYModelMapper* self) {
    delete self;
}
