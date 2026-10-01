#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QHXYModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHXYModelMapper_Tr(const char* s) {
    auto _ret = QHXYModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QHXYModelMapper::connect(self,
                             static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::seriesReplaced),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QHXYModelMapper_ModelReplaced(QHXYModelMapper* self) {
    self->modelReplaced();
}

void QHXYModelMapper_Connect_ModelReplaced(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self,
                             static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::modelReplaced),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QHXYModelMapper_XRowChanged(QHXYModelMapper* self) {
    self->xRowChanged();
}

void QHXYModelMapper_Connect_XRowChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self,
                             static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::xRowChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QHXYModelMapper_YRowChanged(QHXYModelMapper* self) {
    self->yRowChanged();
}

void QHXYModelMapper_Connect_YRowChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self,
                             static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::yRowChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QHXYModelMapper_FirstColumnChanged(QHXYModelMapper* self) {
    self->firstColumnChanged();
}

void QHXYModelMapper_Connect_FirstColumnChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self,
                             static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::firstColumnChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QHXYModelMapper_ColumnCountChanged(QHXYModelMapper* self) {
    self->columnCountChanged();
}

void QHXYModelMapper_Connect_ColumnCountChanged(QHXYModelMapper* self, intptr_t slot) {
    void (*slotFunc)(QHXYModelMapper*) = reinterpret_cast<void (*)(QHXYModelMapper*)>(slot);
    QHXYModelMapper::connect(self,
                             static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::columnCountChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

libqt_string QHXYModelMapper_Tr2(const char* s, const char* c) {
    auto _ret = QHXYModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHXYModelMapper_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHXYModelMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHXYModelMapper_SuperMetaObject(const QHXYModelMapper* self) {
    return (QMetaObject*)self->QHXYModelMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnMetaObject(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self)))
        vqhxymodelmapper->qhxymodelmapper_metaobject_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHXYModelMapper_SuperMetacast(QHXYModelMapper* self, const char* param1) {
    return self->QHXYModelMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnMetacast(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_metacast_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHXYModelMapper_SuperMetacall(QHXYModelMapper* self, int param1, int param2, void** param3) {
    return self->QHXYModelMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnMetacall(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_metacall_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QHXYModelMapper_Event(QHXYModelMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHXYModelMapper_SuperEvent(QHXYModelMapper* self, QEvent* event) {
    return self->QHXYModelMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnEvent(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_event_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHXYModelMapper_EventFilter(QHXYModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHXYModelMapper_SuperEventFilter(QHXYModelMapper* self, QObject* watched, QEvent* event) {
    return self->QHXYModelMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnEventFilter(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_eventfilter_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHXYModelMapper_TimerEvent(QHXYModelMapper* self, QTimerEvent* event) {
    auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self);
    if (vqhxymodelmapper) {
        vqhxymodelmapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHXYModelMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHXYModelMapper_SuperTimerEvent(QHXYModelMapper* self, QTimerEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->QHXYModelMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHXYModelMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnTimerEvent(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_timerevent_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHXYModelMapper_ChildEvent(QHXYModelMapper* self, QChildEvent* event) {
    auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self);
    if (vqhxymodelmapper) {
        vqhxymodelmapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHXYModelMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHXYModelMapper_SuperChildEvent(QHXYModelMapper* self, QChildEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->QHXYModelMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHXYModelMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnChildEvent(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_childevent_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHXYModelMapper_CustomEvent(QHXYModelMapper* self, QEvent* event) {
    auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self);
    if (vqhxymodelmapper) {
        vqhxymodelmapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHXYModelMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHXYModelMapper_SuperCustomEvent(QHXYModelMapper* self, QEvent* event) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->QHXYModelMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHXYModelMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnCustomEvent(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_customevent_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHXYModelMapper_ConnectNotify(QHXYModelMapper* self, const QMetaMethod* signal) {
    auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self);
    if (vqhxymodelmapper) {
        vqhxymodelmapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHXYModelMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHXYModelMapper_SuperConnectNotify(QHXYModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->QHXYModelMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHXYModelMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnConnectNotify(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_connectnotify_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHXYModelMapper_DisconnectNotify(QHXYModelMapper* self, const QMetaMethod* signal) {
    auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self);
    if (vqhxymodelmapper) {
        vqhxymodelmapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHXYModelMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHXYModelMapper_SuperDisconnectNotify(QHXYModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->QHXYModelMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHXYModelMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHXYModelMapper_OnDisconnectNotify(QHXYModelMapper* self, intptr_t slot) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self))
        vqhxymodelmapper->qhxymodelmapper_disconnectnotify_callback = reinterpret_cast<VirtualQHXYModelMapper::QHXYModelMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QHXYModelMapper_First(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->VirtualQHXYModelMapper::first();
    } else
        qFatal("Error: Protected method QHXYModelMapper::first called without a directly constructed type");
}

// Derived class protected handler implementation
void QHXYModelMapper_SetFirst(QHXYModelMapper* self, int first) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->VirtualQHXYModelMapper::setFirst(static_cast<int>(first));
    } else
        qFatal("Error: Protected method QHXYModelMapper::setFirst called without a directly constructed type");
}

// Derived class protected handler implementation
int QHXYModelMapper_Count(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->VirtualQHXYModelMapper::count();
    } else
        qFatal("Error: Protected method QHXYModelMapper::count called without a directly constructed type");
}

// Derived class protected handler implementation
void QHXYModelMapper_SetCount(QHXYModelMapper* self, int count) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->VirtualQHXYModelMapper::setCount(static_cast<int>(count));
    } else
        qFatal("Error: Protected method QHXYModelMapper::setCount called without a directly constructed type");
}

// Derived class protected handler implementation
int QHXYModelMapper_Orientation(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return static_cast<int>(vqhxymodelmapper->VirtualQHXYModelMapper::orientation());
    } else
        qFatal("Error: Protected method QHXYModelMapper::orientation called without a directly constructed type");
}

// Derived class protected handler implementation
void QHXYModelMapper_SetOrientation(QHXYModelMapper* self, int orientation) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->VirtualQHXYModelMapper::setOrientation(static_cast<Qt::Orientation>(orientation));
    } else
        qFatal("Error: Protected method QHXYModelMapper::setOrientation called without a directly constructed type");
}

// Derived class protected handler implementation
int QHXYModelMapper_XSection(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->VirtualQHXYModelMapper::xSection();
    } else
        qFatal("Error: Protected method QHXYModelMapper::xSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHXYModelMapper_SetXSection(QHXYModelMapper* self, int xSection) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->VirtualQHXYModelMapper::setXSection(static_cast<int>(xSection));
    } else
        qFatal("Error: Protected method QHXYModelMapper::setXSection called without a directly constructed type");
}

// Derived class protected handler implementation
int QHXYModelMapper_YSection(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->VirtualQHXYModelMapper::ySection();
    } else
        qFatal("Error: Protected method QHXYModelMapper::ySection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHXYModelMapper_SetYSection(QHXYModelMapper* self, int ySection) {
    if (auto* vqhxymodelmapper = dynamic_cast<VirtualQHXYModelMapper*>(self)) {
        vqhxymodelmapper->VirtualQHXYModelMapper::setYSection(static_cast<int>(ySection));
    } else
        qFatal("Error: Protected method QHXYModelMapper::setYSection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QHXYModelMapper_Sender(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->VirtualQHXYModelMapper::sender();
    } else
        qFatal("Error: Protected method QHXYModelMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHXYModelMapper_SenderSignalIndex(const QHXYModelMapper* self) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->VirtualQHXYModelMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHXYModelMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHXYModelMapper_Receivers(const QHXYModelMapper* self, const char* signal) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->VirtualQHXYModelMapper::receivers(signal);
    } else
        qFatal("Error: Protected method QHXYModelMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHXYModelMapper_IsSignalConnected(const QHXYModelMapper* self, const QMetaMethod* signal) {
    if (auto* vqhxymodelmapper = const_cast<VirtualQHXYModelMapper*>(dynamic_cast<const VirtualQHXYModelMapper*>(self))) {
        return vqhxymodelmapper->VirtualQHXYModelMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHXYModelMapper::isSignalConnected called without a directly constructed type");
}

void QHXYModelMapper_Delete(QHXYModelMapper* self) {
    delete self;
}
