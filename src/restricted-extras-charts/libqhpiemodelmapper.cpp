#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QHPieModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHPieModelMapper_Tr(const char* s) {
    auto _ret = QHPieModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QHPieModelMapper::connect(self,
                              static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::seriesReplaced),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHPieModelMapper_ModelReplaced(QHPieModelMapper* self) {
    self->modelReplaced();
}

void QHPieModelMapper_Connect_ModelReplaced(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self,
                              static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::modelReplaced),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHPieModelMapper_ValuesRowChanged(QHPieModelMapper* self) {
    self->valuesRowChanged();
}

void QHPieModelMapper_Connect_ValuesRowChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self,
                              static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::valuesRowChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHPieModelMapper_LabelsRowChanged(QHPieModelMapper* self) {
    self->labelsRowChanged();
}

void QHPieModelMapper_Connect_LabelsRowChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self,
                              static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::labelsRowChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHPieModelMapper_FirstColumnChanged(QHPieModelMapper* self) {
    self->firstColumnChanged();
}

void QHPieModelMapper_Connect_FirstColumnChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self,
                              static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::firstColumnChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHPieModelMapper_ColumnCountChanged(QHPieModelMapper* self) {
    self->columnCountChanged();
}

void QHPieModelMapper_Connect_ColumnCountChanged(QHPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHPieModelMapper*) = reinterpret_cast<void (*)(QHPieModelMapper*)>(slot);
    QHPieModelMapper::connect(self,
                              static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::columnCountChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string QHPieModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QHPieModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHPieModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHPieModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHPieModelMapper_SuperMetaObject(const QHPieModelMapper* self) {
    return (QMetaObject*)self->QHPieModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnMetaObject(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self)))
        vqhpiemodelmapper->qhpiemodelmapper_metaobject_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHPieModelMapper_SuperMetacast(QHPieModelMapper* self, const char* param1) {
    return self->QHPieModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnMetacast(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_metacast_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHPieModelMapper_SuperMetacall(QHPieModelMapper* self, int param1, int param2, void** param3) {
    return self->QHPieModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnMetacall(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_metacall_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QHPieModelMapper_Event(QHPieModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHPieModelMapper_SuperEvent(QHPieModelMapper* self, QEvent* event) {
    return self->QHPieModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnEvent(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_event_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHPieModelMapper_EventFilter(QHPieModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHPieModelMapper_SuperEventFilter(QHPieModelMapper* self, QObject* watched, QEvent* event) {
    return self->QHPieModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnEventFilter(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_eventfilter_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHPieModelMapper_TimerEvent(QHPieModelMapper* self, QTimerEvent* event) {
    auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self);
    if (vqhpiemodelmapper) {
        vqhpiemodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHPieModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHPieModelMapper_SuperTimerEvent(QHPieModelMapper* self, QTimerEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->QHPieModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHPieModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnTimerEvent(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_timerevent_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHPieModelMapper_ChildEvent(QHPieModelMapper* self, QChildEvent* event) {
    auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self);
    if (vqhpiemodelmapper) {
        vqhpiemodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHPieModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHPieModelMapper_SuperChildEvent(QHPieModelMapper* self, QChildEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->QHPieModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHPieModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnChildEvent(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_childevent_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHPieModelMapper_CustomEvent(QHPieModelMapper* self, QEvent* event) {
    auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self);
    if (vqhpiemodelmapper) {
        vqhpiemodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHPieModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHPieModelMapper_SuperCustomEvent(QHPieModelMapper* self, QEvent* event) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->QHPieModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHPieModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnCustomEvent(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_customevent_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHPieModelMapper_ConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal) {
    auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self);
    if (vqhpiemodelmapper) {
        vqhpiemodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHPieModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHPieModelMapper_SuperConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->QHPieModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHPieModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnConnectNotify(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_connectnotify_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHPieModelMapper_DisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal) {
    auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self);
    if (vqhpiemodelmapper) {
        vqhpiemodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHPieModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHPieModelMapper_SuperDisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->QHPieModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHPieModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHPieModelMapper_OnDisconnectNotify(QHPieModelMapper* self, intptr_t slot) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self))
        vqhpiemodelmapper->qhpiemodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQHPieModelMapper::QHPieModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QHPieModelMapper_First(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->VirtualQHPieModelMapper::first();
    } else
        qFatal("Error: Protected method QHPieModelMapper::first called without a directly constructed type");
}

// Derived class protected handler implementation
void QHPieModelMapper_SetFirst(QHPieModelMapper* self, int first) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->VirtualQHPieModelMapper::setFirst(static_cast<int>(first));
    } else
        qFatal("Error: Protected method QHPieModelMapper::setFirst called without a directly constructed type");
}

// Derived class protected handler implementation
int QHPieModelMapper_Count(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->VirtualQHPieModelMapper::count();
    } else
        qFatal("Error: Protected method QHPieModelMapper::count called without a directly constructed type");
}

// Derived class protected handler implementation
void QHPieModelMapper_SetCount(QHPieModelMapper* self, int count) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->VirtualQHPieModelMapper::setCount(static_cast<int>(count));
    } else
        qFatal("Error: Protected method QHPieModelMapper::setCount called without a directly constructed type");
}

// Derived class protected handler implementation
int QHPieModelMapper_ValuesSection(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->VirtualQHPieModelMapper::valuesSection();
    } else
        qFatal("Error: Protected method QHPieModelMapper::valuesSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHPieModelMapper_SetValuesSection(QHPieModelMapper* self, int valuesSection) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->VirtualQHPieModelMapper::setValuesSection(static_cast<int>(valuesSection));
    } else
        qFatal("Error: Protected method QHPieModelMapper::setValuesSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHPieModelMapper_LabelsSection(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->VirtualQHPieModelMapper::labelsSection();
    } else
        qFatal("Error: Protected method QHPieModelMapper::labelsSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHPieModelMapper_SetLabelsSection(QHPieModelMapper* self, int labelsSection) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->VirtualQHPieModelMapper::setLabelsSection(static_cast<int>(labelsSection));
    } else
        qFatal("Error: Protected method QHPieModelMapper::setLabelsSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHPieModelMapper_Orientation(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return static_cast<int>(vqhpiemodelmapper->VirtualQHPieModelMapper::orientation());
    } else
        qFatal("Error: Protected method QHPieModelMapper::orientation called without a directly constructed type");
}

// Derived class protected handler implementation
void QHPieModelMapper_SetOrientation(QHPieModelMapper* self, int orientation) {
    if (auto* vqhpiemodelmapper = dynamic_cast<VirtualQHPieModelMapper*>(self)) {
        vqhpiemodelmapper->VirtualQHPieModelMapper::setOrientation(static_cast<Qt::Orientation>(orientation));
    } else
        qFatal("Error: Protected method QHPieModelMapper::setOrientation called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QHPieModelMapper_Sender(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->VirtualQHPieModelMapper::sender();
    } else
        qFatal("Error: Protected method QHPieModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHPieModelMapper_SenderSignalIndex(const QHPieModelMapper* self) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->VirtualQHPieModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHPieModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHPieModelMapper_Receivers(const QHPieModelMapper* self, const char* signal) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->VirtualQHPieModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QHPieModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHPieModelMapper_IsSignalConnected(const QHPieModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhpiemodelmapper = const_cast<VirtualQHPieModelMapper*>(dynamic_cast<const VirtualQHPieModelMapper*>(self))) {
        return vqhpiemodelmapper->VirtualQHPieModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHPieModelMapper::isSignalConnected called without a directly constructed type");
}

void QHPieModelMapper_Delete(QHPieModelMapper* self) {
    delete self;
}
