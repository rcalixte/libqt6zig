#include <QAbstractItemModel>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHBoxPlotModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHBoxPlotModelMapper_Tr(const char* s) {
    auto _ret = QHBoxPlotModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QHBoxPlotModelMapper::connect(self,
                                  static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::seriesReplaced),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QHBoxPlotModelMapper_ModelReplaced(QHBoxPlotModelMapper* self) {
    self->modelReplaced();
}

void QHBoxPlotModelMapper_Connect_ModelReplaced(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self,
                                  static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::modelReplaced),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QHBoxPlotModelMapper_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self) {
    self->firstBoxSetRowChanged();
}

void QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self,
                                  static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::firstBoxSetRowChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QHBoxPlotModelMapper_LastBoxSetRowChanged(QHBoxPlotModelMapper* self) {
    self->lastBoxSetRowChanged();
}

void QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self,
                                  static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::lastBoxSetRowChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QHBoxPlotModelMapper_FirstColumnChanged(QHBoxPlotModelMapper* self) {
    self->firstColumnChanged();
}

void QHBoxPlotModelMapper_Connect_FirstColumnChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self,
                                  static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::firstColumnChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QHBoxPlotModelMapper_ColumnCountChanged(QHBoxPlotModelMapper* self) {
    self->columnCountChanged();
}

void QHBoxPlotModelMapper_Connect_ColumnCountChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBoxPlotModelMapper*) = reinterpret_cast<void (*)(QHBoxPlotModelMapper*)>(slot);
    QHBoxPlotModelMapper::connect(self,
                                  static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::columnCountChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

libqt_string QHBoxPlotModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QHBoxPlotModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHBoxPlotModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHBoxPlotModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHBoxPlotModelMapper_SuperMetaObject(const QHBoxPlotModelMapper* self) {
    return (QMetaObject*)self->QHBoxPlotModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnMetaObject(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self)))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_metaobject_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHBoxPlotModelMapper_SuperMetacast(QHBoxPlotModelMapper* self, const char* param1) {
    return self->QHBoxPlotModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnMetacast(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_metacast_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHBoxPlotModelMapper_SuperMetacall(QHBoxPlotModelMapper* self, int param1, int param2, void** param3) {
    return self->QHBoxPlotModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnMetacall(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_metacall_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QHBoxPlotModelMapper_Event(QHBoxPlotModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHBoxPlotModelMapper_SuperEvent(QHBoxPlotModelMapper* self, QEvent* event) {
    return self->QHBoxPlotModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnEvent(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_event_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHBoxPlotModelMapper_EventFilter(QHBoxPlotModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHBoxPlotModelMapper_SuperEventFilter(QHBoxPlotModelMapper* self, QObject* watched, QEvent* event) {
    return self->QHBoxPlotModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnEventFilter(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_eventfilter_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHBoxPlotModelMapper_TimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event) {
    auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self);
    if (vqhboxplotmodelmapper) {
        vqhboxplotmodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_SuperTimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->QHBoxPlotModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnTimerEvent(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_timerevent_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHBoxPlotModelMapper_ChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event) {
    auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self);
    if (vqhboxplotmodelmapper) {
        vqhboxplotmodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_SuperChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->QHBoxPlotModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnChildEvent(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_childevent_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHBoxPlotModelMapper_CustomEvent(QHBoxPlotModelMapper* self, QEvent* event) {
    auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self);
    if (vqhboxplotmodelmapper) {
        vqhboxplotmodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_SuperCustomEvent(QHBoxPlotModelMapper* self, QEvent* event) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->QHBoxPlotModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnCustomEvent(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_customevent_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHBoxPlotModelMapper_ConnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self);
    if (vqhboxplotmodelmapper) {
        vqhboxplotmodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_SuperConnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->QHBoxPlotModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnConnectNotify(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_connectnotify_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHBoxPlotModelMapper_DisconnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self);
    if (vqhboxplotmodelmapper) {
        vqhboxplotmodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxPlotModelMapper_SuperDisconnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->QHBoxPlotModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHBoxPlotModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxPlotModelMapper_OnDisconnectNotify(QHBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self))
        vqhboxplotmodelmapper->qhboxplotmodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQHBoxPlotModelMapper::QHBoxPlotModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QHBoxPlotModelMapper_First(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::first();
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::first called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBoxPlotModelMapper_SetFirst(QHBoxPlotModelMapper* self, int first) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::setFirst(static_cast<int>(first));
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::setFirst called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBoxPlotModelMapper_Count(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::count();
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::count called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBoxPlotModelMapper_SetCount(QHBoxPlotModelMapper* self, int count) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::setCount(static_cast<int>(count));
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::setCount called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBoxPlotModelMapper_FirstBoxSetSection(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::firstBoxSetSection();
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::firstBoxSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBoxPlotModelMapper_SetFirstBoxSetSection(QHBoxPlotModelMapper* self, int firstBoxSetSection) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::setFirstBoxSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBoxPlotModelMapper_LastBoxSetSection(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::lastBoxSetSection();
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::lastBoxSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBoxPlotModelMapper_SetLastBoxSetSection(QHBoxPlotModelMapper* self, int lastBoxSetSection) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::setLastBoxSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBoxPlotModelMapper_Orientation(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return static_cast<int>(vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::orientation());
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::orientation called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBoxPlotModelMapper_SetOrientation(QHBoxPlotModelMapper* self, int orientation) {
    if (auto* vqhboxplotmodelmapper = dynamic_cast<VirtualQHBoxPlotModelMapper*>(self)) {
        vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::setOrientation(static_cast<Qt::Orientation>(orientation));
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::setOrientation called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QHBoxPlotModelMapper_Sender(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::sender();
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBoxPlotModelMapper_SenderSignalIndex(const QHBoxPlotModelMapper* self) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBoxPlotModelMapper_Receivers(const QHBoxPlotModelMapper* self, const char* signal) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHBoxPlotModelMapper_IsSignalConnected(const QHBoxPlotModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhboxplotmodelmapper = const_cast<VirtualQHBoxPlotModelMapper*>(dynamic_cast<const VirtualQHBoxPlotModelMapper*>(self))) {
        return vqhboxplotmodelmapper->VirtualQHBoxPlotModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHBoxPlotModelMapper::isSignalConnected called without a directly constructed type");
}

void QHBoxPlotModelMapper_Delete(QHBoxPlotModelMapper* self) {
    delete self;
}
