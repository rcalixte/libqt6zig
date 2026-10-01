#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QHBarModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qhbarmodelmapper.h>
#include "libqhbarmodelmapper.h"
#include "libqhbarmodelmapper.hxx"

QHBarModelMapper* QHBarModelMapper_new() {
    return new VirtualQHBarModelMapper();
}

QHBarModelMapper* QHBarModelMapper_new2(QObject* parent) {
    return new VirtualQHBarModelMapper(parent);
}

QMetaObject* QHBarModelMapper_MetaObject(const QHBarModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHBarModelMapper_Metacast(QHBarModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHBarModelMapper_Metacall(QHBarModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHBarModelMapper_Tr(const char* s) {
    auto _ret = QHBarModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QHBarModelMapper_Model(const QHBarModelMapper* self) {
    return self->model();
}

void QHBarModelMapper_SetModel(QHBarModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractBarSeries* QHBarModelMapper_Series(const QHBarModelMapper* self) {
    return self->series();
}

void QHBarModelMapper_SetSeries(QHBarModelMapper* self, QAbstractBarSeries* series) {
    self->setSeries(series);
}

int QHBarModelMapper_FirstBarSetRow(const QHBarModelMapper* self) {
    return self->firstBarSetRow();
}

void QHBarModelMapper_SetFirstBarSetRow(QHBarModelMapper* self, int firstBarSetRow) {
    self->setFirstBarSetRow(static_cast<int>(firstBarSetRow));
}

int QHBarModelMapper_LastBarSetRow(const QHBarModelMapper* self) {
    return self->lastBarSetRow();
}

void QHBarModelMapper_SetLastBarSetRow(QHBarModelMapper* self, int lastBarSetRow) {
    self->setLastBarSetRow(static_cast<int>(lastBarSetRow));
}

int QHBarModelMapper_FirstColumn(const QHBarModelMapper* self) {
    return self->firstColumn();
}

void QHBarModelMapper_SetFirstColumn(QHBarModelMapper* self, int firstColumn) {
    self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHBarModelMapper_ColumnCount(const QHBarModelMapper* self) {
    return self->columnCount();
}

void QHBarModelMapper_SetColumnCount(QHBarModelMapper* self, int columnCount) {
    self->setColumnCount(static_cast<int>(columnCount));
}

void QHBarModelMapper_SeriesReplaced(QHBarModelMapper* self) {
    self->seriesReplaced();
}

void QHBarModelMapper_Connect_SeriesReplaced(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self,
                              static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::seriesReplaced),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHBarModelMapper_ModelReplaced(QHBarModelMapper* self) {
    self->modelReplaced();
}

void QHBarModelMapper_Connect_ModelReplaced(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self,
                              static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::modelReplaced),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHBarModelMapper_FirstBarSetRowChanged(QHBarModelMapper* self) {
    self->firstBarSetRowChanged();
}

void QHBarModelMapper_Connect_FirstBarSetRowChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self,
                              static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::firstBarSetRowChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHBarModelMapper_LastBarSetRowChanged(QHBarModelMapper* self) {
    self->lastBarSetRowChanged();
}

void QHBarModelMapper_Connect_LastBarSetRowChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self,
                              static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::lastBarSetRowChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHBarModelMapper_FirstColumnChanged(QHBarModelMapper* self) {
    self->firstColumnChanged();
}

void QHBarModelMapper_Connect_FirstColumnChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self,
                              static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::firstColumnChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QHBarModelMapper_ColumnCountChanged(QHBarModelMapper* self) {
    self->columnCountChanged();
}

void QHBarModelMapper_Connect_ColumnCountChanged(QHBarModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHBarModelMapper*) = reinterpret_cast<void (*)(QHBarModelMapper*)>(slot);
    QHBarModelMapper::connect(self,
                              static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::columnCountChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string QHBarModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QHBarModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHBarModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHBarModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHBarModelMapper_SuperMetaObject(const QHBarModelMapper* self) {
    return (QMetaObject*)self->QHBarModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnMetaObject(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self)))
        vqhbarmodelmapper->qhbarmodelmapper_metaobject_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHBarModelMapper_SuperMetacast(QHBarModelMapper* self, const char* param1) {
    return self->QHBarModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnMetacast(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_metacast_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHBarModelMapper_SuperMetacall(QHBarModelMapper* self, int param1, int param2, void** param3) {
    return self->QHBarModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnMetacall(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_metacall_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QHBarModelMapper_Event(QHBarModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHBarModelMapper_SuperEvent(QHBarModelMapper* self, QEvent* event) {
    return self->QHBarModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnEvent(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_event_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHBarModelMapper_EventFilter(QHBarModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHBarModelMapper_SuperEventFilter(QHBarModelMapper* self, QObject* watched, QEvent* event) {
    return self->QHBarModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnEventFilter(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_eventfilter_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHBarModelMapper_TimerEvent(QHBarModelMapper* self, QTimerEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper) {
        vqhbarmodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHBarModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBarModelMapper_SuperTimerEvent(QHBarModelMapper* self, QTimerEvent* event) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->QHBarModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHBarModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnTimerEvent(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_timerevent_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHBarModelMapper_ChildEvent(QHBarModelMapper* self, QChildEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper) {
        vqhbarmodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHBarModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBarModelMapper_SuperChildEvent(QHBarModelMapper* self, QChildEvent* event) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->QHBarModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHBarModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnChildEvent(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_childevent_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHBarModelMapper_CustomEvent(QHBarModelMapper* self, QEvent* event) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper) {
        vqhbarmodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHBarModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBarModelMapper_SuperCustomEvent(QHBarModelMapper* self, QEvent* event) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->QHBarModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHBarModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnCustomEvent(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_customevent_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHBarModelMapper_ConnectNotify(QHBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper) {
        vqhbarmodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHBarModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBarModelMapper_SuperConnectNotify(QHBarModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->QHBarModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHBarModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnConnectNotify(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_connectnotify_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHBarModelMapper_DisconnectNotify(QHBarModelMapper* self, const QMetaMethod* signal) {
    auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self);
    if (vqhbarmodelmapper) {
        vqhbarmodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHBarModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBarModelMapper_SuperDisconnectNotify(QHBarModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->QHBarModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHBarModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBarModelMapper_OnDisconnectNotify(QHBarModelMapper* self, intptr_t slot) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self))
        vqhbarmodelmapper->qhbarmodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQHBarModelMapper::QHBarModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QHBarModelMapper_First(const QHBarModelMapper* self) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return vqhbarmodelmapper->VirtualQHBarModelMapper::first();
    } else
        qFatal("Error: Protected method QHBarModelMapper::first called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBarModelMapper_SetFirst(QHBarModelMapper* self, int first) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->VirtualQHBarModelMapper::setFirst(static_cast<int>(first));
    } else
        qFatal("Error: Protected method QHBarModelMapper::setFirst called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBarModelMapper_Count(const QHBarModelMapper* self) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return vqhbarmodelmapper->VirtualQHBarModelMapper::count();
    } else
        qFatal("Error: Protected method QHBarModelMapper::count called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBarModelMapper_SetCount(QHBarModelMapper* self, int count) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->VirtualQHBarModelMapper::setCount(static_cast<int>(count));
    } else
        qFatal("Error: Protected method QHBarModelMapper::setCount called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBarModelMapper_FirstBarSetSection(const QHBarModelMapper* self) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return vqhbarmodelmapper->VirtualQHBarModelMapper::firstBarSetSection();
    } else
        qFatal("Error: Protected method QHBarModelMapper::firstBarSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBarModelMapper_SetFirstBarSetSection(QHBarModelMapper* self, int firstBarSetSection) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->VirtualQHBarModelMapper::setFirstBarSetSection(static_cast<int>(firstBarSetSection));
    } else
        qFatal("Error: Protected method QHBarModelMapper::setFirstBarSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBarModelMapper_LastBarSetSection(const QHBarModelMapper* self) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return vqhbarmodelmapper->VirtualQHBarModelMapper::lastBarSetSection();
    } else
        qFatal("Error: Protected method QHBarModelMapper::lastBarSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBarModelMapper_SetLastBarSetSection(QHBarModelMapper* self, int lastBarSetSection) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->VirtualQHBarModelMapper::setLastBarSetSection(static_cast<int>(lastBarSetSection));
    } else
        qFatal("Error: Protected method QHBarModelMapper::setLastBarSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBarModelMapper_Orientation(const QHBarModelMapper* self) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return static_cast<int>(vqhbarmodelmapper->VirtualQHBarModelMapper::orientation());
    } else
        qFatal("Error: Protected method QHBarModelMapper::orientation called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBarModelMapper_SetOrientation(QHBarModelMapper* self, int orientation) {
    if (auto* vqhbarmodelmapper = dynamic_cast<VirtualQHBarModelMapper*>(self)) {
        vqhbarmodelmapper->VirtualQHBarModelMapper::setOrientation(static_cast<Qt::Orientation>(orientation));
    } else
        qFatal("Error: Protected method QHBarModelMapper::setOrientation called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QHBarModelMapper_Sender(const QHBarModelMapper* self) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return vqhbarmodelmapper->VirtualQHBarModelMapper::sender();
    } else
        qFatal("Error: Protected method QHBarModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBarModelMapper_SenderSignalIndex(const QHBarModelMapper* self) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return vqhbarmodelmapper->VirtualQHBarModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHBarModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBarModelMapper_Receivers(const QHBarModelMapper* self, const char* signal) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return vqhbarmodelmapper->VirtualQHBarModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QHBarModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHBarModelMapper_IsSignalConnected(const QHBarModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhbarmodelmapper = const_cast<VirtualQHBarModelMapper*>(dynamic_cast<const VirtualQHBarModelMapper*>(self))) {
        return vqhbarmodelmapper->VirtualQHBarModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHBarModelMapper::isSignalConnected called without a directly constructed type");
}

void QHBarModelMapper_Delete(QHBarModelMapper* self) {
    delete self;
}
