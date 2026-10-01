#include <QAbstractItemModel>
#include <QCandlestickModelMapper>
#include <QCandlestickSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qcandlestickmodelmapper.h>
#include "libqcandlestickmodelmapper.h"
#include "libqcandlestickmodelmapper.hxx"

QCandlestickModelMapper* QCandlestickModelMapper_new() {
    return new VirtualQCandlestickModelMapper();
}

QCandlestickModelMapper* QCandlestickModelMapper_new2(QObject* parent) {
    return new VirtualQCandlestickModelMapper(parent);
}

QMetaObject* QCandlestickModelMapper_MetaObject(const QCandlestickModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCandlestickModelMapper_Metacast(QCandlestickModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCandlestickModelMapper_Metacall(QCandlestickModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCandlestickModelMapper_Tr(const char* s) {
    auto _ret = QCandlestickModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCandlestickModelMapper_SetModel(QCandlestickModelMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractItemModel* QCandlestickModelMapper_Model(const QCandlestickModelMapper* self) {
    return self->model();
}

void QCandlestickModelMapper_SetSeries(QCandlestickModelMapper* self, QCandlestickSeries* series) {
    self->setSeries(series);
}

QCandlestickSeries* QCandlestickModelMapper_Series(const QCandlestickModelMapper* self) {
    return self->series();
}

int QCandlestickModelMapper_Orientation(const QCandlestickModelMapper* self) {
    return static_cast<int>(self->orientation());
}

void QCandlestickModelMapper_ModelReplaced(QCandlestickModelMapper* self) {
    self->modelReplaced();
}

void QCandlestickModelMapper_Connect_ModelReplaced(QCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickModelMapper*) = reinterpret_cast<void (*)(QCandlestickModelMapper*)>(slot);
    QCandlestickModelMapper::connect(self,
                                     static_cast<void (QCandlestickModelMapper::*)()>(&QCandlestickModelMapper::modelReplaced),
                                     [self, slotFunc]() {
                                         slotFunc(self);
                                     });
}

void QCandlestickModelMapper_SeriesReplaced(QCandlestickModelMapper* self) {
    self->seriesReplaced();
}

void QCandlestickModelMapper_Connect_SeriesReplaced(QCandlestickModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickModelMapper*) = reinterpret_cast<void (*)(QCandlestickModelMapper*)>(slot);
    QCandlestickModelMapper::connect(self,
                                     static_cast<void (QCandlestickModelMapper::*)()>(&QCandlestickModelMapper::seriesReplaced),
                                     [self, slotFunc]() {
                                         slotFunc(self);
                                     });
}

libqt_string QCandlestickModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QCandlestickModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCandlestickModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCandlestickModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QCandlestickModelMapper_SuperMetaObject(const QCandlestickModelMapper* self) {
    return (QMetaObject*)self->QCandlestickModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnMetaObject(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self)))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_metaobject_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCandlestickModelMapper_SuperMetacast(QCandlestickModelMapper* self, const char* param1) {
    return self->QCandlestickModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnMetacast(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_metacast_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCandlestickModelMapper_SuperMetacall(QCandlestickModelMapper* self, int param1, int param2, void** param3) {
    return self->QCandlestickModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnMetacall(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_metacall_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnOrientation(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self)))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_orientation_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Orientation_Callback>(slot);
}

// Derived class handler implementation
bool QCandlestickModelMapper_Event(QCandlestickModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCandlestickModelMapper_SuperEvent(QCandlestickModelMapper* self, QEvent* event) {
    return self->QCandlestickModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnEvent(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_event_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCandlestickModelMapper_EventFilter(QCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCandlestickModelMapper_SuperEventFilter(QCandlestickModelMapper* self, QObject* watched, QEvent* event) {
    return self->QCandlestickModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnEventFilter(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_eventfilter_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickModelMapper_TimerEvent(QCandlestickModelMapper* self, QTimerEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper) {
        vqcandlestickmodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickModelMapper_SuperTimerEvent(QCandlestickModelMapper* self, QTimerEvent* event) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->QCandlestickModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnTimerEvent(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_timerevent_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickModelMapper_ChildEvent(QCandlestickModelMapper* self, QChildEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper) {
        vqcandlestickmodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickModelMapper_SuperChildEvent(QCandlestickModelMapper* self, QChildEvent* event) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->QCandlestickModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnChildEvent(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_childevent_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickModelMapper_CustomEvent(QCandlestickModelMapper* self, QEvent* event) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper) {
        vqcandlestickmodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickModelMapper_SuperCustomEvent(QCandlestickModelMapper* self, QEvent* event) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->QCandlestickModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnCustomEvent(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_customevent_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickModelMapper_ConnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper) {
        vqcandlestickmodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCandlestickModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickModelMapper_SuperConnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->QCandlestickModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCandlestickModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnConnectNotify(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_connectnotify_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickModelMapper_DisconnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal) {
    auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self);
    if (vqcandlestickmodelmapper) {
        vqcandlestickmodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCandlestickModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickModelMapper_SuperDisconnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->QCandlestickModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCandlestickModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickModelMapper_OnDisconnectNotify(QCandlestickModelMapper* self, intptr_t slot) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self))
        vqcandlestickmodelmapper->qcandlestickmodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQCandlestickModelMapper::QCandlestickModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QCandlestickModelMapper_SetTimestamp(QCandlestickModelMapper* self, int timestamp) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::setTimestamp(static_cast<int>(timestamp));
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::setTimestamp called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_Timestamp(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::timestamp();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::timestamp called without a directly constructed type");
}

// Derived class protected handler implementation
void QCandlestickModelMapper_SetOpen(QCandlestickModelMapper* self, int open) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::setOpen(static_cast<int>(open));
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::setOpen called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_Open(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::open();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::open called without a directly constructed type");
}

// Derived class protected handler implementation
void QCandlestickModelMapper_SetHigh(QCandlestickModelMapper* self, int high) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::setHigh(static_cast<int>(high));
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::setHigh called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_High(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::high();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::high called without a directly constructed type");
}

// Derived class protected handler implementation
void QCandlestickModelMapper_SetLow(QCandlestickModelMapper* self, int low) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::setLow(static_cast<int>(low));
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::setLow called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_Low(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::low();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::low called without a directly constructed type");
}

// Derived class protected handler implementation
void QCandlestickModelMapper_SetClose(QCandlestickModelMapper* self, int close) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::setClose(static_cast<int>(close));
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::setClose called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_Close(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::close();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::close called without a directly constructed type");
}

// Derived class protected handler implementation
void QCandlestickModelMapper_SetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::setFirstSetSection(static_cast<int>(firstSetSection));
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::setFirstSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_FirstSetSection(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::firstSetSection();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::firstSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QCandlestickModelMapper_SetLastSetSection(QCandlestickModelMapper* self, int lastSetSection) {
    if (auto* vqcandlestickmodelmapper = dynamic_cast<VirtualQCandlestickModelMapper*>(self)) {
        vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::setLastSetSection(static_cast<int>(lastSetSection));
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::setLastSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_LastSetSection(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::lastSetSection();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::lastSetSection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QCandlestickModelMapper_Sender(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::sender();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_SenderSignalIndex(const QCandlestickModelMapper* self) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickModelMapper_Receivers(const QCandlestickModelMapper* self, const char* signal) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCandlestickModelMapper_IsSignalConnected(const QCandlestickModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqcandlestickmodelmapper = const_cast<VirtualQCandlestickModelMapper*>(dynamic_cast<const VirtualQCandlestickModelMapper*>(self))) {
        return vqcandlestickmodelmapper->VirtualQCandlestickModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCandlestickModelMapper::isSignalConnected called without a directly constructed type");
}

void QCandlestickModelMapper_Delete(QCandlestickModelMapper* self) {
    delete self;
}
