#include <QAbstractItemModel>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVBoxPlotModelMapper>
#include <qvboxplotmodelmapper.h>
#include "libqvboxplotmodelmapper.h"
#include "libqvboxplotmodelmapper.hxx"

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new() {
    return new VirtualQVBoxPlotModelMapper();
}

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new2(QObject* parent) {
    return new VirtualQVBoxPlotModelMapper(parent);
}

QMetaObject* QVBoxPlotModelMapper_MetaObject(const QVBoxPlotModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVBoxPlotModelMapper_Metacast(QVBoxPlotModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVBoxPlotModelMapper_Metacall(QVBoxPlotModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVBoxPlotModelMapper_Tr(const char* s) {
    auto _ret = QVBoxPlotModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QVBoxPlotModelMapper_Model(const QVBoxPlotModelMapper* self) {
    return self->model();
}

void QVBoxPlotModelMapper_SetModel(QVBoxPlotModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QBoxPlotSeries* QVBoxPlotModelMapper_Series(const QVBoxPlotModelMapper* self) {
    return self->series();
}

void QVBoxPlotModelMapper_SetSeries(QVBoxPlotModelMapper* self, QBoxPlotSeries* series) {
    self->setSeries(series);
}

int QVBoxPlotModelMapper_FirstBoxSetColumn(const QVBoxPlotModelMapper* self) {
    return self->firstBoxSetColumn();
}

void QVBoxPlotModelMapper_SetFirstBoxSetColumn(QVBoxPlotModelMapper* self, int firstBoxSetColumn) {
    self->setFirstBoxSetColumn(static_cast<int>(firstBoxSetColumn));
}

int QVBoxPlotModelMapper_LastBoxSetColumn(const QVBoxPlotModelMapper* self) {
    return self->lastBoxSetColumn();
}

void QVBoxPlotModelMapper_SetLastBoxSetColumn(QVBoxPlotModelMapper* self, int lastBoxSetColumn) {
    self->setLastBoxSetColumn(static_cast<int>(lastBoxSetColumn));
}

int QVBoxPlotModelMapper_FirstRow(const QVBoxPlotModelMapper* self) {
    return self->firstRow();
}

void QVBoxPlotModelMapper_SetFirstRow(QVBoxPlotModelMapper* self, int firstRow) {
    self->setFirstRow(static_cast<int>(firstRow));
}

int QVBoxPlotModelMapper_RowCount(const QVBoxPlotModelMapper* self) {
    return self->rowCount();
}

void QVBoxPlotModelMapper_SetRowCount(QVBoxPlotModelMapper* self, int rowCount) {
    self->setRowCount(static_cast<int>(rowCount));
}

void QVBoxPlotModelMapper_SeriesReplaced(QVBoxPlotModelMapper* self) {
    self->seriesReplaced();
}

void QVBoxPlotModelMapper_Connect_SeriesReplaced(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self,
                                  static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::seriesReplaced),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QVBoxPlotModelMapper_ModelReplaced(QVBoxPlotModelMapper* self) {
    self->modelReplaced();
}

void QVBoxPlotModelMapper_Connect_ModelReplaced(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self,
                                  static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::modelReplaced),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QVBoxPlotModelMapper_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self) {
    self->firstBoxSetColumnChanged();
}

void QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self,
                                  static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::firstBoxSetColumnChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QVBoxPlotModelMapper_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self) {
    self->lastBoxSetColumnChanged();
}

void QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self,
                                  static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::lastBoxSetColumnChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QVBoxPlotModelMapper_FirstRowChanged(QVBoxPlotModelMapper* self) {
    self->firstRowChanged();
}

void QVBoxPlotModelMapper_Connect_FirstRowChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self,
                                  static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::firstRowChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QVBoxPlotModelMapper_RowCountChanged(QVBoxPlotModelMapper* self) {
    self->rowCountChanged();
}

void QVBoxPlotModelMapper_Connect_RowCountChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QVBoxPlotModelMapper*) = reinterpret_cast<void (*)(QVBoxPlotModelMapper*)>(slot);
    QVBoxPlotModelMapper::connect(self,
                                  static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::rowCountChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

libqt_string QVBoxPlotModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QVBoxPlotModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVBoxPlotModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVBoxPlotModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVBoxPlotModelMapper_SuperMetaObject(const QVBoxPlotModelMapper* self) {
    return (QMetaObject*)self->QVBoxPlotModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnMetaObject(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self)))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_metaobject_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVBoxPlotModelMapper_SuperMetacast(QVBoxPlotModelMapper* self, const char* param1) {
    return self->QVBoxPlotModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnMetacast(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_metacast_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVBoxPlotModelMapper_SuperMetacall(QVBoxPlotModelMapper* self, int param1, int param2, void** param3) {
    return self->QVBoxPlotModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnMetacall(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_metacall_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QVBoxPlotModelMapper_Event(QVBoxPlotModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVBoxPlotModelMapper_SuperEvent(QVBoxPlotModelMapper* self, QEvent* event) {
    return self->QVBoxPlotModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnEvent(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_event_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVBoxPlotModelMapper_EventFilter(QVBoxPlotModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVBoxPlotModelMapper_SuperEventFilter(QVBoxPlotModelMapper* self, QObject* watched, QEvent* event) {
    return self->QVBoxPlotModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnEventFilter(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_eventfilter_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVBoxPlotModelMapper_TimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper) {
        vqvboxplotmodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_SuperTimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->QVBoxPlotModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnTimerEvent(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_timerevent_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVBoxPlotModelMapper_ChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper) {
        vqvboxplotmodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_SuperChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->QVBoxPlotModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnChildEvent(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_childevent_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVBoxPlotModelMapper_CustomEvent(QVBoxPlotModelMapper* self, QEvent* event) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper) {
        vqvboxplotmodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_SuperCustomEvent(QVBoxPlotModelMapper* self, QEvent* event) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->QVBoxPlotModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnCustomEvent(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_customevent_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVBoxPlotModelMapper_ConnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper) {
        vqvboxplotmodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_SuperConnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->QVBoxPlotModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnConnectNotify(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_connectnotify_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVBoxPlotModelMapper_DisconnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self);
    if (vqvboxplotmodelmapper) {
        vqvboxplotmodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxPlotModelMapper_SuperDisconnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->QVBoxPlotModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVBoxPlotModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxPlotModelMapper_OnDisconnectNotify(QVBoxPlotModelMapper* self, intptr_t slot) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self))
        vqvboxplotmodelmapper->qvboxplotmodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQVBoxPlotModelMapper::QVBoxPlotModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QVBoxPlotModelMapper_First(const QVBoxPlotModelMapper* self) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::first();
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::first called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBoxPlotModelMapper_SetFirst(QVBoxPlotModelMapper* self, int first) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::setFirst(static_cast<int>(first));
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::setFirst called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBoxPlotModelMapper_Count(const QVBoxPlotModelMapper* self) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::count();
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::count called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBoxPlotModelMapper_SetCount(QVBoxPlotModelMapper* self, int count) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::setCount(static_cast<int>(count));
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::setCount called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBoxPlotModelMapper_FirstBoxSetSection(const QVBoxPlotModelMapper* self) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::firstBoxSetSection();
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::firstBoxSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBoxPlotModelMapper_SetFirstBoxSetSection(QVBoxPlotModelMapper* self, int firstBoxSetSection) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::setFirstBoxSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBoxPlotModelMapper_LastBoxSetSection(const QVBoxPlotModelMapper* self) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::lastBoxSetSection();
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::lastBoxSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBoxPlotModelMapper_SetLastBoxSetSection(QVBoxPlotModelMapper* self, int lastBoxSetSection) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::setLastBoxSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBoxPlotModelMapper_Orientation(const QVBoxPlotModelMapper* self) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return static_cast<int>(vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::orientation());
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::orientation called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBoxPlotModelMapper_SetOrientation(QVBoxPlotModelMapper* self, int orientation) {
    if (auto* vqvboxplotmodelmapper = dynamic_cast<VirtualQVBoxPlotModelMapper*>(self)) {
        vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::setOrientation(static_cast<Qt::Orientation>(orientation));
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::setOrientation called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QVBoxPlotModelMapper_Sender(const QVBoxPlotModelMapper* self) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::sender();
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBoxPlotModelMapper_SenderSignalIndex(const QVBoxPlotModelMapper* self) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBoxPlotModelMapper_Receivers(const QVBoxPlotModelMapper* self, const char* signal) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVBoxPlotModelMapper_IsSignalConnected(const QVBoxPlotModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqvboxplotmodelmapper = const_cast<VirtualQVBoxPlotModelMapper*>(dynamic_cast<const VirtualQVBoxPlotModelMapper*>(self))) {
        return vqvboxplotmodelmapper->VirtualQVBoxPlotModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVBoxPlotModelMapper::isSignalConnected called without a directly constructed type");
}

void QVBoxPlotModelMapper_Delete(QVBoxPlotModelMapper* self) {
    delete self;
}
