#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QTimerEvent>
#include <QVPieModelMapper>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVPieModelMapper_Tr(const char* s) {
    auto _ret = QVPieModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QVPieModelMapper::connect(self,
                              static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::seriesReplaced),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVPieModelMapper_ModelReplaced(QVPieModelMapper* self) {
    self->modelReplaced();
}

void QVPieModelMapper_Connect_ModelReplaced(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self,
                              static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::modelReplaced),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVPieModelMapper_ValuesColumnChanged(QVPieModelMapper* self) {
    self->valuesColumnChanged();
}

void QVPieModelMapper_Connect_ValuesColumnChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self,
                              static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::valuesColumnChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVPieModelMapper_LabelsColumnChanged(QVPieModelMapper* self) {
    self->labelsColumnChanged();
}

void QVPieModelMapper_Connect_LabelsColumnChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self,
                              static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::labelsColumnChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVPieModelMapper_FirstRowChanged(QVPieModelMapper* self) {
    self->firstRowChanged();
}

void QVPieModelMapper_Connect_FirstRowChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self,
                              static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::firstRowChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QVPieModelMapper_RowCountChanged(QVPieModelMapper* self) {
    self->rowCountChanged();
}

void QVPieModelMapper_Connect_RowCountChanged(QVPieModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVPieModelMapper*) = reinterpret_cast<void (*)(QVPieModelMapper*)>(slot);
    QVPieModelMapper::connect(self,
                              static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::rowCountChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string QVPieModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QVPieModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVPieModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVPieModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVPieModelMapper_SuperMetaObject(const QVPieModelMapper* self) {
    return (QMetaObject*)self->QVPieModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnMetaObject(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self)))
        vqvpiemodelmapper->qvpiemodelmapper_metaobject_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVPieModelMapper_SuperMetacast(QVPieModelMapper* self, const char* param1) {
    return self->QVPieModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnMetacast(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_metacast_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVPieModelMapper_SuperMetacall(QVPieModelMapper* self, int param1, int param2, void** param3) {
    return self->QVPieModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnMetacall(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_metacall_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QVPieModelMapper_Event(QVPieModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVPieModelMapper_SuperEvent(QVPieModelMapper* self, QEvent* event) {
    return self->QVPieModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnEvent(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_event_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVPieModelMapper_EventFilter(QVPieModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVPieModelMapper_SuperEventFilter(QVPieModelMapper* self, QObject* watched, QEvent* event) {
    return self->QVPieModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnEventFilter(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_eventfilter_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVPieModelMapper_TimerEvent(QVPieModelMapper* self, QTimerEvent* event) {
    auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self);
    if (vqvpiemodelmapper) {
        vqvpiemodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVPieModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVPieModelMapper_SuperTimerEvent(QVPieModelMapper* self, QTimerEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->QVPieModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVPieModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnTimerEvent(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_timerevent_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVPieModelMapper_ChildEvent(QVPieModelMapper* self, QChildEvent* event) {
    auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self);
    if (vqvpiemodelmapper) {
        vqvpiemodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVPieModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVPieModelMapper_SuperChildEvent(QVPieModelMapper* self, QChildEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->QVPieModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVPieModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnChildEvent(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_childevent_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVPieModelMapper_CustomEvent(QVPieModelMapper* self, QEvent* event) {
    auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self);
    if (vqvpiemodelmapper) {
        vqvpiemodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVPieModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVPieModelMapper_SuperCustomEvent(QVPieModelMapper* self, QEvent* event) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->QVPieModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVPieModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnCustomEvent(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_customevent_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVPieModelMapper_ConnectNotify(QVPieModelMapper* self, const QMetaMethod* signal) {
    auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self);
    if (vqvpiemodelmapper) {
        vqvpiemodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVPieModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVPieModelMapper_SuperConnectNotify(QVPieModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->QVPieModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVPieModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnConnectNotify(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_connectnotify_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVPieModelMapper_DisconnectNotify(QVPieModelMapper* self, const QMetaMethod* signal) {
    auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self);
    if (vqvpiemodelmapper) {
        vqvpiemodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVPieModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVPieModelMapper_SuperDisconnectNotify(QVPieModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->QVPieModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVPieModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVPieModelMapper_OnDisconnectNotify(QVPieModelMapper* self, intptr_t slot) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self))
        vqvpiemodelmapper->qvpiemodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQVPieModelMapper::QVPieModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QVPieModelMapper_First(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->VirtualQVPieModelMapper::first();
    } else
        qFatal("Error: Protected method QVPieModelMapper::first called without a directly constructed type");
}

// Derived class protected handler implementation
void QVPieModelMapper_SetFirst(QVPieModelMapper* self, int first) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->VirtualQVPieModelMapper::setFirst(static_cast<int>(first));
    } else
        qFatal("Error: Protected method QVPieModelMapper::setFirst called without a directly constructed type");
}

// Derived class protected handler implementation
int QVPieModelMapper_Count(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->VirtualQVPieModelMapper::count();
    } else
        qFatal("Error: Protected method QVPieModelMapper::count called without a directly constructed type");
}

// Derived class protected handler implementation
void QVPieModelMapper_SetCount(QVPieModelMapper* self, int count) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->VirtualQVPieModelMapper::setCount(static_cast<int>(count));
    } else
        qFatal("Error: Protected method QVPieModelMapper::setCount called without a directly constructed type");
}

// Derived class protected handler implementation
int QVPieModelMapper_ValuesSection(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->VirtualQVPieModelMapper::valuesSection();
    } else
        qFatal("Error: Protected method QVPieModelMapper::valuesSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVPieModelMapper_SetValuesSection(QVPieModelMapper* self, int valuesSection) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->VirtualQVPieModelMapper::setValuesSection(static_cast<int>(valuesSection));
    } else
        qFatal("Error: Protected method QVPieModelMapper::setValuesSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVPieModelMapper_LabelsSection(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->VirtualQVPieModelMapper::labelsSection();
    } else
        qFatal("Error: Protected method QVPieModelMapper::labelsSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVPieModelMapper_SetLabelsSection(QVPieModelMapper* self, int labelsSection) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->VirtualQVPieModelMapper::setLabelsSection(static_cast<int>(labelsSection));
    } else
        qFatal("Error: Protected method QVPieModelMapper::setLabelsSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVPieModelMapper_Orientation(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return static_cast<int>(vqvpiemodelmapper->VirtualQVPieModelMapper::orientation());
    } else
        qFatal("Error: Protected method QVPieModelMapper::orientation called without a directly constructed type");
}

// Derived class protected handler implementation
void QVPieModelMapper_SetOrientation(QVPieModelMapper* self, int orientation) {
    if (auto* vqvpiemodelmapper = dynamic_cast<VirtualQVPieModelMapper*>(self)) {
        vqvpiemodelmapper->VirtualQVPieModelMapper::setOrientation(static_cast<Qt::Orientation>(orientation));
    } else
        qFatal("Error: Protected method QVPieModelMapper::setOrientation called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QVPieModelMapper_Sender(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->VirtualQVPieModelMapper::sender();
    } else
        qFatal("Error: Protected method QVPieModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVPieModelMapper_SenderSignalIndex(const QVPieModelMapper* self) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->VirtualQVPieModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVPieModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVPieModelMapper_Receivers(const QVPieModelMapper* self, const char* signal) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->VirtualQVPieModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QVPieModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVPieModelMapper_IsSignalConnected(const QVPieModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvpiemodelmapper = const_cast<VirtualQVPieModelMapper*>(dynamic_cast<const VirtualQVPieModelMapper*>(self))) {
        return vqvpiemodelmapper->VirtualQVPieModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVPieModelMapper::isSignalConnected called without a directly constructed type");
}

void QVPieModelMapper_Delete(QVPieModelMapper* self) {
    delete self;
}
